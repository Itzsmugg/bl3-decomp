// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141260960 FUN_141260960 body=307 status=ok
// SIG undefined FUN_141260960(void)

void FUN_141260960(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar2 < DAT_146877a30) && (_Init_thread_header(&DAT_146877a30), DAT_146877a30 == -1)) {
    FName::FName(&DAT_146877a28,L"HideMag",1);
    _Init_thread_footer(&DAT_146877a30);
  }
  if ((*piVar2 < DAT_146877a40) && (_Init_thread_header(&DAT_146877a40), DAT_146877a40 == -1)) {
    FName::FName(&DAT_146877a38,L"ShowMag",1);
    _Init_thread_footer(&DAT_146877a40);
  }
  if (*param_2 == DAT_146877a28) {
    lVar1 = FUN_1409d7ca0(param_1);
    if (lVar1 == 0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    if (*param_2 != DAT_146877a38) {
      return;
    }
    lVar1 = FUN_1409d7ca0(param_1);
    if (lVar1 == 0) {
      return;
    }
    uVar3 = 1;
  }
  local_res10[0] = 0;
  FUN_14308aea0(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),uVar3,local_res10);
  return;
}



// FUNCTION 141260aa0 FUN_141260aa0 body=362 status=ok
// SIG undefined FUN_141260aa0(void)

void FUN_141260aa0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60 [8];
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_res18,param_2);
  lVar2 = local_40;
  local_58 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x50,0);
  local_50 = 5;
  local_58 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    local_68 = (undefined4)param_4;
    uStack_64 = (undefined4)((ulonglong)param_4 >> 0x20);
    *plVar1 = (longlong)&PTR_GetPoolName_144740558;
    *(undefined4 *)(plVar1 + 1) = local_res18;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_res1c;
    *(undefined4 *)(plVar1 + 3) = local_68;
    *(undefined4 *)((longlong)plVar1 + 0x24) = param_5;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_64;
    plVar1[2] = param_3;
    *(undefined4 *)(plVar1 + 4) = 0;
    *(undefined4 *)(plVar1 + 5) = 0;
    *(undefined4 *)(plVar1 + 6) = local_48;
    *(undefined4 *)((longlong)plVar1 + 0x34) = local_44;
    plVar1[7] = lVar2;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[9] = lVar2;
  }
  uVar3 = FUN_14164ab60();
  FUN_14158f860(uVar3,local_60,&local_58,L"UVehicleEffectsComponent_Lambda",0);
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 141260c10 FUN_141260c10 body=346 status=ok
// SIG undefined FUN_141260c10(void)

void FUN_141260c10(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50;
  int local_48;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_50 = (longlong *)0x0;
  uVar1 = *param_6;
  uVar2 = param_6[1];
  lVar4 = *(longlong *)(param_6 + 2);
  plVar3 = (longlong *)FMemory::Realloc(0,0x50,0);
  local_48 = 5;
  local_50 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    local_58 = (undefined4)param_4;
    uStack_54 = (undefined4)((ulonglong)param_4 >> 0x20);
    *plVar3 = (longlong)&PTR_GetPoolName_144740558;
    *(undefined4 *)(plVar3 + 1) = local_res18;
    *(undefined4 *)((longlong)plVar3 + 0xc) = local_res1c;
    *(undefined4 *)(plVar3 + 3) = local_58;
    *(undefined4 *)((longlong)plVar3 + 0x24) = param_5;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_54;
    plVar3[2] = param_3;
    *(undefined4 *)(plVar3 + 4) = 0;
    *(undefined4 *)(plVar3 + 5) = 0;
    *(undefined4 *)(plVar3 + 6) = uVar1;
    *(undefined4 *)((longlong)plVar3 + 0x34) = uVar2;
    plVar3[7] = lVar4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[9] = lVar4;
  }
  uVar5 = FUN_14164ab60();
  FUN_14158f860(uVar5,&param_6,&local_50,L"UVehicleEffectsComponent_Lambda",0);
  if (local_48 != 0) {
    if (local_50 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_50 + 0x28))(local_50,0);
    if (local_50 != (longlong *)0x0) {
      local_50 = (longlong *)FMemory::Realloc(local_50,0,0);
    }
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}



// FUNCTION 141260d70 FUN_141260d70 body=1861 status=ok
// SIG undefined FUN_141260d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141260d70(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  longlong *local_360;
  undefined8 *local_358;
  longlong local_350;
  longlong local_348;
  undefined8 *local_340;
  undefined4 local_338;
  undefined4 local_330;
  undefined4 local_328;
  undefined4 local_320;
  byte local_318;
  longlong local_310;
  undefined8 local_308;
  undefined1 local_300;
  undefined4 local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [32];
  undefined1 local_268 [16];
  byte local_258;
  undefined1 local_254 [8];
  undefined1 local_24c [24];
  undefined1 local_234 [8];
  undefined1 local_22c [12];
  longlong local_220;
  int local_218;
  int local_214;
  undefined1 local_208 [168];
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_f0;
  undefined1 local_ec;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [8];
  longlong local_d0;
  int local_c8;
  int local_c4;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  if (((*(uint *)((longlong)param_1 + 0xe4) & 0x4000) != 0) &&
     (lVar8 = param_1[0x15], *(longlong *)(lVar8 + 0x220) != 0)) {
    lVar2 = UCelLightData::GetPrivateStaticClass();
    lVar8 = *(longlong *)(lVar8 + 0x220);
    for (lVar3 = lVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) {
        if (lVar8 != 0) {
          FUN_142d0a300(local_268);
          plVar7 = (longlong *)param_1[0x32];
          uVar10 = 0;
          local_160 = (undefined4)param_1[0x16];
          local_15c = 1;
          if (plVar7 == (longlong *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = plVar7[0x1f];
            if (lVar8 == 0) {
              (**(code **)(*plVar7 + 0x368))(plVar7);
              lVar8 = plVar7[0x1f];
            }
          }
          FWeakObjectPtr::operator=(local_24c,lVar8);
          plVar7 = (longlong *)param_1[0x33];
          if (plVar7 == (longlong *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = plVar7[0x1f];
            if (lVar8 == 0) {
              (**(code **)(*plVar7 + 0x368))(plVar7);
              lVar8 = plVar7[0x1f];
            }
          }
          FWeakObjectPtr::operator=(local_254,lVar8);
          if (param_2 != &local_158) {
            local_158 = *param_2;
            local_150 = *(undefined4 *)(param_2 + 1);
            local_14c = 1;
          }
          puVar4 = (undefined8 *)FVector::Rotation(param_1 + 0x5e,&local_2d8);
          if (puVar4 != &local_148) {
            local_148 = *puVar4;
            local_140 = *(undefined4 *)(puVar4 + 1);
            local_13c = 1;
          }
          if ((undefined4 *)((longlong)param_1 + 0xb4) != &local_108) {
            local_108 = *(undefined4 *)((longlong)param_1 + 0xb4);
            local_104 = 1;
          }
          local_258 = local_258 & 0xf7;
          if (param_1 + 0x19 != (longlong *)&local_f0) {
            local_f0 = (undefined4)param_1[0x19];
            local_ec = 1;
          }
          FUN_140729f20(local_208,param_4);
          FWeakObjectPtr::operator=(local_234,*(undefined8 *)(param_1[0x15] + 0xe0));
          local_e8 = param_1[0x1f];
          local_e0 = (undefined4)param_1[0x20];
          local_dc = *(undefined4 *)((longlong)param_1 + 0x104);
          local_258 = ((char)(*(uint *)((longlong)param_1 + 0xe4) >> 0x12) << 5 ^ local_258) & 0x20
                      ^ local_258 | 0x10;
          FWeakObjectPtr::operator=(local_d8,param_1[0x6f]);
          lVar8 = param_1[0x15];
          puVar4 = *(undefined8 **)(lVar8 + 0x270);
          uVar9 = (longlong)*(int *)(lVar8 + 0x278) & 0x1fffffffffffffff;
          if (puVar4 + *(int *)(lVar8 + 0x278) < puVar4) {
            uVar9 = uVar10;
          }
          uVar11 = uVar10;
          if (uVar9 != 0) {
            do {
              FWeakObjectPtr::operator=(&local_2d8,*puVar4);
              iVar1 = local_c8;
              lVar8 = (longlong)local_c8;
              local_c8 = local_c8 + 1;
              if (local_c4 < local_c8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d0,iVar1);
              }
              puVar4 = puVar4 + 1;
              uVar11 = uVar11 + 1;
              *(undefined4 *)(local_d0 + lVar8 * 8) = (undefined4)local_2d8;
              *(undefined4 *)(local_d0 + 4 + lVar8 * 8) = local_2d8._4_4_;
            } while (uVar11 != uVar9);
            lVar8 = param_1[0x15];
          }
          if ((*(byte *)(lVar8 + 0xd8) & 1) != 0) {
            uVar6 = FUN_14304b710(param_1);
            FWeakObjectPtr::operator=(local_22c,uVar6);
          }
          if ((param_3 != 0) && ((*(byte *)(param_3 + 0x91) & 0x40) != 0)) {
            FWeakObjectPtr::operator=(&local_2d8,param_3);
            iVar1 = local_218;
            lVar8 = (longlong)local_218;
            local_218 = local_218 + 1;
            if (local_214 < local_218) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_220,iVar1);
            }
            *(undefined4 *)(local_220 + lVar8 * 8) = (undefined4)local_2d8;
            *(undefined4 *)(local_220 + 4 + lVar8 * 8) = local_2d8._4_4_;
            lVar8 = FUN_142d39be0(param_3);
            if (lVar8 != 0) {
              FWeakObjectPtr::operator=(&local_2d8,lVar8);
              iVar1 = local_218;
              lVar8 = (longlong)local_218;
              local_218 = local_218 + 1;
              if (local_214 < local_218) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_220,iVar1);
              }
              *(undefined4 *)(local_220 + lVar8 * 8) = (undefined4)local_2d8;
              *(undefined4 *)(local_220 + 4 + lVar8 * 8) = local_2d8._4_4_;
            }
          }
          local_2b8 = *(undefined4 *)((longlong)param_1 + 0x47c);
          local_2c8 = (longlong *)CONCAT44((int)param_1[0x8f],(int)param_1[0x8e]);
          local_2b0 = (undefined4)param_1[0x90];
          local_2b4 = *(undefined4 *)((longlong)param_1 + 0x484);
          local_2c0._0_5_ = (uint5)*(uint *)((longlong)param_1 + 0x474);
          if (param_1[0x91] != 0) {
            uVar10 = *(ulonglong *)(param_1[0x91] + 0x338);
          }
          local_360 = param_1 + 0x1a;
          local_368 = &local_2c8;
          local_358 = (undefined8 *)uVar10;
          FUN_140a86fb0(param_1[0x2d],*(undefined8 *)(param_1[0x15] + 0x220),0,local_268);
          FUN_1409c53c0(local_268);
          return;
        }
        break;
      }
    }
  }
  if (0.0 < *(float *)((longlong)param_1 + 0xb4)) {
    lVar8 = 0;
    local_2c8 = (longlong *)0x0;
    local_2c0._0_4_ = 0;
    local_2c0._4_4_ = 0;
    if ((param_3 != 0) && ((*(byte *)(param_3 + 0x91) & 0x40) != 0)) {
      local_2c0._0_4_ = 1;
      local_2c0._4_4_ = 0;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
      *local_2c8 = param_3;
      lVar3 = FUN_142d39be0(param_3);
      iVar1 = (int)local_2c0;
      if (lVar3 != 0) {
        lVar2 = (longlong)(int)local_2c0;
        local_2c0._0_4_ = (int)local_2c0 + 1;
        if (local_2c0._4_4_ < (int)local_2c0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_2c8,iVar1);
        }
        local_2c8[lVar2] = lVar3;
      }
    }
    lVar3 = lVar8;
    if (param_1[0x28] != 0) {
      lVar3 = *(longlong *)(param_1[0x28] + 0x490);
    }
    lVar2 = lVar8;
    if (param_1[0x91] != 0) {
      lVar2 = *(longlong *)(param_1[0x91] + 0x338);
    }
    puVar4 = (undefined8 *)FUN_142d979a0(local_288,(int)param_1[0x19]);
    local_2a8 = *puVar4;
    uStack_2a0 = puVar4[1];
    local_298 = puVar4[2];
    uStack_290 = puVar4[3];
    local_2f0 = *(undefined4 *)((longlong)param_1 + 0x104);
    local_308 = *(undefined8 *)(param_1[0x15] + 0xe8);
    local_318 = *(byte *)(param_1[0x15] + 0x22c) & 1;
    local_320 = (undefined4)param_1[0x8f];
    local_2f8 = (undefined4)param_1[0x20];
    local_328 = *(undefined4 *)((longlong)param_1 + 0x474);
    local_300 = 0;
    local_310 = param_1[0x6f];
    local_340 = &local_2a8;
    local_330 = (undefined4)param_1[0x8e];
    local_338 = 3;
    local_350 = param_1[0x2d];
    local_358 = &local_2c8;
    local_360 = (longlong *)param_1[0x18];
    local_368 = (undefined8 *)param_1[0x17];
    local_348 = lVar3;
    local_2e8 = lVar2;
    FUN_140a83140(param_1[4],(int)param_1[0x16],param_2,*(undefined4 *)((longlong)param_1 + 0xb4));
    if (*(longlong *)(param_1[0x15] + 0xe0) != 0) {
      local_2d8 = *param_2;
      local_2d0 = *(undefined4 *)(param_2 + 1);
      lVar3 = lVar8;
      if (param_1[0x17] != 0) {
        lVar5 = FUN_142e49950();
        for (lVar2 = param_1[0x17];
            (lVar3 = lVar8, lVar2 != 0 && (lVar3 = param_1[0x17], lVar2 != lVar5));
            lVar2 = *(longlong *)(lVar2 + 0x30)) {
        }
      }
      local_368 = (undefined8 *)param_1[0x2d];
      local_360 = (longlong *)lVar3;
      FUN_142d41800(*(undefined8 *)(param_1[0x15] + 0xe0),*(undefined4 *)((longlong)param_1 + 0xb4),
                    param_4,&local_2d8);
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar7 = (longlong *)FUN_142d5ecc0(uVar6);
      if ((plVar7 != (longlong *)0x0) &&
         (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2a0))(plVar7), plVar7 != (longlong *)0x0)) {
        fVar12 = 1.0;
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          fVar12 = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0xd8);
        }
        (**(code **)(*plVar7 + 0x6e8))
                  (plVar7,param_2,(int)param_1[0x19],fVar12 * *(float *)((longlong)param_1 + 0xb4));
      }
    }
    if (local_2c8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1412614c0 FUN_1412614c0 body=1067 status=ok
// SIG undefined FUN_1412614c0(void)

void FUN_1412614c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  FUN_142fe5100();
  FUN_14126b260(param_1);
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x350))) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x348));
        if (lVar2 != 0) {
          lVar5 = UAESHelper::GetPrivateStaticClass();
          lVar2 = *(longlong *)(lVar2 + 0x10);
          if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_14120f230(*(undefined8 *)(*(longlong *)(param_1 + 0x348) + lVar4),lVar1);
          }
        }
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar8 < *(int *)(param_1 + 0x350));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x350))) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x348) + lVar4);
        if (lVar2 != 0) {
          lVar5 = FUN_1414dd710();
          lVar2 = *(longlong *)(lVar2 + 0x10);
          if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_14120f480(*(undefined8 *)(*(longlong *)(param_1 + 0x348) + lVar4),lVar1);
          }
        }
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar8 < *(int *)(param_1 + 0x350));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x350))) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x348) + lVar4);
        if (lVar2 != 0) {
          lVar5 = FUN_1414e4a40();
          lVar2 = *(longlong *)(lVar2 + 0x10);
          if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_141210260(*(undefined8 *)(*(longlong *)(param_1 + 0x348) + lVar4),lVar1);
          }
        }
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar8 < *(int *)(param_1 + 0x350));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x350))) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x348) + lVar4);
        if (lVar2 != 0) {
          lVar5 = FUN_1414dd3b0();
          lVar2 = *(longlong *)(lVar2 + 0x10);
          if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_14120ffe0(*(undefined8 *)(*(longlong *)(param_1 + 0x348) + lVar4),lVar1);
          }
        }
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar8 < *(int *)(param_1 + 0x350));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar9 = (longlong *)(lVar1 + 0x990);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = 0x41278a80;
        *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
        *(undefined4 *)(plVar6 + 3) = 0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar4;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar8 = *(int *)(lVar1 + 0x998);
        *(int *)(lVar1 + 0x998) = iVar8 + 1;
        if (*(int *)(lVar1 + 0x99c) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar8);
        }
        puVar7 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar9);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 1412618f0 FUN_1412618f0 body=577 status=ok
// SIG undefined FUN_1412618f0(void)

void FUN_1412618f0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar10 = 0;
  if (param_2 != 0) {
    lVar5 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar9 = param_2;
    if (bVar3) goto LAB_141261962;
  }
  uVar9 = uVar10;
LAB_141261962:
  if ((*(longlong *)(param_1 + 0x48) != 0) && (uVar9 != 0)) {
    piVar7 = *(int **)(param_1 + 0x70);
    uVar11 = (longlong)*(int *)(param_1 + 0x78) & 0x3fffffffffffffff;
    if (piVar7 + *(int *)(param_1 + 0x78) < piVar7) {
      uVar11 = uVar10;
    }
    if (uVar11 != 0) {
      do {
        FUN_141291140(uVar9,*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x30) +
                            ((longlong)*piVar7 * 5 + 1) * 8,param_3,local_res8);
        uVar10 = uVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar10 != uVar11);
    }
  }
  puVar8 = *(uint **)(param_1 + 0x60);
  puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x68) * 0x12;
  for (; puVar8 != puVar1; puVar8 = puVar8 + 0x12) {
    lVar5 = *(longlong *)(puVar8 + 2);
    if (lVar5 != 0) {
      local_98 = (undefined4)lVar5;
      uStack_94 = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_90 = (undefined4)param_3;
      uStack_8c = (undefined4)((ulonglong)param_3 >> 0x20);
      if (uVar9 == 0) {
        local_48 = 0;
        local_38 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_68);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar6 + 1) = local_98;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
          *(undefined4 *)(puVar6 + 2) = uStack_90;
          *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_8c;
          puVar6[3] = param_2;
          puVar6[4] = uStack_80;
        }
        local_78[0] = &LAB_141268700;
        FUN_14126d330(lVar5,param_2,puVar8,1,local_78);
      }
      else {
        uVar2 = *puVar8;
        uVar4 = FUN_14307cf50(uVar9);
        if ((uVar2 & uVar4) != 0) {
          *(uint *)(uVar9 + 0x6dc) = uVar2;
          local_48 = 0;
          local_38 = 0;
          puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_68);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &PTR_FUN_143ff7760;
            *(undefined4 *)(puVar6 + 1) = local_98;
            *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
            *(undefined4 *)(puVar6 + 2) = uStack_90;
            *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_8c;
            puVar6[3] = uVar9;
            puVar6[4] = uStack_80;
          }
          local_78[0] = &LAB_141268700;
          FUN_14126d330(lVar5,uVar9,puVar8,1,local_78);
          *(undefined4 *)(uVar9 + 0x6dc) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 141261b40 FUN_141261b40 body=3005 status=ok
// SIG undefined FUN_141261b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141261b40(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  uint5 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auStack_4f8 [32];
  undefined8 *local_4d8;
  longlong *local_4d0;
  undefined8 local_4c8;
  undefined8 local_4b8;
  undefined4 local_4b0;
  uint local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  longlong local_4a0;
  undefined8 local_498;
  undefined1 local_488 [48];
  undefined8 local_458;
  undefined8 local_450;
  longlong *local_448;
  longlong *local_440;
  undefined1 local_438 [144];
  undefined8 local_3a8;
  uint local_398;
  undefined8 local_388;
  float local_380;
  ulonglong local_37c;
  float local_374;
  ulonglong local_370;
  float local_368;
  longlong local_338 [4];
  longlong *local_318;
  int local_308;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  longlong local_2e8;
  int local_2e0;
  int local_2dc;
  float local_2d8;
  undefined1 local_2d4;
  float local_2d0;
  undefined1 local_2cc;
  float local_2c4;
  undefined1 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  longlong local_2a8 [4];
  undefined1 local_288 [4];
  undefined4 uStack_284;
  float local_280;
  undefined1 local_278 [20];
  undefined1 local_264 [8];
  undefined1 local_25c [24];
  undefined1 local_244 [8];
  undefined1 local_23c [36];
  undefined1 local_218 [144];
  ulonglong local_188;
  float local_180;
  undefined1 local_17c;
  float local_170;
  undefined1 local_16c;
  undefined8 local_168;
  float local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  float local_140;
  undefined1 local_13c;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [8];
  longlong local_e0;
  int local_d8;
  int local_d4;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  if (*(float *)((longlong)param_1 + 0x17c) <= 0.0) {
    return;
  }
  lVar15 = param_2 + 0x6c;
  lVar5 = FWeakObjectPtr::Get(lVar15);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = param_1[0x29];
  if (lVar5 == 0) {
    return;
  }
  fVar19 = *(float *)(param_1 + 0x4b);
  fVar21 = 1.0;
  if (param_1[0x33] != 0) {
    fVar18 = (float)FUN_14304e020(param_1);
    fVar18 = fVar18 - *(float *)((longlong)param_1 + 0x1fc);
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    fVar18 = (float)UCurveFloat::GetFloatValue(param_1[0x33],fVar18);
    lVar5 = param_1[0x29];
    fVar19 = (fVar18 * *(float *)(param_1 + 0x34) + 1.0) * fVar19;
  }
  uVar17 = 0;
  uVar7 = uVar17;
  if (lVar5 != 0) {
    lVar6 = FUN_1430b3b80();
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
      uVar7 = FUN_1430777a0(lVar5);
    }
  }
  lVar5 = param_1[0x29];
  uVar8 = FWeakObjectPtr::Get(lVar15);
  local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
  FUN_140a7aa40(local_488,uVar8,lVar5,uVar7);
  if (param_1[0x28] == 0) {
    local_450 = 0;
  }
  else {
    local_450 = *(undefined8 *)(param_1[0x28] + 0x490);
  }
  local_440 = (longlong *)param_1[0x30];
  local_448 = (longlong *)param_1[0x31];
  FUN_140729f20(local_438,param_2);
  local_388 = *(undefined8 *)(param_2 + 0x20);
  local_380 = *(float *)(param_2 + 0x28);
  local_374 = -*(float *)(param_2 + 0x40);
  local_37c = *(ulonglong *)(param_2 + 0x38) ^ 0x8000000080000000;
  fVar18 = *(float *)((longlong)param_1 + 0x1a4);
  local_368 = local_374 * fVar18;
  local_370 = CONCAT44(-*(float *)(param_2 + 0x3c) * fVar18,fVar18 * *(float *)(param_2 + 0x38)) ^
              0x80000000;
  local_280 = local_368;
  local_3a8 = FUN_14304b6e0(param_1);
  local_2f0 = *(undefined4 *)((longlong)param_1 + 500);
  local_2ec = (undefined4)param_1[0x3f];
  local_2f8 = *(undefined8 *)((longlong)param_1 + 0x1ec);
  FUN_140a29610(local_2a8,param_1 + 0x36);
  puVar12 = *(undefined8 **)(param_1[0x16] + 0xc0);
  uVar9 = (ulonglong)*(int *)(param_1[0x16] + 200);
  uVar7 = uVar9 & 0x1fffffffffffffff;
  if (puVar12 + uVar9 < puVar12) {
    uVar7 = uVar17;
  }
  if (uVar7 != 0) {
    do {
      FWeakObjectPtr::operator=(local_288,*puVar12);
      iVar1 = local_2e0;
      lVar5 = (longlong)local_2e0;
      local_2e0 = local_2e0 + 1;
      if (local_2dc < local_2e0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_2e8,iVar1);
      }
      puVar12 = puVar12 + 1;
      uVar17 = uVar17 + 1;
      *(undefined1 (*) [4])(local_2e8 + lVar5 * 8) = local_288;
      *(undefined4 *)(local_2e8 + 4 + lVar5 * 8) = uStack_284;
    } while (uVar17 != uVar7);
  }
  fVar18 = *(float *)(param_1 + 0xc5);
  if ((0.0 <= fVar18) && ((float *)(param_1 + 0xc5) != &local_2d8)) {
    local_2d4 = 1;
    local_2d8 = fVar18;
  }
  fVar18 = *(float *)(param_1 + 0xc6);
  if ((0.0 <= fVar18) && ((float *)(param_1 + 0xc6) != &local_2d0)) {
    local_2cc = 1;
    local_2d0 = fVar18;
  }
  fVar18 = *(float *)((longlong)param_1 + 0x62c);
  if ((0.0 <= fVar18) && ((float *)((longlong)param_1 + 0x62c) != &local_2c4)) {
    local_2c0 = 1;
    local_2c4 = fVar18;
  }
  local_2bc = (undefined4)param_1[199];
  lVar5 = param_1[0x16];
  local_2b8 = (undefined4)param_1[200];
  local_2b4 = *(undefined4 *)((longlong)param_1 + 0x63c);
  if (*(longlong *)(lVar5 + 0xb8) != 0) {
    lVar10 = UCelLightData::GetPrivateStaticClass();
    lVar5 = *(longlong *)(lVar5 + 0xb8);
    lVar6 = lVar5;
    if (lVar5 != 0) {
LAB_141261f31:
      if (lVar6 != lVar10) goto code_r0x000141261f3a;
      if (lVar5 != 0) {
        FUN_142d0a300(local_278);
        plVar14 = local_440;
        local_16c = 1;
        local_170 = fVar19;
        if (local_440 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = local_440[0x1f];
          if (lVar5 == 0) {
            (**(code **)(*local_440 + 0x368))(local_440);
            lVar5 = plVar14[0x1f];
          }
        }
        FWeakObjectPtr::operator=(local_25c,lVar5);
        plVar14 = local_448;
        if (local_448 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = local_448[0x1f];
          if (lVar5 == 0) {
            (**(code **)(*local_448 + 0x368))(local_448);
            lVar5 = plVar14[0x1f];
          }
        }
        FWeakObjectPtr::operator=(local_264,lVar5);
        if (*(float *)(param_1 + 0x32) <= 0.0) {
          _local_288 = (uint5)(uint)local_288;
          uVar3 = _local_288;
        }
        else {
          _local_288 = CONCAT14(1,*(float *)(param_1 + 0x32));
          uVar3 = _local_288;
        }
        _local_288 = CONCAT35(uStack_284._1_3_,uVar3);
        uVar8 = _local_288;
        uStack_284._0_1_ = (char)(uVar3 >> 0x20);
        local_114 = (char)uStack_284 != '\0';
        if ((bool)local_114) {
          local_288 = SUB54(uVar3,0);
          local_118 = local_288;
        }
        local_168 = local_388;
        local_160 = local_380;
        local_15c = 1;
        _local_288 = uVar8;
        puVar12 = (undefined8 *)FVector::Rotation(&local_37c,local_288);
        if (puVar12 != &local_158) {
          local_158 = *puVar12;
          local_150 = *(undefined4 *)(puVar12 + 1);
          local_14c = 1;
        }
        local_140 = local_380;
        local_148 = local_388;
        local_13c = 1;
        if ((undefined4 *)((longlong)param_1 + 0x1a4) != &local_100) {
          local_100 = *(undefined4 *)((longlong)param_1 + 0x1a4);
          local_fc = 1;
        }
        FWeakObjectPtr::operator=(local_244,*(undefined8 *)(param_1[0x16] + 0x78));
        FWeakObjectPtr::operator=(local_23c,local_3a8);
        local_f8 = *(undefined8 *)((longlong)param_1 + 0x1ec);
        local_f0 = *(undefined4 *)((longlong)param_1 + 500);
        local_ec = (undefined4)param_1[0x3f];
        FUN_140729f20(local_218,param_2);
        local_188 = local_37c;
        local_180 = local_374;
        local_17c = 1;
        FWeakObjectPtr::operator=(local_e8,local_458);
        uVar9 = 0;
        puVar12 = *(undefined8 **)(param_1[0x16] + 0xc0);
        uVar17 = (ulonglong)*(int *)(param_1[0x16] + 200);
        uVar7 = uVar17 & 0x1fffffffffffffff;
        if (puVar12 + uVar17 < puVar12) {
          uVar7 = uVar9;
        }
        if (uVar7 != 0) {
          do {
            FWeakObjectPtr::operator=(local_288,*puVar12);
            iVar1 = local_d8;
            lVar5 = (longlong)local_d8;
            local_d8 = local_d8 + 1;
            if (local_d4 < local_d8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0,iVar1);
            }
            puVar12 = puVar12 + 1;
            uVar9 = uVar9 + 1;
            *(undefined1 (*) [4])(local_e0 + lVar5 * 8) = local_288;
            *(undefined4 *)(local_e0 + 4 + lVar5 * 8) = uStack_284;
          } while (uVar9 != uVar7);
        }
        local_4b0 = *(undefined4 *)((longlong)param_1 + 0x614);
        local_4b8 = CONCAT44((int)param_1[0xc3],(int)param_1[0xc2]);
        local_4ac = local_4ac & 0xffffff00;
        local_4a8 = 0x3f800000;
        local_4a4 = 0x3f800000;
        local_4a0 = CONCAT44(local_4a0._4_4_,0x3f800000);
        uVar8 = FWeakObjectPtr::Get(lVar15);
        local_4d0 = param_1 + 0x36;
        local_4c8 = 0;
        local_4d8 = &local_4b8;
        FUN_140a86fb0(param_1[0x29],*(undefined8 *)(param_1[0x16] + 0xb8),uVar8,local_278);
        FUN_1409c53c0(local_278);
        goto LAB_1412624bc;
      }
    }
  }
LAB_141261f43:
  if ((*(byte *)(param_1 + 0x3d) & 2) == 0) {
    FUN_140a82f00(local_488,fVar19,1,0);
  }
  else {
    local_4b0 = *(undefined4 *)(param_2 + 0x28);
    plVar14 = (longlong *)0x0;
    local_4b8 = *(undefined8 *)(param_2 + 0x20);
    local_4ac = *(uint *)(param_1 + 0x32);
    local_4a8 = CONCAT22(local_4a8._2_2_,0x300);
    local_4a0 = 0;
    local_498 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146877a10) &&
       (_Init_thread_header(&DAT_146877a10), DAT_146877a10 == -1)) {
      FName::FName(&DAT_146877a08,L"DamageSource_GrenadeDoT_C",1);
      _Init_thread_footer(&DAT_146877a10);
    }
    if (local_448 != (longlong *)0x0) {
      plVar11 = (longlong *)FUN_142e0d0b0();
      plVar16 = local_448;
joined_r0x000141261fc2:
      if (plVar16 != (longlong *)0x0) {
        if (plVar16 != plVar11) goto code_r0x000141261fd9;
        plVar11 = (longlong *)FUN_142e0d0b0();
        for (plVar16 = local_448;
            (plVar13 = plVar14, plVar16 != (longlong *)0x0 &&
            (plVar13 = local_448, plVar16 != plVar11)); plVar16 = (longlong *)plVar16[6]) {
        }
        if (plVar13[3] == DAT_146877a08) {
          local_398 = local_398 | 0x20;
        }
      }
    }
    local_4d0 = (longlong *)0x0;
    local_4d8 = (undefined8 *)CONCAT71(local_4d8._1_7_,1);
    FUN_140a843d0(local_488,fVar19,&local_4b8,1);
    if (*(longlong *)(param_1[0x16] + 0x78) != 0) {
      _local_288 = local_388;
      local_280 = local_380;
      plVar16 = plVar14;
      if (param_1[0x30] != 0) {
        plVar13 = (longlong *)FUN_142e49950();
        for (plVar11 = (longlong *)param_1[0x30];
            (plVar16 = plVar14, plVar11 != (longlong *)0x0 &&
            (plVar16 = (longlong *)param_1[0x30], plVar11 != plVar13));
            plVar11 = (longlong *)plVar11[6]) {
        }
      }
      local_4d8 = (undefined8 *)param_1[0x29];
      local_4d0 = plVar16;
      FUN_142d41800(*(undefined8 *)(param_1[0x16] + 0x78),(int)param_1[0x32],param_2,local_288);
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar14 = (longlong *)FUN_142d5ecc0(uVar8);
      if ((plVar14 != (longlong *)0x0) &&
         (plVar14 = (longlong *)(**(code **)(*plVar14 + 0x2a0))(plVar14), plVar14 != (longlong *)0x0
         )) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          fVar21 = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0xd8);
        }
        (**(code **)(*plVar14 + 0x6e8))
                  (plVar14,&local_388,*(undefined4 *)((longlong)param_1 + 0x1a4),
                   fVar21 * *(float *)(param_1 + 0x32));
      }
    }
    if (local_4a0 != 0) {
      FMemory::Free();
    }
  }
LAB_1412624bc:
  uVar8 = FWeakObjectPtr::Get(lVar15);
  FWeakObjectPtr::operator=(local_288,uVar8);
  plVar14 = param_1 + 0x47;
  lVar5 = *plVar14;
  lVar10 = param_1[0x48];
  for (lVar6 = lVar5; lVar6 != lVar5 + (longlong)(int)lVar10 * 8; lVar6 = lVar6 + 8) {
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,local_288);
    if (cVar4 != '\0') {
      if ((int)(lVar6 - lVar5 >> 3) != -1) goto LAB_141262559;
      break;
    }
  }
  iVar1 = (int)param_1[0x48];
  *(int *)(param_1 + 0x48) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x244) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar1);
  }
  lVar5 = *plVar14;
  *(undefined1 (*) [4])(lVar5 + (longlong)iVar1 * 8) = local_288;
  *(undefined4 *)(lVar5 + 4 + (longlong)iVar1 * 8) = uStack_284;
LAB_141262559:
  uVar8 = FWeakObjectPtr::Get(lVar15);
  lVar15 = FUN_142d39be0(uVar8);
  if (lVar15 != 0) {
    FWeakObjectPtr::operator=(local_288,lVar15);
    lVar15 = *plVar14;
    lVar6 = param_1[0x48];
    for (lVar5 = lVar15; lVar5 != lVar15 + (longlong)(int)lVar6 * 8; lVar5 = lVar5 + 8) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,local_288);
      if (cVar4 != '\0') {
        if ((int)(lVar5 - lVar15 >> 3) != -1) goto LAB_1412625e9;
        break;
      }
    }
    iVar1 = (int)param_1[0x48];
    *(int *)(param_1 + 0x48) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x244) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar1);
    }
    lVar15 = *plVar14;
    *(undefined1 (*) [4])(lVar15 + (longlong)iVar1 * 8) = local_288;
    *(undefined4 *)(lVar15 + 4 + (longlong)iVar1 * 8) = uStack_284;
  }
LAB_1412625e9:
  uVar20 = FUN_14304e020(param_1);
  *(undefined4 *)(param_1 + 0x41) = uVar20;
  if (local_2a8[0] != 0) {
    FMemory::Free();
  }
  local_2c0 = 0;
  local_2cc = 0;
  local_2d4 = 0;
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  if (local_308 != 0) {
    plVar14 = local_338;
    if (local_318 != (longlong *)0x0) {
      plVar14 = local_318;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_318 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
code_r0x000141261f3a:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  if (lVar6 == 0) goto LAB_141261f43;
  goto LAB_141261f31;
code_r0x000141261fd9:
  plVar16 = (longlong *)plVar16[6];
  goto joined_r0x000141261fc2;
}



// FUNCTION 141262700 FUN_141262700 body=770 status=ok
// SIG undefined FUN_141262700(void)

undefined8 *
FUN_141262700(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             float param_5,char param_6,char param_7)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float *pfVar11;
  float fVar12;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_e8 [28];
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [96];
  
  if (param_5 <= 0.0) {
    *param_1 = *param_4;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (((param_6 == '\0') || (lVar3 == 0)) || (cVar4 = FUN_140b830f0(lVar3), cVar4 == '\0')) {
      if (param_7 != '\0') {
        FRotator::Vector(param_4,local_e8);
        iVar5 = rand();
        puVar8 = (undefined4 *)FRotationMatrix::FRotationMatrix(local_78,param_4);
        local_f8 = *puVar8;
        local_f4 = puVar8[1];
        local_f0 = puVar8[2];
        local_118 = (float)puVar8[4];
        local_114 = (float)puVar8[5];
        local_110 = (float)puVar8[6];
        FVector::RotateAngleAxis(local_e8,&local_108,param_5 * 0.5 * 0.99999994,&local_118);
        puVar9 = (undefined8 *)
                 FVector::RotateAngleAxis
                           (&local_108,&local_118,(float)iVar5 * 0.010986663,&local_f8);
        local_108 = *puVar9;
        local_100 = *(undefined4 *)(puVar9 + 1);
        FVector::Rotation(&local_108,param_1);
        return param_1;
      }
      uVar10 = FRotator::Vector(param_4,local_e8);
      pfVar11 = (float *)FMath::VRandCone(&local_118,uVar10,param_5 * 0.5 * 0.017453292);
    }
    else {
      fVar12 = *(float *)(param_2 + 0x790);
      if ((param_3 != 0) && (*(longlong *)(param_3 + 0x7f8) == DAT_146b479b8)) {
        fVar12 = (fVar12 - *(float *)(param_3 + 0x6c8)) +
                 (float)*(byte *)(param_3 + 0x693) * 3.1415927;
      }
      FUN_140b8c5f0(lVar3,&local_108,fVar12,param_5 * 0.5);
      local_f8 = local_108._4_4_;
      local_f4 = (undefined4)local_108;
      local_f0 = 0;
      pfVar6 = (float *)FRotator::Vector(&local_f8,local_e8);
      pfVar7 = (float *)FRotationMatrix::FRotationMatrix(local_b8,param_4);
      fVar12 = *pfVar6;
      pfVar11 = &local_118;
      fVar1 = pfVar6[1];
      fVar2 = pfVar6[2];
      uStack_cc = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_118 = pfVar7[0xc] * 0.0 + fVar2 * pfVar7[8] + fVar1 * pfVar7[4] + fVar12 * *pfVar7;
      local_114 = pfVar7[0xd] * 0.0 + fVar2 * pfVar7[9] + fVar1 * pfVar7[5] + fVar12 * pfVar7[1];
      local_110 = pfVar7[0xe] * 0.0 + fVar2 * pfVar7[10] + fVar1 * pfVar7[6] + fVar12 * pfVar7[2];
    }
    FVector::Rotation(pfVar11,param_1);
  }
  return param_1;
}



// FUNCTION 141262a10 FUN_141262a10 body=3264 status=ok
// SIG undefined FUN_141262a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141262a10(longlong param_1,byte *param_2,undefined4 param_3,undefined8 param_4,byte param_5
                  ,longlong param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uint5 uVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  int iVar17;
  longlong lVar18;
  undefined1 uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [4];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_588 [32];
  undefined8 *local_568;
  longlong local_560;
  undefined8 local_558;
  longlong local_548;
  undefined8 local_538;
  undefined4 local_530;
  uint local_52c;
  undefined4 local_528;
  undefined4 local_524;
  longlong local_520 [7];
  undefined1 local_4e8 [80];
  undefined8 local_498 [7];
  longlong local_460;
  longlong *local_458;
  longlong *local_450;
  undefined1 local_448 [144];
  undefined8 local_3b8;
  undefined8 local_3b0;
  uint local_3a8;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  float local_384;
  undefined8 local_380;
  float local_378;
  undefined1 local_358 [16];
  longlong local_348 [4];
  longlong *local_328;
  int local_318;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  longlong local_2f8;
  int local_2f0;
  int local_2ec;
  float local_2e8;
  undefined1 local_2e4;
  float local_2e0;
  undefined1 local_2dc;
  float local_2d4;
  undefined1 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  longlong local_2b8;
  int local_2b0;
  int local_2ac;
  undefined8 local_2a8;
  undefined1 local_298 [4];
  float fStack_294;
  float local_290;
  undefined1 local_288 [16];
  byte local_278;
  undefined1 local_274 [8];
  undefined1 local_26c [24];
  undefined1 local_254 [8];
  undefined1 local_24c [36];
  byte local_228;
  undefined4 local_224;
  uint local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  float local_190;
  undefined1 local_18c;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [8];
  longlong local_f0;
  int local_e8;
  int local_e4;
  undefined1 local_d8 [80];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_588;
  plVar15 = *(longlong **)(param_1 + 0x140);
  uVar20 = 0;
  local_548 = param_6;
  if (plVar15 == (longlong *)0x0) {
    local_460 = 0;
  }
  else {
    local_460 = plVar15[0x92];
    if (local_460 == 0) {
      local_460 = (**(code **)(*plVar15 + 0x668))();
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x168);
  uVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
  local_568 = (undefined8 *)((ulonglong)local_568 & 0xffffffffffffff00);
  FUN_140a7aa40(local_498,uVar8,uVar13,*(undefined8 *)(param_1 + 0x378));
  local_450 = *(longlong **)(param_1 + 0xb8);
  local_458 = *(longlong **)(param_1 + 0xc0);
  FUN_140729f20(local_448,param_2);
  local_398 = *(undefined8 *)(param_2 + 0x14);
  pfVar1 = (float *)(param_1 + 0x2f0);
  fVar2 = *(float *)(param_1 + 0x2f4);
  fVar3 = *pfVar1;
  fVar4 = *(float *)(param_1 + 0x2f8);
  local_390 = *(undefined4 *)(param_2 + 0x1c);
  fVar22 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar22 == 1.0) {
    _local_298 = *(undefined8 *)pfVar1;
    local_384 = *(float *)(param_1 + 0x2f8);
    fVar21 = (float)((ulonglong)_local_298 >> 0x20);
    auVar23 = local_298;
  }
  else {
    fVar21 = DAT_1468b5d94;
    local_384 = DAT_1468b5d98;
    auVar23 = (undefined1  [4])DAT_1468b5d90;
    if (1e-08 <= fVar22) {
      auVar25 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
      fVar24 = auVar25._0_4_;
      fVar24 = fVar24 + fVar24 * (0.5 - fVar22 * 0.5 * fVar24 * fVar24);
      fVar24 = fVar24 + fVar24 * (0.5 - fVar22 * 0.5 * fVar24 * fVar24);
      fVar21 = fVar2 * fVar24;
      local_384 = fVar24 * fVar4;
      auVar23 = (undefined1  [4])(fVar24 * fVar3);
    }
    _local_298 = CONCAT44(fVar21,auVar23);
  }
  local_38c = _local_298;
  fVar2 = *(float *)(param_1 + 200);
  local_378 = local_384 * fVar2;
  local_380 = CONCAT44(fVar21 * fVar2,(float)auVar23 * fVar2);
  local_2fc = *(undefined4 *)(param_1 + 0x104);
  local_3a8 = (uint)param_5 * 2 | local_3a8 & 0xfffffffd;
  local_300 = *(undefined4 *)(param_1 + 0x100);
  local_3b0 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8);
  local_308 = *(undefined8 *)(param_1 + 0xf8);
  local_290 = local_378;
  local_3b8 = FUN_14304b710(param_1);
  local_2cc = *(undefined4 *)(param_1 + 0x47c);
  local_2c8 = *(undefined4 *)(param_1 + 0x480);
  local_2c4 = *(undefined4 *)(param_1 + 0x484);
  if (&local_2b8 != (longlong *)(param_1 + 0xd0)) {
    iVar17 = *(int *)(param_1 + 0xd8);
    lVar18 = *(longlong *)(param_1 + 0xd0);
    local_2b0 = iVar17;
    if ((iVar17 == 0) && (local_2ac == 0)) {
      local_2ac = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_2b8,iVar17);
      if (iVar17 != 0) {
        puVar14 = (undefined4 *)(local_2b8 + 4);
        puVar16 = (undefined4 *)(lVar18 + 4);
        do {
          puVar14[-1] = puVar16[-1];
          *puVar14 = *puVar16;
          puVar14[1] = puVar16[1];
          puVar14[2] = puVar16[2];
          iVar17 = iVar17 + -1;
          puVar14 = puVar14 + 4;
          puVar16 = puVar16 + 4;
        } while (iVar17 != 0);
      }
    }
  }
  local_3a8 = local_3a8 ^ (*(uint *)(param_1 + 0xe4) >> 0xe ^ local_3a8) & 0x10;
  if (*(longlong *)(param_1 + 0x488) == 0) {
    local_2a8 = 0;
  }
  else {
    local_2a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x338);
  }
  puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + 0x270);
  uVar9 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x278);
  uVar12 = uVar9 & 0x1fffffffffffffff;
  if (puVar11 + uVar9 < puVar11) {
    uVar12 = uVar20;
  }
  if (uVar12 != 0) {
    do {
      FWeakObjectPtr::operator=(local_298,*puVar11);
      iVar17 = local_2f0;
      lVar18 = (longlong)local_2f0;
      local_2f0 = local_2f0 + 1;
      if (local_2ec < local_2f0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_2f8,iVar17);
      }
      puVar11 = puVar11 + 1;
      uVar20 = uVar20 + 1;
      *(undefined1 (*) [4])(local_2f8 + lVar18 * 8) = local_298;
      *(float *)(local_2f8 + 4 + lVar18 * 8) = fStack_294;
    } while (uVar20 != uVar12);
  }
  lVar18 = local_548;
  if ((local_548 != 0) && (cVar7 = FUN_143052680(param_1), cVar7 != '\0')) {
    lVar18 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(&local_538,lVar18);
    FGenericPlatformMemory::MemswapGreaterThan8(lVar18,local_358,0x50);
    if (*(int *)(lVar18 + 0x40) != 0) {
      plVar15 = *(longlong **)(lVar18 + 0x30);
      if (*(longlong **)(lVar18 + 0x30) == (longlong *)0x0) {
        plVar15 = (longlong *)(lVar18 + 0x10);
      }
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x10))(plVar15,0);
      }
    }
    if (*(longlong *)(lVar18 + 0x30) != 0) {
      FMemory::Free();
    }
  }
  fVar2 = *(float *)(param_1 + 0x470);
  if ((0.0 <= fVar2) && ((float *)(param_1 + 0x470) != &local_2e8)) {
    local_2e4 = 1;
    local_2e8 = fVar2;
  }
  fVar2 = *(float *)(param_1 + 0x474);
  if ((0.0 <= fVar2) && ((float *)(param_1 + 0x474) != &local_2e0)) {
    local_2dc = 1;
    local_2e0 = fVar2;
  }
  fVar2 = *(float *)(param_1 + 0x478);
  if ((0.0 <= fVar2) && ((float *)(param_1 + 0x478) != &local_2d4)) {
    local_2d0 = 1;
    local_2d4 = fVar2;
  }
  if ((*(uint *)(param_1 + 0xe4) & 0x4000) == 0) {
    lVar18 = *(longlong *)(param_1 + 0xa8);
    if (*(longlong *)(lVar18 + 0x220) != 0) {
      lVar10 = UCelLightData::GetPrivateStaticClass();
      lVar18 = *(longlong *)(lVar18 + 0x220);
      for (lVar5 = lVar18; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar10) {
          if (lVar18 != 0) {
            FUN_142d0a300(local_288);
            plVar15 = local_450;
            local_17c = 1;
            local_180 = param_3;
            if (local_450 == (longlong *)0x0) {
              lVar18 = 0;
            }
            else {
              lVar18 = local_450[0x1f];
              if (lVar18 == 0) {
                (**(code **)(*local_450 + 0x368))(local_450);
                lVar18 = plVar15[0x1f];
              }
            }
            FWeakObjectPtr::operator=(local_26c,lVar18);
            plVar15 = local_458;
            if (local_458 == (longlong *)0x0) {
              lVar18 = 0;
            }
            else {
              lVar18 = local_458[0x1f];
              if (lVar18 == 0) {
                (**(code **)(*local_458 + 0x368))(local_458);
                lVar18 = plVar15[0x1f];
              }
            }
            FWeakObjectPtr::operator=(local_274,lVar18);
            if (*(float *)(param_1 + 0xb4) <= 0.0) {
              _local_298 = (uint5)(uint)local_298;
              uVar6 = _local_298;
            }
            else {
              _local_298 = CONCAT14(1,*(float *)(param_1 + 0xb4));
              uVar6 = _local_298;
            }
            _local_298 = CONCAT35(fStack_294._1_3_,uVar6);
            uVar13 = _local_298;
            fStack_294._0_1_ = (char)(uVar6 >> 0x20);
            local_124 = fStack_294._0_1_ != '\0';
            if ((bool)local_124) {
              local_298 = SUB54(uVar6,0);
              local_128 = local_298;
            }
            local_178 = local_398;
            local_170 = local_390;
            local_16c = 1;
            _local_298 = uVar13;
            puVar11 = (undefined8 *)FVector::Rotation(pfVar1,local_298);
            if (puVar11 != &local_168) {
              local_168 = *puVar11;
              local_160 = *(undefined4 *)(puVar11 + 1);
              local_15c = 1;
            }
            local_150 = local_390;
            local_158 = local_398;
            local_14c = 1;
            if ((undefined4 *)(param_1 + 200) != &local_110) {
              local_110 = *(undefined4 *)(param_1 + 200);
              local_10c = 1;
            }
            FWeakObjectPtr::operator=
                      (local_254,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
            FWeakObjectPtr::operator=(local_24c,local_3b8);
            local_108 = *(undefined8 *)(param_1 + 0xf8);
            local_100 = *(undefined4 *)(param_1 + 0x100);
            local_fc = *(undefined4 *)(param_1 + 0x104);
            local_21c = *(undefined4 *)(param_2 + 0xc);
            local_228 = local_228 ^ (local_228 ^ *param_2) & 3;
            local_224 = *(undefined4 *)(param_2 + 4);
            local_214 = *(undefined8 *)(param_2 + 0x14);
            local_208 = *(undefined8 *)(param_2 + 0x20);
            local_1fc = *(undefined8 *)(param_2 + 0x2c);
            local_1f0 = *(undefined8 *)(param_2 + 0x38);
            local_1e4 = *(undefined8 *)(param_2 + 0x44);
            local_1d8 = *(undefined8 *)(param_2 + 0x50);
            local_220 = local_220 ^ (*(uint *)(param_2 + 8) ^ local_220) & 1;
            local_1cc = *(undefined4 *)(param_2 + 0x5c);
            local_20c = *(undefined4 *)(param_2 + 0x1c);
            local_200 = *(undefined4 *)(param_2 + 0x28);
            local_1f4 = *(undefined4 *)(param_2 + 0x34);
            local_1e8 = *(undefined4 *)(param_2 + 0x40);
            local_1dc = *(undefined4 *)(param_2 + 0x4c);
            local_1d0 = *(undefined4 *)(param_2 + 0x58);
            local_1c8 = *(undefined4 *)(param_2 + 0x60);
            local_1c4 = *(undefined4 *)(param_2 + 100);
            local_1c0 = *(undefined4 *)(param_2 + 0x68);
            local_1bc = *(undefined4 *)(param_2 + 0x6c);
            local_1b8 = *(undefined4 *)(param_2 + 0x70);
            local_1b4 = *(undefined4 *)(param_2 + 0x74);
            local_1b0 = *(undefined4 *)(param_2 + 0x78);
            local_1a8 = *(undefined8 *)(param_2 + 0x80);
            local_1a0 = *(undefined8 *)(param_2 + 0x88);
            local_218 = *(undefined4 *)(param_2 + 0x10);
            local_190 = local_384;
            local_198 = local_38c;
            local_18c = 1;
            local_278 = ((byte)(*(uint *)(param_1 + 0xe4) >> 0x12) & 1 | param_5 * '\x02') << 5 |
                        local_278 & 0x9f;
            FWeakObjectPtr::operator=(local_f8,*(undefined8 *)(param_1 + 0x378));
            uVar9 = 0;
            puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + 0x270);
            uVar12 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x278);
            uVar20 = uVar12 & 0x1fffffffffffffff;
            if (puVar11 + uVar12 < puVar11) {
              uVar20 = uVar9;
            }
            if (uVar20 != 0) {
              do {
                FWeakObjectPtr::operator=(local_298,*puVar11);
                iVar17 = local_e8;
                lVar18 = (longlong)local_e8;
                local_e8 = local_e8 + 1;
                if (local_e4 < local_e8) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_f0,iVar17);
                }
                puVar11 = puVar11 + 1;
                uVar9 = uVar9 + 1;
                *(undefined1 (*) [4])(local_f0 + lVar18 * 8) = local_298;
                *(float *)(local_f0 + 4 + lVar18 * 8) = fStack_294;
              } while (uVar9 != uVar20);
            }
            lVar18 = local_548;
            local_530 = *(undefined4 *)(param_1 + 0x474);
            local_528 = *(undefined4 *)(param_1 + 0x47c);
            local_538 = CONCAT44(*(undefined4 *)(param_1 + 0x478),*(undefined4 *)(param_1 + 0x470));
            local_524 = *(undefined4 *)(param_1 + 0x484);
            local_520[0] = CONCAT44(local_520[0]._4_4_,*(undefined4 *)(param_1 + 0x480));
            local_52c = local_52c & 0xffffff00;
            if ((local_548 != 0) && (cVar7 = FUN_143052680(param_1), cVar7 != '\0')) {
              lVar18 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                 (local_4e8,lVar18);
              FGenericPlatformMemory::MemswapGreaterThan8(lVar18,local_d8,0x50);
              if (*(int *)(lVar18 + 0x40) != 0) {
                plVar15 = *(longlong **)(lVar18 + 0x30);
                if (*(longlong **)(lVar18 + 0x30) == (longlong *)0x0) {
                  plVar15 = (longlong *)(lVar18 + 0x10);
                }
                if (plVar15 != (longlong *)0x0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15,0);
                }
              }
              if (*(longlong *)(lVar18 + 0x30) != 0) {
                FMemory::Free();
              }
              local_278 = local_278 & 0xfe;
            }
            uVar13 = FWeakObjectPtr::Get(param_2 + 0x6c);
            local_558 = local_2a8;
            local_560 = param_1 + 0xd0;
            local_568 = &local_538;
            FUN_140a86fb0(*(undefined8 *)(param_1 + 0x168),
                          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x220),uVar13,local_288);
            FUN_1409c53c0(local_288);
            goto LAB_14126361c;
          }
          break;
        }
      }
    }
    lVar18 = thunk_FUN_142d54de0();
    if (lVar18 != 0) {
      FUN_140a82f00(local_498,param_3,1,lVar18);
      FUN_1430402e0(param_1,lVar18);
      FUN_142d266f0(lVar18);
    }
  }
  else {
    cVar7 = FUN_14303f780(param_1,local_498[0],param_2);
    local_538 = local_398;
    local_52c = *(uint *)(param_1 + 0xb4);
    uVar19 = 1;
    if (cVar7 != '\0') {
      uVar19 = 2;
    }
    local_520[1] = 1;
    local_520[0] = 0;
    local_530 = local_390;
    local_528 = CONCAT22(local_528._2_2_,0x301);
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(local_520,0);
    FUN_140729f20(local_520[0],param_2);
    lVar18 = thunk_FUN_142d54de0();
    if (lVar18 != 0) {
      local_568 = (undefined8 *)CONCAT71(local_568._1_7_,uVar19);
      local_560 = lVar18;
      FUN_140a843d0(local_498,param_3,&local_538,1);
      FUN_1430402e0(param_1,lVar18);
      FUN_142d266f0(lVar18);
    }
    if (local_520[0] != 0) {
      FMemory::Free();
    }
  }
LAB_14126361c:
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  local_2d0 = 0;
  local_2dc = 0;
  local_2e4 = 0;
  if (local_2f8 != 0) {
    FMemory::Free();
  }
  if (local_318 != 0) {
    plVar15 = local_348;
    if (local_328 != (longlong *)0x0) {
      plVar15 = local_328;
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15,0);
    }
  }
  if (local_328 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412636d0 FUN_1412636d0 body=403 status=ok
// SIG undefined FUN_1412636d0(void)

void FUN_1412636d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  ulonglong in_stack_ffffffffffffff48;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    piVar4 = *(int **)(param_1 + 0x70);
    uVar7 = (longlong)*(int *)(param_1 + 0x78) & 0x3fffffffffffffff;
    if (piVar4 + *(int *)(param_1 + 0x78) < piVar4) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      do {
        in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
        local_a8 = param_2;
        uStack_a0 = param_3;
        FUN_142c90ad0(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x30) + (longlong)*piVar4 * 0x28
                      + 0x18,param_4,param_2,&local_a8,in_stack_ffffffffffffff48,local_res8);
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar6 != uVar7);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x60);
  lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x68) * 0x48;
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
    lVar2 = *(longlong *)(lVar5 + 8);
    if (lVar2 != 0) {
      local_58 = 0;
      local_48 = 0;
      local_a8 = lVar2;
      uStack_a0 = param_4;
      local_98 = param_2;
      puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_78);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143ff7760;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_a8._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_a0._4_4_;
        puVar3[3] = local_98;
        puVar3[4] = uStack_90;
      }
      local_88[0] = &LAB_1412686b0;
      FUN_14126d330(lVar2,param_2,lVar5,2,local_88);
    }
  }
  return;
}



// FUNCTION 141263870 FUN_141263870 body=344 status=ok
// SIG undefined FUN_141263870(void)

void FUN_141263870(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  local_res10 = param_2;
  FUN_142fe58f0();
  if ((0 < *(int *)(param_1 + 0x78)) && (param_2 != 0)) {
    lVar3 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(char *)(param_1 + 0x58) != '\0') {
        lVar8 = *(longlong *)(param_1 + 0x70);
        lVar3 = lVar8 + (longlong)*(int *)(param_1 + 0x78) * 0x18;
        for (; lVar8 != lVar3; lVar8 = lVar8 + 0x18) {
          plVar7 = *(longlong **)(lVar8 + 8);
          plVar1 = plVar7 + (longlong)*(int *)(lVar8 + 0x10) * 9;
          for (; plVar7 != plVar1; plVar7 = plVar7 + 9) {
            iVar5 = (int)param_3[1] + -1;
            if (-1 < iVar5) {
              lVar6 = (longlong)iVar5 << 4;
              do {
                lVar4 = FUN_142c9feb0(*param_3 + lVar6);
                if (lVar4 == *plVar7) {
                  FUN_142ca96a0(*param_3 + lVar6);
                  TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::
                  RemoveAtImpl(param_3,iVar5,1,1);
                }
                lVar6 = lVar6 + -0x10;
                iVar5 = iVar5 + -1;
              } while (-1 < iVar5);
            }
          }
          param_2 = local_res10;
        }
      }
      FUN_141292210(param_2,param_1 + 0x70,param_3,local_res8);
    }
  }
  return;
}



// FUNCTION 1412639d0 FUN_1412639d0 body=577 status=ok
// SIG undefined FUN_1412639d0(void)

void FUN_1412639d0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar10 = 0;
  if (param_2 != 0) {
    lVar5 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar9 = param_2;
    if (bVar3) goto LAB_141263a42;
  }
  uVar9 = uVar10;
LAB_141263a42:
  if ((*(longlong *)(param_1 + 0x48) != 0) && (uVar9 != 0)) {
    piVar7 = *(int **)(param_1 + 0x70);
    uVar11 = (longlong)*(int *)(param_1 + 0x78) & 0x3fffffffffffffff;
    if (piVar7 + *(int *)(param_1 + 0x78) < piVar7) {
      uVar11 = uVar10;
    }
    if (uVar11 != 0) {
      do {
        FUN_141292210(uVar9,*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x30) +
                            ((longlong)*piVar7 * 5 + 1) * 8,param_3,local_res8);
        uVar10 = uVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar10 != uVar11);
    }
  }
  puVar8 = *(uint **)(param_1 + 0x60);
  puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x68) * 0x12;
  for (; puVar8 != puVar1; puVar8 = puVar8 + 0x12) {
    lVar5 = *(longlong *)(puVar8 + 2);
    if (lVar5 != 0) {
      local_98 = (undefined4)lVar5;
      uStack_94 = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_90 = (undefined4)param_3;
      uStack_8c = (undefined4)((ulonglong)param_3 >> 0x20);
      if (uVar9 == 0) {
        local_48 = 0;
        local_38 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_68);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar6 + 1) = local_98;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
          *(undefined4 *)(puVar6 + 2) = uStack_90;
          *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_8c;
          puVar6[3] = param_2;
          puVar6[4] = uStack_80;
        }
        local_78[0] = &LAB_1412686b0;
        FUN_14126d330(lVar5,param_2,puVar8,1,local_78);
      }
      else {
        uVar2 = *puVar8;
        uVar4 = FUN_14307cf50(uVar9);
        if ((uVar2 & uVar4) != 0) {
          *(uint *)(uVar9 + 0x6dc) = uVar2;
          local_48 = 0;
          local_38 = 0;
          puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_68);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &PTR_FUN_143ff7760;
            *(undefined4 *)(puVar6 + 1) = local_98;
            *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
            *(undefined4 *)(puVar6 + 2) = uStack_90;
            *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_8c;
            puVar6[3] = uVar9;
            puVar6[4] = uStack_80;
          }
          local_78[0] = &LAB_1412686b0;
          FUN_14126d330(lVar5,uVar9,puVar8,1,local_78);
          *(undefined4 *)(uVar9 + 0x6dc) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 141263c20 FUN_141263c20 body=31 status=ok
// SIG undefined FUN_141263c20(void)

void FUN_141263c20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_141271820(*(longlong *)(param_1 + 0x188),param_1,param_1 + 0x178);
    return;
  }
  return;
}



// FUNCTION 141263c60 FUN_141263c60 body=566 status=ok
// SIG undefined FUN_141263c60(void)

void FUN_141263c60(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  void *_Src;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char cVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *local_res18;
  undefined8 *local_58;
  int local_50;
  
  local_50 = *(int *)(param_1 + 1);
  lVar13 = (longlong)local_50;
  if (local_50 != 0) {
    _Src = (void *)*param_1;
    uVar11 = 0;
    local_58 = (undefined8 *)0x0;
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
    puVar17 = local_58;
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar13 << 3);
    uVar12 = 0xffffffffffffffff;
    cVar5 = '\0';
    do {
      cVar15 = cVar5;
      uVar12 = uVar12 >> 1;
      cVar5 = cVar15 + -1;
    } while (0xffffffff < uVar12);
    puVar2 = puVar17 + local_50;
    if (puVar17 != puVar2) {
      local_res18 = puVar17 + 1;
      uVar9 = (ulonglong)((longlong)puVar2 + (7 - (longlong)local_res18)) >> 3;
      if (puVar2 < local_res18) {
        uVar9 = uVar11;
      }
      if (uVar9 != 0) {
        uVar16 = 2;
        do {
          uVar1 = uVar16 - 1;
          do {
            uVar10 = uVar11;
            uVar14 = uVar11;
            if (uVar16 != 1) {
              do {
                do {
                  uVar6 = std::_guard_xfg_dispatch_icall_nop();
                } while (uVar12 < uVar6);
                uVar10 = (uVar10 << (cVar15 - 2U & 0x3f)) * 2 | (ulonglong)uVar6;
                uVar14 = (uVar14 << (cVar15 - 2U & 0x3f)) * 2 | uVar12;
              } while (uVar14 < uVar1);
            }
          } while ((uVar14 / uVar16 <= uVar10 / uVar16) && (uVar14 % uVar16 != uVar1));
          uVar10 = uVar10 % uVar16;
          if (uVar10 != uVar1) {
            uVar7 = *local_res18;
            *local_res18 = local_58[uVar10];
            local_58[uVar10] = uVar7;
          }
          local_res18 = local_res18 + 1;
          uVar1 = uVar16 - 1;
          uVar16 = uVar16 + 1;
          puVar17 = local_58;
        } while (uVar1 != uVar9);
      }
    }
    iVar4 = local_50;
    lVar13 = param_2[1];
    uVar12 = uVar11;
    if (0 < (int)lVar13) {
      do {
        piVar8 = (int *)param_1[2];
        piVar3 = piVar8 + *(int *)(param_1 + 3);
        iVar18 = (int)uVar12;
        for (; piVar8 != piVar3; piVar8 = piVar8 + 1) {
          if (*piVar8 == iVar18) goto LAB_141263e60;
        }
        cVar5 = FWeakObjectPtr::IsValid(*param_2 + uVar11);
        if (cVar5 != '\0') {
          uVar7 = FWeakObjectPtr::Get(*param_2 + uVar11);
          FUN_1405aaf50(uVar7,puVar17[iVar18 % iVar4]);
        }
LAB_141263e60:
        uVar11 = uVar11 + 0x30;
        uVar12 = (ulonglong)(iVar18 + 1U);
      } while ((int)(iVar18 + 1U) < (int)lVar13);
    }
    if (puVar17 != (undefined8 *)0x0) {
      FMemory::Free(puVar17);
    }
  }
  return;
}



// FUNCTION 141263ea0 FUN_141263ea0 body=419 status=ok
// SIG undefined FUN_141263ea0(void)

void FUN_141263ea0(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_68 = *param_5;
  iVar5 = *(int *)(param_5 + 0x10);
  local_64 = *(undefined4 *)(param_5 + 4);
  lVar2 = *(longlong *)(param_5 + 8);
  local_67 = param_5[1];
  local_66 = param_5[2];
  local_60 = 0;
  local_58 = iVar5;
  if (iVar5 == 0) {
    local_54 = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_60,iVar5,0);
    puVar3 = (undefined4 *)(local_60 + 4);
    puVar4 = (undefined4 *)(lVar2 + 4);
    do {
      puVar3[-1] = puVar4[-1];
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (iVar5 != 0);
  }
  local_50 = *(undefined8 *)(param_5 + 0x18);
  local_48 = *(undefined4 *)(param_5 + 0x20);
  local_44 = *(undefined4 *)(param_5 + 0x24);
  local_38 = *(undefined8 *)(param_5 + 0x30);
  local_30 = *(undefined8 *)(param_5 + 0x38);
  local_24 = *(undefined4 *)(param_5 + 0x44);
  local_40 = *(undefined4 *)(param_5 + 0x28);
  local_20 = *(undefined4 *)(param_5 + 0x48);
  local_28 = *(undefined4 *)(param_5 + 0x40);
  FUN_14306b3e0(param_1,param_2,param_3,param_4,&local_68);
  if (param_2 != (longlong *)0x0) {
    lVar2 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_2 + 0x710))(param_2,*(undefined8 *)(param_1 + 0x970));
    }
  }
  if (*(longlong *)(param_5 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141264070 FUN_141264070 body=196 status=ok
// SIG undefined FUN_141264070(void)

void FUN_141264070(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_141256b20();
  }
  FUN_140a57df0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x408);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(char *)((longlong)plVar1 + 0x13c1) != '\0') {
        FUN_14223c460(plVar1,0);
        FUN_142cff140(param_1,1,plVar1);
      }
      if (*(char *)(param_1 + 0x6e6) != '\0') {
        lVar4 = *plVar1;
        iVar3 = FUN_14233f450(param_1);
        (**(code **)(lVar4 + 0x8d8))(plVar1,iVar3 != 3);
      }
    }
  }
  return;
}



// FUNCTION 141264140 FUN_141264140 body=72 status=ok
// SIG undefined FUN_141264140(void)

void FUN_141264140(longlong param_1)

{
  FUN_14306ba50();
  if (((*(byte *)(param_1 + 0x929) & 1) != 0) && ((*(byte *)(param_1 + 0x929) & 2) == 0)) {
    FUN_143083d20(param_1,0x12,0);
    return;
  }
  FUN_14308fb00(param_1,0x12);
  return;
}



// FUNCTION 141264190 FUN_141264190 body=114 status=ok
// SIG undefined FUN_141264190(void)

void FUN_141264190(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  param_1 = param_1 + 0x228;
  lVar2 = FUN_140e83500(param_1);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_140e83500(param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x7c8))(plVar3);
      if (cVar1 == '\0') {
        return;
      }
    }
    cVar1 = FUN_140e71290(param_1,2);
    if (cVar1 == '\0') {
      FUN_14308e980(lVar2,1);
    }
  }
  return;
}



// FUNCTION 141264210 FUN_141264210 body=1998 status=ok
// SIG undefined FUN_141264210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141264210(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int *piVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_14306c180();
  pwVar13 = (wchar_t *)0x0;
  if (((char)param_1[0xd2] != '\0') &&
     (plVar8 = (longlong *)param_1[0x2a], plVar8 != (longlong *)0x0)) {
    lVar7 = FUN_14222e2a0(plVar8);
    while (lVar7 != 0) {
      plVar8 = (longlong *)FUN_14222e2a0(plVar8);
      lVar7 = FUN_14222e2a0(plVar8);
    }
    local_e8 = (longlong *)0x0;
    uStack_e0 = (longlong *)0x0;
    (**(code **)(*plVar8 + 0x4b8))(plVar8,&local_e8,1);
    FUN_14222e300(plVar8,&local_e8);
    uVar2 = (ulonglong)uStack_e0;
    lVar7 = (longlong)(int)uStack_e0;
    iVar6 = (int)uStack_e0 + 1;
    uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,iVar6);
    if (uStack_e0._4_4_ < iVar6) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_e8,uVar2 & 0xffffffff);
    }
    local_e8[lVar7] = (longlong)plVar8;
    pwVar11 = (wchar_t *)
              ((ulonglong)((longlong)(local_e8 + (int)uStack_e0) + (7 - (longlong)local_e8)) >> 3);
    if (local_e8 + (int)uStack_e0 < local_e8) {
      pwVar11 = pwVar13;
    }
    plVar8 = local_e8;
    pwVar14 = pwVar13;
    if (pwVar11 != (wchar_t *)0x0) {
      do {
        lVar7 = *plVar8;
        FUN_142ddc830(param_1,lVar7,1);
        bVar4 = *(byte *)(param_1 + 0x8d);
        if ((bVar4 & 1) != 0) {
          FUN_14307e770(param_1,lVar7);
          bVar4 = *(byte *)(param_1 + 0x8d);
        }
        if ((bVar4 & 2) != 0) {
          FUN_142ddcaf0(param_1,lVar7,1);
        }
        pwVar14 = (wchar_t *)((longlong)pwVar14 + 1);
        plVar8 = plVar8 + 1;
      } while (pwVar14 != pwVar11);
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar7 == 0) goto LAB_141264750;
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar5 = UWorld::IsGameWorld(uVar9);
  if (cVar5 == '\0') goto LAB_141264750;
  if (*(char *)((longlong)param_1 + 0x691) != '\0') {
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar8 = *(longlong **)(lVar7 + 0x148);
    if (plVar8 != (longlong *)0x0) {
      lVar7 = FUN_141424d10();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (bVar15) {
        lVar7 = param_1[0x23];
        if (lVar7 != 0) {
          lVar10 = FUN_1413ffe00();
          lVar7 = *(longlong *)(lVar7 + 0x10);
          if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
              lVar10 + 0x88)) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          if (bVar15) {
            uVar16 = 0x3f000000;
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            if (*(longlong *)(DAT_146b33f38 + 0x90) != 0) {
              uVar16 = *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0x90) + 0xec0);
            }
            local_d8 = (longlong *)0x0;
            local_d0 = 0;
            local_e8 = param_1;
            uStack_e0 = plVar8;
            plVar8 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar8 == (longlong *)0x0) {
              if (((local_d0 != 0) && (local_d8 != (longlong *)0x0)) &&
                 ((**(code **)(*local_d8 + 0x28))(local_d8,0), local_d8 != (longlong *)0x0)) {
                local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
              }
            }
            else {
              *plVar8 = (longlong)&PTR_GetPoolName_1447406c0;
              *(int *)(plVar8 + 1) = (int)local_e8;
              *(int *)((longlong)plVar8 + 0xc) = local_e8._4_4_;
              *(int *)(plVar8 + 2) = (int)uStack_e0;
              *(int *)((longlong)plVar8 + 0x14) = uStack_e0._4_4_;
              lVar7 = FDelegateHandle::GenerateNewID();
              plVar8[4] = lVar7;
              *plVar8 = (longlong)&PTR_GetPoolName_144740708;
              FUN_141269700(plVar8,&local_d8);
              (**(code **)(*plVar8 + 0x28))(plVar8,0);
              lVar7 = FMemory::Realloc(plVar8,0,0);
              if (lVar7 != 0) {
                FMemory::Free(lVar7);
              }
            }
            lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
            if (*(longlong *)(lVar7 + 400) == 0) {
              uVar9 = *(undefined8 *)(lVar7 + 0x3f8);
            }
            else {
              uVar9 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
            }
            local_b8 = 0;
            local_b0 = 0;
            if ((local_d0 != 0) && (local_d8 != (longlong *)0x0)) {
              (**(code **)(*local_d8 + 0x30))(local_d8,&local_b8);
            }
            FWeakObjectPtr::operator=(local_a8,0);
            local_f0 = 0xbf800000;
            local_f8 = 0;
            local_a0 = 0;
            local_68 = (longlong *)0x0;
            local_58 = 0;
            local_98 = AK::MemoryMgr::StartProfileThreadUsage;
            FUN_142880850(uVar9,param_1 + 0xd8,&local_b8,uVar16);
            if (local_58 != 0) {
              plVar8 = local_88;
              if (local_68 != (longlong *)0x0) {
                plVar8 = local_68;
              }
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x10))(plVar8,0);
              }
            }
            if (local_68 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
            if (local_d0 != 0) {
              if (local_d8 == (longlong *)0x0) goto LAB_141264662;
              (**(code **)(*local_d8 + 0x28))(local_d8,0);
              if (local_d8 != (longlong *)0x0) {
                local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
              }
              local_d0 = 0;
            }
            if (local_d8 != (longlong *)0x0) {
              FMemory::Free(local_d8);
            }
            goto LAB_141264662;
          }
        }
        FUN_140cd72e0(plVar8,param_1);
      }
    }
  }
LAB_141264662:
  if (*(char *)((longlong)param_1 + 0x6c9) != '\0') {
    uVar9 = UScrollBox::GetPrivateStaticClass();
    lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar9);
    param_1[0xda] = lVar7;
    uVar9 = FUN_142e79d90();
    lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar9);
    param_1[0xdb] = lVar7;
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar7 = *(longlong *)(lVar7 + 400);
    if (lVar7 != 0) {
      lVar10 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (bVar15) {
        uStack_e0 = (longlong *)0x0;
        local_e8 = param_1;
        uVar9 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        uStack_e0 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar9);
        FUN_140be6c80(lVar7,&local_e8);
      }
    }
    if (*(char *)((longlong)param_1 + 0x6ca) != '\0') {
      if (param_1[0xd6] != 0) {
        FUN_142350b20(param_1[0xd6],1);
      }
      if (param_1[0xda] != 0) {
        FUN_142350b20(param_1[0xda],1);
      }
    }
  }
LAB_141264750:
  if ((((char)param_1[0x25] != '\x03') && ((char)param_1[0xd9] != '\0')) &&
     (lVar7 = FUN_14307c290(param_1), lVar7 != 0)) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&AOakProjectile::OnSkagProjectileStop",L"::");
    while (pwVar14 = pwVar11, pwVar14 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar14 + 1,L"::");
      pwVar13 = pwVar14;
    }
    FName::FName(&local_d8,pwVar13 + 2,1);
    plVar3 = local_d8;
    lVar7 = FUN_14307c290(param_1);
    plVar8 = (longlong *)(lVar7 + 0x200);
    FWeakObjectPtr::operator=(&local_e8,0);
    uStack_e0 = (longlong *)0x0;
    FWeakObjectPtr::operator=(&local_e8,param_1);
    uStack_e0 = plVar3;
    local_c8 = 0;
    if ((plVar3 != (longlong *)0x0) && (lVar10 = FWeakObjectPtr::Get(&local_e8), lVar10 != 0)) {
      UObject::FindFunction(lVar10,uStack_e0);
    }
    piVar1 = (int *)*plVar8;
    iVar6 = *(int *)(lVar7 + 0x208);
    for (piVar12 = piVar1; piVar12 != piVar1 + (longlong)iVar6 * 4; piVar12 = piVar12 + 4) {
      if (((*piVar12 == (int)local_e8) &&
          (local_e8._4_4_ = (int)((ulonglong)local_e8 >> 0x20),
          bVar15 = piVar12[1] == local_e8._4_4_, bVar15)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_e8), cVar5 == '\0')))) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if ((bVar15) && (*(longlong **)(piVar12 + 2) == uStack_e0)) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        if ((int)((longlong)piVar12 - (longlong)piVar1 >> 4) != -1) goto LAB_1412648e0;
        break;
      }
    }
    iVar6 = *(int *)(lVar7 + 0x208);
    lVar10 = (longlong)iVar6;
    *(int *)(lVar7 + 0x208) = iVar6 + 1;
    if (*(int *)(lVar7 + 0x20c) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar6);
    }
    lVar7 = *plVar8;
    *(int *)(lVar7 + lVar10 * 0x10) = (int)local_e8;
    *(int *)(lVar7 + 4 + lVar10 * 0x10) = local_e8._4_4_;
    *(longlong **)(lVar7 + 8 + lVar10 * 0x10) = uStack_e0;
LAB_1412648e0:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
  }
  if (param_1[2] != 0) {
    local_d8 = *(longlong **)(param_1[2] + 0x18);
    FName::ToString(&local_d8,&local_e8);
    cVar5 = FString::StartsWith(&local_e8,&DAT_1462a29b0,1);
    if (((cVar5 != '\0') || (cVar5 = FString::StartsWith(&local_e8,&DAT_1462a29c0,1), cVar5 != '\0')
        ) && (plVar8 = (longlong *)param_1[0x2d], plVar8 != (longlong *)0x0)) {
      lVar7 = FUN_1429f11d0();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (bVar15) {
        (**(code **)(*plVar8 + 0x830))(plVar8,0x16,1);
      }
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1412649f0 FUN_1412649f0 body=471 status=ok
// SIG undefined FUN_1412649f0(void)

void FUN_1412649f0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *local_res10;
  int local_28;
  int local_24;
  longlong *local_20;
  
  FUN_14306c5c0();
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnFirstPersonCreated",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = param_1 + 0xa4;
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = (longlong *)0x0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != (longlong *)0x0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar1;
  lVar7 = param_1[0xa5];
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)(int)lVar7 * 4) {
LAB_141264b14:
      iVar2 = (int)param_1[0xa5];
      *(int *)(param_1 + 0xa5) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x52c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong **)(piVar8 + 2) = local_20;
LAB_141264b4f:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      if ((char)param_1[0x25] == '\x03') {
        FUN_142d2ad60(param_1[0x134]);
      }
      else {
        (**(code **)(*param_1 + 0x310))(param_1,1);
        if ((((*(byte *)(param_1 + 0x143) & 2) == 0) && (param_1[0x13c] != 0)) &&
           ((*(byte *)(param_1 + 0x143) & 1) != 0)) {
          FUN_14149b260(param_1);
          *(byte *)(param_1 + 0x143) = *(byte *)(param_1 + 0x143) | 2;
        }
        FUN_1412838b0(param_1);
        FUN_141283830(param_1);
      }
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong **)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_141264b4f;
      goto LAB_141264b14;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 141264bd0 FUN_141264bd0 body=867 status=ok
// SIG undefined FUN_141264bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141264bd0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int *piVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined1 auStack_138 [32];
  int local_118;
  int local_114;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_14306c5c0();
  pwVar13 = (wchar_t *)0x0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  local_2c = 0;
  if (param_1 != 0) {
    FUN_140725150(param_1,local_f8,0);
  }
  puVar9 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar9 = local_38;
  }
  pwVar7 = (wchar_t *)((longlong)local_30 & 0x1fffffffffffffff);
  if (puVar9 + local_30 < puVar9) {
    pwVar7 = pwVar13;
  }
  pwVar12 = pwVar13;
  if (pwVar7 != (wchar_t *)0x0) {
    do {
      (**(code **)(*(longlong *)*puVar9 + 0x830))((longlong *)*puVar9,3);
      pwVar12 = (wchar_t *)((longlong)pwVar12 + 1);
      puVar9 = puVar9 + 1;
    } while (pwVar12 != pwVar7);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146877b00) && (_Init_thread_header(&DAT_146877b00), DAT_146877b00 == -1))
  {
    FName::FName(&DAT_146877af8,L"BP_GroundTurretWeapon_FlameThrower_C",1);
    _Init_thread_footer(&DAT_146877b00);
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) != DAT_146877af8)) goto LAB_141264eb9;
  pwVar7 = *(wchar_t **)(param_1 + 0x118);
  if (pwVar7 == (wchar_t *)0x0) {
LAB_141264d09:
    pwVar7 = pwVar13;
  }
  else {
    lVar4 = FUN_1414d8e60();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141264d09;
  }
  uVar5 = FUN_142e6b880();
  lVar4 = AGameStateBase::OnRep_GameModeClass(pwVar7,uVar5);
  if (lVar4 != 0) {
    lVar6 = FUN_142e6b880();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakWeapon_Vehicle::OnPawnDetachedFromWeapon",L"::")
      ;
      while (pwVar12 = pwVar7, pwVar12 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
        pwVar13 = pwVar12;
      }
      FName::FName(&local_100,pwVar13 + 2,1);
      plVar11 = (longlong *)(lVar4 + 0x3d0);
      FWeakObjectPtr::operator=(&local_118,0);
      local_110 = 0;
      FWeakObjectPtr::operator=(&local_118,param_1);
      local_110 = local_100;
      local_108 = 0;
      if ((local_100 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_118), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_110);
      }
      piVar8 = (int *)*plVar11;
      iVar1 = *(int *)(lVar4 + 0x3d8);
      for (piVar10 = piVar8; piVar10 != piVar8 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if (((*piVar10 == local_118) && (piVar10[1] == local_114)) ||
           ((cVar3 = FWeakObjectPtr::IsValid(piVar10), cVar3 == '\0' &&
            (cVar3 = FWeakObjectPtr::IsValid(&local_118), cVar3 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar10 + 2) == local_110)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar10 - (longlong)piVar8 >> 4) != -1) goto LAB_141264eb1;
          break;
        }
      }
      iVar1 = *(int *)(lVar4 + 0x3d8);
      *(int *)(lVar4 + 0x3d8) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x3dc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
      *piVar8 = local_118;
      piVar8[1] = local_114;
      *(longlong *)(piVar8 + 2) = local_110;
LAB_141264eb1:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
  }
LAB_141264eb9:
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141264f40 FUN_141264f40 body=1192 status=ok
// SIG undefined FUN_141264f40(void)

void FUN_141264f40(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint *puVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  wchar_t *pwVar16;
  longlong local_res10;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  uint uStack_80;
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
  
  FUN_140e71740();
  uVar6 = URemnantQuestSubQuest::GetPrivateStaticClass();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0xa4] = lVar7;
  if (lVar7 != 0) {
    *(undefined1 *)((longlong)param_1 + 0x4f9) = 0;
  }
  if (param_1[0x23] != 0) {
    lVar7 = FUN_14126cad0();
    param_1[0xa7] = lVar7;
    *(longlong *)(param_1[0xa3] + 0x6d8) = lVar7;
    param_1[0x2a] = param_1[0xa7];
    FUN_141284890(param_1);
  }
  pwVar16 = (wchar_t *)0x0;
  uStack_a4 = 1;
  plVar13 = param_1 + 0x56;
  uVar1 = *(uint *)(param_1 + 0x5b);
  puVar11 = (uint *)(param_1 + 0x58);
  local_a8 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar15 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar15 = puVar11;
    }
    uVar2 = *puVar15;
    pwVar10 = pwVar16;
    pwVar9 = pwVar16;
    while (uVar2 == 0) {
      iVar5 = (int)pwVar10;
      uStack_90 = (int)pwVar9 + 0x20;
      pwVar9 = (wchar_t *)(ulonglong)uStack_90;
      local_a8 = iVar5 + 1;
      pwVar10 = (wchar_t *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14126507d;
      uVar2 = puVar15[(longlong)iVar5 + 1];
    }
    uStack_a4 = uVar2 - 1 & uVar2 ^ uVar2;
    iVar5 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_94 = (uStack_90 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_14126507d:
      uStack_94 = uVar1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x5b);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  local_98 = -1 << ((byte)uVar2 & 0x1f);
  uVar14 = uVar2 & 0xffffffe0;
  uStack_80 = local_a8;
  uStack_7c = uStack_a4;
  puStack_a0 = puVar11;
  uStack_94 = uVar2;
  local_78 = puVar11;
  local_60 = plVar13;
  puStack_50 = puVar11;
  uStack_40 = local_68;
  local_88 = plVar13;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar2 != uVar1) {
    puVar15 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar15 = puVar11;
    }
    uVar12 = puVar15[(int)uVar2 >> 5] & local_98;
    iVar5 = (int)uVar2 >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141265155;
      uVar12 = puVar15[(longlong)iVar5 + 1];
      local_98 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_94 = (uVar14 - iVar5) + 0x1f;
    uVar2 = uStack_94;
    if ((int)uVar1 < (int)uStack_94) {
LAB_141265155:
      uStack_94 = uVar1;
      uVar2 = uVar1;
    }
  }
  do {
    if ((uStack_6c == uVar2) && (local_78 == puVar11)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_88 == plVar13)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      lVar7 = param_1[0xa9];
      goto LAB_141265202;
    }
    lVar7 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (*(longlong *)(lVar7 + 0x18) == param_1[0xaa]) {
      lVar8 = ALoreItem::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        param_1[0xa9] = lVar7;
LAB_141265202:
        if (lVar7 != 0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AVehicleGunnerSeatPawn::OnActionReserved",L"::")
          ;
          pwVar10 = pwVar16;
          while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
            pwVar10 = pwVar4;
          }
          FName::FName(&local_res10,pwVar10 + 2,1);
          lVar8 = local_res10;
          lVar7 = param_1[0xa9];
          plVar13 = (longlong *)(lVar7 + 0x188);
          FWeakObjectPtr::operator=(&local_a8,0);
          puStack_a0 = (uint *)0x0;
          FWeakObjectPtr::operator=(&local_a8,param_1);
          puStack_a0 = (uint *)lVar8;
          if (lVar8 != 0) {
            lVar8 = FWeakObjectPtr::Get(&local_a8);
            if (lVar8 != 0) {
              UObject::FindFunction(lVar8,puStack_a0);
            }
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
          iVar5 = *(int *)(lVar7 + 400);
          *(int *)(lVar7 + 400) = iVar5 + 1;
          if (*(int *)(lVar7 + 0x194) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar5);
          }
          puVar11 = (uint *)((longlong)iVar5 * 0x10 + *plVar13);
          *puVar11 = local_a8;
          puVar11[1] = uStack_a4;
          *(uint **)(puVar11 + 2) = puStack_a0;
          pwVar10 = _guard_xfg_dispatch_icall_nop
                              (L"&AVehicleGunnerSeatPawn::OnActionUsageEnded",L"::");
          while (pwVar9 = pwVar10, pwVar9 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
            pwVar16 = pwVar9;
          }
          FName::FName(&local_res10,pwVar16 + 2,1);
          lVar7 = param_1[0xa9];
          plVar13 = (longlong *)(lVar7 + 0x1b8);
          FWeakObjectPtr::operator=(&local_a8,0);
          puStack_a0 = (uint *)0x0;
          FWeakObjectPtr::operator=(&local_a8,param_1);
          puStack_a0 = (uint *)local_res10;
          if (local_res10 != 0) {
            lVar8 = FWeakObjectPtr::Get(&local_a8);
            if (lVar8 != 0) {
              UObject::FindFunction(lVar8,puStack_a0);
            }
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
          iVar5 = *(int *)(lVar7 + 0x1c0);
          *(int *)(lVar7 + 0x1c0) = iVar5 + 1;
          if (*(int *)(lVar7 + 0x1c4) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar5);
          }
          puVar11 = (uint *)((longlong)iVar5 * 0x10 + *plVar13);
          *puVar11 = local_a8;
          puVar11[1] = uStack_a4;
          *(uint **)(puVar11 + 2) = puStack_a0;
        }
        return;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  } while( true );
}



// FUNCTION 1412653f0 FUN_1412653f0 body=125 status=ok
// SIG undefined FUN_1412653f0(void)

void FUN_1412653f0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_140e71740();
  uVar1 = URemnantQuestSubQuest::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xa4] = lVar2;
  if (lVar2 != 0) {
    *(undefined1 *)((longlong)param_1 + 0x4f9) = 0;
  }
  if (param_1[0x23] != 0) {
    lVar2 = FUN_14126cad0();
    param_1[0xa7] = lVar2;
    *(longlong *)(param_1[0xa3] + 0x6d8) = lVar2;
    param_1[0x2a] = param_1[0xa7];
    FUN_141284890(param_1);
    return;
  }
  return;
}



// FUNCTION 141265470 FUN_141265470 body=484 status=ok
// SIG undefined FUN_141265470(void)

void FUN_141265470(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_142330a70();
  FStringTable::SetOwnerAsset(param_1 + 0x228,*(undefined8 *)(param_1 + 0x118));
  pwVar11 = (wchar_t *)0x0;
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UActiveWeaponsComponent::OnWeaponResumeUse",L"::");
  pwVar10 = pwVar11;
  while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar10 = pwVar3;
  }
  FName::FName(&local_res10,pwVar10 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x260);
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = local_res10;
  if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
    UObject::FindFunction(lVar6,local_30);
  }
  piVar7 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x268);
  piVar8 = piVar7;
  do {
    if (piVar8 == piVar7 + (longlong)iVar2 * 4) {
LAB_1412655a4:
      iVar2 = *(int *)(param_1 + 0x268);
      *(int *)(param_1 + 0x268) = iVar2 + 1;
      if (*(int *)(param_1 + 0x26c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar7 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar7 = local_38;
      piVar7[1] = local_34;
      *(longlong *)(piVar7 + 2) = local_30;
LAB_1412655df:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      puVar9 = *(undefined8 **)(param_1 + 0x1f8);
      pwVar10 = (wchar_t *)((longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff);
      if (puVar9 + *(int *)(param_1 + 0x200) < puVar9) {
        pwVar10 = pwVar11;
      }
      if (pwVar10 != (wchar_t *)0x0) {
        do {
          FUN_140e6fb20(param_1 + 0x228,*puVar9);
          pwVar11 = (wchar_t *)((longlong)pwVar11 + 1);
          puVar9 = puVar9 + 1;
        } while (pwVar11 != pwVar10);
      }
      if (*(char *)(param_1 + 0x220) != '\0') {
        FUN_14127f710(param_1);
      }
      return;
    }
    if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
        ((cVar4 = FWeakObjectPtr::IsValid(piVar8), cVar4 == '\0' &&
         (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
       (*(longlong *)(piVar8 + 2) == local_30)) {
      if ((int)((longlong)piVar8 - (longlong)piVar7 >> 4) != -1) goto LAB_1412655df;
      goto LAB_1412655a4;
    }
    piVar8 = piVar8 + 4;
  } while( true );
}



// FUNCTION 141265660 FUN_141265660 body=1943 status=ok
// SIG undefined FUN_141265660(void)

void FUN_141265660(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  float local_88;
  float fStack_84;
  float local_80;
  undefined1 *local_78;
  ulonglong uStack_70;
  
  pwVar12 = (wchar_t *)0x0;
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pwVar9 = pwVar12, pwVar8 = pwVar12, 0 < *(int *)(param_1 + 0x350))) {
      do {
        lVar4 = *(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348));
        if (lVar4 != 0) {
          lVar5 = UTextureRenderTargetCube::GetPrivateStaticClass();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14120f6e0(*(undefined8 *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348)),lVar7);
          }
        }
        uVar10 = (int)pwVar9 + 1;
        pwVar9 = (wchar_t *)(ulonglong)uVar10;
        pwVar8 = pwVar8 + 4;
      } while ((int)uVar10 < *(int *)(param_1 + 0x350));
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pwVar9 = pwVar12, pwVar8 = pwVar12, 0 < *(int *)(param_1 + 0x350))) {
      do {
        lVar4 = *(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348));
        if (lVar4 != 0) {
          lVar5 = FUN_1414dcc20();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14120f9d0(*(undefined8 *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348)),lVar7);
          }
        }
        uVar10 = (int)pwVar9 + 1;
        pwVar9 = (wchar_t *)(ulonglong)uVar10;
        pwVar8 = pwVar8 + 4;
      } while ((int)uVar10 < *(int *)(param_1 + 0x350));
    }
  }
  FUN_1430cf0b0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 == (longlong *)0x0) goto LAB_141265a13;
  uVar6 = FUN_14096cb40();
  lVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
  if (lVar7 == 0) goto LAB_141265a13;
  plVar11 = *(longlong **)(param_1 + 0x348);
  fVar17 = 0.0;
  plVar1 = plVar11 + *(int *)(param_1 + 0x350);
  for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
    lVar4 = *plVar11;
    if (lVar4 == 0) {
LAB_1412658b5:
      fVar13 = 0.0;
    }
    else {
      lVar5 = UAESHelper::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1412658b5;
      fVar13 = *(float *)(lVar4 + 0x38);
    }
    fVar17 = fVar17 + fVar13;
  }
  if (0.1 < ABS(fVar17)) {
    fVar13 = (float)FUN_140964280(lVar7);
    fVar13 = fVar13 + fVar17;
    if (fVar13 <= 1.0) {
      fVar13 = 1.0;
    }
    FUN_140968560(lVar7,fVar13);
  }
  plVar11 = *(longlong **)(param_1 + 0x348);
  fVar13 = 1.0;
  fVar18 = 1.0;
  local_88 = 1.0;
  fVar17 = 1.0;
  fStack_84 = 1.0;
  local_80 = 1.0;
  plVar1 = plVar11 + *(int *)(param_1 + 0x350);
  if (plVar11 == plVar1) {
LAB_1412659db:
    bVar2 = false;
  }
  else {
    do {
      lVar4 = *plVar11;
      if (lVar4 == 0) {
LAB_141265991:
        fVar16 = 1.0;
        fVar14 = 1.0;
        fVar15 = 1.0;
      }
      else {
        lVar5 = UAESHelper::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_141265991;
        local_78 = *(undefined1 **)(lVar4 + 0x3c);
        fVar14 = (float)((ulonglong)local_78 >> 0x20);
        fVar15 = *(float *)(lVar4 + 0x44);
        uStack_70 = CONCAT44(uStack_70._4_4_,fVar15);
        fVar16 = local_78._0_4_;
      }
      fVar17 = fVar17 * fVar15;
      plVar11 = plVar11 + 1;
      fVar18 = fVar18 * fVar14;
      fVar13 = fVar13 * fVar16;
    } while (plVar11 != plVar1);
    local_88 = fVar13;
    fStack_84 = fVar18;
    local_80 = fVar17;
    if (((fVar13 == 1.0) && (fVar18 == 1.0)) && (fVar17 == 1.0)) goto LAB_1412659db;
    bVar2 = true;
  }
  if (bVar2) {
    local_78 = (undefined1 *)CONCAT44(fStack_84,local_88);
    uStack_70 = CONCAT44(uStack_70._4_4_,local_80);
    FUN_140967d00(lVar7,&local_78);
  }
LAB_141265a13:
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pwVar9 = pwVar12, pwVar8 = pwVar12, 0 < *(int *)(param_1 + 0x350))) {
      do {
        lVar4 = *(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348));
        if (lVar4 != 0) {
          lVar5 = FUN_1414e12e0();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_141210100(*(undefined8 *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348)),lVar7);
          }
        }
        uVar10 = (int)pwVar9 + 1;
        pwVar9 = (wchar_t *)(ulonglong)uVar10;
        pwVar8 = pwVar8 + 4;
      } while ((int)uVar10 < *(int *)(param_1 + 0x350));
    }
  }
  FUN_141259ef0(param_1);
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pwVar9 = pwVar12, pwVar8 = pwVar12, 0 < *(int *)(param_1 + 0x350))) {
      do {
        lVar4 = *(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348));
        if (lVar4 != 0) {
          lVar5 = FUN_1414e13e0();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_141210150(*(undefined8 *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348)),lVar7);
          }
        }
        uVar10 = (int)pwVar9 + 1;
        pwVar9 = (wchar_t *)(ulonglong)uVar10;
        pwVar8 = pwVar8 + 4;
      } while ((int)uVar10 < *(int *)(param_1 + 0x350));
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pwVar9 = pwVar12, pwVar8 = pwVar12, 0 < *(int *)(param_1 + 0x350))) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x348) + (longlong)pwVar8);
        if (lVar4 != 0) {
          lVar5 = UPawnAction_Sequence::StaticClass();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14120f3d0(*(undefined8 *)(*(longlong *)(param_1 + 0x348) + (longlong)pwVar8),lVar7);
          }
        }
        uVar10 = (int)pwVar9 + 1;
        pwVar9 = (wchar_t *)(ulonglong)uVar10;
        pwVar8 = pwVar8 + 4;
      } while ((int)uVar10 < *(int *)(param_1 + 0x350));
    }
  }
  FUN_14125ad20(param_1);
  FUN_14125aac0(param_1);
  FUN_14125a860(param_1);
  FUN_14125a610(param_1);
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar7 + 0x6b8) != 0)) {
      uStack_70 = uStack_70 & 0xffffffff00000000;
      local_78 = &LAB_141275730;
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakVehicleBalanceStateComponent::OnBoostStarted",L"::");
      pwVar9 = pwVar12;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar9 = pwVar3;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (*(longlong *)(lVar7 + 0x6b8) + 0x178,param_1,&local_78,local_res8);
      uStack_70 = uStack_70 & 0xffffffff00000000;
      local_78 = &LAB_141275730;
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakVehicleBalanceStateComponent::OnBoostFinished",L"::");
      while (pwVar8 = pwVar9, pwVar8 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
        pwVar12 = pwVar8;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (*(longlong *)(lVar7 + 0x6b8) + 0x188,param_1,&local_78,local_res8);
    }
  }
  return;
}



// FUNCTION 141265e00 FUN_141265e00 body=86 status=ok
// SIG undefined FUN_141265e00(void)

void FUN_141265e00(longlong param_1)

{
  longlong lVar1;
  
  FUN_1430ceb80();
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar1 = FUN_14126f850();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x3c0) != 0)) {
      FUN_141259020(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(lVar1 + 0x3c0),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141265e60 FUN_141265e60 body=27 status=ok
// SIG undefined FUN_141265e60(void)

void FUN_141265e60(undefined8 param_1)

{
  FUN_14306c9f0();
  FUN_14127f390(param_1);
  return;
}



// FUNCTION 141265e80 FUN_141265e80 body=1349 status=ok
// SIG undefined FUN_141265e80(void)

ulonglong FUN_141265e80(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int *piVar4;
  wchar_t *pwVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  int *piVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  bool bVar19;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_58;
  ulonglong uStack_50;
  
  lVar13 = *(longlong *)(param_1 + 0x290);
  if ((lVar13 != 0) && (lVar11 = *(longlong *)(param_1 + 0x288), lVar11 != 0)) {
    lVar3 = *(longlong *)(lVar13 + 0x2f8);
    pwVar17 = (wchar_t *)0x0;
    local_res8 = 0;
    pwVar12 = pwVar17;
    if (lVar3 != 0) {
      uVar9 = AUGDoor::GetPrivateStaticClass();
      pwVar12 = (wchar_t *)FUN_14222fa10(lVar11,uVar9,lVar3);
      lVar11 = *(longlong *)(param_1 + 0x288);
      lVar13 = *(longlong *)(param_1 + 0x290);
    }
    *(wchar_t **)(param_1 + 0x298) = pwVar12;
    if (*(longlong *)(lVar13 + 0x378) != 0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UVehicleAudioProviderComponent::OnVehicleGearShift",L"::");
      pwVar12 = pwVar17;
      while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar12 = pwVar5;
      }
      FName::FName(&local_res10,pwVar12 + 2,1);
      uVar14 = local_res10;
      lVar13 = *(longlong *)(param_1 + 0x288);
      plVar18 = (longlong *)(lVar13 + 0x770);
      FWeakObjectPtr::operator=(&local_58,0);
      uStack_50 = 0;
      FWeakObjectPtr::operator=(&local_58,param_1);
      uStack_50 = uVar14;
      local_res8 = 0;
      if ((uVar14 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_58), lVar11 != 0)) {
        UObject::FindFunction(lVar11,uStack_50);
      }
      piVar4 = (int *)*plVar18;
      iVar8 = *(int *)(lVar13 + 0x778);
      for (piVar16 = piVar4; piVar16 != piVar4 + (longlong)iVar8 * 4; piVar16 = piVar16 + 4) {
        if ((((*piVar16 == (int)local_58) &&
             (local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20),
             bVar19 = piVar16[1] == local_58._4_4_, bVar19)) ||
            ((cVar6 = FWeakObjectPtr::IsValid(piVar16), cVar6 == '\0' &&
             (cVar6 = FWeakObjectPtr::IsValid(&local_58), cVar6 == '\0')))) &&
           (*(ulonglong *)(piVar16 + 2) == uStack_50)) {
          if ((int)((longlong)piVar16 - (longlong)piVar4 >> 4) != -1) goto LAB_141266046;
          break;
        }
      }
      iVar8 = *(int *)(lVar13 + 0x778);
      *(int *)(lVar13 + 0x778) = iVar8 + 1;
      if (*(int *)(lVar13 + 0x77c) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar8);
      }
      puVar15 = (undefined4 *)((longlong)iVar8 * 0x10 + *plVar18);
      *puVar15 = (int)local_58;
      puVar15[1] = local_58._4_4_;
      *(ulonglong *)(puVar15 + 2) = uStack_50;
LAB_141266046:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar18);
      lVar11 = *(longlong *)(param_1 + 0x288);
    }
    lVar13 = *(longlong *)(lVar11 + 0x6a0);
    if (lVar13 != 0) {
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = &LAB_141278630;
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UVehicleAudioProviderComponent::OnVehicleBecameAirborne",L"::");
      pwVar12 = pwVar17;
      while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar12 = pwVar5;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      FUN_1407260e0(lVar13 + 0x820,param_1,&local_58,local_res8);
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UVehicleAudioProviderComponent::OnVehicleLanded",L"::");
      pwVar12 = pwVar17;
      while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar12 = pwVar5;
      }
      FName::FName(&local_res10,pwVar12 + 2,1);
      plVar18 = (longlong *)(lVar13 + 0x830);
      FWeakObjectPtr::operator=(&local_58,0);
      uStack_50 = 0;
      FWeakObjectPtr::operator=(&local_58,param_1);
      uStack_50 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_58), lVar11 != 0)) {
        UObject::FindFunction(lVar11,uStack_50);
      }
      piVar4 = (int *)*plVar18;
      iVar8 = *(int *)(lVar13 + 0x838);
      for (piVar16 = piVar4; piVar16 != piVar4 + (longlong)iVar8 * 4; piVar16 = piVar16 + 4) {
        if ((((*piVar16 == (int)local_58) &&
             (local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20),
             bVar19 = piVar16[1] == local_58._4_4_, bVar19)) ||
            ((cVar6 = FWeakObjectPtr::IsValid(piVar16), cVar6 == '\0' &&
             (cVar6 = FWeakObjectPtr::IsValid(&local_58), cVar6 == '\0')))) &&
           (*(ulonglong *)(piVar16 + 2) == uStack_50)) {
          if ((int)((longlong)piVar16 - (longlong)piVar4 >> 4) != -1) goto LAB_141266211;
          break;
        }
      }
      iVar8 = *(int *)(lVar13 + 0x838);
      *(int *)(lVar13 + 0x838) = iVar8 + 1;
      if (*(int *)(lVar13 + 0x83c) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar8);
      }
      puVar15 = (undefined4 *)((longlong)iVar8 * 0x10 + *plVar18);
      *puVar15 = (int)local_58;
      puVar15[1] = local_58._4_4_;
      *(ulonglong *)(puVar15 + 2) = uStack_50;
LAB_141266211:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar18);
      lVar11 = *(longlong *)(param_1 + 0x288);
    }
    lVar13 = *(longlong *)(lVar11 + 0x6b0);
    if (lVar13 != 0) {
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = &LAB_141276320;
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UVehicleAudioProviderComponent::OnHoverEnabled",L"::");
      pwVar12 = pwVar17;
      while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar12 = pwVar5;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      FUN_1407260e0(lVar13 + 0x178,param_1,&local_58,local_res8);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = &LAB_141276310;
      pwVar12 = _guard_xfg_dispatch_icall_nop
                          (L"&UVehicleAudioProviderComponent::OnHoverDisabled",L"::");
      while (pwVar10 = pwVar12, pwVar10 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
        pwVar17 = pwVar10;
      }
      FName::FName(&local_res8,pwVar17 + 2,1);
      FUN_1407260e0(lVar13 + 0x188,param_1,&local_58,local_res8);
    }
  }
  FUN_142330a70(param_1);
  lVar13 = FUN_1405c6c00();
  uVar14 = 0;
  if (lVar13 != 0) {
    lVar13 = *(longlong *)(lVar13 + 0x1c0);
    uVar14 = 0;
    if (lVar13 != 0) {
      fVar1 = *(float *)(lVar13 + 0x34);
      fVar2 = *(float *)(lVar13 + 0x30);
      uVar7 = rand();
      uVar14 = (ulonglong)uVar7;
      *(float *)(param_1 + 0x2d8) = (float)(int)uVar7 * 3.051851e-05 * (fVar1 - fVar2) + fVar2;
    }
  }
  if (0 < *(int *)(param_1 + 0x260)) {
    iVar8 = rand();
    uVar14 = (longlong)iVar8 / (longlong)*(int *)(param_1 + 0x260) & 0xffffffff;
    *(int *)(param_1 + 0x2ec) = iVar8 % *(int *)(param_1 + 0x260);
  }
  return uVar14;
}



// FUNCTION 1412663d0 FUN_1412663d0 body=3910 status=ok
// SIG undefined FUN_1412663d0(void)

void FUN_1412663d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  char cVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  undefined4 *puVar14;
  int *piVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_58;
  undefined8 uStack_50;
  
  FUN_142330a70();
  plVar16 = *(longlong **)(param_1 + 0x118);
  if (plVar16 != (longlong *)0x0) {
    pwVar17 = (wchar_t *)0x0;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnActorHit",L"::");
    pwVar13 = pwVar17;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar13 = pwVar4;
    }
    FName::FName(&local_res10,pwVar13 + 2,1);
    uVar5 = local_res10;
    plVar1 = plVar16 + 0x50;
    FWeakObjectPtr::operator=(&local_58,0);
    uStack_50 = 0;
    FWeakObjectPtr::operator=(&local_58,param_1);
    uStack_50 = uVar5;
    local_res8 = 0;
    if ((uVar5 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_58), lVar8 != 0)) {
      UObject::FindFunction(lVar8,uStack_50);
    }
    piVar3 = (int *)*plVar1;
    lVar8 = plVar16[0x51];
    uVar12 = local_58;
    for (piVar15 = piVar3; local_58 = (code *)uVar12, piVar15 != piVar3 + (longlong)(int)lVar8 * 4;
        piVar15 = piVar15 + 4) {
      local_58._0_4_ = (int)uVar12;
      if (((*piVar15 == (int)local_58) &&
          (local_58._4_4_ = (int)((ulonglong)uVar12 >> 0x20), bVar18 = piVar15[1] == local_58._4_4_,
          bVar18)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_58), cVar6 == '\0')))) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if ((bVar18) && (*(ulonglong *)(piVar15 + 2) == uStack_50)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if (bVar18) {
        if ((int)((longlong)piVar15 - (longlong)piVar3 >> 4) != -1) goto LAB_141266553;
        break;
      }
      uVar12 = local_58;
    }
    iVar2 = (int)plVar16[0x51];
    *(int *)(plVar16 + 0x51) = iVar2 + 1;
    if (*(int *)((longlong)plVar16 + 0x28c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar14 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar14 = (int)local_58;
    puVar14[1] = local_58._4_4_;
    *(ulonglong *)(puVar14 + 2) = uStack_50;
LAB_141266553:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    lVar8 = FUN_14148cad0();
    if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18) {
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = (code *)&LAB_141278560;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnStartHorn",L"::");
      pwVar13 = pwVar17;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (plVar16 + 0x16b,param_1,&local_58,local_res8);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = (code *)&LAB_141278610;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnStopHorn",L"::");
      pwVar13 = pwVar17;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (plVar16 + 0x16d,param_1,&local_58,local_res8);
      lVar8 = plVar16[0xd8];
      if (lVar8 != 0) {
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = (code *)&LAB_141275d60;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnDigitrustStart",L"::")
        ;
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x178,param_1,&local_58,local_res8);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = (code *)&LAB_141275d50;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnDigitrustEnd",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x198,param_1,&local_58,local_res8);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = FUN_1412756f0;
        plVar1 = (longlong *)(lVar8 + 0x1e0);
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_144318830;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(int *)(plVar9 + 2) = (int)local_58;
          *(int *)((longlong)plVar9 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_50;
          *(uint *)((longlong)plVar9 + 0x1c) = uStack_50._4_4_;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[5] = lVar10;
          *plVar9 = (longlong)&PTR_FUN_144318878;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_res8);
          iVar2 = *(int *)(lVar8 + 0x1e8);
          *(int *)(lVar8 + 0x1e8) = iVar2 + 1;
          if (*(int *)(lVar8 + 0x1ec) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar11 = plVar9;
          *(undefined4 *)(puVar11 + 1) = 3;
        }
      }
      uVar12 = UFGOnlineSessionClient::GetPrivateStaticClass();
      lVar8 = (**(code **)(*plVar16 + 0x628))(plVar16,uVar12);
      if (lVar8 != 0) {
        uStack_50._4_4_ = (uint)(uStack_50 >> 0x20);
        local_58 = (code *)&LAB_141277ce0;
        uStack_50._0_4_ = 0;
        TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                  (lVar8 + 0x198,&local_res8,param_1,&local_58);
        local_58 = (code *)&LAB_141277cf0;
        uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
        TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                  (lVar8 + 0x1b0,&local_res8,param_1,&local_58);
      }
      lVar8 = plVar16[0xd6];
      if (lVar8 != 0) {
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = (code *)&LAB_141276340;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnHoverStart",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x178,param_1,&local_58,local_res8);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = (code *)&LAB_141276330;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnHoverEnd",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x188,param_1,&local_58,local_res8);
        if (*(char *)(lVar8 + 0x280) != '\0') {
          FUN_14127a6d0(param_1,7);
        }
      }
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = (code *)&LAB_141275fd0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnHealthLow",L"::");
      pwVar13 = pwVar17;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (plVar16 + 0x112,param_1,&local_58,local_res8);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = (code *)&LAB_1412762f0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnHealthVeryLow",L"::");
      pwVar13 = pwVar17;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (plVar16 + 0x114,param_1,&local_58,local_res8);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = (code *)&LAB_141276300;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnHealthy",L"::");
      pwVar13 = pwVar17;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (plVar16 + 0x110,param_1,&local_58,local_res8);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = (code *)&LAB_141275d40;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnDead",L"::");
      pwVar13 = pwVar17;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (plVar16 + 0x116,param_1,&local_58,local_res8);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = FUN_1412785c0;
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UVehicleEffectsComponent::OnStatusEffectStarted",L"::");
      pwVar13 = pwVar17;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (plVar16 + 0x122,param_1,&local_58,local_res8);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = FUN_141278570;
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UVehicleEffectsComponent::OnStatusEffectEnded",L"::");
      pwVar13 = pwVar17;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (plVar16 + 0x124,param_1,&local_58,local_res8);
      lVar8 = plVar16[0xca];
      if (lVar8 != 0) {
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = (code *)&LAB_1412757e0;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnCryoFreezing",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x2d0,param_1,&local_58,local_res8);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = (code *)&LAB_1412757f0;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnCryoFrozen",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x2e0,param_1,&local_58,local_res8);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = FUN_141275820;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnCryoThawing",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x2f0,param_1,&local_58,local_res8);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = FUN_141275800;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnCryoThawed",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x300,param_1,&local_58,local_res8);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = FUN_141277aa0;
        plVar1 = (longlong *)(lVar8 + 0x328);
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_143fcff50;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(int *)(plVar9 + 2) = (int)local_58;
          *(int *)((longlong)plVar9 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_50;
          *(uint *)((longlong)plVar9 + 0x1c) = uStack_50._4_4_;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[5] = lVar10;
          *plVar9 = (longlong)&PTR_FUN_143fcff98;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_res8);
          iVar2 = *(int *)(lVar8 + 0x330);
          *(int *)(lVar8 + 0x330) = iVar2 + 1;
          if (*(int *)(lVar8 + 0x334) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar11 = plVar9;
          *(undefined4 *)(puVar11 + 1) = 3;
        }
      }
      lVar8 = plVar16[0xd7];
      if (lVar8 != 0) {
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = FUN_141275710;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnBoostEnd",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x188,param_1,&local_58,local_res8);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = FUN_1412756f0;
        plVar1 = (longlong *)(lVar8 + 0x198);
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_144318830;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(int *)(plVar9 + 2) = (int)local_58;
          *(int *)((longlong)plVar9 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_50;
          *(uint *)((longlong)plVar9 + 0x1c) = uStack_50._4_4_;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[5] = lVar10;
          *plVar9 = (longlong)&PTR_FUN_144318878;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_res8);
          iVar2 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar8 + 0x1a0) = iVar2 + 1;
          if (*(int *)(lVar8 + 0x1a4) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar11 = plVar9;
          *(undefined4 *)(puVar11 + 1) = 3;
        }
        fVar19 = (float)FUN_1430d5c20(lVar8);
        fVar20 = (float)FUN_1430d6f10(lVar8);
        *(bool *)(param_1 + 0x459) = ABS(fVar19 - fVar20) <= 1e-08;
        *(bool *)(param_1 + 0x458) = ABS(fVar19) <= 1e-08;
      }
      lVar8 = plVar16[0xcd];
      if (lVar8 != 0) {
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = (code *)&LAB_141277ac0;
        pwVar7 = _guard_xfg_dispatch_icall_nop
                           (L"&UVehicleEffectsComponent::OnPrimarySeatStatusChanged",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar8 + 0x3f0,param_1,&local_58,local_res8);
      }
      pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UVehicleEffectsComponent::OnGearShift",L"::");
      while (pwVar7 = pwVar13, pwVar7 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar17 = pwVar7;
      }
      FName::FName(&local_res10,pwVar17 + 2,1);
      lVar8 = *(longlong *)(param_1 + 0x188);
      plVar16 = (longlong *)(lVar8 + 0x770);
      FWeakObjectPtr::operator=(&local_58,0);
      uStack_50 = 0;
      FWeakObjectPtr::operator=(&local_58,param_1);
      uStack_50 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_58), lVar10 != 0)) {
        UObject::FindFunction(lVar10,uStack_50);
      }
      piVar3 = (int *)*plVar16;
      iVar2 = *(int *)(lVar8 + 0x778);
      for (piVar15 = piVar3; piVar15 != piVar3 + (longlong)iVar2 * 4; piVar15 = piVar15 + 4) {
        if (((*piVar15 == (int)local_58) &&
            (local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20),
            bVar18 = piVar15[1] == local_58._4_4_, bVar18)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_58), cVar6 == '\0')))) {
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
        if ((bVar18) && (*(ulonglong *)(piVar15 + 2) == uStack_50)) {
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
        if (bVar18) {
          if ((int)((longlong)piVar15 - (longlong)piVar3 >> 4) != -1) goto LAB_1412672e8;
          break;
        }
      }
      iVar2 = *(int *)(lVar8 + 0x778);
      *(int *)(lVar8 + 0x778) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x77c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar2);
      }
      puVar14 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar16);
      *puVar14 = (int)local_58;
      puVar14[1] = local_58._4_4_;
      *(ulonglong *)(puVar14 + 2) = uStack_50;
LAB_1412672e8:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
    }
  }
  return;
}



// FUNCTION 141267320 FUN_141267320 body=452 status=ok
// SIG undefined FUN_141267320(void)

void FUN_141267320(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_140a59e80();
  lVar8 = *(longlong *)(param_1 + 0x118);
  if (lVar8 != 0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14126737b;
  }
  lVar8 = 0;
LAB_14126737b:
  *(longlong *)(param_1 + 0x6d8) = lVar8;
  if ((*(char *)(param_1 + 0x768) != '\0') && (lVar8 != 0)) {
    plVar1 = (longlong *)(lVar8 + 0x558);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_14471e898;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x41278b50;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar5;
      *plVar6 = (longlong)&PTR_FUN_14471e8e0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar2 = *(int *)(lVar8 + 0x560);
      *(int *)(lVar8 + 0x560) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x564) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar7 = plVar6;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
  }
  iVar2 = *(int *)(param_1 + 0x538);
  *(int *)(param_1 + 0x538) = iVar2 + 1;
  if (*(int *)(param_1 + 0x53c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x530,iVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x708);
  lVar8 = *(longlong *)(param_1 + 0x530);
  lVar5 = (longlong)iVar2 * 0x68;
  *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(param_1 + 0x700);
  ((undefined8 *)(lVar5 + lVar8))[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x718);
  puVar7 = (undefined8 *)(lVar5 + 0x10 + lVar8);
  *puVar7 = *(undefined8 *)(param_1 + 0x710);
  puVar7[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x728);
  puVar7 = (undefined8 *)(lVar5 + 0x20 + lVar8);
  *puVar7 = *(undefined8 *)(param_1 + 0x720);
  puVar7[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x738);
  puVar7 = (undefined8 *)(lVar5 + 0x30 + lVar8);
  *puVar7 = *(undefined8 *)(param_1 + 0x730);
  puVar7[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x748);
  puVar7 = (undefined8 *)(lVar5 + 0x40 + lVar8);
  *puVar7 = *(undefined8 *)(param_1 + 0x740);
  puVar7[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x758);
  puVar7 = (undefined8 *)(lVar5 + 0x50 + lVar8);
  *puVar7 = *(undefined8 *)(param_1 + 0x750);
  puVar7[1] = uVar3;
  *(undefined8 *)(lVar5 + 0x60 + lVar8) = *(undefined8 *)(param_1 + 0x760);
  return;
}



// FUNCTION 1412674f0 FUN_1412674f0 body=347 status=ok
// SIG undefined FUN_1412674f0(void)

void FUN_1412674f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  FUN_142330a70();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_1 + 400);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x698);
  if (lVar6 != 0) {
    lVar5 = FUN_1430e3810();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_141267557;
  }
  lVar6 = 0;
LAB_141267557:
  *(longlong *)(param_1 + 0x2c0) = lVar6;
  if (lVar6 != 0) {
    iVar2 = *(int *)(param_1 + 0x208);
    plVar3 = *(longlong **)(param_1 + 0x200);
    if (plVar3 != plVar3 + (longlong)iVar2 * 10) {
      plVar7 = plVar3 + 7;
      do {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x2c0) + 0x288);
        plVar1 = plVar8 + *(int *)(*(longlong *)(param_1 + 0x2c0) + 0x290);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          lVar6 = *plVar8;
          lVar5 = FUN_1409655a0(lVar6);
          if (*(longlong *)(lVar5 + 8) == plVar7[-6]) {
            if (lVar6 == 0) {
LAB_141267610:
              lVar6 = 0;
            }
            else {
              lVar5 = FUN_1430e3550();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_141267610;
            }
            *plVar7 = lVar6;
          }
        }
        plVar1 = plVar7 + 3;
        plVar7 = plVar7 + 10;
      } while (plVar1 != plVar3 + (longlong)iVar2 * 10);
    }
  }
  return;
}



// FUNCTION 141267650 FUN_141267650 body=867 status=ok
// SIG undefined FUN_141267650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141267650(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_2c8 [32];
  undefined4 *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 local_27c;
  undefined2 local_27b;
  undefined1 local_279;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  FUN_1430cf130();
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    lVar5 = AUGSpawnProxyManager::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar2 = *(longlong **)(param_1 + 0x1b8);
      if (plVar2 != (longlong *)0x0) {
        lVar5 = FUN_14148cad0();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(longlong *)(lVar1 + 0x3a8) != 0) {
            uVar6 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
            lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
            if ((lVar5 != 0) && (iVar4 = FUN_14233f450(param_1), iVar4 == 3)) {
              local_260 = 0;
              local_248 = 1;
              local_258 = 0xffffffff;
              uStack_250 = 0xffffffff;
              local_244 = 0;
              local_240 = 0;
              uStack_238 = 0;
              local_230 = 0;
              FWeakObjectPtr::operator=(&local_258,plVar2);
              local_260 = *(undefined8 *)(lVar1 + 0x3a8);
              local_248 = 1;
              FUN_142dc49a0(lVar5,&local_288,&local_260);
            }
          }
          if (*(longlong *)(lVar1 + 0x398) != 0) {
            local_2a8 = (undefined4 *)CONCAT71(local_2a8._1_7_,1);
            FUN_141236610(plVar2,*(longlong *)(lVar1 + 0x398),0x3f800000,0);
          }
          if (*(longlong *)(lVar1 + 0x3a0) != 0) {
            local_2a8 = (undefined4 *)CONCAT71(local_2a8._1_7_,1);
            FUN_141236610(plVar2,*(longlong *)(lVar1 + 0x3a0),0x3f800000,1);
          }
          FUN_1412367a0(plVar2,1);
        }
      }
      if (*(longlong *)(lVar1 + 0x3b0) != 0) {
        lVar7 = UCelLightData::GetPrivateStaticClass();
        for (lVar5 = *(longlong *)(lVar1 + 0x3b0); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30))
        {
          if (lVar5 == lVar7) {
            if (*(longlong *)(lVar1 + 0x3b0) != 0) {
              local_27b = 0;
              local_279 = 0;
              local_288 = 0xbf800000;
              local_284 = 0xbf800000;
              local_280 = 0xbf800000;
              local_27c = 0;
              local_278 = 0x3f800000;
              local_274 = 0x3f800000;
              local_270 = 0x3f800000;
              uVar6 = FUN_142d0a300(local_228);
              local_2a8 = &local_288;
              local_298 = 0;
              local_2a0 = 0;
              FUN_140a86fb0(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(lVar1 + 0x3b0),0,uVar6)
              ;
              FUN_1409c53c0(local_228);
              if ((*(longlong *)(param_1 + 0x120) != 0) ||
                 (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)) {
                lVar5 = *(longlong *)(param_1 + 0x120);
                if (lVar5 == 0) {
                  lVar5 = FUN_1423407b0(param_1);
                }
                *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(lVar5 + 0x790);
              }
            }
            break;
          }
        }
      }
      if (((*(longlong *)(param_1 + 0x1b8) != 0) &&
          (local_268 = 0, *(longlong *)(lVar1 + 0x3c0) != 0)) && (*(longlong *)(lVar1 + 0x3c8) != 0)
         ) {
        lVar7 = UCelLightData::GetPrivateStaticClass();
        for (lVar5 = *(longlong *)(lVar1 + 0x3c8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30))
        {
          if (lVar5 == lVar7) {
            if (*(longlong *)(lVar1 + 0x3c8) == 0) {
              return;
            }
            FUN_1412594a0(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(lVar1 + 0x3c0),3);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412679c0 FUN_1412679c0 body=425 status=ok
// SIG undefined FUN_1412679c0(void)

ulonglong FUN_1412679c0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 local_18;
  longlong *local_10;
  
  uVar6 = FUN_1430cf160();
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x218) = 0xbf800000;
  if (lVar2 != 0) {
    lVar7 = AUGSpawnProxyManager::GetPrivateStaticClass();
    iVar5 = *(int *)(lVar7 + 0x90);
    uVar6 = (longlong)iVar5;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar5) ||
       (uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar5 * 8) != lVar7 + 0x88)) {
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((char)uVar6 != '\0') {
      plVar3 = *(longlong **)(param_1 + 0x1b8);
      if (plVar3 != (longlong *)0x0) {
        lVar7 = FUN_14148cad0();
        iVar5 = *(int *)(lVar7 + 0x90);
        uVar6 = (longlong)iVar5;
        if ((*(int *)(plVar3[2] + 0x90) < iVar5) ||
           (uVar6 = *(ulonglong *)(plVar3[2] + 0x88),
           *(longlong *)(uVar6 + (longlong)iVar5 * 8) != lVar7 + 0x88)) {
          uVar6 = uVar6 & 0xffffffffffffff00;
        }
        else {
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        }
        if ((char)uVar6 != '\0') {
          if ((*(longlong *)(lVar2 + 0x3a8) != 0) && (iVar5 = FUN_14233f450(param_1), iVar5 == 3)) {
            uVar8 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
            lVar7 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar8);
            if (lVar7 != 0) {
              local_18 = *(undefined8 *)(lVar2 + 0x3a8);
              local_10 = plVar3;
              FUN_142dd9790(lVar7,&local_18);
            }
          }
          if (*(longlong *)(lVar2 + 0x3a0) != 0) {
            FUN_141241eb0(plVar3,*(longlong *)(lVar2 + 0x3a0),1);
          }
          uVar6 = FUN_141241e90(plVar3,1);
        }
      }
      if (*(longlong *)(param_1 + 0x1b8) != 0) {
        uVar6 = 0;
        if ((*(longlong *)(lVar2 + 0x3c0) != 0) && (uVar6 = 0, *(longlong *)(lVar2 + 0x3c8) != 0)) {
          uVar6 = UCelLightData::GetPrivateStaticClass();
          uVar4 = *(ulonglong *)(lVar2 + 0x3c8);
          uVar9 = uVar4;
          if (uVar4 != 0) {
            while (uVar9 != uVar6) {
              puVar1 = (ulonglong *)(uVar9 + 0x30);
              uVar9 = *puVar1;
              if (*puVar1 == 0) {
                return uVar6;
              }
            }
            if (uVar4 != 0) {
              uVar6 = FUN_1412594a0(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(lVar2 + 0x3c0),
                                    0);
            }
          }
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 141267b70 FUN_141267b70 body=341 status=ok
// SIG undefined FUN_141267b70(void)

void FUN_141267b70(undefined8 param_1,undefined8 param_2,byte *param_3,undefined1 param_4)

{
  undefined8 local_a8;
  byte local_a0 [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_a0,0,0x90);
  local_94 = *(undefined4 *)(param_3 + 0xc);
  local_90 = *(undefined4 *)(param_3 + 0x10);
  local_a0[0] = local_a0[0] ^ (*param_3 ^ local_a0[0]) & 3;
  local_9c = *(undefined4 *)(param_3 + 4);
  local_8c = *(undefined8 *)(param_3 + 0x14);
  local_98 = local_98 ^ (*(uint *)(param_3 + 8) ^ local_98) & 1;
  local_84 = *(undefined4 *)(param_3 + 0x1c);
  local_78 = *(undefined4 *)(param_3 + 0x28);
  local_6c = *(undefined4 *)(param_3 + 0x34);
  local_60 = *(undefined4 *)(param_3 + 0x40);
  local_54 = *(undefined4 *)(param_3 + 0x4c);
  local_48 = *(undefined4 *)(param_3 + 0x58);
  local_40 = *(undefined4 *)(param_3 + 0x60);
  local_3c = *(undefined4 *)(param_3 + 100);
  local_38 = *(undefined4 *)(param_3 + 0x68);
  local_80 = *(undefined8 *)(param_3 + 0x20);
  local_34 = *(undefined4 *)(param_3 + 0x6c);
  local_74 = *(undefined8 *)(param_3 + 0x2c);
  local_30 = *(undefined4 *)(param_3 + 0x70);
  local_68 = *(undefined8 *)(param_3 + 0x38);
  local_2c = *(undefined4 *)(param_3 + 0x74);
  local_5c = *(undefined8 *)(param_3 + 0x44);
  local_28 = *(undefined4 *)(param_3 + 0x78);
  local_20 = *(undefined8 *)(param_3 + 0x80);
  local_50 = *(undefined8 *)(param_3 + 0x50);
  local_18 = *(undefined8 *)(param_3 + 0x88);
  local_44 = *(undefined4 *)(param_3 + 0x5c);
  local_a8 = param_2;
  local_10 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_a8);
  return;
}



// FUNCTION 141267cd0 FUN_141267cd0 body=1262 status=ok
// SIG undefined FUN_141267cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141267cd0(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_148;
  int local_140;
  undefined4 local_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar5 = param_1[0x23];
  local_148 = param_1;
  if (lVar5 == 0) {
LAB_14126819e:
    FUN_142fe81f0(param_1);
    return;
  }
  lVar3 = FUN_14148cad0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (*(char *)(lVar5 + 0x128) == '\x03')) goto LAB_14126819e;
  plVar8 = *(longlong **)(lVar5 + 0x540);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  plVar6 = plVar8 + *(int *)(lVar5 + 0x548);
  if (plVar8 != plVar6) {
    do {
      lVar5 = *plVar8;
      if (lVar5 != 0) {
        plVar11 = *(longlong **)(lVar5 + 0x208);
        plVar10 = plVar11 + *(int *)(lVar5 + 0x210);
        for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
          lVar5 = *plVar11;
          if (lVar5 != 0) {
            lVar3 = FUN_141495ba0();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              puVar4 = (undefined8 *)FUN_141223d20(lVar5,&local_128);
              iVar12 = *(int *)(puVar4 + 1);
              if (iVar12 != 0) {
                if (local_40._4_4_ < (int)local_40 + iVar12) {
                  TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::
                  ResizeTo(local_108);
                }
                plVar7 = local_108;
                if (local_48 != (longlong *)0x0) {
                  plVar7 = local_48;
                }
                _guard_xfg_dispatch_icall_nop
                          (plVar7 + (longlong)(int)local_40 * 3,(void *)*puVar4,
                           (longlong)iVar12 * 0x18);
                *(undefined4 *)(puVar4 + 1) = 0;
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 + iVar12);
              }
              if (local_120 != 0) {
                plVar7 = (longlong *)(local_128 + 8);
                iVar12 = local_120;
                do {
                  if (*plVar7 != 0) {
                    FMemory::Free();
                  }
                  plVar7 = plVar7 + 3;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              if (local_128 != 0) {
                FMemory::Free();
              }
            }
          }
        }
      }
      param_1 = local_148;
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar6);
    if (0 < (int)local_40) {
      local_130 = 0x16;
      local_138 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      FGenericPlatformString::Memcpy(local_138,L"RequestSyncLoad Array",0x2c);
      plVar6 = local_48;
      iVar12 = (int)local_40;
      local_148 = (longlong *)0x0;
      local_140 = (int)local_40;
      if ((int)local_40 == 0) {
        local_13c = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_148,local_40 & 0xffffffff,0);
        plVar8 = local_108;
        plVar10 = local_148;
        if (plVar6 != (longlong *)0x0) {
          plVar8 = plVar6;
        }
        do {
          *plVar10 = *plVar8;
          FString::FString(plVar10 + 1,plVar8 + 1);
          iVar12 = iVar12 + -1;
          plVar8 = plVar8 + 3;
          plVar10 = plVar10 + 3;
        } while (iVar12 != 0);
      }
      lVar5 = FUN_1422ca050();
      local_158 = &local_138;
      plVar6 = (longlong *)FStreamableManager::RequestSyncLoad(lVar5 + 0x178,local_118,&local_148,1)
      ;
      if (param_1 + 0x7f != plVar6) {
        param_1[0x7f] = *plVar6;
        *plVar6 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,plVar6 + 1);
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_110 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      if (local_140 != 0) {
        plVar6 = local_148 + 1;
        iVar12 = local_140;
        do {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 3;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      if (local_148 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
    }
  }
  uVar14 = 0;
  uVar9 = param_1[0x23];
  if (uVar9 != 0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141268083;
  }
  uVar9 = uVar14;
LAB_141268083:
  plVar8 = *(longlong **)(uVar9 + 0x540);
  plVar6 = plVar8 + *(int *)(uVar9 + 0x548);
  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
    lVar5 = *plVar8;
    if (lVar5 != 0) {
      plVar10 = *(longlong **)(lVar5 + 0x208);
      uVar9 = (longlong)*(int *)(lVar5 + 0x210) & 0x1fffffffffffffff;
      if (plVar10 + *(int *)(lVar5 + 0x210) < plVar10) {
        uVar9 = uVar14;
      }
      uVar13 = uVar14;
      if (uVar9 != 0) {
        do {
          plVar11 = (longlong *)*plVar10;
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x2a0))(plVar11,param_1);
          }
          plVar10 = plVar10 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar9);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  (**(code **)(*param_1 + 0x498))(param_1);
  *(undefined1 *)(param_1 + 0x34) = 0;
  FUN_142ff0cb0(param_1);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x7fffffff;
  plVar6 = local_108;
  if (local_48 != (longlong *)0x0) {
    plVar6 = local_48;
  }
  if ((int)local_40 != 0) {
    plVar6 = plVar6 + 1;
    iVar12 = (int)local_40;
    do {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (local_48 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1412681c0 FUN_1412681c0 body=593 status=ok
// SIG undefined FUN_1412681c0(void)

void FUN_1412681c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined2 *puVar6;
  int *piVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1417510e0();
    puVar13 = *(undefined8 **)(param_1 + 0x18);
    puVar11 = puVar13 + (longlong)*(int *)(param_1 + 0x20) * 2;
    if (puVar13 != puVar11) {
LAB_141268230:
      iVar10 = 0;
      lVar4 = *(longlong *)(param_1 + 8);
      if (0 < *(int *)(lVar4 + 0x40)) {
        lVar15 = 0;
        do {
          if (*(int *)(puVar13 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar13;
          }
          if (*(int *)(*(longlong *)(lVar4 + 0x38) + 0x10 + lVar15) == 0) {
            puVar6 = &DAT_143f3eda8;
          }
          else {
            puVar6 = *(undefined2 **)(*(longlong *)(lVar4 + 0x38) + 8 + lVar15);
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
          if (iVar3 == 0) {
            piVar14 = (int *)*plVar1;
            iVar3 = *(int *)(param_1 + 0x40);
            piVar7 = piVar14;
            goto joined_r0x00014126829e;
          }
          lVar4 = *(longlong *)(param_1 + 8);
          iVar10 = iVar10 + 1;
          lVar15 = lVar15 + 0x30;
        } while (iVar10 < *(int *)(lVar4 + 0x40));
      }
      goto LAB_1412682d6;
    }
LAB_1412682e8:
    plVar12 = *(longlong **)(param_1 + 0x28);
    plVar18 = plVar12 + *(int *)(param_1 + 0x30);
    for (; plVar12 != plVar18; plVar12 = plVar12 + 1) {
      uVar16 = 0;
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x48);
      plVar2 = plVar9 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50) * 5;
      if (plVar9 != plVar2) {
        do {
          if (*plVar9 == *plVar12) {
            piVar14 = (int *)plVar9[3];
            uVar17 = (longlong)(int)plVar9[4] & 0x3fffffffffffffff;
            if (piVar14 + (int)plVar9[4] < piVar14) {
              uVar17 = uVar16;
            }
            if (uVar17 != 0) {
              do {
                piVar7 = (int *)*plVar1;
                iVar10 = *(int *)(param_1 + 0x40);
                iVar3 = *piVar14;
                for (piVar5 = piVar7; piVar5 != piVar7 + iVar10; piVar5 = piVar5 + 1) {
                  if (*piVar5 == iVar3) {
                    if ((int)((longlong)piVar5 - (longlong)piVar7 >> 2) != -1) goto LAB_1412683cb;
                    break;
                  }
                }
                *(int *)(param_1 + 0x40) = iVar10 + 1;
                if (*(int *)(param_1 + 0x44) < iVar10 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
                }
                *(int *)((longlong)iVar10 * 4 + *plVar1) = iVar3;
LAB_1412683cb:
                piVar14 = piVar14 + 1;
                uVar16 = uVar16 + 1;
              } while (uVar16 != uVar17);
            }
            break;
          }
          plVar9 = plVar9 + 5;
        } while (plVar9 != plVar2);
      }
    }
  }
  return;
joined_r0x00014126829e:
  if (piVar7 == piVar14 + iVar3) goto LAB_1412682bb;
  if (*piVar7 == iVar10) {
    if ((int)((longlong)piVar7 - (longlong)piVar14 >> 2) != -1) goto LAB_1412682d6;
    goto LAB_1412682bb;
  }
  piVar7 = piVar7 + 1;
  goto joined_r0x00014126829e;
LAB_1412682bb:
  *(int *)(param_1 + 0x40) = iVar3 + 1;
  if (*(int *)(param_1 + 0x44) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  *(int *)((longlong)iVar3 * 4 + *plVar1) = iVar10;
LAB_1412682d6:
  puVar13 = puVar13 + 2;
  if (puVar13 == puVar11) goto LAB_1412682e8;
  goto LAB_141268230;
}



// FUNCTION 141268420 FUN_141268420 body=133 status=ok
// SIG undefined FUN_141268420(void)

void FUN_141268420(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x7a2) == '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x128);
    if (lVar1 != 0) {
      local_10 = *(undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x7a2) = 1;
      local_18 = param_1;
      uVar2 = FUN_14125e810(&local_18,lVar1 + 0x30);
      *(undefined8 *)(param_1 + 0x7a8) = uVar2;
      uVar2 = FUN_14125e810(&local_18,lVar1 + 0x40);
      *(undefined8 *)(param_1 + 0x7b0) = uVar2;
    }
  }
  return;
}



// FUNCTION 1412684b0 FUN_1412684b0 body=503 status=ok
// SIG undefined FUN_1412684b0(void)

void FUN_1412684b0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong local_38;
  undefined8 local_30;
  
  if (*(char *)(param_1 + 0x7a2) == '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar3 = *(longlong *)(DAT_146b33f38 + 0x128);
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x968) == 0) {
        if ((*(char *)(param_1 + 0x7a2) == '\0') && (lVar3 != 0)) {
          local_30 = *(undefined8 *)(param_1 + 0x10);
          *(undefined1 *)(param_1 + 0x7a2) = 1;
          local_38 = param_1;
          uVar2 = FUN_14125e810(&local_38,lVar3 + 0x30);
          *(undefined8 *)(param_1 + 0x7a8) = uVar2;
          uVar2 = FUN_14125e810(&local_38,lVar3 + 0x40);
          *(undefined8 *)(param_1 + 0x7b0) = uVar2;
          return;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x7a8) = 0;
        *(undefined8 *)(param_1 + 0x7b0) = 0;
        *(undefined1 *)(param_1 + 0x7a2) = 1;
        puVar5 = *(undefined8 **)(lVar3 + 0x50);
        puVar7 = puVar5 + (longlong)*(int *)(lVar3 + 0x58) * 8;
        if (puVar5 != puVar7) {
          piVar6 = (int *)(puVar5 + 4);
          do {
            lVar3 = FWeakObjectPtr::Get(piVar6 + -2);
            if (lVar3 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != *piVar6) && (*(longlong *)(piVar6 + 2) != 0)) {
                lVar3 = FUN_141796df0();
                FWeakObjectPtr::operator=(piVar6 + -2,lVar3);
                if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *piVar6 = DAT_1464b56f4;
                }
                lVar3 = FWeakObjectPtr::Get(piVar6 + -2);
                if (lVar3 != 0) goto LAB_141268623;
              }
LAB_141268659:
              lVar3 = 0;
            }
            else {
LAB_141268623:
              lVar4 = FUN_14149a370();
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) goto LAB_141268659;
            }
            if (*(longlong *)(param_1 + 0x968) == lVar3) {
              *(undefined8 *)(param_1 + 0x7a8) = *puVar5;
              return;
            }
            puVar5 = puVar5 + 8;
            piVar6 = piVar6 + 0x10;
          } while (puVar5 != puVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412686c0 FUN_1412686c0 body=48 status=ok
// SIG undefined FUN_1412686c0(void)

void FUN_1412686c0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1);
    FUN_1412688f0(uVar1,*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 141268730 FUN_141268730 body=12 status=ok
// SIG undefined FUN_141268730(void)

uint FUN_141268730(longlong param_1)

{
  return *(uint *)(param_1 + 0x544) >> 3 & 0xffffff01;
}



// FUNCTION 141268750 FUN_141268750 body=270 status=ok
// SIG undefined FUN_141268750(void)

undefined1 FUN_141268750(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  cVar1 = FUN_14303f940();
  if (cVar1 == '\0') {
    return 0;
  }
  if ((((*param_4 == '\0') && (param_2 != 0)) && ((*(byte *)(param_2 + 0x91) & 0x40) != 0)) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x488) + 0x330) & 2) != 0 &&
      (lVar3 = FUN_14304abb0(param_1), lVar3 != 0)))) {
    plVar4 = (longlong *)FUN_14304abb0(param_1);
    cVar1 = (**(code **)(*plVar4 + 0x278))(plVar4);
    if (cVar1 != '\0') {
      lVar3 = FUN_14130d4b0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        lVar3 = FUN_1413c2e10();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          return 1;
        }
      }
      *param_4 = '\x01';
    }
  }
  return 1;
}



// FUNCTION 141268880 FUN_141268880 body=78 status=ok
// SIG undefined FUN_141268880(void)

bool FUN_141268880(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e83500(param_1 + 0x228);
  if ((plVar2 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x7c8))(plVar2), cVar1 == '\0')
     ) {
    return false;
  }
  cVar1 = FUN_140e71290(param_1 + 0x228,param_3);
  return cVar1 == '\0';
}



// FUNCTION 1412688d0 FUN_1412688d0 body=26 status=ok
// SIG undefined FUN_1412688d0(void)

bool FUN_1412688d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140e71290(param_1 + 0x228);
  return cVar1 == '\0';
}



// FUNCTION 1412688f0 FUN_1412688f0 body=389 status=ok
// SIG undefined FUN_1412688f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412688f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  longlong local_e8 [24];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  if (param_2 == 4) {
    FUN_140725150(*(undefined8 *)(param_1 + 0x6d8),local_e8,0);
    plVar5 = *(longlong **)(param_1 + 0x240);
    plVar1 = plVar5 + *(int *)(param_1 + 0x248);
    plVar6 = local_28;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar4 = local_e8;
      if (plVar6 != (longlong *)0x0) {
        plVar4 = plVar6;
      }
      plVar2 = plVar4 + (int)local_20;
      if (plVar4 != plVar2) {
        do {
          plVar3 = (longlong *)*plVar4;
          if (plVar3[3] == *plVar5) {
            (**(code **)(*plVar3 + 0x638))(plVar3,1);
            plVar6 = local_28;
            break;
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
      }
    }
  }
  else {
    FUN_140725150(*(undefined8 *)(param_1 + 0x6d8),local_e8,0);
    plVar5 = *(longlong **)(param_1 + 0x240);
    plVar1 = plVar5 + *(int *)(param_1 + 0x248);
    plVar6 = local_28;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar4 = local_e8;
      if (plVar6 != (longlong *)0x0) {
        plVar4 = plVar6;
      }
      plVar2 = plVar4 + (int)local_20;
      if (plVar4 != plVar2) {
        do {
          plVar3 = (longlong *)*plVar4;
          if (plVar3[3] == *plVar5) {
            (**(code **)(*plVar3 + 0x638))(plVar3,0);
            plVar6 = local_28;
            break;
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  return;
}



// FUNCTION 141268a80 FUN_141268a80 body=889 status=ok
// SIG undefined FUN_141268a80(void)

void FUN_141268a80(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  
  plVar13 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    FWeakObjectPtr::operator=(local_48,0);
    local_40 = 0;
    puVar6 = (undefined8 *)FName::FName(local_res8,L"WeaponPutDown",1);
    FWeakObjectPtr::operator=(local_48,param_1);
    local_40 = *puVar6;
    local_30 = (longlong *)local_40;
    FUN_143094030(param_2,&local_38);
    iVar5 = FUN_14233f450(param_1);
    if (iVar5 == 3) {
      (**(code **)(*param_2 + 0x310))(param_2,0);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x7e0);
  plVar8 = plVar13;
  if (lVar9 != 0) {
    uVar7 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar7);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 0x7e0);
      uVar7 = FUN_1430255d0();
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar7);
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  plVar12 = (longlong *)0xff;
  if (param_3 == (longlong *)0x0) {
    lVar9 = FUN_141270ed0(param_1);
    if ((lVar9 != 0) && (plVar8 != (longlong *)0x0)) {
      FUN_142fea760(plVar8,lVar9);
    }
  }
  else {
    bVar2 = FUN_140e7ef80(param_1 + 0x228,param_3);
    plVar12 = (longlong *)(ulonglong)bVar2;
    if (bVar2 == 0xff) {
      plVar12 = plVar13;
    }
    FWeakObjectPtr::operator=(local_48,0);
    local_40 = 0;
    puVar6 = (undefined8 *)FName::FName(local_res8,L"WeaponPutDown",1);
    FWeakObjectPtr::operator=(local_48,param_1);
    local_40 = *puVar6;
    local_30 = (longlong *)local_40;
    FUN_1430886d0(param_3,&local_38);
    (**(code **)(*param_3 + 2000))
              (param_3,*(undefined8 *)(param_1 + 0x7e0),plVar12,(char)param_3[0xc4]);
    uVar3 = UEnemyUnit::GetRoutineManager(param_1 + 0x228);
    FUN_14308b9e0(param_3,uVar3);
    iVar5 = FUN_14233f450(param_1);
    if (iVar5 == 3) {
      lVar9 = *param_3;
      uVar3 = FUN_140e86100(param_1 + 0x228,plVar12);
      (**(code **)(lVar9 + 0x310))(param_3,uVar3);
    }
    cVar4 = UUMGSequencePlayer::GetPlaybackContext(param_1 + 0x228);
    if (cVar4 != '\0') {
      FUN_14308b750(param_3,0);
    }
    lVar9 = FUN_141270ed0(param_1);
    if (((lVar9 != 0) && (plVar8 != (longlong *)0x0)) &&
       ((lVar10 = FUN_142ffa540(plVar8,lVar9), lVar10 == 0 ||
        (piVar11 = (int *)FUN_142ffe3d0(plVar8,local_res8,lVar10), *piVar11 == -1)))) {
      FUN_1430160e0(plVar8,lVar9,param_3);
    }
  }
  if ((*(longlong *)(param_1 + 0x7e0) != 0) &&
     (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x7e0) + 0x490), lVar9 != 0)) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140d19650(lVar9,param_3);
    }
  }
  local_38 = param_3;
  local_30 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1c8,&local_38);
  if (param_3 != (longlong *)0x0) {
    if ((*(longlong **)(param_1 + 0x7e0) == (longlong *)0x0) ||
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar4 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar4 = FUN_140e83450(param_1 + 0x228,plVar12);
      if ((cVar4 != '\0') && (cVar4 = FUN_140e969b0(param_1 + 0x228,plVar12), cVar4 == '\0')) {
        plVar8 = plVar13;
        if (*(int *)(param_1 + 0x180) != 0) {
          plVar8 = *(longlong **)(param_1 + 0x178);
        }
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar12,0);
      }
      if ((*(char *)(param_1 + 0x7f0) != '\0') && ((char)plVar12 == '\0')) {
        if (*(int *)(param_1 + 0x1b0) != 0) {
          plVar13 = *(longlong **)(param_1 + 0x1a8);
        }
        (**(code **)(*plVar13 + 0x38))(plVar13);
      }
    }
  }
  return;
}



// FUNCTION 141268e00 FUN_141268e00 body=865 status=ok
// SIG undefined FUN_141268e00(void)

void FUN_141268e00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_58 [64];
  
  if ((*(longlong *)(param_1 + 0x288) != 0) && (*(longlong *)(param_1 + 0x290) != 0)) {
    lVar1 = param_1 + 800;
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x3a8)) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x3a0);
        if (*(longlong *)(param_1 + 0x3a0) == 0) {
          lVar6 = lVar1;
        }
        lVar6 = lVar6 + (longlong)iVar7 * 8;
        cVar3 = FWeakObjectPtr::IsValid(lVar6);
        if ((cVar3 == '\0') ||
           (lVar6 = FWeakObjectPtr::Get(lVar6),
           *(longlong *)(lVar6 + 0x300) != *(longlong *)(param_1 + 0x288))) {
          iVar2 = *(int *)(param_1 + 0x3a8);
          iVar5 = (iVar2 - iVar7) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x3a0);
            if (*(longlong *)(param_1 + 0x3a0) == 0) {
              lVar6 = lVar1;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar6 + (longlong)iVar7 * 8),
                       (void *)(lVar6 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
            iVar2 = *(int *)(param_1 + 0x3a8);
          }
          *(int *)(param_1 + 0x3a8) = iVar2 + -1;
          TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink(lVar1);
        }
        else {
          iVar7 = iVar7 + 1;
        }
      } while (iVar7 < *(int *)(param_1 + 0x3a8));
    }
    cVar3 = FUN_14122a6f0(*(undefined8 *)(param_1 + 0x288));
    if ((((*(char *)(param_1 + 0x2d0) != '\0') || (*(char *)(param_1 + 0x2d1) != '\0')) ||
        (*(char *)(param_1 + 0x2d2) != '\0')) ||
       ((*(char *)(param_1 + 0x2d3) != '\0' || (cVar3 != *(char *)(param_1 + 0x2e8))))) {
      lVar6 = *(longlong *)(param_1 + 0x3a0);
      if (*(longlong *)(param_1 + 0x3a0) == 0) {
        lVar6 = lVar1;
      }
      lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0x3a8) * 8;
      for (; lVar6 != lVar1; lVar6 = lVar6 + 8) {
        if ((*(char *)(param_1 + 0x2d0) != '\0') &&
           (*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x3b0) != 0)) {
          uVar4 = FWeakObjectPtr::Get(lVar6);
          FUN_1405a3150(uVar4,local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x3b0),0);
          FUN_140591060(local_58);
        }
        if ((*(char *)(param_1 + 0x2d1) != '\0') &&
           (*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x3b8) != 0)) {
          uVar4 = FWeakObjectPtr::Get(lVar6);
          FUN_1405a3150(uVar4,local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x3b8),0);
          FUN_140591060(local_58);
        }
        if ((*(char *)(param_1 + 0x2d2) != '\0') &&
           (*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x3c0) != 0)) {
          uVar4 = FWeakObjectPtr::Get(lVar6);
          FUN_1405a3150(uVar4,local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x3c0),0);
          FUN_140591060(local_58);
        }
        if ((*(char *)(param_1 + 0x2d3) != '\0') &&
           (*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x3c8) != 0)) {
          uVar4 = FWeakObjectPtr::Get(lVar6);
          FUN_1405a3150(uVar4,local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x3c8),0);
          FUN_140591060(local_58);
        }
        if ((cVar3 != *(char *)(param_1 + 0x2e8)) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x318) != 0)) {
          if (cVar3 == '\0') {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          uVar4 = FWeakObjectPtr::Get(lVar6);
          FUN_1405aaad0(uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x318),uVar8,0,4);
        }
      }
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      *(char *)(param_1 + 0x2e8) = cVar3;
    }
  }
  return;
}



// FUNCTION 141269170 FUN_141269170 body=169 status=ok
// SIG undefined FUN_141269170(void)

void FUN_141269170(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  FUN_14303fb80();
  if (*(longlong *)(param_1 + 0x620) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakLightBeam::OnModifierParticleSystemFinished",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x620) + 0x8a8,param_1,local_res8);
    FUN_142600fa0(*(undefined8 *)(param_1 + 0x620));
    *(undefined8 *)(param_1 + 0x620) = 0;
  }
  return;
}



// FUNCTION 141269220 FUN_141269220 body=337 status=ok
// SIG undefined FUN_141269220(void)

longlong * FUN_141269220(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_18 [2];
  
  FString::FString();
  while( true ) {
    iVar2 = (int)param_1[1];
    iVar1 = iVar2 + -1;
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = -1;
      iVar3 = 0;
    }
    if (iVar3 < 1) break;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar1 = iswdigit(*(wint_t *)(*param_1 + -2 + (longlong)iVar1 * 2));
    if (iVar1 == 0) break;
    iVar2 = (int)param_1[1];
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar3 = (iVar2 - (iVar1 + -1)) + -1;
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)(iVar1 + -1) * 2),
                 (void *)(*param_1 + (longlong)iVar1 * 2),(longlong)iVar3 * 2);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 + -1;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
  }
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_14472058c,4);
  FString::RemoveFromEnd(param_1,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_14472c314,6);
  FString::RemoveFromEnd(param_1,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141269380 FUN_141269380 body=260 status=ok
// SIG undefined FUN_141269380(void)

void FUN_141269380(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_38 = (**(code **)(*param_2 + 0x148))(param_2);
  local_30 = &local_38;
  local_28 = FUN_14073d6c0(&local_38,DAT_146877090);
  puVar2 = local_30;
  local_20 = &local_38;
  local_18 = 0;
  puVar3 = (undefined8 *)FUN_14073d6c0(local_30,local_28);
  puVar4 = (undefined8 *)FUN_14073d6c0(local_20,local_18);
  for (; puVar3 != puVar4; puVar3 = (undefined8 *)FUN_14073d6c0(puVar2,*puVar3)) {
    FUN_14123cb40(puVar3[2],param_2);
  }
  lVar5 = FUN_1413f82e0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_140c58a40(param_2,0);
  }
  return;
}



// FUNCTION 141269490 FUN_141269490 body=140 status=ok
// SIG undefined FUN_141269490(void)

void FUN_141269490(longlong param_1,undefined8 param_2,uint param_3,char param_4,undefined1 param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    uVar3 = 0;
    do {
      if ((param_3 >> (uVar3 & 0x1f) & 1) != 0) {
        FUN_140e864a0(param_1 + 0x228,uVar3,param_2);
      }
      bVar2 = (char)uVar3 + 1;
      uVar3 = (uint)bVar2;
    } while (bVar2 < 4);
    if (param_4 != '\0') {
      FUN_141280740(param_1,param_3,param_5,0);
    }
  }
  return;
}



// FUNCTION 141269520 FUN_141269520 body=88 status=ok
// SIG undefined FUN_141269520(void)

void FUN_141269520(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    FUN_141280f90(param_1,param_2,param_3,param_4,0);
  }
  return;
}



// FUNCTION 141269580 FUN_141269580 body=67 status=ok
// SIG undefined FUN_141269580(void)

void FUN_141269580(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    FUN_141283c10(param_1,param_2,param_3,0);
  }
  return;
}



// FUNCTION 1412695e0 FUN_1412695e0 body=145 status=ok
// SIG undefined FUN_1412695e0(void)

void FUN_1412695e0(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (lVar2 = FUN_14307d810(param_1,param_3), lVar2 != 0)) {
    lVar3 = AVolume::GetPrivateStaticClass();
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
      FUN_14058f880(local_res10,param_2 + 0x378);
      FUN_1409ff840(lVar2,local_res10);
      if (local_res10[0] != 0) {
        FUN_1405a53f0();
      }
    }
  }
  return;
}



// FUNCTION 1412696b0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144740750;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144740798;
  }
  return;
}



// FUNCTION 141269700 FUN_141269700 body=66 status=ok
// SIG undefined FUN_141269700(void)

void FUN_141269700(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1447406c0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_144740708;
  }
  return;
}



// FUNCTION 141269750 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144740630;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144740678;
  }
  return;
}



// FUNCTION 1412697a0 FUN_1412697a0 body=124 status=ok
// SIG undefined FUN_1412697a0(void)

void FUN_1412697a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144740558;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 141269820 FUN_141269820 body=68 status=ok
// SIG undefined FUN_141269820(void)

void FUN_141269820(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144740518;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 141269870 FUN_141269870 body=92 status=ok
// SIG undefined FUN_141269870(void)

void FUN_141269870(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1447405a0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1447405e8;
  }
  return;
}



// FUNCTION 1412698d0 FUN_1412698d0 body=168 status=ok
// SIG undefined FUN_1412698d0(void)

undefined8 * FUN_1412698d0(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = operator_new(0x158);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140b4be10(lVar1);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  *param_2 = uVar2;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,uVar2,uVar2);
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x3c8))(param_1,*param_2);
  }
  return param_2;
}



// FUNCTION 141269980 FUN_141269980 body=102 status=ok
// SIG undefined FUN_141269980(void)

undefined8 * FUN_141269980(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_1414e1600();
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_1440104d0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *param_2 = puVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1412699f0 FUN_1412699f0 body=103 status=ok
// SIG undefined FUN_1412699f0(void)

undefined8 * FUN_1412699f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = UUGJournalKey::GetPrivateStaticClass();
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_144732cb0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    *param_2 = puVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 141269a60 thunk_FUN_1430409b0 body=5 status=ok
// SIG undefined thunk_FUN_1430409b0(void)

void thunk_FUN_1430409b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = UMapBuildDataRegistry::GetPrivateStaticClass();
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = lVar2;
    if (lVar2 != 0) {
      while (lVar3 != lVar1) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x68) != 0) {
          lVar2 = *(longlong *)(param_1 + 0x68);
        }
        FUN_143040700(lVar2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141269a70 thunk_FUN_143040df0 body=5 status=ok
// SIG undefined thunk_FUN_143040df0(void)

void thunk_FUN_143040df0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_1430aef40();
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = lVar2;
    if (lVar2 != 0) {
      while (lVar3 != lVar1) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x40);
        if (lVar2 == 0) {
          lVar2 = *(longlong *)(param_1 + 0x38);
        }
        FUN_143040a20(lVar2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141269a80 thunk_FUN_143040e50 body=5 status=ok
// SIG undefined thunk_FUN_143040e50(void)

void thunk_FUN_143040e50(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = FUN_1430aef40();
    lVar3 = *(longlong *)(param_1 + 8);
    lVar5 = lVar3;
    if (lVar3 != 0) {
      while (lVar5 != lVar2) {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        if (lVar5 == 0) {
          return;
        }
      }
      if (((lVar3 != 0) &&
          (((plVar4 = *(longlong **)(param_1 + 0x40), plVar4 != (longlong *)0x0 ||
            (plVar4 = *(longlong **)(param_1 + 0x38), plVar4 != (longlong *)0x0)) &&
           (lVar3 = (**(code **)(*plVar4 + 0x148))(), lVar3 != 0)))) &&
         ((iVar1 = FUN_1428cf800(lVar3), iVar1 != 3 && (lVar3 = FUN_14304ca20(lVar3), lVar3 != 0))))
      {
        FUN_14303b070(lVar3,param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 141269a90 FUN_141269a90 body=89 status=ok
// SIG undefined FUN_141269a90(void)

int FUN_141269a90(longlong param_1,int param_2)

{
  int local_res8;
  int local_resc;
  
  local_res8 = *(int *)(param_1 + 0x988);
  local_resc = (local_res8 + param_2) % *(int *)(param_1 + 0x980);
  if ((-1 < local_resc) && (local_resc < *(int *)(param_1 + 0x980))) {
    *(int *)(param_1 + 0x988) = local_resc;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x998,&local_res8);
    return *(int *)(param_1 + 0x988);
  }
  return local_res8;
}



// FUNCTION 141269af0 FUN_141269af0 body=324 status=ok
// SIG undefined FUN_141269af0(void)

void FUN_141269af0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_58,0);
    local_50 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponReloadStarted",1);
    FWeakObjectPtr::operator=(&local_58,param_1);
    local_50 = *puVar1;
    local_28 = local_58;
    local_24 = local_54;
    local_20 = local_50;
    FUN_143094060(param_2,&local_28,0);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponReloadEnded",1);
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = *puVar1;
    local_28 = local_48;
    local_24 = local_44;
    local_20 = local_40;
    FUN_143094060(param_2,&local_28,1);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponPutDown",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *puVar1;
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_30;
    FUN_143094030(param_2,&local_28);
  }
  return;
}



// FUNCTION 141269c40 FUN_141269c40 body=469 status=ok
// SIG undefined FUN_141269c40(void)

void FUN_141269c40(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 local_res18 [16];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != 0) {
      iVar2 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar2 = (int)param_2[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar2 * 8),*(void **)(param_1 + 0x50),
                 (longlong)iVar1 << 3);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x60);
  lVar7 = (longlong)*(int *)(param_1 + 0x68) * 0x48 + lVar10;
  if (lVar10 != lVar7) {
    piVar9 = (int *)(lVar10 + 0x30);
    do {
      if (*(longlong *)(piVar9 + -10) != 0) {
        puVar5 = *(undefined8 **)(piVar9 + -6);
        puVar11 = puVar5 + (longlong)piVar9[-4] * 2;
        for (; puVar5 != puVar11; puVar5 = puVar5 + 2) {
          local_40 = *(int *)(puVar5 + 1);
          lVar6 = (longlong)local_40;
          puVar8 = (undefined2 *)0x0;
          _Src = (void *)*puVar5;
          local_48 = (undefined2 *)0x0;
          if (local_40 == 0) {
            local_3c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
            puVar8 = local_48;
            _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar6 * 2);
          }
          puVar4 = &DAT_143f3eda8;
          if (local_40 != 0) {
            puVar4 = puVar8;
          }
          puVar3 = (undefined8 *)FName::FName(local_res18,puVar4);
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar3;
          if (puVar8 != (undefined2 *)0x0) {
            FMemory::Free(puVar8);
          }
        }
        iVar1 = *piVar9;
        if (iVar1 != 0) {
          iVar2 = (int)param_2[1];
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar1) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
            iVar2 = (int)param_2[1];
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar2 * 8),*(void **)(piVar9 + -2),
                     (longlong)iVar1 << 3);
          *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
        }
      }
      lVar10 = lVar10 + 0x48;
      piVar9 = piVar9 + 0x12;
    } while (lVar10 != lVar7);
  }
  return;
}



// FUNCTION 141269e20 FUN_141269e20 body=224 status=ok
// SIG undefined FUN_141269e20(void)

void FUN_141269e20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_30 = &local_38;
  local_38 = param_2;
  local_28 = FUN_14073d6c0(&local_38,DAT_146877090);
  puVar2 = local_30;
  local_20 = &local_38;
  local_18 = 0;
  puVar4 = (undefined8 *)FUN_14073d6c0(local_30,local_28);
  puVar5 = (undefined8 *)FUN_14073d6c0(local_20,local_18);
  for (; puVar4 != puVar5; puVar4 = (undefined8 *)FUN_14073d6c0(puVar2,*puVar4)) {
    lVar1 = puVar4[2];
    if ((((*(int *)(lVar1 + 0xec8) < 1) && (cVar3 = FUN_14122a750(lVar1,1), cVar3 == '\0')) &&
        (*(longlong *)(lVar1 + 0x8d8) != 0)) && (*(char *)(lVar1 + 0x871) != '\x03')) {
      FUN_14123ece0(lVar1,3);
    }
  }
  return;
}



// FUNCTION 141269f00 FUN_141269f00 body=410 status=ok
// SIG undefined FUN_141269f00(void)

void FUN_141269f00(longlong param_1)

{
  void *_Src;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_141256b20();
  }
  plVar7 = *(longlong **)(param_1 + 0x408);
  plVar8 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141269f6a;
  }
  plVar7 = plVar8;
LAB_141269f6a:
  FUN_140a5e6b0(param_1);
  if (plVar7 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar7 + 0x13c1) != '\0') {
      FUN_14223c460(plVar7,1);
      FUN_142cff140(param_1,0,plVar7);
    }
    if (*(char *)(param_1 + 0x6e6) != '\0') {
      lVar3 = *plVar7;
      iVar2 = FUN_14233f450(param_1);
      (**(code **)(lVar3 + 0x8e0))(plVar7,iVar2 != 3);
    }
    if (*(char *)((longlong)plVar7 + 0x13c1) == '\0') {
      (**(code **)(*plVar7 + 0x448))(plVar7,0);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x6d8);
  if (lVar3 != 0) {
    local_10 = *(int *)(lVar3 + 0xb88);
    lVar4 = (longlong)local_10;
    _Src = *(void **)(lVar3 + 0xb80);
    local_18 = (longlong *)0x0;
    plVar9 = plVar8;
    if (local_10 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
      plVar9 = local_18;
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 << 3);
    }
    plVar6 = (longlong *)((ulonglong)((longlong)(plVar9 + local_10) + (7 - (longlong)plVar9)) >> 3);
    if (plVar9 + local_10 < plVar9) {
      plVar6 = plVar8;
    }
    plVar5 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      do {
        if (*plVar5 != 0) {
          FUN_140ade3c0(*plVar5,plVar7);
        }
        plVar5 = plVar5 + 1;
        plVar8 = (longlong *)((longlong)plVar8 + 1);
      } while (plVar8 != plVar6);
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  return;
}



// FUNCTION 14126a0a0 FUN_14126a0a0 body=269 status=ok
// SIG undefined FUN_14126a0a0(void)

void FUN_14126a0a0(longlong *param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  
  if (param_3 == 0) {
    param_3 = (**(code **)(*param_1 + 0x148))();
  }
  local_30 = &local_38;
  local_38 = param_3;
  local_28 = FUN_14073d6c0(&local_38,DAT_146877090);
  plVar2 = local_30;
  local_20 = &local_38;
  local_18 = 0;
  puVar4 = (undefined8 *)FUN_14073d6c0(local_30,local_28);
  puVar5 = (undefined8 *)FUN_14073d6c0(local_20,local_18);
  for (; puVar4 != puVar5; puVar4 = (undefined8 *)FUN_14073d6c0(plVar2,*puVar4)) {
    lVar1 = puVar4[2];
    cVar3 = FUN_14122a7d0(lVar1);
    if ((cVar3 != '\0') &&
       (((param_2 != '\0' || (cVar3 = FUN_14122f110(lVar1), cVar3 == '\0')) ||
        (*(char *)(lVar1 + 0xebe) != '\0')))) {
      FUN_14123cd10(lVar1,1);
      FUN_141218b10(lVar1,0,0,0,0,1);
    }
  }
  return;
}



// FUNCTION 14126a1c0 FUN_14126a1c0 body=545 status=ok
// SIG undefined FUN_14126a1c0(void)

void FUN_14126a1c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_143045d60();
  if ((0.0 < *(float *)(param_1 + 0x17c)) &&
     (lVar6 = FWeakObjectPtr::Get(param_2 + 0x6c), lVar6 != 0)) {
    uVar7 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
    if (plVar8 != (longlong *)0x0) {
      piVar1 = (int *)(param_1 + 0x648);
      piVar9 = *(int **)(param_1 + 0x658);
      if (*(int **)(param_1 + 0x658) == (int *)0x0) {
        piVar9 = piVar1;
      }
      piVar2 = piVar9 + *(int *)(param_1 + 0x660);
      for (; piVar9 != piVar2; piVar9 = piVar9 + 1) {
        if (*piVar9 == *(int *)(lVar6 + 0xc)) {
          return;
        }
      }
      local_54 = 0xffffffff;
      local_50 = 0;
      local_4c = 0xffffffff;
      local_48 = 0;
      local_44 = 0xffffffff;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
      local_c0 = *(undefined8 *)(param_1 + 0x140);
      local_ac = 0x3f800000;
      local_28 = 0;
      uStack_20 = 0;
      local_c8[0] = 1;
      FUN_140729f20(local_b8,param_2);
      local_28 = *(undefined8 *)(param_1 + 0x188);
      local_e4 = *(undefined4 *)(param_1 + 600);
      local_e0 = *(undefined4 *)(param_1 + 0x638);
      uStack_20 = *(undefined8 *)(param_1 + 0x180);
      local_dc = *(undefined4 *)(param_1 + 0x640);
      local_d8 = *(undefined4 *)(param_1 + 0x63c);
      local_e8[0] = 0;
      cVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,local_c8,local_e8);
      if (cVar5 != '\0') {
        *(undefined4 *)(param_1 + 600) = local_e4;
        *(undefined4 *)(param_1 + 0x638) = local_e0;
        *(undefined4 *)(param_1 + 0x640) = local_dc;
        *(undefined4 *)(param_1 + 0x63c) = local_d8;
      }
      iVar3 = *(int *)(param_1 + 0x660);
      iVar4 = *(int *)(lVar6 + 0xc);
      *(int *)(param_1 + 0x660) = iVar3 + 1;
      if (*(int *)(param_1 + 0x664) < iVar3 + 1) {
        TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (piVar1,iVar3);
      }
      piVar9 = *(int **)(param_1 + 0x658);
      if (*(int **)(param_1 + 0x658) == (int *)0x0) {
        piVar9 = piVar1;
      }
      piVar9[iVar3] = iVar4;
    }
  }
  return;
}



// FUNCTION 14126a3f0 FUN_14126a3f0 body=629 status=ok
// SIG undefined FUN_14126a3f0(void)

void FUN_14126a3f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int *piVar10;
  char local_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_143045f80();
  lVar7 = FWeakObjectPtr::Get(param_2 + 0x6c);
  if (lVar7 != 0) {
    uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
    if (plVar9 != (longlong *)0x0) {
      piVar1 = (int *)(param_1 + 0x268);
      piVar10 = *(int **)(param_1 + 0x278);
      if (*(int **)(param_1 + 0x278) == (int *)0x0) {
        piVar10 = piVar1;
      }
      piVar2 = piVar10 + *(int *)(param_1 + 0x280);
      for (; piVar10 != piVar2; piVar10 = piVar10 + 1) {
        if (*piVar10 == *(int *)(lVar7 + 0xc)) {
          return;
        }
      }
      local_64 = 0xffffffff;
      local_60 = 0;
      local_5c = 0xffffffff;
      local_58 = 0;
      local_54 = 0xffffffff;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      _guard_xfg_dispatch_icall_nop(local_c8,0,0x90);
      local_d0 = *(undefined8 *)(param_1 + 0x140);
      local_bc = 0x3f800000;
      local_38 = 0;
      uStack_30 = 0;
      local_d8[0] = 1;
      FUN_140729f20(local_c8,param_2);
      local_38 = *(undefined8 *)(param_1 + 0xc0);
      local_f4 = *(undefined4 *)(param_1 + 0xb0);
      local_f0 = *(undefined4 *)(param_1 + 0x47c);
      uStack_30 = *(undefined8 *)(param_1 + 0xb8);
      local_ec = *(undefined4 *)(param_1 + 0x480);
      local_e8 = *(undefined4 *)(param_1 + 0x484);
      local_f8[0] = '\0';
      cVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,local_d8,local_f8);
      if (cVar6 != '\0') {
        *(undefined4 *)(param_1 + 0xb0) = local_f4;
        *(undefined4 *)(param_1 + 0x47c) = local_f0;
        *(undefined4 *)(param_1 + 0x480) = local_ec;
        *(undefined4 *)(param_1 + 0x484) = local_e8;
        if (local_f8[0] != '\0') {
          uVar3 = *(undefined4 *)(param_1 + 700);
          uVar8 = *(undefined8 *)(param_1 + 0x2b4);
          *(undefined8 *)(param_1 + 0x2b4) = *(undefined8 *)(param_2 + 0x14);
          *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 0x1c);
          FUN_14305b260(param_1,local_f8[0],0);
          *(undefined8 *)(param_1 + 0x2b4) = uVar8;
          *(undefined4 *)(param_1 + 700) = uVar3;
        }
      }
      iVar4 = *(int *)(param_1 + 0x280);
      iVar5 = *(int *)(lVar7 + 0xc);
      *(int *)(param_1 + 0x280) = iVar4 + 1;
      if (*(int *)(param_1 + 0x284) < iVar4 + 1) {
        TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (piVar1,iVar4);
      }
      piVar10 = *(int **)(param_1 + 0x278);
      if (*(int **)(param_1 + 0x278) == (int *)0x0) {
        piVar10 = piVar1;
      }
      piVar10[iVar4] = iVar5;
    }
  }
  return;
}



// FUNCTION 14126a670 FUN_14126a670 body=447 status=ok
// SIG undefined FUN_14126a670(void)

undefined8 FUN_14126a670(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x6d8) == 0) {
    return 1;
  }
  if (param_2 != 0) {
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14126a6dc;
  }
  param_2 = 0;
LAB_14126a6dc:
  cVar4 = FUN_14122a4d0(*(undefined8 *)(param_1 + 0x6d8));
  if ((cVar4 != '\0') ||
     ((param_2 != 0 &&
      (cVar4 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(param_2), cVar4 != '\0'))))
  {
    FUN_141223c50(*(undefined8 *)(param_1 + 0x6d8),&local_18,0);
    plVar1 = local_18 + local_10;
    for (plVar7 = local_18; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar5 = *plVar7;
      if (lVar5 != 0) {
        lVar6 = FUN_1413ffe00();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) break;
      }
    }
    plVar2 = local_18 + local_10;
joined_r0x00014126a78a:
    if (plVar7 != plVar2) {
      if ((*plVar7 != param_2) && (cVar4 = FUN_140e279c0(*plVar7,param_2), cVar4 == '\0')) {
        if (local_18 != (longlong *)0x0) {
          FMemory::Free();
        }
        return 0;
      }
      do {
        do {
          plVar7 = plVar7 + 1;
          if (plVar7 == plVar1) goto joined_r0x00014126a78a;
          lVar5 = *plVar7;
        } while (lVar5 == 0);
        lVar6 = FUN_1413ffe00();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      } while (!bVar3);
      goto joined_r0x00014126a78a;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 14126a830 FUN_14126a830 body=763 status=ok
// SIG undefined FUN_14126a830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14126a830(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  undefined1 local_a8 [160];
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
  if ((((lVar3 != 0) && (*(char *)(lVar3 + 0x638) != '\0')) && (*(longlong *)(param_1 + 0x310) != 0)
      ) && (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 0x490),
           plVar1 != (longlong *)0x0)) {
    local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
    lVar3 = (**(code **)(*plVar1 + 0x720))(plVar1,local_b8);
    local_c0 = 0.0;
    local_c8 = CONCAT44(*(undefined4 *)(lVar3 + 4),(undefined4)local_c8);
    FRotationMatrix::FRotationMatrix(local_a8,&local_c8);
    lVar3 = *(longlong *)(param_1 + 0x310);
    lVar2 = *(longlong *)(lVar3 + 0x168);
    if (lVar2 == 0) {
      fVar19 = (float)(_DAT_146877490 & _DAT_1468774a0);
      fVar20 = (float)(uRam0000000146877494 & uRam00000001468774a4);
      fVar21 = (float)(uRam0000000146877498 & uRam00000001468774a8);
      uVar22 = (uint)fRam000000014687749c & uRam00000001468774ac;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = fRam000000014687749c;
    }
    else {
      fVar15 = *(float *)(lVar2 + 0x210);
      fVar16 = *(float *)(lVar2 + 0x214);
      fVar17 = *(float *)(lVar2 + 0x218);
      fVar19 = *(float *)(lVar2 + 0x230);
      fVar20 = *(float *)(lVar2 + 0x234);
      fVar21 = *(float *)(lVar2 + 0x238);
      uVar22 = *(uint *)(lVar2 + 0x23c);
      fVar18 = *(float *)(lVar2 + 0x21c);
    }
    pfVar4 = (float *)FMatrix::GetUnitAxis(local_a8,local_b8,2);
    fVar6 = param_2[1];
    fVar7 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar9 = pfVar4[2];
    pfVar4 = (float *)FMatrix::GetUnitAxis(local_a8,&local_c8,1);
    fVar15 = fVar15 * _DAT_146877800;
    fVar16 = fVar16 * fRam0000000146877804;
    fVar17 = fVar17 * fRam0000000146877808;
    fVar18 = fVar18 * fRam000000014687780c;
    fVar5 = fVar6 * pfVar4[1] + fVar8 * *param_2;
    auVar10._4_4_ = fVar20;
    auVar10._0_4_ = fVar19;
    auVar10._8_4_ = fVar21;
    auVar10._12_4_ = uVar22;
    auVar10 = rcpps(ZEXT416((uint)(fVar8 * *param_2)),auVar10);
    fVar13 = fVar6 * pfVar4[2] + fVar9 * *param_2;
    fVar14 = fVar7 * *param_2 + fVar6 * *pfVar4;
    fVar6 = fVar13 * fVar16 - fVar5 * fVar17;
    fVar7 = fVar14 * fVar17 - fVar13 * fVar15;
    fVar8 = fVar5 * fVar15 - fVar14 * fVar16;
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar19;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar20;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar21;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar19;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar20;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar21;
    local_c0 = ((fVar7 * fVar15 - fVar6 * fVar16) + fVar18 * fVar8 + fVar13) *
               (float)(-(uint)((float)((uint)fVar21 & uRam0000000146877538) <= fRam00000001468777f8)
                       & (uint)fVar12 ^ (uint)fVar12);
    local_c8 = CONCAT44(((fVar6 * fVar17 - fVar8 * fVar15) + fVar18 * fVar7 + fVar5) *
                        (float)(-(uint)((float)((uint)fVar20 & uRam0000000146877534) <=
                                       fRam00000001468777f4) & (uint)fVar11 ^ (uint)fVar11),
                        ((fVar8 * fVar16 - fVar7 * fVar17) + fVar18 * fVar6 + fVar14) *
                        (float)(-(uint)((float)((uint)fVar19 & _DAT_146877530) <= _DAT_1468777f0) &
                                (uint)fVar9 ^ (uint)fVar9));
    local_b0 = local_c0;
    FUN_14123f290(lVar3,&local_c8);
    FUN_1412401f0(*(undefined8 *)(param_1 + 0x310),0);
    FUN_141240250(*(undefined8 *)(param_1 + 0x310),0);
  }
  return;
}



// FUNCTION 14126ab30 FUN_14126ab30 body=156 status=ok
// SIG undefined FUN_14126ab30(void)

void FUN_14126ab30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_18;
  int local_10;
  
  lVar2 = param_5 - *(longlong *)(param_1 + 0x958);
  lVar2 = lVar2 / 6 + (lVar2 >> 0x3f);
  *(undefined8 *)(param_5 + 0x28) = param_2;
  iVar1 = (int)(lVar2 >> 3) - (int)(lVar2 >> 0x3f);
  FUN_142223280(param_2,*(undefined8 *)(param_1 + 0x118),&DAT_146532184,
                *(undefined8 *)(*(longlong *)(param_1 + 0x958) + 8 + (longlong)iVar1 * 0x30));
  local_18 = param_2;
  local_10 = iVar1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x9a8,&local_18);
  return;
}



// FUNCTION 14126abd0 FUN_14126abd0 body=91 status=ok
// SIG undefined FUN_14126abd0(void)

void FUN_14126abd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x30) != '\x01') {
    lVar2 = FUN_1409d7ca0();
    if (lVar2 != 0) {
      FUN_142c84520(*(undefined8 *)(lVar1 + 0x218),lVar2);
    }
  }
  uVar3 = FUN_142c6f130(param_1);
  FUN_1430a6590(uVar3,0,*(undefined8 *)(lVar1 + 0x220));
  FUN_1409d1d40(param_1);
  return;
}



// FUNCTION 14126ac30 FUN_14126ac30 body=64 status=ok
// SIG undefined FUN_14126ac30(void)

void FUN_14126ac30(longlong param_1)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  lVar1 = FUN_1409d7ca0();
  if (lVar1 != 0) {
    local_res10[0] = 0;
    FUN_14308aea0(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),1,local_res10);
  }
  FUN_1409d1d40(param_1);
  return;
}



// FUNCTION 14126ac70 FUN_14126ac70 body=354 status=ok
// SIG undefined FUN_14126ac70(void)

void FUN_14126ac70(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_143071890();
  if (*(char *)((longlong)param_1 + 0x6c9) != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = *(longlong *)(lVar2 + 400);
    if (lVar2 != 0) {
      lVar3 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_10 = 0;
        local_18 = param_1;
        uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
        FUN_140bf3530(lVar2,&local_18);
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x691) != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = *(longlong *)(lVar2 + 0x148);
      if (lVar2 != 0) {
        lVar3 = FUN_141424d10();
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
          FUN_140cd79b0(lVar2,param_1);
          lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
          if (*(longlong *)(lVar2 + 400) == 0) {
            uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
          }
          FUN_142880530(uVar4,param_1 + 0xd8);
          param_1[0xd8] = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 14126ade0 FUN_14126ade0 body=258 status=ok
// SIG undefined FUN_14126ade0(void)

void FUN_14126ade0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x548) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AVehicleGunnerSeatPawn::OnActionReserved",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x548) + 0x188,param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AVehicleGunnerSeatPawn::OnActionUsageEnded",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x548) + 0x1b8,param_1,local_res8);
  }
  return;
}



// FUNCTION 14126aef0 ~FDeviceMemoryManager body=31 status=ok
// SIG undefined ~FDeviceMemoryManager(void)

void VulkanRHI::FDeviceMemoryManager::~FDeviceMemoryManager(longlong param_1)

{
  FUN_14233a670();
  FUN_140e8b380(param_1 + 0x228);
  return;
}



// FUNCTION 14126af10 FUN_14126af10 body=113 status=ok
// SIG undefined FUN_14126af10(void)

void FUN_14126af10(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x958);
  lVar2 = (longlong)*(int *)(param_1 + 0x960) * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      FUN_142227350(*(longlong *)(lVar1 + 0x28),0,1);
    }
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 14126af90 FUN_14126af90 body=163 status=ok
// SIG undefined FUN_14126af90(void)

void FUN_14126af90(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar3 = *(undefined4 **)(param_1 + 0x2c0);
  puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x2c8) * 0xc;
  for (; puVar3 != puVar4; puVar3 = puVar3 + 0xc) {
    cVar1 = FWeakObjectPtr::IsValid(puVar3);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(puVar3);
      FUN_1405ac9d0(uVar2);
      uVar2 = FWeakObjectPtr::Get(puVar3);
      FUN_14059f190(uVar2);
      FWeakObjectPtr::operator=(&local_res8,0);
      *puVar3 = local_res8;
      puVar3[1] = local_resc;
    }
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 14126b040 FUN_14126b040 body=164 status=ok
// SIG undefined FUN_14126b040(void)

void FUN_14126b040(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14233a670();
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_142e724b0(*(longlong *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x310),DAT_146877928,0);
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x438);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x440) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)(*(longlong *)*puVar1 + 0x298))((longlong *)*puVar1,param_1,puVar1[1],param_2);
  }
  return;
}



// FUNCTION 14126b0f0 FUN_14126b0f0 body=220 status=ok
// SIG undefined FUN_14126b0f0(void)

void FUN_14126b0f0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((*(char *)(param_1 + 0x98) != '\0') && (lVar2 = *(longlong *)(param_3 + 0x20), lVar2 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x300)) {
      lVar5 = 0;
      do {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 0x2f8) + lVar5);
        if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
           (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2)
           ) {
          if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar4 != 0) {
              lVar2 = FMemory::Realloc(*plVar4,0,0);
              *plVar4 = lVar2;
            }
            *(undefined4 *)(plVar4 + 1) = 0;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (iVar3 < *(int *)(param_2 + 0x300));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_2 + 0x2f8),0);
  }
  return;
}



// FUNCTION 14126b1d0 FUN_14126b1d0 body=136 status=ok
// SIG undefined FUN_14126b1d0(void)

void FUN_14126b1d0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
    FUN_142ce9820(param_1,param_2);
    if ((*(char *)(param_1 + 0x768) != '\0') && (*(longlong *)(param_1 + 0x6d8) != 0)) {
      FUN_140483870(*(longlong *)(param_1 + 0x6d8) + 0x558,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14126b260 FUN_14126b260 body=509 status=ok
// SIG undefined FUN_14126b260(void)

void FUN_14126b260(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 local_res8 [8];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar6 = *(longlong **)(param_1 + 0x348);
  local_58 = 0;
  local_50 = 0;
  plVar5 = plVar6 + *(int *)(param_1 + 0x350);
  for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
    plVar4 = (longlong *)*plVar6;
    if (plVar4 != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x2d0))(plVar4,&local_38);
      iVar7 = *(int *)(puVar2 + 1);
      if (iVar7 != 0) {
        if (local_50._4_4_ < (int)local_50 + iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(&local_58);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(local_58 + (longlong)(int)local_50 * 0x18),(void *)*puVar2,
                   (longlong)iVar7 * 0x18);
        *(undefined4 *)(puVar2 + 1) = 0;
        local_50 = CONCAT44(local_50._4_4_,(int)local_50 + iVar7);
      }
      if (local_30 != 0) {
        plVar4 = (longlong *)(local_38 + 8);
        iVar7 = local_30;
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  FUN_14125af80(&local_58,local_res8);
  if (0 < (int)local_50) {
    local_48 = 0;
    local_40 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"RequestSyncLoad Array",0x2c);
    lVar3 = FUN_1422ca050();
    FStreamableManager::RequestSyncLoad(lVar3 + 0x178,local_28,&local_58,0,&local_48);
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
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  if ((int)local_50 != 0) {
    plVar5 = (longlong *)(local_58 + 8);
    iVar7 = (int)local_50;
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14126b460 FUN_14126b460 body=584 status=ok
// SIG undefined FUN_14126b460(void)

/* WARNING: Removing unreachable block (ram,0x00014126b5d8) */

void FUN_14126b460(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  int iVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong local_res8;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  ushort *local_48;
  int local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_1 == 0) {
    local_68 = 0;
    local_60 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    uVar4 = local_68;
    FGenericPlatformString::Convert<char,wchar_t>(local_68,5,&DAT_14472b374,5,0x3f);
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
    }
    puVar8 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_2);
    *puVar8 = uVar4;
    *(undefined4 *)(puVar8 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar8 + 0xc) = local_60._4_4_;
  }
  else {
    local_38 = *(longlong *)(param_1 + 0x10);
    if (local_38 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(longlong *)(local_38 + 0x38);
    }
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    FUN_140472e10(&local_38);
    lVar3 = local_30;
    while (local_30 = lVar3, lVar3 != 0) {
      local_58 = (undefined2 *)0x0;
      local_50 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      puVar5 = local_58;
      FGenericPlatformString::Memcpy(local_58,L"OverrideByParts",0x20);
      local_res8 = *(ulonglong *)(lVar3 + 0x18);
      FName::ToString(&local_res8,&local_48);
      puVar9 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar9 = puVar5;
      }
      puVar7 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar7 = local_48;
      }
      lVar10 = (longlong)puVar9 - (longlong)puVar7;
      do {
        uVar1 = *puVar7;
        uVar2 = *(ushort *)((longlong)puVar7 + lVar10);
        if (uVar1 != uVar2) {
          uVar11 = -(uint)(uVar1 < uVar2) | 1;
          break;
        }
        puVar7 = puVar7 + 1;
        uVar11 = 0;
      } while (uVar1 != 0);
      if (local_48 != (ushort *)0x0) {
        FMemory::Free(local_48);
      }
      if (puVar5 != (undefined2 *)0x0) {
        FMemory::Free(puVar5);
      }
      if (uVar11 != 0) {
        local_res8 = *(ulonglong *)(lVar3 + 0x18);
        FName::ToString(&local_res8);
        lVar10 = param_2[1];
        iVar6 = (int)lVar10 + 1;
        *(int *)(param_2 + 1) = iVar6;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
        }
        puVar8 = (undefined8 *)((longlong)(int)lVar10 * 0x10 + *param_2);
        *puVar8 = 0;
        *puVar8 = local_68;
        local_68 = 0;
        *(undefined4 *)(puVar8 + 1) = (undefined4)local_60;
        *(undefined4 *)((longlong)puVar8 + 0xc) = local_60._4_4_;
        local_60 = 0;
      }
      local_30 = *(longlong *)(lVar3 + 0x28);
      FUN_140472e10(&local_38);
      lVar3 = local_30;
    }
    local_res8 = local_res8 & 0xffffffffffffff00;
    AlgoImpl::
    IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
              (*param_2,(longlong)(int)param_2[1],0,&local_res8);
  }
  return;
}



// FUNCTION 14126b6b0 FUN_14126b6b0 body=3762 status=ok
// SIG undefined FUN_14126b6b0(void)

/* WARNING: Removing unreachable block (ram,0x00014126b7ce) */

void FUN_14126b6b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  short *psVar14;
  longlong *plVar15;
  short *psVar16;
  void *pvVar17;
  ulonglong *puVar18;
  undefined2 *puVar19;
  short *psVar20;
  undefined2 *puVar21;
  int iVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  void *pvVar27;
  undefined2 *puVar28;
  uint uVar29;
  int iVar30;
  void *pvVar31;
  void *pvVar32;
  void *local_res10;
  uint local_res18;
  void *local_res20;
  undefined4 in_stack_fffffffffffffe28;
  undefined2 uVar33;
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  void *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  ulonglong local_180;
  void *local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140;
  undefined8 local_138;
  void *local_130;
  undefined2 *local_128;
  undefined8 local_120;
  short *local_118;
  int local_110;
  undefined4 local_10c;
  void *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  short *local_a8;
  uint local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  int local_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong local_68 [2];
  longlong local_58 [3];
  
  uVar29 = 0;
  local_res18 = 0;
  puVar9 = (undefined8 *)FName::FName(local_78,"AssetRegistry",1);
  uVar13 = *puVar9;
  uVar10 = FUN_14168dc80();
  plVar11 = (longlong *)FUN_141690010(uVar10,uVar13);
  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x48))(plVar11);
  local_140 = (longlong *)0x0;
  local_138 = 0;
  local_148 = plVar11;
  plVar12 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
  lVar26 = plVar12[0x1f];
  if (lVar26 == 0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    lVar26 = plVar12[0x1f];
  }
  puVar9 = *(undefined8 **)(lVar26 + 0x140);
  puVar24 = puVar9 + (longlong)*(int *)(lVar26 + 0x148) * 2;
  for (; puVar9 != puVar24; puVar9 = puVar9 + 2) {
    if (*(int *)(puVar9 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar9;
    }
    FString::PrintfImpl(&local_b8,L"/%s/Vehicles/",puVar21);
    uVar25 = local_138;
    lVar26 = (longlong)(int)local_138;
    iVar6 = (int)local_138 + 1;
    local_138 = CONCAT44(local_138._4_4_,iVar6);
    if (local_138._4_4_ < iVar6) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_140,uVar25 & 0xffffffff);
    }
    plVar12 = local_140 + lVar26 * 2;
    *plVar12 = 0;
    *plVar12 = local_b8;
    local_b8 = 0;
    *(undefined4 *)(plVar12 + 1) = (undefined4)local_b0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = local_b0._4_4_;
    local_b0 = 0;
  }
  (**(code **)(*plVar11 + 0xe8))(plVar11,&local_140,0);
  local_188 = (void *)0x0;
  local_180 = 0;
  puVar9 = (undefined8 *)FName::FName(local_70,"VehiclePartData",1);
  (**(code **)(*plVar11 + 0x28))(plVar11,*puVar9,&local_188,1);
  uVar25 = (ulonglong)(int)local_180;
  local_res10 = local_188;
  pvVar31 = (void *)(uVar25 * 0x58 + (longlong)local_188);
  pvVar32 = local_188;
  local_res20 = pvVar31;
  if (local_188 != pvVar31) {
LAB_14126b860:
    pvVar27 = (void *)0x0;
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_res10 = pvVar32;
    uVar13 = FName::ToString(pvVar32,local_68);
    FUN_141594550(uVar13,&local_158,&DAT_1447204b4,1);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    plVar11 = local_158;
    puVar21 = local_f8;
    if (3 < (int)local_150) {
      plVar12 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
      lVar26 = plVar12[0x1f];
      if (lVar26 == 0) {
        (**(code **)(*plVar12 + 0x368))(plVar12);
        lVar26 = plVar12[0x1f];
      }
      puVar9 = *(undefined8 **)(lVar26 + 0x140);
      puVar24 = puVar9 + (longlong)*(int *)(lVar26 + 0x148) * 2;
      puVar21 = local_f8;
      for (; local_f8 = puVar21, puVar9 != puVar24; puVar9 = puVar9 + 2) {
        if ((int)plVar11[1] == 0) {
          puVar21 = &DAT_143f3eda8;
        }
        else {
          puVar21 = (undefined2 *)*plVar11;
        }
        if (*(int *)(puVar9 + 1) == 0) {
          puVar19 = &DAT_143f3eda8;
        }
        else {
          puVar19 = (undefined2 *)*puVar9;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar19,puVar21);
        if (iVar6 == 0) {
          local_f8 = (undefined2 *)0x0;
          local_f0 = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          puVar21 = local_f8;
          FGenericPlatformString::Memcpy(local_f8,L"Vehicles",0x12);
          local_res18 = uVar29 | 1;
          puVar19 = &DAT_143f3eda8;
          if ((int)local_f0 != 0) {
            puVar19 = puVar21;
          }
          if ((int)local_158[3] == 0) {
            psVar14 = &DAT_143f3eda8;
          }
          else {
            psVar14 = (short *)local_158[2];
          }
          lVar26 = (longlong)puVar19 - (longlong)psVar14;
          goto LAB_14126b9e0;
        }
        puVar21 = local_f8;
      }
    }
    goto LAB_14126b92a;
  }
LAB_14126bd6b:
  if ((int)uVar25 != 0) {
    plVar12 = (longlong *)((longlong)local_188 + 0x30);
    do {
      if (plVar12[1] != 0) {
        FMemory::Free();
      }
      plVar15 = (longlong *)*plVar12;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar26 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar26 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar23 = (int)uVar25 - 1;
      uVar25 = (ulonglong)uVar23;
    } while (uVar23 != 0);
  }
  uVar25 = local_180 >> 0x20;
  local_180 = local_180 & 0xffffffff00000000;
  if ((int)uVar25 != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(&local_188,0);
  }
  puVar9 = (undefined8 *)FName::FName(&local_res20,"Blueprint",1);
  (**(code **)(*plVar11 + 0x28))(plVar11,*puVar9,&local_188,1);
  local_148 = local_188;
  pvVar32 = (void *)((longlong)(int)local_180 * 0x58 + (longlong)local_188);
  plVar11 = local_188;
  local_130 = pvVar32;
  if (local_188 == pvVar32) {
LAB_14126c4e9:
    local_res10 = (void *)((ulonglong)local_res10 & 0xffffffffffffff00);
    AlgoImpl::
    IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
              (*param_1,(longlong)(int)param_1[1],(ulonglong)param_1 & 0xff,&local_res10);
    FUN_1404be960(&local_188);
    plVar11 = local_140;
    for (iVar6 = (int)local_138; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_140 != (longlong *)0x0) {
      FMemory::Free(local_140);
    }
    return;
  }
LAB_14126be32:
  psVar14 = (short *)0x0;
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_148 = plVar11;
  uVar13 = FName::ToString(plVar11,local_58);
  FUN_141594550(uVar13,&local_168,&DAT_14472051c,1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  plVar12 = local_168;
  puVar21 = local_128;
  puVar19 = local_d8;
  uVar23 = uVar29;
  if ((int)local_160 == 5) {
    plVar15 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
    lVar26 = plVar15[0x1f];
    if (lVar26 == 0) {
      (**(code **)(*plVar15 + 0x368))(plVar15);
      lVar26 = plVar15[0x1f];
    }
    puVar9 = *(undefined8 **)(lVar26 + 0x140);
    puVar24 = puVar9 + (longlong)*(int *)(lVar26 + 0x148) * 2;
    puVar21 = local_128;
    puVar19 = local_d8;
    for (; local_128 = puVar21, local_d8 = puVar19, puVar9 != puVar24; puVar9 = puVar9 + 2) {
      if ((int)plVar12[1] == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*plVar12;
      }
      if (*(int *)(puVar9 + 1) == 0) {
        puVar19 = &DAT_143f3eda8;
      }
      else {
        puVar19 = (undefined2 *)*puVar9;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar19,puVar21);
      if (iVar6 == 0) {
        local_d8 = (undefined2 *)0x0;
        local_d0 = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
        puVar19 = local_d8;
        FGenericPlatformString::Memcpy(local_d8,L"Vehicles",0x12);
        local_res18 = uVar29 | 2;
        puVar21 = &DAT_143f3eda8;
        if ((int)local_d0 != 0) {
          puVar21 = puVar19;
        }
        if ((int)local_168[3] == 0) {
          psVar16 = &DAT_143f3eda8;
        }
        else {
          psVar16 = (short *)local_168[2];
        }
        lVar26 = (longlong)puVar21 - (longlong)psVar16;
        goto LAB_14126bfe0;
      }
      puVar21 = local_128;
      puVar19 = local_d8;
    }
  }
  goto LAB_14126bf05;
  while (psVar14 = psVar14 + 1, sVar4 != 0) {
LAB_14126b9e0:
    sVar3 = *psVar14;
    sVar4 = *(short *)((longlong)psVar14 + lVar26);
    if (sVar3 != sVar4) break;
  }
  uVar29 = local_res18;
  if (sVar3 == sVar4) {
    bVar5 = true;
  }
  else {
LAB_14126b92a:
    bVar5 = false;
  }
  if (((uVar29 & 1) != 0) &&
     (uVar29 = uVar29 & 0xfffffffe, local_res18 = uVar29, puVar21 != (undefined2 *)0x0)) {
    FMemory::Free(puVar21);
  }
  if (bVar5) {
    local_98 = (void *)0x0;
    local_90 = (int)local_158[5];
    lVar26 = (longlong)local_90;
    pvVar32 = (void *)local_158[4];
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      pvVar27 = local_98;
      _guard_xfg_dispatch_icall_nop(local_98,pvVar32,lVar26 * 2);
    }
    iVar6 = local_90;
    local_1c8 = (void *)0x0;
    local_1c0 = (int)(local_158 + (longlong)((int)local_150 + -1) * 2)[1];
    lVar26 = (longlong)local_1c0;
    pvVar32 = (void *)local_158[(longlong)((int)local_150 + -1) * 2];
    if (local_1c0 == 0) {
      local_1bc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_1c0,0);
      _guard_xfg_dispatch_icall_nop(local_1c8,pvVar32,lVar26 * 2);
    }
    in_stack_fffffffffffffe28 = 0xffffffff;
    iVar7 = FUN_141592950(&local_1c8,L"VehiclePart_",1,1,0xffffffff);
    if ((iVar7 != -1) && (iVar7 = iVar7 + 0xc, iVar7 != 0)) {
      if (local_1c0 - iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (local_1c8,(void *)((longlong)local_1c8 + (longlong)iVar7 * 2),
                   (longlong)(local_1c0 - iVar7) * 2);
      }
      local_1c0 = local_1c0 - iVar7;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_1c8);
    }
    local_178 = (void *)0x0;
    local_170._0_4_ = iVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_178,(2 - (uint)(iVar6 != 0)) + iVar6,0);
    pvVar32 = local_178;
    _guard_xfg_dispatch_icall_nop(local_178,pvVar27,(longlong)iVar6 * 2);
    iVar7 = (int)local_170;
    lVar26 = (longlong)(int)local_170;
    local_170._0_4_ = (2 - (uint)((int)local_170 != 0)) + (int)local_170;
    iVar30 = local_170._4_4_;
    iVar6 = (int)local_170;
    if (local_170._4_4_ < (int)local_170) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,iVar7);
      pvVar32 = local_178;
      iVar30 = local_170._4_4_;
      iVar6 = (int)local_170;
    }
    pvVar31 = local_1c8;
    iVar22 = 0;
    local_178 = (void *)0x0;
    local_170 = 0;
    puVar21 = (undefined2 *)((longlong)pvVar32 + (lVar26 - (ulonglong)(iVar7 != 0)) * 2);
    *puVar21 = 0x20;
    puVar21[1] = 0;
    local_80 = iVar6;
    local_7c = iVar30;
    if (iVar6 < 2) {
      lVar26 = (longlong)local_1c0;
      local_e8 = (void *)0x0;
      local_e0 = CONCAT44(local_e0._4_4_,local_1c0);
      local_88 = pvVar32;
      if (local_1c0 == 0) {
        pvVar17 = (void *)0x0;
        iVar30 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_1c0);
        pvVar17 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,pvVar31,lVar26 * 2);
        iVar22 = local_e0._4_4_;
        iVar30 = (int)local_e0;
      }
    }
    else {
      iVar7 = iVar22;
      if (local_1c0 != 0) {
        iVar7 = local_1c0 + -1;
      }
      if ((iVar6 != 0) || (iVar8 = 1, iVar7 == 0)) {
        iVar8 = iVar22;
      }
      local_88 = (void *)0x0;
      local_1b8 = pvVar32;
      local_1b0._4_4_ = iVar30;
      if (iVar30 < iVar7 + iVar6 + iVar8) {
        local_1b0._0_4_ = iVar6;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b8);
        iVar6 = (int)local_1b0;
      }
      local_130 = local_1c8;
      pvVar17 = local_1b8;
      iVar22 = local_1b0._4_4_;
      iVar30 = iVar6;
      if (iVar7 != 0) {
        local_1b0._0_4_ = (uint)(iVar6 == 0) + iVar7 + iVar6;
        if (local_1b0._4_4_ < (int)local_1b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar6);
        }
        iVar22 = local_1b0._4_4_;
        iVar30 = (int)local_1b0;
        pvVar17 = local_1b8;
        pvVar32 = (void *)((longlong)local_1b8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar32,local_130,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar32 + (longlong)iVar7 * 2) = 0;
      }
      local_1b8 = (void *)0x0;
      local_1b0 = 0;
      pvVar32 = (void *)0x0;
    }
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
    }
    plVar11 = (longlong *)((longlong)iVar6 * 0x10 + *param_1);
    local_e8 = (void *)0x0;
    local_e0 = 0;
    *plVar11 = (longlong)pvVar17;
    *(int *)(plVar11 + 1) = iVar30;
    *(int *)((longlong)plVar11 + 0xc) = iVar22;
    if (pvVar32 != (void *)0x0) {
      FMemory::Free(pvVar32);
    }
    if (local_1c8 != (void *)0x0) {
      FMemory::Free();
    }
    pvVar32 = local_res10;
    pvVar31 = local_res20;
    uVar29 = local_res18;
    if (pvVar27 != (void *)0x0) {
      FMemory::Free(pvVar27);
      pvVar32 = local_res10;
      pvVar31 = local_res20;
      uVar29 = local_res18;
    }
  }
  plVar11 = local_158;
  for (iVar6 = (int)local_150; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_res10 = (void *)((longlong)pvVar32 + 0x58);
  pvVar32 = local_res10;
  if (local_res10 == pvVar31) goto code_r0x00014126bd5e;
  goto LAB_14126b860;
code_r0x00014126bd5e:
  uVar25 = local_180 & 0xffffffff;
  plVar11 = local_148;
  goto LAB_14126bd6b;
  while (psVar16 = psVar16 + 1, sVar4 != 0) {
LAB_14126bfe0:
    sVar3 = *psVar16;
    sVar4 = *(short *)((longlong)psVar16 + lVar26);
    if (sVar3 != sVar4) break;
  }
  puVar21 = local_128;
  uVar23 = local_res18;
  if (sVar3 == sVar4) {
    local_128 = (undefined2 *)0x0;
    local_120 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128);
    puVar21 = local_128;
    FGenericPlatformString::Memcpy(local_128,L"Vehicle",0x10);
    local_res18 = uVar29 | 6;
    puVar28 = &DAT_143f3eda8;
    if ((int)local_120 != 0) {
      puVar28 = puVar21;
    }
    if ((int)local_168[7] == 0) {
      psVar16 = &DAT_143f3eda8;
    }
    else {
      psVar16 = (short *)local_168[6];
    }
    lVar26 = (longlong)puVar28 - (longlong)psVar16;
    do {
      sVar3 = *psVar16;
      sVar4 = *(short *)((longlong)psVar16 + lVar26);
      if (sVar3 != sVar4) break;
      psVar16 = psVar16 + 1;
    } while (sVar4 != 0);
    uVar23 = local_res18;
    if (sVar3 == sVar4) {
      bVar5 = true;
      goto LAB_14126bf07;
    }
  }
LAB_14126bf05:
  bVar5 = false;
LAB_14126bf07:
  if (((uVar23 & 4) != 0) &&
     (uVar23 = uVar23 & 0xfffffffb, local_res18 = uVar23, puVar21 != (undefined2 *)0x0)) {
    FMemory::Free(puVar21);
  }
  if (((uVar23 & 2) != 0) &&
     (uVar23 = uVar23 & 0xfffffffd, local_res18 = uVar23, puVar19 != (undefined2 *)0x0)) {
    FMemory::Free(puVar19);
  }
  uVar33 = (undefined2)((uint)in_stack_fffffffffffffe28 >> 0x10);
  uVar29 = uVar23;
  if (bVar5) {
    local_a8 = (short *)0x0;
    local_a0 = *(uint *)(local_168 + 5);
    lVar26 = (longlong)(int)local_a0;
    pvVar32 = (void *)local_168[4];
    if (local_a0 == 0) {
      local_9c = 0;
      uVar25 = 0;
      psVar16 = psVar14;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
      psVar16 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,pvVar32,lVar26 * 2);
      uVar25 = (ulonglong)local_a0;
    }
    local_118 = (short *)0x0;
    local_110 = (int)(local_168 + (longlong)((int)local_160 + -1) * 2)[1];
    lVar26 = (longlong)local_110;
    pvVar32 = (void *)local_168[(longlong)((int)local_160 + -1) * 2];
    if (local_110 == 0) {
      local_10c = 0;
      iVar6 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_110,0);
      psVar14 = local_118;
      _guard_xfg_dispatch_icall_nop(local_118,pvVar32,lVar26 * 2);
      iVar6 = local_110;
    }
    psVar20 = psVar14 + iVar6;
    do {
      if (psVar20 == psVar14) goto LAB_14126c15e;
      psVar20 = psVar20 + -1;
    } while (*psVar20 != 0x5f);
    iVar7 = (int)((longlong)psVar20 - (longlong)psVar14 >> 1);
    if ((iVar7 != -1) && (iVar7 = iVar7 + 1, iVar7 != 0)) {
      iVar6 = iVar6 - iVar7;
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop(psVar14,psVar14 + iVar7,(longlong)iVar6 * 2);
      }
      local_110 = iVar6;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_118);
      psVar14 = local_118;
      iVar6 = local_110;
    }
LAB_14126c15e:
    local_108 = (void *)0x0;
    local_100 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    pvVar32 = local_108;
    local_res20 = local_108;
    in_stack_fffffffffffffe28 = CONCAT22(uVar33,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_108,8," Wheel ",8,in_stack_fffffffffffffe28)
    ;
    iVar30 = (int)uVar25;
    iVar7 = (int)local_100;
    if (iVar30 < 2) {
      pvVar27 = (void *)0x0;
      iVar30 = local_100._4_4_;
      local_res10 = pvVar32;
      local_res20 = (void *)0x0;
      local_100 = 0;
      pvVar31 = pvVar32;
    }
    else {
      if ((int)local_100 == 0) {
        iVar22 = 0;
      }
      else {
        iVar22 = (int)local_100 + -1;
      }
      pvVar31 = (void *)0x0;
      if ((iVar30 != 0) || (iVar7 = 1, iVar22 == 0)) {
        iVar7 = 0;
      }
      local_res10 = (void *)0x0;
      local_1a8 = (void *)0x0;
      local_1a0 = CONCAT44(local_1a0._4_4_,iVar30);
      if ((iVar30 == 0) && (iVar7 + iVar22 == 0)) {
        local_1a0 = 0;
        iVar30 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a8,iVar30 + iVar7 + iVar22,0);
        pvVar31 = local_1a8;
        local_res10 = local_1a8;
        _guard_xfg_dispatch_icall_nop(local_1a8,psVar16,(longlong)iVar30 * 2);
        uVar25 = local_1a0 & 0xffffffff;
        iVar30 = local_1a0._4_4_;
      }
      iVar8 = (int)uVar25;
      pvVar27 = pvVar32;
      iVar7 = iVar8;
      if (iVar22 != 0) {
        iVar7 = iVar8 + (uint)(iVar8 == 0) + iVar22;
        local_1a0._0_4_ = iVar7;
        if (iVar30 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar25);
          local_res10 = local_1a8;
          pvVar31 = local_1a8;
          iVar30 = local_1a0._4_4_;
        }
        iVar7 = (int)local_1a0;
        pvVar32 = (void *)(((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2 + (longlong)pvVar31);
        _guard_xfg_dispatch_icall_nop(pvVar32,local_res20,(longlong)iVar22 * 2);
        *(undefined2 *)((longlong)iVar22 * 2 + (longlong)pvVar32) = 0;
        pvVar27 = local_res20;
      }
      local_1a8 = (void *)0x0;
      local_1a0 = 0;
    }
    pvVar32 = (void *)0x0;
    if (iVar7 < 2) {
      local_c8 = (void *)0x0;
      local_c0 = CONCAT44(local_c0._4_4_,iVar6);
      if (iVar6 == 0) {
        iVar30 = 0;
        iVar6 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar6,0);
        pvVar32 = local_c8;
        _guard_xfg_dispatch_icall_nop(local_c8,psVar14,(longlong)iVar6 * 2);
        iVar30 = local_c0._4_4_;
        iVar6 = (int)local_c0;
      }
    }
    else {
      iVar22 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar22 = 0;
      }
      if ((iVar7 != 0) || (pvVar17 = (void *)0x1, iVar22 == 0)) {
        pvVar17 = pvVar32;
      }
      local_res10 = (void *)0x0;
      local_198 = pvVar31;
      local_190._4_4_ = iVar30;
      if (iVar30 < iVar7 + (int)pvVar17 + iVar22) {
        local_190._0_4_ = iVar7;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
        iVar7 = (int)local_190;
      }
      pvVar32 = local_198;
      iVar30 = local_190._4_4_;
      iVar6 = iVar7;
      if (iVar22 != 0) {
        local_190._0_4_ = iVar7 + (uint)(iVar7 == 0) + iVar22;
        if (local_190._4_4_ < (int)local_190) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar7);
        }
        iVar30 = local_190._4_4_;
        iVar6 = (int)local_190;
        pvVar32 = local_198;
        pvVar31 = (void *)(((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2 + (longlong)local_198);
        _guard_xfg_dispatch_icall_nop(pvVar31,psVar14,(longlong)iVar22 * 2);
        *(undefined2 *)((longlong)iVar22 * 2 + (longlong)pvVar31) = 0;
        pvVar27 = local_res20;
      }
      local_198 = (void *)0x0;
      local_190 = 0;
    }
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
    }
    puVar18 = (ulonglong *)((longlong)iVar7 * 0x10 + *param_1);
    local_c8 = (void *)0x0;
    local_c0 = 0;
    *puVar18 = (ulonglong)pvVar32;
    *(int *)(puVar18 + 1) = iVar6;
    *(int *)((longlong)puVar18 + 0xc) = iVar30;
    if (local_res10 != (void *)0x0) {
      FMemory::Free(local_res10);
    }
    if (pvVar27 != (void *)0x0) {
      FMemory::Free(pvVar27);
    }
    if (psVar14 != (short *)0x0) {
      FMemory::Free(psVar14);
    }
    plVar11 = local_148;
    pvVar32 = local_130;
    uVar29 = local_res18;
    if (local_a8 != (short *)0x0) {
      FMemory::Free();
      plVar11 = local_148;
      pvVar32 = local_130;
      uVar29 = local_res18;
    }
  }
  plVar12 = local_168;
  for (iVar6 = (int)local_160; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_148 = (longlong *)((longlong)plVar11 + 0x58);
  plVar11 = local_148;
  if (local_148 == pvVar32) goto LAB_14126c4e9;
  goto LAB_14126be32;
}



// FUNCTION 14126c570 FUN_14126c570 body=207 status=ok
// SIG undefined FUN_14126c570(void)

void FUN_14126c570(longlong param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 != 3) && (cVar1 = FUN_140e96350(param_1 + 0x228,param_3,param_4), cVar1 == '\0')) {
    return;
  }
  lVar3 = FUN_140e939e0(param_1 + 0x228,param_3,param_2,param_4);
  iVar2 = FUN_14233f450(param_1);
  if (((iVar2 == 3) && (lVar3 != 0)) && (lVar3 != param_2)) {
    FUN_143083420(lVar3,1);
  }
  lVar3 = FUN_140e83500(param_1 + 0x228,param_3);
  if (((lVar3 != 0) && (lVar3 != param_2)) && (cVar1 = FUN_1407cd900(lVar3), cVar1 == '\0')) {
    return;
  }
  FUN_141285800(param_1,param_3);
  return;
}



// FUNCTION 14126c640 FUN_14126c640 body=123 status=ok
// SIG undefined FUN_14126c640(void)

bool FUN_14126c640(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_14149b100();
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
      cVar2 = FUN_14126fbb0(param_2,*(undefined1 *)(param_1 + 0x88));
      return cVar2 == *(char *)(param_1 + 0x89);
    }
  }
  return false;
}



// FUNCTION 14126c6c0 FUN_14126c6c0 body=57 status=ok
// SIG undefined FUN_14126c6c0(void)

void FUN_14126c6c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014126c6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x6d0))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 14126c710 FUN_14126c710 body=35 status=ok
// SIG undefined FUN_14126c710(void)

void FUN_14126c710(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_142600fa0(lVar1);
    return;
  }
  return;
}



// FUNCTION 14126c740 FUN_14126c740 body=346 status=ok
// SIG undefined FUN_14126c740(void)

undefined8 FUN_14126c740(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20);
  if (1e-08 < ABS(fVar7)) {
    fVar6 = 0.0;
    fVar7 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x20)) / fVar7;
    if (fVar7 < 0.0) goto LAB_14126c7b5;
  }
  else if (*(float *)(param_1 + 0x28) < *(float *)(param_1 + 0x24)) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = 1.0;
  }
  fVar6 = fVar7;
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
LAB_14126c7b5:
  fVar7 = *(float *)(param_1 + 0x1c);
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x18);
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_1425a2750(uVar4,*(undefined8 *)(param_1 + 0x10),(fVar7 - fVar1) * fVar6 + fVar2);
  }
  fVar7 = *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x28) = fVar7 + param_2;
  if (*(float *)(param_1 + 0x24) <= fVar7 || lVar3 == 0) {
    if (((*(longlong *)(param_1 + 0x38) != 0) &&
        (lVar3 = FWeakObjectPtr::Get(param_1 + 0x30), lVar3 != 0)) &&
       (lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 0x38)), lVar3 != 0)) {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
      uVar4 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 0x38));
      (**(code **)(*plVar5 + 0x208))(plVar5,uVar4,0);
    }
    return 0;
  }
  return 1;
}



// FUNCTION 14126c8a0 FUN_14126c8a0 body=111 status=ok
// SIG undefined FUN_14126c8a0(void)

void FUN_14126c8a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14126c910 FUN_14126c910 body=54 status=ok
// SIG undefined FUN_14126c910(void)

undefined1 FUN_14126c910(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(*plVar2 + 0x6d0))(plVar2,0);
  }
  return 1;
}



// FUNCTION 14126c950 FUN_14126c950 body=24 status=ok
// SIG undefined FUN_14126c950(void)

undefined1 FUN_14126c950(longlong param_1)

{
  FUN_140cd72e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14126c970 FUN_14126c970 body=33 status=ok
// SIG undefined FUN_14126c970(void)

undefined1 FUN_14126c970(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_142600fa0(lVar1);
  }
  return 1;
}



// FUNCTION 14126c9a0 FUN_14126c9a0 body=138 status=ok
// SIG undefined FUN_14126c9a0(void)

bool FUN_14126c9a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,
               *(undefined8 *)(param_1 + 0x20));
  }
  return lVar1 != 0;
}



// FUNCTION 14126ca30 FUN_14126ca30 body=160 status=ok
// SIG undefined FUN_14126ca30(void)

longlong FUN_14126ca30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14148cad0();
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
    lVar3 = AGTutorialStepVideo::GetPrivateStaticClass();
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
      return *(longlong *)(lVar1 + 0x538);
    }
  }
  return 0;
}



// FUNCTION 14126cad0 FUN_14126cad0 body=295 status=ok
// SIG undefined FUN_14126cad0(void)

longlong FUN_14126cad0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    lVar2 = FUN_14148cad0();
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
      return param_1;
    }
    lVar2 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    param_1 = *(longlong *)(param_1 + 0x118);
  }
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_14149a4d0();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_14148cad0();
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



// FUNCTION 14126cc00 FUN_14126cc00 body=629 status=ok
// SIG undefined FUN_14126cc00(void)

longlong FUN_14126cc00(longlong param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined8 local_res8;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  if (((int)param_1 == 0) && ((int)((ulonglong)param_1 >> 0x20) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"AssetRegistry",1);
  uVar5 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar5);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468779b0) && (_Init_thread_header(&DAT_1468779b0), DAT_1468779b0 == -1))
  {
    FName::FName(&DAT_1468779a8,L"VehicleClassIdentifier",1);
    _Init_thread_footer(&DAT_1468779b0);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  (**(code **)(*plVar4 + 0x28))(plVar4,DAT_1468779a8,&local_48,1);
  plVar4 = local_48 + (longlong)(int)local_40 * 0xb;
  lVar6 = 0;
  if (local_48 != plVar4) {
    local_res8 = 0;
    plVar9 = local_48;
    do {
      if (*plVar9 != 0) {
        puVar2 = (undefined8 *)FName::ToString(plVar9,local_38);
        if (*(int *)(puVar2 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar2;
        }
        uVar5 = UObject::GetPrivateStaticClass();
        lVar6 = FUN_141799410(uVar5,0,puVar8,0);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (lVar6 == 0) {
          puVar2 = (undefined8 *)FName::ToString(plVar9,local_28);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar2;
          }
          uVar5 = UObject::GetPrivateStaticClass();
          lVar6 = FUN_141799c90(uVar5,0,puVar8,0,0,0,1);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 == 0) goto LAB_14126cdea;
        }
        lVar7 = FUN_1414dc770();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar6 + 0x70) == param_1)) break;
      }
LAB_14126cdea:
      plVar9 = plVar9 + 0xb;
      lVar6 = 0;
    } while (plVar9 != plVar4);
  }
  FUN_1404be960(&local_48);
  return lVar6;
}



// FUNCTION 14126ce80 FUN_14126ce80 body=269 status=ok
// SIG undefined FUN_14126ce80(void)

longlong FUN_14126ce80(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428e7a40();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        lVar2 = FUN_142e0a580();
        lVar4 = FUN_1428e7a40();
        lVar3 = param_2;
        goto LAB_14126cee5;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  goto LAB_14126ceb5;
  while (lVar3 = *(longlong *)(lVar3 + 0x30), lVar5 = 0, lVar3 != 0) {
LAB_14126cee5:
    lVar5 = param_2;
    if (lVar3 == lVar4) break;
  }
  do {
    if (lVar5 == 0) goto LAB_14126ceb5;
    if (lVar5 == lVar2) {
      if ((*(longlong *)(param_1 + 0x538) != 0) &&
         (lVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x618) + 0x10))(),
         lVar3 != 0)) {
        lVar4 = FUN_1428e7a40();
        lVar2 = param_2;
        break;
      }
      goto LAB_14126ceb5;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  } while( true );
  while (lVar2 = *(longlong *)(lVar2 + 0x30), lVar5 = 0, lVar2 != 0) {
    lVar5 = param_2;
    if (lVar2 == lVar4) break;
  }
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return lVar3;
  }
LAB_14126ceb5:
  lVar3 = AActor::FindComponentByClass(param_1,param_2);
  return lVar3;
}



// FUNCTION 14126cf90 FUN_14126cf90 body=201 status=ok
// SIG undefined FUN_14126cf90(void)

undefined1 FUN_14126cf90(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 local_res8 [4];
  longlong local_18 [2];
  
  local_res8[0] = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468779e0) {
    _Init_thread_header(&DAT_1468779e0);
    if (DAT_1468779e0 == -1) {
      uVar2 = UEnum::GetPrivateStaticClass();
      DAT_1468779d8 = FUN_141799410(uVar2,0xffffffffffffffff,L"EVehicleEffectEvent",1);
      _Init_thread_footer(&DAT_1468779e0);
    }
  }
  FName::ToString(local_res8,local_18);
  FString::RemoveSpacesInline(local_18);
  lVar1 = UEnum::GetValueByName(DAT_1468779d8,local_18,0);
  uVar3 = 0;
  if (lVar1 != -1) {
    uVar3 = (char)lVar1;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 14126d060 FUN_14126d060 body=113 status=ok
// SIG undefined FUN_14126d060(void)

int * FUN_14126d060(longlong *param_1,int *param_2,byte param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(byte *)(*param_1 + (longlong)iVar1 * 0x28) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 0x20 + (longlong)iVar1 * 0x28);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14126d0e0 FUN_14126d0e0 body=191 status=ok
// SIG undefined FUN_14126d0e0(void)

int FUN_14126d0e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x350)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x348));
      if (lVar1 != 0) {
        lVar4 = FUN_141495210();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) &&
           (cVar3 = FUN_14122f5f0(*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x348)),param_2),
           cVar3 != '\0')) {
          return iVar5;
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x350));
  }
  return -1;
}



// FUNCTION 14126d1a0 FUN_14126d1a0 body=195 status=ok
// SIG undefined FUN_14126d1a0(void)

int FUN_14126d1a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x350)) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x348));
      if (lVar1 != 0) {
        lVar5 = FUN_1414dd710();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) &&
           (plVar2 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x348)),
           cVar4 = (**(code **)(*plVar2 + 0x2d8))(plVar2,param_2), cVar4 != '\0')) {
          return iVar6;
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x350));
  }
  return -1;
}



// FUNCTION 14126d270 FUN_14126d270 body=191 status=ok
// SIG undefined FUN_14126d270(void)

int FUN_14126d270(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x350)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x348));
      if (lVar1 != 0) {
        lVar4 = FUN_1414e13e0();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) &&
           (cVar3 = BuildSettings::IsPromotedBuild
                              (*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x348)),param_2),
           cVar3 != '\0')) {
          return iVar5;
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x350));
  }
  return -1;
}



// FUNCTION 14126d330 FUN_14126d330 body=1209 status=ok
// SIG undefined FUN_14126d330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14126d330(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  uint local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  char local_c0;
  float local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_78 [8];
  char local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar5 = 0;
  local_e8 = param_4;
  local_e0 = param_3;
  local_d8 = param_2;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_3 + 0x40) < 1) {
      pcVar8 = *(char **)(param_1 + 0x38);
      pcVar7 = pcVar8 + (longlong)*(int *)(param_1 + 0x40) * 0x30;
      if (pcVar8 != pcVar7) {
        do {
          if (((param_4 & (*pcVar8 != '\0') + 1) != 0) && (*(longlong *)(pcVar8 + 0x18) != 0)) {
            *(undefined8 *)(*(longlong *)(pcVar8 + 0x28) + 0xb8) = *(undefined8 *)(param_3 + 0x10);
            (**(code **)(**(longlong **)(pcVar8 + 0x28) + 0x2a0))
                      (*(longlong **)(pcVar8 + 0x28),local_78,param_2);
            cVar2 = FUN_142cc7750(local_78);
            if (cVar2 != '\0') {
              fVar10 = (float)FUN_142cc4350(local_78,0);
              cVar2 = pcVar8[0x20];
              if (cVar2 == '\x04') {
                bVar9 = true;
              }
              else {
                if (cVar2 == '\x03') {
                  bVar9 = fVar10 == 1.0;
                }
                else {
                  bVar9 = fVar10 == 0.0;
                }
                if (bVar9) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
              }
              if (bVar9) {
                local_c8 = *(undefined8 *)(pcVar8 + 0x18);
                local_98 = 0;
                uStack_90 = 0;
                local_b0 = 0;
                local_a8 = 0;
                local_a0 = 0;
                local_88 = 0x3f800000;
                local_c0 = cVar2;
                local_b8 = fVar10;
                if (*(int *)(param_5 + 8) != 0) {
                  plVar4 = (longlong *)param_5[6];
                  if ((longlong *)param_5[6] == (longlong *)0x0) {
                    plVar4 = param_5 + 2;
                  }
                  if (plVar4 != (longlong *)0x0) {
                    uVar3 = uVar5;
                    if ((*(int *)(param_5 + 8) != 0) && (plVar4 != (longlong *)0x0)) {
                      uVar3 = (**(code **)(*plVar4 + 8))();
                    }
                    (*(code *)*param_5)(uVar3,&local_c8);
                  }
                }
              }
            }
            param_2 = local_d8;
            param_3 = local_e0;
            param_4 = local_e8;
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
          }
          pcVar8 = pcVar8 + 0x30;
        } while (pcVar8 != pcVar7);
      }
    }
    else {
      piVar6 = *(int **)(param_3 + 0x38);
      piVar1 = piVar6 + *(int *)(param_3 + 0x40);
      for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
        pcVar8 = (char *)((longlong)*piVar6 * 0x30 + *(longlong *)(param_1 + 0x38));
        if (((param_4 & (*pcVar8 != '\0') + 1) != 0) && (*(longlong *)(pcVar8 + 0x18) != 0)) {
          *(undefined8 *)(*(longlong *)(pcVar8 + 0x28) + 0xb8) = *(undefined8 *)(param_3 + 0x10);
          (**(code **)(**(longlong **)(pcVar8 + 0x28) + 0x2a0))
                    (*(longlong **)(pcVar8 + 0x28),local_78,param_2);
          cVar2 = FUN_142cc7750(local_78);
          if (cVar2 != '\0') {
            fVar10 = (float)FUN_142cc4350(local_78,0);
            cVar2 = pcVar8[0x20];
            if (cVar2 == '\x04') {
              bVar9 = true;
            }
            else {
              if (cVar2 == '\x03') {
                bVar9 = fVar10 == 1.0;
              }
              else {
                bVar9 = fVar10 == 0.0;
              }
              if (bVar9) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
            }
            if (bVar9) {
              local_c8 = *(undefined8 *)(pcVar8 + 0x18);
              local_98 = 0;
              uStack_90 = 0;
              local_b0 = 0;
              local_a8 = 0;
              local_a0 = 0;
              local_88 = 0x3f800000;
              local_c0 = cVar2;
              local_b8 = fVar10;
              if (*(int *)(param_5 + 8) != 0) {
                plVar4 = (longlong *)param_5[6];
                if ((longlong *)param_5[6] == (longlong *)0x0) {
                  plVar4 = param_5 + 2;
                }
                if (plVar4 != (longlong *)0x0) {
                  uVar3 = uVar5;
                  if ((*(int *)(param_5 + 8) != 0) && (plVar4 != (longlong *)0x0)) {
                    uVar3 = (**(code **)(*plVar4 + 8))();
                  }
                  (*(code *)*param_5)(uVar3,&local_c8);
                }
              }
            }
          }
          param_2 = local_d8;
          param_3 = local_e0;
          param_4 = local_e8;
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
        }
      }
    }
  }
  if (*(int *)(param_5 + 8) != 0) {
    plVar4 = (longlong *)param_5[6];
    if ((longlong *)param_5[6] == (longlong *)0x0) {
      plVar4 = param_5 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (param_5[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14126d820 FUN_14126d820 body=669 status=ok
// SIG undefined FUN_14126d820(void)

void FUN_14126d820(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      piVar11 = *(int **)(param_1 + 0x38);
      piVar1 = piVar11 + *(int *)(param_1 + 0x40);
      for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
        lVar10 = *(longlong *)(lVar3 + 8 + (longlong)*piVar11 * 0x28);
        lVar3 = lVar3 + (longlong)*piVar11 * 0x28;
        lVar9 = lVar10 + (longlong)*(int *)(lVar3 + 0x10) * 0x18;
        for (; lVar10 != lVar9; lVar10 = lVar10 + 0x18) {
          if ((*(byte *)(lVar10 + 4) & 1) != 0) {
            lVar8 = *(longlong *)(lVar10 + 8);
            lVar2 = lVar8 + (longlong)*(int *)(lVar10 + 0x10) * 0x48;
            if (lVar8 != lVar2) {
              do {
                uVar4 = uVar7;
                if (*(int *)(param_3 + 8) != 0) {
                  plVar5 = (longlong *)param_3[6];
                  if ((longlong *)param_3[6] == (longlong *)0x0) {
                    plVar5 = param_3 + 2;
                  }
                  if (plVar5 != (longlong *)0x0) {
                    uVar4 = (**(code **)(*plVar5 + 8))();
                  }
                }
                (*(code *)*param_3)(uVar4,lVar8);
                lVar8 = lVar8 + 0x48;
              } while (lVar8 != lVar2);
            }
          }
        }
        lVar9 = *(longlong *)(lVar3 + 0x18);
        lVar3 = lVar9 + (longlong)*(int *)(lVar3 + 0x20) * 0x48;
        if (lVar9 != lVar3) {
          do {
            uVar4 = uVar7;
            if (*(int *)(param_3 + 8) != 0) {
              plVar5 = (longlong *)param_3[6];
              if ((longlong *)param_3[6] == (longlong *)0x0) {
                plVar5 = param_3 + 2;
              }
              if (plVar5 != (longlong *)0x0) {
                uVar4 = (**(code **)(*plVar5 + 8))();
              }
            }
            (*(code *)*param_3)(uVar4,lVar9);
            lVar9 = lVar9 + 0x48;
          } while (lVar9 != lVar3);
        }
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x28);
    lVar3 = lVar9 + (longlong)*(int *)(param_1 + 0x30) * 0x48;
    for (; lVar9 != lVar3; lVar9 = lVar9 + 0x48) {
      lVar10 = *(longlong *)(lVar9 + 8);
      if (lVar10 != 0) {
        local_58 = 0;
        local_48 = 0;
        if (*(int *)(param_3 + 8) == 0) {
LAB_14126da37:
          local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar6 = (undefined8 *)param_3[6];
          if ((undefined8 *)param_3[6] == (undefined8 *)0x0) {
            puVar6 = param_3 + 2;
          }
          if (puVar6 == (undefined8 *)0x0) goto LAB_14126da37;
          plVar5 = (longlong *)(**(code **)*puVar6)(puVar6,local_78);
          (**(code **)(*plVar5 + 8))(plVar5);
          local_88[0] = (code *)*param_3;
          lVar10 = *(longlong *)(lVar9 + 8);
        }
        FUN_14126d330(lVar10,param_2,lVar9,3,local_88);
      }
    }
    if (*(int *)(param_3 + 8) == 0) goto LAB_14126daa3;
    plVar5 = (longlong *)param_3[6];
  }
  else {
    if (*(int *)(param_3 + 8) == 0) goto LAB_14126daa3;
    plVar5 = (longlong *)param_3[6];
  }
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_3 + 2;
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,0);
  }
LAB_14126daa3:
  if (param_3[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14126dac0 FUN_14126dac0 body=21 status=ok
// SIG undefined FUN_14126dac0(void)

void FUN_14126dac0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c12480();
  FWmfMediaPlayer::GetSamples(uVar1);
  return;
}



// FUNCTION 14126dae0 FUN_14126dae0 body=159 status=ok
// SIG undefined FUN_14126dae0(void)

void FUN_14126dae0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x408), lVar1 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00014126db5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0xd88) + 0x138))((longlong *)(lVar1 + 0xd88),param_2);
      return;
    }
  }
  FUN_140e7e720(param_1,param_2);
  return;
}



// FUNCTION 14126db80 FUN_14126db80 body=57 status=ok
// SIG undefined FUN_14126db80(void)

undefined8 FUN_14126db80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140e7e760(param_1 + 0x228);
  if (lVar1 != 0) {
    uVar2 = FUN_142d52a20(lVar1);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fed0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14126dbc0 FUN_14126dbc0 body=156 status=ok
// SIG undefined FUN_14126dbc0(void)

void FUN_14126dbc0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  lVar1 = FUN_140e7e760(param_1 + 0x228);
  if (lVar1 != 0) {
    uVar2 = FUN_142d52a20(lVar1);
    lVar3 = FArchive::operator<<(uVar2);
    *param_3 = *(undefined4 *)(lVar3 + 0x14);
    uVar2 = FUN_142d52a20(lVar1);
    lVar3 = FArchive::operator<<(uVar2);
    *param_4 = *(undefined4 *)(lVar3 + 0x20);
    uVar2 = FUN_142d52a20(lVar1);
    uVar2 = FArchive::operator<<(uVar2);
    uVar4 = FUN_142d5fed0(uVar2);
    *param_5 = uVar4;
  }
  return;
}



// FUNCTION 14126dc90 FUN_14126dc90 body=48 status=ok
// SIG undefined FUN_14126dc90(void)

void FUN_14126dc90(undefined8 param_1,longlong param_2)

{
  FUN_142cec1a0();
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
    return;
  }
  return;
}



// FUNCTION 14126dcc0 FUN_14126dcc0 body=140 status=ok
// SIG undefined FUN_14126dcc0(void)

longlong * FUN_14126dcc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  for (puVar4 = (undefined8 *)FUN_1407cf0d0(DAT_146877090); puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)FUN_1407cf0d0(*puVar4)) {
    uVar2 = puVar4[2];
    cVar3 = FUN_14122f110(uVar2);
    if (cVar3 != '\0') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
    }
  }
  return param_2;
}



// FUNCTION 14126dd50 FUN_14126dd50 body=103 status=ok
// SIG undefined FUN_14126dd50(void)

longlong FUN_14126dd50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x518) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x518) + 0x408);
  if (lVar1 != 0) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
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



// FUNCTION 14126ddd0 FUN_14126ddd0 body=148 status=ok
// SIG undefined FUN_14126ddd0(void)

longlong FUN_14126ddd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  
  lVar2 = FUN_142cc1010();
  if ((lVar2 == 0) && (lVar3 = FUN_1407c7450(*(undefined8 *)(param_1 + 0x118)), lVar3 != 0)) {
    FUN_1407c7790(lVar3,local_res10,*(undefined8 *)(param_1 + 0x118));
    lVar3 = FUN_1407cb5f0(lVar3,local_res10);
    if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x118), plVar1 != (longlong *)0x0)) {
      uVar4 = FUN_142dfdf30();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      if (lVar3 != 0) {
        lVar2 = lVar3;
      }
    }
  }
  return lVar2;
}



// FUNCTION 14126de70 FUN_14126de70 body=97 status=ok
// SIG undefined FUN_14126de70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14126de70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_18 = 0;
    puVar2 = local_28;
  }
  else {
    puVar2 = (undefined8 *)FUN_142d1a9e0(*(longlong *)(param_1 + 0x48),local_28);
  }
  *(undefined1 *)(param_2 + 2) = 0;
  if (*(char *)(puVar2 + 2) != '\0') {
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  return param_2;
}



// FUNCTION 14126df00 FUN_14126df00 body=16 status=ok
// SIG undefined FUN_14126df00(void)

char FUN_14126df00(void)

{
  char cVar1;
  
  cVar1 = FUN_140596bf0();
  return cVar1 + '\b';
}



// FUNCTION 14126df30 FUN_14126df30 body=39 status=ok
// SIG undefined FUN_14126df30(void)

void FUN_14126df30(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e0a580();
                    /* WARNING: Could not recover jumptable at 0x00014126df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x510) + 0x628))((longlong *)(param_1 + -0x510),uVar1);
  return;
}



// FUNCTION 14126df60 FUN_14126df60 body=131 status=ok
// SIG undefined FUN_14126df60(void)

void FUN_14126df60(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1[1] != 0) {
    lVar2 = FUN_142ceeb40(param_1[1],0);
    if (lVar2 != 0) {
      lVar3 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014126dfcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(lVar2 + 0x8e0) + 0x10))();
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014126dfdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 14126dff0 FUN_14126dff0 body=516 status=ok
// SIG undefined FUN_14126dff0(void)

ulonglong FUN_14126dff0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 local_res10 [24];
  
  if (param_2 == (longlong *)0x0) goto LAB_14126e1e7;
  lVar4 = FUN_1414193b0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) goto LAB_14126e1d5;
  lVar4 = FUN_1430b3b80();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    uVar3 = (**(code **)(*param_2 + 0x858))(param_2);
    in_RAX = (longlong *)FUN_14309b5c0(param_2,uVar3);
    bVar6 = in_RAX == (longlong *)0x0;
    param_2 = in_RAX;
LAB_14126e198:
    if (bVar6) goto LAB_14126e1e7;
  }
  else {
    lVar4 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      in_RAX = (longlong *)FUN_14304abb0(param_2);
      bVar6 = in_RAX == (longlong *)0x0;
      param_2 = in_RAX;
      goto LAB_14126e198;
    }
    lVar4 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      in_RAX = (longlong *)FUN_14304ab70(param_2);
      bVar6 = in_RAX == (longlong *)0x0;
      param_2 = in_RAX;
      goto LAB_14126e198;
    }
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      in_RAX = (longlong *)(uVar5 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (longlong *)CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)in_RAX == '\0') goto LAB_14126e1e7;
    in_RAX = (longlong *)UTBScriptedAnimInstance::GetCurrentAnimName(param_2,local_res10);
    plVar2 = (longlong *)*in_RAX;
    if (plVar2 == (longlong *)0x0) goto LAB_14126e1e7;
    param_2 = (longlong *)plVar2[0x1f];
    if (param_2 == (longlong *)0x0) {
      in_RAX = (longlong *)(**(code **)(*plVar2 + 0x368))(plVar2);
      param_2 = (longlong *)plVar2[0x1f];
      bVar6 = param_2 == (longlong *)0x0;
      goto LAB_14126e198;
    }
  }
  lVar4 = FUN_1414193b0();
  iVar1 = *(int *)(lVar4 + 0x90);
  uVar5 = (longlong)iVar1;
  if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
     (uVar5 = *(ulonglong *)(param_2[2] + 0x88),
     *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
    in_RAX = (longlong *)(uVar5 & 0xffffffffffffff00);
  }
  else {
    in_RAX = (longlong *)CONCAT71((int7)(uVar5 >> 8),1);
  }
  if (((char)in_RAX != '\0') && (param_2 != (longlong *)0x0)) {
LAB_14126e1d5:
    return (ulonglong)*(byte *)((longlong)param_2 + 0x131);
  }
LAB_14126e1e7:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14126e200 FUN_14126e200 body=661 status=ok
// SIG undefined FUN_14126e200(void)

/* WARNING: Removing unreachable block (ram,0x00014126e2eb) */

void FUN_14126e200(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_143077870();
  cVar2 = FUN_143070930(param_2);
  if (cVar2 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146877a70) &&
       (_Init_thread_header(&DAT_146877a70), DAT_146877a70 == -1)) {
      FName::FName(&DAT_146877a68,L"PartTypes",1);
      _Init_thread_footer(&DAT_146877a70);
    }
    cVar2 = FUN_143070860(param_2,&DAT_146877a68);
    if (cVar2 != '\0') {
      if ((int)param_2[8] == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)param_2[7];
      }
      FString::PrintfImpl(&local_18,L"%s%s",puVar7,L"[PartTypes]");
      lVar1 = param_2[1];
      iVar4 = (int)lVar1 + 1;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
      }
      puVar6 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_2);
      *puVar6 = 0;
      *puVar6 = local_18;
      *(undefined4 *)(puVar6 + 1) = (undefined4)local_10;
      *(undefined4 *)((longlong)puVar6 + 0xc) = local_10._4_4_;
      local_10 = 0;
      local_18 = 0;
      pwVar5 = L"False";
      if (*(char *)(param_1 + 0x905) != '\0') {
        pwVar5 = L"True";
      }
      FUN_141258650(param_2,L"Grip:",*(undefined1 *)(param_1 + 0x8f8),L"Foregrip:",
                    *(undefined1 *)(param_1 + 0x8f9),L"Has Pistol Stock:",pwVar5);
      FUN_141257e10(param_2,L"Mode:",*(undefined1 *)(param_1 + 0x8fb),L"Mode Switch:",
                    *(undefined1 *)(param_1 + 0x8fc));
      FUN_141258140(param_2,L"Bolt:",*(undefined1 *)(param_1 + 0x8fe),L"Trigger:",
                    *(undefined1 *)(param_1 + 0x8ff),L"Hammer:",*(undefined1 *)(param_1 + 0x900));
      uVar3 = FUN_143077760(param_1);
      FUN_141257e10(param_2,L"Reload:",uVar3,L"Mag:",*(undefined1 *)(param_1 + 0x8fa));
      FUN_141257d20(param_2,L"Barrel:",*(undefined1 *)(param_1 + 0x8fd));
      FUN_141257d20(param_2,L"Scope:",*(undefined1 *)(param_1 + 0x901));
      FUN_141257d20(param_2,L"Melee:",*(undefined1 *)(param_1 + 0x902));
      FUN_141257e10(param_2,L"Custom A:",*(undefined1 *)(param_1 + 0x903),L"Custom B:",
                    *(undefined1 *)(param_1 + 0x904));
    }
  }
  return;
}



// FUNCTION 14126e4a0 FUN_14126e4a0 body=120 status=ok
// SIG undefined FUN_14126e4a0(void)

undefined8 FUN_14126e4a0(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_14307d810(param_1 + -0x8f0,0);
  if (lVar2 != 0) {
    lVar3 = AVolume::GetPrivateStaticClass();
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
      uVar4 = FUN_140a06500(lVar2,param_2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14126e520 FUN_14126e520 body=38 status=ok
// SIG undefined FUN_14126e520(void)

undefined8 FUN_14126e520(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x960))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x28 + (longlong)param_2 * 0x30);
  }
  return 0;
}



// FUNCTION 14126e570 GetCollisionProfileName body=30 status=ok
// SIG undefined GetCollisionProfileName(void)

undefined8 UPrimitiveComponent::GetCollisionProfileName(longlong param_1,undefined8 param_2)

{
  FVector::Rotation(param_1 + 0x2c8);
  return param_2;
}



// FUNCTION 14126e5d0 FUN_14126e5d0 body=73 status=ok
// SIG undefined FUN_14126e5d0(void)

void FUN_14126e5d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x9c8) != 0) {
    uVar2 = FUN_14309ed70();
    cVar1 = FUN_1430790f0(uVar2);
    if ((cVar1 == '\x01') &&
       (*(int *)(*(longlong *)(param_1 + 0x9c8) + 0x4c) <= *(int *)(param_1 + 0x904))) {
      return;
    }
  }
  FUN_143078d90(param_1);
  return;
}



// FUNCTION 14126e620 FUN_14126e620 body=528 status=ok
// SIG undefined FUN_14126e620(void)

longlong FUN_14126e620(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
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
  
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 == 0) {
LAB_14126e81b:
    lVar5 = 0;
  }
  else {
    plVar9 = (longlong *)(lVar5 + 0xcf8);
    uVar2 = *(uint *)(lVar5 + 0xd20);
    puVar1 = (uint *)(lVar5 + 0xd08);
    uStack_84 = 1;
    local_88 = 0;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar2 != 0) {
      puVar11 = *(uint **)(lVar5 + 0xd18);
      if (*(uint **)(lVar5 + 0xd18) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar3 = *puVar11;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar3 == 0) {
        lVar8 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar6 = local_88 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar6;
        if (bVar4) goto LAB_14126e6fd;
        uVar3 = puVar11[lVar8 + 1];
      }
      uStack_84 = -uVar3 & uVar3;
      iVar6 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_74 = (iStack_70 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_14126e6fd:
        uStack_74 = uVar2;
      }
    }
    uVar3 = *(uint *)(lVar5 + 0xd20);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar10 = uVar3 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar1;
    local_40 = plVar9;
    puStack_30 = puVar1;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar3;
    if (uVar3 != uVar2) {
      puVar11 = *(uint **)(lVar5 + 0xd18);
      if (*(uint **)(lVar5 + 0xd18) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar7 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar6 = (int)uVar3 >> 5;
      while (uVar7 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_14126e7c3;
        uVar7 = puVar11[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar6 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_74 = (uVar10 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_14126e7c3:
        uStack_74 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_4c == uStack_74) && (local_58 == puVar1)) goto LAB_14126e81b;
      lVar5 = *(longlong *)((longlong)(int)uStack_4c * 0x68 + 0x30 + *plVar9);
      if (lVar5 != 0) break;
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return lVar5;
}



// FUNCTION 14126e830 FUN_14126e830 body=62 status=ok
// SIG undefined FUN_14126e830(void)

undefined8 FUN_14126e830(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + -2000);
  if (lVar1 != 0) {
    uVar2 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014126e862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14126e870 GetDescription body=62 status=ok
// SIG undefined GetDescription(void)

undefined8 * UMoveActorAction::GetDescription(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,
             L"Adds a collection of attachment effects that can apply to one or more use modes.",
             0xa2);
  return param_2;
}



// FUNCTION 14126e8b0 FUN_14126e8b0 body=23 status=ok
// SIG undefined FUN_14126e8b0(void)

undefined8 FUN_14126e8b0(undefined8 param_1,undefined8 param_2)

{
  FUN_142ff89b0();
  return param_2;
}



// FUNCTION 14126e8d0 FUN_14126e8d0 body=62 status=ok
// SIG undefined FUN_14126e8d0(void)

undefined8 * FUN_14126e8d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x4d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,
             L"Adds a collection of audio settings that can apply to one or more use modes.",0x9a);
  return param_2;
}



// FUNCTION 14126e910 FUN_14126e910 body=62 status=ok
// SIG undefined FUN_14126e910(void)

undefined8 * FUN_14126e910(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x3a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"Declare wwise events which must be prepared for streaming",0x74);
  return param_2;
}



// FUNCTION 14126e950 FUN_14126e950 body=150 status=ok
// SIG undefined FUN_14126e950(void)

undefined8 FUN_14126e950(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = *(undefined2 **)(param_1 + 0x48);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 5;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    local_res8[0] = *(undefined8 *)(puVar1 + 0xc);
    FName::ToString(local_res8,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"Adds weapon bonuses from collection \'%ls\'.",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14126e9f0 FUN_14126e9f0 body=346 status=ok
// SIG undefined FUN_14126e9f0(void)

undefined8 FUN_14126e9f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_28 = (undefined2 *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18);
    FName::ToString(&local_res8,&local_28);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar4 = local_28;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar3 = FUN_142e49950();
    lVar1 = *(longlong *)(param_1 + 0x40);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar1 != 0) {
          local_res10 = *(undefined8 *)(lVar1 + 0x18);
          FName::ToString(&local_res10,&local_38);
          goto LAB_14126ead3;
        }
        break;
      }
    }
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
LAB_14126ead3:
  puVar5 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar5 = local_38;
  }
  FString::PrintfImpl(param_2,L"Adds the damage type \'%ls\' and impact type \'%ls\'",puVar5,puVar4)
  ;
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14126eb50 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FGeomCacheVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Implement in subclass!",0x2e);
  return param_2;
}



// FUNCTION 14126eb90 FUN_14126eb90 body=62 status=ok
// SIG undefined FUN_14126eb90(void)

undefined8 * FUN_14126eb90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Adds foley accessory components to weapons",0x56);
  return param_2;
}



// FUNCTION 14126ebd0 FUN_14126ebd0 body=62 status=ok
// SIG undefined FUN_14126ebd0(void)

undefined8 * FUN_14126ebd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x4f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,
             L"Adds a collection of material effects that can apply to one or more use modes.",0x9e)
  ;
  return param_2;
}



// FUNCTION 14126ec10 FUN_14126ec10 body=33 status=ok
// SIG undefined FUN_14126ec10(void)

undefined8 FUN_14126ec10(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Adjusts wear parameters for the weapon\'s material.");
  return param_2;
}



// FUNCTION 14126ec40 FUN_14126ec40 body=150 status=ok
// SIG undefined FUN_14126ec40(void)

undefined8 FUN_14126ec40(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = *(undefined2 **)(param_1 + 0x38);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 5;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    local_res8[0] = *(undefined8 *)(puVar1 + 0xc);
    FName::ToString(local_res8,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"Overrides player melee with %ls when this weapon is equipped.",
                      puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14126ece0 GetDescription body=62 status=ok
// SIG undefined GetDescription(void)

undefined8 * UClearSelectionAction::GetDescription(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Adds a skeletal control to the weapon\'s mesh.",0x5c);
  return param_2;
}



// FUNCTION 14126ed20 FUN_14126ed20 body=137 status=ok
// SIG undefined FUN_14126ed20(void)

undefined8 FUN_14126ed20(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulonglong local_res8;
  wchar_t *local_18;
  int local_10;
  
  bVar1 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    pwVar2 = L"None";
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x18);
    FName::ToString(&local_res8,&local_18);
    bVar1 = true;
    pwVar2 = L"";
    if (local_10 != 0) {
      pwVar2 = local_18;
    }
  }
  FString::PrintfImpl(param_2,L"Adds weapon use component \'%ls\'",pwVar2);
  if ((bVar1) && (local_18 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14126edb0 FUN_14126edb0 body=138 status=ok
// SIG undefined FUN_14126edb0(void)

undefined8 FUN_14126edb0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  wchar_t *pwVar3;
  ulonglong local_res8;
  longlong local_18 [2];
  
  bVar2 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    pwVar3 = L"None";
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + 0x18);
    puVar1 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar3 = L"";
      bVar2 = true;
    }
    else {
      pwVar3 = (wchar_t *)*puVar1;
      bVar2 = true;
    }
  }
  FString::PrintfImpl(param_2,L"Adds weapon use mode crosshair \'%ls\'",pwVar3);
  if ((bVar2) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14126ee40 FUN_14126ee40 body=119 status=ok
// SIG undefined FUN_14126ee40(void)

undefined8 FUN_14126ee40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    pwVar5 = L"None";
  }
  else {
    lVar4 = lVar1 + 0x80;
    cVar2 = FText::IsEmpty(lVar4);
    if (cVar2 != '\0') {
      lVar4 = lVar1 + 0x68;
    }
    puVar3 = (undefined8 *)FText::ToString(lVar4);
    if (*(int *)(puVar3 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*puVar3;
    }
  }
  FString::PrintfImpl(param_2,L"Adds weapon use mode name \'%ls\'",pwVar5);
  return param_2;
}



// FUNCTION 14126eec0 FUN_14126eec0 body=137 status=ok
// SIG undefined FUN_14126eec0(void)

undefined8 FUN_14126eec0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulonglong local_res8;
  wchar_t *local_18;
  int local_10;
  
  bVar1 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    pwVar2 = L"None";
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x18);
    FName::ToString(&local_res8,&local_18);
    bVar1 = true;
    pwVar2 = L"";
    if (local_10 != 0) {
      pwVar2 = local_18;
    }
  }
  FString::PrintfImpl(param_2,L"Adds a secondary weapon use mode component \'%ls\'",pwVar2);
  if ((bVar1) && (local_18 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14126ef50 FUN_14126ef50 body=85 status=ok
// SIG undefined FUN_14126ef50(void)

undefined8 * FUN_14126ef50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uStack_27;
  uint uStack_14;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x860);
    uVar1 = *(undefined8 *)(lVar2 + 0x868);
    *param_2 = *(undefined8 *)(lVar2 + 0x858);
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    return param_2;
  }
  *param_2 = CONCAT71(uStack_27,0xff);
  param_2[1] = 0;
  param_2[2] = (ulonglong)uStack_14 << 0x20;
  return param_2;
}



// FUNCTION 14126efb0 FUN_14126efb0 body=785 status=ok
// SIG undefined FUN_14126efb0(void)

void FUN_14126efb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_143079410();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146877a80) && (_Init_thread_header(&DAT_146877a80), DAT_146877a80 == -1)) {
    uVar1 = FUN_14149b100();
    FUN_14149b100();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"QuickEquipTime",1);
    DAT_146877a78 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877a80);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146877a78 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146877a78 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146877a78 + 0x30));
  }
  if ((*piVar5 < DAT_146877a90) && (_Init_thread_header(&DAT_146877a90), DAT_146877a90 == -1)) {
    uVar1 = FUN_14149b100();
    FUN_14149b100();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AudioBodyLoopState",1);
    DAT_146877a88 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877a90);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146877a88 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146877a88 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146877a88 + 0x30));
  }
  if ((*piVar5 < DAT_146877aa0) && (_Init_thread_header(&DAT_146877aa0), DAT_146877aa0 == -1)) {
    uVar1 = FUN_14149b100();
    FUN_14149b100();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bAmpEffectActive",1);
    DAT_146877a98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877aa0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146877a98 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146877a98 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146877a98 + 0x30));
  }
  if ((*piVar5 < DAT_146877ab0) && (_Init_thread_header(&DAT_146877ab0), DAT_146877ab0 == -1)) {
    uVar1 = FUN_14149b100();
    FUN_14149b100();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"WeaponSkin",1);
    DAT_146877aa8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877ab0);
  }
  if (0 < *(int *)(DAT_146877aa8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146877aa8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146877aa8 + 0x30));
  }
  return;
}



// FUNCTION 14126f2d0 FUN_14126f2d0 body=597 status=ok
// SIG undefined FUN_14126f2d0(void)

void FUN_14126f2d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14126efb0();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146877ac0) && (_Init_thread_header(&DAT_146877ac0), DAT_146877ac0 == -1)) {
    uVar1 = FUN_141499e60();
    FUN_141499e60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"IronBear",1);
    DAT_146877ab8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877ac0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146877ab8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146877ab8 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146877ab8 + 0x30));
  }
  if ((*piVar4 < DAT_146877ad0) && (_Init_thread_header(&DAT_146877ad0), DAT_146877ad0 == -1)) {
    uVar1 = FUN_141499e60();
    FUN_141499e60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HardPointData",1);
    DAT_146877ac8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877ad0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146877ac8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146877ac8 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146877ac8 + 0x30));
  }
  if ((*piVar4 < DAT_146877ae0) && (_Init_thread_header(&DAT_146877ae0), DAT_146877ae0 == -1)) {
    uVar1 = FUN_141499e60();
    FUN_141499e60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HardPointAugmentMod",1);
    DAT_146877ad8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877ae0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146877ad8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146877ad8 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146877ad8 + 0x30));
  }
  return;
}



// FUNCTION 14126f530 FUN_14126f530 body=232 status=ok
// SIG undefined FUN_14126f530(void)

void FUN_14126f530(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14126efb0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146877b10) && (_Init_thread_header(&DAT_146877b10), DAT_146877b10 == -1))
  {
    uVar1 = FUN_14149a4d0();
    FUN_14149a4d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PreferredSlotId",1);
    DAT_146877b08 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877b10);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146877b08 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146877b08 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146877b08 + 0x30));
  }
  return;
}



// FUNCTION 14126f620 FUN_14126f620 body=433 status=ok
// SIG undefined FUN_14126f620(void)

void FUN_14126f620(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142cee100();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468779f0) && (_Init_thread_header(&DAT_1468779f0), DAT_1468779f0 == -1)) {
    uVar1 = FUN_1414e0f70();
    FUN_1414e0f70();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AdjacentSeatSlot",1);
    DAT_1468779e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468779f0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468779e8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468779e8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468779e8 + 0x30));
  }
  if ((*piVar5 < DAT_146877a00) && (_Init_thread_header(&DAT_146877a00), DAT_146877a00 == -1)) {
    uVar1 = FUN_1414e0f70();
    FUN_1414e0f70();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bCanBeSwitchedTo",1);
    DAT_1468779f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146877a00);
  }
  if (0 < *(int *)(DAT_1468779f8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468779f8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468779f8 + 0x30));
  }
  return;
}



// FUNCTION 14126f7e0 FUN_14126f7e0 body=21 status=ok
// SIG undefined FUN_14126f7e0(void)

undefined8 FUN_14126f7e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x908) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x908) + 0x218);
  }
  return 0;
}



// FUNCTION 14126f800 FUN_14126f800 body=21 status=ok
// SIG undefined FUN_14126f800(void)

undefined1 FUN_14126f800(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa08) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0xa08) + 0x111);
  }
  return 0;
}



// FUNCTION 14126f850 FUN_14126f850 body=89 status=ok
// SIG undefined FUN_14126f850(void)

longlong FUN_14126f850(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    lVar3 = AUGSpawnProxyManager::GetPrivateStaticClass();
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



// FUNCTION 14126f930 FUN_14126f930 body=89 status=ok
// SIG undefined FUN_14126f930(void)

longlong FUN_14126f930(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14148cad0();
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



// FUNCTION 14126f990 FUN_14126f990 body=532 status=ok
// SIG undefined FUN_14126f990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14126f990(undefined8 *param_1,float *param_2,longlong param_3,float param_4,char param_5
                     )

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float *pfVar7;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_58;
  
  uVar6 = uRam00000001468b5b78;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(param_3 + 0x4d0);
  if ((plVar1 == (longlong *)0x0) || ((param_5 != '\0' && (param_1[7] == 0)))) {
    *(undefined8 *)param_2 = _DAT_1468b5b70;
    *(undefined8 *)(param_2 + 2) = uVar6;
    uVar6 = uRam00000001468b5b88;
    *(undefined8 *)(param_2 + 4) = _DAT_1468b5b80;
    *(undefined8 *)(param_2 + 6) = uVar6;
    uVar6 = uRam00000001468b5b98;
    *(undefined8 *)(param_2 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(param_2 + 10) = uVar6;
  }
  else {
    (**(code **)(*plVar1 + 0x420))(plVar1,&local_88,*param_1,0);
    fVar19 = *(float *)(param_1 + 2) * local_68;
    fVar20 = *(float *)((longlong)param_1 + 0x14) * fStack_64;
    fVar21 = *(float *)(param_1 + 3) * fStack_60;
    fVar12 = fVar21 * fStack_84 - fVar20 * fStack_80;
    fVar13 = fVar19 * fStack_80 - fVar21 * local_88;
    fVar14 = fVar20 * local_88 - fVar19 * fStack_84;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    pfVar7 = (float *)FRotator::Quaternion((longlong)param_1 + 0x1c,local_98);
    fVar2 = *pfVar7;
    fVar3 = pfVar7[1];
    fVar4 = pfVar7[2];
    fVar5 = pfVar7[3];
    fVar15 = local_88 * fVar5 * _DAT_1468774d0;
    fVar16 = local_88 * fVar4 * fRam00000001468774d4;
    fVar17 = local_88 * fVar3 * fRam00000001468774d8;
    fVar18 = local_88 * fVar2 * fRam00000001468774dc;
    fVar8 = fStack_84 * fVar4 * _DAT_1468774c0;
    fVar9 = fStack_84 * fVar5 * fRam00000001468774c4;
    fVar10 = fStack_84 * fVar2 * fRam00000001468774c8;
    fVar11 = fStack_84 * fVar3 * fRam00000001468774cc;
    fVar22 = fStack_80 * fVar3 * _DAT_1468774b0;
    fVar23 = fStack_80 * fVar2 * fRam00000001468774b4;
    fVar24 = fStack_80 * fVar5 * fRam00000001468774b8;
    fVar25 = fStack_80 * fVar4 * fRam00000001468774bc;
    if (param_5 != '\0') {
      param_4 = param_4 - *(float *)(param_1[7] + 0x48);
    }
    param_2[8] = local_68;
    param_2[9] = fStack_64;
    param_2[10] = fStack_60;
    param_2[0xb] = fStack_5c;
    *param_2 = fVar15 + fStack_7c * fVar2 + fVar8 + fVar22;
    param_2[1] = fVar16 + fStack_7c * fVar3 + fVar9 + fVar23;
    param_2[2] = fVar17 + fStack_7c * fVar4 + fVar10 + fVar24;
    param_2[3] = fVar18 + fStack_7c * fVar5 + fVar11 + fVar25;
    param_2[4] = (fVar14 * fStack_84 - fVar13 * fStack_80) + fStack_7c * fVar12 + fVar19 + local_78
                 + 0.0;
    param_2[5] = (fVar12 * fStack_80 - fVar14 * local_88) + fStack_7c * fVar13 + fVar20 + fStack_74
                 + 0.0;
    param_2[6] = (fVar13 * local_88 - fVar12 * fStack_84) + fStack_7c * fVar14 + fVar21 + fStack_70
                 + param_4;
    param_2[7] = fStack_6c + 0.0 + 0.0;
  }
  return param_2;
}



// FUNCTION 14126fbb0 FUN_14126fbb0 body=144 status=ok
// SIG undefined FUN_14126fbb0(void)

ulonglong FUN_14126fbb0(longlong param_1,undefined1 param_2)

{
  ulonglong uVar1;
  
  switch(param_2) {
  case 0:
    return (ulonglong)*(byte *)(param_1 + 0x8f8);
  case 1:
    return (ulonglong)*(byte *)(param_1 + 0x8f9);
  case 2:
    return (ulonglong)*(byte *)(param_1 + 0x8fa);
  case 3:
    return (ulonglong)*(byte *)(param_1 + 0x8fb);
  case 4:
    return (ulonglong)*(byte *)(param_1 + 0x8fc);
  case 5:
    return (ulonglong)*(byte *)(param_1 + 0x8fd);
  case 6:
    return (ulonglong)*(byte *)(param_1 + 0x901);
  case 7:
    uVar1 = FUN_143077760();
    return uVar1;
  case 8:
    return (ulonglong)*(byte *)(param_1 + 0x902);
  case 9:
    return (ulonglong)*(byte *)(param_1 + 0x8fe);
  case 10:
    return (ulonglong)*(byte *)(param_1 + 0x8ff);
  case 0xb:
    return (ulonglong)*(byte *)(param_1 + 0x900);
  case 0xc:
    return (ulonglong)*(byte *)(param_1 + 0x903);
  case 0xd:
    return (ulonglong)*(byte *)(param_1 + 0x904);
  default:
    return 0;
  }
}



// FUNCTION 14126fc80 FUN_14126fc80 body=123 status=ok
// SIG undefined FUN_14126fc80(void)

void FUN_14126fc80(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  byte bVar2;
  
  *param_3 = 0;
  *param_4 = 0;
  bVar2 = FUN_14126dff0();
  if ((((*(byte *)(param_1 + 0x28) & 1) != 0) &&
      (lVar1 = *(longlong *)(param_1 + 0x30 + (longlong)(int)(uint)bVar2 * 8), *param_3 = lVar1,
      lVar1 == 0)) && ((*(byte *)(param_1 + 0x28) & 4) != 0)) {
    *param_3 = *(longlong *)(param_1 + 0x30);
  }
  if ((((*(byte *)(param_1 + 0x28) & 2) != 0) &&
      (lVar1 = *(longlong *)(param_1 + 0x60 + (ulonglong)bVar2 * 8), *param_4 = lVar1, lVar1 == 0))
     && ((*(byte *)(param_1 + 0x28) & 4) != 0)) {
    *param_4 = *(longlong *)(param_1 + 0x60);
  }
  return;
}



// FUNCTION 14126fd00 FUN_14126fd00 body=135 status=ok
// SIG undefined FUN_14126fd00(void)

void FUN_14126fd00(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_141273c20();
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar2 = 0;
  }
  else if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  *param_3 = uVar2;
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    if (cVar1 != '\0') {
      *param_4 = *(undefined8 *)(param_1 + 0x48);
      return;
    }
    *param_4 = *(undefined8 *)(param_1 + 0x40);
    return;
  }
  *param_4 = 0;
  return;
}



// FUNCTION 14126fd90 FUN_14126fd90 body=46 status=ok
// SIG undefined FUN_14126fd90(void)

void FUN_14126fd90(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x288))();
  *param_3 = uVar1;
  *param_4 = 0;
  return;
}



// FUNCTION 14126fdc0 FUN_14126fdc0 body=57 status=ok
// SIG undefined FUN_14126fdc0(void)

longlong FUN_14126fdc0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    bVar2 = FUN_14126dff0();
    lVar1 = *(longlong *)(param_1 + 0x30 + (ulonglong)bVar2 * 8);
    if (lVar1 != 0) {
      return lVar1;
    }
    if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
      return *(longlong *)(param_1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 14126fe00 FUN_14126fe00 body=52 status=ok
// SIG undefined FUN_14126fe00(void)

undefined8 FUN_14126fe00(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    return 0;
  }
  cVar1 = FUN_141273c20();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x38);
  }
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 14126fe40 FUN_14126fe40 body=503 status=ok
// SIG undefined FUN_14126fe40(void)

undefined8 FUN_14126fe40(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_2 == (longlong *)0x0) goto LAB_141270023;
  lVar4 = FUN_141499e60();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar3 = (**(code **)(*param_2 + 0x858))(param_2);
    lVar4 = FUN_14309b5c0(param_2,uVar3);
    if (lVar4 == 0) goto LAB_141270023;
    lVar5 = FUN_1414193b0();
    plVar6 = param_2;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
LAB_14126ffb3:
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    lVar4 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141270023;
    plVar6 = (longlong *)param_2[0x29];
    if (plVar6 == (longlong *)0x0) {
LAB_14126ff6d:
      plVar6 = (longlong *)0x0;
    }
    else {
      lVar4 = FUN_141499e60();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_14126ff6d;
    }
    lVar4 = FUN_14304abb0(param_2);
    if (lVar4 == 0) goto LAB_141270023;
    lVar5 = FUN_1414193b0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) goto LAB_14126ffb3;
    bVar2 = true;
  }
  if ((bVar2) && (lVar4 != 0)) {
    if (*(char *)(lVar4 + 0x131) == '\x02') {
      return *(undefined8 *)(param_1 + 0x30);
    }
    if ((plVar6 != (longlong *)0x0) && (plVar6[0x141] != 0)) {
      cVar1 = *(char *)(plVar6[0x141] + 0x111);
      if (cVar1 == '\x03') {
        return *(undefined8 *)(param_1 + 0x38);
      }
      if (cVar1 == '\x02') {
        return *(undefined8 *)(param_1 + 0x40);
      }
    }
  }
LAB_141270023:
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 141270040 FUN_141270040 body=300 status=ok
// SIG undefined FUN_141270040(void)

void FUN_141270040(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x438);
  plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x440) * 2;
  for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
    lVar5 = *plVar6;
    if ((*(char *)(param_2 + 8) == *(char *)(lVar5 + 0x38)) && (lVar5 != 0)) {
      lVar4 = UUGJournalKey::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar5 = FWeakObjectPtr::Get(), lVar5 != 0)) {
        if ((*(int *)(param_2 + 0x10) == 0) && (*(int *)(param_2 + 0x14) == 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) ||
           (cVar3 = UActorComponent::ComponentHasTag(lVar5,*(undefined8 *)(param_2 + 0x10)),
           cVar3 != '\0')) {
          iVar1 = *(int *)(param_3 + 200);
          *(int *)(param_3 + 200) = iVar1 + 1;
          if (*(int *)(param_3 + 0xcc) < iVar1 + 1) {
            FUN_14127c7c0(param_3,iVar1);
          }
          lVar4 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar4 = param_3;
          }
          *(longlong *)(lVar4 + (longlong)iVar1 * 8) = lVar5;
        }
      }
    }
  }
  return;
}



// FUNCTION 141270170 FUN_141270170 body=33 status=ok
// SIG undefined FUN_141270170(void)

float FUN_141270170(longlong param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)(param_1 + 0x954);
  if (*(float *)(param_1 + 0x954) <= 0.0) {
    pfVar1 = (float *)(param_1 + 0x644);
  }
  return *pfVar1;
}



// FUNCTION 1412701a0 FUN_1412701a0 body=563 status=ok
// SIG undefined FUN_1412701a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1412701a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 *puVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  uint local_e8 [2];
  float local_e0 [2];
  undefined1 local_d8 [8];
  uint *local_d0;
  float *local_c8;
  float local_b8;
  char local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [8];
  undefined1 *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  pfVar8 = (float *)0x0;
  fVar9 = 0.0;
  local_b8 = 0.0;
  local_b4 = '\0';
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0xffffffff;
  local_7c = 0;
  local_70 = (undefined1 *)0x0;
  local_68 = 0;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
            (&local_b0,(int)param_3[1]);
  local_e8[0] = 0;
  pfVar5 = pfVar8;
  if (0 < (int)param_3[1]) {
    do {
      local_e0[0] = (float)FUN_142c98860((longlong)(int)pfVar5 * 0x40 + 8 + *param_3,param_2);
      if ((1e-08 < local_e0[0]) || (local_b4 != '\0')) {
        if ((int)local_a8 != local_7c) {
          puVar6 = local_78;
          if (local_70 != (undefined1 *)0x0) {
            puVar6 = local_70;
          }
          iVar3 = *(int *)(puVar6 + (longlong)(int)(local_68 - 1U & local_e8[0]) * 4);
          while (iVar3 != -1) {
            lVar7 = (longlong)iVar3;
            if (*(uint *)(local_b0 + lVar7 * 0x10) == local_e8[0]) {
              pfVar5 = (float *)(local_b0 + lVar7 * 0x10);
              if (iVar3 != -1) goto LAB_1412702b7;
              break;
            }
            iVar3 = *(int *)(local_b0 + 8 + lVar7 * 0x10);
          }
        }
        pfVar5 = pfVar8;
LAB_1412702b7:
        pfVar4 = pfVar5 + 1;
        if (pfVar5 == (float *)0x0) {
          pfVar4 = pfVar8;
        }
        if (pfVar4 != (float *)0x0) {
          local_b8 = local_b8 - *pfVar4;
        }
        local_b8 = local_b8 + local_e0[0];
        local_d0 = local_e8;
        local_c8 = local_e0;
        FUN_1407b93f0(&local_b0,local_d8,&local_d0,0);
      }
      local_e8[0] = local_e8[0] + 1;
      pfVar5 = (float *)(ulonglong)local_e8[0];
    } while ((int)local_e8[0] < (int)param_3[1]);
  }
  cVar2 = FUN_1407d9ec0(&local_b8,local_e0,0xbf800000);
  if (cVar2 != '\0') {
    pfVar5 = (float *)((longlong)(int)local_e0[0] * 0x40 + *param_3);
    fVar1 = pfVar5[1];
    fVar9 = *pfVar5;
    iVar3 = rand();
    fVar9 = (float)iVar3 * 3.051851e-05 * (fVar1 - fVar9) + fVar9;
  }
  local_68 = 0;
  if (local_70 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_b0);
  return fVar9;
}



// FUNCTION 1412703e0 FUN_1412703e0 body=136 status=ok
// SIG undefined FUN_1412703e0(void)

undefined8 * FUN_1412703e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x9c0) != 0) {
    lVar3 = FUN_1430aef40();
    for (lVar1 = *(longlong *)(param_1 + 0x9c0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (*(longlong *)(param_1 + 0x9c0) != 0) {
          uVar4 = FUN_14309ed70(param_1);
          cVar2 = FUN_1430790f0(uVar4);
          if (cVar2 == '\x01') {
            *param_2 = *(undefined8 *)(param_1 + 0x9c0);
            return param_2;
          }
        }
        break;
      }
    }
  }
  ACursedBehemoth_ArenaBoss::GetPhase1CameraMomentTag(param_1,param_2);
  return param_2;
}



// FUNCTION 141270470 FUN_141270470 body=71 status=ok
// SIG undefined FUN_141270470(void)

undefined8 * FUN_141270470(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x988);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x980))) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x978) + (longlong)iVar1 * 8);
    return param_2;
  }
  FUN_14307c7e0(param_1);
  return param_2;
}



// FUNCTION 1412704c0 FUN_1412704c0 body=186 status=ok
// SIG undefined FUN_1412704c0(void)

undefined8 * FUN_1412704c0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x9b8) != 0) {
    lVar4 = FUN_1428dfc70();
    for (lVar2 = *(longlong *)(param_1 + 0x9b8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) {
        if (*(longlong *)(param_1 + 0x9b8) != 0) {
          uVar5 = FUN_14309ed70(param_1);
          cVar3 = FUN_1430790f0(uVar5);
          if (cVar3 == '\x01') {
            *param_2 = *(undefined8 *)(param_1 + 0x9b8);
            return param_2;
          }
        }
        break;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x988);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x980))) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x978) + (longlong)iVar1 * 8);
    return param_2;
  }
  FUN_14307c7e0(param_1,param_2);
  return param_2;
}



// FUNCTION 141270580 FUN_141270580 body=63 status=ok
// SIG undefined FUN_141270580(void)

ushort FUN_141270580(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = FUN_140596bf0();
  uVar2 = FUN_140a66590(param_1);
  return uVar2 | (*(ushort *)(param_1 + 0x6e0) & 0xff) << (bVar1 & 0x1f);
}



// FUNCTION 1412705c0 FUN_1412705c0 body=102 status=ok
// SIG undefined FUN_1412705c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412705c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x520);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 141270630 FUN_141270630 body=310 status=ok
// SIG undefined FUN_141270630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141270630(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 1;
  }
  lVar4 = (**(code **)(*(longlong *)(param_1 + -0x688) + 0x148))(param_1 + -0x688);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0x688) + 0x148))(param_1 + -0x688);
    lVar4 = UWorld::GetGameState<APVPGameState>(uVar5);
    if ((lVar4 != 0) && (param_2 != 0)) {
      lVar1 = *(longlong *)(param_2 + 0x118);
      if (lVar1 != 0) {
        lVar6 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) &&
           (iVar3 = (**(code **)(*(longlong *)(lVar1 + 0x8b0) + 0x20))
                              ((longlong *)(lVar1 + 0x8b0),param_1 + -0x688), iVar3 == 0))
        goto LAB_141270750;
      }
      FUN_140cd8d10(lVar4,&local_28,param_2,*(undefined8 *)(param_1 + 0x28));
      if (local_24 != '\0') {
        return (ulonglong)local_28;
      }
    }
  }
LAB_141270750:
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x408))();
  return uVar7;
}



// FUNCTION 141270770 FUN_141270770 body=292 status=ok
// SIG undefined FUN_141270770(void)

undefined8 FUN_141270770(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  bVar6 = *(longlong *)(param_1 + 0x50) == 0;
  if (bVar6) {
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0x688) + 0x5e0))
                      ((longlong *)(param_1 + -0x688),local_48);
    uVar5 = FText::FromString(local_38,uVar5);
  }
  else {
    uVar5 = FUN_142dd0500(*(longlong *)(param_1 + 0x50),local_20);
  }
  FText::FText(param_2,uVar5);
  if (bVar6) {
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
  }
  if (bVar6) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar6) && (local_18 != (longlong *)0x0)) {
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
  return param_2;
}



// FUNCTION 1412708a0 FUN_1412708a0 body=59 status=ok
// SIG undefined FUN_1412708a0(void)

undefined8 FUN_1412708a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong **)(param_1 + 0x908) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x908) + 0x540))();
    return param_2;
  }
  FUN_14307cec0(param_1);
  return param_2;
}



// FUNCTION 1412708f0 FUN_1412708f0 body=459 status=ok
// SIG undefined FUN_1412708f0(void)

undefined8 * FUN_1412708f0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 local_28 [32];
  
  if (param_3 == (longlong *)0x0) {
LAB_141270a9c:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined1 *)(param_2 + 1) = 0xff;
    return param_2;
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
  if (!bVar1) goto LAB_141270a9c;
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 0:
    pfVar4 = (float *)FUN_1412262e0(param_3,local_28);
    uVar5 = 0xd;
    fVar6 = SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1] + pfVar4[2] * pfVar4[2]);
    break;
  case 1:
    fVar6 = *(float *)((longlong)param_3 + 0x78c);
    uVar5 = 0xd;
    break;
  case 2:
    fVar6 = *(float *)((longlong)param_3 + 0x784);
    uVar5 = 0xd;
    break;
  case 3:
    pfVar4 = (float *)FUN_1412262e0(param_3,local_28);
    fVar6 = SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1] + pfVar4[2] * pfVar4[2]);
    goto LAB_141270a10;
  case 4:
    fVar6 = *(float *)((longlong)param_3 + 0x78c);
    goto LAB_141270a10;
  case 5:
    fVar6 = *(float *)((longlong)param_3 + 0x784);
LAB_141270a10:
    uVar5 = 0xe;
    break;
  case 6:
    uVar7 = FUN_141227320(param_3);
    goto LAB_141270a7c;
  case 7:
    cVar2 = (**(code **)(*param_3 + 0x780))(param_3);
    if (cVar2 == '\0') goto LAB_141270a5f;
LAB_141270a74:
    uVar7 = 0x3f800000;
    goto LAB_141270a7c;
  case 8:
    cVar2 = (**(code **)(*param_3 + 0x780))(param_3);
    if (cVar2 == '\0') goto LAB_141270a74;
LAB_141270a5f:
    uVar7 = 0;
LAB_141270a7c:
    *(undefined1 *)(param_2 + 1) = 0xff;
    FUN_140a393e0(param_2);
    *(undefined4 *)param_2 = uVar7;
    goto LAB_141270a26;
  default:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined1 *)(param_2 + 1) = 0xff;
    return param_2;
  }
  uVar7 = FUN_140a23120(fVar6 * 0.01,0xc,uVar5);
  *(undefined4 *)param_2 = uVar7;
LAB_141270a26:
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 141270ae0 FUN_141270ae0 body=528 status=ok
// SIG undefined FUN_141270ae0(void)

longlong FUN_141270ae0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
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
  
  lVar5 = *(longlong *)(param_1 + 0x188);
  if (lVar5 == 0) {
LAB_141270cdb:
    lVar5 = 0;
  }
  else {
    plVar9 = (longlong *)(lVar5 + 0xcf8);
    uVar2 = *(uint *)(lVar5 + 0xd20);
    puVar1 = (uint *)(lVar5 + 0xd08);
    uStack_84 = 1;
    local_88 = 0;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar2 != 0) {
      puVar11 = *(uint **)(lVar5 + 0xd18);
      if (*(uint **)(lVar5 + 0xd18) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar3 = *puVar11;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar3 == 0) {
        lVar8 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar6 = local_88 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar6;
        if (bVar4) goto LAB_141270bbd;
        uVar3 = puVar11[lVar8 + 1];
      }
      uStack_84 = -uVar3 & uVar3;
      iVar6 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_74 = (iStack_70 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_141270bbd:
        uStack_74 = uVar2;
      }
    }
    uVar3 = *(uint *)(lVar5 + 0xd20);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar10 = uVar3 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar1;
    local_40 = plVar9;
    puStack_30 = puVar1;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar3;
    if (uVar3 != uVar2) {
      puVar11 = *(uint **)(lVar5 + 0xd18);
      if (*(uint **)(lVar5 + 0xd18) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar7 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar6 = (int)uVar3 >> 5;
      while (uVar7 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_141270c83;
        uVar7 = puVar11[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar6 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_74 = (uVar10 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_141270c83:
        uStack_74 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_4c == uStack_74) && (local_58 == puVar1)) goto LAB_141270cdb;
      lVar5 = *(longlong *)((longlong)(int)uStack_4c * 0x68 + 0x30 + *plVar9);
      if (lVar5 != 0) break;
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return lVar5;
}



// FUNCTION 141270cf0 FUN_141270cf0 body=21 status=ok
// SIG undefined FUN_141270cf0(void)

undefined8 FUN_141270cf0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x968) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0x128);
  }
  return 0;
}



// FUNCTION 141270d10 FUN_141270d10 body=12 status=ok
// SIG undefined FUN_141270d10(void)

void FUN_141270d10(longlong param_1)

{
  FUN_140e83500(param_1 + 0x228);
  return;
}



// FUNCTION 141270d40 FUN_141270d40 body=58 status=ok
// SIG undefined FUN_141270d40(void)

undefined8 * FUN_141270d40(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140e7eef0(param_1 + 0x228,param_3);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x30);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 141270d80 FUN_141270d80 body=261 status=ok
// SIG undefined FUN_141270d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141270d80(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_18 [16];
  
  FUN_14307d840();
  plVar4 = *(longlong **)(param_1 + -0x340);
  if (plVar4 != (longlong *)0x0) {
    lVar2 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = URemnantQuestSubQuest::GetPrivateStaticClass();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar3);
      if (plVar4 != (longlong *)0x0) {
        FUN_1430d6050(plVar4,&local_28);
        if (((local_28 == _DAT_1462a25d0) && (local_24 == _DAT_1462a25d4)) &&
           (local_20 == _DAT_1462a25d8)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar2 = *plVar4;
          uVar3 = FUN_1430d6050(plVar4,local_18);
          (**(code **)(lVar2 + 0x5b0))(plVar4,param_2,uVar3);
        }
      }
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 141270e90 FUN_141270e90 body=63 status=ok
// SIG undefined FUN_141270e90(void)

undefined8 * FUN_141270e90(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x968) != 0) {
    FString::FString(param_2,*(longlong *)(param_1 + 0x968) + 0x130);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141270ed0 FUN_141270ed0 body=89 status=ok
// SIG undefined FUN_141270ed0(void)

longlong FUN_141270ed0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x7e8);
  if (lVar2 == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
      lVar2 = *(longlong *)(param_1 + 0x7e8);
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2a8), lVar1 != 0)) {
      *(longlong *)(param_1 + 0x7e8) = lVar1;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 141270f30 FUN_141270f30 body=57 status=ok
// SIG undefined FUN_141270f30(void)

void FUN_141270f30(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140e83500(param_1 + 0x228);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141270f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x900))(plVar1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 141270f70 FUN_141270f70 body=84 status=ok
// SIG undefined FUN_141270f70(void)

undefined1 FUN_141270f70(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140e96340(param_1 + 0x228);
  if (cVar1 == '\0') {
    return 0xff;
  }
  if (param_2 != 0) {
    uVar2 = FUN_140e7ef50(param_1 + 0x228,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141270fd0 FUN_141270fd0 body=12 status=ok
// SIG undefined FUN_141270fd0(void)

void FUN_141270fd0(longlong param_1)

{
  FUN_140e7eef0(param_1 + 0x228);
  return;
}



// FUNCTION 141270fe0 FUN_141270fe0 body=57 status=ok
// SIG undefined FUN_141270fe0(void)

longlong FUN_141270fe0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    bVar2 = FUN_14126dff0();
    lVar1 = *(longlong *)(param_1 + 0x60 + (ulonglong)bVar2 * 8);
    if (lVar1 != 0) {
      return lVar1;
    }
    if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
      return *(longlong *)(param_1 + 0x60);
    }
  }
  return 0;
}



// FUNCTION 141271020 FUN_141271020 body=52 status=ok
// SIG undefined FUN_141271020(void)

undefined8 FUN_141271020(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
    return 0;
  }
  cVar1 = FUN_141273c20();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x48);
  }
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 141271060 FUN_141271060 body=105 status=ok
// SIG undefined FUN_141271060(void)

ulonglong FUN_141271060(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((*(longlong *)(param_1 + 0x7e0) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x7e0) + 0x490), lVar2 != 0)) {
    lVar3 = FUN_14145f370();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar4 = FUN_140d00470(lVar2);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1412710d0 FUN_1412710d0 body=144 status=ok
// SIG undefined FUN_1412710d0(void)

void FUN_1412710d0(longlong param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x448);
  if (param_2 != cVar1) {
    if (cVar1 == '\0') {
      uVar2 = 0x11;
    }
    else if (cVar1 == '\x01') {
      uVar2 = 0x12;
    }
    else if (cVar1 == '\x02') {
      uVar2 = 0x13;
    }
    else if (cVar1 == '\x03') {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0;
    }
    FUN_141280e60(param_1,uVar2);
    if (param_2 == '\0') {
      uVar2 = 0x11;
    }
    else if (param_2 == '\x01') {
      uVar2 = 0x12;
    }
    else if (param_2 == '\x02') {
      uVar2 = 0x13;
    }
    else if (param_2 == '\x03') {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0;
    }
    FUN_14127a6d0(param_1,uVar2);
    *(char *)(param_1 + 0x448) = param_2;
  }
  return;
}



// FUNCTION 141271160 FUN_141271160 body=31 status=ok
// SIG undefined FUN_141271160(void)

bool FUN_141271160(longlong param_1,char param_2)

{
  if (*(longlong *)(param_1 + 0xa08) != 0) {
    return *(char *)(*(longlong *)(param_1 + 0xa08) + 0x111) == param_2;
  }
  return param_2 == '\0';
}



// FUNCTION 141271180 FUN_141271180 body=543 status=ok
// SIG undefined FUN_141271180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141271180(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((0 < *(int *)(param_1 + 0x960)) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x958) + 0x28), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x310))(plVar3,1);
    uVar2 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
    FUN_142880530(uVar2,param_1 + 0x990);
    *(undefined8 *)(param_1 + 0x990) = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x968);
    local_b8 = FUN_14127f0d0;
    uStack_b0 = 0;
    uVar2 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_ac;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0x990,&local_a8,uVar1);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
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



// FUNCTION 1412713d0 FUN_1412713d0 body=74 status=ok
// SIG undefined FUN_1412713d0(void)

void FUN_1412713d0(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 0xc2) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((longlong)param_2 + 0x614) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_2 + 0xc3) = *(undefined4 *)(param_1 + 0x130);
  FUN_14304f760(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000141271413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2b0))(param_2);
  return;
}



// FUNCTION 141271420 FUN_141271420 body=122 status=ok
// SIG undefined FUN_141271420(void)

void FUN_141271420(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 0x8e) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)((longlong)param_2 + 0x474) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_2 + 0x8f) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)((longlong)param_2 + 0x47c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)((longlong)param_2 + 0x484) = *(undefined4 *)(param_1 + 0x154);
  FUN_14304fcb0(param_2,param_1);
  (**(code **)(*param_2 + 0x2d8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000141271493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x290))(param_2);
  return;
}



// FUNCTION 1412714a0 FUN_1412714a0 body=323 status=ok
// SIG undefined FUN_1412714a0(void)

void FUN_1412714a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  longlong local_28 [4];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_144740518;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)FUN_1412818d0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  if (local_28 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x30) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  uVar7 = 0x3f800000;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    uVar7 = *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x3f8);
  }
  uVar5 = FUN_14164ab60();
  puVar6 = (undefined8 *)FUN_14158f860(uVar5,local_res8,plVar1,L"UOakVehicleManager_Tick",uVar7);
  *(undefined8 *)(param_1 + 0x38) = *puVar6;
  return;
}



// FUNCTION 1412715f0 FUN_1412715f0 body=352 status=ok
// SIG undefined FUN_1412715f0(void)

void FUN_1412715f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x380) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 900) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x388) = 0x3f800000;
  if ((*(byte *)(lVar1 + 0x2d8) & 2) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x148);
    if (lVar1 != 0) {
      lVar3 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x6d0), lVar1 != 0)) {
        lVar3 = FUN_1413e4fc0();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(lVar1 + 0x80);
          fVar4 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 0x88) * 0.008726646);
          *(float *)(param_1 + 0x388) = fVar4;
        }
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(lVar1 + 0x2dc);
    fVar4 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 0x2e4) * 0.008726646);
    *(float *)(param_1 + 0x388) = fVar4;
  }
  if (*(float *)(param_1 + 0x388) != 1.0) {
    return;
  }
  FUN_14303fc40(param_1,0x10,0);
  return;
}



// FUNCTION 141271750 FUN_141271750 body=72 status=ok
// SIG undefined FUN_141271750(void)

void FUN_141271750(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x298))();
  *(int *)(param_2 + 0x128) = (int)param_1[0xc2];
  *(undefined4 *)(param_2 + 300) = *(undefined4 *)((longlong)param_1 + 0x614);
  *(int *)(param_2 + 0x130) = (int)param_1[0xc3];
  return;
}



// FUNCTION 1412717a0 FUN_1412717a0 body=108 status=ok
// SIG undefined FUN_1412717a0(void)

void FUN_1412717a0(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x2c8))();
  *(int *)(param_2 + 0x140) = (int)param_1[0x8e];
  *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)((longlong)param_1 + 0x474);
  *(int *)(param_2 + 0x148) = (int)param_1[0x8f];
  *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)((longlong)param_1 + 0x47c);
  *(int *)(param_2 + 0x150) = (int)param_1[0x90];
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)((longlong)param_1 + 0x484);
  return;
}



// FUNCTION 141271820 FUN_141271820 body=1635 status=ok
// SIG undefined FUN_141271820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141271820(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  undefined6 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  short *psVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  void *_Src;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  void *_Dst;
  uint uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  int iVar28;
  undefined1 auStack_188 [32];
  undefined1 local_168 [4];
  uint local_164;
  undefined8 local_160;
  undefined1 *puStack_158;
  int local_150;
  undefined2 uStack_14c;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  uint uStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  longlong *local_138;
  uint local_130;
  int local_12c;
  int local_128 [2];
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  short *local_e0;
  int local_d8;
  short *local_d0;
  int local_c8;
  longlong *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar18 = (longlong *)0x0;
  iVar28 = 0;
  local_138 = (longlong *)0x0;
  local_164 = 0;
  local_12c = 0;
  plVar21 = plVar18;
  plVar22 = plVar18;
  plVar26 = plVar18;
  local_110 = param_2;
  if (0 < (int)param_3[1]) {
    do {
      iVar19 = 0;
      lVar14 = *param_3;
      iVar28 = iVar19;
      if (0 < *(int *)(lVar14 + 8 + (longlong)plVar22)) {
        do {
          cVar11 = FUN_141274330(param_1,*(longlong *)(lVar14 + (longlong)plVar22) +
                                         (longlong)iVar19 * 0x10);
          if (cVar11 != '\0') {
            iVar28 = iVar28 + 1;
            cVar11 = FUN_141273f60(param_1,*(longlong *)((longlong)plVar22 + *param_3) +
                                           (longlong)iVar19 * 0x10);
            if (cVar11 == '\0') goto LAB_141271934;
          }
          uVar25 = local_164;
          lVar14 = *param_3;
          iVar19 = iVar19 + 1;
        } while (iVar19 < *(int *)(lVar14 + 8 + (longlong)plVar22));
        if (iVar28 < 1) {
LAB_141271934:
          plVar18 = (longlong *)(ulonglong)local_164;
          plVar21 = local_138;
        }
        else {
          lVar13 = (longlong)(int)local_164;
          local_164 = local_164 + 1;
          local_130 = local_164;
          if (local_12c < (int)local_164) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,uVar25);
          }
          plVar18 = (longlong *)(ulonglong)local_130;
          local_138[lVar13 * 2] = (longlong)(int)plVar26 * 0x30 + lVar14;
          *(int *)(local_138 + lVar13 * 2 + 1) = iVar28;
          plVar21 = local_138;
          local_164 = local_130;
        }
      }
      iVar28 = (int)plVar18;
      uVar25 = (int)plVar26 + 1;
      plVar22 = plVar22 + 6;
      plVar26 = (longlong *)(ulonglong)uVar25;
    } while ((int)uVar25 < (int)param_3[1]);
  }
  local_168[0] = 0;
  FUN_14125a070(plVar21,(longlong)iVar28,0,local_168);
  local_98 = 0;
  local_70._0_4_ = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar27 = (ulonglong)local_164;
  if (0 < (int)local_164) {
    do {
      local_118 = uVar27;
      lVar13 = local_110;
      uVar20 = 0;
      lVar14 = *plVar21;
      uVar27 = uVar20;
      if (0 < *(int *)(lVar14 + 0x18)) {
        do {
          lVar16 = *(longlong *)(lVar14 + 0x10);
          local_160 = *(longlong *)(*(longlong *)(lVar14 + 0x20) + 0x10);
          if (local_160 == 0) {
            puStack_158 = (undefined1 *)0x0;
          }
          else {
            puStack_158 = *(undefined1 **)(local_160 + 0x38);
          }
          local_150 = 0xffffffff;
          uStack_14c = 0x101;
          uStack_14a = 0;
          FUN_140472e10(&local_160);
          puVar17 = puStack_158;
          while (puVar17 != (undefined1 *)0x0) {
            local_140 = *(longlong **)((longlong)puVar17 + 0x18);
            puStack_158 = puVar17;
            FName::ToString(&local_140,&local_e0);
            if (*(int *)(lVar16 + 8 + uVar27) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar16 + uVar27);
            }
            psVar12 = &DAT_143f3eda8;
            if (local_d8 != 0) {
              psVar12 = local_e0;
            }
            lVar14 = (longlong)puVar15 - (longlong)psVar12;
            do {
              sVar2 = *psVar12;
              sVar3 = *(short *)((longlong)psVar12 + lVar14);
              if (sVar2 != sVar3) break;
              psVar12 = psVar12 + 1;
            } while (sVar3 != 0);
            if (local_e0 != (short *)0x0) {
              FMemory::Free(local_e0);
            }
            if (sVar2 == sVar3) goto LAB_141271abe;
            puStack_158 = *(undefined1 **)((longlong)puVar17 + 0x28);
            FUN_140472e10(&local_160);
            puVar17 = puStack_158;
          }
          puVar17 = (undefined1 *)0x0;
LAB_141271abe:
          local_160 = *(longlong *)(lVar13 + 0x10);
          lVar14 = *(longlong *)(*plVar21 + 0x10);
          if (local_160 == 0) {
            puStack_158 = (undefined1 *)0x0;
          }
          else {
            puStack_158 = *(undefined1 **)(local_160 + 0x38);
          }
          local_150 = 0xffffffff;
          uStack_14c = 0x101;
          uStack_14a = 0;
          local_120 = (longlong)puVar17;
          FUN_140472e10(&local_160);
          puVar17 = puStack_158;
          while (puStack_158 = puVar17, puVar17 != (undefined1 *)0x0) {
            local_140 = *(longlong **)((longlong)puVar17 + 0x18);
            FName::ToString(&local_140,&local_d0);
            if (*(int *)(lVar14 + 8 + uVar27) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar14 + uVar27);
            }
            psVar12 = &DAT_143f3eda8;
            if (local_c8 != 0) {
              psVar12 = local_d0;
            }
            lVar16 = (longlong)puVar15 - (longlong)psVar12;
            do {
              sVar2 = *psVar12;
              sVar3 = *(short *)((longlong)psVar12 + lVar16);
              if (sVar2 != sVar3) break;
              psVar12 = psVar12 + 1;
            } while (sVar3 != 0);
            if (local_d0 != (short *)0x0) {
              FMemory::Free(local_d0);
            }
            lVar16 = (longlong)puVar17;
            if (sVar2 == sVar3) goto LAB_141271bb0;
            puStack_158 = *(undefined1 **)((longlong)puVar17 + 0x28);
            FUN_140472e10(&local_160);
            puVar17 = puStack_158;
          }
          lVar16 = 0;
LAB_141271bb0:
          if ((local_120 != 0) && (lVar16 != 0)) {
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(&local_98,&local_164);
            if ((local_164 == 0xffffffff) ||
               (lVar14 = (longlong)(int)local_164 * 0x20 + local_98, lVar14 == 0)) {
              local_140 = &local_120;
              FUN_141258ba0(&local_98,local_128,&local_140,0);
              lVar14 = (longlong)local_128[0] * 0x20 + local_98;
            }
            *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(*plVar21 + 0x20);
            *(longlong *)(lVar14 + 0x10) = lVar16;
          }
          lVar14 = *plVar21;
          uVar25 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar25;
          uVar27 = uVar27 + 0x10;
        } while ((int)uVar25 < *(int *)(lVar14 + 0x18));
      }
      plVar21 = plVar21 + 2;
      uVar27 = local_118 - 1;
    } while (local_118 - 1 != 0);
    local_118 = 0;
    plVar21 = local_138;
  }
  puVar17 = (undefined1 *)0x0;
  local_160._0_4_ = 0;
  local_160._4_4_ = 1;
  uStack_14c = 0;
  uVar8 = uStack_14c;
  uStack_14a = 0;
  uVar9 = uStack_14a;
  uStack_149 = 0;
  uVar10 = uStack_149;
  uStack_148 = 0;
  uStack_14a = (undefined1)((uint)(int)local_70 >> 0x10);
  uVar6 = uStack_14a;
  uStack_149 = (undefined1)((uint)(int)local_70 >> 0x18);
  uVar7 = uStack_149;
  uStack_14c = (undefined2)(int)local_70;
  uVar5 = uStack_14c;
  if ((int)local_70 != 0) {
    puVar24 = local_88;
    if (local_78 != 0) {
      puVar24 = puVar17;
    }
    uVar25 = *(uint *)((ulonglong)puVar24 | local_78);
    puVar23 = puVar17;
    while (uVar25 == 0) {
      iVar28 = (int)puVar17;
      uStack_148 = (int)puVar23 + 0x20;
      puVar23 = (undefined1 *)(ulonglong)uStack_148;
      local_160._0_4_ = iVar28 + 1;
      puVar17 = (undefined1 *)(ulonglong)(uint)local_160;
      uVar8 = uStack_14c;
      uVar9 = uStack_14a;
      uVar10 = uStack_149;
      if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar28)
      goto LAB_141271d41;
      uVar25 = ((uint *)((ulonglong)puVar24 | local_78))[(longlong)iVar28 + 1];
    }
    local_160._4_4_ = -uVar25 & uVar25;
    iVar28 = 0x1f;
    if (local_160._4_4_ != 0) {
      for (; local_160._4_4_ >> iVar28 == 0; iVar28 = iVar28 + -1) {
      }
    }
    if (local_160._4_4_ == 0) {
      iVar28 = 0x20;
    }
    else {
      iVar28 = 0x1f - iVar28;
    }
    iVar28 = (uStack_148 - iVar28) + 0x1f;
    if ((int)local_70 < iVar28) {
      iVar28 = (int)local_70;
    }
    uStack_14c = (undefined2)iVar28;
    uStack_14a = (undefined1)((uint)iVar28 >> 0x10);
    uStack_149 = (undefined1)((uint)iVar28 >> 0x18);
    uVar8 = uStack_14c;
    uVar9 = uStack_14a;
    uVar10 = uStack_149;
  }
LAB_141271d41:
  uStack_149 = uVar10;
  uStack_14a = uVar9;
  uStack_14c = uVar8;
  uStack_f0 = CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT24(uStack_14c,0xffffffff)));
  local_e8 = CONCAT44(uStack_144,uStack_148);
  local_c0 = &local_98;
  local_150 = -1 << ((byte)(int)local_70 & 0x1f);
  uStack_b8 = (uint)local_160;
  uStack_b4 = local_160._4_4_;
  uVar4 = CONCAT24(uVar5,local_150);
  uStack_100 = (uint)local_160;
  uStack_fc = local_160._4_4_;
  puStack_158 = local_88;
  uStack_14c = uVar5;
  uStack_14a = uVar6;
  uStack_149 = uVar7;
  local_f8 = local_88;
  puStack_b0 = local_88;
  uStack_a8 = uStack_f0;
  uStack_a0 = local_e8;
  local_108 = local_c0;
  while( true ) {
    if (((uStack_f0._4_4_ == (int)(CONCAT17(uVar7,CONCAT16(uVar6,uVar4)) >> 0x20)) &&
        (local_f8 == local_88)) && (local_108 == &local_98)) break;
    puVar1 = (undefined8 *)((longlong)uStack_f0._4_4_ * 0x20 + *local_108);
    plVar22 = (longlong *)*puVar1;
    lVar14 = *(longlong *)((longlong)uStack_f0._4_4_ * 0x20 + 0x10 + *local_108);
    local_150 = (int)lVar14;
    uStack_14c = (undefined2)((ulonglong)lVar14 >> 0x20);
    uStack_14a = (undefined1)((ulonglong)lVar14 >> 0x30);
    uStack_149 = (undefined1)((ulonglong)lVar14 >> 0x38);
    _Src = (void *)((longlong)*(int *)((longlong)plVar22 + 0x44) + puVar1[1]);
    _Dst = (void *)(*(int *)(lVar14 + 0x44) + local_110);
    if (_Dst != _Src) {
      if ((*(uint *)(plVar22 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar22 + 0x2e8))(plVar22,_Dst,_Src,(int)plVar22[6]);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (_Dst,_Src,(longlong)(*(int *)((longlong)plVar22 + 0x34) * (int)plVar22[6]));
      }
    }
    uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_fc);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  if (plVar21 != (longlong *)0x0) {
    FMemory::Free(plVar21);
  }
  return;
}



// FUNCTION 141271e90 FUN_141271e90 body=144 status=ok
// SIG undefined FUN_141271e90(void)

void FUN_141271e90(longlong *param_1)

{
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877950,0);
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877958,0);
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877960,0);
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877968,0);
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877970,0);
                    /* WARNING: Could not recover jumptable at 0x000141271f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877978,0);
  return;
}



// FUNCTION 141271f20 FUN_141271f20 body=1926 status=ok
// SIG undefined FUN_141271f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141271f20(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
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
  ulonglong uVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong lVar23;
  byte bVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  float local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [12];
  undefined1 local_12c [20];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (((*(longlong *)(param_1 + 0x288) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x288) + 0x4d0) != 0)) &&
     (iVar22 = *(int *)(param_2 + 0x290) + -2, 0 < iVar22)) {
    bVar24 = 0;
    local_188 = 0;
    local_180 = 0;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&local_188,iVar22);
    local_198 = 0;
    local_190 = 0;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&local_198,iVar22);
    lVar17 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    uVar1 = *(undefined4 *)(lVar17 + 0x2e4);
    uVar18 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    uVar26 = FUN_14059d880(uVar18);
    lVar17 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    fVar31 = *(float *)(lVar17 + 0x220);
    fVar32 = *(float *)(lVar17 + 0x224);
    fVar33 = *(float *)(lVar17 + 0x228);
    uStack_14c = *(undefined4 *)(lVar17 + 0x22c);
    fVar7 = *(float *)(lVar17 + 0x210);
    fVar8 = *(float *)(lVar17 + 0x214);
    fVar9 = *(float *)(lVar17 + 0x218);
    fVar10 = *(float *)(lVar17 + 0x21c);
    auVar3 = *(undefined1 (*) [16])(lVar17 + 0x230);
    fVar4 = auVar3._0_4_;
    fVar5 = auVar3._4_4_;
    fVar6 = auVar3._8_4_;
    local_158 = fVar31;
    fStack_154 = fVar32;
    fStack_150 = fVar33;
    lVar17 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2c0) + 0x30);
    uVar2 = *(undefined4 *)(lVar17 + 0x2e4);
    uVar18 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2c0) + 0x30);
    uVar27 = FUN_14059d880(uVar18);
    lVar17 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2c0) + 0x30);
    lVar25 = (longlong)iVar22;
    local_148 = *(float *)(lVar17 + 0x220);
    fStack_144 = *(float *)(lVar17 + 0x224);
    fStack_140 = *(float *)(lVar17 + 0x228);
    uStack_13c = *(undefined4 *)(lVar17 + 0x22c);
    fVar11 = *(float *)(lVar17 + 0x210);
    fVar12 = *(float *)(lVar17 + 0x214);
    fVar13 = *(float *)(lVar17 + 0x218);
    fVar14 = *(float *)(lVar17 + 0x21c);
    local_168 = (float)*(undefined8 *)(lVar17 + 0x230);
    fStack_164 = (float)((ulonglong)*(undefined8 *)(lVar17 + 0x230) >> 0x20);
    fStack_160 = (float)*(undefined8 *)(lVar17 + 0x238);
    uStack_15c = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x238) >> 0x20);
    if (0 < iVar22) {
      lVar17 = 0x10;
      do {
        if (*(longlong *)(lVar17 + *(longlong *)(param_2 + 0x288)) != 0) {
          lVar23 = **(longlong **)(*(longlong *)(param_1 + 0x288) + 0x4d0);
          lVar19 = FUN_1409655a0();
          (**(code **)(lVar23 + 0x420))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x4d0),&local_118,
                     *(undefined8 *)(lVar19 + 8),0);
          if ((bool)(bVar24 & 1)) {
            fVar33 = -fVar11;
            fVar31 = -fVar12;
            fVar32 = -fVar13;
            fVar37 = fVar11 * _DAT_146877800;
            fVar38 = fVar12 * fRam0000000146877804;
            fVar39 = fVar13 * fRam0000000146877808;
            fVar40 = fVar14 * fRam000000014687780c;
            auVar36._0_4_ = fStack_114 * fVar32 * _DAT_1468774b0;
            auVar36._4_4_ = local_118 * fVar32 * fRam00000001468774b4;
            auVar36._8_4_ = fStack_10c * fVar32 * fRam00000001468774b8;
            auVar36._12_4_ = fStack_110 * fVar32 * fRam00000001468774bc;
            local_1a8 = fStack_10c * fVar33 * _DAT_1468774d0 + fVar14 * local_118 +
                        fStack_110 * fVar31 * _DAT_1468774c0 + auVar36._0_4_;
            fStack_1a4 = fStack_110 * fVar33 * fRam00000001468774d4 + fVar14 * fStack_114 +
                         fStack_10c * fVar31 * fRam00000001468774c4 + auVar36._4_4_;
            fStack_1a0 = fStack_114 * fVar33 * fRam00000001468774d8 + fVar14 * fStack_110 +
                         local_118 * fVar31 * fRam00000001468774c8 + auVar36._8_4_;
            fStack_19c = local_118 * fVar33 * fRam00000001468774dc + fVar14 * fStack_10c +
                         fStack_114 * fVar31 * fRam00000001468774cc + auVar36._12_4_;
            auVar35._4_4_ = fStack_164;
            auVar35._0_4_ = local_168;
            auVar35._8_4_ = fStack_160;
            auVar35._12_4_ = uStack_15c;
            auVar35 = rcpps(auVar36,auVar35);
            fVar41 = (float)((uint)(local_108 - local_148) & _DAT_1468774a0);
            fVar42 = (float)((uint)(fStack_104 - fStack_144) & uRam00000001468774a4);
            fVar43 = (float)((uint)(fStack_100 - fStack_140) & uRam00000001468774a8);
            fVar31 = fVar43 * fVar38 - fVar42 * fVar39;
            fVar32 = fVar41 * fVar39 - fVar43 * fVar37;
            fVar33 = fVar42 * fVar37 - fVar41 * fVar38;
            fVar28 = auVar35._0_4_;
            fVar29 = auVar35._4_4_;
            fVar30 = auVar35._8_4_;
            fVar31 = fVar31 + fVar31;
            fVar32 = fVar32 + fVar32;
            fVar33 = fVar33 + fVar33;
            fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * local_168;
            fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fStack_164;
            fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fStack_160;
            fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * local_168;
            fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fStack_164;
            fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fStack_160;
            local_178 = ((fVar33 * fVar38 - fVar32 * fVar39) + fVar40 * fVar31 + fVar41) *
                        (float)(-(uint)((float)((uint)local_168 & _DAT_146877530) <= _DAT_1468777f0)
                                & (uint)fVar28 ^ (uint)fVar28);
            fStack_174 = ((fVar31 * fVar39 - fVar33 * fVar37) + fVar40 * fVar32 + fVar42) *
                         (float)(-(uint)((float)((uint)fStack_164 & uRam0000000146877534) <=
                                        fRam00000001468777f4) & (uint)fVar29 ^ (uint)fVar29);
            local_170 = ((fVar32 * fVar37 - fVar31 * fVar38) + fVar40 * fVar33 + fVar43) *
                        (float)(-(uint)((float)((uint)fStack_160 & uRam0000000146877538) <=
                                       fRam00000001468777f8) & (uint)fVar30 ^ (uint)fVar30);
            puVar20 = (undefined8 *)FQuat::Rotator(&local_1a8,local_12c);
            uVar15 = local_190;
            lVar23 = (longlong)(int)local_190;
            iVar22 = (int)local_190 + 1;
            local_190 = CONCAT44(local_190._4_4_,iVar22);
            if (local_190._4_4_ < iVar22) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&local_198,uVar15 & 0xffffffff);
            }
            puVar21 = (undefined8 *)(lVar23 * 0x20 + local_198);
            *puVar21 = CONCAT44(fStack_174,local_178);
            *(float *)(puVar21 + 1) = local_170;
            *(undefined8 *)((longlong)puVar21 + 0xc) = *puVar20;
            uVar16 = *(undefined4 *)(puVar20 + 1);
            *(undefined4 *)(puVar21 + 3) = uVar27;
            *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar2;
          }
          else {
            fVar30 = -fVar7;
            fVar28 = -fVar8;
            fVar29 = -fVar9;
            auVar34._0_4_ = fStack_114 * fVar29 * _DAT_1468774b0;
            auVar34._4_4_ = local_118 * fVar29 * fRam00000001468774b4;
            auVar34._8_4_ = fStack_10c * fVar29 * fRam00000001468774b8;
            auVar34._12_4_ = fStack_110 * fVar29 * fRam00000001468774bc;
            local_1a8 = fStack_10c * fVar30 * _DAT_1468774d0 + fVar10 * local_118 +
                        fStack_110 * fVar28 * _DAT_1468774c0 + auVar34._0_4_;
            fStack_1a4 = fStack_110 * fVar30 * fRam00000001468774d4 + fVar10 * fStack_114 +
                         fStack_10c * fVar28 * fRam00000001468774c4 + auVar34._4_4_;
            fStack_1a0 = fStack_114 * fVar30 * fRam00000001468774d8 + fVar10 * fStack_110 +
                         local_118 * fVar28 * fRam00000001468774c8 + auVar34._8_4_;
            fStack_19c = local_118 * fVar30 * fRam00000001468774dc + fVar10 * fStack_10c +
                         fStack_114 * fVar28 * fRam00000001468774cc + auVar34._12_4_;
            auVar35 = rcpps(auVar34,auVar3);
            fVar37 = fVar7 * _DAT_146877800;
            fVar38 = fVar8 * fRam0000000146877804;
            fVar39 = fVar9 * fRam0000000146877808;
            fVar40 = fVar10 * fRam000000014687780c;
            fVar41 = (float)((uint)(local_108 - fVar31) & _DAT_1468774a0);
            fVar42 = (float)((uint)(fStack_104 - fVar32) & uRam00000001468774a4);
            fVar43 = (float)((uint)(fStack_100 - fVar33) & uRam00000001468774a8);
            fVar31 = fVar43 * fVar38 - fVar42 * fVar39;
            fVar32 = fVar41 * fVar39 - fVar43 * fVar37;
            fVar33 = fVar42 * fVar37 - fVar41 * fVar38;
            fVar28 = auVar35._0_4_;
            fVar29 = auVar35._4_4_;
            fVar30 = auVar35._8_4_;
            fVar31 = fVar31 + fVar31;
            fVar32 = fVar32 + fVar32;
            fVar33 = fVar33 + fVar33;
            fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar4;
            fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar5;
            fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar6;
            fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar4;
            fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar5;
            fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar6;
            local_1b0 = ((fVar32 * fVar37 - fVar31 * fVar38) + fVar40 * fVar33 + fVar43) *
                        (float)(-(uint)((float)((uint)fVar6 & uRam0000000146877538) <=
                                       fRam00000001468777f8) & (uint)fVar30 ^ (uint)fVar30);
            local_1b8 = CONCAT44(((fVar31 * fVar39 - fVar33 * fVar37) + fVar40 * fVar32 + fVar42) *
                                 (float)(-(uint)((float)((uint)fVar5 & uRam0000000146877534) <=
                                                fRam00000001468777f4) & (uint)fVar29 ^ (uint)fVar29)
                                 ,((fVar33 * fVar38 - fVar32 * fVar39) + fVar40 * fVar31 + fVar41) *
                                  (float)(-(uint)((float)((uint)fVar4 & _DAT_146877530) <=
                                                 _DAT_1468777f0) & (uint)fVar28 ^ (uint)fVar28));
            puVar20 = (undefined8 *)FQuat::Rotator(&local_1a8,local_138);
            uVar15 = local_180;
            lVar23 = (longlong)(int)local_180;
            iVar22 = (int)local_180 + 1;
            local_180 = CONCAT44(local_180._4_4_,iVar22);
            if (local_180._4_4_ < iVar22) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&local_188,uVar15 & 0xffffffff);
            }
            puVar21 = (undefined8 *)(lVar23 * 0x20 + local_188);
            *puVar21 = local_1b8;
            *(float *)(puVar21 + 1) = local_1b0;
            *(undefined8 *)((longlong)puVar21 + 0xc) = *puVar20;
            uVar16 = *(undefined4 *)(puVar20 + 1);
            *(undefined4 *)(puVar21 + 3) = uVar26;
            *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar1;
          }
          *(undefined4 *)((longlong)puVar21 + 0x14) = uVar16;
          fVar31 = local_158;
          fVar32 = fStack_154;
          fVar33 = fStack_150;
        }
        bVar24 = bVar24 + 1;
        lVar17 = lVar17 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    local_1b8 = 0;
    uVar18 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    FUN_142382f60(uVar18,*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x4d0),&DAT_146532180,
                  local_1b8);
    local_1b8 = 0;
    uVar18 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2c0) + 0x30);
    FUN_142382f60(uVar18,*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x4d0),&DAT_146532180,
                  local_1b8);
    uVar18 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    FUN_1405aa7c0(uVar18,&local_188,2,1);
    uVar18 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2c0) + 0x30);
    FUN_1405aa7c0(uVar18,&local_198,2,1);
    if (local_198 != 0) {
      FMemory::Free();
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1412726b0 FUN_1412726b0 body=326 status=ok
// SIG undefined FUN_1412726b0(void)

void FUN_1412726b0(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  *(longlong **)(param_1 + 0x9e0) = param_2;
  uVar7 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  *(undefined4 *)(param_1 + 0x9e8) = *param_3;
  *(undefined4 *)(param_1 + 0x9ec) = uVar7;
  *(undefined4 *)(param_1 + 0x9f0) = uVar1;
  *(undefined4 *)(param_1 + 0x9f4) = uVar2;
  uVar7 = param_3[4];
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *(undefined8 *)(param_1 + 0xa08) = param_4;
  *(undefined4 *)(param_1 + 0x9f8) = uVar7;
  *(undefined4 *)(param_1 + 0x9fc) = uVar1;
  *(undefined4 *)(param_1 + 0xa00) = uVar2;
  *(undefined4 *)(param_1 + 0xa04) = uVar3;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x9a0) != 0)) {
    uVar4 = FUN_142e43690();
    uVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    FUN_142d1fad0(*(undefined8 *)(param_1 + 0x9a0),uVar4);
  }
  uVar7 = FUN_142c98860(param_1 + 0x9a8,param_1);
  lVar5 = 0;
  *(undefined4 *)(param_1 + 0xa38) = uVar7;
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x9e0) + 0x2380);
  }
  if (lVar5 != 0) {
    uVar7 = *(undefined4 *)(lVar5 + 0x1dc);
    uVar1 = *(undefined4 *)(lVar5 + 0x1e0);
    uVar2 = *(undefined4 *)(lVar5 + 0x1e4);
    *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(lVar5 + 0x1d8);
    *(undefined4 *)(param_1 + 0xa24) = uVar7;
    *(undefined4 *)(param_1 + 0xa28) = uVar1;
    *(undefined4 *)(param_1 + 0xa2c) = uVar2;
    *(undefined8 *)(param_1 + 0xa30) = *(undefined8 *)(lVar5 + 0x1e8);
  }
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res8,L"OnWeaponUsed",1);
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = *puVar6;
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  FUN_143088a40(param_1,&local_18,1,0);
  FUN_14149b260(param_1);
  FUN_14149b2e0(param_1);
  FUN_141283830(param_1);
  return;
}



// FUNCTION 141272800 FUN_141272800 body=805 status=ok
// SIG undefined FUN_141272800(void)

void FUN_141272800(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  char cVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  int *piVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_48;
  ulonglong uStack_40;
  
  FUN_141273970();
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x288) + 0x690), lVar3 != 0)) {
    pwVar13 = (wchar_t *)0x0;
    pwVar8 = _guard_xfg_dispatch_icall_nop
                       (L"&UVehicleAudioProviderComponent::OnOverspinStarted",L"::");
    pwVar10 = pwVar13;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar10 = pwVar5;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    plVar1 = (longlong *)(lVar3 + 0x2d8);
    FWeakObjectPtr::operator=(&local_48,0);
    uStack_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    uStack_40 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_40);
    }
    piVar4 = (int *)*plVar1;
    iVar2 = *(int *)(lVar3 + 0x2e0);
    uVar6 = local_48;
    for (piVar12 = piVar4; local_48 = (code *)uVar6, piVar12 != piVar4 + (longlong)iVar2 * 4;
        piVar12 = piVar12 + 4) {
      local_48._0_4_ = (int)uVar6;
      if ((((*piVar12 == (int)local_48) &&
           (local_48._4_4_ = (int)((ulonglong)uVar6 >> 0x20), bVar14 = piVar12[1] == local_48._4_4_,
           bVar14)) ||
          ((cVar7 = FWeakObjectPtr::IsValid(piVar12), cVar7 == '\0' &&
           (cVar7 = FWeakObjectPtr::IsValid(&local_48), cVar7 == '\0')))) &&
         (*(ulonglong *)(piVar12 + 2) == uStack_40)) {
        if ((int)((longlong)piVar12 - (longlong)piVar4 >> 4) != -1) goto LAB_141272981;
        break;
      }
      uVar6 = local_48;
    }
    iVar2 = *(int *)(lVar3 + 0x2e0);
    *(int *)(lVar3 + 0x2e0) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x2e4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar11 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar11 = (int)local_48;
    puVar11[1] = local_48._4_4_;
    *(ulonglong *)(puVar11 + 2) = uStack_40;
LAB_141272981:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = FUN_141277650;
    pwVar8 = _guard_xfg_dispatch_icall_nop
                       (L"&UVehicleAudioProviderComponent::OnOverspinEnded",L"::");
    pwVar10 = pwVar13;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar10 = pwVar5;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar3 + 0x2e8,param_1,&local_48,local_res8);
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = (code *)&LAB_141275d70;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UVehicleAudioProviderComponent::OnEngineStart",L"::");
    pwVar10 = pwVar13;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar10 = pwVar5;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar3 + 400,param_1,&local_48,local_res8);
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = FUN_141275d80;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UVehicleAudioProviderComponent::OnEngineStop",L"::");
    while (pwVar8 = pwVar10, pwVar8 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar13 = pwVar8;
    }
    FName::FName(&local_res8,pwVar13 + 2,1);
    FUN_1407260e0(lVar3 + 0x1a0,param_1,&local_48,local_res8);
  }
  return;
}



// FUNCTION 141272bb0 FUN_141272bb0 body=40 status=ok
// SIG undefined FUN_141272bb0(void)

void FUN_141272bb0(longlong param_1)

{
  FUN_143002410();
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_14148cad0();
    return;
  }
  return;
}



// FUNCTION 141272be0 FUN_141272be0 body=113 status=ok
// SIG undefined FUN_141272be0(void)

void FUN_141272be0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142340f20();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14148cad0();
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
      FUN_141271820(lVar1,param_1,param_1 + 0x9c0);
    }
  }
  return;
}



// FUNCTION 141272c60 FUN_141272c60 body=583 status=ok
// SIG undefined FUN_141272c60(void)

void FUN_141272c60(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong local_res10;
  undefined8 local_28;
  undefined8 uStack_20;
  
  UPawnAction_Move::BeginDestroy();
  local_28 = FUN_1412852c0;
  uStack_20._0_4_ = 0;
  FUN_14125b100(*(undefined8 *)(param_1 + 0x300),param_1,&local_28);
  local_28 = FUN_141285350;
  uStack_20._0_4_ = 0;
  FUN_14125b100(*(undefined8 *)(param_1 + 0x2f0),param_1,&local_28);
  local_28 = FUN_1412855e0;
  uStack_20._0_4_ = 0;
  FUN_14125b100(*(undefined8 *)(param_1 + 0x2f8),param_1,&local_28);
  local_28 = FUN_1412851e0;
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  FUN_14125b100(*(undefined8 *)(param_1 + 0x308),param_1,&local_28);
  pwVar8 = *(wchar_t **)(param_1 + 0x118);
  if (pwVar8 != (wchar_t *)0x0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141272d6c;
  }
  pwVar8 = (wchar_t *)0x0;
LAB_141272d6c:
  *(wchar_t **)(param_1 + 0x310) = pwVar8;
  *(bool *)(param_1 + 0x3b0) = *(char *)(param_1 + 0x318) == '\0';
  if (((pwVar8 != (wchar_t *)0x0) && (*(char *)(param_1 + 0x318) != '\0')) &&
     (*(longlong *)(pwVar8 + 0x350) != 0)) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UOakVehicleInputComponent::OnVehicleAirborne",L"::");
    pwVar8 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar8 = pwVar3;
    }
    FName::FName(&local_res10,pwVar8 + 2,1);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x310) + 0x6a0);
    plVar9 = (longlong *)(lVar4 + 0x820);
    FWeakObjectPtr::operator=(&local_28,0);
    uStack_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    uStack_20 = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
      UObject::FindFunction(lVar6,uStack_20);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
    iVar1 = *(int *)(lVar4 + 0x828);
    *(int *)(lVar4 + 0x828) = iVar1 + 1;
    if (*(int *)(lVar4 + 0x82c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
    }
    puVar7 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar9);
    *puVar7 = (undefined4)local_28;
    puVar7[1] = local_28._4_4_;
    *(longlong *)(puVar7 + 2) = uStack_20;
  }
  return;
}



// FUNCTION 141272ec0 FUN_141272ec0 body=124 status=ok
// SIG undefined FUN_141272ec0(void)

void FUN_141272ec0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142340f20();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14148cad0();
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
      *(longlong *)(param_1 + 0x288) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x288) = 0;
  return;
}



// FUNCTION 141272f40 FUN_141272f40 body=127 status=ok
// SIG undefined FUN_141272f40(void)

void FUN_141272f40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142340f20();
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141272f96;
  }
  lVar3 = 0;
LAB_141272f96:
  *(longlong *)(param_1 + 0x188) = lVar3;
  if (lVar3 != 0) {
    FUN_141271820(lVar3,param_1,param_1 + 0x178);
  }
  return;
}



// FUNCTION 141272fc0 FUN_141272fc0 body=1089 status=ok
// SIG undefined FUN_141272fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141272fc0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  bVar13 = false;
  if (*(char *)(param_1 + 0x18) == '\0') {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x10);
    uVar11 = 0;
    if ((cVar4 == '\0') && (*(longlong *)(param_3 + 0x80) != 0)) {
      local_a8 = (longlong *)0x0;
      plVar5 = (longlong *)FUN_14127cb40(param_3,*(undefined8 *)(param_2 + 0x118),&local_a8);
      plVar9 = plVar5;
      if (*(char *)(param_3 + 0x89) == '\0') {
        plVar9 = (longlong *)plVar5[4];
      }
      uVar6 = FUN_1409bff40(plVar9);
      FWeakObjectPtr::operator=(param_1 + 0x10,uVar6);
      if (((*(char *)(param_3 + 0x89) == '\0') || (*(char *)(param_3 + 0x8a) != '\0')) ||
         (*(char *)(param_3 + 0x8b) != '\0')) {
        bVar12 = 0x40;
      }
      else {
        bVar12 = 0;
      }
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
      *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xbf;
      *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) | bVar12;
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
      *(byte *)(lVar7 + 0xba) = *(byte *)(lVar7 + 0xba) | 1;
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
      *(undefined4 *)(lVar7 + 0x794) = 0;
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
      *(byte *)(lVar7 + 0xba) = *(byte *)(lVar7 + 0xba) & 0xfd;
      uVar6 = FWeakObjectPtr::Get(param_1 + 0x10);
      FUN_14260f940(uVar6,*(undefined8 *)(param_3 + 0x80));
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
      *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xfe;
      if (*(char *)(param_3 + 0x89) != '\0') {
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
        *(undefined8 *)(lVar7 + 0x1ec) = *(undefined8 *)(param_3 + 0x60);
        *(undefined4 *)(lVar7 + 500) = *(undefined4 *)(param_3 + 0x68);
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
        *(undefined8 *)(lVar7 + 0x1f8) = *(undefined8 *)(param_3 + 0x6c);
        *(undefined4 *)(lVar7 + 0x200) = *(undefined4 *)(param_3 + 0x74);
        uVar1 = *(undefined4 *)(param_3 + 0x78);
        uStack_90 = uVar1;
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
        *(ulonglong *)(lVar7 + 0x204) = CONCAT44(uVar1,uVar1);
        *(undefined4 *)(lVar7 + 0x20c) = uStack_90;
      }
      if ((*(int *)(param_3 + 0x90) != 0) || (*(int *)(param_3 + 0x94) != 0)) {
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
        iVar2 = *(int *)(lVar7 + 0x90);
        *(int *)(lVar7 + 0x90) = iVar2 + 1;
        if (*(int *)(lVar7 + 0x94) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x88,iVar2);
        }
        *(undefined8 *)(*(longlong *)(lVar7 + 0x88) + (longlong)iVar2 * 8) =
             *(undefined8 *)(param_3 + 0x90);
      }
      uVar6 = FWeakObjectPtr::Get(param_1 + 0x10);
      uVar8 = (**(code **)(*plVar5 + 0x148))(plVar5);
      FUN_14234b270(uVar6,uVar8);
      bVar13 = *(char *)(param_3 + 0x98) != '\0';
      if ((*(byte *)(param_2 + 200) & 0x20) != 0) {
        plVar9 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar9 = (longlong *)FUN_14222b250(plVar5,*(undefined8 *)(param_3 + 0x50),0);
        }
        if (*(char *)(param_3 + 0x89) == '\0') {
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x420))(plVar9,&local_88,*(undefined8 *)(param_3 + 0x50),0);
            local_a8 = (longlong *)CONCAT44(uStack_74,local_78);
            local_98 = local_88;
            uStack_94 = uStack_84;
            uStack_90 = uStack_80;
            uStack_8c = uStack_7c;
            local_a0 = uStack_70;
            uVar6 = FWeakObjectPtr::Get(param_1 + 0x10);
            local_b0 = 0;
            local_b8 = 0;
            FUN_142399390(uVar6,&local_a8,&local_98,0);
          }
        }
        else {
          uVar6 = FWeakObjectPtr::Get(param_1 + 0x10);
          FUN_142382f60(uVar6,plVar9,&DAT_146af29ec,*(undefined8 *)(param_3 + 0x50));
        }
        if (*(char *)(param_3 + 0x88) != '\0') {
          uVar6 = FWeakObjectPtr::Get(param_1 + 0x10);
          FUN_1425fcab0(uVar6,0);
        }
      }
    }
    if ((*(char *)(param_3 + 0x8a) == '\0') && (*(char *)(param_3 + 0x8b) == '\0')) {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    else {
      FWeakObjectPtr::operator=(&local_a8,0);
      *(undefined4 *)(param_1 + 0x10) = (undefined4)local_a8;
      *(undefined4 *)(param_1 + 0x14) = local_a8._4_4_;
    }
    if (bVar13) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      plVar9 = (longlong *)(param_2 + 0x2f8);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      plVar5 = (longlong *)FMemory::Realloc(0,0x20);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_GetPoolName_144740630;
        *(undefined4 *)(plVar5 + 1) = uVar1;
        *(undefined4 *)((longlong)plVar5 + 0xc) = uVar3;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar5[3] = lVar7;
        *plVar5 = (longlong)&PTR_GetPoolName_144740678;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        puVar10 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_a8);
        iVar2 = *(int *)(param_2 + 0x300);
        uVar11 = *puVar10;
        *(int *)(param_2 + 0x300) = iVar2 + 1;
        if (*(int *)(param_2 + 0x304) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
        }
        puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar9);
        *puVar10 = plVar5;
        *(undefined4 *)(puVar10 + 1) = 2;
      }
      *(undefined8 *)(param_1 + 0x20) = uVar11;
    }
  }
  return;
}



// FUNCTION 141273410 FUN_141273410 body=385 status=ok
// SIG undefined FUN_141273410(void)

void FUN_141273410(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  
  plVar2 = *(longlong **)(param_1 + 0x188);
  if (plVar2 != (longlong *)0x0) {
    uVar7 = UComboBoxWidgetStyle::StaticClass();
    lVar8 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar7);
    if (lVar8 != 0) {
      plVar13 = *(longlong **)(param_1 + 0x330);
      plVar2 = plVar13 + *(int *)(param_1 + 0x338);
      for (; plVar13 != plVar2; plVar13 = plVar13 + 1) {
        lVar3 = *plVar13;
        if (lVar3 != 0) {
          plVar11 = *(longlong **)(lVar3 + 0x38);
          plVar1 = plVar11 + *(int *)(lVar3 + 0x40);
          for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
            plVar4 = (longlong *)*plVar11;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x2a0))(plVar4,lVar8);
            }
          }
        }
      }
      lVar3 = *(longlong *)(lVar8 + 0x118);
      if (lVar3 != 0) {
        lVar9 = FUN_14148cad0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (iVar12 = 0, 0 < *(int *)(lVar8 + 0x350))) {
          lVar9 = 0;
          do {
            lVar5 = *(longlong *)(lVar9 + *(longlong *)(lVar8 + 0x348));
            if (lVar5 != 0) {
              lVar10 = FUN_141495210();
              lVar5 = *(longlong *)(lVar5 + 0x10);
              if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
                  != lVar10 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                FUN_14120f310(*(undefined8 *)(lVar9 + *(longlong *)(lVar8 + 0x348)),lVar3);
              }
            }
            iVar12 = iVar12 + 1;
            lVar9 = lVar9 + 8;
          } while (iVar12 < *(int *)(lVar8 + 0x350));
        }
      }
    }
  }
  return;
}



// FUNCTION 1412735a0 FUN_1412735a0 body=136 status=ok
// SIG undefined FUN_1412735a0(void)

void FUN_1412735a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (((lVar1 != 0) && (lVar2 = param_2[0x23], lVar2 != 0)) &&
     ((lVar5 = FUN_140a63ba0(lVar1), lVar2 == lVar5 || (lVar2 == *(longlong *)(lVar1 + 0x118))))) {
    FUN_142cc7200(param_1,param_2);
    return;
  }
  iVar4 = (**(code **)(*param_2 + 0x400))(param_2);
  iVar3 = 1;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  FUN_142ccf590(param_1,iVar3);
  return;
}



// FUNCTION 141273630 FUN_141273630 body=100 status=ok
// SIG undefined FUN_141273630(void)

void FUN_141273630(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar2 = plVar1[0x1f];
    }
  }
  *(longlong *)(param_1 + 0x488) = lVar2;
  FUN_143050d90(param_1);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0xa8);
  return;
}



// FUNCTION 1412736b0 FUN_1412736b0 body=85 status=ok
// SIG undefined FUN_1412736b0(void)

void FUN_1412736b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar2 = plVar1[0x1f];
    }
  }
  *(longlong *)(param_1 + 0x488) = lVar2;
  FUN_143050d90(param_1);
  return;
}



// FUNCTION 141273710 FUN_141273710 body=602 status=ok
// SIG undefined FUN_141273710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141273710(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (((*(longlong *)(param_1 + 0x288) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x288) + 0x4d0) != 0)) &&
     (iVar10 = *(int *)(param_2 + 0x290) + -1, 0 < iVar10)) {
    lVar11 = 0;
    local_d8 = 0;
    local_d0 = 0;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&local_d8,iVar10);
    lVar4 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    uVar1 = *(undefined4 *)(lVar4 + 0x2e4);
    uVar5 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    uVar12 = FUN_14059d880(uVar5);
    if (0 < iVar10) {
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x288) + 8 + lVar11 * 8) != 0) {
          lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x288) + 0x4d0);
          lVar6 = FUN_1409655a0();
          (**(code **)(lVar4 + 0x420))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x4d0),&local_98,
                     *(undefined8 *)(lVar6 + 8),1);
          local_b8 = local_98;
          uStack_b0 = uStack_90;
          local_c0 = uStack_80;
          local_c8 = CONCAT44(uStack_84,local_88);
          puVar7 = (undefined8 *)FQuat::Rotator(&local_b8,local_a8);
          uVar3 = local_d0;
          lVar4 = (longlong)(int)local_d0;
          iVar8 = (int)local_d0 + 1;
          local_d0 = CONCAT44(local_d0._4_4_,iVar8);
          if (local_d0._4_4_ < iVar8) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_d8,uVar3 & 0xffffffff);
          }
          puVar9 = (undefined8 *)(lVar4 * 0x20 + local_d8);
          *puVar9 = local_c8;
          *(undefined4 *)(puVar9 + 1) = local_c0;
          *(undefined8 *)((longlong)puVar9 + 0xc) = *puVar7;
          uVar2 = *(undefined4 *)(puVar7 + 1);
          *(undefined4 *)(puVar9 + 3) = uVar12;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar1;
          *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar10);
    }
    local_c8 = 0;
    uVar5 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    FUN_142382f60(uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x4d0),&DAT_146532180,0);
    uVar5 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2c0));
    FUN_1405aa7c0(uVar5,&local_d8,2,1);
    if (local_d8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141273970 FUN_141273970 body=527 status=ok
// SIG undefined FUN_141273970(void)

void FUN_141273970(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)(param_1 + 0x2c0);
  lVar7 = *plVar1;
  lVar9 = (longlong)*(int *)(param_1 + 0x2c8) * 0x30 + lVar7;
  for (; lVar7 != lVar9; lVar7 = lVar7 + 0x30) {
    cVar2 = FWeakObjectPtr::IsValid(lVar7);
    if (cVar2 != '\0') {
      uVar4 = FWeakObjectPtr::Get(lVar7);
      FUN_1405ac9d0(uVar4);
    }
  }
  uVar8 = 0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x288) + 0x698);
  uVar6 = uVar8;
  if (lVar7 != 0) {
    uVar6 = (ulonglong)*(uint *)(lVar7 + 0x290);
  }
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(int *)(param_1 + 0x2cc) < (int)uVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar1);
  }
  if (lVar7 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x288) == 0) {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x180);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      iVar3 = 2;
      goto LAB_141273a38;
    }
    if ((cVar2 == '\x02') || (cVar2 == '\x03')) {
      iVar3 = 1;
      goto LAB_141273a38;
    }
  }
  iVar3 = *(int *)(lVar7 + 0x290);
LAB_141273a38:
  iVar5 = *(int *)(lVar7 + 0x290);
  if (iVar3 <= *(int *)(lVar7 + 0x290)) {
    iVar5 = iVar3;
  }
  if (0 < iVar5) {
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x288) + uVar8 * 8);
      if (lVar9 != 0) {
        iVar3 = *(int *)(param_1 + 0x2c8);
        uVar4 = *(undefined8 *)(param_1 + 0x288);
        *(int *)(param_1 + 0x2c8) = iVar3 + 1;
        if (*(int *)(param_1 + 0x2cc) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        FUN_14125bbb0((longlong)iVar3 * 0x30 + *plVar1,uVar4,lVar9,*(undefined8 *)(param_1 + 0x188),
                      param_1 + 0x1f8,param_1 + 0x208);
        lVar9 = FWeakObjectPtr::Get((longlong)(*(int *)(param_1 + 0x2c8) + -1) * 0x30 + *plVar1);
        if (lVar9 != 0) {
          FUN_1405aab30(lVar9,*(undefined4 *)(param_1 + 400));
        }
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)iVar5);
    lVar9 = *(longlong *)(param_1 + 0x248);
    lVar10 = (longlong)*(int *)(param_1 + 0x250) * 0x20 + lVar9;
    for (; lVar9 != lVar10; lVar9 = lVar9 + 0x20) {
      FUN_141263c60(lVar9,plVar1);
    }
    if (*(char *)(param_1 + 0x180) == '\x01') {
      FUN_141271f20(param_1,lVar7);
      return;
    }
    if (*(char *)(param_1 + 0x180) == '\x02') {
      FUN_141273710(param_1,lVar7);
    }
  }
  return;
}



// FUNCTION 141273ba0 FUN_141273ba0 body=126 status=ok
// SIG undefined FUN_141273ba0(void)

undefined8 FUN_141273ba0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_140a67ae0();
  if ((cVar1 == '\0') || ((*(char *)(param_1 + 0x418) - 1U & 0xfd) == 0)) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x6d8) != 0) &&
     ((*(char *)(param_1 + 0x6e7) != '\0' &&
      (iVar2 = FUN_141229050(*(longlong *)(param_1 + 0x6d8),param_2), iVar2 == 2)))) {
    return 0;
  }
  lVar3 = FUN_142dccd00(param_2);
  if ((lVar3 != 0) && (cVar1 = FUN_14126a670(param_1,lVar3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 141273c20 FUN_141273c20 body=186 status=ok
// SIG undefined FUN_141273c20(void)

ulonglong FUN_141273c20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = FRootMotionSourceGroup::HasOverrideVelocity(param_2);
      return uVar4;
    }
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar5 = FUN_142e6f710();
      lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
      in_RAX = 0;
      if (lVar3 != 0) {
        return (ulonglong)*(byte *)(lVar3 + 0x200);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141273ce0 Start body=66 status=ok
// SIG undefined Start(void)

undefined1 UStyx3PlayAnimSyncNode::Start(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140a67de0();
  if (cVar1 != '\0') {
    cVar1 = FUN_14126a670(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141273d30 FUN_141273d30 body=190 status=ok
// SIG undefined FUN_141273d30(void)

ulonglong FUN_141273d30(longlong param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  plVar5 = (longlong *)FUN_142ceeb40(param_1,0);
  if (plVar5 != (longlong *)0x0) {
    bVar3 = (**(code **)(*plVar5 + 0x780))(plVar5);
LAB_141273d61:
    if (param_2 != '\0') {
      bVar4 = (**(code **)(*plVar5 + 0x778))(plVar5);
      bVar3 = bVar3 & bVar4;
    }
    return (ulonglong)bVar3;
  }
  plVar5 = *(longlong **)(param_1 + 0x118);
  uVar7 = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_1429d7ab0();
    iVar1 = *(int *)(lVar6 + 0x90);
    uVar7 = (longlong)iVar1;
    if ((*(int *)(plVar5[2] + 0x90) < iVar1) ||
       (uVar7 = *(ulonglong *)(plVar5[2] + 0x88),
       *(longlong *)(uVar7 + (longlong)iVar1 * 8) != lVar6 + 0x88)) {
      uVar7 = uVar7 & 0xffffffffffffff00;
      bVar2 = false;
    }
    else {
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
      bVar2 = true;
    }
    if (bVar2) {
      bVar3 = (**(code **)(*plVar5 + 0x780))(plVar5);
      goto LAB_141273d61;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 141273df0 FUN_141273df0 body=127 status=ok
// SIG undefined FUN_141273df0(void)

ulonglong FUN_141273df0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((*(longlong *)(param_1 + 0x7e0) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x7e0) + 0x490), lVar2 != 0)) {
    lVar3 = FUN_14145f370();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar4 = FUN_140d022a0(lVar2,param_2);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141273e70 FUN_141273e70 body=70 status=ok
// SIG undefined FUN_141273e70(void)

bool FUN_141273e70(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x38) & 4) != 0) {
    uVar4 = *(uint *)(param_1 + 0x3c);
    iVar3 = 0;
    bVar1 = 0;
    while ((uVar4 != 0 && (iVar3 < 8))) {
      iVar3 = iVar3 + 1;
      bVar2 = bVar1 + 1;
      if ((uVar4 & 1) == 0) {
        bVar2 = bVar1;
      }
      uVar4 = (int)uVar4 >> 1;
      bVar1 = bVar2;
    }
    return 1 < bVar1;
  }
  return false;
}



// FUNCTION 141273ec0 FUN_141273ec0 body=98 status=ok
// SIG undefined FUN_141273ec0(void)

undefined1 FUN_141273ec0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  cVar1 = FUN_140e71290(param_1 + 0x228,0);
  if (cVar1 != '\0') {
    return 0;
  }
  plVar3 = (longlong *)FUN_140e83500(param_1 + 0x228,param_2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141273f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x830))(plVar3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141273f30 FUN_141273f30 body=38 status=ok
// SIG undefined FUN_141273f30(void)

void FUN_141273f30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e83500(param_1 + 0x228);
  if (lVar1 != 0) {
    FUN_14307ecd0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141273f60 FUN_141273f60 body=966 status=ok
// SIG undefined FUN_141273f60(void)

ulonglong FUN_141273f60(longlong param_1,ulonglong param_2)

{
  void *pvVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 local_res8;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 local_20;
  
  if (param_1 == 0) {
    return param_2 & 0xffffffffffffff00;
  }
  uVar8 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_141594550(param_2,&local_38,&DAT_144720674,0);
  if ((int)local_30 < 2) {
    bVar14 = false;
  }
  else {
    local_48 = (longlong *)0x0;
    local_40 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    plVar9 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"Wheel",0xc);
    puVar12 = &DAT_143f3eda8;
    plVar5 = (longlong *)&DAT_143f3eda8;
    if ((int)local_40 != 0) {
      plVar5 = plVar9;
    }
    if ((int)local_38[3] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)local_38[2];
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,plVar5);
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
    local_48 = (longlong *)0x0;
    if (iVar11 == 0) {
      local_res8 = *(undefined8 *)(param_1 + 0x18);
      local_40 = 0;
      FName::ToString(&local_res8,&local_28);
      FUN_141594550(&local_28,&local_48,&DAT_14472069c,0);
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_58 = (undefined2 *)0x0;
      local_50 = (int)(local_48 + (longlong)((int)local_40 + -1) * 2)[1];
      lVar10 = (longlong)local_50;
      pvVar1 = (void *)local_48[(longlong)((int)local_40 + -1) * 2];
      if (local_50 == 0) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar10 * 2);
      }
      cVar2 = FString::IsNumeric(&local_58);
      if (cVar2 != '\0') {
        FString::operator=(&local_58,local_48 + (longlong)((int)local_40 + -2) * 2);
      }
      local_28 = (undefined2 *)0x0;
      local_20 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      puVar3 = local_28;
      FGenericPlatformString::Memcpy(local_28,&DAT_1447206cc,4);
      puVar6 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar6 = puVar3;
      }
      puVar4 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar4 = local_58;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar6);
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if (iVar11 == 0) {
        FString::operator=(&local_58,local_48 + (longlong)((int)local_40 + -3) * 2);
      }
      puVar3 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar3 = local_58;
      }
      if ((int)(local_38 + (longlong)((int)local_30 + -1) * 2)[1] != 0) {
        puVar12 = (undefined2 *)local_38[(longlong)((int)local_30 + -1) * 2];
      }
      iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar3);
      bVar14 = iVar11 == 0;
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar9 = local_48;
      for (iVar11 = (int)local_40; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    else {
      iVar11 = (int)(local_38 + (longlong)((int)local_30 + -1) * 2)[1];
      pvVar1 = (void *)local_38[(longlong)((int)local_30 + -1) * 2];
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (iVar11 == 0) {
        local_40 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar11,0);
        _guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)iVar11 * 2);
      }
      uVar13 = uVar8;
      if (0 < *(int *)(param_1 + 0x548)) {
        do {
          lVar10 = *(longlong *)(uVar13 + *(longlong *)(param_1 + 0x540));
          if (lVar10 != 0) {
            local_res8 = *(undefined8 *)(lVar10 + 0x18);
            FName::ToString(&local_res8,&local_28);
            cVar2 = FString::EndsWith(&local_28,&local_48,1);
            if (local_28 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (cVar2 != '\0') {
              if (local_48 != (longlong *)0x0) {
                FMemory::Free();
              }
              bVar14 = true;
              goto LAB_1412742c9;
            }
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar13 = uVar13 + 8;
        } while ((int)uVar7 < *(int *)(param_1 + 0x548));
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      bVar14 = false;
    }
  }
LAB_1412742c9:
  plVar9 = local_38;
  for (iVar11 = (int)local_30; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return (ulonglong)bVar14;
}



// FUNCTION 141274330 FUN_141274330 body=474 status=ok
// SIG undefined FUN_141274330(void)

ulonglong FUN_141274330(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_res8;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res8,local_28);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_141594550(local_28,&local_58,&DAT_1447205ec,0);
  if (1 < (int)local_50) {
    local_38 = (undefined2 *)0x0;
    local_30 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar4 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"Vehicle",0x10);
    puVar5 = &DAT_143f3eda8;
    puVar3 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar3 = puVar4;
    }
    if ((int)local_58[1] == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*local_58;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (puVar4 != (undefined2 *)0x0) {
      FMemory::Free(puVar4);
    }
    if (iVar1 == 0) {
      local_48 = (longlong *)0x0;
      local_40 = 0;
      FUN_141594550(param_2,&local_48,&DAT_14472062c,0);
      if ((int)local_58[3] == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)local_58[2];
      }
      if ((int)local_48[1] != 0) {
        puVar5 = (undefined2 *)*local_48;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar4);
      bVar7 = iVar1 == 0;
      plVar6 = local_48;
      for (iVar1 = (int)local_40; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      goto LAB_1412744a1;
    }
  }
  bVar7 = false;
LAB_1412744a1:
  plVar6 = local_58;
  for (iVar1 = (int)local_50; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return (ulonglong)bVar7;
}



// FUNCTION 141274520 FUN_141274520 body=64 status=ok
// SIG undefined FUN_141274520(void)

undefined8 FUN_141274520(longlong param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 != 3) && (*(int *)(param_1 + 0x230) <= (int)(uint)param_2)) {
    return 0;
  }
  return 1;
}



// FUNCTION 141274560 FUN_141274560 body=42 status=ok
// SIG undefined FUN_141274560(void)

void FUN_141274560(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e83500(param_1 + 0x228,0);
  if (lVar1 != 0) {
    FUN_14307ee20(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 141274590 FUN_141274590 body=8 status=ok
// SIG undefined FUN_141274590(void)

void FUN_141274590(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x541) = 1;
  return;
}



// FUNCTION 1412745a0 FUN_1412745a0 body=295 status=ok
// SIG undefined FUN_1412745a0(void)

void FUN_1412745a0(longlong param_1,undefined8 param_2,uint param_3,char param_4,undefined1 param_5,
                  char param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    if ((param_3 >> (uVar5 & 0x1f) & 1) != 0) {
      FUN_140e864a0(param_1 + 0x228,uVar5,param_2);
    }
    bVar4 = (char)uVar5 + 1;
    uVar5 = (uint)bVar4;
  } while (bVar4 < 4);
  if (param_4 != '\0') {
    FUN_141280740(param_1,param_3,param_5,0);
  }
  if (param_6 != '\0') {
    iVar2 = FUN_14233f450(param_1);
    if (((iVar2 == 3) &&
        (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))(), lVar3 != 0)) &&
       ((*(longlong **)(param_1 + 0x7e0) == (longlong *)0x0 ||
        (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar1 == '\0')))) {
      FUN_1412d8fc0(param_1,param_2,param_3,param_4,param_5);
      return;
    }
    iVar2 = FUN_14233f450(param_1);
    if (((iVar2 != 3) && (*(longlong **)(param_1 + 0x7e0) != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar1 != '\0')) {
      FUN_1412d9ab0(param_1,param_2,param_3,param_4,param_5);
    }
    return;
  }
  return;
}



// FUNCTION 1412746d0 FUN_1412746d0 body=69 status=ok
// SIG undefined FUN_1412746d0(void)

void FUN_1412746d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_140e86750();
  if ((*(longlong *)(param_1 + 0x70) != 0) && (*(char *)(param_1 + 0x7a) != '\0')) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + 0x580);
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_2,1);
  }
  return;
}



// FUNCTION 141274720 FUN_141274720 body=57 status=ok
// SIG undefined FUN_141274720(void)

ulonglong FUN_141274720(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141274820();
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  return (ulonglong)(*(char *)(param_1 + 0x58) == *(char *)(param_2 + 0x58));
}



// FUNCTION 141274760 FUN_141274760 body=182 status=ok
// SIG undefined FUN_141274760(void)

undefined8 FUN_141274760(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  
  cVar3 = FUN_143003f80();
  if (cVar3 == '\0') {
LAB_1412747ff:
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = *(int *)(param_1 + 0x78);
      if (iVar1 != *(int *)(param_2 + 0x78)) goto LAB_1412747ff;
      if (0 < iVar1) {
        lVar7 = 0;
        piVar8 = (int *)(*(longlong *)(param_1 + 0x70) + 0x10);
        piVar9 = (int *)(*(longlong *)(param_2 + 0x70) + 0x10);
        do {
          if (piVar8[-3] != piVar9[-3]) goto LAB_1412747ff;
          iVar2 = *piVar8;
          if (iVar2 != *piVar9) goto LAB_1412747ff;
          lVar6 = 0;
          if (0 < iVar2) {
            plVar4 = *(longlong **)(piVar9 + -2);
            lVar10 = *(longlong *)(piVar8 + -2) - (longlong)plVar4;
            do {
              if (*(longlong *)(lVar10 + (longlong)plVar4) != *plVar4) goto LAB_1412747ff;
              lVar6 = lVar6 + 1;
              plVar4 = plVar4 + 9;
            } while (lVar6 < iVar2);
          }
          lVar7 = lVar7 + 1;
          piVar8 = piVar8 + 6;
          piVar9 = piVar9 + 6;
        } while (lVar7 < iVar1);
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141274820 FUN_141274820 body=212 status=ok
// SIG undefined FUN_141274820(void)

ulonglong FUN_141274820(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  plVar5 = (longlong *)param_2[2];
  if ((longlong *)param_1[2] == plVar5) {
    uVar4 = (**(code **)(*param_2 + 0x2d0))(param_2);
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
    if ((((uint)plVar5 & uVar4) != 0) && ((int)param_1[8] != 0)) {
      plVar5 = (longlong *)(longlong)(int)param_1[8];
      if ((int)param_1[8] != 0) {
        plVar7 = (longlong *)param_1[7];
        plVar1 = plVar7 + (longlong)plVar5;
        if (plVar7 != plVar1) {
          plVar3 = (longlong *)param_2[7];
          do {
            if (plVar3 != plVar3 + (int)param_2[8]) {
              plVar5 = plVar3;
              do {
                if (*plVar5 == *plVar7) goto LAB_1412748de;
                plVar5 = plVar5 + 1;
              } while (plVar5 != plVar3 + (int)param_2[8]);
            }
            puVar6 = (undefined8 *)param_2[9];
            plVar5 = (longlong *)(longlong)(int)param_2[10];
            puVar2 = puVar6 + (longlong)plVar5;
            if (puVar6 == puVar2) goto LAB_1412748d1;
            plVar5 = (longlong *)*plVar7;
            while ((longlong *)*puVar6 != plVar5) {
              puVar6 = puVar6 + 1;
              if (puVar6 == puVar2) goto LAB_1412748d1;
            }
LAB_1412748de:
            plVar7 = plVar7 + 1;
          } while (plVar7 != plVar1);
        }
      }
      return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    }
  }
LAB_1412748d1:
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}



// FUNCTION 141274900 UpdateStateFrom body=19 status=ok
// SIG undefined UpdateStateFrom(void)

bool FRootMotionSource_ConstantForce::UpdateStateFrom(void)

{
  char cVar1;
  
  cVar1 = FUN_141274820();
  return cVar1 != '\0';
}



// FUNCTION 141274940 FUN_141274940 body=257 status=ok
// SIG undefined FUN_141274940(void)

void FUN_141274940(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_142269f40();
  if (lVar4 != 0) {
    lVar5 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141274992;
  }
  lVar4 = 0;
LAB_141274992:
  *(longlong *)(param_1 + 0x470) = lVar4;
  FUN_14307f440(param_1);
  if (*(int *)(param_1 + 0x468) != 0) {
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    if (*(longlong *)(param_1 + 0x470) != 0) {
      bVar2 = FUN_14126fbb0(*(longlong *)(param_1 + 0x470),0);
      bVar3 = FUN_14126fbb0(*(undefined8 *)(param_1 + 0x470),1);
      if ((int)(uint)bVar2 < *(int *)(param_1 + 0x468)) {
        *(undefined8 *)(param_1 + 0x478) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x460) + (ulonglong)bVar2 * 8);
      }
      if ((int)(uint)bVar3 < *(int *)(param_1 + 0x468)) {
        *(undefined8 *)(param_1 + 0x480) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x460) + (ulonglong)bVar3 * 8);
      }
    }
  }
  return;
}



// FUNCTION 141274a50 FUN_141274a50 body=382 status=ok
// SIG undefined FUN_141274a50(void)

ulonglong FUN_141274a50(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong local_res10 [3];
  
  uVar3 = thunk_FUN_1428f9800();
  if ((param_2 != 0) && (plVar5 = *(longlong **)(param_2 + 0x118), plVar5 != (longlong *)0x0)) {
    lVar4 = FUN_1413f82e0();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(plVar5[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(plVar5[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 != '\0') {
      cVar2 = (**(code **)(*plVar5 + 0xc28))(plVar5);
      if (cVar2 == '\0') {
        local_res10[0] = 0;
        if (*(longlong *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141274b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(plVar5[0x1b1] + 0x78))
                            (plVar5 + 0x1b1,*(undefined8 *)(param_1 + 0x30),0);
          return uVar3;
        }
        local_res10[0] = 0;
        if (*(longlong *)(param_1 + 0x38) == 0) {
          return 0;
        }
        plVar5 = (longlong *)(**(code **)(plVar5[0x1b1] + 0xf0))();
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        local_res10[0] = local_res10[0] >> 8;
      }
      else {
        lVar4 = FUN_1413ffe00();
        iVar1 = *(int *)(lVar4 + 0x90);
        uVar3 = (longlong)iVar1;
        if ((*(int *)(plVar5[2] + 0x90) < iVar1) ||
           (uVar3 = *(ulonglong *)(plVar5[2] + 0x88),
           *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
          uVar3 = uVar3 & 0xffffffffffffff00;
        }
        else {
          uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
        }
        if ((char)uVar3 == '\0') {
          return uVar3;
        }
        plVar5 = (longlong *)FUN_140e21bd0(plVar5);
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        local_res10[0] = 0;
        if (*(longlong *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141274b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar5 + 0x310))(plVar5,1);
          return uVar3;
        }
        if (*(longlong *)(param_1 + 0x38) == 0) {
          return 0;
        }
        local_res10[0] = 0;
      }
      local_res10[0] = local_res10[0] << 8;
      uVar3 = FUN_14308aea0(plVar5,*(undefined8 *)(param_1 + 0x38),0,local_res10);
    }
  }
  return uVar3;
}



// FUNCTION 141274bd0 FUN_141274bd0 body=516 status=ok
// SIG undefined FUN_141274bd0(void)

void FUN_141274bd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  thunk_FUN_1428f9860();
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
    lVar5 = FUN_142ff67b0(uVar4);
    if (lVar5 != 0) {
      local_28 = 0;
      local_18 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = plVar1;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_1412686f0;
      FUN_142ff3760(lVar5,local_58);
    }
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0xc28))(plVar1);
      if (cVar3 == '\0') {
        local_res10 = 0;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          (**(code **)(plVar1[0x1b1] + 0x80))(plVar1 + 0x1b1,*(undefined8 *)(param_1 + 0x30),0);
          return;
        }
        local_res10 = 0;
        if (*(longlong *)(param_1 + 0x38) == 0) {
          return;
        }
        plVar7 = (longlong *)(**(code **)(plVar1[0x1b1] + 0xf0))(plVar1 + 0x1b1,0);
        plVar1 = plVar7;
      }
      else {
        lVar5 = FUN_1413ffe00();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          return;
        }
        plVar7 = (longlong *)FUN_140e21bd0(plVar1);
        if (plVar7 == (longlong *)0x0) {
          return;
        }
        local_res10 = 0;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          (**(code **)(*plVar7 + 0x310))(plVar7,0);
          return;
        }
        local_res10 = 0;
        plVar1 = *(longlong **)(param_1 + 0x38);
      }
      if (plVar1 != (longlong *)0x0) {
        local_res10 = local_res10 & 0xffffffffffffff00;
        FUN_14308aea0(plVar7,*(undefined8 *)(param_1 + 0x38),1,&local_res10);
      }
    }
  }
  return;
}



// FUNCTION 141274de0 FUN_141274de0 body=95 status=ok
// SIG undefined FUN_141274de0(void)

void FUN_141274de0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x958);
  lVar3 = (longlong)*(int *)(param_1 + 0x960) * 0x30 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x30) {
    plVar1 = *(longlong **)(lVar2 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x310))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 141274e40 FUN_141274e40 body=406 status=ok
// SIG undefined FUN_141274e40(void)

void FUN_141274e40(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146877a60) && (_Init_thread_header(&DAT_146877a60), DAT_146877a60 == -1))
  {
    FName::FName(&DAT_146877a58,L"Proj_ATL_Tracker_Dart_C",1);
    _Init_thread_footer(&DAT_146877a60);
  }
  if ((((param_1[2] != 0) && (*(longlong *)(param_1[2] + 0x18) == DAT_146877a58)) &&
      (lVar3 = FUN_14307c290(param_1), lVar3 != 0)) &&
     ((param_3 == 0 || (cVar1 = FUN_140b83580(param_3), cVar1 == '\0')))) {
    uVar4 = FUN_14307c290(param_1);
    iVar2 = FUN_140b28020(uVar4);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x6d0))(param_1,0);
      return;
    }
  }
  local_38 = *param_8;
  local_30 = *(undefined4 *)(param_8 + 1);
  local_28 = *param_7;
  local_20 = *(undefined4 *)(param_7 + 1);
  local_18 = *param_6;
  local_10 = *(undefined4 *)(param_6 + 1);
  FUN_14307fa10(param_1,param_2,param_3,param_4,param_5,&local_18,&local_28,&local_38,param_9);
  return;
}



// FUNCTION 141274ff0 FUN_141274ff0 body=363 status=ok
// SIG undefined FUN_141274ff0(void)

void FUN_141274ff0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *local_38;
  uint local_30;
  uint local_2c;
  longlong *plVar11;
  
  plVar6 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_2c = 0;
  plVar5 = plVar6;
  plVar8 = plVar6;
  plVar9 = plVar6;
  plVar11 = plVar6;
  do {
    lVar2 = FUN_14307d810(param_1,(ulonglong)plVar11 & 0xff);
    if (lVar2 != 0) {
      lVar3 = AVolume::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar7 = (int)plVar5;
        for (plVar4 = plVar9; plVar4 != plVar9 + iVar7; plVar4 = plVar4 + 1) {
          if (*plVar4 == lVar2) {
            if ((int)((longlong)plVar4 - (longlong)plVar9 >> 3) != -1) goto LAB_1412750d9;
            break;
          }
        }
        local_30 = iVar7 + 1;
        if ((int)plVar8 < (int)local_30) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,plVar5);
          plVar8 = (longlong *)(ulonglong)local_2c;
          plVar9 = local_38;
        }
        plVar5 = (longlong *)(ulonglong)local_30;
        plVar9[iVar7] = lVar2;
      }
    }
LAB_1412750d9:
    uVar10 = (int)plVar11 + 1;
    plVar11 = (longlong *)(ulonglong)uVar10;
    if (7 < (int)uVar10) {
      plVar8 = (longlong *)
               ((ulonglong)((longlong)(plVar9 + (int)plVar5) + (7 - (longlong)plVar9)) >> 3);
      if (plVar9 + (int)plVar5 < plVar9) {
        plVar8 = plVar6;
      }
      plVar5 = plVar9;
      if (plVar8 != (longlong *)0x0) {
        do {
          FUN_140a0c8a0(*plVar5);
          plVar6 = (longlong *)((longlong)plVar6 + 1);
          plVar5 = plVar5 + 1;
        } while (plVar6 != plVar8);
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
      return;
    }
  } while( true );
}



// FUNCTION 141275160 FUN_141275160 body=8 status=ok
// SIG undefined FUN_141275160(void)

void FUN_141275160(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2d5) = 1;
  return;
}



// FUNCTION 141275170 NewProp_Invincible_SetBit body=8 status=ok
// SIG undefined NewProp_Invincible_SetBit(void)

void Z_Construct_UClass_ADamageableActor_Statics::NewProp_Invincible_SetBit(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x34c) = 1;
  return;
}



// FUNCTION 141275180 FUN_141275180 body=374 status=ok
// SIG undefined FUN_141275180(void)

void FUN_141275180(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (((param_1[0xa3] != 0) &&
      (cVar2 = FWeakObjectPtr::IsValid(param_1[0xa3] + 0x77c), cVar2 == '\0')) && (param_2 != 0)) {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = *(longlong *)(param_2 + 0x568), lVar3 != 0)) {
      plVar4 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
      if (plVar4 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = plVar4[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x368))(plVar4);
          lVar6 = plVar4[0x1f];
        }
      }
      FUN_142bb3d50(lVar3,DAT_146877938,lVar6);
      uVar5 = (**(code **)(*param_1 + 0x690))(param_1);
      FUN_142bcad50(lVar3,&DAT_146877938,uVar5);
      plVar4 = (longlong *)UBlackboardKeyType_Int::GetPrivateStaticClass();
      if (plVar4 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = plVar4[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x368))(plVar4);
          lVar6 = plVar4[0x1f];
        }
      }
      FUN_142bb3d50(lVar3,DAT_146877940,lVar6);
      UBlackboardComponent::SetValueAsInt
                (lVar3,&DAT_146877940,*(undefined4 *)(param_1[0xa3] + 0x6c8));
      FUN_14127c6d0(param_1[0xa3],*(undefined8 *)(param_2 + 0x488));
    }
  }
  return;
}



// FUNCTION 141275300 FUN_141275300 body=216 status=ok
// SIG undefined FUN_141275300(void)

void FUN_141275300(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(param_1 + 0x518) != 0) {
    cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0x518) + 0x77c);
    if ((cVar2 != '\0') && (param_2 != 0)) {
      lVar3 = FUN_1413e48b0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar3 = *(longlong *)(param_2 + 0x568), lVar3 != 0)) {
        FUN_142bcad50(lVar3,&DAT_146877938,0);
        UBlackboardComponent::SetValueAsInt(lVar3,&DAT_146877940,0xffffffff);
        lVar3 = *(longlong *)(param_1 + 0x518);
        FWeakObjectPtr::operator=(&local_res8,0);
        *(undefined4 *)(lVar3 + 0x77c) = local_res8;
        *(undefined4 *)(lVar3 + 0x780) = local_resc;
      }
    }
  }
  return;
}



// FUNCTION 1412753e0 FUN_1412753e0 body=775 status=ok
// SIG undefined FUN_1412753e0(void)

void FUN_1412753e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) {
    return;
  }
  fVar9 = (float)FUN_141229070(*(undefined8 *)(param_1 + 0x188));
  if ((ABS(fVar9) < *(float *)(param_1 + 800)) &&
     (pfVar1 = (float *)(*(longlong *)(param_1 + 0x188) + 0x784),
     *pfVar1 <= *(float *)(param_1 + 0x324) && *(float *)(param_1 + 0x324) != *pfVar1)) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  fVar9 = *(float *)(lVar5 + 0x790);
  fVar10 = fVar9 - *(float *)(param_1 + 0x428);
  if ((*(longlong *)(param_1 + 0x420) != param_3) ||
     (*(float *)(param_1 + 0x358) <= fVar10 && fVar10 != *(float *)(param_1 + 0x358))) {
    *(undefined1 *)(param_1 + 0x42c) = 0;
    *(longlong *)(param_1 + 0x420) = param_3;
  }
  *(float *)(param_1 + 0x428) = fVar9;
  fVar10 = fVar9 - *(float *)(param_1 + 0x430);
  if (fVar10 < *(float *)(param_1 + 0x354)) {
    return;
  }
  if (*(float *)(param_1 + 0x358) <= fVar10 && fVar10 != *(float *)(param_1 + 0x358)) {
    *(undefined8 *)(param_1 + 0x420) = 0;
  }
  if (*(longlong *)(param_1 + 0x188) == 0) {
    bVar7 = 0;
  }
  else if ((*(char *)(param_1 + 0x42c) == '\0') ||
          (cVar3 = FUN_14058c1e0(param_5 + 0x6c), cVar3 == '\0')) {
    fVar10 = (float)FUN_140a23120(*(float *)(*(longlong *)(param_1 + 0x188) + 0x78c) * 0.01,0xc,0xd)
    ;
    uVar8 = 1;
    do {
      bVar7 = (byte)uVar8;
      pfVar1 = (float *)(param_1 + 0x35c + uVar8 * 4);
      if (ABS(fVar10) < *pfVar1 || ABS(fVar10) == *pfVar1) goto LAB_14127555a;
      uVar8 = (ulonglong)(byte)(bVar7 + 1);
    } while ((byte)(bVar7 + 1) < 6);
    bVar7 = 5;
  }
  else {
    bVar7 = 1;
  }
LAB_14127555a:
  *(bool *)(param_1 + 0x34b) = bVar7 == 1;
  if ((bVar7 == 1) &&
     (pfVar1 = (float *)(*(longlong *)(param_1 + 0x188) + 0x784),
     *pfVar1 <= *(float *)(param_1 + 0x324) && *(float *)(param_1 + 0x324) != *pfVar1)) {
    *(undefined1 *)(param_1 + 0x328) = 1;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_5 + 0x74);
  if (cVar3 != '\0') {
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_5 + 0x74);
    iVar4 = (**(code **)(*plVar6 + 0x4f8))(plVar6);
    if (iVar4 == 0) {
      lVar5 = 0x3e0;
      goto LAB_141275659;
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_5 + 0x74);
  if (cVar3 != '\0') {
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_5 + 0x74);
    iVar4 = (**(code **)(*plVar6 + 0x4f8))(plVar6);
    if (iVar4 == 6) {
      lVar5 = 0x3d0;
      goto LAB_141275659;
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_5 + 0x74);
  if (cVar3 != '\0') {
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_5 + 0x74);
    iVar4 = (**(code **)(*plVar6 + 0x4f8))(plVar6);
    if (iVar4 == 7) {
      lVar5 = 0x400;
      goto LAB_141275659;
    }
  }
  if (param_3 != 0) {
    lVar5 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar5 = 0x3f0;
    if (bVar2) goto LAB_141275659;
  }
  lVar5 = 0x410;
LAB_141275659:
  FUN_141267b70(param_1 + lVar5,param_3,param_5,bVar7);
  FUN_141267b70(param_1 + 0x3b0,param_3,param_5,bVar7);
  if ((int)(uint)bVar7 < *(int *)(param_1 + 0x380)) {
    FUN_14127ab90(*(longlong *)(param_1 + 0x378) + (ulonglong)bVar7 * 0x28,
                  *(undefined8 *)(param_1 + 0x188),param_3,param_5);
  }
  *(float *)(param_1 + 0x430) = fVar9;
  *(undefined1 *)(param_1 + 0x42c) = 1;
  return;
}



// FUNCTION 1412756f0 FUN_1412756f0 body=31 status=ok
// SIG undefined FUN_1412756f0(void)

void FUN_1412756f0(undefined8 param_1)

{
  FUN_14127a6d0(param_1,2);
  FUN_141280e60(param_1,2);
  return;
}



// FUNCTION 141275710 FUN_141275710 body=31 status=ok
// SIG undefined FUN_141275710(void)

void FUN_141275710(undefined8 param_1)

{
  FUN_14127a6d0(param_1,0xf);
  FUN_141280e60(param_1,0xf);
  return;
}



// FUNCTION 141275740 FUN_141275740 body=155 status=ok
// SIG undefined FUN_141275740(void)

void FUN_141275740(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  FUN_1423437a0();
  iVar3 = *(int *)(param_1 + 0x208);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x200) + 0x30);
    do {
      plVar1 = (longlong *)plVar2[-1];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        plVar2[-1] = 0;
      }
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x3b0))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x200,0);
  }
  return;
}



// FUNCTION 141275800 FUN_141275800 body=31 status=ok
// SIG undefined FUN_141275800(void)

void FUN_141275800(undefined8 param_1)

{
  FUN_141280e60(param_1,0x16);
  FUN_141280e60(param_1,0x17);
  return;
}



// FUNCTION 141275820 FUN_141275820 body=31 status=ok
// SIG undefined FUN_141275820(void)

void FUN_141275820(undefined8 param_1)

{
  FUN_141280e60(param_1,0x15);
  FUN_14127a6d0(param_1,0x16);
  return;
}



// FUNCTION 141275840 FUN_141275840 body=889 status=ok
// SIG undefined FUN_141275840(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_141275840(longlong *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong local_c8 [3];
  undefined1 local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  undefined4 local_80;
  int local_78 [4];
  undefined1 local_68 [64];
  
  if ((param_1[0x92] != 0) && (lVar5 = (**(code **)(*param_1 + 0x148))(), lVar5 != 0)) {
    lVar7 = param_1[0x29];
    if (lVar7 != 0) {
      lVar6 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (lVar7 = FUN_14307cf20(lVar7,*(undefined1 *)(lVar7 + 0x690)), lVar7 != 0)) {
        lVar6 = AGVersusPlayerState::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) &&
           (*(float *)(param_1[0x92] + 0x340) + *(float *)(lVar7 + 0x978) <=
            *(float *)(lVar5 + 0x790))) {
          if ((*(byte *)(param_3 + 0x214) & 1) == 0) {
            if ((*(char *)(lVar7 + 0x958) != '\0') && (*(char *)(lVar7 + 0x959) != '\0')) {
              FUN_1412a9690(lVar7);
            }
          }
          else {
            if (*(char *)(lVar7 + 0x958) != '\0') {
              lVar6 = *(longlong *)(lVar7 + 0x960);
              plVar3 = (longlong *)param_1[0x28];
              fVar1 = *(float *)(lVar7 + 0x968);
              if ((lVar6 != 0) && (plVar3 != (longlong *)0x0)) {
                uVar8 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
                lVar9 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar8);
                if (lVar9 != 0) {
                  local_c8[1] = 0xffffffff;
                  local_c8[2] = 0xffffffff;
                  local_b0 = 1;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_ac = 0.0;
                  local_98 = 0;
                  local_c8[0] = lVar6;
                  FWeakObjectPtr::operator=(local_c8 + 1,plVar3);
                  local_b0 = fVar1 <= 0.0;
                  local_ac = fVar1;
                  FUN_142dc49a0(lVar9,local_68,local_c8);
                  local_80 = 0;
                  local_90 = lVar6;
                  local_88 = plVar3;
                  FUN_142dd6dc0(lVar9,local_78,&local_90);
                  iVar2 = *(int *)(param_1[0x92] + 0x350);
                  if (iVar2 <= local_78[0]) {
                    local_78[0] = iVar2;
                  }
                  local_78[0] = local_78[0] + -1;
                  if ((local_78[0] < 0) || (iVar2 <= local_78[0])) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    FUN_14127a7a0(param_1,(longlong)local_78[0] * 0x10 +
                                          *(longlong *)(param_1[0x92] + 0x348),param_2 + 0x20);
                  }
                }
              }
            }
            iVar2 = *(int *)(lVar7 + 0x96c);
            if (0 < iVar2) {
              plVar3 = (longlong *)param_1[0x29];
              if (plVar3 != (longlong *)0x0) {
                lVar6 = FUN_1430b3b80();
                if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                    lVar6 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  (**(code **)(*plVar3 + 0x810))
                            (plVar3,iVar2,CONCAT71((int7)((ulonglong)(lVar6 + 0x88) >> 8),1),0);
                }
              }
              FUN_14127a7a0(param_1,param_1[0x92] + 0x358,param_2 + 0x20);
            }
            if (0 < *(int *)(lVar7 + 0x970)) {
              FUN_14127ce80(param_1,param_2,*(int *)(lVar7 + 0x970),*(undefined4 *)(lVar7 + 0x974));
            }
            *(undefined4 *)(lVar7 + 0x978) = *(undefined4 *)(lVar5 + 0x790);
          }
        }
      }
    }
    FUN_143054bc0(param_1,param_2,param_3);
  }
  return;
}


