// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ad68e0 GetRenderTarget body=8 status=ok
// SIG undefined GetRenderTarget(void)

undefined8 UWidgetComponent::GetRenderTarget(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5c8);
}



// FUNCTION 140ad68f0 FUN_140ad68f0 body=993 status=ok
// SIG undefined FUN_140ad68f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140ad68f0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *_Src;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_d8 [32];
  double local_b8;
  undefined2 *local_a8;
  uint local_a0;
  uint local_9c;
  longlong local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  undefined1 local_78 [8];
  char local_70;
  undefined1 local_6c [8];
  char local_64;
  undefined1 local_60 [8];
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar12 = *(longlong *)(param_1 + 0x30);
  puVar4 = (undefined2 *)0x0;
  lVar9 = (longlong)*(int *)(param_1 + 0x38) * 0xa8 + lVar12;
  local_a8 = (undefined2 *)0x0;
  iVar3 = 0;
  local_9c = 0;
  puVar10 = puVar4;
  puVar5 = puVar4;
  local_98 = param_1;
  local_80 = lVar9;
  if (lVar12 != lVar9) {
    do {
      uVar1 = FUN_142caac20(lVar12 + 0x70,local_60,0);
      fVar13 = (float)FUN_142cc4350(uVar1,0);
      uVar1 = FUN_142caac20(lVar12 + 0x38,local_6c,0);
      fVar14 = (float)FUN_142cc4350(uVar1,0);
      uVar1 = FUN_142caac20(lVar12,local_78,0);
      fVar15 = (float)FUN_142cc4350(uVar1,0);
      local_b8 = (double)fVar13;
      FString::PrintfImpl(&local_90,L"%.2f %.2f %.2f",(double)fVar15,(double)fVar14);
      lVar6 = -1;
      _Src = &DAT_143f3eda8;
      if (local_88 != 0) {
        _Src = local_90;
      }
      do {
        lVar6 = lVar6 + 1;
      } while (_Src[lVar6] != 0);
      iVar3 = (int)lVar6;
      if (iVar3 != 0) {
        iVar11 = (int)puVar4;
        local_a0 = iVar11 + (uint)(iVar11 == 0) + iVar3;
        if ((int)puVar5 < (int)local_a0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,puVar4);
          puVar5 = (undefined2 *)(ulonglong)local_9c;
          puVar10 = local_a8;
        }
        puVar4 = (undefined2 *)(ulonglong)local_a0;
        _guard_xfg_dispatch_icall_nop
                  (puVar10 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)),_Src,(longlong)iVar3 * 2)
        ;
        (puVar10 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)))[iVar3] = 0;
        lVar9 = local_80;
      }
      iVar3 = (int)puVar5;
      if (local_90 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      switch(local_70) {
      case '\0':
        if (local_70 == '\0') {
          local_70 = -1;
        }
        break;
      case '\x01':
        if (local_70 == '\x01') {
          local_70 = -1;
        }
        break;
      case '\x02':
        if (local_70 == '\x02') {
          local_70 = -1;
        }
        break;
      case '\x03':
      case '\x04':
        if (local_70 == '\x03') {
          local_70 = -1;
        }
        break;
      case '\x05':
        if (local_70 == '\x03') {
          local_70 = -1;
        }
      }
      switch(local_64) {
      case '\0':
        if (local_64 == '\0') {
          local_64 = -1;
        }
        break;
      case '\x01':
        if (local_64 == '\x01') {
          local_64 = -1;
        }
        break;
      case '\x02':
        if (local_64 == '\x02') {
          local_64 = -1;
        }
        break;
      case '\x03':
      case '\x04':
        if (local_64 == '\x03') {
          local_64 = -1;
        }
        break;
      case '\x05':
        if (local_64 == '\x03') {
          local_64 = -1;
        }
      }
      switch(local_58) {
      case '\0':
        if (local_58 == '\0') {
          local_58 = -1;
        }
        break;
      case '\x01':
        if (local_58 == '\x01') {
          local_58 = -1;
        }
        break;
      case '\x02':
        if (local_58 == '\x02') {
          local_58 = -1;
        }
        break;
      case '\x03':
      case '\x04':
        if (local_58 == '\x03') {
          local_58 = -1;
        }
        break;
      case '\x05':
        if (local_58 == '\x03') {
          local_58 = -1;
        }
      }
      lVar12 = lVar12 + 0xa8;
    } while (lVar12 != lVar9);
  }
  uVar7 = (uint)puVar4;
  local_98 = *(longlong *)(local_98 + 0x18);
  FName::ToString(&local_98,&local_90);
  puVar5 = local_90;
  if (local_88 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = local_88 + -1;
  }
  uVar8 = uVar7;
  if (iVar11 != 0) {
    local_a0 = uVar7 + (uVar7 == 0) + iVar11;
    if (iVar3 < (int)local_a0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,puVar4);
      puVar10 = local_a8;
    }
    uVar8 = local_a0;
    _guard_xfg_dispatch_icall_nop
              (puVar10 + ((longlong)(int)uVar7 - (ulonglong)(uVar7 != 0)),puVar5,
               (longlong)iVar11 * 2);
    (puVar10 + ((longlong)(int)uVar7 - (ulonglong)(uVar7 != 0)))[iVar11] = 0;
  }
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free(local_90);
  }
  puVar5 = &DAT_143f3eda8;
  if (uVar8 != 0) {
    puVar5 = puVar10;
  }
  uVar2 = FUN_140438070(puVar5);
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 140ad6d20 FUN_140ad6d20 body=131 status=ok
// SIG undefined FUN_140ad6d20(void)

undefined8 * FUN_140ad6d20(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_14131fc50();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)param_2 = *(undefined4 *)(param_3 + 0xc28);
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 1) = 0xff;
  return param_2;
}



// FUNCTION 140ad6db0 FUN_140ad6db0 body=319 status=ok
// SIG undefined FUN_140ad6db0(void)

void FUN_140ad6db0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar4 = FUN_14233f450();
  if ((iVar4 == 3) && (cVar3 = FUN_142d52a00(param_1 + 0x7a), cVar3 != '\0')) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x10e5) = 4;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    lVar6 = param_1[0x23];
    if (lVar6 != 0) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 599,0)
        ;
        plVar1 = *(longlong **)(lVar6 + 0x490);
        if (plVar1 != (longlong *)0x0) {
          lVar6 = FUN_1429e18b0();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar3 != '\0')) {
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x255,0);
          }
        }
      }
    }
    uVar7 = FUN_142d52a20(param_1 + 0x7a);
    lVar6 = FArchive::operator<<(uVar7);
    FUN_14246fd50(lVar6 + 0x34,(int)param_1[0x7d]);
  }
  return;
}



// FUNCTION 140ad6ef0 FUN_140ad6ef0 body=319 status=ok
// SIG undefined FUN_140ad6ef0(void)

void FUN_140ad6ef0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar4 = FUN_14233f450();
  if ((iVar4 == 3) && (cVar3 = FUN_142d52a00(param_1 + 0x7a), cVar3 != '\0')) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x10e5) = 1;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    lVar6 = param_1[0x23];
    if (lVar6 != 0) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x25b,0);
        plVar1 = *(longlong **)(lVar6 + 0x490);
        if (plVar1 != (longlong *)0x0) {
          lVar6 = FUN_1429e18b0();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar3 != '\0')) {
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x259,0);
          }
        }
      }
    }
    uVar7 = FUN_142d52a20(param_1 + 0x7a);
    lVar6 = FArchive::operator<<(uVar7);
    FUN_14246fd50(lVar6 + 0x34,(int)param_1[0x261]);
  }
  return;
}



// FUNCTION 140ad7030 FUN_140ad7030 body=419 status=ok
// SIG undefined FUN_140ad7030(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140ad7030(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8 [2];
  
  uVar7 = 0;
  if (param_2 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140ad7081;
  }
  param_2 = uVar7;
LAB_140ad7081:
  if (0 < *(int *)(param_1 + 0x640)) {
    plVar1 = (longlong *)(param_1 + 0x638);
    uVar8 = uVar7;
    do {
      local_res8[0] = param_2;
      if (*(char *)(param_1 + 0x128) == '\x03') {
        iVar6 = *(int *)(param_1 + 0x618);
        local_res8[1] = 0;
        TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x610,local_res8 + 1);
        if ((param_2 != 0) &&
           (iVar3 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x610,local_res8), iVar3 != 0)
           ) {
          FUN_1412d9a30(param_1,local_res8[0]);
        }
        iVar3 = *(int *)(param_1 + 0x618);
        *(bool *)(param_1 + 0x608) = 0 < iVar3;
        if (iVar6 < 1) {
          if (0 < iVar3) {
            FUN_1412d97f0(param_1);
          }
        }
        else if (iVar3 < 1) {
          FUN_1412d9870(param_1);
        }
      }
      lVar4 = *(longlong *)(uVar8 + *plVar1);
      iVar6 = (int)uVar7;
      if ((lVar4 != 0) && (*(ulonglong *)(lVar4 + 0x4d8) == param_2)) {
        FUN_142227350(*(undefined8 *)((longlong)iVar6 * 8 + *plVar1),0,1);
        iVar3 = *(int *)(param_1 + 0x640);
        iVar5 = (iVar3 - iVar6) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar6 * 8),
                     (void *)(*plVar1 + (longlong)(iVar6 + 1) * 8),(longlong)iVar5 << 3);
          iVar3 = *(int *)(param_1 + 0x640);
        }
        *(int *)(param_1 + 0x640) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        return;
      }
      uVar7 = (ulonglong)(iVar6 + 1U);
      uVar8 = uVar8 + 8;
    } while ((int)(iVar6 + 1U) < *(int *)(param_1 + 0x640));
  }
  return;
}



// FUNCTION 140ad71e0 FUN_140ad71e0 body=152 status=ok
// SIG undefined FUN_140ad71e0(void)

void FUN_140ad71e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar1 = (longlong *)FDateTime::UtcNow(local_res8);
  plVar2 = (longlong *)FDateTime::FDateTime(local_res10,0x7b2,1,1,0,0,0,0);
  lVar3 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*plVar1 - *plVar2),8) + (*plVar1 - *plVar2);
  lVar4 = (lVar3 >> 0x17) - (lVar3 >> 0x3f);
  lVar3 = 0;
  if (lVar4 <= *(longlong *)(param_1 + 0xc18)) {
    lVar3 = *(longlong *)(param_1 + 0xc18) - lVar4;
  }
  *(longlong *)(param_1 + 0xc20) = lVar3;
  return;
}



// FUNCTION 140ad7280 FUN_140ad7280 body=51 status=ok
// SIG undefined FUN_140ad7280(void)

void FUN_140ad7280(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc20) != 0) {
    FUN_140ace6b0(param_1,(float)*(longlong *)(param_1 + 0xc20));
    *(undefined8 *)(param_1 + 0xc20) = 0;
  }
  return;
}



// FUNCTION 140ad72c0 FUN_140ad72c0 body=2808 status=ok
// SIG undefined FUN_140ad72c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ad72c0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_508 [32];
  longlong **local_4e8;
  undefined4 local_4d8;
  undefined4 local_4d4;
  longlong *local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined8 local_4b8;
  longlong *local_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  longlong *local_490;
  undefined8 local_488;
  longlong local_480;
  undefined8 local_478;
  longlong *local_470;
  undefined8 local_468;
  longlong local_460;
  undefined8 local_458;
  longlong *local_450;
  undefined8 local_448;
  longlong local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined1 local_420 [8];
  longlong *local_418;
  undefined1 local_408 [8];
  longlong *local_400;
  undefined1 *local_3e8 [2];
  longlong local_3d8 [4];
  longlong *local_3b8;
  int local_3a8;
  undefined1 *local_398 [2];
  longlong local_388 [4];
  longlong *local_368;
  int local_358;
  undefined1 *local_348 [2];
  longlong local_338 [4];
  longlong *local_318;
  int local_308;
  undefined1 *local_2f8 [2];
  longlong local_2e8 [4];
  longlong *local_2c8;
  int local_2b8;
  undefined1 *local_2a8 [2];
  longlong local_298 [4];
  longlong *local_278;
  int local_268;
  undefined1 *local_258 [2];
  longlong local_248 [4];
  longlong *local_228;
  int local_218;
  undefined1 local_208 [16];
  longlong local_1f8 [4];
  longlong *local_1d8;
  int local_1c8;
  undefined1 local_1b8 [16];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  undefined1 local_168 [16];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  undefined1 local_118 [16];
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  undefined1 local_c8 [16];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  local_4b8 = 0xb;
  local_4c0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c0,0);
  FGenericPlatformString::Memcpy(local_4c0,L"comboLabel",0x16);
  local_4e8 = &local_4d0;
  local_4d0 = (longlong *)0x0;
  local_4c8 = 0;
  local_430 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_4c0,0,6);
  *(undefined8 *)(param_1 + 0xf10) = uVar3;
  plVar5 = local_4d0;
  for (iVar7 = (int)local_4c8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_4d0 != (longlong *)0x0) {
    FMemory::Free(local_4d0);
  }
  if (local_4c0 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0xf10) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0xf10);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_420,L"COMBO",L"GFxSirenSkillScreenTree",L"ComboLabel");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0xf10),uVar3,1,0);
    if (local_418 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_418 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_418)(local_418);
        LOCK();
        piVar1 = (int *)((longlong)local_418 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_418 + 8))(local_418,1);
        }
      }
    }
  }
  local_4a0 = 0;
  local_498 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a0,0);
  FGenericPlatformString::Memcpy(local_4a0,L"passivesField",0x1c);
  local_4e8 = &local_4b0;
  local_4b0 = (longlong *)0x0;
  local_4a8 = 0;
  local_428 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_4a0,0,6);
  *(undefined8 *)(param_1 + 0xf18) = uVar3;
  plVar5 = local_4b0;
  for (iVar7 = (int)local_4a8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_4b0 != (longlong *)0x0) {
    FMemory::Free(local_4b0);
  }
  if (local_4a0 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0xf18) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0xf18);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_408,L"PASSIVES",L"GFxSirenSkillScreenTree",L"PassivesText");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0xf18),uVar3,1,0);
    if (local_400 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_400 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_400)(local_400);
        LOCK();
        piVar1 = (int *)((longlong)local_400 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_400 + 8))(local_400,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xa00) != 0) {
    local_480 = 0;
    local_478 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_480,0);
    FGenericPlatformString::Memcpy(local_480,L"loadout.skill1",0x1e);
    local_4e8 = &local_490;
    local_490 = (longlong *)0x0;
    local_488 = 0;
    uVar3 = FUN_140ac43d0(*(undefined8 *)(param_1 + 0xa00),&local_480,0,6);
    *(undefined8 *)(param_1 + 0xf20) = uVar3;
    plVar5 = local_490;
    for (iVar7 = (int)local_488; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_490 != (longlong *)0x0) {
      FMemory::Free(local_490);
    }
    if (local_480 != 0) {
      FMemory::Free();
    }
    local_460 = 0;
    local_458 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_460,0);
    FGenericPlatformString::Memcpy(local_460,L"loadout.comboMod1",0x24);
    local_4e8 = &local_470;
    local_470 = (longlong *)0x0;
    local_468 = 0;
    uVar3 = FUN_140ac43d0(*(undefined8 *)(param_1 + 0xa00),&local_460,0,6);
    *(undefined8 *)(param_1 + 0xf28) = uVar3;
    plVar5 = local_470;
    for (iVar7 = (int)local_468; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_470 != (longlong *)0x0) {
      FMemory::Free(local_470);
    }
    if (local_460 != 0) {
      FMemory::Free();
    }
    local_440 = 0;
    local_438 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_440,0);
    FGenericPlatformString::Memcpy(local_440,L"loadout.elementalEffect",0x30);
    local_4e8 = &local_450;
    local_450 = (longlong *)0x0;
    local_448 = 0;
    uVar3 = FUN_140ac43d0(*(undefined8 *)(param_1 + 0xa00),&local_440,0,6);
    *(undefined8 *)(param_1 + 0xf30) = uVar3;
    plVar5 = local_450;
    for (iVar7 = (int)local_448; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_450 != (longlong *)0x0) {
      FMemory::Free(local_450);
    }
    if (local_440 != 0) {
      FMemory::Free();
    }
  }
  plVar5 = (longlong *)(param_1 + 0xc30);
  *(undefined4 *)(param_1 + 0xc38) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc3c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5,0);
  }
  if (*(longlong *)(param_1 + 0xf20) != 0) {
    local_3b8 = (longlong *)0x0;
    local_3a8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_3d8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_3e8[0] = &LAB_140ace950;
    uVar3 = FUN_1420849a0(param_1,local_208,local_3e8);
    FUN_14208c260(param_1,uVar3);
    if (local_1c8 != 0) {
      plVar6 = local_1f8;
      if (local_1d8 != (longlong *)0x0) {
        plVar6 = local_1d8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_3a8 != 0) {
      plVar6 = local_3d8;
      if (local_3b8 != (longlong *)0x0) {
        plVar6 = local_3b8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_3b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_4d8 = 0xffffffff;
    uVar8 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf20) != 0) {
      FUN_14170c210(&local_4d8);
      uVar8 = local_4d8;
    }
    local_4d8 = 0xffffffff;
    local_368 = (longlong *)0x0;
    local_358 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_388);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_144266c70;
      puVar4[1] = param_1;
      *(undefined4 *)(puVar4 + 2) = uVar8;
      uVar8 = 0xffffffff;
    }
    local_398[0] = &LAB_140ace910;
    uVar3 = FUN_1420849a0(param_1,local_1b8,local_398);
    FUN_14208c940(param_1,uVar3);
    if (local_178 != 0) {
      plVar6 = local_1a8;
      if (local_188 != (longlong *)0x0) {
        plVar6 = local_188;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_358 != 0) {
      plVar6 = local_388;
      if (local_368 != (longlong *)0x0) {
        plVar6 = local_368;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_368 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar8);
    FUN_1416f8340(local_4d8);
    iVar7 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar7 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar7);
    }
    *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8) = *(undefined8 *)(param_1 + 0xf20);
  }
  if (*(longlong *)(param_1 + 0xf28) != 0) {
    local_318 = (longlong *)0x0;
    local_308 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_338);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_348[0] = &LAB_140acea30;
    uVar3 = FUN_1420849a0(param_1,local_168,local_348);
    FUN_14208c260(param_1,uVar3);
    if (local_128 != 0) {
      plVar6 = local_158;
      if (local_138 != (longlong *)0x0) {
        plVar6 = local_138;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_308 != 0) {
      plVar6 = local_338;
      if (local_318 != (longlong *)0x0) {
        plVar6 = local_318;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_318 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_4d4 = 0xffffffff;
    uVar8 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf28) != 0) {
      FUN_14170c210(&local_4d4);
      uVar8 = local_4d4;
    }
    local_4d4 = 0xffffffff;
    local_2c8 = (longlong *)0x0;
    local_2b8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_2e8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_144266c70;
      puVar4[1] = param_1;
      *(undefined4 *)(puVar4 + 2) = uVar8;
      uVar8 = 0xffffffff;
    }
    local_2f8[0] = &LAB_140ace960;
    uVar3 = FUN_1420849a0(param_1,local_118,local_2f8);
    FUN_14208c940(param_1,uVar3);
    if (local_d8 != 0) {
      plVar6 = local_108;
      if (local_e8 != (longlong *)0x0) {
        plVar6 = local_e8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_2b8 != 0) {
      plVar6 = local_2e8;
      if (local_2c8 != (longlong *)0x0) {
        plVar6 = local_2c8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_2c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar8);
    FUN_1416f8340(local_4d4);
    iVar7 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar7 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar7);
    }
    *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8) = *(undefined8 *)(param_1 + 0xf28);
  }
  if (*(longlong *)(param_1 + 0xf30) != 0) {
    local_278 = (longlong *)0x0;
    local_268 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_298);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_2a8[0] = &LAB_140acea40;
    uVar3 = FUN_1420849a0(param_1,local_c8,local_2a8);
    FUN_14208c260(param_1,uVar3);
    if (local_88 != 0) {
      plVar6 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar6 = local_98;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_268 != 0) {
      plVar6 = local_298;
      if (local_278 != (longlong *)0x0) {
        plVar6 = local_278;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_278 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_228 = (longlong *)0x0;
    local_218 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_248);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_258[0] = &LAB_140ace900;
    uVar3 = FUN_1420849a0(param_1,local_78,local_258);
    FUN_14208c940(param_1,uVar3);
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
    if (local_218 != 0) {
      plVar6 = local_248;
      if (local_228 != (longlong *)0x0) {
        plVar6 = local_228;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_228 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar7 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar7 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar7);
    }
    *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8) = *(undefined8 *)(param_1 + 0xf30);
  }
  FUN_14103b390(param_1);
  return;
}



// FUNCTION 140ad7dc0 FUN_140ad7dc0 body=246 status=ok
// SIG undefined FUN_140ad7dc0(void)

void FUN_140ad7dc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  plVar5 = *(longlong **)(param_1 + 0x638);
  uVar6 = (longlong)*(int *)(param_1 + 0x640) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x640) < plVar5) {
    uVar6 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar6 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x94) & 2) == 0)) {
        uVar2 = *(uint *)((longlong)plVar1 + 0xc);
        uVar3 = uVar8;
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar4 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar4 = uVar4 - 0x10000;
          }
          uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar4 * 0x18;
        }
        if ((*(uint *)(uVar3 + 8) >> 0x1d & 1) == 0) {
          if (plVar1[0x9b] == param_2) {
            (**(code **)(*plVar1 + 0x310))(plVar1,1);
          }
          else {
            (**(code **)(*plVar1 + 0x708))(plVar1);
          }
        }
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  return;
}



// FUNCTION 140ad7ec0 FUN_140ad7ec0 body=549 status=ok
// SIG undefined FUN_140ad7ec0(void)

void FUN_140ad7ec0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_348;
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8 [40];
  undefined1 local_2d0 [40];
  undefined1 local_2a8 [40];
  undefined1 local_280 [40];
  undefined1 local_258 [40];
  undefined1 local_230 [40];
  undefined1 local_208 [40];
  undefined1 local_1e0 [40];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined1 local_170 [40];
  undefined1 local_148 [40];
  undefined1 local_120 [40];
  undefined1 local_f8 [40];
  undefined1 local_d0 [40];
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  lVar4 = 0;
  lVar5 = lVar4;
  if (param_2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = param_2;
      lVar5 = *(longlong *)(param_2 + 0xc70);
    }
  }
  if ((lVar4 != 0) && (lVar5 != 0)) {
    cVar2 = FUN_140e85920(lVar5,param_1);
    if (cVar2 == '\0') {
      FUN_140ac6910(local_1a8);
      FUN_140e7f5c0(lVar5,local_1a8,param_1);
      cVar2 = FUN_1410cf870(local_1a8);
      if (cVar2 != '\0') {
        FString::FString(local_330,local_1a8);
        local_308 = 0;
        local_310 = 0;
        local_320 = local_198;
        local_31c = local_194;
        local_318 = local_190;
        local_348 = local_188;
        local_300 = 0;
        FString::FString(local_340,local_180);
        FSoftObjectPath::operator=(&local_310,&local_348);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_2f8,local_170);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_2d0,local_148);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_2a8,local_120);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_280,local_f8);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_258,local_d0);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_230,local_a8);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_208,local_80);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_1e0,local_58);
        local_1b8 = local_30;
        local_1b4 = local_2c;
        local_1b0 = local_28;
        FUN_140d16280(lVar4,0,local_330,param_1);
      }
      FUN_140ac7ce0(local_1a8);
    }
    else {
      FUN_140e92330(lVar5,param_1);
    }
  }
  return;
}



// FUNCTION 140ad80f0 FUN_140ad80f0 body=96 status=ok
// SIG undefined FUN_140ad80f0(void)

ulonglong FUN_140ad80f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *in_RAX;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (lVar1 != 0) {
    in_RAX = (longlong *)0x0;
    if ((*(longlong *)(lVar1 + 0x558) != 0) &&
       (lVar1 = *(longlong *)(lVar1 + 0x550), in_RAX = (longlong *)0x0, lVar1 != 0)) {
      plVar2 = *(longlong **)(lVar1 + 0x30);
      plVar4 = plVar2 + (longlong)*(int *)(lVar1 + 0x38) * 0x13;
      for (; (plVar3 = (longlong *)0x0, plVar2 != plVar4 && (plVar3 = plVar2, *plVar2 != param_2));
          plVar2 = plVar2 + 0x13) {
      }
      return CONCAT71((int7)((ulonglong)plVar3 >> 8),plVar3 != (longlong *)0x0);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140ad8150 FUN_140ad8150 body=12 status=ok
// SIG undefined FUN_140ad8150(void)

void FUN_140ad8150(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140ad8155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,1);
  return;
}



// FUNCTION 140ad8160 FUN_140ad8160 body=32 status=ok
// SIG undefined FUN_140ad8160(void)

void FUN_140ad8160(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FUN_142dafbc0(*(longlong *)(param_1 + 0x4d8) + 0xd58,&DAT_146868130);
    return;
  }
  return;
}



// FUNCTION 140ad8180 FUN_140ad8180 body=293 status=ok
// SIG undefined FUN_140ad8180(void)

void FUN_140ad8180(longlong param_1)

{
  void *_Src;
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x630)) {
    local_20 = *(int *)(param_1 + 0x630);
    lVar4 = (longlong)local_20;
    _Src = *(void **)(param_1 + 0x628);
    local_28 = (longlong *)0x0;
    plVar6 = plVar1;
    if (local_20 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
      plVar6 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar4 << 3);
    }
    plVar2 = (longlong *)((ulonglong)((longlong)(plVar6 + local_20) + (7 - (longlong)plVar6)) >> 3);
    if (plVar6 + local_20 < plVar6) {
      plVar2 = plVar1;
    }
    plVar3 = plVar6;
    plVar5 = plVar1;
    if (plVar2 != (longlong *)0x0) {
      do {
        if (*plVar3 != 0) {
          FUN_140cf0ef0();
        }
        plVar3 = plVar3 + 1;
        plVar5 = (longlong *)((longlong)plVar5 + 1);
      } while (plVar5 != plVar2);
    }
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x638);
  plVar2 = (longlong *)((longlong)*(int *)(param_1 + 0x640) & 0x1fffffffffffffff);
  if (plVar6 + *(int *)(param_1 + 0x640) < plVar6) {
    plVar2 = plVar1;
  }
  if (plVar2 != (longlong *)0x0) {
    do {
      plVar3 = (longlong *)*plVar6;
      if ((plVar3 != (longlong *)0x0) && (plVar3[0x96] != 0)) {
        (**(code **)(*plVar3 + 0x730))();
      }
      plVar6 = plVar6 + 1;
      plVar1 = (longlong *)((longlong)plVar1 + 1);
    } while (plVar1 != plVar2);
  }
  return;
}



// FUNCTION 140ad82b0 FUN_140ad82b0 body=152 status=ok
// SIG undefined FUN_140ad82b0(void)

void FUN_140ad82b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    lVar2 = FUN_141329d80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ad82fd;
  }
  param_2 = 0;
LAB_140ad82fd:
  *(longlong *)(param_1 + 0x710) = param_2;
  if (param_2 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
    FUN_1410ec340(*(undefined8 *)(param_1 + 0x710),&local_18);
  }
  return;
}



// FUNCTION 140ad8350 FUN_140ad8350 body=301 status=ok
// SIG undefined FUN_140ad8350(void)

void FUN_140ad8350(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_18;
  int local_10;
  
  FUN_140c179d0();
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_142e0d0b0();
  lVar4 = FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
  param_1[0xc9] = lVar4;
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    UWorld::GetPlayerControllerIterator(lVar4,&local_18);
    while( true ) {
      if ((local_10 < 0) || ((int)local_18[1] <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar4 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x498), lVar4 == 0)) {
LAB_140ad844d:
        lVar4 = 0;
      }
      else {
        lVar5 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140ad844d;
      }
      FUN_140acf4d0(param_1,lVar4);
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140ad8480 FUN_140ad8480 body=137 status=ok
// SIG undefined FUN_140ad8480(void)

void FUN_140ad8480(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140e83f10();
  lVar4 = *(longlong *)(param_1 + 0x4b8);
  if (lVar4 != 0) {
    lVar3 = FUN_14131fc50();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ad84d6;
  }
  lVar4 = 0;
LAB_140ad84d6:
  *(longlong *)(param_1 + 0x600) = lVar4;
  if (lVar4 != 0) {
    cVar2 = ASBZPlayerState::IsMaskOnAnimated(lVar4);
    *(char *)(lVar4 + 0xc38) = cVar2;
    if (cVar2 != '\x01') {
      FUN_140cd09a0(lVar4,1);
    }
  }
  return;
}



// FUNCTION 140ad8510 FUN_140ad8510 body=25 status=ok
// SIG undefined FUN_140ad8510(void)

void FUN_140ad8510(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140abb430(*(undefined8 *)(param_2 + 0x4d8));
    return;
  }
  return;
}



// FUNCTION 140ad8530 FUN_140ad8530 body=629 status=ok
// SIG undefined FUN_140ad8530(void)

void FUN_140ad8530(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) & 0x400) == 0)) && (param_1[0xc0] != 0)) &&
     (param_2 != 0)) {
    param_1[0xc1] = param_2;
    *(longlong *)(param_1[0xc0] + 0xbb0) = param_2;
    if (*(longlong *)(param_1[0xc1] + 400) != 0) {
      lVar3 = FUN_1407c74b0(lVar2);
      if (lVar3 != 0) {
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_1441c0108;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          plVar4[2] = (longlong)&LAB_140adcd60;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar4[4] = lVar3;
          *plVar4 = (longlong)&PTR_FUN_1441c0150;
        }
        lVar3 = 0;
        if (plVar4 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_14625a708,1);
          plVar5 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
          iVar1 = DAT_14625a710;
          lVar8 = (longlong)DAT_14625a710;
          lVar3 = *plVar5;
          DAT_14625a710 = DAT_14625a710 + 1;
          if (DAT_14625a714 < DAT_14625a710) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_14625a708,iVar1);
          }
          puVar6 = (undefined8 *)(lVar8 * 0x10 + DAT_14625a708);
          *puVar6 = plVar4;
          *(undefined4 *)(puVar6 + 1) = 3;
        }
        param_1[0xd6] = lVar3;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_1441c0108;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          plVar4[2] = (longlong)&LAB_140adcd60;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar4[4] = lVar3;
          *plVar4 = (longlong)&PTR_FUN_1441c0150;
        }
        lVar3 = 0;
        if (plVar4 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_14625a6f0,1);
          plVar5 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
          iVar1 = DAT_14625a6f8;
          lVar8 = (longlong)DAT_14625a6f8;
          lVar3 = *plVar5;
          DAT_14625a6f8 = DAT_14625a6f8 + 1;
          if (DAT_14625a6fc < DAT_14625a6f8) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_14625a6f0,iVar1);
          }
          puVar6 = (undefined8 *)(lVar8 * 0x10 + DAT_14625a6f0);
          *puVar6 = plVar4;
          *(undefined4 *)(puVar6 + 1) = 3;
        }
        param_1[0xd7] = lVar3;
      }
    }
    if (*(longlong *)(param_1[0xc1] + 0x198) != 0) {
      UWorld::GetPlayerControllerIterator(lVar2,&local_28);
      for (; (-1 < local_20 && (local_20 < (int)local_28[1])); local_20 = local_20 + 1) {
        lVar2 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
        if (lVar2 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar2 + 0x498);
        }
        FUN_140aca930(param_1,uVar7);
      }
    }
    FUN_140ad87b0(param_1);
  }
  return;
}



// FUNCTION 140ad87b0 FUN_140ad87b0 body=1648 status=ok
// SIG undefined FUN_140ad87b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ad87b0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  ulonglong local_f8;
  float local_f0;
  ulonglong local_e8;
  uint local_e0;
  uint local_dc;
  ulonglong local_d8;
  float local_d0;
  undefined1 local_c8 [12];
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong local_88;
  char local_74;
  longlong local_68;
  longlong local_60;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (((((lVar4 != 0) && ((*(uint *)(lVar4 + 0x830) & 0x400) == 0)) && (param_1[0xc0] != 0)) &&
      ((lVar4 = param_1[0xc1], lVar4 != 0 && (*(int *)(lVar4 + 0x38) != 0)))) &&
     ((*(longlong *)(lVar4 + 0x78) != 0 && (*(longlong *)(lVar4 + 0x80) != 0)))) {
    uVar8 = 0;
    iVar11 = 0;
    local_e8 = 0;
    local_dc = 0;
    uVar5 = ARemnantMiniMapDisplayActor::GetPrivateStaticClass();
    local_a8 = (**(code **)(*param_1 + 0x148))(param_1);
    local_f8 = uVar8;
    if (uVar5 != 0) {
      uVar6 = ARemnantMiniMapDisplayActor::GetPrivateStaticClass();
      uVar10 = uVar5;
      do {
        local_f8 = uVar5;
        if (uVar10 == uVar6) break;
        uVar10 = *(ulonglong *)(uVar10 + 0x30);
        local_f8 = uVar8;
      } while (uVar10 != 0);
    }
    local_98[0] = 5;
    local_40 = '\0';
    FUN_14044bc80(&local_90,&local_a8,&local_f8);
    FUN_14045a130(local_98);
    uVar5 = uVar8;
    uVar10 = uVar8;
    lVar4 = local_68;
    while (local_74 == '\0') {
      local_68 = lVar4;
      if (*(char *)(lVar4 + 0x458) == '\0') {
        iVar11 = (int)uVar8;
        local_e0 = iVar11 + 1;
        if ((int)uVar5 < (int)local_e0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,uVar8);
          uVar5 = (ulonglong)local_dc;
          uVar10 = local_e8;
        }
        uVar8 = (ulonglong)local_e0;
        *(longlong *)(uVar10 + (longlong)iVar11 * 8) = lVar4;
      }
      iVar11 = (int)uVar8;
      FUN_14045a130(local_98);
      lVar4 = local_68;
    }
    if (local_40 != '\0') {
      local_40 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
    if (iVar11 != 0) {
      UStaticMesh::GetBounds(*(undefined8 *)(param_1[0xc1] + 0x78),local_c8);
      iVar2 = _finite((double)local_bc);
      if (((iVar2 != 0) && (iVar2 = _finite((double)local_b8), iVar2 != 0)) &&
         (iVar2 = _finite((double)local_b4), iVar2 != 0)) {
        *(undefined1 *)(param_1[0xc0] + 0xbd0) = 0;
        if (iVar11 + -1 < 1) {
          iVar2 = 0;
        }
        else {
          iVar2 = rand();
          iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)(iVar11 + -1));
          iVar2 = iVar11 + -2;
          if (iVar3 <= iVar11 + -2) {
            iVar2 = iVar3;
          }
        }
        *(undefined8 *)(param_1[0xc0] + 0xbd8) = *(undefined8 *)(uVar10 + (longlong)iVar2 * 8);
        FUN_140ae33d0(param_1,*(undefined8 *)(uVar10 + (longlong)iVar2 * 8));
        FUN_140ad3fb0(param_1[0xc0],&local_d8);
        uVar7 = FUN_142caac20(*(undefined8 *)(param_1[0xc1] + 0x30),&local_a8,param_1);
        uVar12 = FUN_142cc4350(uVar7,0);
        *(undefined4 *)(param_1 + 200) = uVar12;
        uVar7 = FUN_142caac20(param_1[0xc1] + 0x40,&local_a8,param_1);
        uVar12 = FUN_142cc4350(uVar7,0);
        *(undefined4 *)(param_1 + 0xc6) = uVar12;
        uVar7 = FUN_142caac20(param_1[0xc1] + 0xa0,&local_a8,param_1);
        uVar12 = FUN_142cc4350(uVar7,0);
        *(undefined4 *)((longlong)param_1 + 0x634) = uVar12;
        uVar7 = FUN_142caac20(param_1[0xc1] + 0xe8,&local_a8,param_1);
        uVar12 = FUN_142cc4350(uVar7,0);
        plVar1 = (longlong *)param_1[0xc2];
        *(undefined4 *)(param_1 + 199) = uVar12;
        local_a0 = (*(float *)(param_1 + 0xc6) + *(float *)(param_1 + 0xc6)) / local_b4;
        local_a8 = CONCAT44(*(float *)(param_1 + 200) / local_b8,
                            *(float *)(param_1 + 200) / local_bc);
        if (plVar1 == (longlong *)0x0) {
          local_f8 = 0;
          local_f0 = 0.0;
          uVar8 = FActorSpawnParameters::FActorSpawnParameters(local_98);
          uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          uVar9 = FUN_1428dfc70();
          local_128 = uVar8;
          lVar4 = UWorld::SpawnActor(uVar7,uVar9,&local_d8,&local_f8);
          param_1[0xc2] = lVar4;
          FUN_14223d380(lVar4,1);
          FUN_14223ef90(param_1[0xc2],1);
          *(longlong *)(param_1[0xc0] + 0xbc8) = param_1[0xc2];
        }
        else {
          (**(code **)(*plVar1 + 0x310))(plVar1,0);
        }
        if (param_1[0xc3] == 0) {
          lVar4 = param_1[0xc2];
          FUN_1417846f0(lVar4,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          local_f8 = 0;
          uVar7 = FUN_142a232e0();
          local_108 = 0;
          local_110 = 0;
          local_118 = 0;
          local_120 = 0;
          local_128 = local_128 & 0xffffffff00000000;
          lVar4 = FUN_1417985e0(uVar7,lVar4,0,0);
          param_1[0xc3] = lVar4;
          FUN_142398ec0(lVar4,1);
          (**(code **)(*(longlong *)param_1[0xc3] + 0x638))((longlong *)param_1[0xc3],0);
          (**(code **)(*(longlong *)param_1[0xc3] + 0x928))
                    ((longlong *)param_1[0xc3],*(undefined8 *)(param_1[0xc1] + 0x78));
          (**(code **)(*(longlong *)param_1[0xc3] + 0x568))
                    ((longlong *)param_1[0xc3],0,*(undefined8 *)(param_1[0xc1] + 0x80));
          local_f8 = local_a8;
          local_f0 = local_a0;
          FUN_142399c30(param_1[0xc3],&local_f8);
          local_128 = local_128 & 0xffffffffffffff00;
          *(byte *)(param_1[0xc3] + 0x2ee) = *(byte *)(param_1[0xc3] + 0x2ee) | 1;
          local_a8 = local_d8;
          local_a0 = local_d0;
          FUN_1423990b0(param_1[0xc3],&local_a8,0,0);
          FUN_142350b20(param_1[0xc3],1);
          FUN_14234b150(param_1[0xc3]);
          FUN_14223f010(param_1[0xc2],param_1[0xc3]);
        }
        else {
          local_f8 = local_a8;
          local_f0 = local_a0;
          FUN_142399c30(param_1[0xc3],&local_f8);
          FUN_1423424e0(param_1[0xc3]);
        }
        if (*(longlong *)(param_1[0xc1] + 0x128) != 0) {
          lVar4 = FUN_140ac4ac0(param_1[0xc2]);
          param_1[0xc5] = lVar4;
          local_f8 = 0;
          *(int *)(lVar4 + 0x718) = (int)*(float *)(param_1 + 200);
          *(undefined1 *)(param_1[0xc5] + 0x71c) = 1;
          *(undefined8 *)(param_1[0xc5] + 0x720) = *(undefined8 *)(param_1[0xc1] + 0x88);
          FUN_142399e30(param_1[0xc5],*(undefined8 *)(param_1[0xc2] + 0x168),0);
          FUN_14234b150(param_1[0xc5]);
          FUN_142f6c000(param_1[0xc5],*(undefined8 *)(param_1[0xc1] + 0x128));
        }
      }
    }
    if (uVar10 != 0) {
      FMemory::Free(uVar10);
    }
  }
  return;
}



// FUNCTION 140ad8e20 FUN_140ad8e20 body=2528 status=ok
// SIG undefined FUN_140ad8e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ad8e20(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  longlong *local_498;
  longlong *local_490;
  longlong *local_488;
  undefined1 local_480;
  longlong local_478;
  float local_470;
  longlong local_468;
  undefined8 local_460;
  longlong local_458;
  undefined8 local_450;
  longlong local_448;
  undefined8 local_440;
  longlong local_438;
  ulonglong local_430;
  longlong local_428;
  undefined8 local_420;
  longlong local_418;
  undefined8 local_410;
  longlong local_408 [10];
  undefined1 local_3b8 [4];
  float local_3b4;
  int local_3a8;
  float local_394;
  longlong local_388;
  undefined1 local_368 [240];
  longlong local_278;
  undefined1 local_208 [240];
  longlong local_118;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  *(undefined1 *)(param_1 + 0x95) = 1;
  FUN_140ab0a80();
  local_470 = (float)DAT_1464aa790;
  local_478 = DAT_1464aa788;
  (**(code **)(*(longlong *)param_1[0xc3] + 0x3f8))((longlong *)param_1[0xc3],&local_478);
  lVar14 = param_1[0xc3];
  fVar17 = *(float *)((longlong)param_1 + 0x514) * 280.0;
  fVar15 = *(float *)(lVar14 + 0x220);
  fVar1 = *(float *)(lVar14 + 0x224);
  fVar18 = *(float *)(lVar14 + 0x228);
  FPoly::FPoly(local_368);
  FPoly::Init(local_368);
  fVar19 = -fVar17;
  fVar18 = fVar18 + 1.0;
  local_478 = CONCAT44(fVar1 + fVar17,fVar15 + fVar19);
  local_470 = fVar18;
  local_460._0_4_ = fVar18;
  FUN_14270ef10(local_368,0,&local_478);
  local_478 = CONCAT44(fVar1 + fVar17,fVar15 + fVar17);
  local_470 = fVar18;
  local_460._0_4_ = fVar18;
  FUN_14270ef10(local_368,1,&local_478);
  local_478 = CONCAT44(fVar1 + fVar19,fVar15 + fVar17);
  local_470 = fVar18;
  local_460._0_4_ = fVar18;
  FUN_14270ef10(local_368,2,&local_478);
  local_460 = CONCAT44(local_460._4_4_,fVar18);
  local_478 = CONCAT44(fVar1 + fVar19,fVar15 + fVar19);
  local_470 = fVar18;
  FUN_14270ef10(local_368,3,&local_478);
  FUN_1426fdc70(local_368,0);
  uVar10 = 0;
  lVar14 = param_1[0x23];
  cVar4 = '\0';
  local_418 = 0;
  local_410 = 0;
  if (lVar14 != 0) {
    lVar5 = FUN_1413c2e10();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = param_1[0x2d];
      if (lVar5 == 0) {
        local_478 = _DAT_1468b5d90;
        local_470 = DAT_1468b5d98;
      }
      else {
        local_478 = *(longlong *)(lVar5 + 0x220);
        local_470 = *(float *)(lVar5 + 0x228);
      }
      pfVar12 = *(float **)(lVar14 + 0x520);
      cVar4 = '\0';
      local_450 = CONCAT44(local_450._4_4_,local_470);
      local_458 = local_478;
      pfVar6 = pfVar12 + (longlong)*(int *)(lVar14 + 0x528) * 6;
      for (; pfVar12 != pfVar6; pfVar12 = pfVar12 + 6) {
        if (ABS(*pfVar12 - local_470) <= 0.05) {
          cVar4 = FUN_140acef10(pfVar12,local_368,&local_418);
          break;
        }
      }
      goto LAB_140ad9152;
    }
  }
  local_410 = CONCAT44(local_410._4_4_,1);
  TArray<FPoly,FDefaultAllocator>::ResizeGrow(&local_418,0);
  FUN_140ac6c80(local_418,local_368);
LAB_140ad9152:
  local_408[8] = 0;
  local_408[9] = 0;
  cVar3 = FUN_140ae7980(param_1,&local_418,local_408 + 8);
  if (cVar3 != '\0') {
    local_4b0 = &local_428;
    local_4b8 = local_408;
    local_438 = 0;
    local_430 = 0;
    local_408[6] = 0;
    local_408[7] = 0;
    local_428 = 0;
    local_420 = 0;
    local_408[0] = 0;
    local_408[1] = 0;
    FUN_140acfaf0(param_1,param_1[0xc3],local_408 + 8,&local_438);
    local_488 = local_408 + 2;
    local_480 = 0;
    local_490 = local_408 + 4;
    local_408[4] = 0;
    local_498 = &local_448;
    local_408[5] = 0;
    local_4a0 = &local_448;
    local_4a8 = &local_448;
    local_4b0 = &local_428;
    local_408[2] = 0;
    local_408[3] = 0;
    local_448 = 0;
    local_440 = 0;
    local_4b8 = local_408 + 6;
    UProceduralMeshComponent::CreateMeshSection_LinearColor(param_1[0xc3],0,&local_438,local_408);
    if (local_448 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0x6f0))(param_1,local_3b8);
      lVar14 = param_1[0x96];
      fVar15 = *(float *)(lVar14 + 0x220);
      fVar1 = *(float *)(lVar14 + 0x224);
      fVar18 = *(float *)(lVar14 + 0x228);
      iVar13 = 3;
      if ((2 < local_3a8) && (iVar13 = 0x20, local_3a8 < 0x20)) {
        iVar13 = local_3a8;
      }
      FPoly::FPoly(local_208);
      FPoly::Init(local_208);
      uVar9 = uVar10;
      if (0 < local_3a8) {
        do {
          pfVar6 = (float *)FVector::RotateAngleAxis
                                      (&DAT_1464aa7a8,&local_478,
                                       (float)(int)uVar9 * (360.0 / (float)iVar13),&DAT_1464aa798);
          fVar17 = local_3b4 * pfVar6[2] + local_394 + fVar18;
          local_460 = CONCAT44(local_460._4_4_,fVar17);
          local_450 = CONCAT44(local_450._4_4_,fVar17);
          local_458 = CONCAT44(local_3b4 * pfVar6[1] + fVar1,local_3b4 * *pfVar6 + fVar15);
          FUN_14270ef10(local_208,uVar9,&local_458);
          uVar11 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar11;
        } while ((int)uVar11 < local_3a8);
      }
      FUN_1426fdc70(local_208,0);
      if (local_388 != 0) {
        FMemory::Free();
      }
      lVar14 = param_1[0x2d];
      local_448 = 0;
      local_440 = 0;
      if (lVar14 == 0) {
        local_450 = CONCAT44(local_450._4_4_,DAT_1468b5d98);
        plVar7 = &local_458;
        local_458 = _DAT_1468b5d90;
      }
      else {
        plVar7 = &local_478;
        local_470 = *(float *)(lVar14 + 0x228);
        local_478 = *(longlong *)(lVar14 + 0x220);
      }
      local_468 = *plVar7;
      local_460 = CONCAT44(local_460._4_4_,*(float *)(plVar7 + 1));
      pfVar12 = *(float **)(param_1[0x23] + 0x520);
      pfVar6 = pfVar12 + (longlong)*(int *)(param_1[0x23] + 0x528) * 6;
      for (; pfVar12 != pfVar6; pfVar12 = pfVar12 + 6) {
        if (ABS(*pfVar12 - *(float *)(plVar7 + 1)) <= 0.05) {
          cVar4 = FUN_140acef10(pfVar12,local_208,&local_448);
          if (cVar4 != '\0') {
            local_458 = 0;
            local_450 = 0;
            cVar4 = FUN_140ae7980(param_1,&local_448,&local_458);
            if (cVar4 != '\0') {
              *(undefined1 *)(param_1 + 0xc4) = 1;
              if ((*(char *)((longlong)param_1 + 0x55c) != '\0') && (param_1[0x8c] != 0)) {
                FUN_140ac1890(param_1[0x8c],param_1);
              }
              local_4b8 = local_408;
              local_4b0 = (longlong *)0x0;
              FUN_140acfaf0(param_1,param_1[0x96],&local_458,&local_438);
              lVar14 = local_420;
              uVar11 = local_420._4_4_;
              local_420 = (ulonglong)local_420._4_4_ << 0x20;
              if ((lVar14 < 0) && (uVar11 != 0)) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(&local_428,0);
              }
              local_468 = 0;
              local_460 = 0;
              uVar9 = uVar10;
              if (0 < (int)local_430) {
                local_460 = 0;
                TArray<float,FDefaultAllocator>::ResizeTo(&local_468,local_430 & 0xffffffff);
                uVar9 = local_460 & 0xffffffff;
              }
              lVar14 = local_468;
              if (0 < (int)local_430) {
                do {
                  iVar13 = (int)uVar9;
                  uVar11 = iVar13 + 1;
                  local_460 = CONCAT44(local_460._4_4_,uVar11);
                  if (local_460._4_4_ < (int)uVar11) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_468,uVar9);
                    lVar14 = local_468;
                    uVar11 = (uint)(float)local_460;
                  }
                  uVar9 = (ulonglong)uVar11;
                  *(int *)(lVar14 + (longlong)iVar13 * 4) = (int)uVar10;
                  uVar11 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar11;
                } while ((int)uVar11 < (int)local_430);
              }
              local_488 = local_408 + 2;
              local_480 = 1;
              local_490 = local_408 + 4;
              local_468 = 0;
              local_498 = &local_468;
              local_460 = 0;
              local_4a0 = &local_468;
              local_4a8 = &local_468;
              local_4b0 = &local_428;
              local_4b8 = local_408 + 6;
              UProceduralMeshComponent::CreateMeshSection_LinearColor
                        (param_1[0x96],0,&local_438,local_408);
              if (local_468 != 0) {
                FMemory::Free();
              }
              local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,(int)param_1[0x99]);
              FUN_140ab1880(param_1[0x9a],param_1[0x96] + 0x210,&local_438,local_408);
              (**(code **)(*(longlong *)param_1[0x96] + 0x488))((longlong *)param_1[0x96],0,1,0);
              FUN_140aa5b40(param_1[0x9b],1);
              FUN_140ac2bf0(param_1);
              fVar15 = (float)FUN_140972a90(param_1[0x96],0);
              *(float *)((longlong)param_1 + 0x4c4) = fVar15;
              if (param_1[0x9e] != 0) {
                *(float *)((longlong)param_1 + 0x4c4) = fVar15 * *(float *)(param_1[0x9e] + 0xf8);
              }
              FUN_140ac2d90(param_1);
              if (lVar14 != 0) {
                FMemory::Free(lVar14);
              }
            }
            if (local_458 != 0) {
              FMemory::Free();
            }
          }
          break;
        }
      }
      lVar14 = local_448;
      if ((int)local_440 != 0) {
        plVar7 = (longlong *)(local_448 + 0xf0);
        iVar13 = (int)local_440;
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 0x2b;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if (lVar14 != 0) {
        FMemory::Free(lVar14);
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
    }
    if (local_408[2] != 0) {
      FMemory::Free();
    }
    if (local_408[4] != 0) {
      FMemory::Free();
    }
    if (local_408[0] != 0) {
      FMemory::Free();
    }
    if (local_428 != 0) {
      FMemory::Free();
    }
    if (local_408[6] != 0) {
      FMemory::Free();
    }
    if (local_438 != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0x9e] != 0) {
    uVar8 = FUN_140aac400(param_1);
    lVar14 = param_1[0x23];
    if ((lVar14 == 0) || (-1 < *(char *)(lVar14 + 0x4a0))) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined4 *)(lVar14 + 0x4f0);
    }
    local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,uVar16);
    FUN_140ad9fb0(param_1[0x9e],param_1,param_1[0xc3],uVar8);
  }
  if (local_408[8] != 0) {
    FMemory::Free();
  }
  lVar14 = local_418;
  if ((int)local_410 != 0) {
    plVar7 = (longlong *)(local_418 + 0xf0);
    iVar13 = (int)local_410;
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0x2b;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (lVar14 != 0) {
    FMemory::Free(lVar14);
  }
  if (local_278 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ad9800 FUN_140ad9800 body=103 status=ok
// SIG undefined FUN_140ad9800(void)

void FUN_140ad9800(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x4a8) = 1;
  FUN_140ab0a80();
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x618) + 0x2ee);
  *pbVar1 = *pbVar1 ^ (*(byte *)(param_1 + 0x55c) ^
                      *(byte *)(*(longlong *)(param_1 + 0x618) + 0x2ee)) & 1;
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    uVar2 = FUN_140aac400(param_1);
    FUN_140ad9eb0(*(undefined8 *)(param_1 + 0x4f0),param_1,*(undefined8 *)(param_1 + 0x618),uVar2);
    return;
  }
  return;
}



// FUNCTION 140ad9870 FUN_140ad9870 body=364 status=ok
// SIG undefined FUN_140ad9870(void)

void FUN_140ad9870(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined1 local_28 [32];
  
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x40 + *(longlong *)(param_1 + 0x40);
  }
  lVar5 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    FUN_1405ac8f0(param_2 + 0x5f0,0,4);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      return;
    }
    if (param_4 == '\0') {
      return;
    }
    cVar2 = FUN_14059ee90(param_2 + 0x5d8);
    if (cVar2 != '\0') {
      return;
    }
    lVar3 = FUN_140aadf20(param_2,1);
    if (lVar3 == 0) {
      return;
    }
    lVar3 = FUN_1405a3150(lVar3,local_28,*(undefined8 *)(param_1 + 0xe8),0);
    FUN_1405913a0(param_2 + 0x5d8,lVar3);
    *(undefined4 *)(param_2 + 0x5e8) = *(undefined4 *)(lVar3 + 0x10);
  }
  else {
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      return;
    }
    lVar3 = FUN_140aadf20(param_2,1);
    if (lVar3 == 0) {
      return;
    }
    lVar1 = param_2 + 0x5f0;
    cVar2 = FUN_14059ee90(lVar1);
    if ((cVar2 != '\0') &&
       (lVar4 = FUN_14059bfc0(lVar3,*(undefined4 *)(param_2 + 0x600)),
       lVar4 == *(longlong *)(lVar5 + 0x10))) {
      return;
    }
    FUN_1405ac8f0(lVar1,0,4);
    lVar3 = FUN_1405a3150(lVar3,local_28,*(undefined8 *)(lVar5 + 0x10),0);
    FUN_1405913a0(lVar1,lVar3);
    *(undefined4 *)(param_2 + 0x600) = *(undefined4 *)(lVar3 + 0x10);
  }
  FUN_140591060(local_28);
  return;
}



// FUNCTION 140ad99e0 FUN_140ad99e0 body=519 status=ok
// SIG undefined FUN_140ad99e0(void)

void FUN_140ad99e0(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined1 local_48 [32];
  
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,local_res8);
  lVar5 = 0;
  lVar2 = lVar5;
  if (local_res8[0] != -1) {
    lVar2 = (longlong)local_res8[0] * 0x40 + *(longlong *)(param_1 + 0x40);
  }
  lVar4 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar4 = lVar5;
  }
  if (lVar4 == 0) {
    FUN_1405ac8f0(param_2 + 0x5f0,0,4);
    if ((((*(longlong *)(param_1 + 0xe8) == 0) || (param_4 == '\0')) ||
        (cVar1 = FUN_14059ee90(param_2 + 0x5d8), cVar1 != '\0')) ||
       (lVar2 = FUN_140aadf20(param_2,1), lVar2 == 0)) goto LAB_140ad9b56;
    lVar2 = FUN_1405a3150(lVar2,local_48,*(undefined8 *)(param_1 + 0xe8),0);
    FUN_1405913a0(param_2 + 0x5d8,lVar2);
    *(undefined4 *)(param_2 + 0x5e8) = *(undefined4 *)(lVar2 + 0x10);
  }
  else {
    if (((*(longlong *)(lVar4 + 0x10) == 0) || (lVar2 = FUN_140aadf20(param_2,1), lVar2 == 0)) ||
       ((cVar1 = FUN_14059ee90(param_2 + 0x5f0), cVar1 != '\0' &&
        (lVar3 = FUN_14059bfc0(lVar2,*(undefined4 *)(param_2 + 0x600)),
        lVar3 == *(longlong *)(lVar4 + 0x10))))) goto LAB_140ad9b56;
    FUN_1405ac8f0(param_2 + 0x5f0,0,4);
    lVar2 = FUN_1405a3150(lVar2,local_48,*(undefined8 *)(lVar4 + 0x10),0);
    FUN_1405913a0(param_2 + 0x5f0,lVar2);
    *(undefined4 *)(param_2 + 0x600) = *(undefined4 *)(lVar2 + 0x10);
  }
  FUN_140591060(local_48);
LAB_140ad9b56:
  FUN_140ada310(param_1,param_2,param_3);
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,local_res8,param_3);
  lVar2 = lVar5;
  if (local_res8[0] != -1) {
    lVar2 = (longlong)local_res8[0] * 0x40 + *(longlong *)(param_1 + 0x40);
  }
  lVar4 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar4 = lVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x110);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) != 0)) {
    lVar2 = *(longlong *)(lVar4 + 0x18);
  }
  FUN_140abc1f0(param_2,lVar2);
  return;
}



// FUNCTION 140ad9c10 FUN_140ad9c10 body=667 status=ok
// SIG undefined FUN_140ad9c10(void)

void FUN_140ad9c10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_res8;
  longlong local_res10;
  float local_res20 [2];
  float local_48 [2];
  longlong *local_40;
  float *local_38;
  float *local_30;
  code *local_28;
  longlong **pplStack_20;
  
  local_res10 = param_2;
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,&local_res8);
  plVar3 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar3 = (longlong *)((longlong)(int)local_res8 * 0x40 + param_1[8]);
  }
  plVar2 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  if ((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) {
    if ((*(byte *)(param_2 + 0x544) & 1) == 0) {
      FUN_140ad4100(param_2,*(undefined8 *)(param_2 + 0x618),0,param_1[0x12]);
    }
    else {
      FUN_140ad4100(param_2,*(undefined8 *)(param_2 + 0x618),0,param_1[0x13]);
      FUN_140ada720(param_1,local_res10,*(undefined8 *)(local_res10 + 0x618));
    }
  }
  else {
    FUN_140ad4100(param_2,*(undefined8 *)(param_2 + 0x618),0);
    if ((*(byte *)(local_res10 + 0x544) & 1) != 0) {
      FUN_140ada720(param_1,local_res10,*(undefined8 *)(local_res10 + 0x618));
    }
  }
  local_38 = (float *)&local_res8;
  pplStack_20 = &local_40;
  local_res8 = local_res10;
  local_28 = (code *)&LAB_140ace8a0;
  local_40 = param_1;
  FUN_140ad3aa0(0x40ace8a0,*(undefined8 *)(local_res10 + 0x618),&local_28);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146868168) &&
     (_Init_thread_header(&DAT_146868168), DAT_146868168 == -1)) {
    FName::FName(&DAT_146868160,L"Decal_UVs_RandomOffset",1);
    _Init_thread_footer(&DAT_146868168);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146868178) &&
     (_Init_thread_header(&DAT_146868178), DAT_146868178 == -1)) {
    FName::FName(&DAT_146868170,L"Decal_U_Tiling",1);
    _Init_thread_footer(&DAT_146868178);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146868188) &&
     (_Init_thread_header(&DAT_146868188), DAT_146868188 == -1)) {
    FName::FName(&DAT_146868180,L"Decal_V_Tiling",1);
    _Init_thread_footer(&DAT_146868188);
  }
  local_40 = &local_res10;
  local_38 = local_res20;
  local_res20[0] = 1.0 / *(float *)(local_res10 + 0x514);
  local_30 = local_48;
  pplStack_20 = &local_40;
  local_48[0] = 1.0 / *(float *)(local_res10 + 0x514);
  local_28 = FUN_140ace830;
  FUN_140ad3aa0(local_res10,*(undefined8 *)(local_res10 + 0x618),&local_28);
  return;
}



// FUNCTION 140ad9eb0 FUN_140ad9eb0 body=250 status=ok
// SIG undefined FUN_140ad9eb0(void)

void FUN_140ad9eb0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 local_res10 [6];
  undefined4 *local_28 [2];
  undefined1 *local_18;
  undefined4 **ppuStack_10;
  
  if ((*(byte *)(param_2 + 0x620) & 4) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xe0);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x624);
  }
  FUN_140ad9fb0();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468681a8) {
    _Init_thread_header(&DAT_1468681a8);
    if (DAT_1468681a8 == -1) {
      FName::FName(&DAT_1468681a0,L"EdgeMask_Strength",1,param_4,uVar1);
      _Init_thread_footer(&DAT_1468681a8);
    }
  }
  if ((*(byte *)(param_2 + 0x620) & 2) == 0) {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = 0x3f800000;
  }
  local_28[0] = local_res10;
  ppuStack_10 = local_28;
  local_18 = &LAB_140ace7f0;
  FUN_140ad3aa0(param_2,param_3,&local_18);
  return;
}



// FUNCTION 140ad9fb0 FUN_140ad9fb0 body=849 status=ok
// SIG undefined FUN_140ad9fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ad9fb0(undefined1 *param_1,float *param_2,longlong *param_3,undefined8 param_4,
                  float param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *local_res18;
  float local_58 [4];
  undefined1 *local_48;
  undefined1 **ppuStack_40;
  undefined1 *local_38;
  float **ppfStack_30;
  undefined1 local_28 [16];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468681b8) && (_Init_thread_header(&DAT_1468681b8), DAT_1468681b8 == -1))
  {
    FName::FName(&DAT_1468681b0,L"Opacity_DepthFade",1);
    _Init_thread_footer(&DAT_1468681b8);
  }
  iVar4 = (**(code **)(*param_3 + 0x6c8))(param_3);
  if (iVar4 != 0) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x40,&local_res18,param_4);
    lVar7 = 0;
    if ((int)local_res18 != -1) {
      lVar7 = (longlong)(int)local_res18 * 0x40 + *(longlong *)(param_1 + 0x40);
    }
    lVar5 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar5 = 0;
    }
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) {
      if (((uint)param_2[0x151] & 1) == 0) {
        (**(code **)(*param_3 + 0x568))(param_3,0,*(undefined8 *)(param_1 + 0xa0));
      }
      else {
        (**(code **)(*param_3 + 0x568))(param_3,0,*(undefined8 *)(param_1 + 0xa8));
        FUN_140ada720(param_1,param_2,param_3);
      }
    }
    else {
      FUN_140ad4100(param_2,param_3,0);
      if (((uint)param_2[0x151] & 1) != 0) {
        FUN_140ada720(param_1,param_2,param_3);
      }
    }
    ppfStack_30 = &local_res18;
    ppuStack_40 = &local_38;
    local_48 = &LAB_140ace8a0;
    local_res18 = param_2;
    local_38 = param_1;
    FUN_140ad3aa0(param_2,param_3,&local_48);
    if (param_5 < 0.0) {
      param_5 = *(float *)(param_1 + 0xe0);
    }
    fVar9 = *(float *)(*(longlong *)(param_2 + 0x5a) + 0x20c);
    if (fVar9 == 0.0) {
      fVar9 = 1.0;
    }
    pfVar1 = (float *)(param_3 + 0x50);
    local_38 = *(undefined1 **)((longlong)param_3 + 0x1ec);
    ppfStack_30 = (float **)CONCAT44(ppfStack_30._4_4_,0.1 / fVar9);
    local_58[0] = param_5;
    if (((*(float *)(param_3 + 0x3f) != *pfVar1) ||
        (*(float *)((longlong)param_3 + 0x1fc) != *(float *)((longlong)param_3 + 0x284))) ||
       (*(float *)(param_3 + 0x40) != *(float *)(param_3 + 0x51))) {
      local_48 = *(undefined1 **)*(undefined1 (*) [12])(param_3 + 0x3f);
      auVar8._12_4_ = 0;
      auVar8._0_12_ = *(undefined1 (*) [12])(param_3 + 0x3f);
      fVar9 = (float)DAT_146867c10;
      fVar2 = DAT_146867c10._4_4_;
      fVar3 = DAT_146867c10._8_4_;
      auVar8 = divps(auVar8,_DAT_146867c10);
      fVar11 = SUB84(local_48,0) - (float)(int)auVar8._0_4_ * fVar9;
      fVar12 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar8._4_4_ * fVar2;
      fVar13 = *(float *)(param_3 + 0x40) - (float)(int)auVar8._8_4_ * fVar3;
      fVar11 = (float)(((uint)(fVar11 + fVar9) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar9));
      fVar12 = (float)(((uint)(fVar12 + fVar2) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar2));
      fVar13 = (float)(((uint)(fVar13 + fVar3) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar3));
      uVar10 = ((uint)(fVar13 - fVar3) ^ (uint)fVar13) & -(uint)(fRam0000000146867c08 < fVar13) ^
               (uint)fVar13;
      ppuStack_40 = (undefined1 **)CONCAT44(ppuStack_40._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar12 - fVar2) ^ (uint)fVar12) & -(uint)(fRam0000000146867c04 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar9) ^ (uint)fVar11) & -(uint)(_DAT_146867c00 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(param_3 + 0x51) = uVar10;
      plVar6 = (longlong *)FRotator::Quaternion(pfVar1,local_28);
      lVar7 = plVar6[1];
      param_3[0x4e] = *plVar6;
      param_3[0x4f] = lVar7;
    }
    local_48 = (undefined1 *)param_3[0x4e];
    ppuStack_40 = (undefined1 **)param_3[0x4f];
    FUN_142397be0(param_3,&local_38,&local_48,0,0,0);
    local_res18 = local_58;
    ppfStack_30 = &local_res18;
    local_38 = &LAB_140ace7d0;
    FUN_140ad3aa0(param_2,param_3,&local_38);
  }
  return;
}



// FUNCTION 140ada310 FUN_140ada310 body=837 status=ok
// SIG undefined FUN_140ada310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ada310(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint7 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_res8;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146868198) && (_Init_thread_header(&DAT_146868198), DAT_146868198 == -1))
  {
    FName::FName(&DAT_146868190,L"ProcMeshActor",1);
    _Init_thread_footer(&DAT_146868198);
  }
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,&local_res8,param_3);
  uVar14 = 0;
  uVar10 = uVar14;
  if ((int)local_res8 != -1) {
    uVar10 = (longlong)(int)local_res8 * 0x40 + *(longlong *)(param_1 + 0x40);
  }
  uVar7 = uVar10 + 8;
  if (uVar10 == 0) {
    uVar7 = uVar14;
  }
  plVar16 = (longlong *)(uVar7 + 0x20);
  if (uVar7 == 0) {
    plVar16 = (longlong *)(param_1 + 0x100);
  }
  if ((*(longlong *)(param_1 + 0xf0) == 0) || ((int)plVar16[1] == 0)) {
    if (param_2[0xc2] != 0) {
      FUN_142600fa0();
      (**(code **)(*(longlong *)param_2[0xc2] + 0x418))((longlong *)param_2[0xc2],&DAT_146532190);
      param_2[0xc2] = 0;
    }
  }
  else {
    if ((param_2[0xc2] == 0) && (lVar8 = (**(code **)(*param_2 + 0x148))(param_2), lVar8 != 0)) {
      lVar11 = param_2[0x2d];
      if (lVar11 == 0) {
        uVar17 = (undefined4)DAT_1468b5da0;
        uVar18 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        fStack_30 = (float)DAT_1468b5da8;
      }
      else {
        fVar5 = *(float *)(lVar11 + 0x210);
        local_38 = *(undefined8 *)(lVar11 + 0x210);
        fStack_30 = *(float *)(lVar11 + 0x218);
        fStack_2c = *(float *)(lVar11 + 0x21c);
        auVar4._4_4_ = -(uint)(*(float *)(lVar11 + 0x254) != *(float *)(lVar11 + 0x214));
        auVar4._0_4_ = -(uint)(*(float *)(lVar11 + 0x250) != fVar5);
        auVar4._8_4_ = -(uint)(*(float *)(lVar11 + 600) != fStack_30);
        auVar4._12_4_ = -(uint)(*(float *)(lVar11 + 0x25c) != fStack_2c);
        iVar6 = movmskps((int)lVar8,auVar4);
        lVar8 = lVar11;
        if (iVar6 != 0) {
          *(float *)(lVar11 + 0x250) = fVar5;
          *(float *)(lVar11 + 0x254) = *(float *)(lVar11 + 0x214);
          *(float *)(lVar11 + 600) = fStack_30;
          *(float *)(lVar11 + 0x25c) = fStack_2c;
          puVar9 = (undefined8 *)FQuat::Rotator(&local_38,&local_28);
          *(undefined8 *)(lVar11 + 0x260) = *puVar9;
          *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(puVar9 + 1);
          lVar8 = param_2[0x2d];
        }
        uVar17 = (undefined4)*(undefined8 *)(lVar11 + 0x260);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x260) >> 0x20);
        puVar1 = (undefined4 *)(lVar11 + 0x268);
        lVar11 = lVar8;
        fStack_30 = (float)*puVar1;
      }
      local_38 = CONCAT44(uVar18,uVar17);
      if (lVar11 == 0) {
        local_48 = _DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined8 *)(lVar11 + 0x220);
        local_40 = *(undefined4 *)(lVar11 + 0x228);
      }
      local_28 = local_48;
      local_20 = local_40;
      lVar8 = FUN_14245fbc0(param_2,*(undefined8 *)(param_1 + 0xf0),&local_28,&local_38,1,0,0);
      param_2[0xc2] = lVar8;
      if (lVar8 != 0) {
        FUN_14260e160(lVar8,DAT_146868190,param_2);
        local_res8 = 0;
        *(byte *)(param_2[0xc2] + 0x24c) = *(byte *)(param_2[0xc2] + 0x24c) | 0x10;
        FUN_142382f60(param_2[0xc2],param_2[0x2d],&DAT_146532180,0);
      }
    }
    lVar8 = param_2[0xc2];
    if (lVar8 != 0) {
      plVar15 = *(longlong **)(lVar8 + 0x920);
      uVar10 = (longlong)*(int *)(lVar8 + 0x928) & 0x1fffffffffffffff;
      if (plVar15 + *(int *)(lVar8 + 0x928) < plVar15) {
        uVar10 = uVar14;
      }
      if (uVar10 != 0) {
        do {
          plVar3 = (longlong *)*plVar15;
          if ((plVar3 != (longlong *)0x0) && (plVar3[2] != 0)) {
            plVar12 = (longlong *)*plVar16;
            plVar2 = plVar12 + (int)plVar16[1];
            uVar13 = (uint7)((ulonglong)plVar2 >> 8);
            if (plVar12 != plVar2) {
              do {
                if (*plVar12 == *(longlong *)(plVar3[2] + 0x28)) {
                  lVar8 = (ulonglong)uVar13 << 8;
                  goto LAB_140ada5a0;
                }
                plVar12 = plVar12 + 1;
              } while (plVar12 != plVar2);
            }
            lVar8 = CONCAT71(uVar13,1);
LAB_140ada5a0:
            (**(code **)(*plVar3 + 0x100))(plVar3,lVar8);
          }
          plVar15 = plVar15 + 1;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar10);
      }
      FUN_140ac2d90(param_2);
    }
  }
  return;
}



// FUNCTION 140ada660 FUN_140ada660 body=189 status=ok
// SIG undefined FUN_140ada660(void)

void FUN_140ada660(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_res10;
  undefined1 local_28 [32];
  
  if (((param_2 != 0) && (*(char *)(param_2 + 0x128) == '\x03')) &&
     (cVar4 = FUN_142d52a00(param_1 + 0x216), cVar4 == '\0')) {
    (**(code **)(*param_1 + 0x260))(param_1);
    local_res10 = 0;
    puVar5 = (undefined4 *)FUN_142d622d0(local_28,&local_res10,param_2,param_1[0x78]);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)(param_1 + 0x216) = *puVar5;
    *(undefined4 *)((longlong)param_1 + 0x10b4) = uVar1;
    *(undefined4 *)(param_1 + 0x217) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x10bc) = uVar3;
    param_1[0x218] = *(longlong *)(puVar5 + 4);
    cVar4 = FUN_142d52a00(param_1 + 0x216);
    if (cVar4 != '\0') {
      uVar6 = FUN_142d52a20(param_1 + 0x216);
      lVar7 = FArchive::operator<<(uVar6);
      *(undefined4 *)((longlong)param_1 + 0x130c) = *(undefined4 *)(lVar7 + 0x38);
    }
  }
  return;
}



// FUNCTION 140ada720 FUN_140ada720 body=441 status=ok
// SIG undefined FUN_140ada720(void)

void FUN_140ada720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  undefined8 **ppuStack_10;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (*piVar1 < DAT_1468681c8) {
    _Init_thread_header(&DAT_1468681c8);
    if (DAT_1468681c8 == -1) {
      FName::FName(&DAT_1468681c0,L"Ripples_Strength",1);
      _Init_thread_footer(&DAT_1468681c8);
    }
  }
  if (*piVar1 < DAT_1468681d8) {
    _Init_thread_header(&DAT_1468681d8);
    if (DAT_1468681d8 == -1) {
      FName::FName(&DAT_1468681d0,L"Ripples_Size",1);
      _Init_thread_footer(&DAT_1468681d8);
    }
  }
  if (*piVar1 < DAT_1468681e8) {
    _Init_thread_header(&DAT_1468681e8);
    if (DAT_1468681e8 == -1) {
      FName::FName(&DAT_1468681e0,L"Ripples_Speed",1);
      _Init_thread_footer(&DAT_1468681e8);
    }
  }
  if (*piVar1 < DAT_1468681f8) {
    _Init_thread_header(&DAT_1468681f8);
    if (DAT_1468681f8 == -1) {
      FName::FName(&DAT_1468681f0,L"Ripples_Location",1);
      _Init_thread_footer(&DAT_1468681f8);
    }
  }
  local_28 = &local_res10;
  local_20 = local_res18;
  ppuStack_10 = &local_28;
  local_18 = &LAB_140ace8c0;
  FUN_140ad3aa0(local_res10,local_res18[0],&local_18);
  return;
}



// FUNCTION 140ada8e0 FUN_140ada8e0 body=59 status=ok
// SIG undefined FUN_140ada8e0(void)

undefined1 FUN_140ada8e0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x10e6) == '\x01') {
    cVar1 = FUN_142d52a00(param_1 + 0x1098);
    if ((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x10e0))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ada920 FUN_140ada920 body=68 status=ok
// SIG undefined FUN_140ada920(void)

undefined1 FUN_140ada920(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x10e6) == '\x01') {
    cVar1 = FUN_142d52a00(param_1 + 0x1098);
    if (((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x10e0))) &&
       (*(char *)(param_1 + 0x10e4) != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ada970 SupportsKeyboardFocus body=8 status=ok
// SIG undefined SupportsKeyboardFocus(void)

undefined1 SCheckBox::SupportsKeyboardFocus(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x4d6);
}



// FUNCTION 140ada980 FUN_140ada980 body=160 status=ok
// SIG undefined FUN_140ada980(void)

ulonglong FUN_140ada980(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10c8);
  uVar4 = (ulonglong)*(int *)(param_1 + 0x10d0);
  plVar1 = plVar6 + uVar4;
  while( true ) {
    if (plVar6 == plVar1) {
      return uVar4 & 0xffffffffffffff00;
    }
    lVar3 = *plVar6;
    if (param_2 == lVar3) break;
    if (param_2 != 0) {
      lVar5 = FUN_14291fb80();
      iVar2 = *(int *)(lVar5 + 0x90);
      uVar4 = (longlong)iVar2;
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar2) ||
         (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
         *(longlong *)(uVar4 + (longlong)iVar2 * 8) != lVar5 + 0x88)) {
        uVar4 = uVar4 & 0xffffffffffffff00;
      }
      else {
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if (((char)uVar4 != '\0') && (*(longlong *)(param_2 + 0x488) == lVar3)) break;
    }
    plVar6 = plVar6 + 1;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 140adaa20 FUN_140adaa20 body=11 status=ok
// SIG undefined FUN_140adaa20(void)

bool FUN_140adaa20(longlong param_1)

{
  return *(char *)(param_1 + 0x10e5) == '\x03';
}



// FUNCTION 140adaa30 FUN_140adaa30 body=362 status=ok
// SIG undefined FUN_140adaa30(void)

undefined8 FUN_140adaa30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  cVar3 = FUN_142dee6e0();
  if (cVar3 == '\0') {
    return 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x10c8);
  plVar1 = plVar5 + *(int *)(param_1 + 0x10d0);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar6 = *plVar5;
    if (param_2 == lVar6) goto LAB_140adaadb;
    if (param_2 != 0) {
      lVar4 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(longlong *)(param_2 + 0x488) == lVar6)) goto LAB_140adaadb;
    }
  }
  if (*(int *)(param_1 + 0x3c8) <= *(int *)(param_1 + 0x10e0)) {
    return 0;
  }
LAB_140adaadb:
  lVar6 = *(longlong *)(param_1 + 0x118);
  if (lVar6 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140adab1f;
  }
  lVar6 = 0;
LAB_140adab1f:
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  lVar4 = FUN_140aab5e0(lVar4);
  if ((((lVar4 != 0) && (lVar6 != 0)) && (lVar4 = FUN_140aab960(lVar4,lVar6), lVar4 != 0)) &&
     ((lVar4 = FUN_140aadd20(lVar4,lVar6), lVar4 != 0 && (*(char *)(lVar4 + 0x18) == '\0')))) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x1338) != '\0') && (lVar6 != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140adaba0 FUN_140adaba0 body=91 status=ok
// SIG undefined FUN_140adaba0(void)

bool FUN_140adaba0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x140), lVar3 != 0)) {
    lVar2 = FUN_14131eaa0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140adabef;
  }
  lVar3 = 0;
LAB_140adabef:
  return lVar3 != 0;
}



// FUNCTION 140adac00 FUN_140adac00 body=38 status=ok
// SIG undefined FUN_140adac00(void)

bool FUN_140adac00(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = UWorld::GetGameState<APVPGameState>();
    return lVar1 != 0;
  }
  return false;
}



// FUNCTION 140adac30 FUN_140adac30 body=74 status=ok
// SIG undefined FUN_140adac30(void)

undefined8 FUN_140adac30(undefined8 *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  psVar3 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if (DAT_146296528 != 0) {
    puVar4 = DAT_146296520;
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



// FUNCTION 140adac80 FUN_140adac80 body=43 status=ok
// SIG undefined FUN_140adac80(void)

undefined1 FUN_140adac80(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x10e5) != '\0') {
    cVar1 = FUN_142d52a00(param_1 + 0x3d0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140adacb0 FUN_140adacb0 body=217 status=ok
// SIG undefined FUN_140adacb0(void)

undefined8 FUN_140adacb0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 == 0) {
    return 0;
  }
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  plVar5 = *(longlong **)(lVar1 + 0x490);
  if (plVar5 != (longlong *)0x0) {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140adad5f;
  }
  if (*(longlong **)(lVar1 + 0x1d18) == (longlong *)0x0) {
    return 0;
  }
  plVar5 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x1d18) + 0x670))();
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
LAB_140adad5f:
  cVar3 = (**(code **)(*plVar5 + 0x768))(plVar5);
  if (cVar3 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 140adad90 FUN_140adad90 body=314 status=ok
// SIG undefined FUN_140adad90(void)

ulonglong FUN_140adad90(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float local_38;
  float fStack_34;
  
  pfVar3 = *(float **)(param_1 + 0x470);
  if ((pfVar3 != (float *)0x0) &&
     (fVar2 = *(float *)(param_2 + 1), pfVar3[0x76] - pfVar3[0x79] <= fVar2)) {
    pfVar7 = *(float **)(param_1 + 0x520);
    pfVar3 = (float *)(longlong)*(int *)(param_1 + 0x528);
    pfVar1 = pfVar7 + (longlong)pfVar3 * 6;
    for (; pfVar7 != pfVar1; pfVar7 = pfVar7 + 6) {
      if (fVar2 < *pfVar7 || fVar2 == *pfVar7) {
        puVar5 = *(undefined8 **)(pfVar7 + 2);
        puVar6 = puVar5 + (longlong)(int)pfVar7[4] * 2;
        if (puVar5 != puVar6) {
          fStack_34 = (float)((ulonglong)*param_2 >> 0x20);
          local_38 = (float)*param_2;
          do {
            pfVar3 = (float *)*puVar5;
            pfVar4 = pfVar3 + (longlong)*(int *)(puVar5 + 1) * 4;
            while( true ) {
              if (pfVar3 == pfVar4) {
                return CONCAT71((int7)((ulonglong)pfVar3 >> 8),1);
              }
              if (0.0 < (fStack_34 * pfVar3[1] + local_38 * *pfVar3 +
                        *(float *)(param_2 + 1) * pfVar3[2]) - pfVar3[3]) break;
              pfVar3 = pfVar3 + 4;
            }
            puVar5 = puVar5 + 2;
          } while (puVar5 != puVar6);
        }
      }
    }
  }
  return (ulonglong)pfVar3 & 0xffffffffffffff00;
}



// FUNCTION 140adaed0 FUN_140adaed0 body=118 status=ok
// SIG undefined FUN_140adaed0(void)

ulonglong FUN_140adaed0(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_14148cad0();
  FUN_14238c280(param_1,&local_18,uVar1);
  if (((int)local_10 < 2) && (((int)local_10 != 1 || (*local_18 == param_2)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 140adaf50 FUN_140adaf50 body=60 status=ok
// SIG undefined FUN_140adaf50(void)

undefined1 FUN_140adaf50(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x10e6) == '\x02') {
    cVar1 = FUN_142d52a00(param_1 + 0x10b0);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x10d8) != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140adaf90 FUN_140adaf90 body=474 status=ok
// SIG undefined FUN_140adaf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140adaf90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  plVar3 = (longlong *)FUN_140ad4350(param_1,param_3);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140ad4230(param_1,param_3);
    if (plVar3 == (longlong *)0x0) goto LAB_140adb00d;
  }
  cVar2 = (**(code **)(*plVar3 + 0x778))(plVar3);
  if (cVar2 != '\0') {
    lVar4 = FUN_14059b7e0(plVar3,1);
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x588) != 0)) {
      FUN_1405a3150(lVar4,&local_20,*(longlong *)(param_1 + 0x588),0);
      FUN_140591060(&local_20);
    }
  }
LAB_140adb00d:
  if (*(char *)(param_1 + 0x128) == '\x03') {
    lVar4 = FUN_140ad4350(param_1,param_3);
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(lVar4 + 0x168);
      if (lVar1 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar1 + 0x220);
        local_30 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_2c = local_38;
      local_24 = local_30;
      FUN_1412f0f80(param_1,&local_2c);
      FUN_14123ece0(lVar4,4);
      return;
    }
    plVar3 = (longlong *)FUN_140ad4230(param_1,param_3);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = plVar3[0x2d];
      if (lVar4 == 0) {
        local_24 = DAT_1468b5d98;
        puVar5 = &local_2c;
        local_2c = _DAT_1468b5d90;
      }
      else {
        puVar5 = &local_38;
        local_30 = *(undefined4 *)(lVar4 + 0x228);
        local_38 = *(undefined8 *)(lVar4 + 0x220);
      }
      local_20 = *puVar5;
      local_18 = *(undefined4 *)(puVar5 + 1);
      FUN_1412f0f80(param_1,&local_20);
      cVar2 = FUN_140c42290(plVar3);
      if (cVar2 == '\0') {
        (**(code **)(*plVar3 + 0xbc8))(plVar3,3);
      }
    }
  }
  return;
}



// FUNCTION 140adb170 FUN_140adb170 body=1287 status=ok
// SIG undefined FUN_140adb170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140adb170(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined4 *puVar12;
  int *piVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((bVar15) && (lVar7 = *(longlong *)(param_2 + 0x910), lVar7 != 0)) {
      plVar9 = *(longlong **)(param_1 + 0x118);
      if (lVar7 == *(longlong *)(param_1 + 0x1320)) {
        uVar1 = *(undefined4 *)(param_1 + 0x1328);
        local_d8 = FUN_140acee70;
        uStack_d0._0_4_ = 0;
        uVar8 = AActor::GetWorldTimerManager(plVar9);
        plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(int *)(plVar9 + 2) = (int)local_d8;
          *(int *)((longlong)plVar9 + 0x14) = local_d8._4_4_;
          *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_d0;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_d0._4_4_;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar9[5] = lVar7;
          *plVar9 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_b8 = 0;
        local_b0 = 0;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x30))(plVar9,&local_b8);
        }
        FWeakObjectPtr::operator=(local_a8,0);
        local_e0 = 0xbf800000;
        local_e8 = 0;
        local_a0 = 0;
        local_68 = (longlong *)0x0;
        local_58 = 0;
        local_98 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar8,param_1 + 0x1330,&local_b8,uVar1);
      }
      else {
        uVar8 = UCircularThrobber::GetPrivateStaticClass();
        lVar10 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar8);
        if (lVar10 == 0) {
          return;
        }
        cVar6 = FUN_142dee910(lVar10,param_2);
        if (cVar6 == '\0') {
          return;
        }
        if (*(longlong *)(param_1 + 0x1320) != 0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop
                              (L"&UFightForYourLifeComponent::SecondWindTargetDied",L"::");
          pwVar5 = (wchar_t *)0x0;
          while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
            pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
            pwVar5 = pwVar4;
          }
          FName::FName(&local_c8,pwVar5 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                    (*(longlong *)(param_1 + 0x1320) + 600,param_1,local_c8);
        }
        *(longlong *)(param_1 + 0x1320) = lVar7;
        pwVar11 = _guard_xfg_dispatch_icall_nop
                            (L"&UFightForYourLifeComponent::SecondWindTargetDied",L"::");
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_c0,pwVar5 + 2,1);
        lVar7 = *(longlong *)(param_1 + 0x1320);
        plVar9 = (longlong *)(lVar7 + 600);
        FWeakObjectPtr::operator=(&local_d8,0);
        uStack_d0 = 0;
        FWeakObjectPtr::operator=(&local_d8,param_1);
        uStack_d0 = local_c0;
        local_c8 = 0;
        if ((local_c0 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_d8), lVar10 != 0)) {
          UObject::FindFunction(lVar10,uStack_d0);
        }
        piVar3 = (int *)*plVar9;
        iVar2 = *(int *)(lVar7 + 0x260);
        uVar8 = local_d8;
        for (piVar13 = piVar3; local_d8 = (code *)uVar8, piVar13 != piVar3 + (longlong)iVar2 * 4;
            piVar13 = piVar13 + 4) {
          local_d8._0_4_ = (int)uVar8;
          if (((*piVar13 == (int)local_d8) &&
              (local_d8._4_4_ = (int)((ulonglong)uVar8 >> 0x20),
              bVar15 = piVar13[1] == local_d8._4_4_, bVar15)) ||
             ((cVar6 = FWeakObjectPtr::IsValid(piVar13), cVar6 == '\0' &&
              (cVar6 = FWeakObjectPtr::IsValid(&local_d8), cVar6 == '\0')))) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          if ((bVar15) && (*(longlong *)(piVar13 + 2) == uStack_d0)) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          if (bVar15) {
            if ((int)((longlong)piVar13 - (longlong)piVar3 >> 4) != -1) goto LAB_140adb4fa;
            break;
          }
          uVar8 = local_d8;
        }
        iVar2 = *(int *)(lVar7 + 0x260);
        *(int *)(lVar7 + 0x260) = iVar2 + 1;
        if (*(int *)(lVar7 + 0x264) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
        }
        puVar12 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar9);
        *puVar12 = (int)local_d8;
        puVar12[1] = local_d8._4_4_;
        *(longlong *)(puVar12 + 2) = uStack_d0;
LAB_140adb4fa:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
        uVar1 = *(undefined4 *)(param_1 + 0x1328);
        local_d8 = FUN_140acee70;
        uStack_d0._0_4_ = 0;
        uVar8 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(int *)(plVar9 + 2) = (int)local_d8;
          *(int *)((longlong)plVar9 + 0x14) = local_d8._4_4_;
          *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_d0;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_d0._4_4_;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar9[5] = lVar7;
          *plVar9 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_b8 = 0;
        local_b0 = 0;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x30))(plVar9,&local_b8);
        }
        FWeakObjectPtr::operator=(local_a8,0);
        local_e0 = 0xbf800000;
        local_e8 = 0;
        local_a0 = 0;
        local_68 = (longlong *)0x0;
        local_58 = 0;
        local_98 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar8,param_1 + 0x1330,&local_b8,uVar1);
      }
      if (local_58 != 0) {
        plVar14 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar14 = local_68;
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        lVar7 = FMemory::Realloc(plVar9,0,0);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 140adb680 FUN_140adb680 body=59 status=ok
// SIG undefined FUN_140adb680(void)

void FUN_140adb680(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x778))(param_2), cVar1 != '\0')) {
    FUN_140ae1030(param_1,param_2);
  }
  return;
}



// FUNCTION 140adb6c0 FUN_140adb6c0 body=59 status=ok
// SIG undefined FUN_140adb6c0(void)

void FUN_140adb6c0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x778))(param_2), cVar1 != '\0')) {
    FUN_140ae4440(param_1,param_2);
  }
  return;
}



// FUNCTION 140adb710 FUN_140adb710 body=193 status=ok
// SIG undefined FUN_140adb710(void)

void FUN_140adb710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  thunk_FUN_1428e0030();
  if (*(char *)(param_1 + 0x58a) == '\0') {
    return;
  }
  if (param_2 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = *(longlong *)(param_2 + 0x2c70);
      goto LAB_140adb778;
    }
  }
  lVar4 = 0;
LAB_140adb778:
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x638);
    plVar1 = plVar5 + *(int *)(param_1 + 0x640);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x4d8) == lVar4)) {
        FUN_1412d98b0(lVar2);
        break;
      }
    }
    FUN_140ae32c0(param_1,lVar4,1);
  }
  return;
}



// FUNCTION 140adb7e0 FUN_140adb7e0 body=819 status=ok
// SIG undefined FUN_140adb7e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140adb7e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  thunk_FUN_1428e0030();
  lVar5 = 0;
  if (*(char *)((longlong)param_1 + 0x58a) != '\0') {
    if (param_2 != 0) {
      lVar4 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = *(longlong *)(param_2 + 0x2c70);
      }
    }
    if (lVar5 != 0) {
      plVar8 = (longlong *)param_1[199];
      plVar6 = plVar8 + (int)param_1[200];
      for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
        lVar4 = *plVar8;
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x4d8) == lVar5)) {
          FUN_1412d98b0(lVar4);
          break;
        }
      }
      FUN_140ae32c0(param_1,lVar5,1);
    }
  }
  if (((char)param_1[0x25] == '\x03') && (param_2 != 0)) {
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(param_2 + 0x2c70) != 0)) {
      iVar1 = (int)param_1[0xe4];
      *(int *)(param_1 + 0xe4) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x724) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe3,iVar1);
      }
      *(longlong *)(param_1[0xe3] + (longlong)iVar1 * 8) = param_2;
      if ((*(char *)((longlong)param_1 + 0x4fb) != '\x02') &&
         (cVar3 = FUN_140aceb80(param_1), cVar3 != '\0')) {
        (**(code **)(*param_1 + 0x730))(param_1,2);
      }
      if ((param_1[0xe5] == 0) && (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) {
        uStack_a0 = 0;
        local_a8 = FUN_140ae0b80;
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          *(undefined4 *)(plVar6 + 2) = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_a8._4_4_;
          *(undefined4 *)(plVar6 + 3) = uStack_a0;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_9c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar5;
          *plVar6 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_b0 = 0x3e4ccccd;
        local_b8 = 1;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar7,param_1 + 0xe5,&local_98);
        if (local_38 != 0) {
          plVar8 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar8 = local_48;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          lVar5 = FMemory::Realloc(plVar6,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140adbb20 FUN_140adbb20 body=193 status=ok
// SIG undefined FUN_140adbb20(void)

void FUN_140adbb20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  thunk_FUN_1428e00b0();
  if (*(char *)(param_1 + 0x58a) == '\0') {
    return;
  }
  if (param_2 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = *(longlong *)(param_2 + 0x2c70);
      goto LAB_140adbb88;
    }
  }
  lVar4 = 0;
LAB_140adbb88:
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x638);
    plVar1 = plVar5 + *(int *)(param_1 + 0x640);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x4d8) == lVar4)) {
        FUN_1412d98f0(lVar2);
        break;
      }
    }
    FUN_140ae32c0(param_1,lVar4,0);
  }
  return;
}



// FUNCTION 140adbbf0 FUN_140adbbf0 body=403 status=ok
// SIG undefined FUN_140adbbf0(void)

void FUN_140adbbf0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_res8;
  
  thunk_FUN_1428e00b0();
  if (*(char *)((longlong)param_1 + 0x58a) == '\0') goto LAB_140adbcb7;
  if (param_2 == 0) {
LAB_140adbc5b:
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140adbc5b;
    lVar4 = *(longlong *)(param_2 + 0x2c70);
  }
  if (lVar4 != 0) {
    plVar5 = (longlong *)param_1[199];
    plVar1 = plVar5 + (int)param_1[200];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x4d8) == lVar4)) {
        FUN_1412d98f0(lVar2);
        break;
      }
    }
    FUN_140ae32c0(param_1,lVar4,0);
  }
LAB_140adbcb7:
  if (((char)param_1[0x25] == '\x03') && (param_2 != 0)) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (*(longlong *)(param_2 + 0x2c70) != 0)) &&
       (local_res8 = param_2, TArray<FName,FDefaultAllocator>::Remove(param_1 + 0xe3,&local_res8),
       (int)param_1[0xe4] == 0)) {
      FUN_140ae0b80(param_1);
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 400) == 0) {
          uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
        }
        FUN_142880530(uVar6,param_1 + 0xe5);
        param_1[0xe5] = 0;
      }
    }
  }
  return;
}



// FUNCTION 140adbd90 FUN_140adbd90 body=451 status=ok
// SIG undefined FUN_140adbd90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140adbd90(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    local_98 = FUN_140acf9d0;
    uStack_90 = 0;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    FUN_142880af0(uVar3,&local_88);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140adbf60 FUN_140adbf60 body=498 status=ok
// SIG undefined FUN_140adbf60(void)

void FUN_140adbf60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res10;
  
  if (param_2 != (longlong *)0x0) {
    local_res10 = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0xc5,&local_res10);
    if (((char)param_1[0x25] == '\x03') &&
       (lVar4 = param_1[0xc4], bVar2 = 0 < (int)param_1[0xc6], *(bool *)(param_1 + 0xc4) = bVar2,
       (bool)(char)lVar4 != bVar2)) {
      (**(code **)(*param_1 + 0x600))(param_1);
    }
    if ((char)param_1[0xb1] != '\0') {
      FUN_140ae35f0(param_1,param_2,1);
    }
    if (*(char *)((longlong)param_1 + 0x589) != '\0') {
      FUN_140ae3750(param_1,param_2,1);
    }
    cVar3 = (**(code **)(*param_2 + 0x768))(param_2);
    if (cVar3 != '\0') {
      plVar6 = (longlong *)param_1[199];
      plVar1 = plVar6 + (int)param_1[200];
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        plVar7 = (longlong *)*plVar6;
        if ((plVar7 != (longlong *)0x0) && ((longlong *)plVar7[0x9b] == param_2)) {
          (**(code **)(*plVar7 + 0x720))(plVar7);
          goto LAB_140adc042;
        }
      }
      plVar7 = (longlong *)0x0;
LAB_140adc042:
      if (*(char *)((longlong)param_1 + 0x58b) != '\0') {
        FUN_140ccf680(param_2,0);
      }
      if ((char)param_1[0xbe] != '\0') {
        FUN_140ae2d20(param_1,1,param_2);
      }
      if (param_1[0xbd] == 0) {
        FWeakObjectPtr::operator=(&local_res10,0);
        *(undefined4 *)(param_1 + 0xca) = (undefined4)local_res10;
        *(undefined4 *)((longlong)param_1 + 0x654) = local_res10._4_4_;
      }
      else {
        lVar4 = (**(code **)(*param_2 + 0xfa8))(param_2);
        if (lVar4 != 0) {
          uVar5 = FUN_142f02280(lVar4,param_1[0xbd]);
          FWeakObjectPtr::operator=(param_1 + 0xca,uVar5);
          uVar5 = FWeakObjectPtr::Get(param_1 + 0xca);
          (**(code **)(*param_1 + 0x7a0))(param_1,uVar5);
          if (plVar7 != (longlong *)0x0) {
            uVar5 = FWeakObjectPtr::Get(param_1 + 0xca);
            (**(code **)(*plVar7 + 0x718))(plVar7,uVar5);
          }
        }
      }
    }
    FUN_1412d99b0(param_1,param_2);
    local_res10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xb2,&local_res10);
  }
  return;
}



// FUNCTION 140adc160 FUN_140adc160 body=554 status=ok
// SIG undefined FUN_140adc160(void)

void FUN_140adc160(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_res10;
  
  if (param_2 != (longlong *)0x0) {
    local_res10 = param_2;
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0xc5,&local_res10);
    if (((char)param_1[0x25] == '\x03') &&
       (lVar7 = param_1[0xc4], bVar3 = 0 < (int)param_1[0xc6], *(bool *)(param_1 + 0xc4) = bVar3,
       (bool)(char)lVar7 != bVar3)) {
      (**(code **)(*param_1 + 0x600))(param_1);
    }
    plVar4 = local_res10;
    if ((char)param_1[0xb1] != '\0') {
      FUN_140ae35f0(param_1,local_res10,0);
    }
    if (((*(char *)((longlong)param_1 + 0x589) != '\0') && (plVar4 != (longlong *)0x0)) &&
       (lVar7 = plVar4[0x109], lVar7 != 0)) {
      lVar6 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        (**(code **)(*(longlong *)(lVar7 + 0xd88) + 0x108))
                  ((longlong *)(lVar7 + 0xd88),DAT_146868128,0xffffffff);
      }
    }
    cVar5 = (**(code **)(*plVar4 + 0x768))(plVar4);
    if (cVar5 != '\0') {
      plVar9 = (longlong *)param_1[199];
      plVar2 = plVar9 + (int)param_1[200];
      for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
        plVar1 = (longlong *)*plVar9;
        if ((plVar1 != (longlong *)0x0) && ((longlong *)plVar1[0x9b] == plVar4)) {
          (**(code **)(*plVar1 + 0x728))(plVar1,param_3);
          break;
        }
      }
      if ((char)param_1[0xbe] != '\0') {
        FUN_140ae2d20(param_1,0,plVar4);
      }
      if (param_1[0xbd] != 0) {
        lVar7 = (**(code **)(*plVar4 + 0xfa8))(plVar4);
        if (lVar7 != 0) {
          if ((*(int *)(lVar7 + 0x48) < 1) ||
             (plVar2 = *(longlong **)
                        (*(longlong *)(lVar7 + 0x40) + -8 + (longlong)*(int *)(lVar7 + 0x48) * 8),
             plVar2 == (longlong *)0x0)) {
            lVar6 = 0;
          }
          else {
            lVar6 = (**(code **)(*plVar2 + 0x278))();
          }
          lVar8 = FWeakObjectPtr::Get(param_1 + 0xca);
          if (lVar6 == lVar8) {
            FUN_142f001d0(lVar7);
          }
        }
        FWeakObjectPtr::operator=(&local_res10,0);
        *(undefined4 *)(param_1 + 0xca) = (undefined4)local_res10;
        *(undefined4 *)((longlong)param_1 + 0x654) = local_res10._4_4_;
      }
      if (*(char *)((longlong)param_1 + 0x58b) != '\0') {
        FUN_140ccf680(plVar4,1);
      }
    }
    FUN_1412d9a70(param_1,plVar4);
    local_res10 = plVar4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xb4,&local_res10);
  }
  return;
}



// FUNCTION 140adc3a0 FUN_140adc3a0 body=797 status=ok
// SIG undefined FUN_140adc3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140adc3a0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  if (param_2 != (longlong *)0x0) {
    FUN_140ae8e10();
    iVar8 = FUN_140ad38c0(param_2,param_1);
    if (iVar8 == -1) {
      (**(code **)(*param_2 + 0x148))(param_2);
      local_68 = 0;
      local_78 = 0xffffffff;
      uStack_70 = 0xffffffff;
      FWeakObjectPtr::operator=(&local_78,param_2);
      FWeakObjectPtr::operator=(&uStack_70,0);
      iVar8 = (int)param_1[1];
      lVar12 = (longlong)iVar8;
      *(int *)(param_1 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar8);
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar1 + lVar12 * 0x14) = (undefined4)local_78;
      *(undefined4 *)(lVar1 + 4 + lVar12 * 0x14) = local_78._4_4_;
      *(undefined4 *)(lVar1 + 8 + lVar12 * 0x14) = (undefined4)uStack_70;
      *(undefined4 *)(lVar1 + 0xc + lVar12 * 0x14) = uStack_70._4_4_;
      *(undefined1 *)(lVar1 + 0x10 + lVar12 * 0x14) = local_68;
    }
    cVar7 = FUN_140ae7c00(param_1,param_2,param_3,1);
    if (cVar7 == '\0') {
      uVar9 = FUN_142e79d90();
      lVar12 = (**(code **)(*param_2 + 0x628))(param_2,uVar9);
      if (lVar12 != 0) {
        lVar1 = param_2[0x2d];
        lVar14 = 0;
        fVar18 = 999999.0;
        if (lVar1 == 0) {
          local_88 = _DAT_1468b5d90;
          local_80 = DAT_1468b5d98;
        }
        else {
          local_88 = *(undefined8 *)(lVar1 + 0x220);
          local_80 = *(float *)(lVar1 + 0x228);
        }
        local_98 = local_88;
        local_90 = local_80;
        plVar10 = (longlong *)FUN_142dd0650(lVar12);
        fVar6 = local_90;
        plVar13 = (longlong *)*plVar10;
        plVar10 = plVar13 + (int)plVar10[1];
        if (plVar13 != plVar10) {
          fVar5 = local_98._4_4_;
          fVar4 = (float)local_98;
          do {
            plVar2 = *(longlong **)(*plVar13 + 0x118);
            if (plVar2 != (longlong *)0x0) {
              lVar12 = FUN_1428dfc70();
              if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
                  lVar12 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((bVar3) && (lVar12 = (**(code **)(*plVar2 + 0x688))(plVar2), lVar12 != 0)) {
                lVar1 = *(longlong *)(lVar12 + 0x168);
                if (lVar1 == 0) {
                  local_90 = DAT_1468b5d98;
                  puVar11 = &local_98;
                  local_98 = _DAT_1468b5d90;
                }
                else {
                  puVar11 = &local_88;
                  local_80 = *(float *)(lVar1 + 0x228);
                  local_88 = *(undefined8 *)(lVar1 + 0x220);
                }
                uStack_70 = CONCAT44(uStack_70._4_4_,*(float *)(puVar11 + 1));
                fVar16 = (float)*puVar11 - fVar4;
                fVar15 = *(float *)(puVar11 + 1) - fVar6;
                fVar17 = (float)((ulonglong)*puVar11 >> 0x20) - fVar5;
                fVar15 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15);
                if (fVar15 < fVar18) {
                  lVar14 = lVar12;
                  fVar18 = fVar15;
                }
              }
            }
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar10);
          if (lVar14 != 0) {
            FUN_140ae7c00(param_1,param_2,lVar14,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140adc6c0 FUN_140adc6c0 body=1063 status=ok
// SIG undefined FUN_140adc6c0(void)

void FUN_140adc6c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  plVar11 = *(longlong **)(param_3 + 0x58);
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if ((plVar11[0x1f] == 0) && ((**(code **)(*plVar11 + 0x368))(plVar11), plVar11[0x1f] == 0)) {
    return;
  }
  if (((*(byte *)(param_3 + 0x100) & 4) != 0) ||
     (bVar2 = false, (byte)(*(char *)(param_3 + 0x2f0) - 1U) < 2)) {
    bVar2 = true;
  }
  lVar12 = 0x2f8;
  if (bVar2) {
    lVar7 = 0x2f8;
    if (1 < (byte)(*(char *)(param_3 + 0x2f0) - 1U)) {
      lVar7 = 0x104;
    }
    local_38 = *(undefined8 *)(lVar7 + param_3);
    local_30 = *(float *)(lVar7 + 8 + param_3);
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0x110);
    local_30 = *(float *)(param_3 + 0x118);
  }
  lVar7 = param_1 + -0x490;
  cVar3 = FUN_140ad4490(lVar7,&local_38,&local_48);
  if (cVar3 == '\0') {
    return;
  }
  plVar11 = *(longlong **)(param_3 + 0x58);
  if (plVar11 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = plVar11[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x368))(plVar11);
      lVar9 = plVar11[0x1f];
    }
  }
  plVar11 = *(longlong **)(param_3 + 0x50);
  if (plVar11 != (longlong *)0x0) {
    lVar8 = plVar11[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x368))(plVar11);
      lVar8 = plVar11[0x1f];
      if (lVar8 == 0) goto LAB_140adc855;
    }
    lVar5 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140adc857;
  }
LAB_140adc855:
  lVar8 = 0;
LAB_140adc857:
  if (((((byte)(*(char *)(param_3 + 0x2f0) - 1U) < 2) && (*(char *)(lVar9 + 0xb1) == '\0')) &&
      (lVar8 != 0)) &&
     (((*(byte *)(lVar8 + 0x88) & 4) != 0 &&
      (lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38), lVar8 != 0)))) {
    if (1 < (byte)(*(char *)(param_3 + 0x2f0) - 1U)) {
      lVar12 = 0x104;
    }
    fVar16 = *(float *)(lVar12 + 8 + param_3);
    if (fVar16 < local_40) {
      fVar16 = local_40;
    }
    local_38._0_4_ = (float)*(undefined8 *)(lVar12 + param_3);
    fVar15 = (float)local_38 - (float)local_48;
    local_38._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar12 + param_3) >> 0x20);
    fVar14 = local_38._4_4_ - local_48._4_4_;
    local_30 = local_40;
    local_38 = local_48;
    FUN_142d41c10(lVar8,*(float *)(param_3 + 0x304) -
                        SQRT(fVar15 * fVar15 + fVar14 * fVar14 +
                             (fVar16 - local_40) * (fVar16 - local_40)),&local_38,lVar7,0);
  }
  iVar4 = FUN_142235230(lVar7);
  if ((iVar4 != 3) && (lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48), lVar12 != 0)) {
    lVar12 = *(longlong *)(lVar12 + 0x30);
    lVar9 = *(longlong *)(lVar9 + 0x10);
    if (lVar12 != 0) {
      plVar11 = *(longlong **)(lVar12 + 0x40);
      plVar13 = plVar11 + (longlong)*(int *)(lVar12 + 0x48) * 0x1f;
      for (; plVar11 != plVar13; plVar11 = plVar11 + 0x1f) {
        lVar12 = *plVar11;
        if (lVar12 != 0) {
          plVar10 = (longlong *)(lVar12 + 0x40);
          if (*(longlong *)(lVar12 + 0x40) != 0) {
            lVar5 = FUN_142e49950();
            for (lVar8 = *plVar10; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
              if (lVar8 == lVar5) {
                if (*plVar10 != 0) goto LAB_140adc9e9;
                break;
              }
            }
          }
          plVar10 = (longlong *)(lVar12 + 0x38);
LAB_140adc9e9:
          lVar12 = *plVar10;
          if (lVar12 != 0) {
            lVar5 = FUN_142e49950();
            lVar8 = lVar12;
            do {
              if (lVar8 == lVar5) goto LAB_140adca10;
              lVar8 = *(longlong *)(lVar8 + 0x30);
            } while (lVar8 != 0);
          }
          lVar12 = 0;
LAB_140adca10:
          if (lVar9 != 0) {
            lVar5 = FUN_142e49950();
            lVar8 = lVar9;
            do {
              lVar6 = lVar9;
              if (lVar8 == lVar5) goto LAB_140adca30;
              lVar8 = *(longlong *)(lVar8 + 0x30);
            } while (lVar8 != 0);
          }
          lVar6 = 0;
LAB_140adca30:
          if (lVar12 == lVar6) {
            lVar12 = *plVar11;
            if (((*(byte *)(param_3 + 0x100) & 4) != 0) ||
               (bVar2 = false, (byte)(*(char *)(param_3 + 0x2f0) - 1U) < 2)) {
              bVar2 = true;
            }
            if ((!bVar2) &&
               (iVar4 = rand(), pfVar1 = (float *)(lVar12 + 0x88),
               *pfVar1 <= (float)iVar4 * 3.051851e-05 && (float)iVar4 * 3.051851e-05 != *pfVar1)) {
              return;
            }
            lVar7 = FUN_140ae3ee0(lVar7,&local_48);
            if (lVar7 == 0) {
              return;
            }
            FUN_140abd580(*(undefined8 *)(lVar7 + 0x4d8),&local_48,lVar12,
                          *(undefined8 *)(param_3 + 0x48));
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140adcaf0 FUN_140adcaf0 body=86 status=ok
// SIG undefined FUN_140adcaf0(void)

void FUN_140adcaf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x498) != *(longlong *)(param_1 + 0x118))) {
    lVar1 = FUN_142df3710(param_2);
    if ((lVar1 != 0) && (*(char *)(param_1 + 0x10e5) == '\x01')) {
      FUN_140accb60(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 140adcb50 FUN_140adcb50 body=170 status=ok
// SIG undefined FUN_140adcb50(void)

void FUN_140adcb50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x498) != *(longlong *)(param_1 + 0x118))) {
    lVar2 = FUN_142df3710(param_2);
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(param_1 + 0x10c8);
      plVar1 = plVar3 + *(int *)(param_1 + 0x10d0);
      if (plVar3 != plVar1) {
        while (*plVar3 != lVar2) {
          plVar3 = plVar3 + 1;
          if (plVar3 == plVar1) {
            return;
          }
        }
        if ((*(char *)(param_1 + 0x10e6) == '\x01') && (*(int *)(param_1 + 0x10d0) < 2)) {
          FUN_140accfa0(param_1,0);
          return;
        }
        FUN_140ae1290(param_1,lVar2,0);
      }
    }
  }
  return;
}



// FUNCTION 140adcc00 FUN_140adcc00 body=107 status=ok
// SIG undefined FUN_140adcc00(void)

void FUN_140adcc00(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((char)param_2[2] == '\0') && (lVar1 = *param_2, lVar1 != 0)) {
    lVar3 = FUN_14145f370();
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
      FUN_140d12c50(lVar1,param_1,0);
    }
  }
  return;
}



// FUNCTION 140adcc70 FUN_140adcc70 body=240 status=ok
// SIG undefined FUN_140adcc70(void)

void FUN_140adcc70(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140adccc5;
  }
  lVar3 = 0;
LAB_140adccc5:
  if (*(char *)(param_1 + 0x4fc) == '\x01') {
    if (*(char *)(param_1 + 0x4fb) == '\x02') {
      if ((char)param_2[2] != '\0') {
        return;
      }
      lVar3 = *param_2;
      if (lVar3 == 0) {
        return;
      }
      lVar2 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      FUN_140d12c50(lVar3,param_1,0);
      return;
    }
    param_1 = param_1 + 0x6f8;
  }
  else {
    param_1 = param_1 + 0x6e0;
  }
  FUN_14145da30(lVar3,param_1);
  return;
}



// FUNCTION 140adcd70 FUN_140adcd70 body=740 status=ok
// SIG undefined FUN_140adcd70(void)

void FUN_140adcd70(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  char cVar11;
  undefined8 local_a8;
  undefined4 local_a0;
  char local_9c;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78;
  undefined1 local_77;
  char local_76;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  plVar7 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x118), plVar9 != (longlong *)0x0)) {
    lVar6 = FUN_1429d7ab0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140adcde7;
  }
  plVar9 = plVar7;
LAB_140adcde7:
  plVar10 = plVar7;
  if (((*(uint *)(*param_2 + 8) >> 4 & 1) == 0) &&
     (plVar1 = *(longlong **)(*param_2 + 0x20), plVar1 != (longlong *)0x0)) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar7 = (longlong *)FUN_140cff230(plVar1);
      plVar10 = plVar1;
    }
  }
  if (((plVar9 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) && (plVar7 != (longlong *)0x0))
  {
    uVar3 = 0;
    uVar4 = 0;
    cVar11 = '\0';
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar3 = (**(code **)(*plVar9 + 0xa60))(plVar9);
      uVar4 = FUN_140c491e0(plVar9);
    }
    lVar6 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((!bVar2) || (plVar9[0xa3] == 0)) ||
        (cVar11 = *(char *)(plVar9[0xa3] + 0x6e4), cVar11 == '\0')) &&
       (cVar5 = FUN_140ac4a70(plVar9), cVar5 != '\0')) {
      cVar11 = '\x01';
    }
    local_68 = 0;
    uStack_60 = 0;
    local_74 = 0;
    local_6c = 0;
    local_58 = 0;
    local_50 = '\0';
    local_4c = 0;
    local_44 = 0;
    local_98 = plVar9;
    local_90 = plVar10;
    local_88 = plVar7;
    local_80 = param_2;
    local_78 = uVar3;
    local_77 = uVar4;
    local_76 = cVar11;
    FUN_140acd7b0(param_1,&local_98,param_3,param_4);
    FUN_140adffd0(param_1,&local_98);
    lVar6 = FScene::GetAtmosphericFogSceneInfo(plVar10);
    if ((local_50 != '\0') && (lVar6 != 0)) {
      *(undefined1 *)(lVar6 + 0x79) = 1;
    }
    lVar6 = plVar10[0x26];
    if (lVar6 != 0) {
      lVar8 = UUGGameViewportClient::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(char *)(lVar6 + 0x2e8) = local_50;
      }
    }
    local_a0 = local_44;
    local_9c = local_50;
    local_a8 = local_4c;
    FUN_14067ef70(param_1,&local_4c,&local_a8);
  }
  return;
}



// FUNCTION 140add060 FUN_140add060 body=1475 status=ok
// SIG undefined FUN_140add060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140add060(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  char cVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res10 [2];
  undefined4 local_e4;
  undefined4 local_e0 [2];
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  float local_90;
  char local_8c;
  
  if (((*(uint *)(*param_2 + 8) >> 4 & 1) == 0) &&
     (lVar3 = *(longlong *)(*param_2 + 0x20), lVar3 != 0)) {
    local_a8 = lVar3;
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar9 = FUN_140cff230(lVar3);
      local_a0 = FScene::GetAtmosphericFogSceneInfo(lVar3);
      if (lVar9 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x488);
        cVar16 = '\0';
        if (lVar4 != 0) {
          lVar10 = AGTutorialStepVideo::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          cVar16 = '\0';
          if ((((!bVar5) || (*(longlong *)(lVar4 + 0x518) == 0)) ||
              (cVar16 = *(char *)(*(longlong *)(lVar4 + 0x518) + 0x6e4), cVar16 == '\0')) &&
             (cVar7 = FUN_140ac4a70(lVar4), cVar7 != '\0')) {
            cVar16 = '\x01';
          }
        }
        cVar15 = '\0';
        local_d8 = 0.0;
        fStack_d4 = 0.0;
        local_d0 = 0.0;
        cVar7 = *(char *)(lVar9 + 0x2d);
        local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,cVar7);
        cVar2 = *(char *)(lVar9 + 0x2e);
        uVar12 = (ulonglong)(*(ulonglong *)(param_4 + 0x140) != 0) - 1 & param_4 |
                 *(ulonglong *)(param_4 + 0x140);
        uVar13 = (longlong)*(int *)(param_4 + 0x148) * 0x20 + uVar12;
        for (; uVar12 != uVar13; uVar12 = uVar12 + 0x20) {
          local_res10[0] = *(float *)(uVar12 + 0x18);
          cVar8 = FKey::IsGamepadKey(uVar12);
          if (cVar8 != '\0') {
            FUN_140679df0(param_3,&local_b8,uVar12);
            if (cVar16 == '\0') {
              if (((local_b8 == 1.0) && (local_b4 == 0.0)) && (local_b0 == 0.0)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if (bVar5) {
                local_e4 = *(undefined4 *)(lVar9 + 0xbc);
              }
              else {
                if (((local_b8 == 0.0) && (local_b4 == 1.0)) && (local_b0 == 0.0)) {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if (!bVar5) {
                  if (((local_b8 == 0.0) && (local_b4 == -1.0)) && (local_b0 == 0.0)) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  if (!bVar5) goto LAB_140add397;
                }
                local_e4 = *(undefined4 *)(lVar9 + 0xc0);
              }
LAB_140add32a:
              puVar14 = local_e0;
              local_e0[0] = 0;
              puVar11 = &local_e4;
            }
            else {
              if (((local_b8 == 1.0) && (local_b4 == 0.0)) && (local_b0 == 0.0)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if (!bVar5) {
                if (((local_b8 == 0.0) && (local_b4 == 1.0)) && (local_b0 == 0.0)) {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if (!bVar5) {
                  if (((local_b8 == 0.0) && (local_b4 == -1.0)) && (local_b0 == 0.0)) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  if (!bVar5) goto LAB_140add397;
                }
                local_e4 = *(undefined4 *)(lVar9 + 0xd8);
                goto LAB_140add32a;
              }
              local_e0[0] = *(undefined4 *)(lVar9 + 0xd4);
              puVar14 = &local_e4;
              puVar11 = local_e0;
              local_e4 = 0;
            }
            local_res10[0] = (float)FUN_140677ab0(local_res10,puVar11,puVar14);
          }
LAB_140add397:
          if (0.0001 <= ABS(local_res10[0])) {
            FUN_140679e30(param_3,&local_c8,uVar12);
            cVar8 = FKey::IsGamepadKey(uVar12);
            if (cVar8 == '\0') {
              local_d8 = local_d8 + local_c8;
              fStack_d4 = fStack_d4 + local_c4;
              local_d0 = local_d0 + local_c0;
            }
            else {
              cVar15 = '\x01';
              if (cVar7 != '\0') {
                local_c8 = local_c8 * _DAT_146296558;
                local_c4 = local_c4 * _DAT_14629655c;
                local_c0 = local_c0 * _DAT_146296560;
              }
              if (cVar2 != '\0') {
                local_c8 = local_c8 * _DAT_146296568;
                local_c4 = local_c4 * _DAT_14629656c;
                local_c0 = local_c0 * _DAT_146296570;
              }
              local_d8 = local_d8 + local_c8;
              fStack_d4 = fStack_d4 + local_c4;
              local_d0 = local_d0 + local_c0;
            }
          }
          lVar3 = local_a8;
        }
        fVar1 = *(float *)(lVar3 + 0x1210);
        fVar18 = ABS(local_d8);
        fVar19 = *(float *)(lVar3 + 0x1214) * *(float *)(lVar9 + 0x104);
        fVar17 = ABS(fStack_d4);
        if ((fVar18 <= fVar1) || (fVar18 <= fVar17)) {
          if ((fVar1 < fVar17) && (fVar18 < fVar17)) {
            fVar19 = (fVar17 - fVar1) * fVar19;
            if (fVar19 <= fVar18) {
              bVar5 = 0.0 <= local_d8;
              bVar6 = local_d8 <= 0.0;
              local_d8 = ((fVar18 - fVar19) / (fVar17 - fVar19)) * fVar17;
              if (bVar6) {
                if (bVar5) {
                  local_d8 = 0.0;
                }
                else {
                  local_d8 = ((fVar19 - fVar18) / (fVar17 - fVar19)) * fVar17;
                }
              }
            }
            else {
              local_d8 = 0.0;
            }
          }
        }
        else {
          fVar19 = (fVar18 - fVar1) * fVar19;
          if (fVar19 <= fVar17) {
            bVar5 = fStack_d4 < 0.0;
            bVar6 = fStack_d4 <= 0.0;
            fStack_d4 = ((fVar17 - fVar19) / (fVar18 - fVar19)) * fVar18;
            if (bVar6) {
              if (bVar5) {
                fStack_d4 = ((fVar19 - fVar17) / (fVar18 - fVar19)) * fVar18;
              }
              else {
                fStack_d4 = 0.0;
              }
            }
          }
          else {
            fStack_d4 = 0.0;
          }
        }
        if ((cVar15 != '\0') && (local_a0 != 0)) {
          *(undefined1 *)(local_a0 + 0x78) = 1;
        }
        local_98 = CONCAT44(fStack_d4,local_d8);
        local_90 = local_d0;
        local_8c = cVar15;
        FUN_14067ef70(param_1,&local_d8,&local_98);
      }
    }
  }
  return;
}



// FUNCTION 140add630 FUN_140add630 body=772 status=ok
// SIG undefined FUN_140add630(void)

void FUN_140add630(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res10 [2];
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  undefined1 local_94;
  
  if (((*(uint *)(*param_2 + 8) >> 4 & 1) == 0) &&
     (lVar4 = *(longlong *)(*param_2 + 0x20), lVar4 != 0)) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x980) + 0x28))(), lVar4 != 0)) {
      uVar7 = 0;
      uVar8 = 0;
      fVar10 = 0.0;
      uVar6 = (ulonglong)(*(ulonglong *)(param_4 + 0x140) != 0) - 1 & param_4 |
              *(ulonglong *)(param_4 + 0x140);
      fVar11 = 0.0;
      uVar9 = (longlong)*(int *)(param_4 + 0x148) * 0x20 + uVar6;
      local_a8 = 0.0;
      fVar12 = 0.0;
      if (uVar6 != uVar9) {
        do {
          local_res10[0] = *(float *)(uVar6 + 0x18);
          cVar2 = FKey::IsGamepadKey(uVar6);
          if (cVar2 != '\0') {
            local_c4 = *(undefined4 *)(lVar4 + 0x9c);
            local_c8 = 0;
            local_res10[0] = (float)FUN_140677ab0(local_res10,&local_c4,&local_c8);
          }
          if (0.0001 <= ABS(local_res10[0])) {
            FUN_140679e30(param_3,&local_c0,uVar6);
            local_bc = local_bc * -1.0;
            cVar2 = FKey::IsGamepadKey(uVar6);
            fVar10 = fVar10 + local_b8;
            fVar11 = fVar11 + local_c0;
            fVar12 = fVar12 + local_bc;
            uVar8 = uVar7;
            local_a8 = fVar10;
            if (cVar2 != '\0') {
              uVar7 = 1;
              uVar8 = 1;
            }
          }
          uVar6 = uVar6 + 0x20;
        } while (uVar6 != uVar9);
      }
      local_98 = local_a8;
      local_a0 = CONCAT44(fVar12,fVar11);
      if (((0.0001 < ABS(fVar11)) || (0.0001 < ABS(fVar12))) || (0.0001 < ABS(fVar10))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(char *)(param_1 + 0x70) == '\0') {
        if (bVar1) {
          return;
        }
        *(undefined1 *)(param_1 + 0x70) = 1;
        puVar5 = &DAT_1468680d0;
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
      else if (bVar1) {
        *(undefined1 *)(param_1 + 0x70) = 0;
        puVar5 = &DAT_1468680e0;
      }
      else {
        fVar10 = *(float *)(param_2 + 1) + *(float *)(param_1 + 0x74);
        *(float *)(param_1 + 0x74) = fVar10;
        if (fVar10 < *(float *)(param_1 + 0x78)) {
          return;
        }
        puVar5 = &DAT_1468680d8;
        *(float *)(param_1 + 0x74) = fVar10 - *(float *)(param_1 + 0x78);
      }
      local_94 = uVar8;
      FUN_14067efd0(param_1,puVar5,&local_a0);
    }
  }
  return;
}



// FUNCTION 140add940 FUN_140add940 body=572 status=ok
// SIG undefined FUN_140add940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140add940(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_1[0xaa] == 0) {
    plVar5 = param_1 + 0xa8;
    local_a8 = FUN_140ae7160;
    uStack_a0 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_9c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    if (&local_a8 != plVar5) {
      if (plVar2 == (longlong *)0x0) {
        if (((int)param_1[0xa9] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0))
        {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar5 != 0) {
            lVar3 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar3;
          }
          *(undefined4 *)(param_1 + 0xa9) = 0;
        }
      }
      else {
        (**(code **)(*plVar2 + 0x30))(plVar2,plVar5);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    local_98 = 0;
    local_90 = 0;
    if (((plVar5 != &local_98) && ((int)param_1[0xa9] != 0)) &&
       (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    local_b0 = 0;
    local_b8 = 1;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0xaa,&local_98,0x3e4ccccd);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  }
  return;
}



// FUNCTION 140addb80 FUN_140addb80 body=40 status=ok
// SIG undefined FUN_140addb80(void)

void FUN_140addb80(longlong param_1,longlong param_2,longlong param_3)

{
  if ((((param_3 != 0) && (param_3 != param_1)) && (param_2 != param_3)) &&
     (*(char *)(*(longlong *)(param_1 + 0x510) + 0x183) == '\0')) {
    FUN_140ab5ab0(*(longlong *)(param_1 + 0x510),param_3);
    return;
  }
  return;
}



// FUNCTION 140addbb0 FUN_140addbb0 body=608 status=ok
// SIG undefined FUN_140addbb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140addbb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res18 [4];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_3 != (longlong *)0x0) {
    uVar3 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
    lVar4 = (**(code **)(*param_3 + 0x628))(param_3,uVar3);
    if ((lVar4 != 0) &&
       ((*(longlong *)(lVar4 + 0x1d0) != param_1 || (*(int *)(param_1 + 0x528) != 1)))) {
      if (*(int *)(param_1 + 0x528) == 1) {
        lVar9 = *(longlong *)(param_1 + 0x498);
        lVar6 = 0;
        lVar8 = lVar6;
        if (lVar9 != 0) {
          lVar6 = *(longlong *)(lVar9 + 0x48);
          lVar8 = *(longlong *)(lVar9 + 0x40);
        }
        if ((lVar8 == 0) || (lVar6 == 0)) {
          FUN_140a5c1d0(lVar4,param_1);
        }
        else {
          FUN_140a71110(lVar4,param_1,0,*(undefined8 *)(lVar8 + 0x38),*(undefined8 *)(lVar6 + 0x110)
                        ,**(undefined4 **)(param_1 + 0x520));
        }
      }
      else {
        plVar1 = *(longlong **)(lVar4 + 0x118);
        if (plVar1 != (longlong *)0x0) {
          lVar9 = plVar1[0x2d];
          if (lVar9 == 0) {
            local_38 = _DAT_1468b5d90;
            local_30 = DAT_1468b5d98;
          }
          else {
            local_38 = *(undefined8 *)(lVar9 + 0x220);
            local_30 = *(undefined4 *)(lVar9 + 0x228);
          }
          (**(code **)(*plVar1 + 0x578))(plVar1,local_res18,local_48);
          lVar6 = *(longlong *)(param_1 + 0x520);
          local_20 = local_30;
          local_28 = local_38;
          lVar9 = lVar6 + (longlong)*(int *)(param_1 + 0x528) * 0x18;
          if (lVar6 != lVar9) {
            local_2c = local_res18[0];
            lVar8 = lVar6;
            do {
              lVar5 = FUN_140ac42a0(lVar8 + 8,&local_38);
              if (lVar5 != 0) {
                uVar7 = (undefined4)((lVar8 - lVar6) / 0x18);
                goto LAB_140addd91;
              }
              lVar8 = lVar8 + 0x18;
            } while (lVar8 != lVar9);
          }
          uVar7 = 0xffffffff;
LAB_140addd91:
          FUN_140ae3a10(param_1,lVar4,uVar7);
        }
      }
    }
    lVar4 = FUN_14148cad0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)(param_3 + 0x259) = 1;
    }
  }
  return;
}



// FUNCTION 140adde20 FUN_140adde20 body=8 status=ok
// SIG undefined FUN_140adde20(void)

void FUN_140adde20(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x4d6) = 0;
  return;
}



// FUNCTION 140adde30 FUN_140adde30 body=149 status=ok
// SIG undefined FUN_140adde30(void)

void FUN_140adde30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x96] != 0) {
    FUN_141218b10(param_1[0x96],0,0,0,0,0);
  }
  if (param_1[0x94] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_1 + 0x94);
      param_1[0x94] = 0;
    }
  }
  return;
}



// FUNCTION 140added0 FUN_140added0 body=168 status=ok
// SIG undefined FUN_140added0(void)

void FUN_140added0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x538);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x530);
      if (*(longlong *)(lVar5 + lVar1) == param_2) {
        iVar2 = (iVar3 - iVar4) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar4 * 8),
                     (void *)(lVar1 + (longlong)(iVar3 - iVar2) * 8),(longlong)iVar2 << 3);
          iVar3 = *(int *)(param_1 + 0x538);
        }
        *(int *)(param_1 + 0x538) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x530));
        iVar3 = *(int *)(param_1 + 0x538);
        iVar4 = iVar4 + -1;
        lVar5 = lVar5 + -8;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 140addf80 FUN_140addf80 body=320 status=ok
// SIG undefined FUN_140addf80(void)

void FUN_140addf80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  if (param_1[0x9e] != 0) {
    uVar4 = FUN_140aac400();
    lVar2 = param_1[0x23];
    if ((lVar2 == 0) || (-1 < *(char *)(lVar2 + 0x4a0))) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar2 + 0x4f0);
    }
    FUN_140ad9fb0(param_1[0x9e],param_1,param_1[0xc3],uVar4,uVar6);
    uVar4 = FUN_140aac400(param_1);
    FUN_140ad99e0(param_1[0x9e],param_1,uVar4,0);
    FUN_140aa85c0(param_1,0x3f800000);
  }
  iVar3 = FUN_142235230(param_1);
  if (iVar3 != 3) {
    FUN_140ac2bf0(param_1);
    lVar2 = param_1[0x9b];
    if (*(char *)((longlong)param_1 + 0x621) == '\0') {
      if ((*(longlong *)(lVar2 + 0x248) == 0) &&
         (*(longlong *)(lVar2 + 0x238) == *(longlong *)(lVar2 + 0x188))) {
        *(undefined1 *)((longlong)param_1 + 0x621) = 0;
        return;
      }
      *(undefined1 *)((longlong)param_1 + 0x621) = 1;
      return;
    }
    if ((*(longlong *)(lVar2 + 0x248) == 0) &&
       (*(longlong *)(lVar2 + 0x238) == *(longlong *)(lVar2 + 0x188))) {
      plVar5 = *(longlong **)(param_1[0x23] + 0x530);
      plVar1 = plVar5 + *(int *)(param_1[0x23] + 0x538);
      if (plVar5 != plVar1) {
        do {
          if ((longlong *)*plVar5 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x000140ade0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x6d0))(param_1,0);
            return;
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ade0c0 FUN_140ade0c0 body=105 status=ok
// SIG undefined FUN_140ade0c0(void)

void FUN_140ade0c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    uVar1 = FUN_140aac400();
    FUN_140ad9eb0(*(undefined8 *)(param_1 + 0x4f0),param_1,*(undefined8 *)(param_1 + 0x618),uVar1);
    uVar1 = FUN_140aac400(param_1);
    FUN_140ad99e0(*(undefined8 *)(param_1 + 0x4f0),param_1,uVar1,1);
    FUN_140aa85c0(param_1,0x3f800000);
    return;
  }
  return;
}



// FUNCTION 140ade130 FUN_140ade130 body=180 status=ok
// SIG undefined FUN_140ade130(void)

void FUN_140ade130(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1[0xa2] + 0x340) == *(int *)(param_1[0xa2] + 0x36c)) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0xaa);
    param_1[0xaa] = 0;
    if (((int)param_1[0xa9] != 0) && (plVar1 = (longlong *)param_1[0xa8], plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (param_1[0xa8] != 0) {
        lVar2 = FMemory::Realloc(param_1[0xa8],0,0);
        param_1[0xa8] = lVar2;
      }
      *(undefined4 *)(param_1 + 0xa9) = 0;
    }
  }
  return;
}



// FUNCTION 140ade1f0 FUN_140ade1f0 body=40 status=ok
// SIG undefined FUN_140ade1f0(void)

void FUN_140ade1f0(longlong param_1,longlong param_2,longlong param_3)

{
  if ((((param_3 != 0) && (param_3 != param_1)) && (param_2 != param_3)) &&
     (*(char *)(*(longlong *)(param_1 + 0x510) + 0x183) == '\0')) {
    FUN_140ab6010(*(longlong *)(param_1 + 0x510),param_3);
    return;
  }
  return;
}



// FUNCTION 140ade220 FUN_140ade220 body=130 status=ok
// SIG undefined FUN_140ade220(void)

void FUN_140ade220(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != (longlong *)0x0) {
    uVar2 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
    if (lVar3 != 0) {
      FUN_140a5c1d0(lVar3,param_1);
    }
    lVar3 = FUN_14148cad0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(param_3 + 0x259) = 1;
    }
  }
  return;
}



// FUNCTION 140ade2c0 FUN_140ade2c0 body=134 status=ok
// SIG undefined FUN_140ade2c0(void)

void FUN_140ade2c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong local_res8;
  
  if (param_2 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ade30d;
  }
  param_2 = 0;
LAB_140ade30d:
  *(longlong *)(param_1 + 0x648) = param_2;
  if ((param_2 != 0) && (local_res8 = *(longlong *)(param_1 + 0x5e0), local_res8 != 0)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_2 + 0xb18,&local_res8);
  }
  return;
}



// FUNCTION 140ade350 FUN_140ade350 body=67 status=ok
// SIG undefined FUN_140ade350(void)

void FUN_140ade350(longlong param_1)

{
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x648) != 0) {
    local_res8[0] = *(undefined8 *)(param_1 + 0x5e0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 0x648) + 0xb28,local_res8);
  }
  *(undefined8 *)(param_1 + 0x648) = 0;
  return;
}



// FUNCTION 140ade3c0 FUN_140ade3c0 body=121 status=ok
// SIG undefined FUN_140ade3c0(void)

void FUN_140ade3c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(param_1 + 0x590) != 0)) &&
       (cVar2 = FUN_142390930(*(longlong *)(param_1 + 0x590),param_2), cVar2 == '\0')) {
      FUN_140ae14c0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140ade440 FUN_140ade440 body=177 status=ok
// SIG undefined FUN_140ade440(void)

void FUN_140ade440(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_res8;
  longlong local_res10;
  
  uVar1 = *(undefined8 *)(param_2 + 0x498);
  local_res8 = uVar1;
  local_res10 = param_2;
  FUN_140ae11d0(param_1,uVar1);
  iVar2 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x668,&local_res10);
  if ((iVar2 != 0) && (*(longlong *)(local_res10 + 0x978) != 0)) {
    FUN_142e724b0(*(longlong *)(local_res10 + 0x978),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x98),DAT_1468680c8,0);
  }
  iVar2 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x678,&local_res10);
  if (iVar2 != 0) {
    FUN_140ae1160(param_1,uVar1);
  }
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x690,&local_res8);
  FUN_140e88f00(param_1,local_res10);
  return;
}



// FUNCTION 140ade500 FUN_140ade500 body=33 status=ok
// SIG undefined FUN_140ade500(void)

void FUN_140ade500(longlong param_1)

{
  FUN_140ace600();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x178,0);
  return;
}



// FUNCTION 140ade530 FUN_140ade530 body=1302 status=ok
// SIG undefined FUN_140ade530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ade530(longlong *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  code *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if ((*(char *)((longlong)param_1 + 0x10e5) == '\0') &&
     (*(char *)((longlong)param_1 + 0x10e6) == '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  (**(code **)(*param_1 + 0x358))(param_1,uVar8);
  if (param_2 == *(char *)((longlong)param_1 + 0x10e5)) {
    return;
  }
  if (param_2 == '\x03') {
    local_d8[0] = 0;
    plVar6 = param_1 + 0x25f;
    puVar9 = local_d8;
LAB_140ade613:
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar6,puVar9);
  }
  else if (((param_2 == '\x04') && (cVar2 = FUN_140adacb0(param_1), cVar2 != '\0')) &&
          (lVar3 = param_1[0x23], lVar3 != 0)) {
    lVar4 = FUN_1413f82e0();
    lVar7 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140c5a150(lVar3,CONCAT71((int7)((ulonglong)lVar7 >> 8),1),0);
      plVar6 = param_1 + 0x259;
      puVar9 = (undefined1 *)0x0;
      goto LAB_140ade613;
    }
  }
  cVar2 = *(char *)((longlong)param_1 + 0x10e5);
  uVar11 = 0;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x04') {
      cVar2 = FUN_140adacb0(param_1);
      if ((cVar2 == '\0') || (lVar3 = param_1[0x23], lVar3 == 0)) goto LAB_140ade951;
      lVar4 = FUN_1413f82e0();
      lVar7 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140ade951;
      FUN_140c5a150(lVar3,CONCAT71((int7)((ulonglong)lVar7 >> 8),1),0);
      plVar6 = param_1 + 0x255;
    }
    else {
      if (cVar2 == '\x03') {
        if ((param_2 == '\0') && (lVar3 = param_1[0x23], lVar3 != 0)) {
          lVar4 = FUN_1413f82e0();
          lVar7 = *(longlong *)(lVar3 + 0x10);
          if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
              lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_140c5a150(lVar3,CONCAT71((int7)((ulonglong)lVar7 >> 8),1),0);
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x226,0);
          }
        }
        local_d8[0] = 1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x25f,local_d8);
        cVar2 = FUN_140adacb0(param_1);
        if (cVar2 != '\0') {
          FUN_140adfcd0(param_1,param_1[0x208]);
        }
        goto LAB_140ade951;
      }
      cVar2 = FUN_140adacb0(param_1);
      if ((cVar2 == '\0') || (lVar3 = param_1[0x23], lVar3 == 0)) goto LAB_140ade951;
      lVar7 = FUN_1413f82e0();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140ade951;
      plVar6 = param_1 + 0x236;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar6,0);
    goto LAB_140ade951;
  }
  if (param_2 == '\x04') goto LAB_140ade951;
  if ((param_1[0x24] == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
    uVar10 = 0;
  }
  else {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    uVar10 = *(undefined4 *)(lVar3 + 0x790);
  }
  *(undefined4 *)((longlong)param_1 + 0x1354) = uVar10;
  cVar2 = FUN_140adacb0(param_1);
  if (cVar2 != '\0') {
    lVar3 = param_1[0x23];
    if (lVar3 != 0) {
      lVar4 = FUN_1413f82e0();
      lVar7 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c5a150(lVar3,CONCAT71((int7)((ulonglong)lVar7 >> 8),1),0);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x226,0);
      }
    }
    FUN_140adfcd0(param_1,param_1[0x207]);
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_98 = 0;
  local_78 = FUN_140ace920;
  local_88 = 0;
  if (local_38 == 0) {
LAB_140ade77e:
    local_c8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar6 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar6 = local_48;
    }
    if (plVar6 == (longlong *)0x0) goto LAB_140ade77e;
    plVar6 = (longlong *)(**(code **)*plVar6)(plVar6,local_b8);
    (**(code **)(*plVar6 + 8))(plVar6);
    local_c8[0] = local_78;
  }
  FUN_140acd4a0(param_1,local_c8);
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
LAB_140ade951:
  if (((*(char *)((longlong)param_1 + 0x10e5) == '\0') ||
      (*(char *)((longlong)param_1 + 0x10e5) == '\x03')) && (lVar3 = param_1[0x23], lVar3 != 0)) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_142d52a00(param_1 + 0x7a);
      if (cVar2 != '\0') {
        uVar8 = FUN_142d52a20(param_1 + 0x7a);
        uVar8 = FArchive::operator<<(uVar8);
        uVar11 = FUN_142d5fea0(uVar8);
      }
      local_e8 = FUN_140ad61c0(param_1);
      local_e0 = param_1 + 0x219;
      FUN_140c581f0(lVar3,*(undefined1 *)((longlong)param_1 + 0x10e5),uVar11,
                    *(undefined1 *)((longlong)param_1 + 0x10e6));
    }
  }
  FUN_140ae84d0(param_1);
  return;
}



// FUNCTION 140adea50 FUN_140adea50 body=477 status=ok
// SIG undefined FUN_140adea50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140adea50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x10e8) == '\0') goto LAB_140adebbb;
  cVar3 = FUN_140adacb0();
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    lVar4 = FUN_1413f82e0();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x1180,0);
    }
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_88 = 0;
  local_68 = FUN_140ace9d0;
  local_78 = 0;
  if (local_28 == 0) {
LAB_140adeb60:
    local_b8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 == (longlong *)0x0) goto LAB_140adeb60;
    plVar6 = (longlong *)(**(code **)*plVar6)(plVar6,local_a8);
    (**(code **)(*plVar6 + 8))(plVar6);
    local_b8[0] = local_68;
  }
  FUN_140acd4a0(param_1,local_b8);
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140adebbb:
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140c5bd00(lVar1,*(undefined1 *)(param_1 + 0x10e8));
    }
  }
  return;
}



// FUNCTION 140adec40 FUN_140adec40 body=1042 status=ok
// SIG undefined FUN_140adec40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140adec40(longlong *param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong *local_f0;
  undefined1 local_e8 [16];
  code *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((*(char *)((longlong)param_1 + 0x10e5) == '\0') &&
     (*(char *)((longlong)param_1 + 0x10e6) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  (**(code **)(*param_1 + 0x358))(param_1,uVar7);
  if (param_2 == *(char *)((longlong)param_1 + 0x10e6)) {
    return;
  }
  if (param_2 == '\x01') {
    cVar3 = FUN_140adacb0(param_1);
    if ((cVar3 != '\0') && (lVar1 = param_1[0x23], lVar1 != 0)) {
      lVar4 = FUN_1413f82e0();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x244,0);
      }
    }
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_a8 = 0;
    local_88 = FUN_140acea00;
    local_98 = 0;
    if (local_48 == 0) {
LAB_140aded82:
      local_d8[0] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    else {
      plVar6 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar6 = local_58;
      }
      if (plVar6 == (longlong *)0x0) goto LAB_140aded82;
      plVar6 = (longlong *)(**(code **)*plVar6)(plVar6,local_c8);
      (**(code **)(*plVar6 + 8))(plVar6);
      local_d8[0] = local_88;
    }
    FUN_140acd4a0(param_1,local_d8);
    if (local_48 != 0) {
      plVar6 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar6 = local_58;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else if (((param_2 == '\x02') && (cVar3 = FUN_140adacb0(param_1), cVar3 != '\0')) &&
          (lVar1 = param_1[0x23], lVar1 != 0)) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_e8[0] = *(char *)((longlong)param_1 + 0x10e7) != '\0';
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x24e,local_e8);
      uVar8 = FUN_140ad61c0(param_1);
      uVar9 = FUN_140ad4b30(param_1);
      local_f8 = uVar8;
      local_f0 = param_1 + 0x219;
      FUN_140c581f0(lVar1,*(undefined1 *)((longlong)param_1 + 0x10e5),uVar9,
                    *(undefined1 *)((longlong)param_1 + 0x10e6));
    }
  }
  if (*(char *)((longlong)param_1 + 0x10e6) != '\x01') {
    if (*(char *)((longlong)param_1 + 0x10e6) != '\x02') {
      return;
    }
    cVar3 = FUN_140adacb0(param_1);
    if (cVar3 == '\0') {
      return;
    }
    lVar1 = param_1[0x23];
    if (lVar1 == 0) {
      return;
    }
    lVar4 = FUN_1413f82e0();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x24a,0);
    return;
  }
  cVar3 = FUN_140adacb0(param_1);
  if ((cVar3 != '\0') && (lVar1 = param_1[0x23], lVar1 != 0)) {
    lVar4 = FUN_1413f82e0();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x23e,0)
      ;
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_a8 = 0;
  local_88 = FUN_140ace8d0;
  local_98 = 0;
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)*plVar6)(plVar6,local_c8);
      (**(code **)(*plVar6 + 8))(plVar6);
      local_d8[0] = local_88;
      goto LAB_140adef8a;
    }
  }
  local_d8[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_140adef8a:
  FUN_140acd4a0(param_1,local_d8);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140adf060 FUN_140adf060 body=90 status=ok
// SIG undefined FUN_140adf060(void)

void FUN_140adf060(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1088) != '\0') {
    FUN_140acb2b0();
    return;
  }
  if (*(longlong *)(param_1 + 0x1080) != 0) {
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      *(undefined1 *)(param_1 + 0x1088) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1080) + 0x3b0))(*(longlong **)(param_1 + 0x1080),0);
    *(undefined8 *)(param_1 + 0x1080) = 0;
  }
  return;
}



// FUNCTION 140adf0c0 FUN_140adf0c0 body=608 status=ok
// SIG undefined FUN_140adf0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140adf0c0(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (((param_2 == param_1[0x8c]) && ((char)param_1[0x92] != '\0')) &&
     (cVar2 = FUN_140adaed0(param_1[0x8c],param_3), cVar2 == '\0')) {
    if (param_3 != 0) {
      lVar3 = FUN_14148cad0();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = FUN_14122f1e0(param_3), cVar2 != '\0')) {
        param_1[0x96] = param_3;
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar3 == 0) {
          return;
        }
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          plVar4[2] = (longlong)FUN_140adf3d0;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar4[4] = lVar3;
          *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_a0 = 0xbf800000;
        local_a8 = 1;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar5,param_1 + 0x95,&local_98,0x3f000000);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar3 = FMemory::Realloc(plVar4,0,0);
        if (lVar3 == 0) {
          return;
        }
        FMemory::Free(lVar3);
        return;
      }
    }
    FUN_140aced90(param_1);
  }
  return;
}



// FUNCTION 140adf320 FUN_140adf320 body=23 status=ok
// SIG undefined FUN_140adf320(void)

void FUN_140adf320(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 == param_1[0x8c]) && (param_3 == param_1[0x96])) {
    if (param_1[0x94] != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))();
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar1 + 400) == 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
        }
        else {
          uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
        }
        FUN_142880530(uVar2,param_1 + 0x94);
        param_1[0x94] = 0;
      }
    }
    if (param_1[0x95] != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar1 + 400) == 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
        }
        else {
          uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
        }
        FUN_142880530(uVar2,param_1 + 0x95);
        param_1[0x95] = 0;
      }
    }
    param_1[0x96] = 0;
    return;
  }
  return;
}



// FUNCTION 140adf340 FUN_140adf340 body=131 status=ok
// SIG undefined FUN_140adf340(void)

void FUN_140adf340(longlong param_1)

{
  if (*(char *)(param_1 + 0x4fb) == '\x02') {
    FUN_142d9dbe0(param_1,*(undefined8 *)(param_1 + 0x5e8),*(undefined8 *)(param_1 + 0x5f8));
    FUN_142d9dbe0(param_1,*(undefined8 *)(param_1 + 0x5f0),*(undefined8 *)(param_1 + 0x600));
    return;
  }
  if (*(char *)(param_1 + 0x4fb) == '\x04') {
    FUN_142d9dbe0(param_1,*(undefined8 *)(param_1 + 0x5e8),0);
    FUN_142d9dbe0(param_1,*(undefined8 *)(param_1 + 0x5f0),0);
  }
  return;
}



// FUNCTION 140adf3d0 FUN_140adf3d0 body=308 status=ok
// SIG undefined FUN_140adf3d0(void)

void FUN_140adf3d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x96] == 0) {
    FUN_140aced90(param_1);
    return;
  }
  if (*(float *)((longlong)param_1 + 0x494) < *(float *)(param_1[0x96] + 0x784)) {
    if (param_1[0x93] != 0) {
      FUN_14148f580();
      FUN_1412f4200(param_1);
      if (param_1[0x93] != 0) {
        lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar1 != 0) {
          lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          FUN_142880530(uVar2,param_1 + 0x93);
          param_1[0x93] = 0;
        }
      }
      if (param_1[0x94] != 0) {
        lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar1 != 0) {
          lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          FUN_142880530(uVar2,param_1 + 0x94);
          param_1[0x94] = 0;
          return;
        }
      }
    }
  }
  else if (param_1[0x93] == 0) {
    FUN_140ae4d90(param_1);
  }
  return;
}



// FUNCTION 140adf510 FUN_140adf510 body=162 status=ok
// SIG undefined FUN_140adf510(void)

void FUN_140adf510(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x96] != 0) {
    FUN_140e95370();
    FUN_14148f600(param_1[0x96]);
    FUN_141218070(param_1[0x96]);
  }
  if (param_1[0x93] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_1 + 0x93);
      param_1[0x93] = 0;
    }
  }
  FUN_140aced90(param_1);
  return;
}



// FUNCTION 140adf5e0 FUN_140adf5e0 body=675 status=ok
// SIG undefined FUN_140adf5e0(void)

void FUN_140adf5e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  longlong *plVar15;
  longlong local_res10;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  int local_44;
  longlong local_40;
  
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    if (0 < *(int *)(*(longlong *)(param_1 + 0x5e0) + 0x200)) {
      uVar7 = GetTransientPackage();
      FUN_1417846f0(uVar7,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar8 = FUN_1412f2200();
      uVar7 = FUN_1417985e0(uVar8,uVar7,0,0,0,0,0,0,0);
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x5e0) + 0x1f8) + 8) = uVar7;
    }
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    lVar2 = *(longlong *)(param_1 + 0x5e0);
    plVar15 = (longlong *)(lVar2 + 0x348);
    piVar3 = (int *)*plVar15;
    iVar13 = *(int *)(lVar2 + 0x350);
    local_40 = DAT_146868138;
    for (piVar14 = piVar3; piVar14 != piVar3 + (longlong)iVar13 * 4; piVar14 = piVar14 + 4) {
      if ((((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
          ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
           (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) &&
         (*(longlong *)(piVar14 + 2) == local_40)) {
        iVar13 = (int)((longlong)piVar14 - (longlong)piVar3 >> 4);
        if (iVar13 != -1) {
          iVar1 = *(int *)(lVar2 + 0x350);
          iVar11 = (iVar1 - iVar13) + -1;
          if (0 < iVar11) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar13 * 0x10 + *plVar15),
                       (void *)((longlong)(iVar1 - iVar11) * 0x10 + *plVar15),(longlong)iVar11 << 4)
            ;
            iVar1 = *(int *)(lVar2 + 0x350);
          }
          *(int *)(lVar2 + 0x350) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar15);
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ACatchARide::HandleSecondaryUse",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x5e0);
    plVar15 = (longlong *)(lVar2 + 0x348);
    FWeakObjectPtr::operator=(&local_58,0);
    local_50 = 0;
    FWeakObjectPtr::operator=(&local_58,param_1);
    local_50 = local_res10;
    if ((local_res10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_58), lVar10 != 0)) {
      UObject::FindFunction(lVar10,local_50);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    iVar13 = *(int *)(lVar2 + 0x350);
    *(int *)(lVar2 + 0x350) = iVar13 + 1;
    if (*(int *)(lVar2 + 0x354) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar13);
    }
    puVar12 = (undefined4 *)((longlong)iVar13 * 0x10 + *plVar15);
    *puVar12 = local_58;
    puVar12[1] = local_54;
    *(longlong *)(puVar12 + 2) = local_50;
  }
  return;
}



// FUNCTION 140adf890 FUN_140adf890 body=76 status=ok
// SIG undefined FUN_140adf890(void)

void FUN_140adf890(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FUN_142d52a00(param_1 + 0x3d0);
  if (cVar3 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x3d0);
    lVar2 = FArchive::operator<<(uVar1);
    FUN_14246fd70(lVar2 + 0x94,param_2);
  }
  return;
}



// FUNCTION 140adf8e0 FUN_140adf8e0 body=1008 status=ok
// SIG undefined FUN_140adf8e0(void)

int FUN_140adf8e0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  if (param_2 == (longlong *)0x0) {
    return -1;
  }
  if (param_3 == 0) {
    return -1;
  }
  (**(code **)(*param_2 + 0x7a8))(param_2,&local_d8,local_b8);
  lVar1 = *(longlong *)(param_3 + 0x168);
  if (lVar1 == 0) {
    local_e8 = DAT_1468b5d90;
    fStack_e4 = DAT_1468b5d94;
    local_e0 = DAT_1468b5d98;
  }
  else {
    local_e8 = *(float *)(lVar1 + 0x220);
    fStack_e4 = *(float *)(lVar1 + 0x224);
    local_e0 = *(float *)(lVar1 + 0x228);
  }
  local_d8 = local_d8 - local_e8;
  local_d4 = local_d4 - fStack_e4;
  fVar7 = local_d4 * local_d4 + local_d8 * local_d8;
  if (fVar7 == 1.0) {
    fVar9 = local_d8;
    fVar8 = local_d4;
    fVar10 = local_d0 - local_e0;
    if (local_d0 - local_e0 == 0.0) goto LAB_140adfa8d;
  }
  else {
    fVar9 = DAT_1468b5d90;
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d98;
    if (fVar7 < 1e-08) goto LAB_140adfa8d;
    auVar12 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar9 = auVar12._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
    fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
    local_d8 = local_d8 * fVar9;
    local_d4 = local_d4 * fVar9;
  }
  fVar9 = local_d8;
  fVar8 = local_d4;
  fVar10 = 0.0;
LAB_140adfa8d:
  if (lVar1 == 0) {
    uVar5 = (undefined4)DAT_1468b5da0;
    uVar6 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_c0 = DAT_1468b5da8;
  }
  else {
    local_98 = *(float *)(lVar1 + 0x210);
    fStack_94 = *(float *)(lVar1 + 0x214);
    fStack_90 = *(float *)(lVar1 + 0x218);
    fStack_8c = *(float *)(lVar1 + 0x21c);
    auVar12._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_94);
    auVar12._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_98);
    auVar12._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_90);
    auVar12._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_8c);
    iVar2 = movmskps(local_e0,auVar12);
    if (iVar2 != 0) {
      *(float *)(lVar1 + 0x250) = local_98;
      *(float *)(lVar1 + 0x254) = fStack_94;
      *(float *)(lVar1 + 600) = fStack_90;
      *(float *)(lVar1 + 0x25c) = fStack_8c;
      puVar3 = (undefined8 *)FQuat::Rotator(&local_98,local_a8);
      *(undefined8 *)(lVar1 + 0x260) = *puVar3;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar3 + 1);
    }
    uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    local_c0 = *(undefined4 *)(lVar1 + 0x268);
  }
  local_c8 = CONCAT44(uVar6,uVar5);
  pfVar4 = (float *)FRotator::Quaternion(&local_c8);
  fVar14 = -pfVar4[2];
  fVar15 = -pfVar4[1];
  fVar13 = -*pfVar4;
  fVar11 = fVar15 * fVar10 - fVar14 * fVar8;
  fVar11 = fVar11 + fVar11;
  fVar10 = fVar14 * fVar9 - fVar13 * fVar10;
  fVar7 = fVar13 * fVar8 - fVar15 * fVar9;
  fVar10 = fVar10 + fVar10;
  fVar7 = fVar7 + fVar7;
  fVar7 = (float)FGenericPlatformMath::Atan2
                           ((fVar14 * fVar11 - fVar13 * fVar7) + pfVar4[3] * fVar10 + fVar8,
                            (fVar15 * fVar7 - fVar14 * fVar10) + pfVar4[3] * fVar11 + fVar9);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    pfVar4 = (float *)(*(longlong *)(param_1 + 0x40) + 0xc);
    do {
      fVar8 = pfVar4[-1] - fVar7 * 57.295776;
      fVar9 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
      if (ABS(fVar8) < ABS(fVar9)) {
        fVar9 = fVar8;
      }
      fVar8 = fVar8 - fVar9;
      if (fVar8 < 0.0) {
        fVar8 = fVar8 + 360.0;
      }
      if (180.0 < fVar8) {
        fVar8 = fVar8 - 360.0;
      }
      if (ABS(fVar8) < *pfVar4 || ABS(fVar8) == *pfVar4) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pfVar4 = pfVar4 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  return -1;
}



// FUNCTION 140adfcd0 FUN_140adfcd0 body=96 status=ok
// SIG undefined FUN_140adfcd0(void)

void FUN_140adfcd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar2 = AUGDoor::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_1405a3150(lVar3,local_28,param_2,0);
      FUN_140591060(local_28);
    }
  }
  return;
}



// FUNCTION 140adfd30 FUN_140adfd30 body=640 status=ok
// SIG undefined FUN_140adfd30(void)

void FUN_140adfd30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_28;
  int local_20;
  
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x594);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar7 = AGFireballProjectile::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar7);
      if (lVar6 != 0) {
        uVar10 = 0;
        uVar11 = uVar10;
        if (plVar5[0x21b] != 0) {
          *(longlong *)(param_1 + 0xc00) = plVar5[0x21b];
          uVar4 = (**(code **)(*(longlong *)plVar5[0x21b] + 0x408))();
          uVar11 = (ulonglong)uVar4;
        }
        if (*(longlong *)(param_1 + 0x6d0) != 0) {
          plVar5 = (longlong *)(param_1 + 0xc10);
          *(undefined4 *)(param_1 + 0xc18) = 0;
          if (*(int *)(param_1 + 0xc1c) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5,0);
          }
          FUN_1409a7860(*(undefined8 *)(param_1 + 0x6d0),&local_28);
          if (0 < local_20) {
            plVar2 = (longlong *)*local_28;
            if ((plVar2 != (longlong *)0x0) && (uVar10 = plVar2[0x1f], uVar10 == 0)) {
              (**(code **)(*plVar2 + 0x368))(plVar2);
              uVar10 = plVar2[0x1f];
            }
            iVar1 = *(int *)(param_1 + 0xc18);
            *(int *)(param_1 + 0xc18) = iVar1 + 1;
            if (*(int *)(param_1 + 0xc1c) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
            }
            *(ulonglong *)(*plVar5 + (longlong)iVar1 * 8) = uVar10;
          }
          if ((0 < *(int *)(param_1 + 0xc18)) && (*(longlong *)*plVar5 != 0)) {
            lVar8 = FUN_141039070(param_1);
            if (lVar8 != 0) {
              if (*(longlong *)(param_1 + 0xf20) != 0) {
                FUN_14105ad40(*(longlong *)(param_1 + 0xf20),lVar8);
              }
              if (*(longlong *)(param_1 + 0xf28) != 0) {
                FUN_14105ad40(*(longlong *)(param_1 + 0xf28),lVar8);
              }
              if (*(longlong *)(param_1 + 0xf30) != 0) {
                FUN_14105ad40(*(longlong *)(param_1 + 0xf30),lVar8);
              }
            }
            lVar8 = *(longlong *)*plVar5;
            if (lVar8 != 0) {
              lVar9 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_141055530(param_1,lVar6,uVar11,*(undefined8 *)(param_1 + 0xf20),
                              *(undefined8 *)(lVar8 + 0x260));
                if (*(longlong *)(lVar8 + 0x268) != 0) {
                  FUN_141055530(param_1,lVar6,uVar11,*(undefined8 *)(param_1 + 0xf28),
                                *(longlong *)(lVar8 + 0x268));
                }
                FUN_141055530(param_1,lVar6,uVar11,*(undefined8 *)(param_1 + 0xf30),
                              *(undefined8 *)(lVar8 + 0x270));
              }
            }
          }
          if (local_28 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140adffb0 FUN_140adffb0 body=27 status=ok
// SIG undefined FUN_140adffb0(void)

void FUN_140adffb0(undefined8 param_1)

{
  thunk_FUN_142238430();
  FUN_140ace200(param_1);
  return;
}



// FUNCTION 140adffd0 FUN_140adffd0 body=1360 status=ok
// SIG undefined FUN_140adffd0(void)

void FUN_140adffd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined8 local_c8;
  undefined4 local_c0;
  float local_b8;
  float local_b4;
  
  lVar1 = *(longlong *)(param_2 + 8);
  fVar12 = *(float *)(param_2 + 0x3c);
  fVar5 = *(float *)(param_2 + 0x40);
  fVar9 = *(float *)(param_2 + 0x44);
  fVar7 = fVar12 * fVar12 + fVar5 * fVar5 + fVar9 * fVar9;
  fVar13 = SQRT(fVar7);
  if (1.0 < fVar13) {
    if (1e-08 < fVar7) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar13 = auVar11._0_4_;
      fVar13 = fVar13 + fVar13 * (0.5 - fVar7 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 + fVar13 * (0.5 - fVar7 * 0.5 * fVar13 * fVar13);
      *(float *)(param_2 + 0x3c) = fVar12 * fVar13;
      *(float *)(param_2 + 0x40) = fVar5 * fVar13;
      *(float *)(param_2 + 0x44) = fVar9 * fVar13;
    }
    fVar13 = 1.0;
  }
  if (*(char *)(param_2 + 0x22) == '\0') {
    lVar2 = *(longlong *)(lVar1 + 0x1180);
    if (lVar2 == 0) {
      fVar12 = 1.0;
    }
    else {
      fVar12 = *(float *)(lVar2 + 0x90);
    }
    if (lVar2 == 0) {
      uVar4 = 0x3f000000;
    }
    else {
      uVar4 = *(undefined4 *)(lVar2 + 0x8c);
    }
    FUN_142ddd370(&local_c8,param_2 + 0x3c,
                  fVar12 * *(float *)(*(longlong *)(param_2 + 0x10) + 0x100),uVar4);
    *(undefined8 *)(param_2 + 0x3c) = local_c8;
    *(undefined4 *)(param_2 + 0x44) = local_c0;
  }
  if (0.0 <= fVar13) {
    fVar12 = 1.0;
  }
  else {
    fVar12 = -1.0;
  }
  if (*(longlong *)(lVar1 + 0x1180) == 0) {
    fVar5 = 2.0;
  }
  else {
    fVar5 = *(float *)(*(longlong *)(lVar1 + 0x1180) + 0x30);
  }
  fVar5 = _guard_xfg_dispatch_icall_nop(fVar13,fVar5);
  fVar5 = fVar5 * fVar12;
  if (*(char *)(param_2 + 0x22) == '\0') {
    uVar3 = *(char *)(param_2 + 0x20) != '\0';
  }
  else {
    uVar3 = 2;
  }
  local_c8 = 0x4120000041200000;
  local_c0 = 0x3f800000;
  FUN_140ad6300(lVar1 + 0x1180,&local_b8,fVar13,
                ABS(*(float *)(param_2 + 0x40)) < ABS(*(float *)(param_2 + 0x3c)),&local_c8,uVar3,
                *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 8),0xffffffff);
  fVar12 = *(float *)(param_2 + 0x40);
  fVar9 = *(float *)(param_2 + 0x3c);
  fVar7 = *(float *)(param_2 + 0x44);
  fVar8 = fVar9 * fVar9 + fVar12 * fVar12 + fVar7 * fVar7;
  if (fVar8 == 1.0) {
    local_c8._0_4_ = (float)*(undefined8 *)(param_2 + 0x3c);
    fVar10 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x3c) >> 0x20);
    fVar6 = *(float *)(param_2 + 0x44);
  }
  else {
    fVar10 = DAT_1468b5d94;
    local_c8._0_4_ = DAT_1468b5d90;
    fVar6 = DAT_1468b5d98;
    if (1e-08 <= fVar8) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar6 = auVar11._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
      local_c8._0_4_ = fVar9 * fVar6;
      fVar10 = fVar12 * fVar6;
      fVar6 = fVar7 * fVar6;
    }
  }
  fVar9 = 40.0;
  local_c8._0_4_ = (float)local_c8 * local_b8 * fVar5;
  fVar12 = *(float *)(*(longlong *)(param_2 + 0x18) + 8);
  lVar1 = *(longlong *)(lVar1 + 0x1180);
  fVar10 = fVar10 * local_b4 * fVar5;
  if (lVar1 == 0) {
    fVar7 = 40.0;
  }
  else {
    fVar7 = *(float *)(lVar1 + 0x40);
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
      goto LAB_140ae0362;
    }
  }
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
LAB_140ae0362:
  fVar13 = (1.0 - fVar7) * fVar5 + fVar7 * fVar13;
  fVar8 = fVar10 * fVar10 + (float)local_c8 * (float)local_c8 + fVar6 * fVar6;
  fVar5 = *(float *)(param_1 + 0x70);
  fVar7 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74) + fVar5 * fVar5 +
          *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78);
  if (fVar7 <= fVar8) {
    if (lVar1 == 0) {
      fVar6 = 40.0;
    }
    else {
      fVar6 = *(float *)(lVar1 + 0x38);
    }
    fVar6 = fVar6 * fVar13;
  }
  else if (lVar1 == 0) {
    fVar6 = 40.0;
  }
  else {
    fVar6 = *(float *)(lVar1 + 0x3c);
  }
  if (fVar7 <= fVar8) {
    if (lVar1 != 0) {
      fVar9 = *(float *)(lVar1 + 0x38);
    }
    fVar9 = fVar9 * fVar13;
  }
  else if (lVar1 != 0) {
    fVar9 = *(float *)(lVar1 + 0x3c);
  }
  fVar6 = fVar6 * fVar12;
  if (0.0 <= fVar6) {
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = 0.0;
  }
  fVar9 = fVar9 * fVar12;
  fVar5 = ((float)local_c8 - fVar5) * fVar6 + fVar5;
  *(float *)(param_1 + 0x70) = fVar5;
  fVar7 = 0.0;
  if ((0.0 <= fVar9) && (fVar7 = fVar9, 1.0 <= fVar9)) {
    fVar7 = 1.0;
  }
  fVar9 = *(float *)(param_1 + 0x78);
  fVar7 = (fVar10 - *(float *)(param_1 + 0x74)) * fVar7 + *(float *)(param_1 + 0x74);
  *(float *)(param_1 + 0x74) = fVar7;
  fVar5 = fVar5 * fVar12 + *(float *)(param_2 + 0x4c);
  *(float *)(param_2 + 0x4c) = fVar5;
  *(float *)(param_2 + 0x54) = fVar9 + *(float *)(param_2 + 0x54);
  *(float *)(param_2 + 0x50) = fVar7 * fVar12 + *(float *)(param_2 + 0x50);
  fVar5 = fVar5 + *(float *)(param_2 + 0x24);
  *(float *)(param_2 + 0x4c) = fVar5;
  *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x50);
  *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0x54);
  *(float *)(param_2 + 0x4c) = fVar5 + *(float *)(param_2 + 0x30);
  *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x50);
  *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x38) + *(float *)(param_2 + 0x54);
  return;
}



// FUNCTION 140ae0520 FUN_140ae0520 body=638 status=ok
// SIG undefined FUN_140ae0520(void)

undefined8 FUN_140ae0520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     (lVar3 = *(longlong *)(param_1 + 0x20), lVar3 != 0)) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar10 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_40 = 0;
      FUN_140cfb6c0(lVar3,&local_48);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      lVar3 = FUN_140679c60();
      plVar9 = plVar10;
      if (lVar3 != 0) {
        lVar2 = UAISenseConfig_Blueprint::StaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar9 = (longlong *)0x0;
        if (bVar1) {
          plVar7 = local_48 + (int)local_40;
          plVar5 = local_48;
          if (local_48 != plVar7) {
            do {
              if (*plVar5 != 0) {
                plVar9 = *(longlong **)(*plVar5 + 0x10);
                uVar4 = FUN_14067a450();
                if (plVar9 != (longlong *)0x0) {
                  lVar2 = plVar9[0x1f];
                  if (lVar2 == 0) {
                    (**(code **)(*plVar9 + 0x368))(plVar9);
                    lVar2 = plVar9[0x1f];
                    if (lVar2 == 0) goto LAB_140ae06ac;
                  }
                  lVar2 = FUN_140679dc0(lVar2 + 0x268,param_2);
                  if (lVar2 != 0) {
                    lVar6 = *(longlong *)(lVar2 + 8);
                    lVar2 = (longlong)*(int *)(lVar2 + 0x10) * 0x70 + lVar6;
                    for (; lVar6 != lVar2; lVar6 = lVar6 + 0x70) {
                      FUN_140acaa10(lVar3,lVar6,uVar4,&local_38);
                    }
                  }
                }
              }
LAB_140ae06ac:
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar7);
            plVar9 = (longlong *)(local_30 & 0xffffffff);
            plVar10 = local_38;
          }
        }
      }
      if (plVar10 != plVar10 + (longlong)(int)plVar9 * 0xb) {
        plVar7 = plVar10 + 7;
        do {
          if ((int)plVar7[-6] == 1) {
            lVar3 = plVar7[-4];
            plVar5 = plVar7 + -4;
LAB_140ae06f2:
            (**(code **)(lVar3 + 8))(plVar5,param_3);
          }
          else if ((int)plVar7[-6] == 2) {
            lVar3 = *plVar7;
            plVar5 = plVar7;
            goto LAB_140ae06f2;
          }
          plVar5 = plVar7 + 4;
          plVar7 = plVar7 + 0xb;
        } while (plVar5 != plVar10 + (longlong)(int)plVar9 * 0xb);
      }
      if ((int)plVar9 != 0) {
        plVar7 = plVar10 + 7;
        do {
          *plVar7 = (longlong)&PTR__scalar_deleting_destructor__144038610;
          FUN_140676620(plVar7 + 2);
          *plVar7 = (longlong)&PTR_FUN_1440385e0;
          plVar7[-4] = (longlong)&PTR__scalar_deleting_destructor__1440385f8;
          TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
          ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(plVar7 + -2);
          plVar7[-4] = (longlong)&PTR_FUN_1440385e0;
          plVar7 = plVar7 + 0xb;
          uVar8 = (int)plVar9 - 1;
          plVar9 = (longlong *)(ulonglong)uVar8;
        } while (uVar8 != 0);
      }
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ae07a0 FUN_140ae07a0 body=979 status=ok
// SIG undefined FUN_140ae07a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae07a0(longlong param_1,int param_2,ulonglong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined8 *local_68;
  uint local_60;
  uint local_5c;
  
  puVar12 = (undefined8 *)0x0;
  *(undefined4 *)(param_4 + 1) = 0;
  if ((*(int *)((longlong)param_4 + 0xc) < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  if ((*(longlong *)(param_1 + 0x610) != 0) && (0.0 < *(float *)(param_1 + 0x640))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x610) + 0x168);
    if (lVar3 == 0) {
      local_78 = _DAT_1468b5d90;
      local_70 = DAT_1468b5d98;
    }
    else {
      local_70 = *(undefined4 *)(lVar3 + 0x228);
      local_78 = *(ulonglong *)(lVar3 + 0x220);
    }
    plVar14 = (longlong *)*param_3;
    local_80 = local_70;
    local_88 = local_78;
    uVar10 = local_88;
    local_68 = (undefined8 *)0x0;
    local_5c = 0;
    puVar22 = (undefined8 *)((longlong)(int)param_3[1] & 0x1fffffffffffffff);
    if (plVar14 + (int)param_3[1] < plVar14) {
      puVar22 = puVar12;
    }
    if (puVar22 != (undefined8 *)0x0) {
      local_88._4_4_ = (float)(local_78 >> 0x20);
      fVar7 = local_88._4_4_;
      local_88._0_4_ = (float)local_78;
      fVar6 = (float)local_88;
      puVar17 = puVar12;
      puVar19 = puVar12;
      puVar21 = puVar12;
      uVar15 = _DAT_1468b5d90;
      uVar11 = DAT_1468b5d98;
      local_88 = uVar10;
      do {
        lVar3 = *plVar14;
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x168);
          if (lVar4 == 0) {
            local_88 = uVar15;
            puVar9 = &local_88;
            local_80 = uVar11;
          }
          else {
            puVar9 = &local_78;
            local_70 = *(undefined4 *)(lVar4 + 0x228);
            local_78 = *(ulonglong *)(lVar4 + 0x220);
          }
          uVar10 = *puVar9;
          fVar24 = fVar6 - (float)uVar10;
          fVar23 = fVar7 - (float)(uVar10 >> 0x20);
          fVar23 = fVar23 * fVar23;
          fVar24 = fVar24 * fVar24 + fVar23;
          if (SQRT(fVar24) < *(float *)(param_1 + 0x640)) {
            iVar18 = (int)puVar19;
            local_60 = iVar18 + 1;
            if ((int)puVar12 < (int)local_60) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_68,puVar19,fVar23,fVar24,uVar10);
              puVar12 = (undefined8 *)(ulonglong)local_5c;
              puVar17 = local_68;
            }
            puVar19 = (undefined8 *)(ulonglong)local_60;
            puVar17[iVar18] = lVar3;
            uVar15 = _DAT_1468b5d90;
            uVar11 = DAT_1468b5d98;
          }
        }
        iVar18 = (int)puVar19;
        plVar14 = plVar14 + 1;
        puVar21 = (undefined8 *)((longlong)puVar21 + 1);
      } while (puVar21 != puVar22);
      if (0 < iVar18) {
        if (0 < param_2) {
          uVar10 = 0x40;
          uVar15 = 0xffffffffffffffff;
          do {
            uVar10 = uVar10 - 1;
            uVar15 = uVar15 >> 1;
          } while (0xffffffff < uVar15);
          puVar12 = puVar17 + iVar18;
          local_88 = uVar10;
          if (puVar17 != puVar12) {
            puVar17 = puVar17 + 1;
            local_78 = (ulonglong)((longlong)puVar12 + (7 - (longlong)puVar17)) >> 3;
            if (puVar12 < puVar17) {
              local_78 = 0;
            }
            if (local_78 != 0) {
              uVar20 = 2;
              do {
                uVar1 = uVar20 - 1;
                do {
                  uVar13 = 0;
                  uVar16 = 0;
                  if (uVar20 != 1) {
                    do {
                      do {
                        uVar8 = std::_guard_xfg_dispatch_icall_nop();
                      } while (uVar15 < uVar8);
                      uVar13 = (uVar13 << ((char)uVar10 - 1U & 0x3f)) * 2 | (ulonglong)uVar8;
                      uVar16 = (uVar16 << ((char)uVar10 - 1U & 0x3f)) * 2 | uVar15;
                    } while (uVar16 < uVar1);
                  }
                } while ((uVar16 / uVar20 <= uVar13 / uVar20) && (uVar16 % uVar20 != uVar1));
                uVar13 = uVar13 % uVar20;
                if (uVar13 != uVar1) {
                  uVar5 = *puVar17;
                  *puVar17 = local_68[uVar13];
                  local_68[uVar13] = uVar5;
                }
                puVar17 = puVar17 + 1;
                uVar1 = uVar20 - 1;
                uVar20 = uVar20 + 1;
              } while (uVar1 != local_78);
            }
          }
          if (param_2 <= iVar18) {
            iVar18 = param_2;
          }
        }
        iVar2 = (int)param_4[1];
        if (iVar2 < iVar18) {
          *(int *)(param_4 + 1) = iVar18;
          if (*(int *)((longlong)param_4 + 0xc) < iVar18) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_4 + (longlong)iVar2 * 8),0,(longlong)(iVar18 - iVar2) << 3);
        }
        else if ((iVar18 < iVar2) && (iVar18 != iVar2)) {
          *(int *)(param_4 + 1) = iVar18;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_4);
        }
        _guard_xfg_dispatch_icall_nop((void *)*param_4,local_68,(longlong)iVar18 << 3);
        puVar17 = local_68;
      }
      if (puVar17 != (undefined8 *)0x0) {
        FMemory::Free(puVar17);
      }
    }
  }
  return;
}



// FUNCTION 140ae0b80 FUN_140ae0b80 body=69 status=ok
// SIG undefined FUN_140ae0b80(void)

void FUN_140ae0b80(longlong *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x4fb);
  cVar2 = FUN_140aceb80();
  if ((cVar2 != '\0') || (cVar2 = '\x04', (char)param_1[0xe6] != '\0')) {
    cVar2 = '\x02';
  }
  if (cVar1 != cVar2) {
    (**(code **)(*param_1 + 0x730))(param_1);
  }
  return;
}



// FUNCTION 140ae0bd0 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_140ae0d0f;
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
LAB_140ae0d0f:
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
        puVar11 = (uint *)((longlong)iStack_1c * 200 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x31] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x30] =
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



// FUNCTION 140ae0de0 FUN_140ae0de0 body=396 status=ok
// SIG undefined FUN_140ae0de0(void)

undefined8 FUN_140ae0de0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(param_2 >> 4);
  uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar7 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
  uVar10 = (iVar9 - uVar8) - uVar5 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 0x10;
  uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar5 ^ uVar5 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar11 +
                  (((longlong)(int)((uVar5 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) & uVar7)
                  * 4);
  if (iVar9 != -1) {
    lVar4 = *param_1;
    do {
      lVar6 = (longlong)iVar9;
      if (*(ulonglong *)(lVar4 + lVar6 * 0x28) == param_2) {
        lVar6 = lVar6 * 0x28;
        uVar7 = (longlong)*(int *)(lVar6 + 0x24 + lVar4) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar11 + uVar7 * 4);
        iVar3 = *(int *)((longlong)plVar11 + uVar7 * 4);
        goto joined_r0x000140ae0efc;
      }
      iVar9 = *(int *)(lVar4 + 0x20 + lVar6 * 0x28);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x000140ae0efc:
  if (iVar3 == -1) {
LAB_140ae0f30:
    FUN_140591060(*param_1 + 8 + lVar6);
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar3 == iVar9) {
    *puVar2 = *(undefined4 *)(lVar6 + lVar4 + 0x20);
    goto LAB_140ae0f30;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x000140ae0efc;
}



// FUNCTION 140ae0f70 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 200;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 200 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 200;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140ae1030 FUN_140ae1030 body=300 status=ok
// SIG undefined FUN_140ae1030(void)

void FUN_140ae1030(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  void *local_18;
  int local_10;
  
  if ((((param_2 != 0) && (*(longlong *)(param_1 + 0xbb0) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0xbb0) + 0xe0) != 0)) &&
     (lVar5 = *(longlong *)(param_2 + 0x168), lVar5 != 0)) {
    local_10 = *(int *)(lVar5 + 0x1a8);
    lVar3 = (longlong)local_10;
    pvVar4 = (void *)0x0;
    _Src = *(void **)(lVar5 + 0x1a0);
    local_18 = (void *)0x0;
    if (local_10 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
      pvVar4 = local_18;
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 3);
    }
    lVar5 = (longlong)(local_10 + -1);
    if (-1 < local_10 + -1) {
      do {
        plVar1 = *(longlong **)((longlong)pvVar4 + lVar5 * 8);
        if (plVar1 != (longlong *)0x0) {
          lVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (plVar1[0xde] == *(longlong *)(*(longlong *)(param_1 + 0xbb0) + 0xe0))) {
            (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
          }
        }
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
  }
  return;
}



// FUNCTION 140ae1160 FUN_140ae1160 body=105 status=ok
// SIG undefined FUN_140ae1160(void)

void FUN_140ae1160(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (((param_2 != (longlong *)0x0) && (*(longlong *)(*(longlong *)(param_1 + 0x608) + 0xe0) != 0))
     && (*(longlong *)(param_1 + 0x600) != 0)) {
    cVar1 = (**(code **)(*param_2 + 0x778))(param_2);
    if (cVar1 != '\0') {
      FUN_140ae1030();
      return;
    }
    FUN_141321d40(*(undefined8 *)(param_1 + 0x600),param_2);
  }
  return;
}



// FUNCTION 140ae11d0 FUN_140ae11d0 body=189 status=ok
// SIG undefined FUN_140ae11d0(void)

void FUN_140ae11d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res10;
  
  local_res10 = param_2;
  iVar5 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x658,&local_res10);
  uVar4 = local_res10;
  if (0 < iVar5) {
    lVar1 = *(longlong *)(param_1 + 0x608);
    if (*(longlong *)(lVar1 + 0x120) != 0) {
      lVar3 = UCelLightData::GetPrivateStaticClass();
      lVar1 = *(longlong *)(lVar1 + 0x120);
      for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) {
          if (lVar1 != 0) {
            FUN_142d49dd0(uVar4,uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x120));
          }
          break;
        }
      }
    }
    FUN_141321f30(param_1,uVar4);
    if (*(longlong *)(param_1 + 0x600) != 0) {
      FUN_1413223c0(*(longlong *)(param_1 + 0x600),uVar4);
    }
  }
  return;
}



// FUNCTION 140ae1290 FUN_140ae1290 body=466 status=ok
// SIG undefined FUN_140ae1290(void)

void FUN_140ae1290(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  float fVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  float fVar12;
  
  if (param_2 != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[0x219];
    plVar1 = plVar11 + (int)param_1[0x21a];
    if (plVar11 != plVar1) {
      while ((longlong *)*plVar11 != param_2) {
        plVar11 = plVar11 + 1;
        if (plVar11 == plVar1) {
          return;
        }
      }
      (**(code **)(*param_1 + 0x260))(param_1);
      uVar6 = FUN_141312e30();
      lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
      if (lVar7 != 0) {
        FUN_140ae2650(lVar7,param_3);
        FUN_140ae1470(lVar7);
      }
      puVar3 = (undefined8 *)param_1[0x219];
      for (puVar10 = puVar3; puVar10 != puVar3 + (int)param_1[0x21a]; puVar10 = puVar10 + 1) {
        if ((longlong *)*puVar10 == param_2) {
          iVar9 = (int)((longlong)puVar10 - (longlong)puVar3 >> 3);
          if (iVar9 != -1) {
            _guard_xfg_dispatch_icall_nop
                      (puVar3 + iVar9,puVar3 + iVar9 + 1,
                       (longlong)(((int)param_1[0x21a] - iVar9) + -1) << 3);
            *(int *)(param_1 + 0x21a) = (int)param_1[0x21a] + -1;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x21c) = (int)param_1[0x21a];
      plVar11 = (longlong *)param_1[0x219];
      plVar1 = plVar11 + (int)param_1[0x21a];
      for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
        lVar7 = *plVar11;
        lVar8 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_140ae13f4;
      }
      plVar11 = (longlong *)0x0;
LAB_140ae13f4:
      *(bool *)((longlong)param_1 + 0x10e4) = plVar11 != (longlong *)0x0;
      cVar5 = FUN_142d52a00(param_1 + 0x216);
      if (cVar5 != '\0') {
        fVar12 = (float)FUN_140ad62b0(param_1);
        fVar2 = *(float *)((longlong)param_1 + 0x130c);
        uVar6 = FUN_142d52a20(param_1 + 0x216);
        lVar7 = FArchive::operator<<(uVar6);
        FUN_14246fd50(lVar7 + 0x34,fVar12 * fVar2);
      }
    }
  }
  return;
}



// FUNCTION 140ae1470 FUN_140ae1470 body=71 status=ok
// SIG undefined FUN_140ae1470(void)

void FUN_140ae1470(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x1080) != 0) {
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      *(undefined1 *)(param_1 + 0x1088) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1080) + 0x3b0))(*(longlong **)(param_1 + 0x1080),0);
    *(undefined8 *)(param_1 + 0x1080) = 0;
  }
  return;
}



// FUNCTION 140ae14c0 FUN_140ae14c0 body=287 status=ok
// SIG undefined FUN_140ae14c0(void)

void FUN_140ae14c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res10;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    lVar2 = FUN_140c41820(param_2);
    if (lVar2 != 0) {
      plVar3 = (longlong *)param_1[0xb7];
      plVar1 = plVar3 + (int)param_1[0xb8];
      for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
        if (*plVar3 == lVar2) {
          return;
        }
      }
    }
    lVar2 = *(longlong *)(param_2 + 0x2c70);
    if (lVar2 != 0) {
      plVar3 = (longlong *)param_1[0xb5];
      plVar1 = plVar3 + (int)param_1[0xb6];
      for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
        if (*plVar3 == param_2) {
          TArray<FName,FDefaultAllocator>::Remove(param_1 + 0xb5,&local_res10);
          FUN_14145e410(lVar2,0);
          if (local_res10 == param_1[0xb9]) {
            if ((int)param_1[0xb6] < 1) {
              lVar2 = 0;
            }
            else {
              lVar2 = *(longlong *)param_1[0xb5];
            }
            param_1[0xb9] = lVar2;
            (**(code **)(*param_1 + 0x600))(param_1);
          }
          if ((int)param_1[0xb6] != 0) {
            return;
          }
          (**(code **)(*param_1 + 0x730))(param_1,4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140ae15e0 FUN_140ae15e0 body=460 status=ok
// SIG undefined FUN_140ae15e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae15e0(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (lVar4 = *(longlong *)(param_1 + 0x118), lVar4 != 0)) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar4 = *(longlong *)(lVar4 + 0x910), lVar4 != 0)) {
      fVar5 = (float)FUN_142d1b990(lVar4);
      FUN_142d28970(lVar4,fVar5 * param_2);
      FUN_142d1bb00(lVar4);
      FUN_142d28a80(lVar4);
    }
  }
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)) {
    local_40 = 0;
    local_48 = 0;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar4 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar4 + 0x220);
      local_60 = *(undefined4 *)(lVar4 + 0x228);
    }
    local_30 = local_60;
    lVar4 = *(longlong *)(param_1 + 0x120);
    local_38 = local_68;
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    FUN_1405a1e30(&local_68,lVar4,param_4,&local_38,0x42480000,&local_48);
    FUN_140591060(&local_68);
  }
  return;
}



// FUNCTION 140ae17b0 FUN_140ae17b0 body=192 status=ok
// SIG undefined FUN_140ae17b0(void)

void FUN_140ae17b0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x1b0,0);
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x25] == '\x03')) {
    (**(code **)(*plVar2 + 0x600))();
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 400)) {
    do {
      iVar1 = *(int *)(param_1 + 0x1a8);
      *(int *)(param_1 + 0x1a8) = iVar1 + 1;
      if (*(int *)(param_1 + 0x1ac) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a0,iVar1);
      }
      *(int *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar1 * 4) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 400));
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  FUN_140ace600(param_1);
  return;
}



// FUNCTION 140ae1870 FUN_140ae1870 body=96 status=ok
// SIG undefined FUN_140ae1870(void)

void FUN_140ae1870(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FUN_140ad03a0();
    *(undefined1 *)(param_1 + 0x6a0) = 0;
    FUN_140ad3b90(param_1);
    if (*(longlong *)(param_1 + 0x600) != 0) {
      FUN_140c6cc30(*(longlong *)(param_1 + 0x600),0,0,0xbf800000,0);
    }
    FUN_140ad87b0(param_1);
    return;
  }
  return;
}



// FUNCTION 140ae18d0 FUN_140ae18d0 body=167 status=ok
// SIG undefined FUN_140ae18d0(void)

void FUN_140ae18d0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar4 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x98,0);
      uVar4 = (uint)(uVar2 / 0x98);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x260);
    if (uVar4 < 5) {
      if (lVar1 == 0) goto LAB_140ae1961;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar4 == 0)) goto LAB_140ae1961;
      lVar5 = (longlong)(int)uVar4 * 0x98;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x260) = uVar3;
  }
LAB_140ae1961:
  *(uint *)(param_1 + 0x26c) = uVar4;
  return;
}



// FUNCTION 140ae1980 ResizeForCopy body=169 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      uVar4 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xc,0);
      uVar4 = (uint)(uVar2 / 0xc);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if (uVar4 < 0x11) {
      if (lVar1 == 0) goto LAB_140ae1a13;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar4 == 0)) goto LAB_140ae1a13;
      lVar5 = (longlong)(int)uVar4 * 0xc;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
  }
LAB_140ae1a13:
  *(uint *)(param_1 + 0xcc) = uVar4;
  return;
}



// FUNCTION 140ae1a30 ResizeForCopy body=148 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FGameplayTag,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      uVar2 = 0x10;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      uVar2 = (uint)(uVar3 >> 3);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (uVar2 < 0x11) {
      if (lVar1 == 0) goto LAB_140ae1aae;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_140ae1aae;
      lVar5 = (longlong)(int)uVar2 << 3;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
  }
LAB_140ae1aae:
  *(uint *)(param_1 + 0x8c) = uVar2;
  return;
}



// FUNCTION 140ae1ad0 FUN_140ae1ad0 body=151 status=ok
// SIG undefined FUN_140ae1ad0(void)

void FUN_140ae1ad0(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 200,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 200,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140ae1b70 FUN_140ae1b70 body=295 status=ok
// SIG undefined FUN_140ae1b70(void)

void FUN_140ae1b70(void *param_1,int param_2)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x2a8);
  uVar5 = 4;
  if (4 < uVar4) {
    if ((*(int *)((longlong)param_1 + 0x2ac) != 0) || (4 < uVar4)) {
      uVar5 = (longlong)(int)uVar4 + 0x10 + ((ulonglong)((longlong)(int)uVar4 * 3) >> 3);
    }
    uVar5 = FMemory::QuantizeSize(uVar5 * 0xa8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar5;
    lVar7 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
    uVar6 = (uVar5 - lVar7 >> 1) + lVar7 >> 7;
    uVar5 = uVar6 & 0xffffffff;
    if ((int)uVar6 < (int)uVar4) {
      uVar5 = 0x7fffffff;
    }
  }
  uVar4 = (uint)uVar5;
  *(uint *)((longlong)param_1 + 0x2ac) = uVar4;
  pvVar2 = *(void **)((longlong)param_1 + 0x2a0);
  if (uVar4 < 5) {
    if (pvVar2 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar2,(longlong)param_2 * 0xa8);
    pvVar2 = *(void **)((longlong)param_1 + 0x2a0);
    if (pvVar2 == (void *)0x0) {
      return;
    }
    lVar7 = 0;
  }
  else {
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
      if (uVar4 != 0) {
        pvVar2 = (void *)FMemory::Realloc(0,(longlong)(int)uVar4 * 0xa8,0);
        *(void **)((longlong)param_1 + 0x2a0) = pvVar2;
      }
      _guard_xfg_dispatch_icall_nop(pvVar2,param_1,(longlong)param_2 * 0xa8);
      return;
    }
    lVar7 = (longlong)(int)uVar4 * 0xa8;
  }
  uVar3 = FMemory::Realloc(pvVar2,lVar7,0);
  *(undefined8 *)((longlong)param_1 + 0x2a0) = uVar3;
  return;
}



// FUNCTION 140ae1ca0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPoly,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x158,0);
  iVar4 = (int)(uVar3 / 0x158);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x158,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140ae1d30 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FPoly,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x158,0);
    iVar3 = (int)(uVar1 / 0x158);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x158,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140ae1db0 FUN_140ae1db0 body=44 status=ok
// SIG undefined FUN_140ae1db0(void)

undefined4 FUN_140ae1db0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x48))) &&
      (lVar1 = (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x40), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x1c) != '\0')) {
    return *(undefined4 *)(lVar1 + 0x20);
  }
  return *(undefined4 *)(param_1 + 0x5c);
}



// FUNCTION 140ae1de0 FUN_140ae1de0 body=44 status=ok
// SIG undefined FUN_140ae1de0(void)

undefined4 FUN_140ae1de0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x48))) &&
      (lVar1 = (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x40), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x24) != '\0')) {
    return *(undefined4 *)(lVar1 + 0x28);
  }
  return *(undefined4 *)(param_1 + 0x60);
}



// FUNCTION 140ae1e10 FUN_140ae1e10 body=98 status=ok
// SIG undefined FUN_140ae1e10(void)

float FUN_140ae1e10(longlong param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x48) <= param_2)) ||
      (lVar1 = (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x40), lVar1 == 0)) ||
     (*(char *)(lVar1 + 0x24) == '\0')) {
    fVar3 = *(float *)(param_1 + 0x60);
  }
  else {
    fVar3 = *(float *)(lVar1 + 0x28);
  }
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x48))) &&
     ((lVar1 = (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x40), lVar1 != 0 &&
      (*(char *)(lVar1 + 0x1c) != '\0')))) {
    fVar2 = *(float *)(lVar1 + 0x20);
    if (*(float *)(lVar1 + 0x20) <= fVar3) {
      fVar2 = fVar3;
    }
    return fVar2;
  }
  fVar2 = *(float *)(param_1 + 0x5c);
  if (*(float *)(param_1 + 0x5c) <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}



// FUNCTION 140ae1e80 FUN_140ae1e80 body=430 status=ok
// SIG undefined FUN_140ae1e80(void)

void FUN_140ae1e80(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong local_18;
  int local_10;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((*(uint *)(lVar5 + 0x830) & 0x400) == 0) {
    *(undefined1 *)(param_1 + 0xca) = 1;
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar6,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar5 = FWeakObjectPtr::Get();
      if (lVar5 != 0) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (*(longlong **)(lVar5 + 0x990) == (longlong *)0x0) {
            return;
          }
          if ((*(byte *)(lVar5 + 0x94) & 2) == 0) {
            uVar3 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar3 < (int)DAT_1469e91c4) {
              uVar8 = uVar3 & 0xffff;
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 + 0xffff;
                uVar8 = uVar8 - 0x10000;
              }
              lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                      (longlong)(int)uVar8 * 0x18;
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) goto LAB_140ae1fa0;
            bVar1 = false;
          }
          else {
LAB_140ae1fa0:
            bVar1 = true;
          }
          if ((!bVar1) &&
             (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x990) + 0x950))(), cVar2 != '\0')) {
            cVar2 = FUN_140cfdb70(lVar5);
            if (cVar2 != '\0') {
              FUN_140cf9a30(lVar5);
            }
            cVar2 = FUN_140c251c0(param_1,lVar5);
            if (cVar2 != '\0') {
              FUN_1414bbd30(param_1,lVar5);
            }
          }
        }
      }
      local_10 = local_10 + 1;
    }
    *(undefined1 *)(param_1 + 0xca) = 0;
    if (((char)param_1[0x25] == '\x03') && (param_1[0xc0] != 0)) {
      uVar4 = FUN_140e80cd0(param_1);
      FUN_140e914a0(param_1[0xc0],uVar4);
    }
  }
  return;
}



// FUNCTION 140ae2030 FUN_140ae2030 body=52 status=ok
// SIG undefined FUN_140ae2030(void)

void FUN_140ae2030(undefined8 param_1,longlong param_2)

{
  FUN_140c25a90();
  if (param_2 != 0) {
    FUN_140aca930(param_1,*(undefined8 *)(param_2 + 0x498));
  }
  return;
}



// FUNCTION 140ae2070 FUN_140ae2070 body=484 status=ok
// SIG undefined FUN_140ae2070(void)

void FUN_140ae2070(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  iVar5 = FUN_14233f450();
  if ((((iVar5 == 3) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    uStack_b0 = 0;
    local_b8._0_4_ = (undefined4)uVar3;
    local_b8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = 0;
    uStack_6c = 0;
    local_b8 = uVar3;
    fVar6 = (float)FUN_142ca2f00(param_2,&local_78,0);
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    uStack_a0 = 0;
    local_a8._0_4_ = (undefined4)uVar3;
    local_a8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = 0;
    uStack_5c = 0;
    local_a8 = uVar3;
    fVar7 = (float)FUN_142ca2f00(param_3,&local_68,0x3f800000);
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    uStack_90 = 0;
    local_98._0_4_ = (undefined4)uVar3;
    local_98._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = 0;
    uStack_4c = 0;
    local_98 = uVar3;
    fVar8 = (float)FUN_142ca2f00(param_4,&local_58,0);
    if (fVar6 / fVar7 < fVar8) {
      uVar3 = *(undefined8 *)(param_1 + 0x118);
      uStack_80 = 0;
      local_88._0_4_ = (undefined4)uVar3;
      local_88._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_48 = (undefined4)local_88;
      uStack_44 = local_88._4_4_;
      uStack_40 = 0;
      uStack_3c = 0;
      local_88 = uVar3;
      FUN_142c8e590(local_38,param_2,&local_48,2,fVar8 * fVar7 - fVar6,0,local_c8);
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
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ae2260 FUN_140ae2260 body=86 status=ok
// SIG undefined FUN_140ae2260(void)

void FUN_140ae2260(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    local_18 = *(undefined8 *)(param_1 + 0x7c0);
    local_10 = *(undefined4 *)(param_1 + 0x7c8);
    *(undefined1 *)(param_1 + 0x7cc) = 0;
    *(undefined4 *)(param_1 + 2000) = 0;
    FUN_142399b90(*(longlong *)(param_1 + 0x7b8),&local_18,0,0,0);
  }
  return;
}



// FUNCTION 140ae22c0 FUN_140ae22c0 body=105 status=ok
// SIG undefined FUN_140ae22c0(void)

void FUN_140ae22c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  
  if ((param_2 != 0) && (*(byte *)(param_2 + 0xec0) < 3)) {
    (**(code **)(*(longlong *)(param_2 + 0xda8) + 0x40))((longlong *)(param_2 + 0xda8),local_28);
    cVar1 = FUN_142d52a00(local_28);
    if (cVar1 != '\0') {
      uVar2 = FUN_142d62160(local_20,local_28);
      uVar3 = FUN_142d61c30(uVar2);
      FUN_142d6f560(uVar2,uVar3,1);
    }
  }
  return;
}



// FUNCTION 140ae2330 FUN_140ae2330 body=352 status=ok
// SIG undefined FUN_140ae2330(void)

void FUN_140ae2330(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_res10 [8];
  
  iVar3 = FUN_14233f450();
  if (iVar3 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    uVar8 = 0;
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      lVar4 = param_1[0x24];
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      uVar7 = *(undefined4 *)(lVar4 + 0x790);
    }
    *(undefined4 *)(param_1 + 0x26b) = uVar7;
    *(undefined1 *)((longlong)param_1 + 0x10e5) = 3;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    local_res10[0] = 1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x25f,local_res10);
    lVar4 = param_1[0x23];
    if (lVar4 != 0) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_142d52a00(param_1 + 0x7a);
        if (cVar2 != '\0') {
          uVar6 = FUN_142d52a20(param_1 + 0x7a);
          uVar6 = FArchive::operator<<(uVar6);
          uVar8 = FUN_142d5fea0(uVar6);
        }
        uVar7 = FUN_140ad61c0(param_1);
        FUN_140c581f0(lVar4,*(undefined1 *)((longlong)param_1 + 0x10e5),uVar8,
                      *(undefined1 *)((longlong)param_1 + 0x10e6),uVar7,param_1 + 0x219);
      }
    }
  }
  return;
}



// FUNCTION 140ae2490 FUN_140ae2490 body=105 status=ok
// SIG undefined FUN_140ae2490(void)

void FUN_140ae2490(longlong *param_1)

{
  int iVar1;
  undefined1 local_res10 [24];
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    if (*(char *)((longlong)param_1 + 0x10e5) == '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x10e5) = 0;
      (**(code **)(*param_1 + 0x358))(param_1,*(char *)((longlong)param_1 + 0x10e6) != '\0');
      FUN_140ae84d0(param_1);
      local_res10[0] = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x25f,local_res10);
    }
  }
  return;
}



// FUNCTION 140ae2500 FUN_140ae2500 body=322 status=ok
// SIG undefined FUN_140ae2500(void)

void FUN_140ae2500(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_res18 [2];
  
  iVar3 = FUN_14233f450();
  if (iVar3 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined2 *)((longlong)param_1 + 0x10e6) = 2;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    param_1[0x21b] = param_2;
    FUN_140ada660(param_1,param_2);
    lVar5 = param_1[0x23];
    if (lVar5 != 0) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_res18[0] = param_2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x24c,local_res18);
        if (*(longlong *)(lVar5 + 0x1d18) == 0) {
          plVar6 = *(longlong **)(lVar5 + 0x490);
        }
        else {
          plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x1d18) + 0x490);
        }
        if (plVar6 != (longlong *)0x0) {
          lVar5 = FUN_1429e18b0();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (((bVar1) && (plVar6 != (longlong *)0x0)) &&
             (cVar2 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar2 != '\0')) {
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x24a,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ae2650 FUN_140ae2650 body=472 status=ok
// SIG undefined FUN_140ae2650(void)

void FUN_140ae2650(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_res18 [8];
  
  iVar4 = FUN_14233f450();
  if (iVar4 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x10e7) = param_2;
    *(undefined1 *)((longlong)param_1 + 0x10e6) = 0;
    (**(code **)(*param_1 + 0x358))(param_1,*(char *)((longlong)param_1 + 0x10e5) != '\0');
    param_1[0x21b] = 0;
    FUN_142d5ac70(param_1 + 0x216);
    lVar1 = param_1[0x23];
    if (lVar1 != 0) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_res18[0] = param_2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x250,local_res18);
        if (*(longlong *)(lVar1 + 0x1d18) == 0) {
          plVar7 = *(longlong **)(lVar1 + 0x490);
        }
        else {
          plVar7 = *(longlong **)(*(longlong *)(lVar1 + 0x1d18) + 0x490);
        }
        if (plVar7 != (longlong *)0x0) {
          lVar5 = FUN_1429e18b0();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (plVar7 != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*plVar7 + 0x768))(plVar7), cVar3 != '\0')) {
            local_res18[0] = param_2;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x24e,local_res18);
          }
        }
        cVar3 = FUN_142d52a00(param_1 + 0x7a);
        if (cVar3 == '\0') {
          uVar8 = 0;
        }
        else {
          uVar6 = FUN_142d52a20(param_1 + 0x7a);
          uVar6 = FArchive::operator<<(uVar6);
          uVar8 = FUN_142d5fea0(uVar6);
        }
        uVar9 = FUN_140ad61c0(param_1);
        FUN_140c581f0(lVar1,*(undefined1 *)((longlong)param_1 + 0x10e5),uVar8,
                      *(undefined1 *)((longlong)param_1 + 0x10e6),uVar9,param_1 + 0x219);
      }
    }
  }
  return;
}



// FUNCTION 140ae2830 FUN_140ae2830 body=16 status=ok
// SIG undefined FUN_140ae2830(void)

void FUN_140ae2830(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 2000) = param_2;
  *(undefined1 *)(param_1 + 0x7cc) = 1;
  return;
}



// FUNCTION 140ae2840 FUN_140ae2840 body=1121 status=ok
// SIG undefined FUN_140ae2840(void)

void FUN_140ae2840(longlong param_1,longlong param_2)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_res10;
  LARGE_INTEGER local_res18 [2];
  longlong *local_d8;
  int local_d0;
  double local_c8;
  undefined8 local_c0;
  char local_b7;
  byte local_b6;
  ulonglong uVar9;
  
  lVar6 = *(longlong *)(param_2 + 0x170);
  if (lVar6 == 0) {
    return;
  }
  lVar3 = FUN_142e107c0();
  lVar6 = *(longlong *)(lVar6 + 0x10);
  if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xf8);
  fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x128);
  plVar4 = (longlong *)FUN_140ad3db0();
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      local_res10 = (**(code **)(*plVar5 + 0x688))(plVar5);
      goto LAB_140ae296a;
    }
  }
  local_res10 = 0;
LAB_140ae296a:
  FUN_142bd2270(&local_d8,param_1,param_2,0xffffffff);
LAB_140ae29b5:
  if ((int)local_d8[1] <= local_d0) goto LAB_140ae2a03;
  if ((*(byte *)((longlong)local_d8 + 0x156) & 1) != 0) goto LAB_140ae2a03;
  if ((0.0 <= local_c8) &&
     (QueryPerformanceCounter(local_res18),
     local_c8 <= (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140ae2a03;
  bVar12 = true;
  do {
    uVar9 = 0;
    if (!bVar12) {
      *(int *)(local_d8 + 0x27) = local_d0;
      return;
    }
    uVar7 = FArchive::operator<<
                      (((longlong)(*(int *)(*local_d8 + 4 + (longlong)local_d0 * 0xc) * 2) >> 1) +
                       local_d8[3]);
    fVar15 = 0.5;
    lVar6 = FWeakObjectPtr::Get(uVar7);
    FUN_140ae8e10(plVar4);
    if ((lVar6 != 0) && (uVar11 = uVar9, 0 < (int)plVar4[1])) {
      do {
        cVar2 = FUN_14058c1e0(*plVar4 + (longlong)(int)uVar9 * 0x14,lVar6);
        if (cVar2 != '\0') {
          if (uVar11 != 0xffffffffffffffff) {
            lVar10 = *plVar4;
            lVar3 = lVar10 + uVar11 * 0x14;
            cVar2 = FUN_14058c1e0(lVar3 + 8,local_res10);
            if ((cVar2 != '\0') ||
               (((cVar2 = FUN_14044aea0(lVar3 + 8,0), cVar2 != '\0' &&
                 (*(char *)(lVar10 + 0x10 + uVar11 * 0x14) == '\0')) &&
                (cVar2 = FUN_140ae7c00(plVar4,lVar6,local_res10,0), cVar2 != '\0')))) {
              fVar15 = 1.0;
              goto LAB_140ae2b25;
            }
          }
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar11 = uVar11 + 1;
      } while ((int)uVar8 < (int)plVar4[1]);
    }
    lVar6 = FWeakObjectPtr::Get(uVar7);
    if (lVar6 != 0) {
      lVar10 = *plVar4;
      lVar3 = lVar10 + (longlong)(int)plVar4[1] * 0x14;
      for (; lVar10 != lVar3; lVar10 = lVar10 + 0x14) {
        cVar2 = FUN_14058c1e0(lVar10,lVar6);
        if (cVar2 != '\0') {
          fVar15 = 0.0;
          break;
        }
      }
    }
LAB_140ae2b25:
    if ((local_b6 & 2) == 0) {
      if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_140ae2b66:
        sVar1 = local_c0._4_2_;
        if (local_b7 == '\0') {
          local_c0 = CONCAT44(local_c0._4_4_,(float)local_c0 + fVar15);
        }
        else if (local_b7 == '\x01') {
          if ((sVar1 == 0) || (fVar15 < (float)local_c0)) {
LAB_140ae2ba1:
            local_c0 = CONCAT44(local_c0._4_4_,fVar15);
          }
        }
        else if (local_b7 == '\x02') {
          if (sVar1 == 0) goto LAB_140ae2ba1;
          if ((float)local_c0 < fVar15) {
            local_c0 = CONCAT44(local_c0._4_4_,fVar15);
          }
        }
        local_c0._0_6_ = CONCAT24(sVar1 + 1,(float)local_c0);
      }
      else {
        cVar2 = *(char *)(param_1 + 0x5a);
        if (cVar2 == '\0') {
          bVar12 = fVar15 < fVar13;
LAB_140ae2b5f:
          if (!bVar12) goto LAB_140ae2b66;
        }
        else {
          if (cVar2 == '\x01') {
            bVar12 = fVar14 < fVar15;
            goto LAB_140ae2b5f;
          }
          if (((cVar2 == '\x02') && (fVar13 <= fVar15)) && (fVar15 <= fVar14)) goto LAB_140ae2b66;
        }
      }
      local_c0 = CONCAT26(local_c0._6_2_ + 1,(undefined6)local_c0);
    }
    FUN_142bf3280(&local_d8);
    if ((*(byte *)((longlong)local_d8 + 0x156) & 1) != 0) goto LAB_140ae29b5;
    local_d0 = local_d0 + 1;
    local_c0 = 0;
    local_b6 = local_b6 & 0xfd | 1;
    if (local_d0 < (int)local_d8[1]) break;
LAB_140ae2a03:
    bVar12 = false;
  } while( true );
  do {
    uVar8 = *(uint *)(*local_d8 + 4 + (longlong)local_d0 * 0xc);
    if (((uVar8 >> 0x1e & 1) == 0) && (-1 < (int)uVar8)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
  } while ((!bVar12) && (local_d0 = local_d0 + 1, local_d0 < (int)local_d8[1]));
  goto LAB_140ae29b5;
}



// FUNCTION 140ae2cb0 FUN_140ae2cb0 body=68 status=ok
// SIG undefined FUN_140ae2cb0(void)

void FUN_140ae2cb0(longlong param_1,char param_2)

{
  if (((param_2 != '\0') && (*(char *)(param_1 + 0x128) == '\x03')) &&
     (1 < *(byte *)(param_1 + 0xc38))) {
    FUN_140cd09a0();
  }
  FUN_140ccb470(param_1,param_2);
  return;
}



// FUNCTION 140ae2d00 thunk_FUN_140aca3b0 body=5 status=ok
// SIG undefined thunk_FUN_140aca3b0(void)

void thunk_FUN_140aca3b0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined8 uStackX_8;
  undefined1 auStack_28 [32];
  
  if ((*(char *)(param_1 + 0x10e5) == '\x01') && (*(char *)(param_1 + 0x1338) == '\0')) {
    if ((*(byte *)(param_1 + 0x1350) & 2) != 0) {
      *(byte *)(param_1 + 0x1350) = *(byte *)(param_1 + 0x1350) | 4;
      return;
    }
    if (*(char *)(param_1 + 0x10e6) == '\x01') {
      FUN_140accfa0(param_1,0);
    }
    uVar3 = FUN_1404b03b0();
    uVar3 = FText::FText(auStack_28,uVar3);
    FUN_140ad1be0(param_1,2,uVar3,0);
    if (*(longlong *)(param_1 + 0x1320) != 0) {
      uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      FUN_142880530(uVar3,param_1 + 0x1330);
      *(undefined8 *)(param_1 + 0x1330) = 0;
      pwVar4 = _guard_xfg_dispatch_icall_nop
                         (L"&UFightForYourLifeComponent::SecondWindTargetDied",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&uStackX_8,pwVar2 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (*(longlong *)(param_1 + 0x1320) + 600,param_1,uStackX_8);
    }
  }
  return;
}



// FUNCTION 140ae2d20 FUN_140ae2d20 body=234 status=ok
// SIG undefined FUN_140ae2d20(void)

void FUN_140ae2d20(longlong param_1,undefined1 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((param_3 != 0) && (lVar1 = *(longlong *)(param_3 + 0x848), lVar1 != 0)) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar4 = FUN_140e21bd0(lVar1), lVar4 != 0)) {
      if (*(char *)(param_1 + 0x5f1) != '\0') {
        uVar5 = FUN_140e21bd0(lVar1);
        FUN_140e37120(uVar5,param_2);
        return;
      }
      lVar4 = *(longlong *)(param_1 + 0x5f8);
      if ((lVar4 != 0) && (lVar2 = *(longlong *)(param_1 + 0x600), lVar2 != 0)) {
        uVar5 = FUN_140e21bd0(lVar1);
        FUN_140e36950(uVar5,param_2,lVar4,lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140ae2e10 FUN_140ae2e10 body=102 status=ok
// SIG undefined FUN_140ae2e10(void)

void FUN_140ae2e10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x558) != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x550), lVar1 != 0)) {
    plVar2 = *(longlong **)(lVar1 + 0x30);
    plVar4 = plVar2 + (longlong)*(int *)(lVar1 + 0x38) * 0x13;
    for (; (plVar3 = (longlong *)0x0, plVar2 != plVar4 && (plVar3 = plVar2, *plVar2 != param_2));
        plVar2 = plVar2 + 0x13) {
    }
    if (plVar3 != (longlong *)0x0) {
      *(longlong *)(param_1 + 0x4c8) = param_2;
    }
  }
  return;
}



// FUNCTION 140ae2e80 FUN_140ae2e80 body=638 status=ok
// SIG undefined FUN_140ae2e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae2e80(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0xbb0) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xbb0) + 0x80) != 0)) {
    if (*(longlong *)(param_1 + 0xbc8) != 0) {
      uVar2 = FUN_142a232e0();
      plVar3 = (longlong *)
               AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0xbc8),uVar2);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_142a232e0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*plVar3 + 0x638))(plVar3,0);
          (**(code **)(*plVar3 + 0x568))
                    (plVar3,0,*(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x80));
          *(byte *)((longlong)plVar3 + 0x2ee) = *(byte *)((longlong)plVar3 + 0x2ee) | 1;
          FUN_142397070(plVar3,0);
          FUN_14223f010(*(undefined8 *)(param_1 + 0xbc8),plVar3);
          FUN_1423424e0(plVar3);
          return;
        }
      }
    }
    uVar2 = AActor::GetWorldTimerManager(param_1);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_140ae2e80;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_90 = 0xbf800000;
    local_98 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0xc30,&local_88,0x3dcccccd);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
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



// FUNCTION 140ae3100 FUN_140ae3100 body=118 status=ok
// SIG undefined FUN_140ae3100(void)

void FUN_140ae3100(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x740))(param_1,2);
    (**(code **)(*param_1 + 0x730))(param_1,2);
    *(char *)(param_1 + 0xe6) = param_2;
    return;
  }
  cVar1 = FUN_140aceb80();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x730))(param_1,4);
  }
  (**(code **)(*param_1 + 0x740))(param_1,1);
  *(undefined1 *)(param_1 + 0xe6) = 0;
  return;
}



// FUNCTION 140ae3180 FUN_140ae3180 body=307 status=ok
// SIG undefined FUN_140ae3180(void)

void FUN_140ae3180(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468682b0) {
    _Init_thread_header(&DAT_1468682b0);
    if (DAT_1468682b0 == -1) {
      FName::FName(&DAT_1468682a8,L"CanDoFFYLTaunting",1);
      _Init_thread_footer(&DAT_1468682b0);
    }
  }
  if (param_1 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      lVar4 = (**(code **)(*param_1 + 0x668))(param_1);
      if (lVar4 != 0) {
        lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(longlong *)(lVar4 + 0x568) != 0)) {
          UBlackboardComponent::SetValueAsBool(*(longlong *)(lVar4 + 0x568),&DAT_1468682a8,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ae32c0 FUN_140ae32c0 body=271 status=ok
// SIG undefined FUN_140ae32c0(void)

void FUN_140ae32c0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_res8;
  longlong local_res10;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    iVar2 = *(int *)(param_1 + 0x618);
    local_res8 = 0;
    local_res10 = param_2;
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x610,&local_res8);
    if (param_2 != 0) {
      if (param_3 == '\0') {
        iVar3 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x610,&local_res10);
        if (iVar3 != 0) {
          FUN_1412d9a30(param_1,local_res10);
        }
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x610);
        plVar1 = plVar4 + *(int *)(param_1 + 0x618);
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == param_2) goto LAB_140ae337e;
        }
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x610,&local_res10);
        FUN_1412d99f0(param_1,param_2);
      }
    }
LAB_140ae337e:
    iVar3 = *(int *)(param_1 + 0x618);
    *(bool *)(param_1 + 0x608) = 0 < iVar3;
    if (iVar2 < 1) {
      if (0 < iVar3) {
        FUN_1412d97f0(param_1);
        return;
      }
      if (iVar2 < 1) {
        return;
      }
    }
    if (iVar3 < 1) {
      FUN_1412d9870(param_1);
    }
  }
  return;
}



// FUNCTION 140ae33d0 FUN_140ae33d0 body=495 status=ok
// SIG undefined FUN_140ae33d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae33d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x620);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    }
    if ((param_2 == 0) || (iVar6 = *(int *)(param_2 + 0x468), iVar6 == 0)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0xbe0) = 0;
      *(undefined4 *)(param_1 + 0x644) = 0;
    }
    else {
      if (iVar6 + -1 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = rand();
        iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)(iVar6 + -1));
        iVar3 = iVar6 + -2;
        if (iVar4 <= iVar6 + -2) {
          iVar3 = iVar4;
        }
      }
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x460) + (longlong)iVar3 * 8);
      *(longlong *)(*(longlong *)(param_1 + 0x600) + 0xbe0) = lVar2;
      iVar6 = *(char *)(*(longlong *)(param_1 + 0x600) + 0xbd0) + 1;
      if ((iVar6 < 0) || (*(int *)(*(longlong *)(param_1 + 0x608) + 0x38) <= iVar6)) {
        uVar7 = 0;
      }
      else {
        uVar5 = FUN_142caac20((longlong)iVar6 * 0xa8 +
                              *(longlong *)(*(longlong *)(param_1 + 0x608) + 0x30),local_28,param_1)
        ;
        uVar7 = FUN_142cc4350(uVar5,0);
      }
      *(undefined4 *)(param_1 + 0x644) = uVar7;
      if ((lVar2 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x608) + 0x128) != 0)) {
        uVar5 = FUN_140ac4ac0(lVar2);
        *(undefined8 *)(param_1 + 0x620) = uVar5;
        local_28[0] = 0;
        FUN_142399e30(uVar5,*(undefined8 *)(lVar2 + 0x168),0);
        FUN_14234b150(*(undefined8 *)(param_1 + 0x620));
        *(int *)(*(longlong *)(param_1 + 0x620) + 0x718) = (int)*(float *)(param_1 + 0x644);
        *(undefined1 *)(*(longlong *)(param_1 + 0x620) + 0x71c) = 1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x620) + 0x720) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x90);
        FUN_142f6c000(*(undefined8 *)(param_1 + 0x620),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x128));
      }
    }
  }
  return;
}



// FUNCTION 140ae35c0 FUN_140ae35c0 body=8 status=ok
// SIG undefined FUN_140ae35c0(void)

void FUN_140ae35c0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x4e0) = param_2;
  return;
}



// FUNCTION 140ae35d0 FUN_140ae35d0 body=17 status=ok
// SIG undefined FUN_140ae35d0(void)

void FUN_140ae35d0(longlong *param_1,longlong param_2)

{
  param_1[0x9b] = param_2;
                    /* WARNING: Could not recover jumptable at 0x000140ae35da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x708))();
  return;
}



// FUNCTION 140ae35f0 FUN_140ae35f0 body=349 status=ok
// SIG undefined FUN_140ae35f0(void)

void FUN_140ae35f0(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x848), lVar1 != 0)) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar2 = *(longlong **)(lVar1 + 0x900), plVar2 != (longlong *)0x0)) {
      if (param_3 != '\0') {
        (**(code **)(*plVar2 + 0x430))();
        FUN_142dafbc0(*(longlong *)(lVar1 + 0x900) + 0xcd8,&DAT_146868128);
        FUN_142dafbc0(*(longlong *)(lVar1 + 0x900) + 0xc40,&DAT_146868128);
        FUN_142dafbc0(*(longlong *)(lVar1 + 0x900) + 0x8b0,&DAT_146868128);
        FUN_142dafbc0(*(longlong *)(lVar1 + 0x900) + 0xd70,&DAT_146868128);
        return;
      }
      FUN_142dbb5d0(plVar2 + 0x19b,&DAT_146868128);
      FUN_142dbb5d0(*(longlong *)(lVar1 + 0x900) + 0xc40,&DAT_146868128);
      FUN_142dbb5d0(*(longlong *)(lVar1 + 0x900) + 0x8b0,&DAT_146868128);
      FUN_142dbb5d0(*(longlong *)(lVar1 + 0x900) + 0xd70,&DAT_146868128);
    }
  }
  return;
}



// FUNCTION 140ae3750 FUN_140ae3750 body=167 status=ok
// SIG undefined FUN_140ae3750(void)

void FUN_140ae3750(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x848), lVar1 != 0)) {
    lVar3 = FUN_1413f82e0();
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
      lVar3 = *(longlong *)(lVar1 + 0xd88);
      if (param_3 != '\0') {
        (**(code **)(lVar3 + 0x100))();
        return;
      }
      (**(code **)(lVar3 + 0x108))((longlong *)(lVar1 + 0xd88),DAT_146868128,0xffffffff,0);
    }
  }
  return;
}



// FUNCTION 140ae3800 FUN_140ae3800 body=28 status=ok
// SIG undefined FUN_140ae3800(void)

void FUN_140ae3800(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x498) = *param_2;
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 8);
  return;
}



// FUNCTION 140ae3820 FUN_140ae3820 body=107 status=ok
// SIG undefined FUN_140ae3820(void)

void FUN_140ae3820(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(longlong **)(param_1 + 0x7b8) != (longlong *)0x0) {
    iVar2 = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x6c8))();
    if (0 < iVar1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x568))
                  (*(longlong **)(param_1 + 0x7b8),iVar2,param_2);
        iVar2 = iVar2 + 1;
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x6c8))();
      } while (iVar2 < iVar1);
    }
  }
  return;
}



// FUNCTION 140ae3890 FUN_140ae3890 body=23 status=ok
// SIG undefined FUN_140ae3890(void)

void FUN_140ae3890(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x7b8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140ae389f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x928))();
    return;
  }
  return;
}



// FUNCTION 140ae38b0 FUN_140ae38b0 body=285 status=ok
// SIG undefined FUN_140ae38b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae38b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_118 [32];
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  if ((param_2 != 0) &&
     (local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118, *(longlong *)(param_1 + 0x4d8) != 0)) {
    uVar2 = FUN_140d000a0();
    uVar5 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140725150(param_2,local_f8,0);
    plVar3 = local_f8;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    uVar4 = (longlong)(int)local_30 & 0x1fffffffffffffff;
    if (plVar3 + (int)local_30 < plVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        lVar1 = *plVar3;
        if (lVar1 != 0) {
          FUN_142398e60(lVar1,*(uint *)(lVar1 + 0x6b8) & 0xfffe79ff | uVar2,0);
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ae39d0 FUN_140ae39d0 body=55 status=ok
// SIG undefined FUN_140ae39d0(void)

void FUN_140ae39d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x4d8) != 0)) {
    uVar1 = FUN_140d000a0();
    FUN_142398e60(param_2,*(uint *)(param_2 + 0x6b8) | uVar1,0);
  }
  return;
}



// FUNCTION 140ae3a10 FUN_140ae3a10 body=136 status=ok
// SIG undefined FUN_140ae3a10(void)

void FUN_140ae3a10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x498);
  lVar3 = 0;
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    lVar2 = *(longlong *)(lVar1 + 0x40);
  }
  if ((((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x528))) && (lVar2 != 0)) && (lVar3 != 0)) {
    FUN_140a71110(param_2,param_1,0,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar3 + 0x110),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x520) + (longlong)param_3 * 0x18));
    return;
  }
  FUN_140a5c1d0(param_2);
  return;
}



// FUNCTION 140ae3aa0 FUN_140ae3aa0 body=11 status=ok
// SIG undefined FUN_140ae3aa0(void)

bool FUN_140ae3aa0(longlong param_1)

{
  return *(char *)(param_1 + 0x4d4) == '\0';
}



// FUNCTION 140ae3ab0 FUN_140ae3ab0 body=962 status=ok
// SIG undefined FUN_140ae3ab0(void)

undefined8 FUN_140ae3ab0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong *local_88;
  int local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  if ((*(char *)(param_1 + 0x5b8) != '\0') && (param_2 != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x5d0);
    lVar3 = *(longlong *)(param_2 + 0x10);
    lVar9 = lVar12 + (longlong)*(int *)(param_1 + 0x5d8) * 0x28;
    for (; lVar12 != lVar9; lVar12 = lVar12 + 0x28) {
      lVar6 = FWeakObjectPtr::Get(lVar12);
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar12 + 8)) && (*(longlong *)(lVar12 + 0x10) != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar12,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar12 + 8) = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(lVar12);
          if (lVar6 != 0) goto LAB_140ae3b85;
        }
      }
      else {
LAB_140ae3b85:
        lVar7 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          lVar8 = FUN_1428dfc70();
          lVar7 = lVar6;
          do {
            if (lVar7 == lVar8) {
              if (lVar3 == lVar6) {
                return 1;
              }
              break;
            }
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
        }
      }
    }
    if (*(char *)(param_1 + 0x5b9) != '\0') {
      iVar2 = *(int *)(param_1 + 0x5c8);
      puVar4 = *(undefined4 **)(param_1 + 0x5c0);
      if (puVar4 != puVar4 + (longlong)iVar2 * 10) {
        puVar11 = puVar4 + 1;
        do {
          local_60 = puVar11[-1];
          local_5c = *puVar11;
          local_58 = puVar11[1];
          local_78 = *(undefined8 *)(puVar11 + 3);
          local_48 = 0;
          local_40 = 0;
          local_50 = 0;
          FString::FString(local_70,puVar11 + 5);
          FSoftObjectPath::operator=(&local_50,&local_78);
          lVar9 = FWeakObjectPtr::Get(&local_60);
          if (lVar9 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != local_58) && (local_50 != 0)) {
              lVar9 = FUN_141796df0(&local_50);
              FWeakObjectPtr::operator=(&local_60,lVar9);
              if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_58 = DAT_1464b56f4;
              }
              lVar9 = FWeakObjectPtr::Get(&local_60);
              if (lVar9 != 0) goto LAB_140ae3cdc;
            }
          }
          else {
LAB_140ae3cdc:
            lVar12 = FUN_1407e2730();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              lVar9 = FWeakObjectPtr::Get(&local_60);
              if (lVar9 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != local_58) && (local_50 != 0)) {
                  lVar9 = FUN_141796df0(&local_50);
                  FWeakObjectPtr::operator=(&local_60,lVar9);
                  if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    local_58 = DAT_1464b56f4;
                  }
                  lVar9 = FWeakObjectPtr::Get(&local_60);
                  if (lVar9 != 0) goto LAB_140ae3d8b;
                }
LAB_140ae3dc1:
                lVar9 = 0;
              }
              else {
LAB_140ae3d8b:
                lVar12 = FUN_1407e2730();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) goto LAB_140ae3dc1;
              }
              lVar9 = UCableComponent::GetAttachedActor(lVar9);
              if (lVar9 != 0) {
                FUN_1407c7930(lVar9,&local_88);
                for (plVar10 = local_88; plVar10 != local_88 + local_80; plVar10 = plVar10 + 1) {
                  if (*plVar10 == param_2) {
                    if ((int)((longlong)plVar10 - (longlong)local_88 >> 3) != -1) {
                      if (local_88 != (longlong *)0x0) {
                        FMemory::Free(local_88);
                      }
                      if (local_48 != 0) {
                        FMemory::Free();
                      }
                      return 1;
                    }
                    break;
                  }
                }
                if (local_88 != (longlong *)0x0) {
                  FMemory::Free(local_88);
                }
              }
            }
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
          puVar1 = puVar11 + 9;
          puVar11 = puVar11 + 10;
        } while (puVar1 != puVar4 + (longlong)iVar2 * 10);
      }
    }
  }
  return 0;
}



// FUNCTION 140ae3e80 FUN_140ae3e80 body=11 status=ok
// SIG undefined FUN_140ae3e80(void)

bool FUN_140ae3e80(longlong param_1)

{
  return *(int *)(param_1 + 0x198) == 2;
}



// FUNCTION 140ae3ec0 FUN_140ae3ec0 body=32 status=ok
// SIG undefined FUN_140ae3ec0(void)

void FUN_140ae3ec0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x4d8) + 0xd58,&DAT_146868130);
    return;
  }
  return;
}



// FUNCTION 140ae3ee0 FUN_140ae3ee0 body=1361 status=ok
// SIG undefined FUN_140ae3ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ae3ee0(longlong param_1,undefined1 (*param_2) [12])

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  undefined8 uVar14;
  wchar_t *pwVar15;
  undefined4 *puVar16;
  int *piVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [48];
  longlong local_98;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar8 = *(longlong *)(param_1 + 0x498);
  if (lVar8 == 0) {
LAB_140ae4402:
    uVar14 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x530);
    plVar18 = (longlong *)*plVar1;
    plVar2 = plVar18 + *(int *)(param_1 + 0x538);
    if (plVar18 != plVar2) {
      do {
        plVar5 = (longlong *)*plVar18;
        if (plVar5 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar5 + 0x6f0))
                            (plVar5,local_c8,*(undefined4 *)((longlong)plVar5 + 0x514));
          fVar3 = *(float *)(lVar8 + 4);
          if (local_98 != 0) {
            FMemory::Free();
          }
          lVar8 = plVar5[0x2d];
          if (lVar8 == 0) {
            local_e0 = DAT_1468b5d98;
            puVar9 = &local_e8;
            local_e8 = _DAT_1468b5d90;
          }
          else {
            puVar9 = &local_d8;
            local_d8._0_4_ = *(undefined4 *)(lVar8 + 0x220);
            local_d0 = *(undefined4 *)(lVar8 + 0x228);
            local_d8._4_4_ = *(undefined4 *)(lVar8 + 0x224);
          }
          local_f8 = (code *)*puVar9;
          fVar22 = *(float *)*param_2 - SUB84(local_f8,0);
          fVar21 = *(float *)(*param_2 + 4) - (float)((ulonglong)local_f8 >> 0x20);
          uStack_f0 = CONCAT44(uStack_f0._4_4_,*(undefined4 *)(puVar9 + 1));
          if (fVar21 * fVar21 + fVar22 * fVar22 <= fVar3 * fVar3) goto LAB_140ae4402;
        }
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar2);
      lVar8 = *(longlong *)(param_1 + 0x498);
    }
    local_58 = _DAT_146867c40 & _DAT_146867c50;
    uStack_54 = uRam0000000146867c44 & uRam0000000146867c54;
    uStack_50 = uRam0000000146867c48 & uRam0000000146867c58;
    uStack_4c = uRam0000000146867c4c & uRam0000000146867c5c;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = uRam0000000146867c4c;
    local_68._12_4_ = 0;
    local_68._0_12_ = *param_2;
    uVar14 = *(undefined8 *)(lVar8 + 0x48);
    if (*(longlong *)(lVar8 + 0x58) != 0) {
      pwVar10 = (wchar_t *)FUN_14130c840();
      pwVar11 = *(wchar_t **)(lVar8 + 0x58);
      for (pwVar19 = pwVar11; pwVar19 != (wchar_t *)0x0; pwVar19 = *(wchar_t **)(pwVar19 + 0x18)) {
        if (pwVar19 == pwVar10) {
          if (pwVar11 != (wchar_t *)0x0) goto LAB_140ae40ab;
          break;
        }
      }
    }
    pwVar11 = (wchar_t *)FUN_14130c840();
LAB_140ae40ab:
    pwVar19 = (wchar_t *)0x0;
    pwVar10 = pwVar19;
    if (pwVar11 != (wchar_t *)0x0) {
      pwVar12 = (wchar_t *)FUN_14130c840();
      pwVar15 = pwVar11;
      do {
        pwVar10 = pwVar11;
        if (pwVar15 == pwVar12) break;
        pwVar15 = *(wchar_t **)(pwVar15 + 0x18);
        pwVar10 = pwVar19;
      } while (pwVar15 != (wchar_t *)0x0);
    }
    local_100 = 1;
    local_108 = 0;
    local_110 = 0;
    local_120 = 0;
    local_128 = 0;
    local_118 = param_1;
    lVar8 = FUN_140abdb80(param_1,pwVar10,&local_78,uVar14);
    uVar14 = 0;
    if (lVar8 != 0) {
      iVar4 = *(int *)(param_1 + 0x538);
      *(int *)(param_1 + 0x538) = iVar4 + 1;
      if (*(int *)(param_1 + 0x53c) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
      }
      *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar8;
      lVar13 = *(longlong *)(lVar8 + 0x4d8);
      iVar4 = *(int *)(lVar13 + 0x330);
      *(int *)(lVar13 + 0x330) = iVar4 + 1;
      if (*(int *)(lVar13 + 0x334) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar13 + 0x328,iVar4);
      }
      *(undefined8 *)(*(longlong *)(lVar13 + 0x328) + (longlong)iVar4 * 8) =
           *(undefined8 *)(param_1 + 0x510);
      if ((*(longlong *)(param_1 + 0x498) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x498) + 0x50) != '\0')) {
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        local_f8 = FUN_140addb80;
        pwVar10 = _guard_xfg_dispatch_icall_nop
                            (L"&ALargeLiquidBody::OnBeginNegateElementalDamage",L"::");
        pwVar11 = pwVar19;
        while (pwVar15 = pwVar10, pwVar15 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar15 + 1,L"::");
          pwVar11 = pwVar15;
        }
        FName::FName(&local_e8,pwVar11 + 2,1);
        FUN_1407260e0(lVar8 + 0x1e0,param_1,&local_f8,local_e8);
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        local_f8 = FUN_140ade1f0;
        pwVar10 = _guard_xfg_dispatch_icall_nop
                            (L"&ALargeLiquidBody::OnEndNegateElementalDamage",L"::");
        pwVar11 = pwVar19;
        while (pwVar15 = pwVar10, pwVar15 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar15 + 1,L"::");
          pwVar11 = pwVar15;
        }
        FName::FName(&local_e8,pwVar11 + 2,1);
        FUN_1407260e0(lVar8 + 0x1f0,param_1,&local_f8,local_e8);
      }
      pwVar11 = _guard_xfg_dispatch_icall_nop
                          (L"&ALargeLiquidBody::OnElementalReactionDestroyed",L"::");
      while (pwVar10 = pwVar11, pwVar10 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
        pwVar19 = pwVar10;
      }
      FName::FName(&local_d8,pwVar19 + 2,1);
      lVar13 = CONCAT44(local_d8._4_4_,(undefined4)local_d8);
      plVar1 = (longlong *)(lVar8 + 0x290);
      FWeakObjectPtr::operator=(&local_f8,0);
      uStack_f0 = 0;
      FWeakObjectPtr::operator=(&local_f8,param_1);
      local_e8 = 0;
      uStack_f0 = lVar13;
      if ((lVar13 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_f8), lVar13 != 0)) {
        UObject::FindFunction(lVar13,uStack_f0);
      }
      piVar6 = (int *)*plVar1;
      iVar4 = *(int *)(lVar8 + 0x298);
      for (piVar17 = piVar6; piVar17 != piVar6 + (longlong)iVar4 * 4; piVar17 = piVar17 + 4) {
        if ((((*piVar17 == (int)local_f8) &&
             (local_f8._4_4_ = (int)((ulonglong)local_f8 >> 0x20),
             bVar20 = piVar17[1] == local_f8._4_4_, bVar20)) ||
            ((cVar7 = FWeakObjectPtr::IsValid(piVar17), cVar7 == '\0' &&
             (cVar7 = FWeakObjectPtr::IsValid(&local_f8), cVar7 == '\0')))) &&
           (*(longlong *)(piVar17 + 2) == uStack_f0)) {
          if ((int)((longlong)piVar17 - (longlong)piVar6 >> 4) != -1) goto LAB_140ae43de;
          break;
        }
      }
      iVar4 = *(int *)(lVar8 + 0x298);
      *(int *)(lVar8 + 0x298) = iVar4 + 1;
      if (*(int *)(lVar8 + 0x29c) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar4);
      }
      puVar16 = (undefined4 *)((longlong)iVar4 * 0x10 + *plVar1);
      *puVar16 = (int)local_f8;
      puVar16[1] = local_f8._4_4_;
      *(ulonglong *)(puVar16 + 2) = uStack_f0;
LAB_140ae43de:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      uVar14 = FUN_140aaa9e0(lVar8,&local_78);
    }
  }
  return uVar14;
}



// FUNCTION 140ae4440 FUN_140ae4440 body=206 status=ok
// SIG undefined FUN_140ae4440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae4440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0xbb0) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xbb0) + 0xe0), lVar1 != 0)) {
    local_20 = DAT_1468b5da8;
    local_10 = DAT_1468b5d98;
    local_28 = DAT_1468b5da0;
    local_18 = _DAT_1468b5d90;
    lVar1 = FUN_1424600f0(lVar1,*(undefined8 *)(param_2 + 0x168),0,&local_18,&local_28,2,0,0,1,0);
    if (lVar1 != 0) {
      FUN_142398ea0(lVar1,param_2);
      FUN_142397970(lVar1,1);
    }
  }
  return;
}



// FUNCTION 140ae4510 FUN_140ae4510 body=707 status=ok
// SIG undefined FUN_140ae4510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae4510(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar3 = param_1[0xc0];
  if (lVar3 == 0) {
    return;
  }
  cVar1 = *(char *)(lVar3 + 0xbd0);
  if (*(longlong *)(lVar3 + 0xbd8) == 0) {
    return;
  }
  if (param_1[0xc1] == 0) {
    return;
  }
  iVar6 = (int)cVar1;
  if ((cVar1 < '\0') || (*(int *)(param_1[0xc1] + 0x38) <= iVar6)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    return;
  }
  bVar10 = *(longlong *)(lVar3 + 0xbe0) == 0;
  *(undefined1 *)(lVar3 + 3000) = 2;
  uVar2 = FUN_142caac20((longlong)cVar1 * 0xa8 + *(longlong *)(param_1[0xc1] + 0x30) + 0x70,local_40
                        ,param_1);
  fVar11 = (float)FUN_142cc4350(uVar2,0);
  *(float *)((longlong)param_1 + 0x63c) = fVar11;
  if (fVar11 <= 0.0) {
    FUN_141321b00(param_1,iVar6,0,bVar10);
    FUN_140ad3430(param_1);
    return;
  }
  fVar11 = (float)(**(code **)(*(longlong *)param_1[0xc0] + 0x6f0))();
  *(float *)(param_1[0xc0] + 0xbc0) = fVar11 + *(float *)((longlong)param_1 + 0x63c);
  FUN_141321b00(param_1,iVar6,*(undefined4 *)((longlong)param_1 + 0x63c),bVar10);
  FUN_140ace6b0(param_1[0xc0],*(undefined4 *)((longlong)param_1 + 0x63c));
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar3 = FUN_142f6c9f0(uVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = UWebSocketNetDriver::StaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    return;
  }
  FUN_140c1f7f0(lVar3);
  lVar4 = param_1[0xc1];
  lVar8 = lVar4 + 0x130;
  lVar5 = FWeakObjectPtr::Get(lVar8);
  lVar9 = 0;
  lVar7 = lVar9;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar4 + 0x138)) ||
       (local_48 = 0, *(longlong *)(lVar4 + 0x140) == 0)) goto LAB_140ae4791;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar8,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0x138) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar8);
    if (lVar5 == 0) goto LAB_140ae4791;
  }
  lVar4 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (bVar10) {
    lVar8 = FUN_142f71d80();
    lVar4 = lVar5;
    do {
      lVar7 = lVar5;
      if (lVar4 == lVar8) break;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      lVar7 = lVar9;
    } while (lVar4 != 0);
  }
LAB_140ae4791:
  FUN_142f6c2f0(lVar3,lVar7,*(undefined4 *)((longlong)param_1 + 0x63c));
  return;
}



// FUNCTION 140ae47e0 FUN_140ae47e0 body=1097 status=ok
// SIG undefined FUN_140ae47e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae47e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x730))();
  AActor::SetActorTickEnabled(param_1,1);
  lVar7 = param_1[0x9c];
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 1;
  if (((lVar7 != 0) && (local_a8 = (code *)0x0, *(longlong *)(lVar7 + 0x558) != 0)) &&
     (lVar6 = *(longlong *)(lVar7 + 0x550), lVar6 != 0)) {
    plVar9 = *(longlong **)(lVar6 + 0x30);
    plVar11 = plVar9 + (longlong)*(int *)(lVar6 + 0x38) * 0x13;
    for (; (plVar10 = (longlong *)0x0, plVar9 != plVar11 &&
           (plVar10 = plVar9, *plVar9 != param_1[0x98])); plVar9 = plVar9 + 0x13) {
    }
    if (plVar10 != (longlong *)0x0) {
      param_1[0x99] = param_1[0x98];
    }
  }
  if (((param_1[0x9b] != 0) && (lVar7 != 0)) &&
     ((local_a8 = (code *)0x0, *(longlong *)(lVar7 + 0x558) != 0 &&
      (*(longlong *)(lVar7 + 0x550) != 0)))) {
    uVar5 = FUN_140adf8e0();
    *(undefined4 *)(param_1 + 0x9a) = uVar5;
    lVar7 = *(longlong *)(param_1[0x9b] + 0x528);
    if (lVar7 != 0) {
      lVar6 = FUN_142fd5420();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_142fccb00(lVar7,*(undefined8 *)(param_1[0x9c] + 0x558),
                      *(undefined4 *)(param_1[0x9c] + 0x560),0);
      }
    }
  }
  lVar7 = FUN_140ad5f70(param_1);
  if ((lVar7 != 0) && (lVar6 = FUN_142cc1670(lVar7), lVar6 != 0)) {
    uVar8 = FUN_142cc1670(lVar7);
    FUN_142cd0010(uVar8,1,DAT_146868130);
  }
  lVar6 = param_1[0x9b];
  if ((((lVar6 != 0) && (lVar2 = param_1[0x9c], lVar2 != 0)) &&
      (lVar3 = *(longlong *)(lVar2 + 0x550), lVar3 != 0)) && (*(char *)(lVar2 + 0x570) != '\0')) {
    fVar13 = *(float *)(lVar2 + 0x574);
    if (*(float *)(lVar2 + 0x574) < 0.0) {
      iVar1 = (int)param_1[0x9a];
      if ((iVar1 < 0) || (*(int *)(lVar3 + 0x48) <= iVar1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (lVar6 = (longlong)iVar1 * 0x30 + *(longlong *)(lVar3 + 0x40), lVar6 != 0)) &&
         (*(char *)(lVar6 + 0x24) != '\0')) {
        fVar12 = *(float *)(lVar6 + 0x28);
      }
      else {
        fVar12 = *(float *)(lVar3 + 0x60);
      }
      if ((iVar1 < 0) || (*(int *)(lVar3 + 0x48) <= iVar1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (lVar6 = (longlong)iVar1 * 0x30 + *(longlong *)(lVar3 + 0x40), lVar6 != 0)) &&
         (*(char *)(lVar6 + 0x1c) != '\0')) {
        fVar13 = *(float *)(lVar6 + 0x20);
      }
      else {
        fVar13 = *(float *)(lVar3 + 0x5c);
      }
      if (fVar13 <= fVar12) {
        fVar13 = fVar12;
      }
    }
    if (fVar13 <= 0.01) {
      fVar13 = 0.01;
    }
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x2860) = 1;
    }
    uStack_a0 = 0;
    local_a8 = FUN_140ad2980;
    uVar8 = AActor::GetWorldTimerManager(param_1);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_9c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar7;
      *plVar9 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar8,param_1 + 0x95,&local_98,fVar13);
    if (local_38 != 0) {
      plVar11 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar11 = local_48;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      lVar7 = FMemory::Realloc(plVar9,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
    lVar6 = 0;
    if (param_1[0x9b] != 0) {
      FUN_142dafbc0(param_1[0x9b] + 0xd58,&DAT_146868130);
      lVar6 = param_1[0x9b];
    }
  }
  if ((lVar6 != 0) && (param_1[0x26] != 0)) {
    (**(code **)(*param_1 + 0x2f8))(param_1);
  }
  FUN_1412d9930(param_1);
  return;
}



// FUNCTION 140ae4c30 FUN_140ae4c30 body=337 status=ok
// SIG undefined FUN_140ae4c30(void)

void FUN_140ae4c30(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res10;
  int local_res18 [2];
  longlong **local_res20;
  undefined1 local_38 [32];
  
  if (((((param_2 != (longlong *)0x0) &&
        (local_res10 = param_2, cVar1 = (**(code **)(*param_2 + 0x778))(param_2), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*local_res10 + 0x780))(), cVar1 != '\0')) &&
      ((*(longlong *)(param_1 + 0xbb0) != 0 &&
       (*(longlong *)(*(longlong *)(param_1 + 0xbb0) + 0x180) != 0)))) &&
     (lVar2 = FUN_14059b7e0(local_res10,1), lVar2 != 0)) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xc90,local_res18,local_res10);
    if ((local_res18[0] == -1) ||
       (lVar3 = *(longlong *)(param_1 + 0xc90) + (longlong)local_res18[0] * 0x28, lVar3 == 0)) {
      local_res20 = &local_res10;
      FUN_140ac3fe0(param_1 + 0xc90,local_res18,&local_res20,0);
      lVar3 = *(longlong *)(param_1 + 0xc90) + (longlong)local_res18[0] * 0x28;
    }
    cVar1 = FUN_14059ee90(lVar3 + 8);
    if (cVar1 == '\0') {
      lVar2 = FUN_1405a3150(lVar2,local_38,*(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x180),0
                           );
      FUN_1405913a0(lVar3 + 8,lVar2);
      *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(lVar2 + 0x10);
      FUN_140591060(local_38);
    }
  }
  return;
}



// FUNCTION 140ae4d90 FUN_140ae4d90 body=852 status=ok
// SIG undefined FUN_140ae4d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae4d90(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_1[0x96] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x48c);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        plVar3[2] = (longlong)FUN_140adde30;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar2;
        *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_d0 = 0xbf800000;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_d8 = 0;
      FUN_142880850(uVar5,param_1 + 0x94,&local_c8,uVar1);
      if (local_68 != 0) {
        plVar6 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar6 = local_78;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      lVar2 = param_1[0x91];
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        plVar3[2] = (longlong)FUN_140adf510;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_d0 = 0xbf800000;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_d8 = 0;
      FUN_142880850(uVar5,param_1 + 0x93,&local_c8,(int)lVar2);
      if (local_68 != 0) {
        plVar6 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar6 = local_78;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
    FUN_14148f5c0(param_1[0x96]);
    FUN_1412f3c00(param_1,1);
  }
  return;
}



// FUNCTION 140ae50f0 FUN_140ae50f0 body=1173 status=ok
// SIG undefined FUN_140ae50f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae50f0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (param_1[0xc1] == 0) {
    return;
  }
  if (*(int *)(param_1[0xc1] + 0x38) == 0) {
    return;
  }
  if (param_1[0xc0] == 0) {
    return;
  }
  if (*(char *)(param_1[0xc0] + 3000) != '\0') {
    return;
  }
  if ((char)param_1[0xd4] != '\0') {
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar5,&local_100);
  lVar12 = 0;
  while( true ) {
    if ((local_f8 < 0) || ((int)local_100[1] <= local_f8)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    lVar6 = FWeakObjectPtr::Get(*local_100 + (longlong)local_f8 * 8);
    if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x498), lVar6 == 0)) {
LAB_140ae51fd:
      lVar6 = lVar12;
    }
    else {
      lVar7 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140ae51fd;
    }
    FUN_140ae22c0(param_1,lVar6);
    local_f8 = local_f8 + 1;
  }
  local_f0 = (**(code **)(*param_1 + 0x148))(param_1);
  local_e8 = &local_f0;
  local_e0 = FUN_14073d760(&local_f0,DAT_14685c220);
  puVar3 = local_e8;
  local_d8 = &local_f0;
  local_d0 = 0;
  lVar6 = FUN_14073d760(local_e8,local_e0);
  lVar7 = FUN_14073d760(local_d8,local_d0);
  while (lVar6 != lVar7) {
    plVar1 = *(longlong **)(lVar6 + 0x10);
    iVar4 = FUN_1407c9b90(plVar1,0,1);
    if (iVar4 == 0) {
      (**(code **)(*plVar1 + 0x900))(plVar1);
    }
    lVar6 = FUN_14073d760(puVar3);
  }
  if ((param_1[0xc1] != 0) && (lVar6 = *(longlong *)(param_1[0xc1] + 0x1a0), lVar6 != 0)) {
    local_80 = 0;
    local_90 = lVar6;
    local_88 = param_1;
    piVar8 = (int *)FUN_142dd6f80(local_78,param_1,&local_90);
    if (*piVar8 == 0) {
      local_c0 = 0xffffffff;
      uStack_b8 = 0xffffffff;
      local_b0 = 1;
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      local_ac = 0;
      local_98 = 0;
      local_c8 = *(undefined8 *)(param_1[0xc1] + 0x1a0);
      FWeakObjectPtr::operator=(&local_c0,param_1);
      local_b0 = 1;
      plStack_a0 = param_1;
      FUN_142dc4b70(local_68,param_1,&local_c8);
    }
  }
  *(undefined1 *)(param_1 + 0xd4) = 1;
  *(undefined1 *)(param_1[0xc0] + 3000) = 1;
  uVar5 = FUN_142caac20(*(longlong *)(param_1[0xc1] + 0x30) + 0x38,local_50,param_1);
  fVar13 = (float)FUN_142cc4350(uVar5,0);
  fVar14 = (float)(**(code **)(*(longlong *)param_1[0xc0] + 0x6f0))();
  *(float *)(param_1[0xc0] + 0xbbc) = fVar14 + fVar13;
  FUN_141321aa0(param_1,(int)*(char *)(param_1[0xc0] + 0xbd0),fVar13,
                *(int *)(param_1[0xc1] + 0x38) == 1);
  FUN_140ace6b0(param_1[0xc0],fVar13);
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar6 = FUN_142f6c9f0(uVar5);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = UWebSocketNetDriver::StaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  FUN_140c1f7f0(lVar6);
  lVar7 = param_1[0xc1];
  lVar11 = lVar7 + 0x130;
  lVar9 = FWeakObjectPtr::Get(lVar11);
  lVar10 = lVar12;
  if (lVar9 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar7 + 0x138)) ||
       (local_108 = 0, *(longlong *)(lVar7 + 0x140) == 0)) goto LAB_140ae5536;
    lVar9 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar11,lVar9);
    if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar7 + 0x138) = DAT_1464b56f4;
    }
    lVar9 = FWeakObjectPtr::Get(lVar11);
    if (lVar9 == 0) goto LAB_140ae5536;
  }
  lVar7 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar11 = FUN_142f71d80();
    lVar7 = lVar9;
    do {
      lVar10 = lVar9;
      if (lVar7 == lVar11) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar10 = lVar12;
    } while (lVar7 != 0);
  }
LAB_140ae5536:
  FUN_142f6c2f0(lVar6,lVar10,fVar13);
  FUN_142f6c830(lVar6,lVar10);
  return;
}



// FUNCTION 140ae5590 FUN_140ae5590 body=972 status=ok
// SIG undefined FUN_140ae5590(void)

void FUN_140ae5590(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_68 [4];
  int local_64;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  FUN_140c290f0();
  if (param_1[0xc0] != 0) {
    *(undefined1 *)(param_1[0xc0] + 3000) = 0;
  }
  *(undefined1 *)(param_1 + 0xd4) = 0;
  FUN_140ad3b90(param_1);
  if ((param_1[0xc1] != 0) && (lVar4 = *(longlong *)(param_1[0xc1] + 0x1a0), lVar4 != 0)) {
    local_58 = lVar4;
    local_50 = param_1;
    FUN_142dd9890(param_1,&local_58);
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    UWorld::GetPlayerControllerIterator(lVar4,&local_58);
    iVar3 = (int)local_50;
    while( true ) {
      if ((iVar3 < 0) || (*(int *)(local_58 + 8) <= iVar3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar4 = FWeakObjectPtr::Get();
      if ((lVar4 == 0) || (lVar9 = *(longlong *)(lVar4 + 0x498), lVar9 == 0)) {
LAB_140ae56b2:
        lVar9 = 0;
      }
      else {
        lVar5 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140ae56b2;
      }
      if (lVar9 != 0) {
        lVar6 = FUN_140c428a0(lVar9);
        lVar5 = *(longlong *)(lVar6 + 0xb0);
        lVar11 = (longlong)*(int *)(lVar6 + 0xb8) * 0x40 + lVar5;
        for (; lVar5 != lVar11; lVar5 = lVar5 + 0x40) {
          FUN_140e948e0(lVar6,*(undefined8 *)(lVar5 + 0x20),1,0);
        }
        plVar7 = (longlong *)FUN_140c430a0(lVar9,3);
        if (plVar7 != (longlong *)0x0) {
          lVar5 = FUN_140c430a0(lVar9,0);
          if (lVar5 != 0) {
            FUN_14246d9c0(local_68,lVar5 + 0x2a4);
            FUN_14246d9c0(local_78,(longlong)plVar7 + 0x2a4);
            if (local_64 < local_74) {
              FUN_14246fd60(lVar5 + 0x2a4,local_78);
            }
            thunk_FUN_142478640(local_78);
            thunk_FUN_142478640(local_68);
          }
          (**(code **)(*plVar7 + 0x3b0))(plVar7,0);
        }
        if (*(longlong *)(lVar9 + 0x2ae0) != 0) {
          FUN_1409b9760();
        }
        lVar5 = *(longlong *)(lVar9 + 0x2de0);
        lVar11 = (longlong)*(int *)(lVar9 + 0x2de8) * 0x40 + lVar5;
        for (; lVar5 != lVar11; lVar5 = lVar5 + 0x40) {
          FUN_140e7b7b0(lVar6,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x10),1,0);
        }
        FUN_140e8ef10(lVar9 + 0x2d30,0);
        (**(code **)(*(longlong *)(lVar9 + 0xdc8) + 0x20))((longlong *)(lVar9 + 0xdc8),local_38);
        cVar2 = FUN_142d52a00(local_38);
        if (cVar2 != '\0') {
          uVar8 = FUN_142d62160(local_30,local_38);
          uVar12 = FUN_142d61c30(uVar8);
          FUN_142d6f560(uVar8,uVar12,1);
        }
        uVar10 = 0;
        if (0 < *(int *)(lVar9 + 0x2e20)) {
          do {
            lVar5 = *(longlong *)((longlong)(int)uVar10 * 0xf8 + 8 + *(longlong *)(lVar9 + 0x2e18));
            if (lVar5 != 0) {
              FUN_140c57820(lVar9,lVar5,0,1,1);
              lVar5 = (**(code **)(*(longlong *)(lVar9 + 0xd88) + 0xf0))
                                ((longlong *)(lVar9 + 0xd88),uVar10 & 0xff);
              if (lVar5 != 0) {
                FUN_14308bdb0(lVar5,1);
              }
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < *(int *)(lVar9 + 0x2e20));
        }
        FUN_140e8f060(lVar9 + 0x2e18,0);
        if ((param_1[0xc1] != 0) && (lVar5 = *(longlong *)(param_1[0xc1] + 0x198), lVar5 != 0)) {
          local_48 = lVar5;
          local_40 = lVar9;
          FUN_142dd9890(lVar9,&local_48);
        }
        if (lVar4 != 0) {
          lVar9 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(longlong *)(lVar4 + 0xc78) != 0)) {
            FUN_140e48b60(*(longlong *)(lVar4 + 0xc78),0);
          }
        }
      }
      iVar3 = (int)local_50 + 1;
      local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar3);
    }
  }
  return;
}



// FUNCTION 140ae5960 FUN_140ae5960 body=244 status=ok
// SIG undefined FUN_140ae5960(void)

void FUN_140ae5960(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  
  if (*(longlong *)(param_1 + 0xbb0) == 0) {
    fVar7 = 3000.0;
  }
  else {
    fVar7 = *(float *)(*(longlong *)(param_1 + 0xbb0) + 0x17c) * 1000.0;
  }
  plVar1 = (longlong *)(param_1 + 0xc80);
  lVar3 = *plVar1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0xc88);
  lVar4 = lVar3 + uVar6 * 0x18;
  if (lVar3 != lVar4) {
    do {
      FUN_1405ac8f0(lVar3,(int)fVar7,4);
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar4);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0xc88);
  }
  iVar2 = *(int *)(param_1 + 0xc8c);
  lVar4 = *plVar1;
  uVar5 = (uint)uVar6;
  if (iVar2 < 0) {
    if (uVar5 != 0) {
      do {
        FUN_140591060(lVar4);
        lVar4 = lVar4 + 0x18;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 != 0);
      iVar2 = *(int *)(param_1 + 0xc8c);
    }
    *(undefined4 *)(param_1 + 0xc88) = 0;
    if (iVar2 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
  }
  else {
    while (uVar5 != 0) {
      FUN_140591060(lVar4);
      lVar4 = lVar4 + 0x18;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    }
    *(undefined4 *)(param_1 + 0xc88) = 0;
  }
  return;
}



// FUNCTION 140ae5a60 FUN_140ae5a60 body=884 status=ok
// SIG undefined FUN_140ae5a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae5a60(longlong *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  lVar3 = FUN_140ad5f70();
  if (lVar3 != 0) {
    local_b8 = (undefined1 *)0x0;
    FUN_140e3c160(lVar3,param_2,0,1);
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar5,param_1 + 0x95);
    param_1[0x95] = 0;
  }
  if (((param_1[0x9b] != 0) &&
      (FUN_142dbb5d0(param_1[0x9b] + 0xd58,&DAT_146868130), param_1[0x9b] != 0)) &&
     ((longlong *)param_1[0x26] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x26] + 0x400))();
    (**(code **)(*param_1 + 0x300))(param_1,param_1[0x9b]);
  }
  FUN_1412d9970(param_1);
  local_c8 = 0;
  FWeakObjectPtr::operator=(&local_c4,0);
  *(undefined1 *)(param_1 + 0x93) = local_c8;
  *(undefined4 *)((longlong)param_1 + 0x49c) = local_c4;
  *(undefined4 *)(param_1 + 0x94) = local_c0;
  if (((param_2 != '\0') || (param_1[0x9b] == 0)) ||
     ((param_1[0x9c] == 0 ||
      ((*(float *)(param_1[0x9c] + 0x568) <= 0.0 ||
       (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 == 0)))))) {
    (**(code **)(*param_1 + 0x730))(param_1);
    return;
  }
  FUN_140d134c0(param_1[0x9b],1,DAT_146868130);
  fVar1 = *(float *)(param_1[0x9c] + 0x56c);
  fVar2 = *(float *)(param_1[0x9c] + 0x568);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  uStack_b0 = 0;
  local_b8 = &LAB_140ac9a3c;
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)(lVar3 + 0x790);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar3 + 400) == 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_b0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_ac;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar3;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_d0 = 0xbf800000;
  local_d8 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar5,param_1 + 0x96,&local_a8,fVar1 + fVar2);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar3 = FMemory::Realloc(plVar4,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  if (param_1[0x9b] == 0) {
    return;
  }
  if (param_1[0x9c] == 0) {
    return;
  }
  *(longlong *)(param_1[0x9b] + 0x1858) = param_1[0x9c];
  return;
}



// FUNCTION 140ae5e00 FUN_140ae5e00 body=322 status=ok
// SIG undefined FUN_140ae5e00(void)

void FUN_140ae5e00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res10 [2];
  longlong local_48 [2];
  undefined1 local_38 [32];
  
  if (((param_2 != (longlong *)0x0) &&
      (cVar2 = (**(code **)(*param_2 + 0x778))(param_2), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*param_2 + 0x780))(param_2), cVar2 != '\0')) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xc90,local_res10,param_2);
    puVar3 = (undefined8 *)0x0;
    if (local_res10[0] != -1) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xc90) + (longlong)local_res10[0] * 0x28);
    }
    puVar4 = puVar3 + 1;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      cVar2 = FUN_14059ee90(puVar4);
      if (cVar2 != '\0') {
        if ((*(longlong *)(param_1 + 0xbb0) == 0) ||
           (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xbb0) + 0x188), lVar1 == 0)) {
          FUN_1405ac8f0(puVar4,0,4);
        }
        else {
          local_48[0] = 0;
          local_48[1] = 0;
          FUN_1405a2d20(*puVar4,local_38,lVar1,0,0,local_48);
          FUN_140591060(local_38);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
        }
      }
      FUN_140ae0de0(param_1 + 0xc90,param_2);
    }
  }
  return;
}



// FUNCTION 140ae5f50 FUN_140ae5f50 body=18 status=ok
// SIG undefined FUN_140ae5f50(void)

void FUN_140ae5f50(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x7cc) = 0;
  *(undefined4 *)(param_1 + 2000) = 0;
  return;
}



// FUNCTION 140ae5f70 FUN_140ae5f70 body=50 status=ok
// SIG undefined FUN_140ae5f70(void)

void FUN_140ae5f70(longlong param_1,undefined4 param_2)

{
  FUN_1422406d0();
  FUN_140ae76b0(param_1,param_1 + 0x468,param_2);
  return;
}



// FUNCTION 140ae5fb0 FUN_140ae5fb0 body=2945 status=ok
// SIG undefined FUN_140ae5fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae5fb0(longlong *param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_488 [32];
  undefined4 *local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined1 local_450;
  undefined8 local_448;
  undefined1 local_440;
  undefined1 local_438;
  undefined1 local_430;
  undefined1 local_428;
  undefined8 local_418;
  float local_410;
  longlong *local_408;
  float local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined2 local_3eb;
  undefined1 local_3e9;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 uStack_3d8;
  undefined4 local_3d4;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  longlong local_3b0;
  int local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_36c;
  undefined4 local_364;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_348;
  float local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined1 local_328 [12];
  float local_31c;
  float local_318;
  float local_314;
  undefined1 local_2fc [12];
  undefined1 local_2f0 [12];
  undefined1 local_2e4 [12];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_294 [52];
  longlong local_260;
  undefined1 local_1ac;
  undefined1 local_19c;
  undefined1 local_18c;
  undefined1 local_17c;
  undefined1 local_16c;
  undefined1 local_15c;
  undefined1 local_14c;
  undefined1 local_144;
  undefined1 local_134;
  undefined1 local_12c;
  longlong local_110;
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  FUN_142463310();
  if (((param_1[0xc1] != 0) && (lVar13 = param_1[0xc0], lVar13 != 0)) &&
     (cVar7 = *(char *)(lVar13 + 3000), cVar7 != '\0')) {
    fVar20 = -1.0;
    *(float *)(lVar13 + 0xc28) = param_2 + *(float *)(lVar13 + 0xc28);
    local_418 = 0;
    local_410 = 0.0;
    if (cVar7 == '\x02') {
      lVar13 = ((longlong *)param_1[0xc0])[0x17b];
      fVar18 = (float)(**(code **)(*(longlong *)param_1[0xc0] + 0x6f0))();
      fVar19 = *(float *)(param_1[0xc0] + 0xbc0);
      if (fVar18 <= fVar19) {
        UStaticMesh::GetBounds(*(undefined8 *)(param_1[0xc1] + 0x78),local_328);
        iVar8 = _finite((double)local_31c);
        if (((iVar8 == 0) || (iVar8 = _finite((double)local_318), iVar8 == 0)) ||
           (iVar8 = _finite((double)local_314), iVar8 == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((!bVar4) && (lVar2 = param_1[0xc3], lVar2 != 0)) {
          local_2d8 = *(undefined4 *)(lVar2 + 0x230);
          uStack_2d4 = *(undefined4 *)(lVar2 + 0x234);
          local_398 = *(undefined4 *)(lVar2 + 0x238);
          uStack_2cc = *(undefined4 *)(lVar2 + 0x23c);
          fVar19 = (fVar19 - fVar18) / *(float *)((longlong)param_1 + 0x63c);
          fVar20 = (*(float *)(param_1 + 200) - *(float *)((longlong)param_1 + 0x644)) * fVar19 +
                   *(float *)((longlong)param_1 + 0x644);
          local_3a0 = CONCAT44(fVar20 / local_318,fVar20 / local_31c);
          local_388 = CONCAT44(fVar20 / local_318,fVar20 / local_31c);
          local_380 = local_398;
          uStack_2d0 = local_398;
          FUN_142399c30(lVar2,&local_388);
          FUN_1423424e0(param_1[0xc3]);
          if (param_1[0xc5] != 0) {
            FUN_142f6c770(param_1[0xc5],(int)fVar20);
          }
          if (lVar13 != 0) {
            lVar13 = param_1[0xc0];
            if (*(longlong *)(lVar13 + 0xbe0) == 0) {
              puVar9 = (undefined8 *)FUN_140ad3fb0(lVar13,local_2f0);
              local_418 = *puVar9;
              local_410 = *(float *)(puVar9 + 1);
            }
            else {
              FUN_140ad3fb0(lVar13,&local_3d0);
              if (*(longlong *)(param_1[0xc0] + 0xbe0) == 0) {
                local_358 = DAT_1468b5d98;
                puVar9 = &local_360;
                local_360 = _DAT_1468b5d90;
              }
              else {
                lVar13 = *(longlong *)(*(longlong *)(param_1[0xc0] + 0xbe0) + 0x168);
                if (lVar13 == 0) {
                  local_370 = DAT_1468b5d98;
                  puVar10 = &local_378;
                  local_378 = _DAT_1468b5d90;
                }
                else {
                  local_2c8 = *(undefined4 *)(lVar13 + 0x220);
                  uStack_2c4 = *(undefined4 *)(lVar13 + 0x224);
                  uStack_2c0 = *(undefined4 *)(lVar13 + 0x228);
                  uStack_2bc = *(undefined4 *)(lVar13 + 0x22c);
                  puVar10 = (undefined8 *)&local_3dc;
                  local_3dc = local_2c8;
                  local_3d4 = uStack_2c0;
                  uStack_3d8 = uStack_2c4;
                }
                local_364 = *(undefined4 *)(puVar10 + 1);
                puVar9 = &local_36c;
                local_36c = *puVar10;
              }
              local_408 = (longlong *)*puVar9;
              fVar18 = (float)((ulonglong)local_408 >> 0x20);
              local_400 = *(float *)(puVar9 + 1);
              local_468 = (undefined4 *)((ulonglong)local_468 & 0xffffffffffffff00);
              local_410 = local_400 + (local_3c8 - local_400) * fVar19;
              local_418 = CONCAT44(fVar18 + (local_3cc - fVar18) * fVar19,
                                   local_408._0_4_ + (local_3d0 - local_408._0_4_) * fVar19);
              FUN_14223c850(param_1[0xc2],&local_418,0,0);
            }
          }
        }
      }
      else {
        FUN_140ad3430(param_1);
        if (lVar13 != 0) {
          fVar20 = *(float *)(param_1 + 200);
          puVar9 = (undefined8 *)FUN_140ad3fb0(param_1[0xc0],local_2fc);
          local_418 = *puVar9;
          local_410 = *(float *)(puVar9 + 1);
          if (param_1[0xc5] != 0) {
            FUN_142f6c770(param_1[0xc5],(int)*(float *)(param_1 + 200));
          }
        }
      }
    }
    else if (cVar7 == '\x01') {
      fVar20 = *(float *)(param_1 + 200);
      puVar9 = (undefined8 *)FUN_140ad3fb0(param_1[0xc0],local_2e4);
      local_418 = *puVar9;
      local_410 = *(float *)(puVar9 + 1);
      fVar19 = (float)(**(code **)(*(longlong *)param_1[0xc0] + 0x6f0))();
      if (*(float *)(param_1[0xc0] + 0xbbc) <= fVar19 && fVar19 != *(float *)(param_1[0xc0] + 0xbbc)
         ) {
        FUN_140ae4510(param_1);
      }
    }
    local_348 = local_418;
    local_340 = local_410;
    FUN_141322400(param_1[0xc0],&local_348,fVar20);
    *(float *)(param_1 + 0xd1) = *(float *)(param_1 + 0xd1) - param_2;
    uVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar11,&local_3b0);
LAB_140ae6460:
    plVar17 = (longlong *)0x0;
    if ((local_3a8 < 0) || (*(int *)(local_3b0 + 8) <= local_3a8)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar12 = (longlong *)FWeakObjectPtr::Get();
      if (plVar12 == (longlong *)0x0) {
LAB_140ae64d7:
        local_408 = (longlong *)0x0;
      }
      else {
        lVar13 = FUN_14145f370();
        if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
            != lVar13 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_140ae64d7;
        plVar17 = (longlong *)plVar12[0x93];
        local_408 = plVar12;
      }
      plVar12 = local_408;
      if ((plVar17 != (longlong *)0x0) && (cVar7 = (**(code **)(*plVar17 + 0x950))(), cVar7 == '\0')
         ) {
        puVar10 = (undefined8 *)param_1[0xd2];
        puVar9 = puVar10 + (int)param_1[0xd3];
        for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
          if ((longlong *)*puVar10 == plVar17) goto LAB_140ae6a93;
        }
        bVar4 = true;
        fVar19 = 0.0;
        bVar5 = bVar4;
        if (*(float *)(param_1 + 200) <= 0.0) {
LAB_140ae6609:
          plVar16 = param_1 + 0xcb;
          puVar10 = (undefined8 *)*plVar16;
          iVar8 = (int)param_1[0xcc];
          puVar9 = puVar10 + iVar8;
          for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
            if ((longlong *)*puVar10 == plVar17) goto LAB_140ae6823;
          }
          *(int *)(param_1 + 0xcc) = iVar8 + 1;
          if (*(int *)((longlong)param_1 + 0x664) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16);
          }
          *(longlong **)(*plVar16 + (longlong)iVar8 * 8) = plVar17;
          lVar13 = param_1[0xc1];
          if (*(longlong *)(lVar13 + 0x120) != 0) {
            lVar14 = UCelLightData::GetPrivateStaticClass();
            lVar13 = *(longlong *)(lVar13 + 0x120);
            for (lVar2 = lVar13; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
              if (lVar2 == lVar14) goto LAB_140ae668c;
            }
          }
          lVar13 = 0;
LAB_140ae668c:
          if (lVar13 != 0) {
            FUN_142d0a300(local_2a8);
            FWeakObjectPtr::operator=(local_294,param_1[0xc9]);
            local_468 = &local_3f8;
            local_3eb = 0;
            local_3e9 = 0;
            local_3f8 = 0xbf800000;
            local_3f4 = 0xbf800000;
            local_3f0 = 0xbf800000;
            local_3ec = 0;
            local_3e8 = 0x3f800000;
            local_3e4 = 0x3f800000;
            local_3e0 = 0x3f800000;
            local_458 = 0;
            local_460 = 0;
            FUN_140a86fb0(plVar17,*(undefined8 *)(param_1[0xc1] + 0x120),plVar17,local_2a8);
            if (local_b8 != 0) {
              plVar16 = local_e8;
              if (local_c8 != (longlong *)0x0) {
                plVar16 = local_c8;
              }
              if (plVar16 != (longlong *)0x0) {
                (**(code **)(*plVar16 + 0x10))(plVar16,0);
              }
            }
            if (local_c8 != (longlong *)0x0) {
              FMemory::Free();
            }
            if (local_110 != 0) {
              FMemory::Free();
            }
            local_12c = 0;
            local_134 = 0;
            local_144 = 0;
            local_14c = 0;
            local_15c = 0;
            local_16c = 0;
            local_17c = 0;
            local_18c = 0;
            local_19c = 0;
            local_1ac = 0;
            if (local_260 != 0) {
              FMemory::Free();
            }
            plVar16 = local_2a0;
            if (local_2a0 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_2a0 + 1;
              lVar13 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              plVar12 = local_408;
              if ((int)lVar13 == 1) {
                (**(code **)*local_2a0)(local_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar12 = local_408;
                if (iVar8 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                  plVar12 = local_408;
                }
              }
            }
          }
          FUN_141321ef0(param_1,plVar17);
          FUN_141321f70(param_1[0xc0],plVar17);
        }
        else {
          lVar13 = plVar17[0x2d];
          if (lVar13 == 0) {
            local_330 = DAT_1468b5d98;
            puVar9 = &local_338;
            local_338 = _DAT_1468b5d90;
          }
          else {
            local_2b8 = *(undefined4 *)(lVar13 + 0x220);
            uStack_2b4 = *(undefined4 *)(lVar13 + 0x224);
            uStack_2b0 = *(undefined4 *)(lVar13 + 0x228);
            uStack_2ac = *(undefined4 *)(lVar13 + 0x22c);
            puVar9 = (undefined8 *)&local_3c0;
            local_3c0 = local_2b8;
            local_3b8 = uStack_2b0;
            uStack_3bc = uStack_2b4;
          }
          fVar18 = (float)local_418 - (float)*puVar9;
          fVar19 = local_418._4_4_ - (float)((ulonglong)*puVar9 >> 0x20);
          fVar18 = SQRT(fVar18 * fVar18 + fVar19 * fVar19);
          if (fVar20 <= fVar18) {
            fVar19 = 0.0;
          }
          else {
            fVar19 = fVar20 - fVar18;
          }
          bVar4 = fVar19 < *(float *)((longlong)param_1 + 0x634) ||
                  fVar19 == *(float *)((longlong)param_1 + 0x634);
          bVar5 = fVar19 < *(float *)(param_1 + 199) || fVar19 == *(float *)(param_1 + 199);
          if (fVar20 <= fVar18) goto LAB_140ae6609;
          FUN_140ae11d0(param_1,plVar17);
        }
LAB_140ae6823:
        if (*(float *)(param_1 + 0xd1) <= 0.0) {
          if (plVar12[0x12f] != 0) {
            if (bVar4) {
              if ((*(longlong *)(param_1[0xc1] + 0x98) != 0) &&
                 (0.0 < *(float *)((longlong)param_1 + 0x634))) {
                plVar16 = param_1 + 0xcd;
                plVar3 = (longlong *)*plVar16;
                iVar8 = (int)param_1[0xce];
                for (plVar15 = plVar3; plVar6 = plVar3, plVar15 != plVar3 + iVar8;
                    plVar15 = plVar15 + 1) {
                  if ((longlong *)*plVar15 == plVar12) goto LAB_140ae6951;
                }
                for (; plVar6 != plVar3 + iVar8; plVar6 = plVar6 + 1) {
                  if ((longlong *)*plVar6 == plVar12) {
                    if ((int)((longlong)plVar6 - (longlong)plVar3 >> 3) != -1) goto LAB_140ae68f2;
                    break;
                  }
                }
                *(int *)(param_1 + 0xce) = iVar8 + 1;
                if (*(int *)((longlong)param_1 + 0x674) < iVar8 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar8);
                }
                *(longlong **)(*plVar16 + (longlong)iVar8 * 8) = plVar12;
LAB_140ae68f2:
                local_428 = 0;
                local_430 = 1;
                local_438 = 0;
                local_440 = 0;
                local_448 = DAT_1468680c8;
                local_450 = 1;
                local_458 = CONCAT71(local_458._1_7_,1);
                local_460 = CONCAT71(local_460._1_7_,4);
                local_468 = (undefined4 *)CONCAT44(local_468._4_4_,0x42c80000);
                FUN_142d9e0d0(plVar12[0x12f],*(undefined8 *)(param_1[0xc1] + 0x98),1,
                              0x4110000041800000);
LAB_140ae6951:
                local_468 = (undefined4 *)
                            CONCAT44(local_468._4_4_,
                                     (*(float *)((longlong)param_1 + 0x634) - fVar19) /
                                     *(float *)((longlong)param_1 + 0x634));
                FUN_142e72560(plVar12[0x12f],*(undefined8 *)(param_1[0xc1] + 0x98),DAT_1468680c8,
                              *(undefined8 *)(param_1[0xc1] + 0xd8));
              }
            }
            else {
              iVar8 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0xcd,&local_408);
              plVar12 = local_408;
              if (0 < iVar8) {
                FUN_142e724b0(local_408[0x12f],*(undefined8 *)(param_1[0xc1] + 0x98),DAT_1468680c8,1
                             );
              }
            }
          }
          plVar16 = param_1 + 0xcf;
          if (bVar5) {
            plVar15 = (longlong *)*plVar16;
            iVar8 = (int)param_1[0xd0];
            plVar3 = plVar15 + iVar8;
            for (; plVar15 != plVar3; plVar15 = plVar15 + 1) {
              if ((longlong *)*plVar15 == plVar12) goto LAB_140ae6a93;
            }
            *(int *)(param_1 + 0xd0) = iVar8 + 1;
            if (*(int *)((longlong)param_1 + 0x684) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
            }
            *(longlong **)(*plVar16 + (longlong)iVar8 * 8) = plVar12;
            if ((*(longlong *)(param_1[0xc1] + 0xe0) != 0) && (param_1[0xc0] != 0)) {
              cVar7 = (**(code **)(*plVar12 + 0x768))(plVar12);
              if (cVar7 == '\0') {
                FUN_141321d80(param_1[0xc0],plVar17);
                local_3a8 = local_3a8 + 1;
              }
              else {
                FUN_140ae4440();
                local_3a8 = local_3a8 + 1;
              }
              goto LAB_140ae6460;
            }
          }
          else {
            iVar8 = TArray<FName,FDefaultAllocator>::Remove(plVar16,&local_408);
            if (0 < iVar8) {
              FUN_140ae1160(param_1,plVar17);
            }
          }
        }
      }
LAB_140ae6a93:
      local_3a8 = local_3a8 + 1;
      goto LAB_140ae6460;
    }
    if (*(float *)(param_1 + 0xd1) <= 0.0) {
      *(undefined4 *)(param_1 + 0xd1) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 140ae6b40 FUN_140ae6b40 body=216 status=ok
// SIG undefined FUN_140ae6b40(void)

void FUN_140ae6b40(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if ((*(char *)(param_1 + 0x7cc) != '\0') && (lVar1 = *(longlong *)(param_1 + 0x7b8), lVar1 != 0))
  {
    local_28 = *(float *)(lVar1 + 0x210);
    fStack_24 = *(float *)(lVar1 + 0x214);
    fStack_20 = *(float *)(lVar1 + 0x218);
    fStack_1c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
    iVar3 = movmskps(in_EAX,auVar2);
    lVar5 = lVar1;
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_28;
      *(float *)(lVar1 + 0x254) = fStack_24;
      *(float *)(lVar1 + 600) = fStack_20;
      *(float *)(lVar1 + 0x25c) = fStack_1c;
      puVar4 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
      *(undefined8 *)(lVar1 + 0x260) = *puVar4;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
      lVar5 = *(longlong *)(param_1 + 0x7b8);
    }
    local_30 = *(undefined4 *)(lVar1 + 0x268);
    local_38 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20) +
                        param_2 * *(float *)(param_1 + 2000),(int)*(undefined8 *)(lVar1 + 0x260));
    FUN_142399b90(lVar5,&local_38,0,0,0);
  }
  return;
}



// FUNCTION 140ae6c20 FUN_140ae6c20 body=1341 status=ok
// SIG undefined FUN_140ae6c20(void)

void FUN_140ae6c20(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float local_res8 [2];
  float local_38 [12];
  
  FUN_142357eb0();
  uVar13 = 0;
  if ((*(char *)(param_1 + 0x10e5) == '\0') && (*(char *)(param_1 + 0x10e6) == '\0'))
  goto LAB_140ae7033;
  lVar8 = *(longlong *)(param_1 + 0x118);
  if (lVar8 == 0) {
LAB_140ae6cd9:
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar7 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (plVar10 = *(longlong **)(lVar8 + 0x490), plVar10 == (longlong *)0x0))
    goto LAB_140ae6cd9;
    lVar8 = FUN_1429e18b0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140ae6cd9;
  }
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  if ((plVar10 != (longlong *)0x0) && (lVar8 != 0)) {
    bVar1 = *(byte *)(param_1 + 0x1110);
    bVar3 = (byte)(*(uint *)(plVar10 + 200) >> 1) & 1;
    *(byte *)(param_1 + 0x1110) = bVar3;
    if (bVar1 != bVar3) {
      iVar6 = FUN_14233f450(param_1);
      if (iVar6 == 3) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x1170,0);
        cVar5 = *(char *)(param_1 + 0x1110);
        cVar4 = FUN_142d52a00(param_1 + 0x3d0);
        if (cVar5 == '\0') {
          if (cVar4 != '\0') {
            uVar9 = FUN_142d52a20(param_1 + 0x3d0);
            lVar8 = FArchive::operator<<(uVar9);
            FUN_14246fd70(lVar8 + 0x94,0);
          }
          cVar5 = FUN_142d52a00(param_1 + 0x1098);
          if (cVar5 != '\0') {
            uVar9 = FUN_142d52a20(param_1 + 0x1098);
            lVar8 = FArchive::operator<<(uVar9);
            FUN_14246fd70(lVar8 + 0x94,0);
          }
        }
        else {
          if (cVar4 != '\0') {
            uVar9 = FUN_142d52a20(param_1 + 0x3d0);
            lVar8 = FArchive::operator<<(uVar9);
            FUN_14246fd70(lVar8 + 0x94,1);
          }
          cVar5 = FUN_142d52a00(param_1 + 0x1098);
          if (cVar5 != '\0') {
            uVar9 = FUN_142d52a20(param_1 + 0x1098);
            lVar8 = FArchive::operator<<(uVar9);
            FUN_14246fd70(lVar8 + 0x94,1);
          }
          cVar5 = *(char *)(param_1 + 0x10e6);
          if (cVar5 == '\x02') {
            FUN_140ae2650(param_1,0);
            cVar5 = *(char *)(param_1 + 0x10e6);
          }
          if (cVar5 == '\x01') {
            FUN_140accfa0(param_1,0);
          }
        }
      }
      cVar5 = FUN_140adacb0(param_1);
      if (cVar5 != '\0') {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x1160,0);
      }
    }
    if (((*(uint *)((longlong)plVar10 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar5 = (**(code **)(*plVar10 + 0x768))(plVar10), cVar5 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && (*(char *)(param_1 + 0x10e5) != '\0')) &&
        (*(char *)(param_1 + 0x10e5) != '\x03')) &&
       (((*(longlong *)(param_1 + 0xa20) != 0 || (*(longlong *)(param_1 + 0x1030) != 0)) &&
        (lVar8 = plVar10[0xa5], lVar8 != 0)))) {
      lVar7 = FUN_142fd5420();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(longlong *)(lVar8 + 0x2ca0) != 0)) &&
         (lVar8 = UUGMenuManager::GetFadeHUD(), lVar8 != 0)) {
        if (*(longlong *)(param_1 + 0xa20) != 0) {
          if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar7 = FUN_1423407b0(param_1), lVar7 == 0))
          {
            fVar12 = 0.0;
          }
          else {
            lVar7 = *(longlong *)(param_1 + 0x120);
            if (lVar7 == 0) {
              lVar7 = FUN_1423407b0(param_1);
            }
            fVar12 = *(float *)(lVar7 + 0x790);
          }
          fVar12 = fVar12 - *(float *)(param_1 + 0x1354);
          FUN_1423d62c0(*(undefined8 *)(param_1 + 0xa20),local_res8,local_38);
          if ((local_res8[0] <= fVar12) && (fVar12 <= local_38[0])) {
            uVar11 = UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0xa20),fVar12);
            FUN_142fc8dc0(lVar8,param_1 + 0x420,uVar11);
          }
        }
        if (*(longlong *)(param_1 + 0x1030) != 0) {
          FUN_1423d62c0(*(longlong *)(param_1 + 0x1030),local_38,local_res8);
          fVar12 = (float)FUN_140ad4b30(param_1);
          fVar12 = (float)UCurveFloat::GetFloatValue
                                    (*(undefined8 *)(param_1 + 0x1030),
                                     (local_res8[0] - local_38[0]) * (1.0 - fVar12));
          if (0.0 <= fVar12) {
            if (1.0 <= fVar12) {
              fVar12 = 1.0;
            }
          }
          else {
            fVar12 = 0.0;
          }
          FUN_142fc8dc0(lVar8,param_1 + 0xa30,fVar12);
        }
      }
    }
  }
LAB_140ae7033:
  lVar8 = *(longlong *)(param_1 + 0x118);
  if (lVar8 != 0) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar5 = FUN_142d52a00(param_1 + 0x3d0);
      if (cVar5 != '\0') {
        uVar9 = FUN_142d52a20(param_1 + 0x3d0);
        uVar9 = FArchive::operator<<(uVar9);
        uVar13 = FUN_142d5fea0(uVar9);
      }
      uVar11 = FUN_140ad61c0(param_1);
      FUN_140c581f0(lVar8,*(undefined1 *)(param_1 + 0x10e5),uVar13,*(undefined1 *)(param_1 + 0x10e6)
                    ,uVar11,param_1 + 0x10c8);
      iVar6 = FUN_14233f450(param_1);
      if ((iVar6 == 3) &&
         (((*(longlong *)(param_1 + 0x120) != 0 || (lVar8 = FUN_1423407b0(param_1), lVar8 != 0)) &&
          (*(char *)(param_1 + 0x10e5) == '\x03')))) {
        lVar8 = *(longlong *)(param_1 + 0x120);
        if (lVar8 == 0) {
          lVar8 = FUN_1423407b0(param_1);
        }
        if (25.0 < *(float *)(lVar8 + 0x790) - *(float *)(param_1 + 0x1358)) {
          FUN_140ad0d20(param_1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ae7160 FUN_140ae7160 body=1350 status=ok
// SIG undefined FUN_140ae7160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae7160(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined1 auStack_298 [32];
  uint *local_278;
  longlong **local_270;
  int *local_268;
  longlong **local_260;
  undefined1 local_258;
  undefined1 local_248 [16];
  uint local_238;
  uint uStack_234;
  uint *puStack_230;
  undefined4 local_228;
  int iStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  int local_218;
  undefined1 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  float local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  float local_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  uint *local_1e0;
  uint uStack_1d8;
  int iStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  float local_1b8;
  longlong *local_1b0;
  undefined8 uStack_1a8;
  uint *puStack_1a0;
  undefined4 uStack_198;
  int iStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  int local_178 [4];
  uint local_168 [8];
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined1 local_128 [112];
  longlong *local_b8 [9];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  FUN_1426d3dd0(local_168);
  FUN_1426ea8d0(local_168,2);
  if ((*(int *)(lVar3 + 0x38) < DAT_146868288) &&
     (_Init_thread_header(&DAT_146868288), DAT_146868288 == -1)) {
    FName::FName(&DAT_146868280,"LargeLiquidBody_TickElementalOverlapReactionSpawning",1);
    _Init_thread_footer(&DAT_146868288);
  }
  local_278 = (uint *)param_1;
  FUN_1422ffb20(local_b8,DAT_146868280,local_248,1);
  local_218 = 1 << (DAT_146296530 & 0x1f);
  local_214 = 0;
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  local_260 = (longlong **)((ulonglong)local_260 & 0xffffffffffffff00);
  local_268 = &local_218;
  local_270 = local_b8;
  local_278 = local_168;
  FUN_1423387f0(uVar9,local_178,0,1);
  lVar3 = param_1[0xa2];
  uVar18 = 0;
  local_1f0 = (longlong *)(lVar3 + 0x338);
  uStack_234 = 1;
  iVar1 = *(int *)(lVar3 + 0x360);
  puStack_230 = (uint *)(lVar3 + 0x348);
  local_238 = 0;
  iStack_224 = 0;
  uStack_220 = 0;
  if (iVar1 != 0) {
    puVar17 = *(uint **)(lVar3 + 0x358);
    if (*(uint **)(lVar3 + 0x358) == (uint *)0x0) {
      puVar17 = puStack_230;
    }
    uVar2 = *puVar17;
    uVar12 = uVar18;
    uVar14 = uVar18;
    while (uVar2 == 0) {
      iVar8 = (int)uVar12;
      uStack_220 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_220;
      local_238 = iVar8 + 1;
      uVar12 = (ulonglong)local_238;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_140ae7314;
      uVar2 = puVar17[(longlong)iVar8 + 1];
    }
    uStack_234 = -uVar2 & uVar2;
    iVar8 = 0x1f;
    if (uStack_234 != 0) {
      for (; uStack_234 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_234 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_224 = (uStack_220 - iVar8) + 0x1f;
    if (iVar1 < iStack_224) {
LAB_140ae7314:
      iStack_224 = iVar1;
    }
  }
  local_228 = 0xffffffff;
  uStack_1e8 = CONCAT44(uStack_234,local_238);
  uStack_198 = 0xffffffff;
  iStack_194 = iStack_224;
  uStack_190 = uStack_220;
  uStack_18c = uStack_21c;
  uStack_1d8 = 0xffffffff;
  iStack_1d4 = iStack_224;
  local_1d0 = uStack_220;
  uStack_1cc = uStack_21c;
  local_1e0 = puStack_230;
  local_1b0 = local_1f0;
  uStack_1a8 = uStack_1e8;
  puStack_1a0 = puStack_230;
  if (iStack_224 < iVar1) {
    do {
      lVar3 = *(longlong *)(*local_1f0 + (longlong)iStack_1d4 * 0x18);
      lVar4 = *(longlong *)(lVar3 + 0x238);
      piVar10 = (int *)FUN_140aa9d20(lVar3 + 0x3b0,local_1c8,lVar4);
      if (*piVar10 != -1) {
        uVar12 = uVar18;
        if (param_1[0x93] != 0) {
          uVar12 = *(ulonglong *)(param_1[0x93] + 0x48);
        }
        if (((uVar12 != 0) && (lVar5 = *(longlong *)(uVar12 + 0x30), lVar5 != 0)) &&
           (lVar16 = *(longlong *)(lVar5 + 0x38), lVar16 != 0)) {
          lVar6 = *(longlong *)(lVar5 + 0x50);
          lVar11 = lVar16;
          if (lVar6 != 0) {
            lVar11 = lVar6;
          }
          if (lVar11 != 0) {
            lVar11 = lVar16;
            if (lVar6 != 0) {
              lVar11 = lVar6;
            }
            plVar13 = *(longlong **)(lVar11 + 0x90);
            plVar15 = plVar13 + (longlong)*(int *)(lVar11 + 0x98) * 3;
            for (; plVar13 != plVar15; plVar13 = plVar13 + 3) {
              if (*plVar13 == lVar4) {
                if (plVar13[1] != 0) {
                  lVar16 = plVar13[1];
                }
                if (lVar16 != 0) {
                  plVar15 = *(longlong **)(lVar5 + 0x40);
                  plVar13 = plVar15 + (longlong)*(int *)(lVar5 + 0x48) * 0x1f;
                  goto joined_r0x000140ae745c;
                }
                break;
              }
            }
          }
        }
      }
LAB_140ae75d8:
      uStack_1d8 = uStack_1d8 & ~uStack_1e8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1e8);
    } while (iStack_1d4 < (int)local_1e0[6]);
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
joined_r0x000140ae745c:
  if (plVar15 == plVar13) goto LAB_140ae75d8;
  if (*plVar15 == lVar16) {
    plVar15 = *(longlong **)(lVar3 + 0x2a8);
    uVar12 = (longlong)*(int *)(lVar3 + 0x2b0) & 0x1fffffffffffffff;
    if (plVar15 + *(int *)(lVar3 + 0x2b0) < plVar15) {
      uVar12 = uVar18;
    }
    uVar14 = uVar18;
    if (uVar12 != 0) {
      do {
        lVar3 = *plVar15;
        if ((lVar3 != 0) && (cVar7 = FUN_1423909c0(lVar3), cVar7 != '\0')) {
          uVar9 = *(undefined8 *)(lVar3 + 0x1d0);
          local_210 = (undefined4)uVar9;
          puStack_1a0 = (uint *)(lVar3 + 0x3b0);
          local_208 = *(float *)(lVar3 + 0x1d8);
          local_1c0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          local_1f8 = *(float *)(lVar3 + 0x1e8) + *(float *)(lVar3 + 0x1e8) + local_208;
          local_20c = local_1c0._4_4_;
          local_1fc = local_1c0._4_4_;
          local_1b0 = (longlong *)CONCAT35(local_1b0._5_3_,2);
          local_200 = local_210;
          local_1c0 = uVar9;
          local_1b8 = local_208;
          _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
          local_260 = local_b8;
          local_238 = *(uint *)(lVar3 + 0x210);
          uStack_234 = *(uint *)(lVar3 + 0x214);
          puStack_230 = *(uint **)(lVar3 + 0x218);
          local_258 = 0;
          local_268 = local_178;
          local_270 = &local_1b0;
          local_278 = &local_238;
          local_13c = 0x3f800000;
          cVar7 = (**(code **)(*(longlong *)param_1[0xa0] + 0x8b0))
                            ((longlong *)param_1[0xa0],local_148,&local_200,&local_210);
          if ((cVar7 != '\0') && (cVar7 = FUN_140ad4490(param_1,local_128,local_188), cVar7 != '\0')
             ) {
            FUN_140ae3ee0(param_1,local_188);
          }
        }
        plVar15 = plVar15 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar12);
    }
    goto LAB_140ae75d8;
  }
  plVar15 = plVar15 + 0x1f;
  goto joined_r0x000140ae745c;
}



// FUNCTION 140ae76b0 FUN_140ae76b0 body=707 status=ok
// SIG undefined FUN_140ae76b0(void)

void FUN_140ae76b0(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  float *pfVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_res20;
  undefined4 local_res24;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  plVar7 = (longlong *)FUN_140ad5d40();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0xd0);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  cVar4 = FUN_142dcfc60();
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') {
      lVar11 = 0x2f0;
      goto LAB_140ae7759;
    }
    if (cVar4 == '\x02') {
      lVar11 = 0x360;
      goto LAB_140ae7759;
    }
    if (cVar4 == '\x03') {
      lVar11 = 0x3d0;
      goto LAB_140ae7759;
    }
  }
  lVar11 = 0x280;
LAB_140ae7759:
  bVar12 = *(char *)(param_2 + 0x30) != '\0';
  if ((*(char *)(param_2 + 0x30) == '\x02') && (cVar4 = FWeakObjectPtr::IsValid(), cVar4 == '\0')) {
    bVar12 = false;
  }
  if (bVar12) {
    uVar5 = (**(code **)(*plVar7 + 0x290))(plVar7,1,0);
    local_a8 = *(float *)(plVar7 + 0x44);
    fStack_a4 = *(float *)((longlong)plVar7 + 0x224);
    local_a0 = *(float *)(plVar7 + 0x45);
    if (*(char *)(param_2 + 0x30) == '\x01') {
      local_68 = *(float *)(plVar7 + 0x42);
      fStack_64 = *(float *)((longlong)plVar7 + 0x214);
      fStack_60 = *(float *)(plVar7 + 0x43);
      fStack_5c = *(float *)((longlong)plVar7 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)((longlong)plVar7 + 0x254) != fStack_64);
      auVar3._0_4_ = -(uint)(*(float *)(plVar7 + 0x4a) != local_68);
      auVar3._8_4_ = -(uint)(*(float *)(plVar7 + 0x4b) != fStack_60);
      auVar3._12_4_ = -(uint)(*(float *)((longlong)plVar7 + 0x25c) != fStack_5c);
      iVar6 = movmskps(uVar5,auVar3);
      if (iVar6 != 0) {
        *(float *)(plVar7 + 0x4a) = local_68;
        *(float *)((longlong)plVar7 + 0x254) = fStack_64;
        *(float *)(plVar7 + 0x4b) = fStack_60;
        *(float *)((longlong)plVar7 + 0x25c) = fStack_5c;
        plVar9 = (longlong *)FQuat::Rotator(&local_68,&local_98);
        plVar7[0x4c] = *plVar9;
        *(int *)(plVar7 + 0x4d) = (int)plVar9[1];
      }
      local_88 = plVar7[0x4c];
      local_80 = (float)plVar7[0x4d];
      pfVar10 = (float *)FRotator::RotateVector(&local_88,local_78,param_2 + 0x18);
      local_a8 = local_a8 + *pfVar10;
      fStack_a4 = fStack_a4 + pfVar10[1];
      local_a0 = local_a0 + pfVar10[2];
    }
    else if (*(char *)(param_2 + 0x30) == '\x02') {
      uVar8 = FWeakObjectPtr::Get(param_2 + 0x34);
      FUN_142ef62c0(uVar8,&local_res20,&DAT_1468b5d88);
      cVar4 = FUN_142dc8b90(*(undefined8 *)(param_1 + 0x4d8),local_res20,local_res24,&local_88,
                            &local_98,0);
      if (cVar4 != '\0') {
        fVar1 = *(float *)(lVar11 + lVar2);
        local_a8 = local_98 * fVar1 + (float)local_88;
        fStack_a4 = local_94 * fVar1 + local_88._4_4_;
        local_a0 = local_90 * fVar1 + local_80;
      }
    }
    local_88 = CONCAT44(fStack_a4,local_a8);
    local_80 = local_a0;
    FUN_142610200(plVar7,*(undefined8 *)(param_2 + 0x10),&local_88);
  }
  else {
    (**(code **)(*plVar7 + 0x290))(plVar7,0,0);
  }
  return;
}



// FUNCTION 140ae7980 FUN_140ae7980 body=632 status=ok
// SIG undefined FUN_140ae7980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ae7980(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_3e8 [32];
  undefined8 *local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [20];
  undefined8 local_3a4;
  undefined4 local_39c;
  longlong local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  lVar13 = *param_2;
  uVar2 = 0;
  lVar12 = (longlong)(int)param_2[1] * 0x158 + lVar13;
  for (; lVar13 != lVar12; lVar13 = lVar13 + 0x158) {
    uVar7 = 0;
    iVar6 = *(int *)(lVar13 + 0xf8);
    if (*(int *)((longlong)param_3 + 0xc) < (int)param_3[1] + iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_3);
      iVar6 = *(int *)(lVar13 + 0xf8);
    }
    _guard_xfg_dispatch_icall_nop(local_3b8,0,0x370);
    lVar4 = (longlong)local_50;
    local_39c = *(undefined4 *)(lVar13 + 0x14);
    local_3a4 = *(undefined8 *)(lVar13 + 0xc);
    local_50 = local_50 + iVar6;
    if (local_4c < local_50) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (&local_58);
    }
    _guard_xfg_dispatch_icall_nop((void *)(lVar4 * 0x78 + local_58),0,(longlong)iVar6 * 0x78);
    uVar8 = uVar7;
    uVar10 = uVar7;
    if (0 < *(int *)(lVar13 + 0xf8)) {
      do {
        uVar8 = uVar8 + 0xc;
        uVar7 = uVar7 + 0x78;
        lVar4 = *(longlong *)(lVar13 + 0xf0);
        if (*(longlong *)(lVar13 + 0xf0) == 0) {
          lVar4 = lVar13 + 0x30;
        }
        uVar9 = (int)uVar10 + 1;
        *(undefined8 *)(local_58 + -0x78 + uVar7) = *(undefined8 *)(lVar4 + -0xc + uVar8);
        *(undefined4 *)(local_58 + -0x70 + uVar7) = *(undefined4 *)(lVar4 + -4 + uVar8);
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(lVar13 + 0xf8));
    }
    local_3c8 = (undefined8 *)0x0;
    local_3c0 = 0;
    cVar1 = FUN_1424d6780(&local_3c8,local_3b8,0);
    if (cVar1 != '\0') {
      puVar11 = local_3c8 + (longlong)(int)local_3c0 * 0x9a;
      if (local_3c8 != puVar11) {
        puVar3 = local_3c8 + 0x6c;
        do {
          for (puVar5 = puVar3; puVar5 != puVar3 + 0x2d; puVar5 = puVar5 + 0xf) {
            iVar6 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar6 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar6);
            }
            lVar4 = *param_3;
            *(undefined8 *)(lVar4 + (longlong)iVar6 * 0xc) = *puVar5;
            *(undefined4 *)(lVar4 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(puVar5 + 1);
          }
          puVar5 = puVar3 + 0x2e;
          puVar3 = puVar3 + 0x9a;
        } while (puVar5 != puVar11);
      }
      uVar2 = 1;
    }
    if (local_3c8 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return uVar2;
}



// FUNCTION 140ae7c00 FUN_140ae7c00 body=730 status=ok
// SIG undefined FUN_140ae7c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ae7c00(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  float local_48;
  float fStack_44;
  undefined8 local_3c;
  float local_34;
  
  FUN_140ae8e10();
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0xc);
    lVar5 = 0;
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar11 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar11;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar11) * 0x18;
    }
    if (((((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) &&
         (plVar6 = (longlong *)FUN_14222e270(param_2), plVar6 != (longlong *)0x0)) &&
        (cVar2 = (**(code **)(*plVar6 + 0x780))(plVar6), cVar2 != '\0')) &&
       (iVar4 = FUN_140ad38c0(param_2,param_1), iVar4 != -1)) {
      lVar5 = *param_1;
      lVar7 = (longlong)iVar4;
      if (((*(char *)(lVar5 + 0x10 + lVar7 * 0x14) == '\0') && (param_3 != (longlong *)0x0)) &&
         (lVar8 = thunk_FUN_142da89b0(param_2), lVar8 != 0)) {
        if (param_4 != '\0') {
          lVar10 = *(longlong *)(param_2 + 0x168);
          if (lVar10 == 0) {
            local_3c = _DAT_1468b5d90;
            local_34 = DAT_1468b5d98;
          }
          else {
            local_3c = *(undefined8 *)(lVar10 + 0x220);
            local_34 = *(float *)(lVar10 + 0x228);
          }
          fVar1 = local_34;
          uVar9 = local_3c;
          lVar10 = param_3[0x2d];
          if (lVar10 == 0) {
            local_3c = _DAT_1468b5d90;
            local_34 = DAT_1468b5d98;
          }
          else {
            local_3c = *(undefined8 *)(lVar10 + 0x220);
            local_34 = *(float *)(lVar10 + 0x228);
          }
          local_48 = (float)uVar9;
          fStack_44 = (float)((ulonglong)uVar9 >> 0x20);
          local_48 = local_48 - (float)local_3c;
          fStack_44 = fStack_44 - (float)((ulonglong)local_3c >> 0x20);
          if (*(float *)(lVar8 + 0x120) * *(float *)(lVar8 + 0x120) <
              fStack_44 * fStack_44 + local_48 * local_48 + (fVar1 - local_34) * (fVar1 - local_34))
          {
            return 0;
          }
        }
        if (*(longlong *)(lVar8 + 0x128) != 0) {
          uVar9 = UThrobber::GetPrivateStaticClass();
          lVar10 = (**(code **)(*param_3 + 0x628))(param_3,uVar9);
          if ((lVar10 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x128), lVar8 != 0)) {
            plVar12 = *(longlong **)(lVar10 + 0x188);
            plVar6 = plVar12 + *(int *)(lVar10 + 400);
            for (; plVar12 != plVar6; plVar12 = plVar12 + 1) {
              if (*plVar12 == lVar8) {
                return 0;
              }
            }
            plVar12 = *(longlong **)(lVar10 + 0x198);
            plVar6 = plVar12 + *(int *)(lVar10 + 0x1a0);
            for (; plVar12 != plVar6; plVar12 = plVar12 + 1) {
              if (*plVar12 == lVar8) {
                return 0;
              }
            }
          }
        }
        lVar8 = lVar5 + 8 + lVar7 * 0x14;
        cVar2 = FUN_14058c1e0(lVar8,param_3);
        if (cVar2 == '\0') {
          cVar2 = FUN_14044aea0(lVar8,0);
          if (cVar2 == '\0') {
            return 0;
          }
          if (*(char *)(lVar5 + 0x10 + lVar7 * 0x14) != '\0') {
            return 0;
          }
          FWeakObjectPtr::operator=(lVar8,param_3);
          *(undefined1 *)(lVar5 + 0x10 + lVar7 * 0x14) = 1;
          FUN_140ae3180(param_3,1);
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140ae7ee0 FUN_140ae7ee0 body=1516 status=ok
// SIG undefined FUN_140ae7ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae7ee0(longlong *param_1,float *param_2,float param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float local_168;
  float local_164;
  undefined4 local_160;
  longlong *local_158;
  int local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_128;
  float local_124;
  undefined4 local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  longlong *local_e8;
  int local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (((((lVar3 != 0) && (lVar3 = param_1[0x176], lVar3 != 0)) &&
       (*(longlong *)(lVar3 + 0x158) != 0)) &&
      ((*(longlong *)(lVar3 + 0x160) != 0 && (*(longlong *)(lVar3 + 0x168) != 0)))) &&
     (*(longlong *)(lVar3 + 0x170) != 0)) {
    if ((char)param_1[0x177] == '\0') {
      if (0 < (int)param_1[0x191]) {
        FUN_140ae5960(param_1);
      }
    }
    else {
      lVar3 = 0;
      if ((int)param_1[0x191] == 0) {
        FUN_140ae5960(param_1);
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        if (((lVar4 != 0) && (param_1[0x176] != 0)) && (*(longlong *)(param_1[0x176] + 0x158) != 0))
        {
          uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          UWorld::GetPlayerControllerIterator(uVar5,&local_158);
          for (; (-1 < local_150 && (local_150 < (int)local_158[1])); local_150 = local_150 + 1) {
            plVar6 = (longlong *)FWeakObjectPtr::Get(*local_158 + (longlong)local_150 * 8);
            lVar4 = lVar3;
            if ((plVar6 != (longlong *)0x0) && ((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) != 0)
               ) {
              cVar2 = (**(code **)(*plVar6 + 0x768))(plVar6);
              if (cVar2 != '\0') {
                lVar4 = plVar6[0x93];
              }
            }
            if ((lVar4 != 0) && (lVar4 = FUN_14059b7e0(lVar4,1), lVar4 != 0)) {
              lVar4 = FUN_1405a3150(lVar4,&local_e8,*(undefined8 *)(param_1[0x176] + 0x158),0);
              iVar1 = (int)param_1[0x191];
              *(int *)(param_1 + 0x191) = iVar1 + 1;
              if (*(int *)((longlong)param_1 + 0xc8c) < iVar1 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_1 + 400,iVar1);
              }
              lVar7 = param_1[400] + (longlong)iVar1 * 0x18;
              FUN_14058f8f0(lVar7,lVar4);
              *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
              FUN_140591060(&local_e8);
            }
          }
        }
      }
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar5,&local_e8);
      for (; (-1 < local_e0 && (local_e0 < (int)local_e8[1])); local_e0 = local_e0 + 1) {
        plVar6 = (longlong *)FWeakObjectPtr::Get(*local_e8 + (longlong)local_e0 * 8);
        lVar4 = lVar3;
        if ((plVar6 != (longlong *)0x0) && ((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) != 0)) {
          cVar2 = (**(code **)(*plVar6 + 0x768))(plVar6);
          if (cVar2 != '\0') {
            lVar4 = plVar6[0x93];
          }
        }
        if ((lVar4 != 0) && (lVar7 = FUN_14059b7e0(lVar4,1), lVar7 != 0)) {
          lVar4 = *(longlong *)(lVar4 + 0x168);
          if (lVar4 == 0) {
            local_c8 = DAT_1468b5d98;
            puVar8 = &local_d0;
            local_d0 = _DAT_1468b5d90;
          }
          else {
            puVar8 = (undefined8 *)&local_148;
            local_148 = *(undefined4 *)(lVar4 + 0x220);
            local_140 = *(undefined4 *)(lVar4 + 0x228);
            uStack_144 = *(undefined4 *)(lVar4 + 0x224);
          }
          fVar9 = *param_2;
          fVar12 = param_2[1];
          fVar11 = fVar9 - (float)*puVar8;
          fVar10 = fVar12 - (float)((ulonglong)*puVar8 >> 0x20);
          fVar10 = param_3 - SQRT(fVar10 * fVar10 + fVar11 * fVar11);
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          (**(code **)(*plVar6 + 0x7a8))(plVar6,&local_138,&local_108);
          local_128 = local_138 - fVar9;
          local_124 = local_134 - fVar12;
          local_130 = 0;
          param_2[2] = 0.0;
          local_120 = 0;
          FVector::Rotation(&local_128,&local_118);
          local_f8 = local_118 - local_108;
          local_f4 = local_114 - local_104;
          local_f0 = local_110 - local_100;
          FRotator::Vector(&local_f8,&local_168);
          local_168 = local_168 * -1.0;
          local_160 = 0;
          local_164 = local_164 * -1.0;
          fVar9 = local_168 * local_168 + local_164 * local_164;
          if (1e-08 < fVar9) {
            auVar13 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
            fVar12 = auVar13._0_4_;
            fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
            fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
            local_168 = local_168 * fVar12;
            local_164 = local_164 * fVar12;
          }
          fVar12 = -local_164;
          fVar11 = -local_168;
          fVar9 = *(float *)(param_1[0x176] + 0x178);
          if (fVar10 < fVar9) {
            fVar9 = fVar10 / fVar9;
            fVar12 = fVar12 * fVar9;
            fVar11 = fVar11 * fVar9;
          }
          FUN_1405aaad0(lVar7,*(undefined8 *)(param_1[0x176] + 0x160),fVar10,0,4);
          FUN_1405aaad0(lVar7,*(undefined8 *)(param_1[0x176] + 0x168),fVar12,0,4);
          FUN_1405aaad0(lVar7,*(undefined8 *)(param_1[0x176] + 0x170),fVar11,0,4);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ae84d0 FUN_140ae84d0 body=108 status=ok
// SIG undefined FUN_140ae84d0(void)

void FUN_140ae84d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_1413ffe00();
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140e36b80(lVar1,CONCAT71((int7)((ulonglong)lVar2 >> 8),*(char *)(param_1 + 0x10e5) != '\0'
                                  ));
    }
  }
  return;
}



// FUNCTION 140ae8540 FUN_140ae8540 body=181 status=ok
// SIG undefined FUN_140ae8540(void)

void FUN_140ae8540(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = *(char *)(param_1 + 0x3b0) == '\0';
  *(bool *)(param_1 + 0x3b0) = bVar9;
  bVar3 = false;
  *(int *)(param_1 + 0x12a4) = *(int *)(param_1 + 0x12a4) + 1;
  iVar6 = *(int *)(param_1 + 0x12a4);
  iVar5 = *(int *)(param_1 + 0x1298) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1290);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140ae85b1:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,bVar9);
        if (cVar4 == '\0') goto LAB_140ae85b1;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x12a4);
  }
  *(int *)(param_1 + 0x12a4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1290),0);
    return;
  }
  return;
}



// FUNCTION 140ae8600 FUN_140ae8600 body=337 status=ok
// SIG undefined FUN_140ae8600(void)

void FUN_140ae8600(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  float local_res18 [4];
  undefined1 *local_28;
  float *pfStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146868258) {
    _Init_thread_header(&DAT_146868258);
    if (DAT_146868258 == -1) {
      FName::FName(&DAT_146868250,L"Opacity",1);
      _Init_thread_footer(&DAT_146868258);
    }
  }
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x118);
    fVar4 = *(float *)(param_2 + 0x510);
    if (lVar1 != 0) {
      lVar3 = FUN_1413c2e10();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((*(byte *)(lVar1 + 0x4a0) & 0x10) != 0)) {
        fVar4 = fVar4 * *(float *)(lVar1 + 0x4e4);
      }
    }
    if (0.0 <= fVar4) {
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = 0.0;
    }
    pfStack_20 = local_res18;
    local_28 = &LAB_140ace810;
    local_res18[0] = fVar4;
    FUN_140ad3aa0(param_2,param_3,&local_28);
  }
  return;
}



// FUNCTION 140ae8760 FUN_140ae8760 body=285 status=ok
// SIG undefined FUN_140ae8760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae8760(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_108 [32];
  longlong local_e8 [24];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if ((param_1 != 0) &&
     (local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108, *(longlong *)(param_1 + 0x4d8) != 0)) {
    uVar2 = FUN_140d000a0();
    uVar5 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140725150(param_1,local_e8,0);
    plVar3 = local_e8;
    if (local_28 != (longlong *)0x0) {
      plVar3 = local_28;
    }
    uVar4 = (longlong)(int)local_20 & 0x1fffffffffffffff;
    if (plVar3 + (int)local_20 < plVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        lVar1 = *plVar3;
        if (lVar1 != 0) {
          FUN_142398e60(lVar1,*(uint *)(lVar1 + 0x6b8) & 0xfffe79ff | uVar2,0);
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ae8880 FUN_140ae8880 body=479 status=ok
// SIG undefined FUN_140ae8880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae8880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(longlong *)(param_2 + 0x1d0) != param_1) || (*(int *)(param_1 + 0x528) != 1)) {
    if (*(int *)(param_1 + 0x528) == 1) {
      lVar6 = *(longlong *)(param_1 + 0x498);
      lVar3 = 0;
      lVar5 = lVar3;
      if (lVar6 != 0) {
        lVar3 = *(longlong *)(lVar6 + 0x48);
        lVar5 = *(longlong *)(lVar6 + 0x40);
      }
      if ((lVar5 != 0) && (lVar3 != 0)) {
        FUN_140a71110(param_2,param_1,0,*(undefined8 *)(lVar5 + 0x38),*(undefined8 *)(lVar3 + 0x110)
                      ,**(undefined4 **)(param_1 + 0x520));
        return;
      }
      FUN_140a5c1d0(param_2,param_1);
      return;
    }
    plVar1 = *(longlong **)(param_2 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      lVar6 = plVar1[0x2d];
      if (lVar6 == 0) {
        local_28 = _DAT_1468b5d90;
        local_20 = DAT_1468b5d98;
      }
      else {
        local_28 = *(undefined8 *)(lVar6 + 0x220);
        local_20 = *(undefined4 *)(lVar6 + 0x228);
      }
      (**(code **)(*plVar1 + 0x578))(plVar1,local_res8,local_res10);
      lVar3 = *(longlong *)(param_1 + 0x520);
      local_10 = local_20;
      local_18 = local_28;
      lVar6 = lVar3 + (longlong)*(int *)(param_1 + 0x528) * 0x18;
      if (lVar3 != lVar6) {
        local_1c = local_res8[0];
        lVar5 = lVar3;
        do {
          lVar2 = FUN_140ac42a0(lVar5 + 8,&local_28);
          if (lVar2 != 0) {
            uVar4 = (undefined4)((lVar5 - lVar3) / 0x18);
            goto LAB_140ae8a21;
          }
          lVar5 = lVar5 + 0x18;
        } while (lVar5 != lVar6);
      }
      uVar4 = 0xffffffff;
LAB_140ae8a21:
      FUN_140ae3a10(param_1,param_2,uVar4);
    }
  }
  return;
}



// FUNCTION 140ae8a60 FUN_140ae8a60 body=942 status=ok
// SIG undefined FUN_140ae8a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae8a60(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  float local_30;
  undefined1 local_28 [32];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140ace200(param_1);
  if ((*(longlong *)(param_1 + 0x590) != 0) && (*(longlong *)(param_1 + 0x598) != 0)) {
    local_30 = (float)*(int *)(param_1 + 0x55c);
    local_48 = CONCAT44((float)*(int *)(param_1 + 0x558),(float)*(int *)(param_1 + 0x554));
    uStack_40._0_4_ = local_30;
    FUN_14234fd70(*(longlong *)(param_1 + 0x590),&local_48,1);
    lVar2 = *(longlong *)(param_1 + 0x590);
    pfVar1 = (float *)(lVar2 + 0x280);
    local_30 = (float)(*(int *)(param_1 + 0x564) + *(int *)(param_1 + 0x55c));
    local_38 = (ulonglong)(uint)(float)(*(int *)(param_1 + 0x550) / 2 + *(int *)(param_1 + 0x554));
    if ((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
       ((*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284) ||
        (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))))) {
      local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
      auVar8._12_4_ = 0;
      auVar8._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
      fVar3 = (float)DAT_146867c10;
      fVar4 = DAT_146867c10._4_4_;
      fVar5 = DAT_146867c10._8_4_;
      auVar8 = divps(auVar8,_DAT_146867c10);
      fVar11 = (float)local_48 - (float)(int)auVar8._0_4_ * fVar3;
      fVar12 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar8._4_4_ * fVar4;
      fVar13 = *(float *)(lVar2 + 0x200) - (float)(int)auVar8._8_4_ * fVar5;
      fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar3));
      fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar4));
      fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar5));
      uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146867c08 < fVar13) ^
               (uint)fVar13;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(fRam0000000146867c04 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_146867c00 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(lVar2 + 0x288) = uVar10;
      puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
      uVar6 = puVar7[1];
      *(undefined8 *)(lVar2 + 0x270) = *puVar7;
      *(undefined8 *)(lVar2 + 0x278) = uVar6;
    }
    local_48 = *(undefined8 *)(lVar2 + 0x270);
    uStack_40 = *(undefined8 *)(lVar2 + 0x278);
    FUN_142397be0(lVar2,&local_38,&local_48,0,0,0);
    local_30 = (float)*(int *)(param_1 + 0x55c);
    local_38 = CONCAT44((float)*(int *)(param_1 + 0x558),(float)*(int *)(param_1 + 0x560));
    uStack_40._0_4_ = local_30;
    FUN_14234fd70(*(undefined8 *)(param_1 + 0x598),&local_38,1);
    lVar2 = *(longlong *)(param_1 + 0x598);
    local_30 = (float)(*(int *)(param_1 + 0x564) + *(int *)(param_1 + 0x55c));
    pfVar1 = (float *)(lVar2 + 0x280);
    local_38 = (ulonglong)
               (uint)(float)(*(int *)(param_1 + 0x550) / 2 + *(int *)(param_1 + 0x554) * 2 +
                            *(int *)(param_1 + 0x560));
    if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
        (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
       (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
      local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
      fVar3 = (float)DAT_146867c10;
      fVar4 = DAT_146867c10._4_4_;
      fVar5 = DAT_146867c10._8_4_;
      auVar8 = divps(auVar9,_DAT_146867c10);
      fVar11 = (float)local_48 - (float)(int)auVar8._0_4_ * fVar3;
      fVar12 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar8._4_4_ * fVar4;
      fVar13 = *(float *)(lVar2 + 0x200) - (float)(int)auVar8._8_4_ * fVar5;
      fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar3));
      fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar4));
      fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar5));
      uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146867c08 < fVar13) ^
               (uint)fVar13;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(fRam0000000146867c04 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_146867c00 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(lVar2 + 0x288) = uVar10;
      puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
      uVar6 = puVar7[1];
      *(undefined8 *)(lVar2 + 0x270) = *puVar7;
      *(undefined8 *)(lVar2 + 0x278) = uVar6;
    }
    local_48 = *(undefined8 *)(lVar2 + 0x270);
    uStack_40 = *(undefined8 *)(lVar2 + 0x278);
    FUN_142397be0(lVar2,&local_38,&local_48,0,0,0);
  }
  return;
}



// FUNCTION 140ae8e10 FUN_140ae8e10 body=567 status=ok
// SIG undefined FUN_140ae8e10(void)

void FUN_140ae8e10(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  
  iVar12 = (int)param_1[1] + -1;
  if (-1 < iVar12) {
    lVar13 = (longlong)iVar12 * 0x14;
    lVar15 = (longlong)(int)param_1[1] * 0x14;
    lVar14 = lVar13;
    do {
      lVar10 = *param_1 + lVar14;
      cVar2 = FWeakObjectPtr::IsValid(lVar10);
      if ((cVar2 == '\0') || (cVar2 = FWeakObjectPtr::IsStale(lVar10,0,0), cVar2 != '\0')) {
LAB_140ae8fc9:
        uVar7 = FWeakObjectPtr::Get(lVar10 + 8);
        FUN_140ae3180(uVar7);
        iVar8 = (int)param_1[1];
        iVar4 = (iVar8 - iVar12) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + lVar13),(void *)(lVar15 + *param_1),(longlong)iVar4 * 0x14)
          ;
          iVar8 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar8 + -1;
        TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1);
      }
      else {
        lVar5 = FWeakObjectPtr::Get(lVar10);
        iVar8 = *(int *)(lVar5 + 0xc);
        if (iVar8 < (int)DAT_1469e91c4) {
          uVar9 = iVar8 >> 0x1f & 0xffff;
          uVar3 = iVar8 + uVar9;
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) goto LAB_140ae8fc9;
        puVar11 = (undefined4 *)(lVar10 + 8);
        lVar5 = FWeakObjectPtr::Get(puVar11);
        if (lVar5 == 0) {
LAB_140ae8f48:
          cVar2 = FWeakObjectPtr::IsValid(puVar11);
          if ((cVar2 != '\0') &&
             (plVar6 = (longlong *)FWeakObjectPtr::Get(puVar11), plVar6 != (longlong *)0x0)) {
            lVar5 = APostProcessVolume::GetPrivateStaticClass();
            if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) && (cVar2 = (**(code **)(*plVar6 + 0x950))(plVar6), cVar2 != '\0')) {
              FWeakObjectPtr::operator=(&local_res10);
              *puVar11 = local_res10;
              *(undefined4 *)(lVar10 + 0xc) = local_res14;
            }
          }
        }
        else {
          iVar8 = *(int *)(lVar5 + 0xc);
          if (iVar8 < (int)DAT_1469e91c4) {
            uVar9 = iVar8 >> 0x1f & 0xffff;
            uVar3 = iVar8 + uVar9;
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) goto LAB_140ae8f48;
          FWeakObjectPtr::operator=(&local_res8);
          *puVar11 = local_res8;
          *(undefined4 *)(lVar10 + 0xc) = local_resc;
        }
      }
      lVar15 = lVar15 + -0x14;
      lVar13 = lVar13 + -0x14;
      lVar14 = lVar14 + -0x14;
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
  }
  return;
}



// FUNCTION 140ae9050 IsHighlighted body=8 status=ok
// SIG undefined IsHighlighted(void)

undefined1 AOCFarmedTile::IsHighlighted(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x5b8);
}



// FUNCTION 140ae9060 FUN_140ae9060 body=509 status=ok
// SIG undefined FUN_140ae9060(void)

void FUN_140ae9060(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *local_res8;
  undefined1 local_28 [32];
  
  plVar6 = (longlong *)FUN_140ad4230(param_1,param_3);
  if (param_3 != (longlong *)0x0) {
    lVar7 = FUN_14148cad0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_res8 = param_3;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0xb7,&local_res8);
      plVar10 = param_3 + 0x170;
      local_res8 = (longlong *)0x0;
      TArray<FName,FDefaultAllocator>::Remove(plVar10,&local_res8);
      plVar3 = (longlong *)*plVar10;
      iVar2 = (int)param_3[0x171];
      for (plVar8 = plVar3; plVar8 != plVar3 + iVar2; plVar8 = plVar8 + 1) {
        if ((longlong *)*plVar8 == param_1) {
          if ((int)((longlong)plVar8 - (longlong)plVar3 >> 3) != -1) goto LAB_140ae914c;
          break;
        }
      }
      *(int *)(param_3 + 0x171) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xb8c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10);
      }
      *(longlong **)(*plVar10 + (longlong)iVar2 * 8) = param_1;
    }
  }
LAB_140ae914c:
  if ((((plVar6 != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*plVar6 + 0x778))(plVar6), cVar5 != '\0')) &&
      (lVar7 = FUN_14059b7e0(plVar6,1), lVar7 != 0)) && (param_1[0xaf] != 0)) {
    FUN_1405a3150(lVar7,local_28,param_1[0xaf],0);
    FUN_140591060(local_28);
  }
  if ((((char)param_1[0x25] == '\x03') && (plVar6 != (longlong *)0x0)) &&
     (lVar7 = plVar6[0x58e], lVar7 != 0)) {
    puVar9 = (undefined8 *)param_1[0xb5];
    puVar1 = puVar9 + (int)param_1[0xb6];
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      if ((longlong *)*puVar9 == plVar6) {
        return;
      }
    }
    local_res8 = plVar6;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0xb5,&local_res8);
    if (param_1[0xb9] == 0) {
      param_1[0xb9] = (longlong)plVar6;
      (**(code **)(*param_1 + 0x600))(param_1);
    }
    FUN_14145e410(lVar7,1);
    if (param_1[0xae] != 0) {
      FUN_142e56530(lVar7,param_1[0xae],0x3f800000,0,0);
    }
    (**(code **)(*param_1 + 0x730))(param_1,2);
  }
  return;
}



// FUNCTION 140ae9260 FUN_140ae9260 body=464 status=ok
// SIG undefined FUN_140ae9260(void)

void FUN_140ae9260(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong *local_res8;
  undefined1 local_48 [32];
  
  plVar2 = (longlong *)FUN_140ad4230(param_1,param_3);
  local_res8 = plVar2;
  if (param_3 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      lVar3 = (longlong)(int)param_1[0xb8];
      if ((int)param_1[0xb8] != 0) {
        iVar7 = 0;
        bVar8 = *(longlong *)param_1[0xb7] != param_3;
        lVar4 = 0;
        iVar5 = 0;
        do {
          lVar4 = lVar4 + 1;
          iVar6 = iVar5 + 1;
          if (lVar4 < lVar3) {
            plVar2 = (longlong *)(param_1[0xb7] + lVar4 * 8);
            do {
              if (bVar8 != (*plVar2 != param_3)) break;
              iVar6 = iVar6 + 1;
              lVar4 = lVar4 + 1;
              plVar2 = plVar2 + 1;
            } while (lVar4 < lVar3);
          }
          if (bVar8 != false) {
            if (iVar7 != iVar5) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(param_1[0xb7] + (longlong)iVar7 * 8),
                         (void *)(param_1[0xb7] + (longlong)iVar5 * 8),
                         (longlong)(iVar6 - iVar5) << 3);
            }
            iVar7 = iVar7 + (iVar6 - iVar5);
          }
          bVar8 = (bool)(bVar8 ^ 1);
          iVar5 = iVar6;
        } while (lVar4 < lVar3);
        *(int *)(param_1 + 0xb8) = iVar7;
        plVar2 = local_res8;
      }
      local_res8 = param_1;
      TArray<FName,FDefaultAllocator>::Remove(param_3 + 0xb80,&local_res8);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_14059b7e0(plVar2,1);
      if ((lVar3 != 0) && (param_1[0xb0] != 0)) {
        FUN_1405a3150(lVar3,local_48,param_1[0xb0],0);
        FUN_140591060(local_48);
      }
    }
  }
  if ((char)param_1[0x25] == '\x03') {
    FUN_140ae14c0(param_1,plVar2);
  }
  return;
}



// FUNCTION 140ae9440 FUN_140ae9440 body=195 status=ok
// SIG undefined FUN_140ae9440(void)

void FUN_140ae9440(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint local_20;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x154);
  uVar2 = *(uint *)(param_1 + 4);
  iVar4 = uVar2 + uVar1;
  *(int *)(param_1 + 4) = iVar4;
  if (*(int *)((longlong)param_1 + 0x24) < iVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1[3] + (longlong)(int)uVar2),0,(ulonglong)uVar1);
  UEnvQueryItemType_Actor::SetValue(param_1[3] + (longlong)(int)uVar2,param_2);
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  *(ulonglong *)(lVar3 + (longlong)iVar4 * 0xc) = ((ulonglong)uVar2 & 0x7fffffff) << 0x20;
  *(uint *)(lVar3 + 8 + (longlong)iVar4 * 0xc) = local_20 & 0xfffffffe;
  return;
}



// FUNCTION 140ae9510 BindDelegate<AFlarePlayerController> body=394 status=ok
// SIG undefined BindDelegate<AFlarePlayerController>(void)

void FInputActionUnifiedDelegate::BindDelegate<AFlarePlayerController>
               (longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar1 = (char)param_1[6];
  if (cVar1 == '\x01') {
    if (((int)param_1[1] != 0) && (plVar3 = (longlong *)*param_1, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*param_1 != 0) {
        lVar4 = FMemory::Realloc(*param_1,0,0);
        *param_1 = lVar4;
      }
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  else if (cVar1 == '\x02') {
    if (((int)param_1[3] != 0) && (plVar3 = (longlong *)param_1[2], plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (param_1[2] != 0) {
        lVar4 = FMemory::Realloc(param_1[2],0,0);
        param_1[2] = lVar4;
      }
      *(undefined4 *)(param_1 + 3) = 0;
    }
  }
  else if (cVar1 == '\x03') {
    FWeakObjectPtr::operator=(param_1 + 4,0);
    param_1[5] = 0;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_2);
    *(undefined4 *)(plVar3 + 2) = local_28;
    *(undefined4 *)((longlong)plVar3 + 0x14) = uStack_24;
    *(undefined4 *)(plVar3 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  if ((longlong *)&local_28 != param_1) {
    if (plVar3 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar2 = (longlong *)*param_1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*param_1 != 0) {
          lVar4 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar4;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 140ae96a0 FUN_140ae96a0 body=487 status=ok
// SIG undefined FUN_140ae96a0(void)

longlong FUN_140ae96a0(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined1 local_10;
  
  local_60 = *param_2;
  plVar6 = (longlong *)param_2[2];
  local_58 = param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  uVar5 = *(uint *)(param_2 + 3);
  local_68 = local_68 & 0xfd | 1;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_40 = 0;
  local_38 = 0;
  local_48 = local_48 ^ (uVar5 ^ local_48) & 0xf;
  local_30 = 0;
  local_28 = 0;
  local_67 = param_3;
  local_50 = plVar6;
  FWeakObjectPtr::operator=(local_20,0);
  local_18 = 0;
  local_10 = 0;
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
  local_78 = *param_5;
  uStack_74 = param_5[1];
  uStack_70 = param_5[2];
  uStack_6c = param_5[3];
  FInputActionUnifiedDelegate::BindDelegate<AFlarePlayerController>(&local_40,param_4,&local_78);
  plVar6 = (longlong *)(param_1 + 0x178);
  iVar3 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar3 + 1;
  if (*(int *)(param_1 + 0x184) < iVar3 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar6,iVar3);
  }
  FUN_140aec850((longlong)iVar3 * 0x60 + *plVar6,&local_68);
  iVar3 = *(int *)(param_1 + 0x180);
  lVar7 = *plVar6;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
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
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return (longlong)(iVar3 + -1) * 0x60 + lVar7;
}



// FUNCTION 140ae9890 FUN_140ae9890 body=175 status=ok
// SIG undefined FUN_140ae9890(void)

longlong * FUN_140ae9890(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  plVar1 = plVar7 + (int)param_1[1];
  do {
    if (plVar7 == plVar1) {
      return (longlong *)0x0;
    }
    lVar6 = *plVar7;
    lVar2 = *param_2;
    if (lVar6 != 0) {
      lVar4 = FUN_1428dfc70();
      lVar5 = lVar6;
      do {
        if (lVar5 == lVar4) goto LAB_140ae98e6;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar6 = 0;
LAB_140ae98e6:
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return plVar7;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 140ae9940 FUN_140ae9940 body=1020 status=ok
// SIG undefined FUN_140ae9940(void)

void FUN_140ae9940(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140ae9a3d;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
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
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_140ae9a3d:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140ae9b15;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_140ae9b15:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = UGNewsMenuItem::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140ae9940(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 140ae9d40 FUN_140ae9d40 body=1139 status=ok
// SIG undefined FUN_140ae9d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae9d40(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_140ae9e6f;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_140ae9e6f:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140ae9f2f;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
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
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_140ae9f2f:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = USoundSourceBus::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140ae9d40(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 140aea1c0 FUN_140aea1c0 body=1139 status=ok
// SIG undefined FUN_140aea1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140aea1c0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_140aea2ef;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_140aea2ef:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140aea3af;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
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
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_140aea3af:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_142a232e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140aea1c0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 140aea640 FUN_140aea640 body=89 status=ok
// SIG undefined FUN_140aea640(void)

longlong FUN_140aea640(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 400);
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140aea6a0 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 140aea740 FUN_140aea740 body=188 status=ok
// SIG undefined FUN_140aea740(void)

longlong FUN_140aea740(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined1 param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_10;
  ushort local_e;
  
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_e = local_e | 4;
  local_10 = param_6;
  local_20 = param_5;
  if ((param_2 != 0) &&
     (local_28 = param_4, lVar2 = FUN_142550d00(param_1,param_2,param_3,local_38), lVar2 != 0)) {
    lVar3 = FUN_1413ac760();
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



// FUNCTION 140aea800 __Internal_AddDynamic<ANuker1BasicLMProjectile> body=190 status=ok
// SIG undefined __Internal_AddDynamic<ANuker1BasicLMProjectile>(void)

void TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
     ::__Internal_AddDynamic<ANuker1BasicLMProjectile>
               (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  longlong local_10;
  
  FWeakObjectPtr::operator=(&local_18,0);
  local_10 = 0;
  FWeakObjectPtr::operator=(&local_18,param_2);
  local_10 = param_4;
  if (param_4 != 0) {
    lVar2 = FWeakObjectPtr::Get(&local_18);
    if (lVar2 != 0) {
      UObject::FindFunction(lVar2,local_10);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar3 = local_18;
  puVar3[1] = local_14;
  *(longlong *)(puVar3 + 2) = local_10;
  return;
}



// FUNCTION 140aea8c0 FUN_140aea8c0 body=194 status=ok
// SIG undefined FUN_140aea8c0(void)

undefined8 * FUN_140aea8c0(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_140ac4d50();
  *param_1 = &PTR__scalar_deleting_destructor__14427a098;
  param_1[0x8b] = &PTR_LAB_14427a840;
  param_1[0x8c] = &PTR_LAB_14427a8a0;
  param_1[0x8d] = &PTR_LAB_14427a8c8;
  param_1[0x8e] = &PTR_LAB_14427a8e0;
  param_1[0x8f] = &PTR_LAB_14427a908;
  param_1[0x90] = &PTR_LAB_14427a918;
  param_1[0x92] = &PTR_LAB_14427a958;
  param_1[0x93] = &PTR_LAB_14427a970;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  FName::FName(local_res8,L"CrazyEarlAnointmentReroll",1);
  param_1[0xaf] = local_res8[0];
  return param_1;
}



// FUNCTION 140aea990 FUN_140aea990 body=194 status=ok
// SIG undefined FUN_140aea990(void)

undefined8 * FUN_140aea990(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_140ac4d50();
  *param_1 = &PTR__scalar_deleting_destructor__14427aa40;
  param_1[0x8b] = &PTR_LAB_14427b1e8;
  param_1[0x8c] = &PTR_LAB_14427b248;
  param_1[0x8d] = &PTR_LAB_14427b270;
  param_1[0x8e] = &PTR_LAB_14427b288;
  param_1[0x8f] = &PTR_LAB_14427b2b0;
  param_1[0x90] = &PTR_LAB_14427b2c0;
  param_1[0x92] = &PTR_LAB_14427b300;
  param_1[0x93] = &PTR_LAB_14427b318;
  param_1[0xcc] = &PTR_LAB_14427b3e8;
  FName::FName(local_res8,L"CrazyEarl",1);
  param_1[0xaf] = local_res8[0];
  return param_1;
}



// FUNCTION 140aeaa60 FUN_140aeaa60 body=47 status=ok
// SIG undefined FUN_140aeaa60(void)

undefined8 * FUN_140aeaa60(undefined8 *param_1)

{
  FUN_140ac4f70();
  *param_1 = &PTR_FUN_1442618f8;
  param_1[0x8b] = &PTR_LAB_144262060;
  return param_1;
}



// FUNCTION 140aeaa90 FUN_140aeaa90 body=771 status=ok
// SIG undefined FUN_140aeaa90(void)

undefined8 * FUN_140aeaa90(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  uVar2 = FUN_14178c940();
  FUN_140aeb790(param_1,uVar2);
  *param_1 = &PTR_FUN_14427b400;
  param_1[0x8b] = &PTR_LAB_14427bb70;
  param_1[0x8c] = &PTR_LAB_14427bbd0;
  param_1[0x8d] = &PTR_LAB_14427bbf8;
  param_1[0x8e] = &PTR_LAB_14427bc10;
  param_1[0x8f] = &PTR_LAB_14427bc38;
  param_1[0x90] = &PTR_LAB_14427bc48;
  param_1[0x92] = &PTR_LAB_14427bc88;
  param_1[0x93] = &PTR_LAB_14427bca0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined1 *)(param_1 + 0xad) = 1;
  FName::FName(param_1 + 0xae,L"SnapBeam",1);
  param_1[0xaf] = 0;
  FUN_142c8c260(param_1 + 0xb0,0x457a0000);
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0x3f800000;
  param_1[0xbf] = 0;
  FUN_142c8c260(param_1 + 0xc0,0x43960000);
  FUN_142c8c260(param_1 + 199,0x3f800000);
  pvVar1 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  lVar5 = *(longlong *)((longlong)pvVar1 + uVar7 * 8);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f000000;
  if (*(int *)(lVar5 + 0x38) < DAT_1468689a8) {
    _Init_thread_header(&DAT_1468689a8);
    if (DAT_1468689a8 == -1) {
      puVar6 = (undefined8 *)FName::FName(local_res8,L"OakDamage",1);
      DAT_1468689a0 = *puVar6;
      _Init_thread_footer(&DAT_1468689a8);
    }
  }
  uVar2 = DAT_1468689a0;
  uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar2,uVar3,uVar3,0,0,0);
  param_1[0xd4] = lVar4;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x14c) = 1;
    *(byte *)(param_1[0xd4] + 0x660) = *(byte *)(param_1[0xd4] + 0x660) | 0x10;
    *(undefined4 *)(param_1[0xd4] + 0x670) = 1;
  }
  if (*(int *)(lVar5 + 0x38) < DAT_1468689b8) {
    _Init_thread_header(&DAT_1468689b8);
    if (DAT_1468689b8 == -1) {
      puVar6 = (undefined8 *)FName::FName(local_res8,L"Targetable",1);
      DAT_1468689b0 = *puVar6;
      _Init_thread_footer(&DAT_1468689b8);
    }
  }
  uVar2 = DAT_1468689b0;
  uVar3 = FUN_142e79d90();
  lVar5 = FUN_141752410(param_1,uVar2,uVar3,uVar3,0,0,0);
  param_1[0xd5] = lVar5;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x14c) = 1;
    FUN_142df2730(param_1[0xd5],0);
  }
  return param_1;
}



// FUNCTION 140aeada0 FUN_140aeada0 body=379 status=ok
// SIG undefined FUN_140aeada0(void)

undefined8 * FUN_140aeada0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_140aeb790();
  *param_1 = &PTR_FUN_14427bd70;
  param_1[0x8b] = &PTR_LAB_14427c4e0;
  param_1[0x8c] = &PTR_LAB_14427c540;
  param_1[0x8d] = &PTR_LAB_14427c568;
  param_1[0x8e] = &PTR_LAB_14427c580;
  param_1[0x8f] = &PTR_LAB_14427c5a8;
  param_1[0x90] = &PTR_LAB_14427c5b8;
  param_1[0x92] = &PTR_LAB_14427c5f8;
  param_1[0x93] = &PTR_LAB_14427c610;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  param_1[0xae] = 0x42c80000;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"BoxCollision",1);
  uVar3 = *puVar1;
  uVar2 = FUN_14290f330();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xaf] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"Displacement Direction",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1428fba90();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = param_1[0xaf];
  param_1[0xb0] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0xaf],0);
  *(undefined1 *)(param_1 + 6) = 4;
  return param_1;
}



// FUNCTION 140aeaf20 FUN_140aeaf20 body=1038 status=ok
// SIG undefined FUN_140aeaf20(void)

undefined8 * FUN_140aeaf20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  FUN_140aeb790();
  *(undefined4 *)(param_1 + 0xb5) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0x41200000;
  *param_1 = &PTR_FUN_14427c6e0;
  param_1[0x8b] = &PTR_LAB_14427ce70;
  param_1[0x8c] = &PTR_LAB_14427ced0;
  param_1[0x8d] = &PTR_LAB_14427cef8;
  param_1[0x8e] = &PTR_LAB_14427cf10;
  param_1[0x8f] = &PTR_LAB_14427cf38;
  param_1[0x90] = &PTR_LAB_14427cf48;
  param_1[0x92] = &PTR_LAB_14427cf88;
  param_1[0x93] = &PTR_LAB_14427cfa0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_140590080(param_1 + 0xc2);
  *(undefined4 *)(param_1 + 0xce) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x67c) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"DefaultSceneRoot",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"ElevatorMeshComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xaa] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"Floor1Mesh",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xab] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"Floor2Mesh",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xac] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"NavMeshSection",1);
  uVar3 = *puVar1;
  uVar2 = AArchVisCharacter::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xae] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"ElevatorMovement",1);
  uVar3 = *puVar1;
  uVar2 = UMaterialInstanceDynamic::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xad] = uVar3;
  *(undefined2 *)((longlong)param_1 + 0x602) = 0;
  *(undefined1 *)((longlong)param_1 + 0x604) = 0;
  *(undefined1 *)((longlong)param_1 + 0x674) = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"ElevatorBounds",1);
  uVar3 = *puVar1;
  uVar2 = FUN_14290f330();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb1] = plVar4;
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_1468688a8);
  local_res8 = 0;
  FUN_142399e30(param_1[0xb1],param_1[0xaa],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,"ElevatorMovementBounds",1);
  uVar3 = *puVar1;
  uVar2 = FUN_14290f330();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb2] = plVar4;
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_1468688b0);
  local_res8 = 0;
  FUN_142399e30(param_1[0xb2],param_1[0x2d],0);
  return param_1;
}



// FUNCTION 140aeb330 FUN_140aeb330 body=168 status=ok
// SIG undefined FUN_140aeb330(void)

undefined8 * FUN_140aeb330(undefined8 *param_1)

{
  FUN_140ac4d50();
  *param_1 = &PTR__scalar_deleting_destructor__14427df58;
  param_1[0x8b] = &PTR_LAB_14427e710;
  param_1[0x8c] = &PTR_LAB_14427e770;
  param_1[0x8d] = &PTR_LAB_14427e798;
  param_1[0x8e] = &PTR_LAB_14427e7b0;
  param_1[0x8f] = &PTR_LAB_14427e7d8;
  param_1[0x90] = &PTR_LAB_14427e7e8;
  param_1[0x92] = &PTR_LAB_14427e828;
  param_1[0x93] = &PTR_LAB_14427e840;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  return param_1;
}



// FUNCTION 140aeb3e0 FUN_140aeb3e0 body=671 status=ok
// SIG undefined FUN_140aeb3e0(void)

undefined8 * FUN_140aeb3e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_20;
  
  FUN_140aeb790();
  *param_1 = &PTR__scalar_deleting_destructor__14427e910;
  param_1[0x8b] = &PTR_LAB_14427f0a0;
  param_1[0x8c] = &PTR_LAB_14427f100;
  param_1[0x8d] = &PTR_LAB_14427f128;
  param_1[0x8e] = &PTR_LAB_14427f140;
  param_1[0x8f] = &PTR_LAB_14427f168;
  param_1[0x90] = &PTR_LAB_14427f178;
  param_1[0x92] = &PTR_LAB_14427f1b8;
  param_1[0x93] = &PTR_LAB_14427f1d0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"UCapsuleComponent",1);
  uVar4 = *puVar1;
  uVar2 = FUN_142912e90();
  lVar3 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xaa] = lVar3;
  *(undefined1 *)(lVar3 + 0x24e) = 0;
  FUN_1423974f0(param_1[0xaa],1);
  (**(code **)(*(longlong *)param_1[0xaa] + 0x640))((longlong *)param_1[0xaa],DAT_1468688b8);
  puVar1 = (undefined8 *)FName::FName(&local_res8,"ParticleSystem",1);
  uVar4 = *puVar1;
  uVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar4 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xab] = uVar4;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"ParticleSystemAnticipation",1);
  uVar4 = *puVar1;
  uVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar4 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0x2d] = param_1[0xaa];
  param_1[0xac] = uVar4;
  if (param_1[0xab] != 0) {
    local_res8 = 0;
    FUN_142382f60(param_1[0xab],param_1[0xaa],&DAT_146af29ec,0);
    local_38 = 0x42b40000;
    local_20 = 0;
    local_30 = 0;
    FUN_142398470(param_1[0xab],&local_38,0,0,0);
  }
  if (param_1[0xac] != 0) {
    local_res8 = 0;
    FUN_142382f60(param_1[0xac],param_1[0x2d],&DAT_146af29ec,0);
    local_38 = 0x42b40000;
    local_20 = 0;
    local_30 = 0;
    FUN_142398470(param_1[0xac],&local_38,0,0,0);
  }
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  return param_1;
}



// FUNCTION 140aeb680 FUN_140aeb680 body=258 status=ok
// SIG undefined FUN_140aeb680(void)

undefined8 * FUN_140aeb680(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14427f6c8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0x3f800000;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  puVar1 = (undefined8 *)FName::FName(local_res8,"HyperHoop_SplineFollowerComponent",1);
  uVar3 = *puVar1;
  uVar2 = UTextBlock::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8f] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,"HyperHoop_PawnAttachSlotComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141448000();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x90] = uVar3;
  return param_1;
}



// FUNCTION 140aeb790 FUN_140aeb790 body=340 status=ok
// SIG undefined FUN_140aeb790(void)

undefined8 * FUN_140aeb790(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_14221fbd0();
  plVar1 = param_1 + 0x94;
  *param_1 = &PTR__scalar_deleting_destructor__144278ae8;
  param_1[0x8b] = &PTR_LAB_144279258;
  param_1[0x8c] = &PTR_LAB_1442792b8;
  param_1[0x8d] = &PTR_LAB_1442792e0;
  param_1[0x8e] = &PTR_LAB_1442792f8;
  param_1[0x8f] = &PTR_LAB_144279320;
  param_1[0x90] = &PTR_LAB_144279330;
  param_1[0x92] = &PTR_LAB_144279370;
  param_1[0x93] = &PTR_LAB_144279388;
  *plVar1 = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x9f) = 0x306;
  *(undefined1 *)((longlong)param_1 + 0x4fa) = 3;
  *(undefined2 *)((longlong)param_1 + 0x4fc) = 0x101;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa9) = 1;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x96] = param_1;
    param_1[0x95] = &DAT_1468688e0;
    *plVar1 = (longlong)DAT_1468688e0;
    DAT_1468688e0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x4fe) = *(byte *)((longlong)param_1 + 0x4fe) & 0xfe;
  *(undefined2 *)((longlong)param_1 + 0x4fb) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0x4fd) = 1;
  *(undefined1 *)((longlong)param_1 + 0x129) = 2;
  return param_1;
}



// FUNCTION 140aeb8f0 FUN_140aeb8f0 body=191 status=ok
// SIG undefined FUN_140aeb8f0(void)

undefined8 * FUN_140aeb8f0(undefined8 *param_1)

{
  FUN_140aeb790();
  *param_1 = &PTR__scalar_deleting_destructor__14427fdb8;
  param_1[0x8b] = &PTR_LAB_14427f0a0;
  param_1[0x8c] = &PTR_LAB_14427f100;
  param_1[0x8d] = &PTR_LAB_14427f128;
  param_1[0x8e] = &PTR_LAB_14427f140;
  param_1[0x8f] = &PTR_LAB_14427f168;
  param_1[0x90] = &PTR_LAB_14427f178;
  param_1[0x92] = &PTR_LAB_14427f1b8;
  param_1[0x93] = &PTR_LAB_14427f1d0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb0] = 0x43fa0000;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57c) = 1;
  return param_1;
}



// FUNCTION 140aeb9b0 FUN_140aeb9b0 body=530 status=ok
// SIG undefined FUN_140aeb9b0(void)

undefined8 * FUN_140aeb9b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_140aeb790();
  *(undefined2 *)((longlong)param_1 + 0x561) = 1;
  *param_1 = &PTR_FUN_14427d5b0;
  param_1[0x8b] = &PTR_LAB_14427dd38;
  param_1[0x8c] = &PTR_LAB_14427dd98;
  param_1[0x8d] = &PTR_LAB_14427ddc0;
  param_1[0x8e] = &PTR_LAB_14427ddd8;
  param_1[0x8f] = &PTR_LAB_14427de00;
  param_1[0x90] = &PTR_LAB_14427de10;
  param_1[0x92] = &PTR_LAB_14427de50;
  param_1[0x93] = &PTR_LAB_14427de68;
  param_1[0xaa] = &PTR_LAB_14427df38;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0x44160000;
  *(undefined1 *)(param_1 + 0xad) = 1;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbf] = 0;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  FUN_140aecb80(param_1 + 0xc6);
  FUN_140aecb80(param_1 + 0xd0);
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xe1] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xee] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(byte *)((longlong)param_1 + 0x56c) = *(byte *)((longlong)param_1 + 0x56c) | 4;
  *(undefined1 *)(param_1 + 0xed) = 0xff;
  uVar2 = DAT_146868910;
  uVar1 = FUN_142e80f20();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xde] = uVar2;
  return param_1;
}



// FUNCTION 140aebbd0 FUN_140aebbd0 body=154 status=ok
// SIG undefined FUN_140aebbd0(void)

undefined8 * FUN_140aebbd0(undefined8 *param_1)

{
  FUN_140aeb790();
  *param_1 = &PTR__scalar_deleting_destructor__144280e98;
  param_1[0x8b] = &PTR_LAB_144281608;
  param_1[0x8c] = &PTR_LAB_144281668;
  param_1[0x8d] = &PTR_LAB_144281690;
  param_1[0x8e] = &PTR_LAB_1442816a8;
  param_1[0x8f] = &PTR_LAB_1442816d0;
  param_1[0x90] = &PTR_LAB_1442816e0;
  param_1[0x92] = &PTR_LAB_144281720;
  param_1[0x93] = &PTR_LAB_144281738;
  param_1[0xaa] = 0;
  return param_1;
}



// FUNCTION 140aebc70 FUN_140aebc70 body=308 status=ok
// SIG undefined FUN_140aebc70(void)

undefined8 * FUN_140aebc70(undefined8 *param_1)

{
  FUN_140aeb790();
  *param_1 = &PTR_FUN_144281808;
  param_1[0x8b] = &PTR_LAB_144281f78;
  param_1[0x8c] = &PTR_LAB_144281fd8;
  param_1[0x8d] = &PTR_LAB_144282000;
  param_1[0x8e] = &PTR_LAB_144282018;
  param_1[0x8f] = &PTR_LAB_144282040;
  param_1[0x90] = &PTR_LAB_144282050;
  param_1[0x92] = &PTR_LAB_144282090;
  param_1[0x93] = &PTR_LAB_1442820a8;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xab] = &DAT_1441d2800;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 1;
  return param_1;
}



// FUNCTION 140aebdb0 FUN_140aebdb0 body=33 status=ok
// SIG undefined FUN_140aebdb0(void)

undefined8 * FUN_140aebdb0(undefined8 *param_1)

{
  FUN_140aebde0();
  *param_1 = &PTR_FUN_144286f50;
  return param_1;
}



// FUNCTION 140aebde0 FUN_140aebde0 body=180 status=ok
// SIG undefined FUN_140aebde0(void)

undefined8 * FUN_140aebde0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_140b158e0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb;
  *param_1 = &PTR_FUN_144286f50;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ItemMesh",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a232e0();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x94] = plVar4;
  (**(code **)(*plVar4 + 0x638))(plVar4,0);
  *(byte *)(param_1[0x94] + 0x2f0) = *(byte *)(param_1[0x94] + 0x2f0) & 0xf7;
  FUN_1423974f0(param_1[0x94],0);
  param_1[0x2d] = param_1[0x94];
  return param_1;
}



// FUNCTION 140aebea0 FUN_140aebea0 body=90 status=ok
// SIG undefined FUN_140aebea0(void)

undefined8 * FUN_140aebea0(undefined8 *param_1)

{
  FUN_140aebde0();
  *param_1 = &PTR__scalar_deleting_destructor__144287658;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  return param_1;
}



// FUNCTION 140aebf00 FUN_140aebf00 body=33 status=ok
// SIG undefined FUN_140aebf00(void)

undefined8 * FUN_140aebf00(undefined8 *param_1)

{
  FUN_140aebde0();
  *param_1 = &PTR__scalar_deleting_destructor__144287d60;
  return param_1;
}



// FUNCTION 140aebf30 FUN_140aebf30 body=201 status=ok
// SIG undefined FUN_140aebf30(void)

undefined8 * FUN_140aebf30(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_140a4e400();
  *(undefined1 *)(param_1 + 0xd6) = 1;
  *param_1 = &PTR_FUN_144207040;
  param_1[0x8b] = &PTR_LAB_1442077f0;
  param_1[0x8c] = &PTR_LAB_144207850;
  param_1[0x8d] = &PTR_LAB_144207878;
  param_1[0x8e] = &PTR_LAB_144207890;
  param_1[0x8f] = &PTR_LAB_1442078b8;
  param_1[0x90] = &PTR_LAB_1442078c8;
  param_1[0x92] = &PTR_LAB_144207908;
  param_1[0x93] = &PTR_LAB_144207920;
  param_1[0xcc] = &PTR_LAB_1442079f0;
  FName::FName(local_res8,L"PlayerStorage",1);
  param_1[0xaf] = local_res8[0];
  return param_1;
}



// FUNCTION 140aec000 FUN_140aec000 body=58 status=ok
// SIG undefined FUN_140aec000(void)

undefined8 * FUN_140aec000(undefined8 *param_1)

{
  FUN_140ac4f70();
  *param_1 = &PTR_FUN_144282178;
  param_1[0x8b] = &PTR_LAB_1442828e0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  return param_1;
}



// FUNCTION 140aec040 FUN_140aec040 body=145 status=ok
// SIG undefined FUN_140aec040(void)

undefined8 * FUN_140aec040(undefined8 *param_1)

{
  FUN_140ac4d50();
  *param_1 = &PTR__scalar_deleting_destructor__14425f608;
  param_1[0x8b] = &PTR_LAB_14425fdb0;
  param_1[0x8c] = &PTR_LAB_14425fe10;
  param_1[0x8d] = &PTR_LAB_14425fe38;
  param_1[0x8e] = &PTR_LAB_14425fe50;
  param_1[0x8f] = &PTR_LAB_14425fe78;
  param_1[0x90] = &PTR_LAB_14425fe88;
  param_1[0x92] = &PTR_LAB_14425fec8;
  param_1[0x93] = &PTR_LAB_14425fee0;
  return param_1;
}



// FUNCTION 140aec0e0 FUN_140aec0e0 body=194 status=ok
// SIG undefined FUN_140aec0e0(void)

undefined8 * FUN_140aec0e0(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_140a4e400();
  *param_1 = &PTR_FUN_144282908;
  param_1[0x8b] = &PTR_LAB_1442077f0;
  param_1[0x8c] = &PTR_LAB_144207850;
  param_1[0x8d] = &PTR_LAB_144207878;
  param_1[0x8e] = &PTR_LAB_144207890;
  param_1[0x8f] = &PTR_LAB_1442078b8;
  param_1[0x90] = &PTR_LAB_1442078c8;
  param_1[0x92] = &PTR_LAB_144207908;
  param_1[0x93] = &PTR_LAB_144207920;
  param_1[0xcc] = &PTR_LAB_1442079f0;
  FName::FName(local_res8,L"SDUCase",1);
  param_1[0xab] = local_res8[0];
  return param_1;
}



// FUNCTION 140aec1b0 FUN_140aec1b0 body=254 status=ok
// SIG undefined FUN_140aec1b0(void)

undefined8 * FUN_140aec1b0(undefined8 *param_1)

{
  FUN_140ac4f70();
  *param_1 = &PTR_FUN_1442830b8;
  param_1[0x8b] = &PTR_LAB_144283820;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 2;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 2;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 2;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0x43960000;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xae) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  param_1[0xa9] = 0;
  param_1[0xad] = 0;
  return param_1;
}



// FUNCTION 140aec2b0 FUN_140aec2b0 body=219 status=ok
// SIG undefined FUN_140aec2b0(void)

undefined8 * FUN_140aec2b0(undefined8 *param_1)

{
  FUN_140aeb9b0();
  *param_1 = &PTR_FUN_144283848;
  param_1[0x8b] = &PTR_LAB_144283fd8;
  param_1[0x8c] = &PTR_LAB_144284038;
  param_1[0x8d] = &PTR_LAB_144284060;
  param_1[0x8e] = &PTR_LAB_144284078;
  param_1[0x8f] = &PTR_LAB_1442840a0;
  param_1[0x90] = &PTR_LAB_1442840b0;
  param_1[0x92] = &PTR_LAB_1442840f0;
  param_1[0x93] = &PTR_LAB_144284108;
  param_1[0xaa] = &PTR_LAB_1442841d8;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0x104] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0x41c80000;
  return param_1;
}



// FUNCTION 140aec390 FUN_140aec390 body=213 status=ok
// SIG undefined FUN_140aec390(void)

undefined8 * FUN_140aec390(undefined8 *param_1)

{
  FUN_140aeb790();
  *param_1 = &PTR__scalar_deleting_destructor__144262088;
  param_1[0x8b] = &PTR_LAB_1442627f8;
  param_1[0x8c] = &PTR_LAB_144262858;
  param_1[0x8d] = &PTR_LAB_144262880;
  param_1[0x8e] = &PTR_LAB_144262898;
  param_1[0x8f] = &PTR_LAB_1442628c0;
  param_1[0x90] = &PTR_LAB_1442628d0;
  param_1[0x92] = &PTR_LAB_144262910;
  param_1[0x93] = &PTR_LAB_144262928;
  param_1[0xaa] = &PTR_LAB_1442629f8;
  param_1[0xab] = 0;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0xffffffff;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(byte *)((longlong)param_1 + 0x4fe) = *(byte *)((longlong)param_1 + 0x4fe) | 0x20;
  *(undefined1 *)(param_1 + 0xad) = 1;
  return param_1;
}



// FUNCTION 140aec470 FUN_140aec470 body=208 status=ok
// SIG undefined FUN_140aec470(void)

undefined8 * FUN_140aec470(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_140a4e400();
  *param_1 = &PTR_FUN_1442841f8;
  param_1[0x8b] = &PTR_LAB_1442849a8;
  param_1[0x8c] = &PTR_LAB_144284a08;
  param_1[0x8d] = &PTR_LAB_144284a30;
  param_1[0x8e] = &PTR_LAB_144284a48;
  param_1[0x8f] = &PTR_LAB_144284a70;
  param_1[0x90] = &PTR_LAB_144284a80;
  param_1[0x92] = &PTR_LAB_144284ac0;
  param_1[0x93] = &PTR_LAB_144284ad8;
  param_1[0xcc] = &PTR_LAB_144284ba8;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  FName::FName(local_res8,L"TrophyCase",1);
  param_1[0xab] = local_res8[0];
  return param_1;
}



// FUNCTION 140aec540 FUN_140aec540 body=491 status=ok
// SIG undefined FUN_140aec540(void)

undefined8 * FUN_140aec540(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_140ac4f70();
  *param_1 = &PTR_FUN_1442855e0;
  param_1[0x8b] = &PTR_LAB_144285d48;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 2;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 2;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 2;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 2;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0x43960000;
  *(undefined4 *)(param_1 + 0xba) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0x3f800000;
  FText::FText(param_1 + 0xbb);
  FText::FText(param_1 + 0xbe);
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0x40a00000;
  iVar2 = *(int *)(param_1 + 0xc2);
  *(int *)(param_1 + 0xc2) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x614) < iVar2 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0xc1,iVar2);
  }
  lVar1 = param_1[0xc1] + (longlong)iVar2 * 0x48;
  FText::FText(lVar1);
  FText::FText(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 1;
  TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(lVar1 + 0x38,0);
  lVar1 = *(longlong *)(lVar1 + 0x38);
  FText::FText(lVar1);
  FText::FText(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 140aec730 FUN_140aec730 body=285 status=ok
// SIG undefined FUN_140aec730(void)

undefined8 * FUN_140aec730(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_140aeb790();
  *param_1 = &PTR__scalar_deleting_destructor__144285d70;
  param_1[0x8b] = &PTR_LAB_1442864e0;
  param_1[0x8c] = &PTR_LAB_144286540;
  param_1[0x8d] = &PTR_LAB_144286568;
  param_1[0x8e] = &PTR_LAB_144286580;
  param_1[0x8f] = &PTR_LAB_1442865a8;
  param_1[0x90] = &PTR_LAB_1442865b8;
  param_1[0x92] = &PTR_LAB_1442865f8;
  param_1[0x93] = &PTR_LAB_144286610;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  FName::FName(local_res8,L"CharacterMesh",1);
  param_1[0xab] = local_res8[0];
  FName::FName(local_res8,L"PosterMesh",1);
  param_1[0xac] = local_res8[0];
  FName::FName(local_res8,L"TouchBox",1);
  param_1[0xad] = local_res8[0];
  return param_1;
}



// FUNCTION 140aec850 FUN_140aec850 body=256 status=ok
// SIG undefined FUN_140aec850(void)

undefined1 * FUN_140aec850(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x20) =
       *(uint *)(param_1 + 0x20) ^ (*(uint *)(param_1 + 0x20) ^ *(uint *)(param_2 + 0x20)) & 1;
  uVar4 = (*(uint *)(param_1 + 0x20) ^ *(uint *)(param_2 + 0x20)) & 2 ^ *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar4;
  uVar4 = (uVar4 ^ *(uint *)(param_2 + 0x20)) & 4 ^ uVar4;
  *(uint *)(param_1 + 0x20) = uVar4;
  *(uint *)(param_1 + 0x20) = (uVar4 ^ *(uint *)(param_2 + 0x20)) & 8 ^ uVar4;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((((longlong *)(param_2 + 0x28) != plVar1) && (*(int *)(param_2 + 0x30) != 0)) &&
     (plVar3 = *(longlong **)(param_2 + 0x28), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
  }
  *(longlong *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (((param_2 + 0x38 != param_1 + 0x38) && (*(int *)(param_2 + 0x40) != 0)) &&
     (plVar1 = *(longlong **)(param_2 + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  return param_1;
}



// FUNCTION 140aec950 FUN_140aec950 body=380 status=ok
// SIG undefined FUN_140aec950(void)

undefined8 * FUN_140aec950(undefined8 *param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_1 = &PTR_FUN_14422f7d8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_142d979c0(param_1 + 0x15);
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  FWeakObjectPtr::operator=(param_1 + 0x23,0);
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_142d979a0(&local_28,0);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x15) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xac) = uStack_24;
  *(undefined4 *)(param_1 + 0x16) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_1c;
  *(undefined4 *)(param_1 + 0x17) = local_18;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uStack_14;
  *(undefined4 *)(param_1 + 0x18) = uStack_10;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uStack_c;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  param_1[0x22] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x23,0);
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 140aecad0 FUN_140aecad0 body=164 status=ok
// SIG undefined FUN_140aecad0(void)

undefined1 * FUN_140aecad0(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  _Src = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(param_1 + 0x38,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x38),_Src,(longlong)iVar1 * 0x38);
  }
  return param_1;
}



// FUNCTION 140aecb80 FUN_140aecb80 body=135 status=ok
// SIG undefined FUN_140aecb80(void)

undefined8 * FUN_140aecb80(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_144278ac0;
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
  return param_1;
}



// FUNCTION 140aecc10 FUN_140aecc10 body=41 status=ok
// SIG undefined FUN_140aecc10(void)

undefined8 * FUN_140aecc10(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14407ad58;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 140aecc40 CAkVPLMixBusNode body=47 status=ok
// SIG undefined CAkVPLMixBusNode(void)

undefined8 * CAkVPLMixBusNode::CAkVPLMixBusNode(undefined8 *param_1)

{
  FUN_142fdec90();
  *param_1 = &PTR__scalar_deleting_destructor__144288700;
  param_1[0x13] = &PTR_LAB_144288988;
  return param_1;
}



// FUNCTION 140aecc70 FUN_140aecc70 body=44 status=ok
// SIG undefined FUN_140aecc70(void)

undefined8 * FUN_140aecc70(undefined8 *param_1)

{
  FUN_142fdef90();
  *param_1 = &PTR_FUN_144288468;
  param_1[6] = &PTR_LAB_1442886e8;
  return param_1;
}



// FUNCTION 140aecca0 FUN_140aecca0 body=112 status=ok
// SIG undefined FUN_140aecca0(void)

undefined8 * FUN_140aecca0(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_1442889a0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x42c80000;
  return param_1;
}



// FUNCTION 140aecd10 FUN_140aecd10 body=150 status=ok
// SIG undefined FUN_140aecd10(void)

undefined8 * FUN_140aecd10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6050(param_1,uVar1);
  *param_1 = &PTR_FUN_14427d070;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0xc);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x11) = 0x447a0000;
  return param_1;
}



// FUNCTION 140aecdb0 FUN_140aecdb0 body=65 status=ok
// SIG undefined FUN_140aecdb0(void)

undefined8 * FUN_140aecdb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6050();
  *param_1 = &PTR_FUN_14427d310;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0xd);
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x459c4000;
  return param_1;
}



// FUNCTION 140aece00 FUN_140aece00 body=257 status=ok
// SIG undefined FUN_140aece00(void)

undefined8 * FUN_140aece00(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  longlong local_18;
  undefined8 local_10;
  
  uVar2 = FUN_14178c940();
  FUN_141781840(param_1,uVar2);
  *param_1 = &PTR_FUN_144289188;
  plVar1 = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0;
  *plVar1 = 0;
  param_1[8] = 0;
  local_res8 = *(undefined8 *)(param_1[2] + 0x18);
  FName::ToString(&local_res8,&local_18);
  if (plVar1 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_18;
    *(undefined4 *)(param_1 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x44) = local_10._4_4_;
  }
  local_18 = 0;
  local_10 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"GrenadeBehavior_Payload",0x30);
  FString::RemoveFromStart(plVar1,&local_18,1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140aecf10 FUN_140aecf10 body=413 status=ok
// SIG undefined FUN_140aecf10(void)

undefined8 * FUN_140aecf10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aed0b0();
  *param_1 = &PTR_FUN_144289a10;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0xc) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x42480000;
  *(undefined4 *)(param_1 + 0xd) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0xe) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x41200000;
  FUN_142c8c260(&local_48,0x3e19999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3e99999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f000000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140aed0b0 FUN_140aed0b0 body=267 status=ok
// SIG undefined FUN_140aed0b0(void)

undefined8 * FUN_140aed0b0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  longlong local_18;
  undefined8 local_10;
  
  uVar2 = FUN_14178c940();
  FUN_141781840(param_1,uVar2);
  *param_1 = &PTR_FUN_144289188;
  plVar1 = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0;
  *plVar1 = 0;
  param_1[8] = 0;
  local_res8 = *(undefined8 *)(param_1[2] + 0x18);
  FName::ToString(&local_res8,&local_18);
  if (plVar1 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_18;
    *(undefined4 *)(param_1 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x44) = local_10._4_4_;
  }
  local_18 = 0;
  local_10 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"GrenadeBehavior_Payload",0x30);
  FString::RemoveFromStart(plVar1,&local_18,1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144289460;
  return param_1;
}



// FUNCTION 140aed1c0 FUN_140aed1c0 body=345 status=ok
// SIG undefined FUN_140aed1c0(void)

undefined8 * FUN_140aed1c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aed0b0();
  *param_1 = &PTR__scalar_deleting_destructor__144289ce8;
  *(undefined4 *)(param_1 + 10) = 0x442f0000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x43fa0000;
  FUN_142c8c260(&local_48,0x40400000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40a00000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40e00000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140aed320 FUN_140aed320 body=352 status=ok
// SIG undefined FUN_140aed320(void)

undefined8 * FUN_140aed320(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aed0b0();
  *param_1 = &PTR__scalar_deleting_destructor__144289738;
  *(undefined4 *)(param_1 + 9) = 0x3e8a3d71;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3fc00000;
  *(undefined4 *)(param_1 + 10) = 0x40a00000;
  FUN_142c8c260(&local_48,0x3f800000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40000000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40400000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140aed480 FUN_140aed480 body=331 status=ok
// SIG undefined FUN_140aed480(void)

undefined8 * FUN_140aed480(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aed0b0();
  *param_1 = &PTR_FUN_144289fc0;
  FUN_142c8c260(&local_48,0x3f933333);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3fa66666);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3fb9999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140aed5d0 FUN_140aed5d0 body=145 status=ok
// SIG undefined FUN_140aed5d0(void)

undefined8 * FUN_140aed5d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FUN_140aed0b0();
  *param_1 = &PTR_FUN_14428a298;
  FUN_142c8c260(&local_48,0x40000000);
  iVar2 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar2);
  }
  lVar3 = param_1[5];
  lVar4 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar3);
  *puVar1 = local_28;
  puVar1[1] = uStack_20;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  return param_1;
}



// FUNCTION 140aed670 FUN_140aed670 body=349 status=ok
// SIG undefined FUN_140aed670(void)

undefined8 * FUN_140aed670(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aed0b0();
  *param_1 = &PTR__scalar_deleting_destructor__14428a570;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_142c8c260(&local_48,0x3e99999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f19999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f800000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140aed7d0 FUN_140aed7d0 body=331 status=ok
// SIG undefined FUN_140aed7d0(void)

undefined8 * FUN_140aed7d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aed0b0();
  *param_1 = &PTR_FUN_14428a848;
  FUN_142c8c260(&local_48,0x3fc00000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40000000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40400000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140aed920 FUN_140aed920 body=331 status=ok
// SIG undefined FUN_140aed920(void)

undefined8 * FUN_140aed920(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aed0b0();
  *param_1 = &PTR_FUN_14428ab20;
  FUN_142c8c260(&local_48,0x3e19999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3e99999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f000000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140aeda70 UDialogueSoundWaveProxy body=60 status=ok
// SIG undefined UDialogueSoundWaveProxy(void)

undefined8 * UDialogueSoundWaveProxy::UDialogueSoundWaveProxy(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_14427f2a0;
  param_1[5] = &PTR_LAB_14427f698;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return param_1;
}



// FUNCTION 140aedab0 FUN_140aedab0 body=82 status=ok
// SIG undefined FUN_140aedab0(void)

undefined8 * FUN_140aedab0(undefined8 *param_1)

{
  FUN_14237eb90();
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__144280528;
  param_1[5] = &PTR_LAB_144280e10;
  param_1[0x5a] = &PTR_LAB_144280e40;
  FUN_1423974f0(param_1,0);
  return param_1;
}



// FUNCTION 140aedb10 FUN_140aedb10 body=148 status=ok
// SIG undefined FUN_140aedb10(void)

undefined8 * FUN_140aedb10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140b16fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_1442869b0;
  param_1[5] = &PTR_LAB_144286ef0;
  param_1[0x2f] = &PTR_LAB_144286f20;
  param_1[0x71] = &PTR_LAB_144286f38;
  FName::FName(param_1 + 0x72,L"Primary",1);
  *(undefined4 *)(param_1 + 0x73) = 0x42c80000;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  return param_1;
}



// FUNCTION 140aedbb0 FUN_140aedbb0 body=92 status=ok
// SIG undefined FUN_140aedbb0(void)

undefined8 * FUN_140aedbb0(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144288c80;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  UGameUserSettings::SetDynamicResolutionEnabled(param_1,4);
  return param_1;
}


