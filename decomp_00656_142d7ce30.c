// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142d7ce30 FUN_142d7ce30 body=220 status=ok
// SIG undefined FUN_142d7ce30(void)

void FUN_142d7ce30(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_18;
  int local_10;
  
  *param_3 = 1;
  if ((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar3 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x488) != 0)) {
        plVar4 = (longlong *)*param_2;
        plVar1 = plVar4 + (int)param_2[1];
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          if ((*plVar4 != 0) &&
             (cVar2 = FUN_142235c20(*plVar4,*(undefined8 *)(lVar3 + 0x488)), cVar2 != '\0')) {
            *param_3 = 0;
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d7cf10 FUN_142d7cf10 body=164 status=ok
// SIG undefined FUN_142d7cf10(void)

void FUN_142d7cf10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_142d95ce0(param_1,&local_18);
  puVar2 = local_18;
  puVar1 = local_18 + (int)local_10;
  puVar4 = local_18;
  while( true ) {
    if (puVar4 == puVar1) {
      if (puVar2 != (undefined8 *)0x0) {
        FMemory::Free(puVar2);
      }
      *param_3 = 1;
      return;
    }
    if ((param_2 != 0) && (cVar3 = FUN_142235c20(param_2,*puVar4), cVar3 != '\0')) break;
    puVar4 = puVar4 + 1;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free(puVar2);
  }
  *param_3 = 0;
  return;
}



// FUNCTION 142d7cfc0 FUN_142d7cfc0 body=209 status=ok
// SIG undefined FUN_142d7cfc0(void)

void FUN_142d7cfc0(undefined8 param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_142d95ce0(param_1,&local_38);
  plVar4 = local_38;
  plVar1 = local_38 + (int)local_30;
  plVar7 = local_38;
  do {
    if (plVar7 == plVar1) {
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      *param_3 = 1;
      return;
    }
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      plVar6 = (longlong *)*param_2;
      plVar2 = plVar6 + (int)param_2[1];
      for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
        if ((*plVar6 != 0) && (cVar5 = FUN_142235c20(*plVar6,lVar3), cVar5 != '\0')) {
          if (plVar4 != (longlong *)0x0) {
            FMemory::Free(plVar4);
          }
          *param_3 = 0;
          return;
        }
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 142d7d0a0 FUN_142d7d0a0 body=573 status=ok
// SIG undefined FUN_142d7d0a0(void)

undefined8 FUN_142d7d0a0(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Buf1;
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  
  switch(param_1) {
  default:
    goto LAB_142d7d0fe;
  case 0x20:
  case 0x21:
  case 0x4b:
    _Buf1 = (void *)*param_2;
    lVar6 = param_2[1] - (longlong)_Buf1 >> 1;
    if (lVar6 != param_3[1] - (longlong)*param_3 >> 1) {
      return 0;
    }
    if (lVar6 == 0) {
      return 1;
    }
    iVar4 = _guard_xfg_dispatch_icall_nop(_Buf1,(void *)*param_3,param_2[1] - (longlong)_Buf1);
    if (iVar4 == 0) {
      return 1;
    }
    return 0;
  case 0x22:
    iVar4 = FUN_142d784c0(param_2);
    iVar3 = FUN_142d784c0(param_3);
    if (iVar4 != iVar3) {
      return 0;
    }
    iVar4 = FUN_142d784c0(param_2);
    iVar3 = FUN_142d784c0(param_3);
    if (iVar4 != iVar3) {
      return 0;
    }
  case 0x1d:
    iVar4 = FUN_142d784c0(param_2);
    iVar3 = FUN_142d784c0(param_3);
    bVar7 = iVar4 == iVar3;
    break;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2c:
    cVar1 = FUN_142d783b0(param_2);
    cVar2 = FUN_142d783b0(param_3);
    bVar7 = cVar1 == cVar2;
    break;
  case 0x2b:
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da) {
      return 0;
    }
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da_00) {
      return 0;
    }
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da_01) {
      return 0;
    }
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da_02) {
      return 0;
    }
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da_03) {
      return 0;
    }
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da_04) {
      return 0;
    }
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da_05) {
      return 0;
    }
  case 0x23:
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da_06) {
      return 0;
    }
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    if (fVar8 != extraout_XMM0_Da_07) {
      return 0;
    }
  case 0x1e:
    fVar8 = (float)FUN_142d785d0(param_2);
    FUN_142d785d0(param_3);
    bVar7 = fVar8 == extraout_XMM0_Da_08;
    break;
  case 0x35:
    lVar5 = FUN_142d786f0(param_2);
    lVar6 = FUN_142d786f0(param_3);
    goto LAB_142d7d0f3;
  case 0x36:
    lVar5 = FUN_142d78800(param_2);
    lVar6 = FUN_142d78800(param_3);
LAB_142d7d0f3:
    bVar7 = lVar5 == lVar6;
  }
  if (bVar7) {
    return 1;
  }
LAB_142d7d0fe:
  return 0;
}



// FUNCTION 142d7d340 FUN_142d7d340 body=207 status=ok
// SIG undefined FUN_142d7d340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142d7d340(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int local_res8 [2];
  
  *param_2 = 1;
  lVar5 = *param_1;
  bVar6 = DAT_1466ad6a8 - _DAT_1466ad6d4 != (int)param_1[1];
  lVar1 = lVar5 + (longlong)(int)param_1[1] * 0x28;
  if (lVar5 != lVar1) {
    do {
      TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
      ::FindId(&DAT_1466ad6a0,local_res8,lVar5 + 8);
      lVar4 = 0;
      if (local_res8[0] != -1) {
        lVar4 = (longlong)local_res8[0] * 0x40 + DAT_1466ad6a0;
      }
      lVar3 = lVar4 + 0x10;
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      if (((lVar3 == 0) || (cVar2 = FUN_142d7ad80(lVar3,lVar5), cVar2 == '\0')) &&
         (bVar6 = true, *(int *)(lVar5 + 4) == 2)) {
        *param_2 = 2;
      }
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar1);
  }
  return bVar6;
}



// FUNCTION 142d7d410 FUN_142d7d410 body=990 status=ok
// SIG undefined FUN_142d7d410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d7d410(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  longlong local_a0;
  int local_98;
  undefined1 local_90 [4];
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if (((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) &&
     ((lVar6 = param_1[0x24], lVar6 != 0 || (lVar6 = FUN_1423407b0(), lVar6 != 0)))) {
    UWorld::GetPlayerControllerIterator(lVar6,&local_a0);
LAB_142d7d490:
    while( true ) {
      if ((local_98 < 0) || (*(int *)(local_a0 + 8) <= local_98)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (!bVar13) break;
      plVar7 = (longlong *)FWeakObjectPtr::Get();
      if (plVar7 == (longlong *)0x0) goto LAB_142d7d7a6;
      lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((!bVar13) ||
         (plVar8 = (longlong *)(**(code **)(*plVar7 + 0x688))(), plVar8 == (longlong *)0x0))
      goto LAB_142d7d7a6;
      plVar1 = param_1 + 0xe7;
      lVar11 = *plVar1;
      lVar6 = lVar11 + (longlong)(int)param_1[0xe8] * 8;
      while( true ) {
        if (lVar11 == lVar6) goto LAB_142d7d548;
        cVar5 = FUN_14058c1e0(lVar11,plVar7);
        if (cVar5 != '\0') break;
        lVar11 = lVar11 + 8;
      }
      lVar6 = plVar8[0x2d];
      if (lVar6 == 0) {
        local_84 = DAT_1468b5d98;
        puVar9 = &local_8c;
        local_8c = _DAT_1468b5d90;
      }
      else {
        puVar9 = (undefined8 *)&local_b8;
        local_b8 = *(undefined4 *)(lVar6 + 0x220);
        local_b0 = *(undefined4 *)(lVar6 + 0x228);
        uStack_b4 = *(undefined4 *)(lVar6 + 0x224);
      }
      local_80 = *puVar9;
      local_78 = *(undefined4 *)(puVar9 + 1);
      (**(code **)(*plVar8 + 0x578))(plVar8,local_res10,local_res20);
      cVar5 = FUN_142d958a0(param_1,&local_80,local_res10[0]);
      if (cVar5 != '\0') goto LAB_142d7d7a6;
      (**(code **)(*param_1 + 0x8f8))(param_1,plVar7);
      FWeakObjectPtr::operator=(local_c0,plVar7);
      iVar2 = (int)param_1[0xe8];
      if (iVar2 == 0) goto LAB_142d7d7a6;
      iVar12 = 0;
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(*plVar1,local_c0);
      bVar13 = cVar5 == '\0';
      iVar10 = 0;
      do {
        iVar3 = iVar10;
        do {
          iVar3 = iVar3 + 1;
          if (iVar2 <= iVar3) break;
          cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (*plVar1 + (longlong)iVar3 * 8,local_c0);
        } while (bVar13 == (cVar5 == '\0'));
        if (bVar13 != false) {
          if (iVar12 != iVar10) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar12 * 8),
                       (void *)(*plVar1 + (longlong)iVar10 * 8),(longlong)(iVar3 - iVar10) << 3);
          }
          iVar12 = iVar12 + (iVar3 - iVar10);
        }
        bVar13 = (bool)(bVar13 ^ 1);
        iVar10 = iVar3;
      } while (iVar3 < iVar2);
      local_98 = local_98 + 1;
      *(int *)(param_1 + 0xe8) = iVar12;
    }
  }
  return;
LAB_142d7d548:
  lVar6 = plVar8[0x2d];
  if (lVar6 == 0) {
    local_68 = DAT_1468b5d98;
    puVar9 = &local_70;
    local_70 = _DAT_1468b5d90;
  }
  else {
    puVar9 = (undefined8 *)&local_ac;
    local_ac = *(undefined4 *)(lVar6 + 0x220);
    local_a4 = *(undefined4 *)(lVar6 + 0x228);
    uStack_a8 = *(undefined4 *)(lVar6 + 0x224);
  }
  local_60 = *puVar9;
  local_58 = *(undefined4 *)(puVar9 + 1);
  (**(code **)(*plVar8 + 0x578))(plVar8,local_res18,local_90);
  cVar5 = FUN_142d958a0(param_1,&local_60,local_res18[0]);
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x8f0))(param_1,plVar7);
    FWeakObjectPtr::operator=(&local_c8,plVar7);
    lVar6 = *plVar1;
    lVar4 = param_1[0xe8];
    for (lVar11 = lVar6; lVar11 != lVar6 + (longlong)(int)lVar4 * 8; lVar11 = lVar11 + 8) {
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar11,&local_c8);
      if (cVar5 != '\0') {
        if ((int)(lVar11 - lVar6 >> 3) != -1) goto LAB_142d7d7a6;
        break;
      }
    }
    iVar2 = (int)param_1[0xe8];
    *(int *)(param_1 + 0xe8) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x744) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar6 = *plVar1;
    *(undefined4 *)(lVar6 + (longlong)iVar2 * 8) = local_c8;
    *(undefined4 *)(lVar6 + 4 + (longlong)iVar2 * 8) = local_c4;
  }
LAB_142d7d7a6:
  local_98 = local_98 + 1;
  goto LAB_142d7d490;
}



// FUNCTION 142d7d7f0 FUN_142d7d7f0 body=199 status=ok
// SIG undefined FUN_142d7d7f0(void)

void FUN_142d7d7f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [48];
  
  FUN_142223710();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar2 != 0) && (param_1[0xaa] == 0)) {
    if (param_1[0xb0] != 0) {
      lVar3 = FUN_142e497f0();
      lVar2 = param_1[0xb0];
      for (lVar1 = lVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar3) goto LAB_142d7d850;
      }
    }
    lVar2 = 0;
LAB_142d7d850:
    uVar4 = FActorSpawnParameters::FActorSpawnParameters(local_38);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = UWorld::SpawnActor(uVar5,lVar2,0,0,uVar4);
    param_1[0xaa] = lVar2;
  }
  if ((char)param_1[0x25] == '\x03') {
    uVar4 = AActor::GetWorldTimerManager(param_1);
    FUN_142cad5a0(uVar4,param_1 + 0xb1);
  }
  return;
}



// FUNCTION 142d7d8c0 FUN_142d7d8c0 body=543 status=ok
// SIG undefined FUN_142d7d8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d7d8c0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
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
  FUN_142385110();
  if (((*(char *)(param_1 + 0x70d) == '\0') &&
      ((*(char *)(param_1 + 0x70c) != '\0' || (*(char *)(param_1 + 0x700) != '\0')))) &&
     ((lVar2 = *(longlong *)(param_1 + 0x120), lVar2 != 0 ||
      (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)))) {
    local_a8 = &LAB_14074f814;
    uStack_a0 = 0;
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x734);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 1;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x748,&local_98,uVar1);
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
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 142d7dae0 FUN_142d7dae0 body=386 status=ok
// SIG undefined FUN_142d7dae0(void)

void FUN_142d7dae0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong local_res8;
  undefined4 uStack_c;
  
  FUN_142361c10();
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar3);
    if (cVar1 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x118);
      plVar7 = (longlong *)(lVar3 + 0x3c8);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = 0x42d84490;
        *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
        *(undefined4 *)(plVar4 + 3) = 0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_res8);
        iVar2 = *(int *)(lVar3 + 0x3d0);
        *(int *)(lVar3 + 0x3d0) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x3d4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar7);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
  }
  if (((((*(byte *)(param_1 + 0x300) & 1) != 0) && (*(longlong *)(param_1 + 0x2d8) != 0)) &&
      (((*(byte *)(*(longlong *)(param_1 + 0x2d8) + 0x92) & 0x40) == 0 ||
       (iVar2 = FUN_142340f30(param_1), iVar2 != 3)))) &&
     (local_res8 = *(longlong *)(param_1 + 0x2d8), local_res8 != 0)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x308,&local_res8);
  }
  return;
}



// FUNCTION 142d7dc70 FUN_142d7dc70 body=492 status=ok
// SIG undefined FUN_142d7dc70(void)

void FUN_142d7dc70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x28) + lVar9;
      plVar4 = (longlong *)FUN_142d806f0(param_1,param_2,lVar8);
      lVar2 = *(longlong *)(lVar8 + 0x110);
      lVar5 = *(longlong *)(param_2 + 0x10);
      if (((int)lVar2 != 0) || ((int)((ulonglong)lVar2 >> 0x20) != 0)) {
        if (lVar5 == 0) {
          local_40 = 0;
        }
        else {
          local_40 = *(longlong *)(lVar5 + 0x38);
        }
        local_38 = 0xffffffff;
        local_34 = 0x101;
        local_32 = 0;
        local_48 = lVar5;
        FUN_140cbbd90(&local_48);
        lVar5 = local_40;
        while (local_40 = lVar5, lVar5 != 0) {
          if (*(longlong *)(lVar5 + 0x18) == lVar2) goto LAB_142d7dd42;
          local_40 = *(longlong *)(lVar5 + 0x28);
          FUN_140cbbd90(&local_48);
          lVar5 = local_40;
        }
      }
      lVar5 = 0;
LAB_142d7dd42:
      if ((plVar4 != (longlong *)0x0) && (lVar5 != 0)) {
        FWeakObjectPtr::operator=(&local_58,0);
        local_50 = 0;
        FWeakObjectPtr::operator=(&local_58,param_2);
        local_50 = *(longlong *)(lVar8 + 0x110);
        piVar6 = (int *)*plVar4;
        lVar2 = plVar4[1];
        for (piVar7 = piVar6; piVar7 != piVar6 + (longlong)(int)lVar2 * 4; piVar7 = piVar7 + 4) {
          if ((((*piVar7 == local_58) && (piVar7[1] == local_54)) ||
              ((cVar3 = FWeakObjectPtr::IsValid(piVar7), cVar3 == '\0' &&
               (cVar3 = FWeakObjectPtr::IsValid(&local_58), cVar3 == '\0')))) &&
             (*(longlong *)(piVar7 + 2) == local_50)) {
            if ((int)((longlong)piVar7 - (longlong)piVar6 >> 4) != -1) goto LAB_142d7de13;
            break;
          }
        }
        iVar1 = (int)plVar4[1];
        *(int *)(plVar4 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
        }
        piVar6 = (int *)((longlong)iVar1 * 0x10 + *plVar4);
        *piVar6 = local_58;
        piVar6[1] = local_54;
        *(longlong *)(piVar6 + 2) = local_50;
LAB_142d7de13:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x118;
    } while (iVar10 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142d7de60 FUN_142d7de60 body=36 status=ok
// SIG undefined FUN_142d7de60(void)

void FUN_142d7de60(longlong param_1,undefined1 *param_2)

{
  *param_2 = 1;
  if ((param_1 != 0) &&
     ((*(char *)(param_1 + 0x128) == '\x02' ||
      ((*(char *)(param_1 + 0x128) == '\x03' && (*(char *)(param_1 + 0x95) != '\x02')))))) {
    *param_2 = 0;
  }
  return;
}



// FUNCTION 142d7de90 FUN_142d7de90 body=63 status=ok
// SIG undefined FUN_142d7de90(void)

void FUN_142d7de90(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x678))();
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
      if (cVar1 != '\0') {
        *param_2 = 0;
        return;
      }
    }
  }
  *param_2 = 1;
  return;
}



// FUNCTION 142d7ded0 FUN_142d7ded0 body=211 status=ok
// SIG undefined FUN_142d7ded0(void)

void FUN_142d7ded0(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_142d7df50:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
        if (cVar3 == '\0') goto LAB_142d7df50;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 142d7dfb0 FUN_142d7dfb0 body=607 status=ok
// SIG undefined FUN_142d7dfb0(void)

void FUN_142d7dfb0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong local_48;
  
  lVar6 = *(longlong *)(param_1 + 0x38);
  if ((lVar6 != 0) ||
     ((*(longlong *)(param_1 + 0x30) != 0 && (lVar6 = FUN_140cb9700(), lVar6 != 0)))) {
    bVar2 = *(byte *)(param_1 + 0x60);
    uVar13 = 0;
    if (bVar2 != 0) {
      local_48 = 0;
      uVar8 = uVar13;
      do {
        uVar9 = 0;
        lVar12 = *(longlong *)(param_1 + 0x58);
        uVar7 = uVar8 & 0xff;
        iVar4 = *(int *)(lVar12 + uVar7 * 8);
        if (iVar4 == -1) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(lVar12 + 4 + uVar7 * 8);
        }
        iVar14 = (int)uVar8;
        if (0 < iVar11) {
          uVar8 = uVar9;
          if ((iVar4 != -1) && (0 < *(int *)(lVar12 + 4 + uVar7 * 8))) {
            uVar8 = (longlong)iVar4 * 0x40 + *(longlong *)(param_1 + 0x68);
          }
          uVar7 = uVar9;
          if (param_5 == (longlong *)0x0) {
LAB_142d7e1a5:
            if (((-1 < iVar14) && (iVar14 < *(int *)(lVar6 + 0x50))) &&
               (lVar12 = *(longlong *)(lVar6 + 0x48) + uVar13, *(char *)(lVar12 + 9) != '\0')) {
              FUN_142d8fc60(lVar12,uVar8,iVar11,param_2,param_3,param_4,uVar7);
              goto LAB_142d7e163;
            }
          }
          else if (-1 < iVar14) {
            if (iVar14 < (int)param_5[1]) {
              uVar1 = *param_5 + local_48;
              cVar3 = *(char *)(*param_5 + local_48);
              if (((cVar3 == '\x01') || (0 < *(int *)(uVar1 + 0x10))) &&
                 (uVar7 = uVar1, cVar3 == '\x01')) {
                puVar10 = *(undefined8 **)(uVar1 + 8);
                uVar8 = (longlong)*(int *)(uVar1 + 0x10) & 0x1fffffffffffffff;
                if (puVar10 + *(int *)(uVar1 + 0x10) < puVar10) {
                  uVar8 = uVar9;
                }
                if (uVar8 != 0) {
                  do {
                    iVar4 = (int)param_4[1];
                    uVar5 = *puVar10;
                    *(int *)(param_4 + 1) = iVar4 + 1;
                    if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (param_4,iVar4);
                    }
                    puVar10 = puVar10 + 1;
                    uVar9 = uVar9 + 1;
                    *(undefined8 *)(*param_4 + (longlong)iVar4 * 8) = uVar5;
                  } while (uVar9 != uVar8);
                }
                goto LAB_142d7e163;
              }
            }
            goto LAB_142d7e1a5;
          }
          FUN_142d90810(uVar8,iVar11,param_2,param_3,param_4,uVar7);
        }
LAB_142d7e163:
        local_48 = local_48 + 0x18;
        uVar8 = (ulonglong)(iVar14 + 1U);
        uVar13 = uVar13 + 0x28;
      } while ((int)(iVar14 + 1U) < (int)(uint)bVar2);
    }
  }
  return;
}



// FUNCTION 142d7e210 FUN_142d7e210 body=229 status=ok
// SIG undefined FUN_142d7e210(void)

undefined8 * FUN_142d7e210(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 local_res20;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  plVar1 = (longlong *)FUN_142d805f0();
  fVar2 = local_10;
  if (plVar1 == (longlong *)0x0) {
    *param_2 = local_18;
    uVar3 = CONCAT44(local_res20,local_res20);
    local_10 = (float)local_res20;
    *(undefined4 *)(param_2 + 3) = local_res20;
  }
  else {
    (**(code **)(*plVar1 + 0x830))(plVar1,&local_28,&local_18);
    FRotator::Vector(&local_18,&local_38);
    *(undefined4 *)(param_2 + 3) = 0x7f7fffff;
    fVar2 = local_30 * 50.0 + local_20;
    local_10 = 3.4028235e+38;
    *param_2 = CONCAT44(local_34 * 50.0 + local_24,local_38 * 50.0 + local_28);
    uVar3 = 0x7f7fffff7f7fffff;
  }
  *(float *)(param_2 + 1) = fVar2;
  *(undefined8 *)((longlong)param_2 + 0xc) = uVar3;
  *(float *)((longlong)param_2 + 0x14) = local_10;
  return param_2;
}



// FUNCTION 142d7e300 FUN_142d7e300 body=75 status=ok
// SIG undefined FUN_142d7e300(void)

void FUN_142d7e300(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res8 [4];
  
  local_res8[0] = *param_2;
  plVar2 = *(longlong **)(param_1 + 8);
  plVar1 = plVar2 + *(int *)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    while (*plVar2 != local_res8[0]) {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar1) {
        return;
      }
    }
    FUN_142d7bd10(*(undefined8 *)(param_1 + 0x18),*param_3,local_res8);
  }
  return;
}



// FUNCTION 142d7e350 FUN_142d7e350 body=78 status=ok
// SIG undefined FUN_142d7e350(void)

void FUN_142d7e350(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *local_res8 [4];
  
  local_res8[0] = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 8);
  plVar1 = plVar2 + *(int *)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    while (*plVar2 != *local_res8[0]) {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar1) {
        return;
      }
    }
    FUN_142d7bd10(*(undefined8 *)(param_1 + 0x18),*param_3,local_res8);
  }
  return;
}



// FUNCTION 142d7e3a0 FUN_142d7e3a0 body=149 status=ok
// SIG undefined FUN_142d7e3a0(void)

undefined8
FUN_142d7e3a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    plVar1 = (longlong *)FUN_1422325e0(lVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2e8))(plVar1,lVar2,param_2,param_3,param_4,param_5,param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d7e440 FUN_142d7e440 body=105 status=ok
// SIG undefined FUN_142d7e440(void)

ulonglong FUN_142d7e440(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined1 param_5)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x280))();
  if (((char)uVar1 == '\0') && (uVar1 = FUN_142d86870(param_1,param_2,param_3), (char)uVar1 != '\0')
     ) {
    uVar1 = FUN_142d86c80(param_1,param_4,param_5);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142d7e4b0 FUN_142d7e4b0 body=309 status=ok
// SIG undefined FUN_142d7e4b0(void)

void FUN_142d7e4b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = *(int *)(param_1 + 0x30) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 8;
    lVar6 = (longlong)*(int *)(param_1 + 0x30) << 3;
    lVar7 = lVar5;
    do {
      cVar1 = FUN_142aaac60(*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x28)));
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_142aaac50(*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x28))),
         cVar1 == '\0')) {
        iVar2 = *(int *)(param_1 + 0x30);
        iVar3 = (iVar2 - iVar4) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar7 + *(longlong *)(param_1 + 0x28)),
                     (void *)(lVar6 + *(longlong *)(param_1 + 0x28)),(longlong)iVar3 << 3);
          iVar2 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
      }
      lVar6 = lVar6 + -8;
      lVar7 = lVar7 + -8;
      lVar5 = lVar5 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x40) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 << 3;
    lVar7 = (longlong)*(int *)(param_1 + 0x40) << 3;
    do {
      cVar1 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0x38) + lVar5);
      if (cVar1 == '\0') {
        iVar2 = *(int *)(param_1 + 0x40);
        iVar3 = (iVar2 - iVar4) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + *(longlong *)(param_1 + 0x38)),
                     (void *)(lVar7 + *(longlong *)(param_1 + 0x38)),(longlong)iVar3 << 3);
          iVar2 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
      }
      lVar7 = lVar7 + -8;
      lVar5 = lVar5 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}



// FUNCTION 142d7e5f0 FUN_142d7e5f0 body=522 status=ok
// SIG undefined FUN_142d7e5f0(void)

void FUN_142d7e5f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = (longlong)*(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar7 = 0;
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    bVar8 = *plVar2 != param_2;
    lVar4 = 0;
    iVar6 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar5 = iVar6 + 1;
      if (lVar4 < lVar1) {
        lVar3 = *(longlong *)(param_1 + 0xa0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          lVar3 = param_1 + 0x20;
        }
        plVar2 = (longlong *)(lVar3 + lVar4 * 0x20);
        do {
          if (bVar8 != (*plVar2 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar4 = lVar4 + 1;
          plVar2 = plVar2 + 4;
        } while (lVar4 < lVar1);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar6) {
          lVar3 = *(longlong *)(param_1 + 0xa0);
          if (*(longlong *)(param_1 + 0xa0) == 0) {
            lVar3 = param_1 + 0x20;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x20 + lVar3),
                     (void *)((longlong)iVar6 * 0x20 + lVar3),(longlong)(iVar5 - iVar6) << 5);
        }
        iVar7 = iVar7 + (iVar5 - iVar6);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar6 = iVar5;
    } while (lVar4 < lVar1);
    *(int *)(param_1 + 0xa8) = iVar7;
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar7 = 0;
    plVar2 = *(longlong **)(param_1 + 0x130);
    if (*(longlong **)(param_1 + 0x130) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0xb0);
    }
    bVar8 = *plVar2 != param_2;
    lVar4 = 0;
    iVar6 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar5 = iVar6 + 1;
      if (lVar4 < lVar1) {
        lVar3 = *(longlong *)(param_1 + 0x130);
        if (*(longlong *)(param_1 + 0x130) == 0) {
          lVar3 = param_1 + 0xb0;
        }
        plVar2 = (longlong *)(lVar3 + lVar4 * 0x20);
        do {
          if (bVar8 != (*plVar2 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar4 = lVar4 + 1;
          plVar2 = plVar2 + 4;
        } while (lVar4 < lVar1);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar6) {
          lVar3 = *(longlong *)(param_1 + 0x130);
          if (*(longlong *)(param_1 + 0x130) == 0) {
            lVar3 = param_1 + 0xb0;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x20 + lVar3),
                     (void *)((longlong)iVar6 * 0x20 + lVar3),(longlong)(iVar5 - iVar6) << 5);
        }
        iVar7 = iVar7 + (iVar5 - iVar6);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar6 = iVar5;
    } while (lVar4 < lVar1);
    *(int *)(param_1 + 0x138) = iVar7;
  }
  return;
}



// FUNCTION 142d7e800 FUN_142d7e800 body=35 status=ok
// SIG undefined FUN_142d7e800(void)

void FUN_142d7e800(longlong param_1)

{
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x70);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x88);
  return;
}



// FUNCTION 142d7e830 FUN_142d7e830 body=411 status=ok
// SIG undefined FUN_142d7e830(void)

void FUN_142d7e830(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uStackX_c;
  undefined8 local_38;
  longlong *local_30;
  
  lVar4 = param_1[5];
  bVar8 = false;
  if (lVar4 == 0) {
    plVar12 = (longlong *)((ulonglong)uStackX_c << 0x20);
LAB_142d7e8af:
    bVar7 = false;
    plVar11 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x60);
    plVar12 = *(longlong **)(lVar4 + 0x68);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    if (lVar5 == 0) goto LAB_142d7e8af;
    plVar11 = *(longlong **)(param_1[5] + 0x68);
    puVar6 = *(undefined8 **)(param_1[5] + 0x60);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    cVar10 = (**(code **)*puVar6)(puVar6,*param_2);
    if (cVar10 != '\0') {
      bVar9 = true;
      goto LAB_142d7e8b7;
    }
  }
  bVar9 = false;
LAB_142d7e8b7:
  if ((bVar7) && (plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if ((bVar8) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar12 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (bVar9) {
    (**(code **)(*(longlong *)param_1[5] + 0x28))();
    (**(code **)(*param_1 + 0x18))(param_1,param_2,0,0xffffffff,param_3);
  }
  plVar12 = (longlong *)param_2[1];
  local_38 = *param_2;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_30 = plVar12;
  FUN_142d78ac0(param_1 + 3,&local_38);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar12 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 142d7e9d0 FUN_142d7e9d0 body=161 status=ok
// SIG undefined FUN_142d7e9d0(void)

undefined8 FUN_142d7e9d0(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_142d8e770(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d7ea80 FUN_142d7ea80 body=233 status=ok
// SIG undefined FUN_142d7ea80(void)

undefined8 FUN_142d7ea80(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar3 = UUGCampaignMap::GetPrivateStaticClass();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    UMediaTexture::SetMediaPlayer(*(longlong *)(param_2 + 0x40),uVar3);
  }
  if ((*(longlong *)(param_2 + 0x30) != 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
    local_10 = *(undefined8 *)(param_2 + 0x38);
    local_18 = *(longlong *)(param_2 + 0x30);
    FUN_142aac290(uVar3,&local_18);
  }
  FWeakObjectPtr::operator=(&local_res8,uVar3);
  iVar2 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar2 + 1;
  if (*(int *)(param_1 + 0x44) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x38),iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 8);
  *puVar1 = (undefined4)local_res8;
  puVar1[1] = local_res8._4_4_;
  return uVar3;
}



// FUNCTION 142d7eb70 FUN_142d7eb70 body=97 status=ok
// SIG undefined FUN_142d7eb70(void)

undefined8 * FUN_142d7eb70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14589a778;
    FUN_1409f3920(puVar1 + 1,param_1 + 8);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142d7ebe0 FUN_142d7ebe0 body=334 status=ok
// SIG undefined FUN_142d7ebe0(void)

void FUN_142d7ebe0(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined2 **ppuVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *local_28;
  longlong local_20;
  longlong local_18 [2];
  
  if (DAT_146b33f38 == 0) {
    lVar8 = 0;
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    if (DAT_1468b6148 != 0) {
      puVar9 = &DAT_1468e2360;
      cVar2 = FConfigCacheIni::GetString
                        (DAT_1468b6148,L"GlobalsData",L"GlobalsDataObjectName",&local_28,
                         &DAT_1468e2360);
      if (cVar2 != '\0') {
        ppuVar4 = (undefined2 **)FPackageName::ExportTextPathToObjectPath(local_18,&local_28);
        if (&local_28 != ppuVar4) {
          if (local_28 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_28 = *ppuVar4;
          *ppuVar4 = (undefined2 *)0x0;
          local_20 = (longlong)ppuVar4[1];
          ppuVar4[1] = (undefined2 *)0x0;
        }
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        puVar7 = &DAT_143f3eda8;
        if ((int)local_20 != 0) {
          puVar7 = local_28;
        }
        uVar5 = FUN_142e57450();
        DAT_146b33f38 = FUN_141799c90(uVar5,0,puVar7,0,(ulonglong)puVar9 & 0xffffffff00000000,0,1);
        iVar1 = *(int *)(DAT_146b33f38 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar3 = iVar1 + uVar6;
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
        }
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
      }
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142d7ed30 FUN_142d7ed30 body=110 status=ok
// SIG undefined FUN_142d7ed30(void)

void FUN_142d7ed30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14589a6e8;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    puVar2[9] = uVar1;
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    *puVar2 = &PTR_GetPoolName_14589a730;
  }
  return;
}



// FUNCTION 142d7eda0 FUN_142d7eda0 body=78 status=ok
// SIG undefined FUN_142d7eda0(void)

void FUN_142d7eda0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14589a790;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_14589a7d8;
  }
  return;
}



// FUNCTION 142d7edf0 CreateSceneProxy body=46 status=ok
// SIG undefined CreateSceneProxy(void)

void UMaterialBillboardComponent::CreateSceneProxy(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x4a0);
  if (lVar1 != 0) {
    FUN_142d79470(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142d7ee20 FUN_142d7ee20 body=438 status=ok
// SIG undefined FUN_142d7ee20(void)

undefined8 * FUN_142d7ee20(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  puVar4 = (undefined8 *)operator_new(0xa0);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar5 = FUN_14164ab60();
    FUN_14158c9d0(puVar4,L"FGbxProcess",0,uVar5);
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 7) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x44) = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *puVar4 = &PTR_FUN_14450fba8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 2;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 2;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar8 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)puVar4;
    plVar8 = plVar6;
  }
  *param_2 = puVar4;
  param_2[1] = plVar8;
  plVar6 = puVar4 + 10;
  if (puVar4 == (undefined8 *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if (*plVar6 != 0) {
      if (plVar6[1] != 0) {
        piVar1 = (int *)(plVar6[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_2;
        }
      }
      plVar8 = (longlong *)param_2[1];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)puVar4;
    plVar7 = (longlong *)plVar6[1];
    if (plVar8 != plVar7) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142d7efe0 FUN_142d7efe0 body=48 status=ok
// SIG undefined FUN_142d7efe0(void)

void FUN_142d7efe0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
    FUN_142367710(param_1);
    return;
  }
  return;
}



// FUNCTION 142d7f010 FUN_142d7f010 body=657 status=ok
// SIG undefined FUN_142d7f010(void)

void FUN_142d7f010(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined4 local_res10 [2];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [4];
  
  FUN_142228330(param_1,param_2,param_3,param_4,param_5);
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_2 + 0x98);
    local_38 = (undefined2 *)
               CONCAT44((float)DAT_1464aa73c._1_1_ * 0.003921569,
                        (float)DAT_1464aa73c._2_1_ * 0.003921569);
    local_30 = CONCAT44((float)DAT_1464aa73c._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa73c * 0.003921569);
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_38);
    local_res10[0] = 0;
    local_38 = (undefined2 *)0x0;
    local_30 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"Session State",0x1c);
    FUN_1428a6fb0(plVar2,&local_38,local_res10);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res10[0] = 0;
    puVar1 = (undefined8 *)FUN_1415ab800();
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(&local_38,L"  Execution Id : %s",puVar3);
    FUN_1428a6fb0(plVar2,&local_38,local_res10);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (((*(int *)(param_1 + 0x574) != 0 || *(int *)(param_1 + 0x570) != 0) ||
        *(int *)(param_1 + 0x56c) != 0) || *(int *)(param_1 + 0x568) != 0) {
      local_res10[0] = 0;
      FUN_141682af0((int *)(param_1 + 0x568),&local_38,0);
      puVar3 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar3 = local_38;
      }
      FString::PrintfImpl(local_28,L"  Game Intance Id : %s",puVar3);
      FUN_1428a6fb0(plVar2,local_28,local_res10);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res10[0] = 0;
      FString::PrintfImpl(local_28,L"  Game Instance Time : %.2fs",
                          (double)*(float *)(param_1 + 0x578));
      FUN_1428a6fb0(plVar2,local_28,local_res10);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    local_38 = (undefined2 *)
               CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                        (float)DAT_1464aa730._2_1_ * 0.003921569);
    local_30 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa730 * 0.003921569);
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_38);
  }
  return;
}



// FUNCTION 142d7f2b0 FUN_142d7f2b0 body=472 status=ok
// SIG undefined FUN_142d7f2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d7f2b0(longlong param_1,short *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_358 [32];
  longlong *local_338;
  longlong local_330;
  longlong local_328 [2];
  undefined1 local_318 [8];
  undefined1 local_310 [48];
  undefined1 local_2e0 [672];
  undefined1 *local_40;
  int local_38;
  int local_34;
  ulonglong local_20;
  
  if (((param_1 != 0) &&
      (local_20 = DAT_1468387a8 ^ (ulonglong)auStack_358, param_2 != (short *)0x0)) &&
     (*param_2 != 0)) {
    plVar8 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + 0x118);
    }
    lVar9 = *(longlong *)(param_1 + 0x28);
    if (((plVar8 != (longlong *)0x0) &&
        (local_338 = plVar8, local_330 = lVar9, lVar5 = (**(code **)(*plVar8 + 0x670))(plVar8),
        lVar5 != 0)) && ((lVar9 != 0 && ((char)plVar8[0x25] == '\x03')))) {
      puVar6 = (undefined8 *)FUN_142d7ae20(&DAT_146aeaf98);
      uVar1 = *puVar6;
      puVar6 = (undefined8 *)FUN_142d7ae20(&DAT_146aeaf98);
      uVar2 = *puVar6;
      if ((DAT_146aeb010 == '\0') &&
         (puVar6 = (undefined8 *)FUN_14218c8a0(), puVar6 != &DAT_146aeb008)) {
        DAT_146aeb008 = *puVar6;
        DAT_146aeb010 = '\x01';
      }
      local_328[1] = 0x350;
      local_328[0] = param_1;
      FUN_142d76b60(local_318,param_2,DAT_146aeb008,local_328);
      cVar4 = FUN_14218fca0(local_318);
      iVar3 = local_38;
      if (cVar4 != '\0') {
        lVar9 = (longlong)local_38;
        local_38 = local_38 + 1;
        if (local_34 < local_38) {
          FUN_140ae1b70(local_2e0,iVar3);
        }
        puVar7 = local_2e0;
        if (local_40 != (undefined1 *)0x0) {
          puVar7 = local_40;
        }
        FUN_140ac3930(puVar7 + lVar9 * 0xa8,uVar2,local_310,&local_338);
      }
      FUN_142d77350(local_318,uVar1,&local_330);
      FUN_14217f3d0(local_318);
    }
  }
  return;
}



// FUNCTION 142d7f490 FUN_142d7f490 body=265 status=ok
// SIG undefined FUN_142d7f490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d7f490(longlong param_1,short *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_338 [32];
  longlong local_318;
  undefined1 local_310 [760];
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_338;
    local_318 = param_1;
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (param_2 != (short *)0x0)) && (*param_2 != 0)) &&
       (*(char *)(param_1 + 0x128) == '\x03')) {
      if ((DAT_146aeafc8 == '\0') &&
         (puVar3 = (undefined8 *)FUN_14218d320(), puVar3 != &DAT_146aeaf98)) {
        DAT_146aeaf98 = *puVar3;
        uRam0000000146aeafa0 = puVar3[1];
        _DAT_146aeafa8 = puVar3[2];
        uRam0000000146aeafb0 = puVar3[3];
        _DAT_146aeafb8 = *(undefined4 *)(puVar3 + 4);
        uRam0000000146aeafbc = *(undefined4 *)((longlong)puVar3 + 0x24);
        uRam0000000146aeafc0 = *(undefined4 *)(puVar3 + 5);
        uRam0000000146aeafc4 = *(undefined4 *)((longlong)puVar3 + 0x2c);
        DAT_146aeafc8 = '\x01';
      }
      FUN_140ac3af0(local_310,param_2,DAT_146aeaf98,&local_318);
      FUN_14217f3d0(local_310);
    }
  }
  return;
}



// FUNCTION 142d7f5a0 FUN_142d7f5a0 body=184 status=ok
// SIG undefined FUN_142d7f5a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d7f5a0(longlong param_1,short *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_338 [32];
  longlong local_318;
  undefined1 local_310 [760];
  ulonglong local_18;
  
  if ((((param_1 != 0) &&
       (local_18 = DAT_1468387a8 ^ (ulonglong)auStack_338, param_2 != (short *)0x0)) &&
      (*param_2 != 0)) && (*(char *)(param_1 + 0x128) == '\x03')) {
    local_318 = param_1;
    if ((DAT_146aeaff0 == '\0') &&
       (puVar1 = (undefined8 *)FUN_14218d0e0(), puVar1 != &DAT_146aeafd0)) {
      DAT_146aeafd0._0_4_ = *(undefined4 *)puVar1;
      DAT_146aeafd0._4_4_ = *(undefined4 *)((longlong)puVar1 + 4);
      uRam0000000146aeafd8 = *(undefined4 *)(puVar1 + 1);
      uRam0000000146aeafdc = *(undefined4 *)((longlong)puVar1 + 0xc);
      _DAT_146aeafe0 = puVar1[2];
      uRam0000000146aeafe8 = puVar1[3];
      DAT_146aeaff0 = '\x01';
    }
    FUN_140ac3af0(local_310,param_2,CONCAT44(DAT_146aeafd0._4_4_,(undefined4)DAT_146aeafd0),
                  &local_318);
    FUN_14217f3d0(local_310);
  }
  return;
}



// FUNCTION 142d7f660 FUN_142d7f660 body=117 status=ok
// SIG undefined FUN_142d7f660(void)

void FUN_142d7f660(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_142d7f6e0();
  cVar1 = FUN_142d7e9d0(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
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



// FUNCTION 142d7f6e0 FUN_142d7f6e0 body=461 status=ok
// SIG undefined FUN_142d7f6e0(void)

void FUN_142d7f6e0(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_142d7f7b1;
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
LAB_142d7f7b1:
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
      plVar6 = (longlong *)((longlong)iStack_2c * 0x40 + *param_1);
      if (plVar6[5] != 0) {
        FMemory::Free();
      }
      if (plVar6[3] != 0) {
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
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 142d7f8b0 FUN_142d7f8b0 body=75 status=ok
// SIG undefined FUN_142d7f8b0(void)

void FUN_142d7f8b0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x588) != 0) {
    uVar1 = AActor::GetWorldTimerManager();
    FUN_142cad830(uVar1,param_1 + 0x588);
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 142d7f900 FUN_142d7f900 body=1128 status=ok
// SIG undefined FUN_142d7f900(void)

void FUN_142d7f900(longlong param_1,char param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar12 < DAT_146b34210) && (_Init_thread_header(&DAT_146b34210), DAT_146b34210 == -1)) {
    atexit((_func_5014 *)&LAB_143ec0b40);
    _Init_thread_footer(&DAT_146b34210);
  }
  lVar13 = 0;
  if (DAT_1468c21b0 == DAT_146b341f0) {
    lVar10 = lVar13;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar5 = UWidget::GetPrivateStaticClass();
      for (lVar11 = *(longlong *)(param_1 + 0x30);
          (lVar10 = lVar13, lVar11 != 0 && (lVar10 = *(longlong *)(param_1 + 0x30), lVar11 != lVar5)
          ); lVar11 = *(longlong *)(lVar11 + 0x30)) {
      }
    }
    iVar14 = DAT_146b34208;
    pvVar3 = DAT_146b34200;
    if (*(longlong *)(lVar10 + 0x18) == DAT_146b341f8) {
      if ((void **)param_3 == &DAT_146b34200) {
        return;
      }
      lVar13 = (longlong)DAT_146b34208;
      *(int *)(param_3 + 1) = DAT_146b34208;
      if ((iVar14 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
        return;
      }
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_3,iVar14);
      _guard_xfg_dispatch_icall_nop((void *)*param_3,pvVar3,lVar13 << 3);
      return;
    }
  }
  if ((*piVar12 < DAT_146b34220) && (_Init_thread_header(&DAT_146b34220), DAT_146b34220 == -1)) {
    FName::FName(&DAT_146b34218,L"AssetRegistry",1);
    _Init_thread_footer(&DAT_146b34220);
  }
  uVar9 = DAT_146b34218;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar9);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  lVar10 = lVar13;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = UWidget::GetPrivateStaticClass();
    for (lVar11 = *(longlong *)(param_1 + 0x30);
        (lVar10 = lVar13, lVar11 != 0 && (lVar10 = *(longlong *)(param_1 + 0x30), lVar11 != lVar5));
        lVar11 = *(longlong *)(lVar11 + 0x30)) {
    }
  }
  (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(lVar10 + 0x18),&local_58,1);
  plVar16 = local_58 + (longlong)(int)local_50 * 0xb;
  plVar7 = local_58;
  do {
    if (plVar7 == plVar16) {
      lVar13 = 0;
      DAT_146b341f0 = DAT_1468c21b0;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar11 = UWidget::GetPrivateStaticClass();
        for (lVar10 = *(longlong *)(param_1 + 0x30);
            (lVar13 = 0, lVar10 != 0 && (lVar13 = *(longlong *)(param_1 + 0x30), lVar10 != lVar11));
            lVar10 = *(longlong *)(lVar10 + 0x30)) {
        }
      }
      DAT_146b341f8 = *(undefined8 *)(lVar13 + 0x18);
      if ((void **)param_3 != &DAT_146b34200) {
        DAT_146b34208 = (int)param_3[1];
        lVar13 = (longlong)DAT_146b34208;
        pvVar3 = (void *)*param_3;
        if ((DAT_146b34208 == 0) && (DAT_146b3420c == 0)) {
          DAT_146b3420c = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&DAT_146b34200,DAT_146b34208);
          _guard_xfg_dispatch_icall_nop(DAT_146b34200,pvVar3,lVar13 << 3);
        }
      }
      if ((int)local_50 != 0) {
        plVar7 = local_58 + 6;
        iVar14 = (int)local_50;
        do {
          if (plVar7[1] != 0) {
            FMemory::Free();
          }
          plVar16 = (longlong *)*plVar7;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar16 + 1;
            lVar13 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar12 = (int *)((longlong)plVar16 + 0xc);
              iVar2 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
          plVar7 = plVar7 + 0xb;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    if (*plVar7 == 0) {
LAB_142d7fb82:
      lVar13 = 0;
    }
    else {
      puVar8 = (undefined8 *)FName::ToString(plVar7,local_48);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar8;
      }
      uVar9 = UObject::GetPrivateStaticClass();
      lVar13 = FUN_141799410(uVar9,0,puVar15,0);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (lVar13 == 0) {
        puVar8 = (undefined8 *)FName::ToString(plVar7,local_38);
        if (*(int *)(puVar8 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar8;
        }
        uVar9 = UObject::GetPrivateStaticClass();
        lVar13 = FUN_141799c90(uVar9,0,puVar15,0,0,0,1);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (lVar13 == 0) goto LAB_142d7fb82;
      }
      lVar10 = UWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_142d7fb82;
    }
    if (((*(uint *)(lVar13 + 8) >> 4 & 1) == 0) && (*(char *)(lVar13 + 0x38) == param_2)) {
      iVar14 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar14 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar14 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar14);
      }
      *(longlong *)(*param_3 + (longlong)iVar14 * 8) = lVar13;
    }
    plVar7 = plVar7 + 0xb;
  } while( true );
}



// FUNCTION 142d7fd70 FUN_142d7fd70 body=121 status=ok
// SIG undefined FUN_142d7fd70(void)

void FUN_142d7fd70(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = 0;
  plVar2 = (longlong *)UGameplayTask_WaitDelay::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      return;
    }
  }
  FUN_142d770a0(lVar3 + 0x38,param_1);
  return;
}



// FUNCTION 142d7fdf0 FUN_142d7fdf0 body=211 status=ok
// SIG undefined FUN_142d7fdf0(void)

void FUN_142d7fdf0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_38 [40];
  undefined1 local_10;
  
  if (param_4 == 1) {
    cVar2 = FWeakObjectPtr::IsValid();
    if (cVar2 != '\0') {
      uVar3 = FUN_14171bfe0();
      lVar4 = FUN_141799680(uVar3,param_3,*(undefined8 *)(param_1 + 0x18),0,0,0,0);
      if (lVar4 != 0) {
        lVar5 = FUN_14171bfe0();
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
          FActorSpawnParameters::FActorSpawnParameters(local_38);
          local_10 = 1;
          uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
          FUN_1425518b0(uVar3,lVar4,param_1 + 0x20,local_38);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d7fed0 FUN_142d7fed0 body=80 status=ok
// SIG undefined FUN_142d7fed0(void)

void FUN_142d7fed0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000142d7ff1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142d7ff20 FUN_142d7ff20 body=229 status=ok
// SIG undefined FUN_142d7ff20(void)

undefined8 FUN_142d7ff20(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_38 [40];
  undefined1 local_10;
  
  if (param_4 == 1) {
    cVar2 = FWeakObjectPtr::IsValid();
    if (cVar2 != '\0') {
      uVar3 = FUN_14171bfe0();
      lVar4 = FUN_141799680(uVar3,param_3,*(undefined8 *)(param_1 + 0x18),0,0,0,0);
      if (lVar4 != 0) {
        lVar5 = FUN_14171bfe0();
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
          FActorSpawnParameters::FActorSpawnParameters(local_38);
          local_10 = 1;
          uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
          FUN_1425518b0(uVar3,lVar4,param_1 + 0x20,local_38);
        }
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 142d80010 ExecuteIfSafe body=129 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,USocialParty,void___cdecl(FUniqueNetId_const_&,FOnlinePartyId_const_&,FUniqueNetId_const_&,FString_const_&,FOnlinePartyData_const_&)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4,param_5,param_6);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 142d800a0 FUN_142d800a0 body=467 status=ok
// SIG undefined FUN_142d800a0(void)

ulonglong FUN_142d800a0(int param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong in_RAX;
  longlong lVar10;
  uint7 uVar12;
  ulonglong uVar11;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  
  lVar13 = *param_3;
  if (lVar13 == 0) goto LAB_142d8025b;
  lVar10 = UMapProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar10 + 0x90);
  uVar11 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < iVar1) ||
     (uVar11 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + 0x88),
     *(longlong *)(uVar11 + (longlong)iVar1 * 8) != lVar10 + 0x88)) {
    in_RAX = uVar11 & 0xffffffffffffff00;
  }
  else {
    in_RAX = CONCAT71((int7)(uVar11 >> 8),1);
  }
  if ((char)in_RAX == '\0') goto LAB_142d8025b;
  plVar2 = (longlong *)*param_4;
  uVar12 = (uint7)(in_RAX >> 8);
  if ((param_1 < 0) || ((int)plVar2[5] <= param_1)) {
    uVar11 = (ulonglong)uVar12 << 8;
    bVar4 = false;
  }
  else {
    uVar11 = CONCAT71(uVar12,1);
    bVar4 = true;
  }
  if (bVar4) {
    plVar15 = (longlong *)plVar2[4];
    if ((longlong *)plVar2[4] == (longlong *)0x0) {
      plVar15 = plVar2 + 2;
    }
    uVar11 = 0;
    if ((*(uint *)((longlong)plVar15 +
                  (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) &
        1 << ((byte)param_1 & 0x1f)) == 0) goto LAB_142d8015c;
    in_RAX = 1;
  }
  else {
LAB_142d8015c:
    in_RAX = uVar11 & 0xffffffffffffff00;
  }
  if ((char)in_RAX != '\0') {
    iVar6 = (**(code **)(**(longlong **)(lVar13 + 0x78) + 0x348))();
    iVar1 = *(int *)(*(longlong *)(lVar13 + 0x78) + 0x34);
    iVar7 = (**(code **)(**(longlong **)(lVar13 + 0x70) + 0x348))();
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    iVar8 = iVar6;
    if (iVar6 <= iVar7) {
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
    if (iVar8 < 1) {
      iVar7 = 0;
    }
    iVar3 = 4;
    if (3 < iVar7) {
      iVar3 = iVar7;
    }
    iVar7 = 4;
    if (3 < iVar3) {
      iVar7 = iVar3;
    }
    uVar14 = (((*(int *)(*(longlong *)(lVar13 + 0x70) + 0x34) + -1 + iVar6 & ~(iVar6 - 1U)) +
               iVar1 + -1 + iVar8 & ~(iVar8 - 1U)) + 3 & 0xfffffffc) + 7 + iVar7 & ~(iVar7 - 1U);
    uVar9 = 8;
    if (7 < (int)uVar14) {
      uVar9 = uVar14;
    }
    lVar10 = *plVar2;
    cVar5 = FString::EndsWith(param_2,L"Value",1);
    if (cVar5 == '\0') {
      lVar13 = *(longlong *)(lVar13 + 0x70);
    }
    else {
      lVar13 = *(longlong *)(lVar13 + 0x78);
    }
    lVar10 = (longlong)*(int *)(lVar13 + 0x44) + (int)(uVar9 * param_1) + lVar10;
    *param_4 = lVar10;
    *param_3 = lVar13;
    return CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
  }
LAB_142d8025b:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142d80280 FUN_142d80280 body=866 status=ok
// SIG undefined FUN_142d80280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d80280(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_178 [32];
  int local_158 [2];
  longlong local_150;
  longlong *local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined1 local_13a;
  ulonglong *local_138;
  undefined **local_128 [5];
  byte local_ff;
  byte local_fe;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  if ((param_2 != 0) &&
     ((local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178, (int)param_3[1] != 0 ||
      ((int)param_4[1] != 0)))) {
    local_138 = param_4;
    FArchive::FArchive(local_128);
    local_fe = local_fe | 8;
    local_128[0] = &PTR__scalar_deleting_destructor__1458964a8;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FArchive::SetIsPersistent(local_128,0);
    local_148 = *(longlong **)(param_2 + 0x38);
    local_ff = local_ff & 0xdf;
    local_140 = 0xffffffff;
    local_13c = 0x100;
    local_13a = 0;
    local_150 = param_2;
    FUN_140cbbd90(&local_150);
    plVar11 = local_148;
    while (plVar11 != (longlong *)0x0) {
      local_158[0] = 0;
      local_148 = plVar11;
      if (0 < (int)plVar11[10]) {
        do {
          (**(code **)(*plVar11 + 0x2b8))(plVar11,local_158,local_128);
        } while (local_158[0] < (int)plVar11[10]);
      }
      local_148 = (longlong *)plVar11[5];
      FUN_140cbbd90(&local_150);
      plVar11 = local_148;
    }
    iVar10 = *(int *)(param_2 + 0x80) + -1;
    local_148 = (longlong *)0x0;
    if (-1 < iVar10) {
      lVar13 = (longlong)iVar10 * 8;
      lVar15 = lVar13;
      do {
        lVar1 = *(longlong *)(param_2 + 0x78);
        lVar2 = *(longlong *)(lVar1 + lVar13);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_98,local_158,lVar2);
        if (local_158[0] == -1) {
          lVar8 = 0;
        }
        else {
          lVar8 = local_98 + (longlong)local_158[0] * 0x18;
        }
        piVar4 = (int *)(lVar8 + 8);
        if (lVar8 == 0) {
          piVar4 = (int *)0x0;
        }
        if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
          plVar9 = (longlong *)*param_3;
          plVar11 = plVar9 + (int)param_3[1];
          for (; plVar9 != plVar11; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar2) {
              iVar7 = *(int *)(param_2 + 0x80);
              iVar3 = (iVar7 - iVar10) + -1;
              if (0 < iVar3) {
                iVar3 = 1;
              }
              if (iVar3 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar1 + lVar15),(void *)(lVar1 + (longlong)(iVar7 - iVar3) * 8),
                           (longlong)iVar3 << 3);
                iVar7 = *(int *)(param_2 + 0x80);
              }
              *(int *)(param_2 + 0x80) = iVar7 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2 + 0x78);
              break;
            }
          }
        }
        lVar15 = lVar15 + -8;
        lVar13 = lVar13 + -8;
        iVar10 = iVar10 + -1;
        param_4 = local_138;
      } while (-1 < iVar10);
    }
    uVar14 = 0;
    plVar11 = (longlong *)*param_4;
    uVar12 = (longlong)(int)param_4[1] & 0x1fffffffffffffff;
    if (plVar11 + (int)param_4[1] < plVar11) {
      uVar12 = uVar14;
    }
    if (uVar12 != 0) {
      do {
        lVar13 = *plVar11;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_98,local_158,lVar13);
        piVar4 = (int *)0x0;
        if (local_158[0] != -1) {
          piVar4 = (int *)(local_98 + (longlong)local_158[0] * 0x18);
        }
        piVar5 = piVar4 + 2;
        if (piVar4 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
          plVar6 = *(longlong **)(param_2 + 0x78);
          iVar10 = *(int *)(param_2 + 0x80);
          plVar9 = plVar6 + iVar10;
          for (; plVar6 != plVar9; plVar6 = plVar6 + 1) {
            if (*plVar6 == lVar13) goto LAB_142d80573;
          }
          *(int *)(param_2 + 0x80) = iVar10 + 1;
          if (*(int *)(param_2 + 0x84) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x78);
          }
          *(longlong *)((longlong)iVar10 * 8 + *(longlong *)(param_2 + 0x78)) = lVar13;
        }
LAB_142d80573:
        plVar11 = plVar11 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar12);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    FArchive::~FArchive(local_128);
  }
  return;
}



// FUNCTION 142d805f0 FUN_142d805f0 body=242 status=ok
// SIG undefined FUN_142d805f0(void)

longlong FUN_142d805f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1429e18b0();
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
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x490), lVar1 != 0)) {
      lVar3 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d806f0 FUN_142d806f0 body=244 status=ok
// SIG undefined FUN_142d806f0(void)

longlong FUN_142d806f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 local_res10 [24];
  longlong local_38 [6];
  
  if (1 < *(int *)(param_3 + 1)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    param_2 = FUN_141799410(0,param_2,puVar5,0);
  }
  local_38[5] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  FUN_1424ab4b0(param_3 + 2,local_res10,local_38 + 3,param_2);
  local_38[2] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1424ab4b0(param_3 + 0x12,local_res10,local_38,param_2);
  lVar3 = local_38[0];
  if (local_38[0] != 0) {
    lVar4 = UMulticastDelegateProperty::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (local_38[4] != 0) {
        param_2 = local_38[4];
      }
      return *(int *)(lVar3 + 0x44) + param_2;
    }
  }
  return 0;
}



// FUNCTION 142d807f0 FUN_142d807f0 body=533 status=ok
// SIG undefined FUN_142d807f0(void)

void FUN_142d807f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined4 local_98 [4];
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined1 auStack_28 [16];
  undefined8 local_18;
  
  uVar7 = 0;
  local_58 = (longlong *)(param_1 + 8);
  local_88._0_4_ = 0;
  local_88._4_4_ = 1;
  iVar1 = *(int *)(param_1 + 0x30);
  puStack_30 = (uint *)(param_1 + 0x18);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar9 = puStack_30;
    }
    uVar2 = *puVar9;
    uVar5 = uVar7;
    uVar8 = uVar7;
    while (uVar2 == 0) {
      iVar4 = (int)uVar5;
      uStack_70 = (int)uVar8 + 0x20;
      uVar8 = (ulonglong)uStack_70;
      local_88._0_4_ = iVar4 + 1;
      uVar5 = (ulonglong)(uint)local_88;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142d808bf;
      uVar2 = puVar9[(longlong)iVar4 + 1];
    }
    local_88._4_4_ = -uVar2 & uVar2;
    iVar4 = 0x1f;
    if (local_88._4_4_ != 0) {
      for (; local_88._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_88._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_142d808bf:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_28._4_4_ = local_78._4_4_;
  auStack_28._0_4_ = 0xffffffff;
  auStack_28._8_4_ = uStack_70;
  auStack_28._12_4_ = iStack_6c;
  uStack_38 = (uint)local_88;
  uStack_34 = local_88._4_4_;
  local_50 = 0;
  local_18._0_4_ = SUB84(local_58,0);
  local_18._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = (uint)local_88;
  uStack_7c = local_88._4_4_;
  local_68._8_4_ = (undefined4)local_18;
  local_68._0_8_ = auStack_28._8_8_;
  local_68._12_4_ = local_18._4_4_;
  bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x30);
  local_88 = local_58;
  local_40 = local_58;
  local_18 = local_58;
  local_78 = puStack_30;
  if (bVar3) {
    do {
      local_98[0] = *(undefined4 *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      local_48 = *(undefined8 *)(*local_88 + (longlong)iStack_6c * 0x18);
      uVar5 = uVar7;
      if (*(int *)(param_2 + 8) != 0) {
        plVar6 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if (plVar6 != (longlong *)0x0) {
          uVar5 = (**(code **)(*plVar6 + 8))();
        }
      }
      (*(code *)*param_2)(uVar5,&local_48,local_98);
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar6 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d80a10 FUN_142d80a10 body=65 status=ok
// SIG undefined FUN_142d80a10(void)

undefined8 FUN_142d80a10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if ((lVar1 != 0) && (param_2 != 0)) {
      uVar2 = FUN_1428cc4e0(lVar1);
      uVar2 = FUN_142d856d0(uVar2,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142d80a60 FUN_142d80a60 body=729 status=ok
// SIG undefined FUN_142d80a60(void)

void FUN_142d80a60(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  uint uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  iVar11 = (int)param_2[1];
  if (iVar11 != 0) {
    plVar9 = (longlong *)(*param_2 + 8);
    do {
      if (plVar9[2] != 0) {
        FMemory::Free();
      }
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 5;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
  }
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar11 = local_a8 + 1;
      bVar6 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar11;
      if (bVar6) goto LAB_142d80b7c;
      uVar3 = puVar10[lVar8 + 1];
    }
    uStack_a4 = -uVar3 & uVar3;
    iVar11 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_94 = (iStack_90 - iVar11) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_142d80b7c:
      uStack_94 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 5);
  uStack_68 = 0xffffffff;
  uStack_64 = uStack_94;
  local_60 = CONCAT44(uStack_8c,iStack_90);
  uStack_50 = CONCAT44(uStack_a4,local_a8);
  local_98 = -1 << ((byte)uVar3 & 0x1f);
  uVar12 = uVar3 & 0xffffffe0;
  local_58._0_4_ = SUB84(param_1,0);
  local_58._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_80 = (undefined4)local_58;
  uStack_7c = local_58._4_4_;
  iStack_78 = local_a8;
  uStack_74 = uStack_a4;
  puStack_a0 = puVar1;
  uStack_94 = uVar3;
  local_70 = puVar1;
  local_58 = param_1;
  puStack_48 = puVar1;
  uStack_38 = local_60;
  uStack_40 = uStack_68;
  uStack_3c = uStack_64;
  if (uVar3 != uVar2) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar3 >> 5] & local_98;
    iVar11 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_142d80c41;
      uVar7 = puVar10[(longlong)iVar11 + 1];
      local_98 = 0xffffffff;
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
    uStack_94 = (uVar12 - iVar11) + 0x1f;
    uVar3 = uStack_94;
    if ((int)uVar2 < (int)uStack_94) {
LAB_142d80c41:
      uStack_94 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_64 == uVar3) && (local_70 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_7c,local_80) == param_1)) break;
    lVar8 = *(longlong *)CONCAT44(uStack_7c,local_80) + (longlong)(int)uStack_64 * 0x28;
    FUN_142d79dc0(&local_a8,lVar8,lVar8 + 0x10);
    uVar2 = uStack_a4;
    iVar11 = local_a8;
    if (((local_a8 != 0) && (uStack_a4 != 0)) && ((1 < local_88 && (1 < (int)local_98)))) {
      iVar4 = (int)param_2[1];
      lVar8 = (longlong)iVar4;
      *(int *)(param_2 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      lVar5 = *param_2;
      *(int *)(lVar5 + lVar8 * 0x28) = iVar11;
      *(uint *)(lVar5 + 4 + lVar8 * 0x28) = uVar2;
      lVar5 = lVar5 + lVar8 * 0x28;
      FString::FString(lVar5 + 8,&puStack_a0);
      FString::FString(lVar5 + 0x18,&iStack_90);
    }
    if (CONCAT44(uStack_8c,iStack_90) != 0) {
      FMemory::Free();
    }
    if (puStack_a0 != (uint *)0x0) {
      FMemory::Free();
    }
    uStack_68 = uStack_68 & ~uStack_74;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
  }
  return;
}



// FUNCTION 142d80d40 FUN_142d80d40 body=374 status=ok
// SIG undefined FUN_142d80d40(void)

longlong FUN_142d80d40(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined2 *local_28;
  undefined8 local_20;
  
  if (DAT_146b33f20 == 0) {
    lVar8 = 0;
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    if (DAT_1468b6148 != 0) {
      puVar9 = &DAT_1468e2360;
      cVar2 = FConfigCacheIni::GetString
                        (DAT_1468b6148,L"AchievementUtility",L"AchievementUtilityClassName",
                         &local_28,&DAT_1468e2360);
      if (cVar2 != '\0') {
        puVar7 = &DAT_143f3eda8;
        if ((int)local_20 != 0) {
          puVar7 = local_28;
        }
        uVar4 = FUN_142df6630();
        uVar10 = (ulonglong)puVar9 & 0xffffffff00000000;
        lVar5 = FUN_141799830(uVar4,0,puVar7,0,uVar10,0);
        if (lVar5 != 0) {
          uVar4 = GetTransientPackage();
          FUN_1417846f0(uVar4,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          DAT_146b33f20 = FUN_1417985e0(lVar5,uVar4,0,0,uVar10 & 0xffffffff00000000,0,0,0,0);
        }
      }
    }
    iVar1 = *(int *)(DAT_146b33f20 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return DAT_146b33f20;
}



// FUNCTION 142d80ec0 FUN_142d80ec0 body=136 status=ok
// SIG undefined FUN_142d80ec0(void)

longlong FUN_142d80ec0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int local_res10 [6];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_14622c9a0,local_res10,param_1);
  if (local_res10[0] != -1) {
    lVar1 = DAT_14622c9a0 + (longlong)local_res10[0] * 0x18;
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
      lVar3 = FUN_142e5c090();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d80f50 FUN_142d80f50 body=1657 status=ok
// SIG undefined FUN_142d80f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142d8120f) */

void FUN_142d80f50(undefined8 param_1,longlong *param_2,ulonglong *param_3,longlong param_4,
                  undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  float *pfVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_15d8 [32];
  undefined8 local_15b8;
  float local_15b0;
  longlong *local_15a8;
  uint local_15a0;
  undefined4 local_159c;
  uint local_1598;
  ulonglong local_1590;
  undefined4 local_1588;
  ulonglong local_1580;
  float local_1578;
  undefined8 local_1570;
  float local_1568;
  longlong local_1560;
  longlong local_1558;
  longlong *local_1550;
  undefined8 local_1548;
  float local_1538;
  undefined4 local_1528 [100];
  undefined4 *local_1398;
  undefined8 local_1390;
  undefined1 local_1388 [400];
  undefined1 *local_11f8;
  undefined8 local_11f0;
  undefined1 local_11e8 [400];
  longlong local_1058;
  undefined8 local_1050;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_15d8;
  *param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)(param_2 + 1) = DAT_1468b5d98;
  if (param_4 == 0) {
    return;
  }
  lVar6 = *(longlong *)(param_4 + 0x168);
  if (lVar6 == 0) {
    local_15b8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_15b0 = DAT_1468b5d98;
  }
  else {
    local_15b0 = *(float *)(lVar6 + 0x228);
    local_15b8 = *(ulonglong *)(lVar6 + 0x220);
  }
  plVar18 = (longlong *)0x0;
  local_1570 = local_15b8;
  local_1568 = local_15b0;
  local_1558 = 0;
  local_1550 = param_2;
  local_1548 = param_1;
  if ((param_6 != '\0') && (lVar6 = FUN_142ddddc0(param_4), lVar6 != 0)) {
    local_1558 = FUN_142dcd660(lVar6);
  }
  iVar20 = (int)param_3[1];
  if (iVar20 == 0) {
    return;
  }
  plVar10 = (longlong *)*param_3;
  local_1058 = 0;
  local_1050 = 0;
  local_a8 = 0;
  local_a0 = 0;
  plVar11 = (longlong *)((longlong)iVar20 & 0x1fffffffffffffff);
  if (plVar10 + iVar20 < plVar10) {
    plVar11 = plVar18;
  }
  plVar13 = plVar18;
  if (plVar11 != (longlong *)0x0) {
    do {
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        lVar2 = *(longlong *)(lVar6 + 0x168);
        if (lVar2 == 0) {
          local_1578 = DAT_1468b5d98;
          puVar7 = &local_1580;
          local_1580 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          puVar7 = &local_15b8;
          local_15b0 = *(float *)(lVar2 + 0x228);
          local_15b8 = *(ulonglong *)(lVar2 + 0x220);
        }
        local_1590 = *puVar7;
        local_1588 = (undefined4)puVar7[1];
        FUN_142470bf0(local_11e8,lVar6,&local_1590);
      }
      plVar10 = plVar10 + 1;
      plVar13 = (longlong *)((longlong)plVar13 + 1);
    } while (plVar13 != plVar11);
  }
  cVar4 = FUN_142486bb0(local_11e8);
  if (cVar4 == '\0') goto LAB_142d81574;
  FUN_1424757a0(local_11e8);
  local_11f8 = (undefined1 *)0x0;
  local_11f0 = 0;
  FUN_14247e160(local_11e8,param_5,local_1388);
  uVar16 = (uint)local_11f0;
  lVar6 = (longlong)(int)(uint)local_11f0;
  local_15a8 = (longlong *)0x0;
  uVar17 = 0;
  local_159c = 0;
  if ((int)(uint)local_11f0 < 1) {
    if (((int)(uint)local_11f0 < 0) &&
       (iVar20 = -(uint)local_11f0, plVar18 = (longlong *)0x0, iVar20 != 0)) {
      plVar18 = (longlong *)(lVar6 << 5);
      do {
        if (*plVar18 != 0) {
          FMemory::Free();
        }
        plVar18 = plVar18 + 4;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      local_15a0 = uVar16;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(&local_15a8);
      plVar18 = local_15a8;
      goto LAB_142d81233;
    }
  }
  else {
    local_15a0 = (uint)local_11f0;
    FUN_140fd5770(&local_15a8);
    plVar18 = local_15a8;
    _guard_xfg_dispatch_icall_nop(local_15a8,0,lVar6 << 5);
LAB_142d81233:
    uVar17 = (ulonglong)local_15a0;
    local_1598 = local_15a0;
    if (0 < (int)local_15a0) {
      plVar18 = plVar18 + 1;
      local_1560 = 0;
      local_1590 = uVar17;
      do {
        lVar6 = local_1560;
        uVar17 = local_1590;
        uVar12 = 0;
        puVar9 = local_1388;
        if (local_11f8 != (undefined1 *)0x0) {
          puVar9 = local_11f8;
        }
        local_1398 = (undefined4 *)0x0;
        local_1390 = 0;
        FUN_142480360(local_11e8,*(undefined4 *)(puVar9 + local_1560),local_1528);
        if (0 < (int)local_1390) {
          bVar3 = false;
          puVar19 = local_1528;
          if (local_1398 != (undefined4 *)0x0) {
            puVar19 = local_1398;
          }
          uVar17 = (longlong)(int)local_1390 & 0x3fffffffffffffff;
          if (puVar19 + (int)local_1390 < puVar19) {
            uVar17 = uVar12;
          }
          fVar23 = DAT_1468b5d90;
          fVar22 = DAT_1468b5d94;
          fVar24 = DAT_1468b5d98;
          if (uVar17 != 0) {
            do {
              uVar1 = *puVar19;
              uVar8 = FUN_142480fd0(local_11e8,uVar1);
              FUN_142481010(local_11e8,&local_15b8,uVar1);
              iVar20 = (int)*plVar18;
              *(int *)plVar18 = iVar20 + 1;
              if (*(int *)((longlong)plVar18 + 4) < iVar20 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (plVar18 + -1,iVar20);
              }
              *(undefined8 *)(plVar18[-1] + (longlong)iVar20 * 8) = uVar8;
              if (bVar3) {
                fVar23 = fVar23 + (float)local_15b8;
                fVar22 = fVar22 + local_15b8._4_4_;
                fVar24 = fVar24 + local_15b0;
              }
              else {
                bVar3 = true;
                fVar23 = (float)local_15b8;
                fVar22 = local_15b8._4_4_;
                fVar24 = local_15b0;
              }
              puVar19 = puVar19 + 1;
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar17);
            lVar6 = local_1560;
          }
          fVar21 = 1.0 / (float)(int)local_1390;
          local_1538 = fVar24 * fVar21;
          plVar18[1] = CONCAT44(fVar22 * fVar21,fVar23 * fVar21);
          *(float *)(plVar18 + 2) = local_1538;
          uVar17 = local_1590;
        }
        if (local_1398 != (undefined4 *)0x0) {
          FMemory::Free();
        }
        local_1560 = lVar6 + 4;
        plVar18 = plVar18 + 4;
        local_1590 = uVar17 - 1;
      } while (uVar17 - 1 != 0);
      uVar17 = (ulonglong)local_1598;
      plVar18 = local_15a8;
      param_2 = local_1550;
    }
  }
  iVar20 = 0;
  fVar23 = 3.4028235e+38;
  uVar16 = (uint)uVar17;
  plVar10 = plVar18;
  if (0 < (int)uVar16) {
    pfVar14 = (float *)(plVar18 + 3);
    iVar15 = -1;
    do {
      iVar5 = iVar20;
      if (local_1558 != 0) {
        plVar13 = *(longlong **)(pfVar14 + -6);
        plVar11 = plVar13 + (int)pfVar14[-4];
        for (; plVar13 != plVar11; plVar13 = plVar13 + 1) {
          if (*plVar13 == local_1558) goto LAB_142d814f8;
        }
      }
      fVar22 = (pfVar14[-1] - local_1570._4_4_) * (pfVar14[-1] - local_1570._4_4_) +
               (pfVar14[-2] - (float)local_1570) * (pfVar14[-2] - (float)local_1570) +
               (*pfVar14 - local_1568) * (*pfVar14 - local_1568);
      if (fVar23 <= fVar22) {
        iVar5 = iVar15;
        fVar22 = fVar23;
      }
      fVar23 = fVar22;
      iVar20 = iVar20 + 1;
      pfVar14 = pfVar14 + 8;
      iVar15 = iVar5;
    } while (iVar20 < (int)uVar16);
LAB_142d814f8:
    if ((-1 < iVar5) && (iVar5 < (int)uVar16)) {
      *param_2 = plVar18[(longlong)iVar5 * 4 + 2];
      *(int *)(param_2 + 1) = (int)plVar18[(longlong)iVar5 * 4 + 3];
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(local_1548);
    }
  }
  while (uVar16 != 0) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    uVar16 = (int)uVar17 - 1;
    uVar17 = (ulonglong)uVar16;
    plVar10 = plVar10 + 4;
  }
  if (plVar18 != (longlong *)0x0) {
    FMemory::Free(plVar18);
  }
  if (local_11f8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
LAB_142d81574:
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_1058 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d815d0 FUN_142d815d0 body=136 status=ok
// SIG undefined FUN_142d815d0(void)

undefined8 FUN_142d815d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_142d95ce0(param_1,&local_18);
  puVar1 = local_18 + (int)local_10;
  puVar3 = local_18;
  do {
    if (puVar3 == puVar1) {
      uVar4 = 1;
LAB_142d8162f:
      if (local_18 != (undefined8 *)0x0) {
        FMemory::Free(local_18);
      }
      return uVar4;
    }
    if ((param_2 != 0) && (cVar2 = FUN_142235c20(param_2,*puVar3), cVar2 == '\0')) {
      uVar4 = 0;
      goto LAB_142d8162f;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}



// FUNCTION 142d81660 FUN_142d81660 body=192 status=ok
// SIG undefined FUN_142d81660(void)

undefined8 FUN_142d81660(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_142d95ce0(param_1,&local_28);
  plVar1 = local_28 + (int)local_20;
  plVar7 = local_28;
  do {
    if (plVar7 == plVar1) {
      uVar6 = 1;
LAB_142d816ec:
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      return uVar6;
    }
    lVar3 = *plVar7;
    if (lVar3 == 0) {
LAB_142d816dd:
      uVar6 = 0;
      goto LAB_142d816ec;
    }
    plVar5 = (longlong *)*param_2;
    plVar2 = plVar5 + (int)param_2[1];
    while( true ) {
      if (plVar5 == plVar2) goto LAB_142d816dd;
      if ((*plVar5 != 0) && (cVar4 = FUN_142235c20(*plVar5,lVar3), cVar4 != '\0')) break;
      plVar5 = plVar5 + 1;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 142d81720 FUN_142d81720 body=136 status=ok
// SIG undefined FUN_142d81720(void)

undefined8 FUN_142d81720(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_142d95ce0(param_1,&local_18);
  puVar1 = local_18 + (int)local_10;
  puVar3 = local_18;
  do {
    if (puVar3 == puVar1) {
      uVar4 = 0;
LAB_142d8177f:
      if (local_18 != (undefined8 *)0x0) {
        FMemory::Free(local_18);
      }
      return uVar4;
    }
    if ((param_2 != 0) && (cVar2 = FUN_142235c20(param_2,*puVar3), cVar2 != '\0')) {
      uVar4 = 1;
      goto LAB_142d8177f;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}



// FUNCTION 142d817b0 FUN_142d817b0 body=192 status=ok
// SIG undefined FUN_142d817b0(void)

undefined8 FUN_142d817b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_142d95ce0(param_1,&local_28);
  plVar1 = local_28 + (int)local_20;
  plVar7 = local_28;
  do {
    if (plVar7 == plVar1) {
      uVar6 = 0;
LAB_142d81838:
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      return uVar6;
    }
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      plVar5 = (longlong *)*param_2;
      plVar2 = plVar5 + (int)param_2[1];
      for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
        if ((*plVar5 != 0) && (cVar4 = FUN_142235c20(*plVar5,lVar3), cVar4 != '\0')) {
          uVar6 = 1;
          goto LAB_142d81838;
        }
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 142d81870 GetValue body=40 status=ok
// SIG undefined GetValue(void)

void UMathFunctionLibrary::GetValue(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FRuntimeFloatCurve::GetRichCurve();
  FRichCurve::Eval(uVar1,param_2,0);
  return;
}



// FUNCTION 142d818a0 FUN_142d818a0 body=51 status=ok
// SIG undefined FUN_142d818a0(void)

void FUN_142d818a0(void)

{
  FUN_142d81b40();
  return;
}



// FUNCTION 142d818e0 FUN_142d818e0 body=232 status=ok
// SIG undefined FUN_142d818e0(void)

longlong FUN_142d818e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_38 [48];
  
  if ((param_1[0xaa] != 0) || (param_1[0xb0] == 0)) {
    return param_1[0xaa];
  }
  lVar2 = FUN_142e497f0();
  lVar5 = param_1[0xb0];
  lVar1 = lVar5;
  do {
    if (lVar1 == 0) {
LAB_142d8192e:
      return param_1[0xaa];
    }
    if (lVar1 == lVar2) {
      if (lVar5 != 0) {
        if (lVar5 == 0) goto LAB_142d81972;
        lVar2 = FUN_142e497f0();
        lVar5 = param_1[0xb0];
        lVar1 = lVar5;
        break;
      }
      goto LAB_142d8192e;
    }
    lVar1 = *(longlong *)(lVar1 + 0x30);
  } while( true );
joined_r0x000142d81962:
  if (lVar1 == 0) {
LAB_142d81972:
    lVar5 = 0;
LAB_142d81974:
    uVar3 = FActorSpawnParameters::FActorSpawnParameters(local_38);
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = UWorld::SpawnActor(uVar4,lVar5,0,0,uVar3);
    param_1[0xaa] = lVar5;
    return lVar5;
  }
  if (lVar1 == lVar2) goto LAB_142d81974;
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x000142d81962;
}



// FUNCTION 142d819d0 FUN_142d819d0 body=50 status=ok
// SIG undefined FUN_142d819d0(void)

float * FUN_142d819d0(longlong param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xe8) + -1;
  if (-1 < iVar1) {
    lVar3 = (longlong)iVar1;
    pfVar2 = (float *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0xe0));
    do {
      if (*pfVar2 <= param_2) {
        return pfVar2;
      }
      pfVar2 = pfVar2 + -4;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return (float *)0x0;
}



// FUNCTION 142d81a10 FUN_142d81a10 body=291 status=ok
// SIG undefined FUN_142d81a10(void)

undefined8
FUN_142d81a10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)UGameplayTask_WaitDelay::GetPrivateStaticClass();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
  if (*(int *)(lVar4 + 0x40) != *(int *)(lVar4 + 0x6c)) {
    lVar3 = *(longlong *)(lVar4 + 0x78);
    if (*(longlong *)(lVar4 + 0x78) == 0) {
      lVar3 = lVar4 + 0x70;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(lVar4 + 0x80) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)(lVar4 + 0x38) + (longlong)iVar1 * 0x28;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x38) + (longlong)iVar1 * 0x28) == param_2) {
          if (iVar1 != -1) goto LAB_142d81ad3;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x20);
      } while (iVar1 != -1);
    }
  }
  lVar3 = 0;
LAB_142d81ad3:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_142d81b40(param_1,lVar4,param_3,param_4,param_5,param_6,local_18);
  }
  return uVar5;
}



// FUNCTION 142d81b40 FUN_142d81b40 body=1258 status=ok
// SIG undefined FUN_142d81b40(void)

float FUN_142d81b40(longlong param_1,char *param_2,longlong *param_3,float *param_4,float param_5,
                   char param_6,undefined1 *param_7)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8;
  float local_res10;
  float local_f0;
  float local_ec;
  float local_e8;
  
  fVar14 = 1.0;
  fVar19 = 1.0;
  *param_7 = 0;
  if ((((param_3 != (longlong *)0x0) && (0.0 < *(float *)(param_2 + 0x14))) &&
      (plVar6 = (longlong *)(**(code **)(*param_3 + 0x688))(param_3), plVar6 != (longlong *)0x0)) &&
     ((cVar5 = (**(code **)(*plVar6 + 0x780))(plVar6), cVar5 != '\0' &&
      (cVar5 = (**(code **)(*plVar6 + 0x778))(plVar6), cVar5 != '\0')))) {
    fVar14 = *(float *)(param_2 + 0x14) + 1.0;
    fVar19 = 1.0 / fVar14;
  }
  fVar1 = *(float *)(param_2 + 4);
  if (*(float *)(param_2 + 8) <= 0.0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = *(float *)(param_2 + 8) * fVar14;
    if (fVar14 <= fVar1 + 1.0) {
      fVar14 = fVar1 + 1.0;
    }
  }
  iVar2 = *(int *)(param_1 + 400);
  bVar4 = false;
  fVar9 = 3.4028235e+38;
  fVar10 = 0.0;
  fVar19 = fVar19 * *(float *)(param_2 + 0xc) * 0.01;
  local_res10 = 3.4028235e+38;
  local_res8 = 0.0;
  if (0 < (longlong)iVar2) {
    lVar7 = 0;
    lVar8 = lVar7;
    do {
      lVar3 = *(longlong *)(param_1 + 0x188);
      if ((param_6 == '\0') || (*(char *)(lVar7 + 0x58 + lVar3) != '\0')) {
        local_f0 = *param_4 - *(float *)(lVar7 + lVar3);
        local_ec = param_4[1] - *(float *)(lVar7 + 4 + lVar3);
        local_e8 = param_4[2] - *(float *)(lVar7 + 8 + lVar3);
        fVar9 = *(float *)(lVar7 + 0x50 + lVar3);
        fVar11 = local_ec * local_ec + local_f0 * local_f0 + local_e8 * local_e8;
        fVar18 = fVar9 * fVar9 * fVar11;
        if (fVar11 <= fVar1 * fVar1) {
          return 1.0;
        }
        fVar9 = local_res10;
        fVar10 = local_res8;
        if ((fVar14 * fVar14 <= 0.0) || (fVar18 < fVar14 * fVar14)) {
          fVar16 = 0.0;
          if ((0.0 < fVar19) && (0.0 < param_5)) {
            fVar16 = SQRT(fVar11);
            if (fVar16 <= 1.0) {
              fVar16 = 1.0;
            }
            fVar16 = (param_5 * *(float *)(lVar7 + 0x54 + lVar3)) / fVar16;
            if (fVar16 <= fVar19) goto LAB_142d81dde;
          }
          if (*param_2 == '\0') {
LAB_142d81f05:
            if (local_res10 <= fVar18) {
              fVar18 = local_res10;
            }
            if (fVar16 <= local_res8) {
              fVar16 = local_res8;
            }
            bVar4 = true;
            fVar9 = fVar18;
            fVar10 = fVar16;
            local_res8 = fVar16;
            local_res10 = fVar18;
          }
          else if (param_5 <= 0.0) {
            fVar15 = local_ec;
            fVar17 = local_f0;
            fVar12 = local_e8;
            if ((fVar11 != 1.0) &&
               (fVar15 = DAT_1468b5d94, fVar17 = DAT_1468b5d90, fVar12 = DAT_1468b5d98,
               1e-08 <= fVar11)) {
              auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
              fVar12 = auVar13._0_4_;
              fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
              fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
              fVar15 = local_ec * fVar12;
              fVar17 = local_f0 * fVar12;
              fVar12 = local_e8 * fVar12;
            }
            if (*(float *)(lVar7 + 0x48 + lVar3) <=
                fVar15 * *(float *)(lVar7 + 0x1c + lVar3) +
                fVar17 * *(float *)(lVar7 + 0x18 + lVar3) +
                fVar12 * *(float *)(lVar7 + 0x20 + lVar3)) goto LAB_142d81f05;
          }
          else {
            cVar5 = FMath::SphereConeIntersection
                              (&local_f0,param_5,lVar3 + 0x18 + lVar7,
                               *(undefined4 *)(lVar7 + 0x4c + lVar3),
                               *(undefined4 *)(lVar7 + 0x48 + lVar3));
            if (cVar5 != '\0') goto LAB_142d81f05;
          }
        }
      }
LAB_142d81dde:
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x5c;
    } while (lVar8 < iVar2);
    if (bVar4) {
      if ((0.0 < fVar10) && (fVar19 < 1.0)) {
        fVar14 = (fVar10 - fVar19) / (1.0 - fVar19);
        if (0.001 <= fVar14) {
          if (1.0 <= fVar14) {
            fVar14 = 1.0;
          }
        }
        else {
          fVar14 = 0.001;
        }
        *param_7 = fVar10 < *(float *)(param_2 + 0x10) * 0.01;
        return fVar14;
      }
      if (fVar9 <= 0.0) {
        return 1.0;
      }
      if (fVar14 <= 0.0) {
        return 1.0;
      }
      fVar19 = (SQRT(fVar9) - *(float *)(param_2 + 4)) / (fVar14 - *(float *)(param_2 + 4));
      fVar14 = 0.0;
      if ((0.0 <= fVar19) && (fVar14 = fVar19, 1.0 <= fVar19)) {
        fVar14 = 1.0;
      }
      *param_7 = 1.0 - fVar14 < *(float *)(param_2 + 0x10) * 0.01;
      return 1.0 - fVar14;
    }
  }
  return 0.0;
}



// FUNCTION 142d82030 FUN_142d82030 body=49 status=ok
// SIG undefined FUN_142d82030(void)

undefined8 FUN_142d82030(longlong param_1,char param_2)

{
  if (param_2 == '\x01') {
    return *(undefined8 *)(param_1 + 0xf0);
  }
  if (param_2 != '\x02') {
    if (param_2 != '\x03') {
      return 0;
    }
    return *(undefined8 *)(param_1 + 0x100);
  }
  return *(undefined8 *)(param_1 + 0xf8);
}



// FUNCTION 142d82070 FUN_142d82070 body=62 status=ok
// SIG undefined FUN_142d82070(void)

undefined8 * FUN_142d82070(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"ERROR",0xc);
  return param_2;
}



// FUNCTION 142d82130 FUN_142d82130 body=165 status=ok
// SIG undefined FUN_142d82130(void)

undefined8 FUN_142d82130(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  if (DAT_1468b6148 != 0) {
    cVar1 = FConfigCacheIni::GetString
                      (DAT_1468b6148,L"GlobalsData",L"GlobalsDataObjectName",param_1,&DAT_1468e2360)
    ;
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FPackageName::ExportTextPathToObjectPath(local_18,param_1);
      if (param_1 != plVar2) {
        if (*param_1 != 0) {
          FMemory::Free();
        }
        *param_1 = *plVar2;
        *plVar2 = 0;
        *(int *)(param_1 + 1) = (int)plVar2[1];
        *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
        plVar2[1] = 0;
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d821e0 FUN_142d821e0 body=25 status=ok
// SIG undefined FUN_142d821e0(void)

longlong FUN_142d821e0(longlong param_1,char *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != '\x02') || (lVar1 = *(longlong *)(param_1 + 0x88), lVar1 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  return lVar1;
}



// FUNCTION 142d82200 FUN_142d82200 body=785 status=ok
// SIG undefined FUN_142d82200(void)

void FUN_142d82200(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142480420();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b34230) && (_Init_thread_header(&DAT_146b34230), DAT_146b34230 == -1)) {
    uVar1 = FUN_142e4e3f0();
    FUN_142e4e3f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HostPlayerState",1);
    DAT_146b34228 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34230);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b34228 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34228 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34228 + 0x30));
  }
  if ((*piVar5 < DAT_146b34240) && (_Init_thread_header(&DAT_146b34240), DAT_146b34240 == -1)) {
    uVar1 = FUN_142e4e3f0();
    FUN_142e4e3f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"StatsManager",1);
    DAT_146b34238 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34240);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b34238 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34238 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34238 + 0x30));
  }
  if ((*piVar5 < DAT_146b34250) && (_Init_thread_header(&DAT_146b34250), DAT_146b34250 == -1)) {
    uVar1 = FUN_142e4e3f0();
    FUN_142e4e3f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GameInstanceId",1);
    DAT_146b34248 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34250);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b34248 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34248 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34248 + 0x30));
  }
  if ((*piVar5 < DAT_146b34260) && (_Init_thread_header(&DAT_146b34260), DAT_146b34260 == -1)) {
    uVar1 = FUN_142e4e3f0();
    FUN_142e4e3f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GameInstanceTime",1);
    DAT_146b34258 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34260);
  }
  if (0 < *(int *)(DAT_146b34258 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34258 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b34258 + 0x30));
  }
  return;
}



// FUNCTION 142d82520 FUN_142d82520 body=1126 status=ok
// SIG undefined FUN_142d82520(void)

void FUN_142d82520(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_1425e5a10();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b34180) && (_Init_thread_header(&DAT_146b34180), DAT_146b34180 == -1)) {
    uVar1 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    AGTutorialStepBotDestroy::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bOwnerNoSeeEmitter",1);
    DAT_146b34178 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34180);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b34178 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b34178 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34178 + 0x30));
  }
  if ((*piVar5 < DAT_146b34190) && (_Init_thread_header(&DAT_146b34190), DAT_146b34190 == -1)) {
    uVar1 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    AGTutorialStepBotDestroy::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TemplateOptions",1);
    DAT_146b34188 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34190);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b34188 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b34188 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34188 + 0x30));
  }
  if ((*piVar5 < DAT_146b341a0) && (_Init_thread_header(&DAT_146b341a0), DAT_146b341a0 == -1)) {
    uVar1 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    AGTutorialStepBotDestroy::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedFloatParams",1);
    DAT_146b34198 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b341a0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b34198 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b34198 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34198 + 0x30));
  }
  if ((*piVar5 < DAT_146b341b0) && (_Init_thread_header(&DAT_146b341b0), DAT_146b341b0 == -1)) {
    uVar1 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    AGTutorialStepBotDestroy::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedVectorParams",1);
    DAT_146b341a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b341b0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b341a8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b341a8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b341a8 + 0x30));
  }
  if ((*piVar5 < DAT_146b341c0) && (_Init_thread_header(&DAT_146b341c0), DAT_146b341c0 == -1)) {
    uVar1 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    AGTutorialStepBotDestroy::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedColorParams",1);
    DAT_146b341b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b341c0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b341b8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b341b8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b341b8 + 0x30));
  }
  if ((*piVar5 < DAT_146b341d0) && (_Init_thread_header(&DAT_146b341d0), DAT_146b341d0 == -1)) {
    uVar1 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    AGTutorialStepBotDestroy::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedWwiseEvent",1);
    DAT_146b341c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b341d0);
  }
  if (0 < *(int *)(DAT_146b341c8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b341c8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b341c8 + 0x30));
  }
  return;
}



// FUNCTION 142d82990 FUN_142d82990 body=1267 status=ok
// SIG undefined FUN_142d82990(void)

undefined8 FUN_142d82990(longlong *param_1,int *param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  undefined8 local_res10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_28 [2];
  
  pvVar10 = (void *)0x0;
  iVar11 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
    *(undefined2 *)*param_3 = 0;
  }
  iVar7 = *param_2;
  if ((-1 < iVar7) && (iVar7 < (int)((longlong *)*param_1)[1])) {
    iVar12 = iVar7 + 1;
    iVar9 = *(byte *)((longlong)iVar7 + *(longlong *)*param_1) - 0x1d;
    *param_2 = iVar12;
    switch(iVar9) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xe:
    case 0xf:
    case 0x18:
    case 0x19:
    case 0x2e:
      bVar5 = true;
      break;
    default:
      bVar5 = false;
    }
    if (bVar5) {
      switch(iVar9) {
      case 0:
        FUN_142d77710(param_1,param_2,param_3,0);
        break;
      case 1:
        FUN_142d778d0(param_1,param_2,param_3,0);
        break;
      default:
        goto LAB_142d82e70;
      case 3:
        lVar2 = *(longlong *)((longlong)iVar12 + *(longlong *)*param_1);
        *param_2 = iVar7 + 9;
        plVar4 = (longlong *)param_1[1];
        local_res10 = lVar2;
        if (plVar4 != (longlong *)0x0) {
          iVar7 = (int)plVar4[1];
          *(int *)(plVar4 + 1) = iVar7 + 1;
          if (*(int *)((longlong)plVar4 + 0xc) < iVar7 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar7);
          }
          *(longlong *)(*plVar4 + (longlong)iVar7 * 8) = lVar2;
        }
        iVar7 = 0;
        if ((lVar2 != 0) && (cVar6 = UObjectBase::IsValidLowLevel(lVar2), cVar6 != '\0')) {
          puVar8 = (undefined8 *)UObjectBaseUtility::GetPathName(lVar2,&local_38,0);
          iVar7 = 0;
          if (local_28 != puVar8) {
            pvVar10 = (void *)*puVar8;
            *puVar8 = 0;
            iVar7 = *(int *)(puVar8 + 1);
            puVar8[1] = 0;
          }
          if (CONCAT44(uStack_34,local_38) != 0) {
            FMemory::Free();
          }
        }
        iVar9 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar9 = iVar11;
        }
        if (iVar9 != 0) {
          iVar11 = (int)param_3[1];
          iVar7 = (uint)(iVar11 == 0) + iVar9 + iVar11;
          *(int *)(param_3 + 1) = iVar7;
          if (*(int *)((longlong)param_3 + 0xc) < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
          }
          pvVar1 = (void *)(*param_3 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar9 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar9 * 2) = 0;
        }
        if (pvVar10 != (void *)0x0) {
          FMemory::Free(pvVar10);
        }
        break;
      case 4:
      case 0x2e:
        local_30 = 0;
        uVar3 = *(undefined4 *)((longlong)iVar12 + *(longlong *)*param_1);
        *param_2 = iVar7 + 5;
        uStack_34 = *(undefined4 *)((longlong)(iVar7 + 5) + *(longlong *)*param_1);
        *param_2 = iVar7 + 9;
        local_res10 = CONCAT44(*(undefined4 *)((longlong)(iVar7 + 9) + *(longlong *)*param_1),uVar3)
        ;
        *param_2 = iVar7 + 0xd;
        puVar8 = (undefined8 *)FName::ToString(&local_res10,&local_38);
        pvVar10 = (void *)*puVar8;
        iVar7 = *(int *)(puVar8 + 1) + -1;
        if (*(int *)(puVar8 + 1) == 0) {
          iVar7 = iVar11;
        }
        if (iVar7 != 0) {
          iVar11 = (int)param_3[1];
          iVar9 = (uint)(iVar11 == 0) + iVar7 + iVar11;
          *(int *)(param_3 + 1) = iVar9;
          if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
          }
          pvVar1 = (void *)(*param_3 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar7 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
        }
        if (CONCAT44(uStack_34,local_38) != 0) {
          FMemory::Free();
          return 1;
        }
        break;
      case 5:
        FUN_142d77710(param_1,param_2,param_3,0);
        FUN_142d77710(param_1,param_2,param_3,1);
        FUN_142d77710(param_1,param_2,param_3,1);
        break;
      case 6:
        FUN_142d778d0(param_1,param_2,param_3,0);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        break;
      case 7:
      case 0xf:
        FUN_142d77550(param_1,param_2,param_3,0);
        break;
      case 8:
      case 0xb:
        if ((undefined4 *)*param_3 != &DAT_14588cd6c) {
          *(undefined4 *)(param_3 + 1) = 0;
          if (*(int *)((longlong)param_3 + 0xc) != 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,2);
            iVar11 = (int)param_3[1];
          }
          *(int *)(param_3 + 1) = iVar11 + 2;
          if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
          }
          *(undefined4 *)*param_3 = 0x30;
          return 1;
        }
        break;
      case 9:
      case 10:
        if ((undefined4 *)*param_3 != &DAT_14588cdac) {
          *(undefined4 *)(param_3 + 1) = 0;
          if (*(int *)((longlong)param_3 + 0xc) != 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,2);
            iVar11 = (int)param_3[1];
          }
          *(int *)(param_3 + 1) = iVar11 + 2;
          if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
          }
          *(undefined4 *)*param_3 = 0x31;
          return 1;
        }
        break;
      case 0xe:
        FUN_142d778d0(param_1,param_2,param_3,0);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        FUN_142d778d0(param_1,param_2,param_3,1);
        break;
      case 0x18:
        FUN_142d77a90(param_1,param_2,param_3,0);
        break;
      case 0x19:
        FUN_142d77c50(param_1,param_2,param_3,0);
      }
      return 1;
    }
  }
LAB_142d82e70:
  return 0;
}



// FUNCTION 142d82f20 FUN_142d82f20 body=410 status=ok
// SIG undefined FUN_142d82f20(void)

longlong FUN_142d82f20(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 local_res10 [8];
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [4];
  
  local_38[1] = 2;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  lVar3 = local_38[0];
  FGenericPlatformString::Memcpy(local_38[0],&DAT_14588c1cc,4);
  FUN_1404e14f0(param_1,local_38,local_38 + 2,&local_48,1,0);
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  iVar1 = FUN_141592950(&local_48,&DAT_14588c1e4,1,0,0xffffffff);
  if (iVar1 != -1) {
    local_38[0] = 0;
    local_38[1] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar3 = local_38[0];
    FGenericPlatformString::Memcpy(local_38[0],&DAT_14588c25c,4);
    FUN_1404e14f0(&local_48,local_38,local_38 + 2,&local_48,1,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  puVar5 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar4 = local_48;
  }
  puVar2 = (undefined8 *)FName::FName(local_res10,puVar4,1);
  lVar3 = StaticFindObjectFastExplicit(0,*puVar2,param_1,0,0);
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 1) != 0) {
      puVar5 = (undefined2 *)*param_1;
    }
    lVar3 = FUN_141799410(0,0xffffffffffffffff,puVar5);
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 142d830c0 FUN_142d830c0 body=81 status=ok
// SIG undefined FUN_142d830c0(void)

undefined8 * FUN_142d830c0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_1 + 0x50);
  *param_2 = &PTR_FUN_143f73d18;
  if (cVar1 == '\0') {
    param_2[1] = *(undefined8 *)(param_1 + 8);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  else {
    param_2[1] = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 142d83120 OnInMemoryAssetDeleted body=8 status=ok
// SIG undefined OnInMemoryAssetDeleted(void)

longlong UAssetRegistryImpl::OnInMemoryAssetDeleted(longlong param_1)

{
  return param_1 + 0x738;
}



// FUNCTION 142d83130 FUN_142d83130 body=83 status=ok
// SIG undefined FUN_142d83130(void)

void FUN_142d83130(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  UObject::GetPreloadDependencies();
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 142d83190 FUN_142d83190 body=83 status=ok
// SIG undefined FUN_142d83190(void)

void FUN_142d83190(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  UObject::GetPreloadDependencies();
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 142d831f0 FUN_142d831f0 body=4229 status=ok
// SIG undefined FUN_142d831f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142d831f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  void *_Src;
  bool bVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined2 *puVar20;
  uint uVar21;
  wchar_t *pwVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  wchar_t *local_248;
  undefined8 local_240;
  wchar_t *local_238;
  wchar_t *local_230;
  uint local_228;
  int local_224;
  longlong *local_220;
  uint local_218;
  longlong *local_210;
  wchar_t *local_208;
  int local_200;
  undefined4 local_1fc;
  wchar_t *local_1f8;
  wchar_t *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  wchar_t *local_1c0;
  ulonglong local_1b8;
  wchar_t *local_1b0;
  undefined8 local_1a8;
  wchar_t *local_1a0;
  ulonglong local_198;
  wchar_t *local_190;
  ulonglong local_188;
  wchar_t *local_180;
  uint local_178;
  undefined4 local_174;
  undefined2 *local_170;
  undefined8 local_168;
  undefined2 *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  longlong local_f0;
  wchar_t *local_e8;
  wchar_t *pwStack_e0;
  undefined4 local_d8;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 local_d0;
  wchar_t *pwStack_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong local_88 [2];
  longlong local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  wchar_t *pwVar16;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_210 = param_3;
  local_f8 = param_1;
  if (param_3 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    iVar18 = *(int *)(param_4 + 0x40);
  }
  else {
    local_228 = *(uint *)(param_2 + 1);
    lVar19 = (longlong)(int)local_228;
    pwVar16 = (wchar_t *)0x0;
    uVar14 = 0;
    _Src = (void *)*param_2;
    uVar15 = 0;
    local_238 = (wchar_t *)0x0;
    local_230 = (wchar_t *)0x0;
    pwVar8 = pwVar16;
    plVar23 = param_3;
    local_220 = param_3;
    local_f0 = param_4;
    if (local_228 == 0) {
      local_224 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_230,local_228,0);
      _guard_xfg_dispatch_icall_nop(local_230,_Src,lVar19 * 2);
    }
    while ((param_1 = local_f8, local_228 != 0 && (0 < (int)(local_228 - 1)))) {
      local_248 = (wchar_t *)0x0;
      local_240 = (wchar_t *)0x0;
      local_170 = (undefined2 *)0x0;
      local_168 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
      puVar20 = local_170;
      FGenericPlatformString::Memcpy(local_170,&DAT_14588c2cc,4);
      local_258 = 0xffffffff;
      puVar13 = &DAT_143f3eda8;
      if ((int)local_168 != 0) {
        puVar13 = puVar20;
      }
      local_218 = FUN_141592950(&local_230,puVar13,1);
      uVar7 = 0;
      if ((int)local_218 < 0) {
        pwVar11 = (wchar_t *)(ulonglong)local_228;
        bVar24 = true;
      }
      else {
        if (local_228 == 0) {
          pwVar11 = L"";
          uVar5 = uVar15;
        }
        else {
          pwVar11 = local_230;
          uVar5 = local_228 - 1;
        }
        local_1c0 = (wchar_t *)0x0;
        if ((int)local_218 < (int)uVar5) {
          uVar5 = local_218;
        }
        uVar6 = uVar5 + 1;
        if (uVar5 == 0) {
          uVar6 = uVar14;
        }
        local_1b8 = (ulonglong)uVar6;
        pwVar22 = pwVar16;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
          pwVar22 = local_1c0;
          uVar6 = (uint)local_1b8;
          if (0 < (int)(uint)local_1b8) {
            wcsncpy(local_1c0,pwVar11,(longlong)(int)uVar5);
            pwVar22[(int)uVar5] = L'\0';
          }
        }
        if (local_248 != (wchar_t *)0x0) {
          FMemory::Free(local_248);
        }
        local_1c0 = (wchar_t *)0x0;
        local_240 = (wchar_t *)CONCAT44((int)(local_1b8 >> 0x20),uVar6);
        local_1b8 = 0;
        uVar5 = uVar15;
        if ((int)local_168 != 0) {
          uVar5 = (int)local_168 - 1;
        }
        uVar5 = uVar5 + local_218;
        uVar6 = uVar5 + 0x7fffffff;
        uVar21 = local_228 - 1;
        if (local_228 == 0) {
          uVar21 = uVar7;
        }
        if (uVar5 < uVar21) {
          uVar21 = uVar5;
        }
        uVar5 = local_228 - 1;
        if (local_228 == 0) {
          uVar5 = uVar7;
        }
        uVar17 = uVar21;
        if ((uVar21 <= uVar6) && (uVar17 = uVar5, uVar6 < uVar5)) {
          uVar17 = uVar6;
        }
        local_1b0 = (wchar_t *)0x0;
        local_1f8 = L"";
        if (local_228 != 0) {
          local_1f8 = local_230;
        }
        iVar18 = uVar17 - uVar21;
        pwVar11 = (wchar_t *)(ulonglong)(iVar18 + 1);
        if (iVar18 == 0) {
          pwVar11 = pwVar16;
        }
        pwVar12 = pwVar16;
        local_248 = pwVar22;
        local_1a8 = pwVar11;
        if (0 < (int)pwVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0);
          pwVar12 = local_1b0;
          pwVar11 = (wchar_t *)((ulonglong)local_1a8 & 0xffffffff);
          if (0 < (int)local_1a8) {
            wcsncpy(local_1b0,local_1f8 + (int)uVar21,(longlong)iVar18);
            pwVar12[iVar18] = L'\0';
          }
        }
        if (local_230 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        bVar24 = false;
        local_224 = local_1a8._4_4_;
        local_1a8 = (wchar_t *)0x0;
        local_1b0 = (wchar_t *)0x0;
        local_228 = (uint)pwVar11;
        puVar20 = local_170;
        local_230 = pwVar12;
      }
      if (puVar20 != (undefined2 *)0x0) {
        FMemory::Free(puVar20);
        pwVar11 = (wchar_t *)(ulonglong)local_228;
      }
      pwVar22 = local_230;
      if (bVar24) {
        iVar18 = (int)pwVar11;
        local_240 = (wchar_t *)CONCAT44(local_240._4_4_,iVar18);
        if ((iVar18 != 0) || (local_240._4_4_ != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,pwVar11,local_240._4_4_);
          _guard_xfg_dispatch_icall_nop(local_248,pwVar22,(longlong)iVar18 * 2);
          pwVar11 = local_240;
        }
        local_240 = pwVar11;
        local_228 = 0;
        if (local_224 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_230,0);
        }
      }
      local_218 = -1;
      cVar4 = FString::EndsWith(&local_248,&DAT_14588c34c,1);
      pwVar11 = local_248;
      if (cVar4 != '\0') {
        lVar19 = (longlong)(int)local_240;
        local_208 = (wchar_t *)0x0;
        local_200 = (int)local_240;
        if ((int)local_240 == 0) {
          local_1fc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_208,(ulonglong)local_240 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_208,pwVar11,lVar19 * 2);
        }
        local_1f0 = (wchar_t *)0x0;
        local_1e8 = 0;
        local_160 = (undefined2 *)0x0;
        local_158 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0);
        puVar20 = local_160;
        FGenericPlatformString::Memcpy(local_160,&DAT_14588c3ac,4);
        local_258 = 0xffffffff;
        puVar13 = &DAT_143f3eda8;
        if ((int)local_158 != 0) {
          puVar13 = puVar20;
        }
        uVar5 = FUN_141592950(&local_208,puVar13,1);
        local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,uVar5);
        if (-1 < (int)uVar5) {
          if (local_200 == 0) {
            pwVar11 = L"";
            uVar6 = uVar7;
          }
          else {
            pwVar11 = local_208;
            uVar6 = local_200 - 1;
          }
          local_1a0 = (wchar_t *)0x0;
          if ((int)uVar5 < (int)uVar6) {
            uVar6 = uVar5;
          }
          uVar5 = uVar6 + 1;
          if (uVar6 == 0) {
            uVar5 = uVar14;
          }
          local_198 = (ulonglong)uVar5;
          pwVar22 = pwVar16;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
            pwVar22 = local_1a0;
            uVar5 = (uint)local_198;
            if (0 < (int)(uint)local_198) {
              wcsncpy(local_1a0,pwVar11,(longlong)(int)uVar6);
              pwVar22[(int)uVar6] = L'\0';
            }
          }
          if (local_248 != (wchar_t *)0x0) {
            FMemory::Free(local_248);
          }
          local_1a0 = (wchar_t *)0x0;
          local_240 = (wchar_t *)CONCAT44((int)(local_198 >> 0x20),uVar5);
          local_198 = 0;
          uVar5 = uVar15;
          if ((int)local_158 != 0) {
            uVar5 = (int)local_158 - 1;
          }
          uVar5 = uVar5 + (int)local_1f8;
          uVar6 = uVar5 + 0x7fffffff;
          uVar21 = local_200 - 1;
          if (local_200 == 0) {
            uVar21 = uVar7;
          }
          if (uVar5 < uVar21) {
            uVar21 = uVar5;
          }
          uVar5 = local_200 - 1;
          if (local_200 == 0) {
            uVar5 = uVar15;
          }
          uVar17 = uVar21;
          if ((uVar21 <= uVar6) && (uVar17 = uVar5, uVar6 < uVar5)) {
            uVar17 = uVar6;
          }
          local_190 = (wchar_t *)0x0;
          local_1f8 = L"";
          if (local_200 != 0) {
            local_1f8 = local_208;
          }
          iVar18 = uVar17 - uVar21;
          uVar5 = iVar18 + 1;
          if (iVar18 == 0) {
            uVar5 = uVar14;
          }
          local_188 = (ulonglong)uVar5;
          pwVar11 = pwVar16;
          local_248 = pwVar22;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
            pwVar11 = local_190;
            uVar5 = (uint)local_188;
            if (0 < (int)(uint)local_188) {
              wcsncpy(local_190,local_1f8 + (int)uVar21,(longlong)iVar18);
              pwVar11[iVar18] = L'\0';
            }
          }
          if (local_1f0 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          uVar2 = local_188 >> 0x20;
          local_188 = 0;
          local_190 = (wchar_t *)0x0;
          local_1e8 = CONCAT44((int)uVar2,uVar5);
          puVar20 = local_160;
          local_1f0 = pwVar11;
        }
        if (puVar20 != (undefined2 *)0x0) {
          FMemory::Free(puVar20);
        }
        local_258 = 0xffffffff;
        iVar18 = FUN_141592950(&local_1f0,&DAT_14588c3dc,1);
        if (iVar18 != -1) {
          local_258 = 0xffffffff;
          uVar5 = FUN_141592950(&local_1f0,&DAT_14588c5e4,1);
          if ((int)local_1e8 == 0) {
            pwVar11 = L"";
            uVar6 = uVar15;
          }
          else {
            pwVar11 = local_1f0;
            uVar6 = (int)local_1e8 - 1;
          }
          local_180 = (wchar_t *)0x0;
          local_174 = 0;
          uVar21 = uVar14;
          if ((int)uVar5 < 0) {
LAB_142d83800:
            uVar5 = uVar15;
          }
          else {
            uVar21 = uVar6;
            if ((int)uVar5 < (int)uVar6) {
              uVar21 = uVar5;
            }
            uVar5 = uVar21 + 1;
            if (uVar21 == 0) goto LAB_142d83800;
          }
          pwVar22 = pwVar16;
          local_178 = uVar5;
          if ((0 < (int)uVar5) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0), uVar5 = local_178,
             pwVar22 = local_180, 0 < (int)local_178)) {
            wcsncpy(local_180,pwVar11,(longlong)(int)uVar21);
            pwVar22[(int)uVar21] = L'\0';
          }
          pwVar11 = L"";
          if (uVar5 != 0) {
            pwVar11 = pwVar22;
          }
          local_218 = _wtoi(pwVar11);
          if (pwVar22 != (wchar_t *)0x0) {
            FMemory::Free(pwVar22);
          }
        }
        if (local_1f0 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_208 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      }
      param_3 = local_210;
      bVar24 = false;
      if (pwVar8 == (wchar_t *)0x0) {
        pwVar8 = L"";
        if ((int)local_240 != 0) {
          pwVar8 = local_248;
        }
        lVar19 = local_210[2];
        FName::FName(local_98,pwVar8,0);
        pwVar11 = (wchar_t *)FindField<UProperty>(lVar19);
LAB_142d83eb1:
        local_238 = pwVar11;
        bVar24 = true;
        pwVar8 = local_238;
LAB_142d83eb4:
        uVar5 = local_218;
        if (pwVar8 != (wchar_t *)0x0) {
          if (bVar24) {
            plVar23 = (longlong *)((longlong)plVar23 + (longlong)*(int *)(pwVar8 + 0x22));
            local_220 = plVar23;
          }
          if (-1 < (int)local_218) {
            lVar19 = UMapProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                 (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (bVar24) {
              cVar4 = FUN_142d800a0(uVar5,&local_248,&local_238);
              bVar24 = cVar4 == '\0';
              pwVar8 = local_238;
              plVar23 = local_220;
LAB_142d84135:
              if (!bVar24) goto LAB_142d84157;
            }
            else {
              lVar19 = USetProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                   (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if (bVar24) {
                lVar19 = USetProperty::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                     (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                  bVar24 = false;
                }
                else {
                  bVar24 = true;
                }
                if (!bVar24) goto LAB_142d84133;
                if (((int)uVar5 < 0) || ((int)plVar23[5] <= (int)uVar5)) {
                  bVar24 = false;
                }
                else {
                  bVar24 = true;
                }
                if (bVar24) {
                  plVar9 = (longlong *)plVar23[4];
                  if ((longlong *)plVar23[4] == (longlong *)0x0) {
                    plVar9 = plVar23 + 2;
                  }
                  uVar6 = uVar5;
                  if ((int)uVar5 < 0) {
                    uVar6 = uVar5 + 0x1f;
                  }
                  if ((*(uint *)((longlong)plVar9 + (longlong)((int)uVar6 >> 5) * 4) &
                      1 << ((byte)uVar5 & 0x1f)) == 0) goto LAB_142d8400a;
                  bVar24 = true;
                }
                else {
LAB_142d8400a:
                  bVar24 = false;
                }
                if (!bVar24) goto LAB_142d84133;
                uVar6 = (**(code **)(**(longlong **)(pwVar8 + 0x38) + 0x348))();
                pwVar8 = *(wchar_t **)(pwVar8 + 0x38);
                if ((int)uVar6 < 1) {
                  uVar6 = uVar7;
                }
                uVar7 = 4;
                if (3 < (int)uVar6) {
                  uVar7 = uVar6;
                }
                uVar6 = 4;
                if (3 < (int)uVar7) {
                  uVar6 = uVar7;
                }
                uVar6 = (*(int *)(pwVar8 + 0x1a) + 3U & 0xfffffffc) + 7 + uVar6 & ~(uVar6 - 1);
                uVar7 = 8;
                if (7 < (int)uVar6) {
                  uVar7 = uVar6;
                }
                plVar23 = (longlong *)((longlong)(int)(uVar7 * uVar5) + *plVar23);
                bVar24 = false;
                local_238 = pwVar8;
                local_220 = plVar23;
                goto LAB_142d84135;
              }
              lVar19 = UArrayProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                   (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if (bVar24) {
                lVar19 = UArrayProperty::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                     (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                  bVar24 = false;
                }
                else {
                  bVar24 = true;
                }
                if ((bVar24) && (plVar23 != (longlong *)0x0)) {
                  if (((int)uVar5 < 0) || ((int)plVar23[1] <= (int)uVar5)) {
                    bVar24 = false;
                  }
                  else {
                    bVar24 = true;
                  }
                  if (bVar24) {
                    pwVar8 = *(wchar_t **)(pwVar8 + 0x38);
                    plVar23 = (longlong *)
                              ((longlong)(int)(*(int *)(pwVar8 + 0x1a) * uVar5) + *plVar23);
                    bVar24 = false;
                    local_238 = pwVar8;
                    local_220 = plVar23;
                    goto LAB_142d84135;
                  }
                }
LAB_142d84133:
                bVar24 = true;
                goto LAB_142d84135;
              }
              if (1 < *(int *)(pwVar8 + 0x18)) {
                plVar23 = (longlong *)
                          ((longlong)plVar23 + (longlong)(int)(*(int *)(pwVar8 + 0x1a) * uVar5));
                local_220 = plVar23;
                goto LAB_142d84157;
              }
            }
            local_238 = (wchar_t *)0x0;
            local_228 = 0;
            pwVar8 = pwVar16;
            if (local_224 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_230);
            }
          }
        }
      }
      else {
        lVar19 = UObjectProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
             (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        param_3 = local_210;
        if ((bVar1) && (plVar9 = (longlong *)*plVar23, plVar9 != (longlong *)0x0)) {
          pwVar8 = L"";
          if ((int)local_240 != 0) {
            pwVar8 = local_248;
          }
          local_220 = plVar9;
          local_210 = plVar9;
          FName::FName(local_b8,pwVar8,0);
          pwVar8 = (wchar_t *)FindField<UProperty>();
          bVar24 = true;
          param_3 = plVar9;
          plVar23 = plVar9;
          local_238 = pwVar8;
        }
        if (pwVar8 != (wchar_t *)0x0) {
          lVar19 = UWeakObjectProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
               (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            local_110 = (undefined4)*plVar23;
            local_10c = *(undefined4 *)((longlong)plVar23 + 4);
            plVar9 = (longlong *)FWeakObjectPtr::Get();
            if (plVar9 != (longlong *)0x0) {
              pwVar8 = L"";
              if ((int)local_240 != 0) {
                pwVar8 = local_248;
              }
              local_220 = plVar9;
              local_210 = plVar9;
              FName::FName(local_b0,pwVar8,0);
              pwVar8 = (wchar_t *)FindField<UProperty>();
              bVar24 = true;
              param_3 = plVar9;
              plVar23 = plVar9;
              local_238 = pwVar8;
            }
          }
          if (pwVar8 != (wchar_t *)0x0) {
            lVar19 = USoftObjectProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                 (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              local_138 = 0;
              local_130 = 0;
              local_140 = 0;
              local_150 = (undefined4)*plVar23;
              local_14c = *(undefined8 *)((longlong)plVar23 + 4);
              local_78 = plVar23[2];
              local_108 = 0;
              FString::FString(local_70,plVar23 + 3);
              FSoftObjectPath::operator=(&local_140);
              plVar9 = (longlong *)FWeakObjectPtr::Get(&local_150);
              if (plVar9 == (longlong *)0x0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                plVar23 = local_220;
                if ((DAT_1464b56f4 != local_14c._4_4_) && (local_100 = 0, local_140 != 0)) {
                  lVar19 = FUN_141796df0(&local_140);
                  FWeakObjectPtr::operator=(&local_150);
                  if ((lVar19 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    local_14c = CONCAT44(DAT_1464b56f4,(undefined4)local_14c);
                  }
                  plVar9 = (longlong *)FWeakObjectPtr::Get(&local_150);
                  plVar23 = local_220;
                  if (plVar9 != (longlong *)0x0) goto LAB_142d83ae3;
                }
              }
              else {
LAB_142d83ae3:
                param_3 = plVar9;
                lVar19 = param_3[2];
                pwVar8 = L"";
                if ((int)local_240 != 0) {
                  pwVar8 = local_248;
                }
                local_220 = param_3;
                local_210 = param_3;
                FName::FName(local_a8,pwVar8,0);
                local_238 = (wchar_t *)FindField<UProperty>(lVar19);
                bVar24 = true;
                plVar23 = param_3;
              }
              pwVar8 = local_238;
              if (local_138 != 0) {
                FMemory::Free();
              }
            }
            if (pwVar8 != (wchar_t *)0x0) {
              lVar19 = ULazyObjectProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                   (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                local_1e0 = (undefined4)*plVar23;
                local_1dc = *(undefined8 *)((longlong)plVar23 + 4);
                local_1d4 = *(undefined8 *)((longlong)plVar23 + 0xc);
                uStack_1cc = *(undefined8 *)((longlong)plVar23 + 0x14);
                plVar9 = (longlong *)FWeakObjectPtr::Get();
                if (plVar9 == (longlong *)0x0) {
                  LOCK();
                  if (DAT_1464b4c84 == 0) {
                    DAT_1464b4c84 = 0;
                  }
                  UNLOCK();
                  pwVar8 = local_238;
                  plVar23 = local_220;
                  if (DAT_1464b4c84 != local_1dc._4_4_) {
                    if (((uStack_1cc._4_4_ != 0 || (int)uStack_1cc != 0) || local_1d4._4_4_ != 0) ||
                        (int)local_1d4 != 0) {
                      lVar19 = FUniqueObjectGuid::ResolveObject(&local_1d4);
                      FWeakObjectPtr::operator=(&local_1e0);
                      if ((lVar19 != 0) || (DAT_1469e7e10 == '\0')) {
                        LOCK();
                        if (DAT_1464b4c84 == 0) {
                          DAT_1464b4c84 = 0;
                        }
                        UNLOCK();
                        local_1dc = CONCAT44(DAT_1464b4c84,(undefined4)local_1dc);
                      }
                      plVar9 = (longlong *)FWeakObjectPtr::Get();
                      pwVar8 = local_238;
                      plVar23 = local_220;
                      if (plVar9 != (longlong *)0x0) goto LAB_142d83c2a;
                    }
                  }
                }
                else {
LAB_142d83c2a:
                  param_3 = plVar9;
                  pwVar8 = L"";
                  if ((int)local_240 != 0) {
                    pwVar8 = local_248;
                  }
                  local_220 = param_3;
                  local_210 = param_3;
                  FName::FName(local_a0,pwVar8,0);
                  local_238 = (wchar_t *)FindField<UProperty>();
                  bVar24 = true;
                  pwVar8 = local_238;
                  plVar23 = param_3;
                }
              }
              if (pwVar8 != (wchar_t *)0x0) {
                lVar19 = UStructProperty::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                     (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  lVar19 = UStructProperty::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
                       (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                    bVar24 = false;
                  }
                  else {
                    bVar24 = true;
                  }
                  pwVar11 = pwVar16;
                  if (bVar24) {
                    pwVar11 = pwVar8;
                  }
                  pwVar22 = *(wchar_t **)(pwVar11 + 0x38);
                  if ((pwVar22 == (wchar_t *)0x0) ||
                     (lVar19 = *(longlong *)(pwVar22 + 8),
                     lVar10 = UUserDefinedStruct::GetPrivateStaticClass(), lVar19 != lVar10)) {
                    pwVar22 = pwVar16;
                  }
                  if (pwVar22 != (wchar_t *)0x0) {
                    pwStack_e0 = *(wchar_t **)(pwVar22 + 0x1c);
                    local_d8 = 0xffffffff;
                    uStack_d4 = 0x101;
                    uStack_d2 = 0;
                    local_e8 = pwVar22;
                    FUN_140472e10(&local_e8);
                    pwVar12 = pwStack_e0;
                    local_118 = (longlong *)
                                CONCAT17(uStack_d1,CONCAT16(uStack_d2,CONCAT24(uStack_d4,local_d8)))
                    ;
                    local_c0 = 0xffffffff;
                    local_128 = local_e8;
                    uStack_120 = pwStack_e0;
                    local_bc = 0x101;
                    local_d0 = 0;
                    pwStack_c8 = (wchar_t *)0x0;
                    local_ba = 0;
                    FUN_140472e10(&local_d0);
                    pwVar3 = pwStack_c8;
                    pwVar11 = uStack_120;
                    uStack_120 = pwVar12;
                    while (bVar24 = uStack_120 != pwVar3, uStack_120 = pwVar11, bVar24) {
                      (**(code **)(*(longlong *)pwVar22 + 0x2d8))
                                (pwVar22,local_88,*(longlong *)(pwVar11 + 0xc));
                      pwVar12 = L"";
                      if ((int)local_240 != 0) {
                        pwVar12 = local_248;
                      }
                      iVar18 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar12);
                      if (local_88[0] != 0) {
                        FMemory::Free();
                      }
                      param_3 = local_210;
                      if (iVar18 == 0) goto LAB_142d83eb1;
                      uStack_120 = *(wchar_t **)(pwVar11 + 0x14);
                      FUN_140472e10(&local_128);
                      pwVar11 = uStack_120;
                    }
                  }
                  pwVar11 = L"";
                  if ((int)local_240 != 0) {
                    pwVar11 = local_248;
                  }
                  FName::FName(local_90,pwVar11,1);
                  pwVar11 = (wchar_t *)FindField<UProperty>(*(longlong *)(pwVar8 + 0x38));
                  param_3 = local_210;
                  goto LAB_142d83eb1;
                }
                goto LAB_142d83eb4;
              }
            }
          }
        }
      }
LAB_142d84157:
      if (local_248 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    if ((pwVar8 != (wchar_t *)0x0) && (plVar23 != (longlong *)0x0)) {
      local_128._0_4_ = SUB84(param_3,0);
      local_128._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
      uStack_120._0_4_ = SUB84(pwVar8,0);
      uStack_120._4_4_ = (undefined4)((ulonglong)pwVar8 >> 0x20);
      *(undefined4 *)local_f8 = (undefined4)local_128;
      *(undefined4 *)((longlong)local_f8 + 4) = local_128._4_4_;
      *(undefined4 *)(local_f8 + 1) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)local_f8 + 0xc) = uStack_120._4_4_;
      local_f8[2] = plVar23;
      *(undefined1 *)(local_f8 + 3) = 1;
      local_128 = (wchar_t *)param_3;
      uStack_120 = pwVar8;
      local_118 = plVar23;
      if (local_230 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      FUN_1404bed90(local_f0);
      return param_1;
    }
    *local_f8 = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    *(undefined1 *)(local_f8 + 3) = 0;
    if (local_230 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    iVar18 = *(int *)(local_f0 + 0x40);
    param_4 = local_f0;
  }
  local_f0 = param_4;
  if (iVar18 != 0) {
    plVar23 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar23 = (longlong *)(param_4 + 0x10);
    }
    if (plVar23 != (longlong *)0x0) {
      (**(code **)(*plVar23 + 0x10))(plVar23,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142d84280 FUN_142d84280 body=52 status=ok
// SIG undefined FUN_142d84280(void)

undefined8
FUN_142d84280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_142da9940(param_2,param_1,param_3,param_4,param_5,param_6);
  return param_1;
}



// FUNCTION 142d842c0 FUN_142d842c0 body=98 status=ok
// SIG undefined FUN_142d842c0(void)

void FUN_142d842c0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  FUN_142450b20();
  if ((*(longlong *)(param_1 + 0x4b8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x548), lVar2 != 0)) {
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 142d84330 FUN_142d84330 body=48 status=ok
// SIG undefined FUN_142d84330(void)

undefined8 FUN_142d84330(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = EClientLoginState::ToString(*(undefined4 *)(param_3 + 0xf0));
  FString::PrintfImpl(param_2,L"[%s]",uVar1);
  return param_2;
}



// FUNCTION 142d84360 FUN_142d84360 body=21 status=ok
// SIG undefined FUN_142d84360(void)

undefined8 FUN_142d84360(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x548);
  }
  return 0;
}



// FUNCTION 142d843a0 FUN_142d843a0 body=124 status=ok
// SIG undefined FUN_142d843a0(void)

undefined8 * FUN_142d843a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10 | 0x200;
  bVar1 = FUN_142730ad0(param_1,param_3);
  uVar2 = *(uint *)((longlong)param_2 + 4) & 0xffffffef | (uint)bVar1 << 4;
  *(uint *)((longlong)param_2 + 4) = (uVar2 >> 1 ^ uVar2) & 8 ^ uVar2;
  return param_2;
}



// FUNCTION 142d84420 FUN_142d84420 body=77 status=ok
// SIG undefined FUN_142d84420(void)

longlong FUN_142d84420(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x198);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1a0) * 4;
    if (plVar1 != plVar2) {
      while (*plVar1 != param_2) {
        plVar1 = plVar1 + 4;
        if (plVar1 == plVar2) {
          return *(longlong *)(param_1 + 0x1b8);
        }
      }
      if (plVar1[3] != 0) {
        return plVar1[3];
      }
    }
  }
  return *(longlong *)(param_1 + 0x1b8);
}



// FUNCTION 142d84470 FUN_142d84470 body=5 status=ok
// SIG undefined FUN_142d84470(void)

undefined1 FUN_142d84470(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



// FUNCTION 142d84490 FUN_142d84490 body=337 status=ok
// SIG undefined FUN_142d84490(void)

void FUN_142d84490(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *local_18;
  int local_10;
  
  if (((*(longlong *)(param_1 + 0x2d8) != 0) &&
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x168), lVar4 != 0)) &&
     (lVar4 == param_2)) {
    iVar2 = FUN_142340f30();
    if (((iVar2 < 3) &&
        ((*(longlong *)(param_1 + 0x120) != 0 || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)))) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x2d8) + 0x94) & 2) == 0)) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x2d8) + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar6 = iVar2 >> 0x1f & 0xffff;
        uVar3 = iVar2 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x120);
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(param_1);
        }
        UWorld::GetPlayerControllerIterator(lVar4,&local_18);
        for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
          plVar5 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
          if ((plVar5 != (longlong *)0x0) &&
             (cVar1 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar1 == '\0')) {
            FUN_142707ce0(plVar5,*(undefined8 *)(param_1 + 0x2d8));
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 0x300) & 0x10) != 0) {
      FUN_142362d90(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142d845f0 FUN_142d845f0 body=188 status=ok
// SIG undefined FUN_142d845f0(void)

void FUN_142d845f0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142453170();
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar3 = FUN_1429e18b0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (((*(uint *)((longlong)param_2 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar2 = (**(code **)(*param_2 + 0x768))(param_2), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = APlayerController::IsPrimaryPlayer(param_2), cVar2 != '\0')) {
      lVar3 = FUN_142d77040(param_1);
      lVar4 = (**(code **)(*param_2 + 0x680))(param_2);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        *(longlong *)(lVar3 + 0x558) = lVar4;
      }
    }
    return;
  }
  return;
}



// FUNCTION 142d846b0 FUN_142d846b0 body=421 status=ok
// SIG undefined FUN_142d846b0(void)

void FUN_142d846b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_38 [48];
  
  lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 400) == 0) {
      lVar4 = lVar4 + 0x400;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 400) + 0x98);
    }
    lVar5 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar4,*(undefined8 *)(param_8 + 4),param_8[1],local_38);
    if (lVar5 == 0) {
      puVar6 = (undefined8 *)operator_new(0x48);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = &PTR_FUN_14589a3d8;
        FWeakObjectPtr::operator=(puVar6 + 1,param_1);
        FWeakObjectPtr::operator=(puVar6 + 2,param_2);
        uVar2 = *(undefined8 *)(param_8 + 2);
        uVar3 = *(undefined8 *)(param_8 + 4);
        *(undefined4 *)(puVar6 + 4) = param_5;
        puVar6[6] = uVar2;
        uVar1 = *param_8;
        *(undefined4 *)(puVar6 + 5) = param_7;
        *(undefined4 *)(puVar6 + 3) = param_3;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = param_4;
        *(undefined4 *)((longlong)puVar6 + 0x24) = param_6;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
        *(undefined4 *)(puVar6 + 7) = uVar1;
        FWeakObjectPtr::operator=((longlong)puVar6 + 0x3c,uVar3);
      }
      FUN_142514cf0(lVar4,*(undefined8 *)(param_8 + 4),param_8[1],puVar6);
    }
    else {
      FWeakObjectPtr::operator=(lVar5 + 8,param_1);
      FWeakObjectPtr::operator=(lVar5 + 0x10,param_2);
      *(undefined4 *)(lVar5 + 0x20) = param_5;
      *(undefined4 *)(lVar5 + 0x28) = param_7;
      *(undefined4 *)(lVar5 + 0x18) = param_3;
      *(undefined4 *)(lVar5 + 0x1c) = param_4;
      *(undefined4 *)(lVar5 + 0x24) = param_6;
    }
  }
  return;
}



// FUNCTION 142d84860 FUN_142d84860 body=226 status=ok
// SIG undefined FUN_142d84860(void)

void FUN_142d84860(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_18;
  undefined8 local_10;
  
  lVar2 = FUN_142d19640(param_2);
  if (lVar2 != 0) {
    uVar5 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    (**(code **)(*param_2 + 0x28))(param_2,&local_18);
    if ((*(longlong *)(param_1 + 0x4b8) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x548), lVar1 != 0)) {
      uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
      if (local_18 + (int)local_10 < local_18) {
        uVar4 = uVar5;
      }
      plVar3 = local_18;
      if (uVar4 != 0) {
        do {
          if (*plVar3 != 0) {
            FUN_142dd18b0(lVar1,lVar2,*plVar3,1);
          }
          plVar3 = plVar3 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 142d84950 FUN_142d84950 body=81 status=ok
// SIG undefined FUN_142d84950(void)

void FUN_142d84950(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((param_1[3] == 0) || (param_1[1] == 0)) {
    plVar1 = (longlong *)0x0;
    *param_1 = 1;
    param_1[3] = param_2;
    plVar2 = plVar1;
    if (param_2 != 0) {
      plVar2 = *(longlong **)(param_2 + 0x118);
    }
    param_1[1] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar2 + 0x668))();
    }
    param_1[2] = plVar1;
  }
  return;
}



// FUNCTION 142d849d0 FUN_142d849d0 body=198 status=ok
// SIG undefined FUN_142d849d0(void)

void FUN_142d849d0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [24];
  
  thunk_FUN_14291d160();
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_14589a790;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_14589a7d8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_146533138;
    lVar3 = (longlong)DAT_146533138;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146533130);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  return;
}



// FUNCTION 142d84aa0 FUN_142d84aa0 body=489 status=ok
// SIG undefined FUN_142d84aa0(void)

void FUN_142d84aa0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  longlong local_res18;
  longlong *local_res20;
  undefined2 *local_58;
  undefined8 local_50;
  void *local_48;
  longlong lStack_40;
  
  local_res8[0] = 0;
  FUN_142d95b60(param_1,param_2,local_res8,0);
  iVar1 = local_res8[0];
  if (*(char *)((longlong)param_1 + 0x99) == '\0') {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      puVar3 = (undefined2 *)0x0;
      local_48 = (void *)0x0;
      lStack_40 = 0;
      FUN_142d959c0(param_1,param_2,&local_48,0);
      _Src = local_48;
      if (*(char *)((longlong)param_1 + 0x99) != '\0') {
        return;
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      lVar6 = lStack_40 - (longlong)local_48 >> 1;
      if (lVar6 == 0) {
LAB_142d84bae:
        puVar4 = &DAT_143f3eda8;
      }
      else {
        iVar7 = (int)lVar6 + 1;
        iVar2 = 0;
        if (0 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar7);
          puVar3 = (undefined2 *)(local_50 & 0xffffffff);
          iVar2 = local_50._4_4_;
        }
        iVar7 = iVar7 + (int)puVar3;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (iVar2 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
          iVar7 = (int)local_50;
        }
        puVar4 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar6 * 2);
        puVar4[iVar7 + -1] = 0;
        puVar3 = puVar4;
        if (iVar7 == 0) goto LAB_142d84bae;
      }
      FName::FName(&local_res18,puVar4,1);
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        iVar7 = *(int *)((longlong)plVar5 +
                        ((longlong)((int)((ulonglong)local_res18 >> 0x20) + (int)local_res18) &
                        (longlong)(int)param_1[9] - 1U) * 4);
        if (iVar7 != -1) {
          do {
            plVar5 = (longlong *)((longlong)iVar7 * 0x20 + *param_1);
            if (*plVar5 == local_res18) {
              if ((iVar7 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_142d84c5e;
              break;
            }
            iVar7 = (int)plVar5[3];
          } while (iVar7 != -1);
        }
      }
      local_res20 = &local_res18;
      FUN_140d1c9b0(param_1,local_res8,&local_res20);
LAB_142d84c5e:
    }
  }
  return;
}



// FUNCTION 142d84c90 FUN_142d84c90 body=645 status=ok
// SIG undefined FUN_142d84c90(void)

void FUN_142d84c90(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *local_res8;
  int local_res18 [2];
  longlong local_res20;
  undefined2 *local_58;
  uint local_50;
  int local_4c;
  void *local_48;
  longlong lStack_40;
  
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  FUN_142d95b60(param_1,param_2,&local_res8,0);
  if ((*(char *)((longlong)param_1 + 0x99) == '\0') &&
     (iVar8 = (int)local_res8, (int)local_res8 != 0)) {
    while( true ) {
      puVar4 = (undefined2 *)0x0;
      local_48 = (void *)0x0;
      lStack_40 = 0;
      FUN_142d959c0(param_1,param_2,&local_48,0);
      _Src = local_48;
      if (*(char *)((longlong)param_1 + 0x99) != '\0') break;
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      local_4c = 0;
      lVar6 = lStack_40 - (longlong)local_48 >> 1;
      if (lVar6 == 0) {
LAB_142d84da1:
        puVar5 = &DAT_143f3eda8;
      }
      else {
        iVar9 = (int)lVar6 + 1;
        if (0 < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar9);
          puVar4 = (undefined2 *)(ulonglong)local_50;
        }
        local_50 = iVar9 + (int)puVar4;
        if (local_4c < (int)local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        }
        uVar2 = local_50;
        puVar5 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar6 * 2);
        puVar5[(int)(uVar2 - 1)] = 0;
        puVar4 = puVar5;
        if (uVar2 == 0) goto LAB_142d84da1;
      }
      FName::FName(&local_res20,puVar5,1);
      if (puVar4 != (undefined2 *)0x0) {
        FMemory::Free(puVar4);
      }
      local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
      FUN_142d95b60(param_1,param_2,&local_res8);
      plVar1 = local_res8;
      if (*(char *)((longlong)param_1 + 0x99) != '\0') {
        return;
      }
      iVar9 = (int)local_res8;
      if ((int)local_res8 != 0) {
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          plVar7 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar7 = param_1 + 7;
          }
          iVar3 = *(int *)((longlong)plVar7 +
                          ((longlong)((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20) &
                          (longlong)(int)param_1[9] - 1U) * 4);
          if (iVar3 != -1) {
            do {
              plVar7 = (longlong *)((longlong)iVar3 * 0x20 + *param_1);
              if (*plVar7 == local_res20) {
                if ((iVar3 != -1) && (plVar7 != (longlong *)0x0)) goto LAB_142d84e89;
                break;
              }
              iVar3 = (int)plVar7[3];
            } while (iVar3 != -1);
          }
        }
        local_res8 = &local_res20;
        FUN_140d1c9b0(param_1,local_res18,&local_res8);
        plVar7 = (longlong *)((longlong)local_res18[0] * 0x20 + *param_1);
LAB_142d84e89:
        if (*(int *)((longlong)plVar7 + 0x14) < iVar9) {
          TArray<float,FDefaultAllocator>::ResizeTo(plVar7 + 1,(ulonglong)plVar1 & 0xffffffff);
        }
        do {
          local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
          FUN_142d95b60(param_1,param_2,&local_res8);
          if (*(char *)((longlong)param_1 + 0x99) != '\0') {
            return;
          }
          iVar3 = (int)plVar7[2];
          *(int *)(plVar7 + 2) = iVar3 + 1;
          if (*(int *)((longlong)plVar7 + 0x14) < iVar3 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar7 + 1,iVar3);
          }
          *(int *)(plVar7[1] + (longlong)iVar3 * 4) = (int)local_res8;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 142d84f20 FUN_142d84f20 body=203 status=ok
// SIG undefined FUN_142d84f20(void)

void FUN_142d84f20(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x60) != &local_18) {
    *(undefined8 *)(param_1 + 0x60) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_10);
  }
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
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 142d84ff0 FUN_142d84ff0 body=600 status=ok
// SIG undefined FUN_142d84ff0(void)

void FUN_142d84ff0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  longlong *local_38;
  
  plVar1 = param_1 + 5;
  if (param_1[5] == 0) {
    plVar5 = (longlong *)(**(code **)*param_1)(param_1,local_58);
    if (plVar1 != plVar5) {
      *plVar1 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,plVar5 + 1);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      plVar8 = (longlong *)(lVar4 + 0x88);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      local_48 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        plVar5[1] = (longlong)param_1;
        *plVar5 = (longlong)&DAT_143f3ed00;
        plVar5[2] = (longlong)&LAB_142d7b434;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar3 = *(int *)(lVar4 + 0x90);
        *(int *)(lVar4 + 0x90) = iVar3 + 1;
        if (*(int *)(lVar4 + 0x94) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar8);
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      lVar4 = *plVar1;
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      local_38 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        plVar5[1] = (longlong)param_1;
        *plVar5 = (longlong)&PTR_GetPoolName_144553d80;
        plVar5[2] = (longlong)&LAB_140591ba4;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_144553dc8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x70,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res18);
        iVar3 = *(int *)(lVar4 + 0x78);
        *(int *)(lVar4 + 0x78) = iVar3 + 1;
        if (*(int *)(lVar4 + 0x7c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x70,iVar3);
        }
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x70));
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      (**(code **)(*(longlong *)*plVar1 + 0x68))((longlong *)*plVar1,param_2);
      (**(code **)(*(longlong *)*plVar1 + 0x20))();
    }
    iVar3 = *(int *)(param_1 + 2);
    *(int *)(param_1 + 2) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x14) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 1,iVar3);
    }
    plVar5 = (longlong *)((longlong)iVar3 * 0x10 + param_1[1]);
    *plVar5 = *plVar1;
    lVar4 = param_1[6];
    plVar5[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  else {
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 7,param_2,0);
  }
  return;
}



// FUNCTION 142d85250 FUN_142d85250 body=70 status=ok
// SIG undefined FUN_142d85250(void)

void FUN_142d85250(longlong *param_1,char param_2)

{
  char cVar1;
  
  if ((param_2 == '\0') && (cVar1 = FUN_142d86b00(), cVar1 == '\0')) {
    return;
  }
  if (param_1[6] != 0) {
    FUN_142d85250(param_1[6],param_2);
  }
  (**(code **)(*param_1 + 0x280))(param_1);
  return;
}



// FUNCTION 142d852a0 FUN_142d852a0 body=1068 status=ok
// SIG undefined FUN_142d852a0(void)

void FUN_142d852a0(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 *puVar25;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_58 [24];
  ulonglong uVar24;
  
  uVar24 = 0;
  iVar20 = 0;
  local_res18 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_142d85360;
  lVar14 = *(longlong *)(param_1 + 0x38);
  if (lVar14 != 0) {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38);
    if (lVar17 == 0) goto LAB_142d85360;
    uVar21 = uVar24;
    if (*(longlong *)(lVar14 + 0x30) != 0) {
      uVar12 = UWidget::GetPrivateStaticClass();
      for (uVar19 = *(ulonglong *)(lVar14 + 0x30);
          (uVar21 = uVar24, uVar19 != 0 &&
          (uVar21 = *(ulonglong *)(lVar14 + 0x30), uVar19 != uVar12));
          uVar19 = *(ulonglong *)(uVar19 + 0x30)) {
      }
    }
    uVar19 = uVar24;
    if (*(longlong *)(lVar17 + 0x30) != 0) {
      uVar13 = UWidget::GetPrivateStaticClass();
      for (uVar12 = *(ulonglong *)(lVar17 + 0x30);
          (uVar19 = uVar24, uVar12 != 0 &&
          (uVar19 = *(ulonglong *)(lVar17 + 0x30), uVar12 != uVar13));
          uVar12 = *(ulonglong *)(uVar12 + 0x30)) {
      }
    }
    if ((uVar21 != uVar19) || (*(char *)(*(longlong *)(param_1 + 0x38) + 0x40) == '\x02'))
    goto LAB_142d85360;
  }
  local_res18 = *(longlong *)(param_1 + 0x30) + 0x50;
LAB_142d85360:
  lVar14 = *(longlong *)(param_1 + 0x38);
  if ((lVar14 == 0) || (bVar10 = false, *(char *)(lVar14 + 0x40) == '\0')) {
    bVar10 = true;
  }
  if (lVar14 == 0) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar20 = FUN_140b824e0();
    }
  }
  else if (*(longlong *)(lVar14 + 0x38) != 0) {
    iVar20 = *(int *)(*(longlong *)(lVar14 + 0x38) + 0x48) + -1;
  }
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) < iVar20) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x58,iVar20);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) < iVar20) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x68,iVar20);
  }
  if (0 < iVar20) {
    local_res20 = 0;
    do {
      if ((local_res18 == 0) ||
         (*(int *)(*(longlong *)(local_res18 + 8) + (uVar24 & 0xff) * 8) == -1)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      uVar21 = uVar24 & 0xff;
      if ((*(longlong *)(param_1 + 0x38) == 0) ||
         (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48) + 0x14 + uVar21 * 0x28) ==
          '\0')) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar7) || (bVar8)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      iVar3 = *(int *)(param_1 + 0x60);
      iVar11 = iVar3 + 1;
      *(int *)(param_1 + 0x60) = iVar11;
      if (*(int *)(param_1 + 100) < iVar11) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 8) = 0;
      if (bVar9) {
        uVar18 = *(undefined4 *)(param_1 + 0x70);
      }
      else {
        uVar18 = 0xffffffff;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + -8 + (longlong)*(int *)(param_1 + 0x60) * 8) =
           uVar18;
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + -4 + (longlong)*(int *)(param_1 + 0x60) * 8) =
           0;
      if (bVar7) {
        if ((bVar10) || (!bVar8)) {
          iVar3 = *(int *)(*(longlong *)(local_res18 + 8) + uVar21 * 8);
          if (iVar3 != -1) {
            iVar11 = *(int *)(*(longlong *)(local_res18 + 8) + 4 + uVar21 * 8);
            lVar14 = (longlong)iVar11;
            if (((0 < iVar11) &&
                (puVar22 = (undefined8 *)
                           ((longlong)iVar3 * 0x40 + *(longlong *)(local_res18 + 0x18)),
                puVar22 != (undefined8 *)0x0)) && (0 < iVar11)) {
              do {
                iVar3 = *(int *)(param_1 + 0x70);
                *(int *)(param_1 + 0x70) = iVar3 + 1;
                if (*(int *)(param_1 + 0x74) < iVar3 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>
                  ::ResizeGrow(param_1 + 0x68,iVar3);
                }
                uVar6 = puVar22[1];
                lVar17 = *(longlong *)(param_1 + 0x68);
                lVar16 = (longlong)iVar3 * 0x40;
                *(undefined8 *)(lVar16 + lVar17) = *puVar22;
                ((undefined8 *)(lVar16 + lVar17))[1] = uVar6;
                uVar6 = puVar22[3];
                puVar25 = (undefined8 *)(lVar16 + 0x10 + lVar17);
                *puVar25 = puVar22[2];
                puVar25[1] = uVar6;
                uVar18 = *(undefined4 *)((longlong)puVar22 + 0x24);
                uVar4 = *(undefined4 *)(puVar22 + 5);
                uVar5 = *(undefined4 *)((longlong)puVar22 + 0x2c);
                puVar15 = (undefined4 *)(lVar16 + 0x20 + lVar17);
                *puVar15 = *(undefined4 *)(puVar22 + 4);
                puVar15[1] = uVar18;
                puVar15[2] = uVar4;
                puVar15[3] = uVar5;
                puVar25 = puVar22 + 6;
                uVar6 = puVar22[7];
                puVar22 = puVar22 + 8;
                puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar17);
                *puVar1 = *puVar25;
                puVar1[1] = uVar6;
                piVar2 = (int *)(*(longlong *)(param_1 + 0x58) + -4 +
                                (longlong)*(int *)(param_1 + 0x60) * 8);
                *piVar2 = *piVar2 + 1;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
          }
          goto LAB_142d8555d;
        }
LAB_142d85566:
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
        puVar22 = *(undefined8 **)(lVar14 + 0x18 + local_res20);
        puVar25 = puVar22 + (longlong)*(int *)(lVar14 + 0x20 + local_res20) * 8;
        for (; puVar22 != puVar25; puVar22 = puVar22 + 8) {
          iVar3 = *(int *)(param_1 + 0x70);
          *(int *)(param_1 + 0x70) = iVar3 + 1;
          if (*(int *)(param_1 + 0x74) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0x68,iVar3);
          }
          uVar6 = puVar22[1];
          lVar14 = *(longlong *)(param_1 + 0x68);
          lVar17 = (longlong)iVar3 * 0x40;
          *(undefined8 *)(lVar17 + lVar14) = *puVar22;
          ((undefined8 *)(lVar17 + lVar14))[1] = uVar6;
          uVar6 = puVar22[3];
          puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar14);
          *puVar1 = puVar22[2];
          puVar1[1] = uVar6;
          uVar18 = *(undefined4 *)((longlong)puVar22 + 0x24);
          uVar4 = *(undefined4 *)(puVar22 + 5);
          uVar5 = *(undefined4 *)((longlong)puVar22 + 0x2c);
          puVar15 = (undefined4 *)(lVar17 + 0x20 + lVar14);
          *puVar15 = *(undefined4 *)(puVar22 + 4);
          puVar15[1] = uVar18;
          puVar15[2] = uVar4;
          puVar15[3] = uVar5;
          uVar6 = puVar22[7];
          puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar14);
          *puVar1 = puVar22[6];
          puVar1[1] = uVar6;
          piVar2 = (int *)(*(longlong *)(param_1 + 0x58) + -4 +
                          (longlong)*(int *)(param_1 + 0x60) * 8);
          *piVar2 = *piVar2 + 1;
        }
      }
      else {
LAB_142d8555d:
        if (bVar8) goto LAB_142d85566;
      }
      local_res20 = local_res20 + 0x28;
      uVar23 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar23;
    } while ((int)uVar23 < iVar20);
  }
  lVar14 = *(longlong *)(param_1 + 0x38);
  if (lVar14 == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (((*(int *)(lVar14 + 0x74) == 0 && *(int *)(lVar14 + 0x70) == 0) &&
        *(int *)(lVar14 + 0x6c) == 0) && *(int *)(lVar14 + 0x68) == 0) {
      puVar15 = (undefined4 *)FGuid::NewGuid(local_58);
      uVar18 = puVar15[1];
      uVar4 = puVar15[2];
      uVar5 = puVar15[3];
      *(undefined4 *)(lVar14 + 0x68) = *puVar15;
      *(undefined4 *)(lVar14 + 0x6c) = uVar18;
      *(undefined4 *)(lVar14 + 0x70) = uVar4;
      *(undefined4 *)(lVar14 + 0x74) = uVar5;
      UObjectBaseUtility::MarkPackageDirty(lVar14);
    }
    uVar18 = *(undefined4 *)(lVar14 + 0x6c);
    uVar4 = *(undefined4 *)(lVar14 + 0x70);
    uVar5 = *(undefined4 *)(lVar14 + 0x74);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar14 + 0x68);
    *(undefined4 *)(param_1 + 0x44) = uVar18;
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    *(undefined4 *)(param_1 + 0x4c) = uVar5;
  }
  if (local_res18 == 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x30);
    uVar18 = *(undefined4 *)(lVar14 + 0x7c);
    uVar4 = *(undefined4 *)(lVar14 + 0x80);
    uVar5 = *(undefined4 *)(lVar14 + 0x84);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar14 + 0x78);
    *(undefined4 *)(param_1 + 0x8c) = uVar18;
    *(undefined4 *)(param_1 + 0x90) = uVar4;
    *(undefined4 *)(param_1 + 0x94) = uVar5;
  }
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 1;
  puVar22 = (undefined8 *)FGuid::NewGuid(local_58);
  uVar6 = puVar22[1];
  *(undefined8 *)(param_1 + 0x78) = *puVar22;
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  return;
}



// FUNCTION 142d856d0 FUN_142d856d0 body=808 status=ok
// SIG undefined FUN_142d856d0(void)

longlong FUN_142d856d0(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int *piVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_48;
  longlong local_40;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  pwVar12 = (wchar_t *)0x0;
  local_res8 = 0;
  uVar5 = UUGCampaignMap::GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    UMediaTexture::SetMediaPlayer(*(longlong *)(param_2 + 0x40),lVar6);
  }
  if ((*(longlong *)(param_2 + 0x30) != 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
    local_40 = *(undefined8 *)(param_2 + 0x38);
    local_48 = *(longlong *)(param_2 + 0x30);
    FUN_142aac290(lVar6,&local_48);
  }
  FWeakObjectPtr::operator=(&local_res8,lVar6);
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8);
  *puVar10 = (undefined4)local_res8;
  puVar10[1] = local_res8._4_4_;
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = lVar6;
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieEndReached",L"::");
  pwVar8 = pwVar12;
  while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar8 = pwVar3;
  }
  FName::FName(&local_res8,pwVar8 + 2,1);
  FUN_14074ba20(lVar6 + 0x28,param_1,&LAB_142d87a20,local_res8);
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaClosed",L"::");
  pwVar8 = pwVar12;
  while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar8 = pwVar3;
  }
  FName::FName(&local_res8,pwVar8 + 2,1);
  FUN_14074ba20(lVar6 + 0x38,param_1,&LAB_142d87a20,local_res8);
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaOpenFailed",L"::");
  while (pwVar7 = pwVar8, pwVar7 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
    pwVar12 = pwVar7;
  }
  FName::FName(&local_res10,pwVar12 + 2,1);
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_48,param_1);
  local_40 = local_res10;
  local_res8 = 0;
  if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
    UObject::FindFunction(lVar9,local_40);
  }
  piVar2 = *(int **)(lVar6 + 0x58);
  iVar1 = *(int *)(lVar6 + 0x60);
  piVar11 = piVar2;
  do {
    if (piVar11 == piVar2 + (longlong)iVar1 * 4) {
LAB_142d85981:
      iVar1 = *(int *)(lVar6 + 0x60);
      *(int *)(lVar6 + 0x60) = iVar1 + 1;
      if (*(int *)(lVar6 + 100) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x58,iVar1);
      }
      puVar10 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar6 + 0x58));
      *puVar10 = (int)local_48;
      puVar10[1] = local_48._4_4_;
      *(longlong *)(puVar10 + 2) = local_40;
LAB_142d859bb:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x58);
      if (*(longlong *)(param_2 + 0x48) != 0) {
        FUN_142aab3c0(lVar6);
        FUN_142aab520(lVar6);
      }
      return lVar6;
    }
    if ((((*piVar11 == (int)local_48) &&
         (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20), bVar13 = piVar11[1] == local_48._4_4_
         , bVar13)) ||
        ((cVar4 = FWeakObjectPtr::IsValid(piVar11), cVar4 == '\0' &&
         (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
       (*(longlong *)(piVar11 + 2) == local_40)) {
      if ((int)((longlong)piVar11 - (longlong)piVar2 >> 4) != -1) goto LAB_142d859bb;
      goto LAB_142d85981;
    }
    piVar11 = piVar11 + 4;
  } while( true );
}



// FUNCTION 142d85a00 FUN_142d85a00 body=350 status=ok
// SIG undefined FUN_142d85a00(void)

longlong FUN_142d85a00(longlong *param_1,undefined8 *param_2,undefined4 param_3,char param_4,
                      byte param_5,longlong param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  float local_28;
  float fStack_24;
  float fStack_20;
  
  if ((param_1[3] != 0) && (param_1[1] != 0)) {
    fStack_20 = *(float *)(param_2 + 1);
    uVar3 = *param_2;
    if (param_4 != '\0') {
      fStack_20 = 0.0;
    }
    local_28 = (float)uVar3;
    if (((0.0001 < ABS(local_28)) ||
        (fStack_24 = (float)((ulonglong)uVar3 >> 0x20), 0.0001 < ABS(fStack_24))) ||
       (lVar6 = 0, 0.0001 < ABS(fStack_20))) {
      if (param_6 == 0) {
        param_6 = *param_1;
        *param_1 = param_6 + 1;
      }
      plVar1 = param_1 + 4;
      iVar4 = (int)param_1[0x15];
      lVar6 = (longlong)iVar4;
      *(int *)(param_1 + 0x15) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0xac) < iVar4 + 1) {
        TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(plVar1,iVar4);
      }
      plVar5 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      plVar5 = plVar5 + lVar6 * 4;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      puVar2 = (undefined8 *)((longlong)plVar5 + lVar6 * 0x20 + 0xc);
      *puVar2 = uVar3;
      puVar2[1] = CONCAT44(param_3,fStack_20);
      *(uint *)((longlong)plVar5 + lVar6 * 0x20 + 0x1c) = (uint)param_5;
      plVar5[lVar6 * 4] = param_6;
      lVar6 = param_6;
    }
    return lVar6;
  }
  return 0;
}



// FUNCTION 142d85b60 FUN_142d85b60 body=284 status=ok
// SIG undefined FUN_142d85b60(void)

longlong FUN_142d85b60(longlong *param_1,float *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (((param_1[3] != 0) && (param_1[1] != 0)) &&
     ((0.0001 < ABS(*param_2) || ((0.0001 < ABS(param_2[1]) || (0.0001 < ABS(param_2[2]))))))) {
    if (param_3 == 0) {
      param_3 = *param_1;
      *param_1 = param_3 + 1;
    }
    plVar1 = param_1 + 4;
    iVar3 = (int)param_1[0x15];
    lVar6 = (longlong)iVar3;
    *(int *)(param_1 + 0x15) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xac) < iVar3 + 1) {
      TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(plVar1,iVar3);
    }
    plVar5 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    plVar5 = plVar5 + lVar6 * 4;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    uVar4 = *(undefined8 *)(param_2 + 2);
    plVar5 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    puVar2 = (undefined8 *)((longlong)plVar5 + lVar6 * 0x20 + 0xc);
    *puVar2 = *(undefined8 *)param_2;
    puVar2[1] = uVar4;
    *(float *)((longlong)plVar5 + lVar6 * 0x20 + 0x1c) = param_2[4];
    plVar5[lVar6 * 4] = param_3;
    return param_3;
  }
  return 0;
}



// FUNCTION 142d85c80 FUN_142d85c80 body=479 status=ok
// SIG undefined FUN_142d85c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142d85c80(longlong *param_1,float *param_2,undefined4 param_3,char param_4,byte param_5
                      ,longlong param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  
  if ((param_1[3] == 0) || (param_1[1] == 0)) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1[1] + 0x168);
  if (lVar5 == 0) {
    local_28 = _DAT_1468b5d90;
    fVar6 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar5 + 0x220);
    fVar6 = *(float *)(lVar5 + 0x228);
  }
  fVar8 = *param_2 - (float)local_28;
  fVar7 = param_2[1] - (float)((ulonglong)local_28 >> 0x20);
  fVar6 = param_2[2] - fVar6;
  local_28 = CONCAT44(fVar7,fVar8);
  local_18 = (uint)param_5;
  if (param_4 != '\0') {
    fVar6 = 0.0;
  }
  uStack_20 = CONCAT44(param_3,fVar6);
  if (((ABS(fVar8) <= 0.0001) && (ABS(fVar7) <= 0.0001)) && (ABS(fVar6) <= 0.0001)) {
    return 0;
  }
  if (param_6 == 0) {
    param_6 = *param_1;
    *param_1 = param_6 + 1;
  }
  plVar1 = param_1 + 4;
  iVar3 = (int)param_1[0x15];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 0x15) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xac) < iVar3 + 1) {
    TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(plVar1,iVar3);
  }
  plVar4 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  plVar4 = plVar4 + lVar5 * 4;
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  puVar2 = (undefined8 *)((longlong)plVar4 + lVar5 * 0x20 + 0xc);
  *puVar2 = local_28;
  puVar2[1] = uStack_20;
  plVar4[lVar5 * 4] = param_6;
  *(uint *)((longlong)plVar4 + lVar5 * 0x20 + 0x1c) = local_18;
  return param_6;
}



// FUNCTION 142d85e60 FUN_142d85e60 body=379 status=ok
// SIG undefined FUN_142d85e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142d85e60(longlong *param_1,undefined1 (*param_2) [12],longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 in_EAX;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((param_1[3] != 0) && (param_1[1] != 0)) {
    fVar3 = (float)DAT_146b33f50;
    fVar4 = DAT_146b33f50._4_4_;
    fVar5 = DAT_146b33f50._8_4_;
    fVar6 = DAT_146b33f50._12_4_;
    auVar11._12_4_ = 0;
    auVar11._0_12_ = *param_2;
    auVar11 = divps(auVar11,_DAT_146b33f50);
    fVar13 = *(float *)*param_2 - (float)(int)auVar11._0_4_ * fVar3;
    fVar14 = *(float *)(*param_2 + 4) - (float)(int)auVar11._4_4_ * fVar4;
    fVar15 = *(float *)(*param_2 + 8) - (float)(int)auVar11._8_4_ * fVar5;
    fVar16 = 0.0 - (float)(int)auVar11._12_4_ * fVar6;
    fVar13 = (float)(((uint)(fVar3 + fVar13) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar3 + fVar13));
    fVar14 = (float)(((uint)(fVar4 + fVar14) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                    (uint)(fVar4 + fVar14));
    fVar15 = (float)(((uint)(fVar5 + fVar15) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar5 + fVar15));
    fVar16 = (float)(((uint)(fVar6 + fVar16) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar6 + fVar16));
    auVar12._4_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar14 - fVar4) ^ (uint)fVar14) &
                                   -(uint)(fRam0000000146b33f44 < fVar14) ^ (uint)fVar14) &
                                 uRam0000000146b34014));
    auVar12._0_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar13 - fVar3) ^ (uint)fVar13) &
                                   -(uint)(_DAT_146b33f40 < fVar13) ^ (uint)fVar13) & _DAT_146b34010
                                 ));
    auVar12._8_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar15 - fVar5) ^ (uint)fVar15) &
                                   -(uint)(fRam0000000146b33f48 < fVar15) ^ (uint)fVar15) &
                                 uRam0000000146b34018));
    auVar12._12_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar16 - fVar6) ^ (uint)fVar16) &
                                   -(uint)(fRam0000000146b33f4c < fVar16) ^ (uint)fVar16) &
                                 uRam0000000146b3401c));
    iVar8 = movmskps(in_EAX,auVar12);
    if (iVar8 != 0) {
      if (param_3 == 0) {
        param_3 = *param_1;
        *param_1 = param_3 + 1;
      }
      iVar8 = (int)param_1[0x27];
      lVar10 = (longlong)iVar8;
      plVar1 = param_1 + 0x16;
      *(int *)(param_1 + 0x27) = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0x13c) < iVar8 + 1) {
        TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(plVar1,iVar8);
      }
      plVar9 = (longlong *)param_1[0x26];
      if ((longlong *)param_1[0x26] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      plVar9 = plVar9 + lVar10 * 4;
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar9[3] = 0;
      uVar7 = *(undefined8 *)(*param_2 + 8);
      plVar9 = (longlong *)param_1[0x26];
      if ((longlong *)param_1[0x26] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      puVar2 = (undefined8 *)((longlong)plVar9 + lVar10 * 0x20 + 0xc);
      *puVar2 = *(undefined8 *)*param_2;
      puVar2[1] = uVar7;
      *(undefined4 *)((longlong)plVar9 + lVar10 * 0x20 + 0x1c) = *(undefined4 *)(param_2[1] + 4);
      plVar9[lVar10 * 4] = param_3;
      return param_3;
    }
  }
  return 0;
}



// FUNCTION 142d85fe0 FUN_142d85fe0 body=481 status=ok
// SIG undefined FUN_142d85fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142d85fe0(longlong param_1,float *param_2,undefined4 param_3,char param_4,undefined1 param_5,
             undefined8 param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_EAX;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28;
  undefined2 local_27;
  undefined1 local_25;
  
  lVar9 = *(longlong *)(param_1 + 0x18);
  if ((lVar9 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x168);
    fVar14 = DAT_1468b5da8;
    uVar8 = DAT_1468b5da0;
    if (lVar1 != 0) {
      local_38 = *(float *)(lVar1 + 0x210);
      fStack_34 = *(float *)(lVar1 + 0x214);
      fStack_30 = *(float *)(lVar1 + 0x218);
      fStack_2c = *(float *)(lVar1 + 0x21c);
      auVar11._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_34);
      auVar11._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_38);
      auVar11._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_30);
      auVar11._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_2c);
      iVar6 = movmskps(in_EAX,auVar11);
      if (iVar6 != 0) {
        *(float *)(lVar1 + 0x250) = local_38;
        *(float *)(lVar1 + 0x254) = fStack_34;
        *(float *)(lVar1 + 600) = fStack_30;
        *(float *)(lVar1 + 0x25c) = fStack_2c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_38,&local_48);
        *(undefined8 *)(lVar1 + 0x260) = *puVar7;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
        lVar9 = *(longlong *)(param_1 + 0x18);
      }
      fVar14 = *(float *)(lVar1 + 0x268);
      uVar8 = *(undefined8 *)(lVar1 + 0x260);
    }
    fVar13 = *param_2 - (float)uVar8;
    fVar12 = param_2[1] - (float)((ulonglong)uVar8 >> 0x20);
    fVar2 = (float)DAT_146b33f50;
    fVar3 = DAT_146b33f50._4_4_;
    fVar4 = DAT_146b33f50._8_4_;
    fVar5 = DAT_146b33f50._12_4_;
    auVar10._4_4_ = fVar12;
    auVar10._0_4_ = fVar13;
    auVar10._8_4_ = param_2[2] - fVar14;
    auVar10._12_4_ = 0;
    auVar11 = divps(auVar10,_DAT_146b33f50);
    fVar13 = fVar13 - (float)(int)auVar11._0_4_ * fVar2;
    fVar12 = fVar12 - (float)(int)auVar11._4_4_ * fVar3;
    fVar14 = (param_2[2] - fVar14) - (float)(int)auVar11._8_4_ * fVar4;
    fVar15 = 0.0 - (float)(int)auVar11._12_4_ * fVar5;
    local_38 = (float)(((uint)(fVar13 + fVar2) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar2));
    fStack_34 = (float)(((uint)(fVar12 + fVar3) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                       (uint)(fVar12 + fVar3));
    fVar14 = (float)(((uint)(fVar14 + fVar4) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                    (uint)(fVar14 + fVar4));
    fVar12 = (float)(((uint)(fVar15 + fVar5) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar5));
    local_38 = (float)(((uint)(local_38 - fVar2) ^ (uint)local_38) &
                       -(uint)(_DAT_146b33f40 < local_38) ^ (uint)local_38);
    fStack_34 = (float)(((uint)(fStack_34 - fVar3) ^ (uint)fStack_34) &
                        -(uint)(fRam0000000146b33f44 < fStack_34) ^ (uint)fStack_34);
    uStack_40 = ((uint)(fVar14 - fVar4) ^ (uint)fVar14) & -(uint)(fRam0000000146b33f48 < fVar14) ^
                (uint)fVar14;
    uStack_3c = ((uint)(fVar12 - fVar5) ^ (uint)fVar12) & -(uint)(fRam0000000146b33f4c < fVar12) ^
                (uint)fVar12;
    _local_48 = CONCAT44(fStack_34,local_38);
    if ((lVar9 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      local_27 = 0;
      local_25 = 0;
      local_28 = param_5;
      fStack_30 = (float)uStack_40;
      if (param_4 != '\0') {
        fStack_30 = 0.0;
        local_38 = 0.0;
      }
      fStack_2c = (float)param_3;
      uVar8 = FUN_142d85e60(param_1,&local_38,param_6);
      return uVar8;
    }
  }
  return 0;
}



// FUNCTION 142d861d0 FUN_142d861d0 body=925 status=ok
// SIG undefined FUN_142d861d0(void)

float * FUN_142d861d0(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                     float param_5,longlong param_6,float *param_7)

{
  float fVar1;
  undefined8 uVar2;
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
  float local_b8;
  float fStack_b4;
  
  fVar12 = *(float *)(param_3 + 1);
  *(undefined8 *)param_1 = *param_3;
  uVar2 = *param_2;
  param_1[2] = fVar12;
  fVar12 = *(float *)(param_2 + 1);
  fVar7 = *(float *)(param_6 + 4) * 0.017453292;
  fVar4 = (float)((ulonglong)uVar2 >> 0x20) - fVar7;
  fVar5 = (float)(int)(fVar4 * 0.15915494) * 6.2831855;
  if (ABS(fVar4) < ABS(fVar5)) {
    fVar5 = fVar4;
  }
  fVar4 = fVar4 - fVar5;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 6.2831855;
  }
  if (3.1415927 < fVar4) {
    fVar4 = fVar4 - 6.2831855;
  }
  fVar6 = param_1[1] - fVar7;
  fVar5 = (float)(int)(fVar6 * 0.15915494) * 6.2831855;
  if (ABS(fVar6) < ABS(fVar5)) {
    fVar5 = fVar6;
  }
  fVar6 = fVar6 - fVar5;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + 6.2831855;
  }
  if (3.1415927 < fVar6) {
    fVar6 = fVar6 - 6.2831855;
  }
  fVar5 = param_7[2];
  fVar3 = *param_7;
  fVar1 = param_7[1];
  fVar10 = -fVar5;
  fVar8 = -fVar3;
  fVar9 = -fVar1;
  fVar11 = fVar10;
  if ((fVar10 <= fVar12) && (fVar11 = fVar5, fVar12 <= fVar5)) {
    fVar11 = fVar12;
  }
  fVar12 = fVar9;
  if ((fVar9 <= fVar4) && (fVar12 = fVar1, fVar4 <= fVar1)) {
    fVar12 = fVar4;
  }
  local_b8 = (float)uVar2;
  fVar5 = fVar8;
  if ((fVar8 <= local_b8) && (fVar5 = fVar3, local_b8 <= fVar3)) {
    fVar5 = local_b8;
  }
  fVar12 = fVar12 - fVar6;
  fVar11 = fVar11 - param_1[2];
  fVar4 = *(float *)(param_4 + 1);
  fVar5 = fVar5 - *param_1;
  fStack_b4 = (float)((ulonglong)*param_4 >> 0x20);
  if (1e-08 < ABS(fVar11)) {
    fVar3 = ABS(fVar12 / fVar11);
    if (1.0 <= fVar3) {
      if (1.0 < fVar3) {
        fVar4 = fVar4 / fVar3;
      }
    }
    else {
      fStack_b4 = fStack_b4 * fVar3;
    }
  }
  local_b8 = (float)*param_4;
  fVar4 = fVar4 * param_5;
  local_b8 = local_b8 * param_5;
  fStack_b4 = fStack_b4 * param_5;
  fVar3 = -fVar4;
  if ((-fVar4 <= fVar11) && (fVar3 = fVar4, fVar11 <= fVar4)) {
    fVar3 = fVar11;
  }
  fVar4 = -fStack_b4;
  if ((-fStack_b4 <= fVar12) && (fVar4 = fStack_b4, fVar12 <= fStack_b4)) {
    fVar4 = fVar12;
  }
  fVar12 = -local_b8;
  if ((-local_b8 <= fVar5) && (fVar12 = local_b8, fVar5 <= local_b8)) {
    fVar12 = fVar5;
  }
  *(ulonglong *)param_1 = CONCAT44(fVar4 + fVar6,*param_1 + fVar12);
  param_1[2] = param_1[2] + fVar3;
  fVar12 = param_1[2];
  if ((fVar10 <= fVar12) && (fVar10 = param_7[2], fVar12 <= param_7[2])) {
    fVar10 = fVar12;
  }
  fVar12 = param_1[1];
  if ((fVar9 <= fVar12) && (fVar9 = param_7[1], fVar12 <= param_7[1])) {
    fVar9 = fVar12;
  }
  fVar12 = *param_1;
  if ((fVar8 <= fVar12) && (fVar8 = *param_7, fVar12 <= *param_7)) {
    fVar8 = fVar12;
  }
  *(ulonglong *)param_1 = CONCAT44(fVar9,fVar8);
  param_1[2] = fVar10;
  fVar7 = fVar7 + param_1[1];
  fVar12 = (float)(int)(fVar7 * 0.15915494) * 6.2831855;
  if (ABS(fVar7) < ABS(fVar12)) {
    fVar12 = fVar7;
  }
  fVar7 = fVar7 - fVar12;
  if (fVar7 < 0.0) {
    fVar7 = fVar7 + 6.2831855;
  }
  param_1[1] = fVar7;
  return param_1;
}



// FUNCTION 142d86570 FUN_142d86570 body=631 status=ok
// SIG undefined FUN_142d86570(void)

float * FUN_142d86570(float *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                     float param_5,longlong param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_98;
  
  *(undefined8 *)param_1 = *param_3;
  uVar1 = *param_2;
  param_1[2] = *(float *)(param_3 + 1);
  fVar7 = *(float *)(param_6 + 4) * 0.017453292;
  fVar6 = (float)((ulonglong)uVar1 >> 0x20) - fVar7;
  fVar4 = (float)(int)(fVar6 * 0.15915494) * 6.2831855;
  if (ABS(fVar6) < ABS(fVar4)) {
    fVar4 = fVar6;
  }
  fVar6 = fVar6 - fVar4;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + 6.2831855;
  }
  if (3.1415927 < fVar6) {
    fVar6 = fVar6 - 6.2831855;
  }
  fVar5 = param_1[1] - fVar7;
  fVar4 = (float)(int)(fVar5 * 0.15915494) * 6.2831855;
  if (ABS(fVar5) < ABS(fVar4)) {
    fVar4 = fVar5;
  }
  fVar5 = fVar5 - fVar4;
  if (fVar5 < 0.0) {
    fVar5 = fVar5 + 6.2831855;
  }
  if (3.1415927 < fVar5) {
    fVar5 = fVar5 - 6.2831855;
  }
  if (3.1415927 < ABS(fVar6 - fVar5)) {
    if (fVar6 <= fVar5) {
      fVar6 = fVar6 + 6.2831855;
    }
    else {
      fVar5 = fVar5 + 6.2831855;
    }
  }
  fVar6 = fVar6 - fVar5;
  fVar2 = param_5 * param_4[2];
  fVar3 = *(float *)(param_2 + 1) - param_1[2];
  local_98 = (float)uVar1;
  fVar8 = param_5 * *param_4;
  local_98 = local_98 - *param_1;
  param_5 = param_5 * param_4[1];
  fVar4 = -fVar2;
  if ((-fVar2 <= fVar3) && (fVar4 = fVar3, fVar2 <= fVar3)) {
    fVar4 = fVar2;
  }
  fVar2 = -param_5;
  if ((-param_5 <= fVar6) && (fVar2 = fVar6, param_5 <= fVar6)) {
    fVar2 = param_5;
  }
  fVar6 = -fVar8;
  if ((-fVar8 <= local_98) && (fVar6 = local_98, fVar8 <= local_98)) {
    fVar6 = fVar8;
  }
  *(ulonglong *)param_1 = CONCAT44(fVar2 + fVar5,*param_1 + fVar6);
  param_1[2] = param_1[2] + fVar4;
  fVar7 = fVar7 + param_1[1];
  fVar4 = (float)(int)(fVar7 * 0.15915494) * 6.2831855;
  if (ABS(fVar7) < ABS(fVar4)) {
    fVar4 = fVar7;
  }
  fVar7 = fVar7 - fVar4;
  if (fVar7 < 0.0) {
    fVar7 = fVar7 + 6.2831855;
  }
  param_1[1] = fVar7;
  return param_1;
}



// FUNCTION 142d867f0 FUN_142d867f0 body=117 status=ok
// SIG undefined FUN_142d867f0(void)

undefined1 FUN_142d867f0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_1 + 0x148))();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 400), lVar3 != 0)) {
      lVar4 = FUN_142e4e4a0();
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
        cVar2 = FUN_142d6fcd0(lVar3);
        if (cVar2 == '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 142d86870 FUN_142d86870 body=99 status=ok
// SIG undefined FUN_142d86870(void)

undefined1 FUN_142d86870(longlong param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_142c98860(param_1 + 0x70);
  if (fVar1 <= (float)param_3) {
    fVar1 = (float)FUN_142c98860(param_1 + 0xa8,param_2);
    if ((float)param_3 <= fVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d868e0 FUN_142d868e0 body=167 status=ok
// SIG undefined FUN_142d868e0(void)

undefined8 FUN_142d868e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_10 = plVar4;
  plVar6 = (longlong *)FUN_142d76f60(param_1 + 0x18,&local_18);
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
  if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142d86990 IsValid body=9 status=ok
// SIG undefined IsValid(void)

bool FSimpleFirstPartyCrossPlatformAccountId::IsValid(longlong param_1)

{
  return *(longlong *)(param_1 + 0x28) != 0;
}



// FUNCTION 142d869a0 FUN_142d869a0 body=53 status=ok
// SIG undefined FUN_142d869a0(void)

undefined8 FUN_142d869a0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x678))();
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d869e0 FUN_142d869e0 body=108 status=ok
// SIG undefined FUN_142d869e0(void)

undefined8 FUN_142d869e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x738);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x740) * 8;
  while( true ) {
    if (lVar3 == lVar1) {
      return 0;
    }
    cVar2 = FUN_14058c1e0(lVar3,param_2);
    if (cVar2 != '\0') break;
    lVar3 = lVar3 + 8;
  }
  return 1;
}



// FUNCTION 142d86a70 FUN_142d86a70 body=143 status=ok
// SIG undefined FUN_142d86a70(void)

ulonglong FUN_142d86a70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)0x0;
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x20);
  }
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0xa8) * 4;
  for (; plVar3 != plVar2; plVar3 = plVar3 + 4) {
    if (*plVar3 == param_2) goto LAB_142d86af7;
  }
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (*(longlong **)(param_1 + 0x130) == (longlong *)0x0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
  }
  plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x138) * 4;
  while( true ) {
    if (plVar1 == plVar3) {
      return (ulonglong)plVar1 & 0xffffffffffffff00;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 4;
  }
LAB_142d86af7:
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}



// FUNCTION 142d86b00 FUN_142d86b00 body=379 status=ok
// SIG undefined FUN_142d86b00(void)

bool FUN_142d86b00(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 local_18 [16];
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return true;
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 == 0) {
    lVar6 = 0;
    if (((*(int *)(param_1 + 0x4c) != 0 || *(int *)(param_1 + 0x48) != 0) ||
        *(int *)(param_1 + 0x44) != 0) || *(int *)(param_1 + 0x40) != 0) {
      return true;
    }
  }
  else {
    if (((*(int *)(lVar6 + 0x74) == 0 && *(int *)(lVar6 + 0x70) == 0) && *(int *)(lVar6 + 0x6c) == 0
        ) && *(int *)(lVar6 + 0x68) == 0) {
      puVar4 = (undefined8 *)FGuid::NewGuid(local_18);
      uVar2 = puVar4[1];
      *(undefined8 *)(lVar6 + 0x68) = *puVar4;
      *(undefined8 *)(lVar6 + 0x70) = uVar2;
      UObjectBaseUtility::MarkPackageDirty(lVar6);
    }
    auVar1 = *(undefined1 (*) [16])(lVar6 + 0x68);
    if (((auVar1._12_4_ != *(int *)(param_1 + 0x4c) || auVar1._4_4_ != *(int *)(param_1 + 0x44)) ||
        *(int *)(param_1 + 0x48) != auVar1._8_4_) || *(int *)(param_1 + 0x40) != auVar1._0_4_) {
      return true;
    }
    lVar6 = *(longlong *)(param_1 + 0x38);
    if (*(longlong *)(lVar6 + 0x38) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)(*(longlong *)(lVar6 + 0x38) + 0x48) - 1;
    }
    if (uVar5 != *(byte *)(param_1 + 0x60)) {
      return true;
    }
  }
  if (((lVar6 == 0) || (*(char *)(lVar6 + 0x40) != '\x02')) && (*(longlong *)(param_1 + 0x30) != 0))
  {
    cVar3 = FUN_142d86b00();
    if ((cVar3 == '\0') &&
       (lVar6 = *(longlong *)(param_1 + 0x30),
       ((*(int *)(lVar6 + 0x84) == *(int *)(param_1 + 0x94) &&
        *(int *)(lVar6 + 0x80) == *(int *)(param_1 + 0x90)) &&
       *(int *)(lVar6 + 0x7c) == *(int *)(param_1 + 0x8c)) &&
       *(int *)(param_1 + 0x88) == *(int *)(lVar6 + 0x78))) {
      return false;
    }
    return true;
  }
  return ((*(int *)(param_1 + 0x94) != 0 || *(int *)(param_1 + 0x90) != 0) ||
         *(int *)(param_1 + 0x8c) != 0) || *(int *)(param_1 + 0x88) != 0;
}



// FUNCTION 142d86c80 FUN_142d86c80 body=287 status=ok
// SIG undefined FUN_142d86c80(void)

longlong FUN_142d86c80(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0xf0);
  plVar1 = plVar5 + *(int *)(param_1 + 0xf8);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if (*plVar5 != 0) {
      plVar2 = (longlong *)*param_2;
      for (plVar3 = plVar2; plVar3 != plVar2 + (int)param_2[1]; plVar3 = plVar3 + 1) {
        if (*plVar3 == *plVar5) {
          if ((int)((longlong)plVar3 - (longlong)plVar2 >> 3) != -1) {
            return (ulonglong)(uint7)(int7)(int3)((uint)(int)param_2[1] >> 8) << 8;
          }
          break;
        }
      }
    }
  }
  lVar4 = 1;
  if ((param_3 == '\0') && (0 < *(int *)(param_1 + 0xe8))) {
    plVar5 = *(longlong **)(param_1 + 0xe0);
    lVar4 = 0;
    plVar1 = plVar5 + *(int *)(param_1 + 0xe8);
    if (plVar5 != plVar1) {
      while (*plVar5 != 0) {
        plVar2 = (longlong *)*param_2;
        for (plVar3 = plVar2; plVar3 != plVar2 + (int)param_2[1]; plVar3 = plVar3 + 1) {
          if (*plVar3 == *plVar5) {
            if ((int)((longlong)plVar3 - (longlong)plVar2 >> 3) != -1) goto LAB_142d86d89;
            break;
          }
        }
        plVar5 = plVar5 + 1;
        if (plVar5 == plVar1) {
          return 0;
        }
      }
LAB_142d86d89:
      lVar4 = 1;
    }
  }
  return lVar4;
}



// FUNCTION 142d86da0 FUN_142d86da0 body=32 status=ok
// SIG undefined FUN_142d86da0(void)

bool FUN_142d86da0(longlong param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_14046e5c0();
    return 1 < iVar1;
  }
  return false;
}



// FUNCTION 142d86dc0 FUN_142d86dc0 body=323 status=ok
// SIG undefined FUN_142d86dc0(void)

undefined8
FUN_142d86dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5,longlong param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  
  lVar1 = operator_new(0x150);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,param_6);
    uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_4);
    uVar2 = FUN_142d799e0(lVar1,param_2,param_3,uVar3,param_5,uVar2,param_7);
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_4 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_6 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_6 + 0x30);
    if (*(longlong **)(param_6 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_6 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_6 + 0x30) != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142d86f10 FUN_142d86f10 body=10 status=ok
// SIG undefined FUN_142d86f10(void)

void FUN_142d86f10(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d86f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa10))();
  return;
}



// FUNCTION 142d86f20 FUN_142d86f20 body=581 status=ok
// SIG undefined FUN_142d86f20(void)

void FUN_142d86f20(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  int iVar10;
  undefined8 local_res8;
  int local_b8;
  uint uStack_b4;
  undefined *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  code *local_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined8 local_38;
  undefined4 local_28;
  
  uStack_b4 = 1;
  puStack_b0 = &DAT_1466ad6b0;
  local_b8 = 0;
  iStack_a4 = 0;
  iStack_a0 = 0;
  iVar10 = (int)DAT_1466ad6c8;
  if (iVar10 != 0) {
    puVar9 = DAT_1466ad6c0;
    if (DAT_1466ad6c0 == (uint *)0x0) {
      puVar9 = (uint *)&DAT_1466ad6b0;
    }
    uVar1 = *puVar9;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar1 == 0) {
      lVar6 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar4 = local_b8 + 1;
      bVar2 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar4;
      if (bVar2) goto LAB_142d86fdf;
      uVar1 = puVar9[lVar6 + 1];
    }
    uStack_b4 = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_a4 = (iStack_a0 - iVar4) + 0x1f;
    if (iVar10 < iStack_a4) {
LAB_142d86fdf:
      iStack_a4 = iVar10;
    }
  }
  local_a8 = 0xffffffff;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_68 = (code *)&DAT_1466ad6a0;
  puStack_58 = &DAT_1466ad6b0;
  uStack_50 = 0xffffffff;
  iStack_4c = iStack_a4;
  iStack_48 = iStack_a0;
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_a4;
  local_98 = &DAT_1466ad6a0;
  local_78 = iStack_a0;
  local_88 = &DAT_1466ad6b0;
  local_res8 = param_1;
  uStack_60 = uStack_90;
  if (iStack_a4 < iVar10) {
    do {
      lVar6 = (longlong)iStack_7c * 0x40 + *local_98;
      if (*(int *)(lVar6 + 0x10) == 3) {
        local_38 = 0;
        local_28 = 0;
        if (DAT_146b340e0 == 0) {
LAB_142d870bc:
          local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar5 = DAT_146b340d0;
          if (DAT_146b340d0 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)&DAT_146b340b0;
          }
          if (puVar5 == (undefined8 *)0x0) goto LAB_142d870bc;
          plVar3 = (longlong *)(**(code **)*puVar5)(puVar5,&puStack_58);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_68 = DAT_146b340a0;
        }
        puVar5 = (undefined8 *)FName::ToString(&local_res8,&local_b8);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar5;
        }
        if (*(int *)(lVar6 + 0x30) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(lVar6 + 0x28);
        }
        FUN_142d8ae80(0,puVar7,puVar8,0,&local_68,0);
        if (CONCAT44(uStack_b4,local_b8) != 0) {
          FMemory::Free();
        }
      }
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < *(int *)(local_88 + 0x18));
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1466ad6f0);
  return;
}



// FUNCTION 142d87190 FUN_142d87190 body=605 status=ok
// SIG undefined FUN_142d87190(void)

void FUN_142d87190(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  int iVar10;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined4 local_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined2 *local_70;
  int local_68;
  code *local_58;
  int iStack_50;
  uint uStack_4c;
  undefined *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_1 != 0) {
    FUN_1428cc8c0(param_1,&local_70);
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    uStack_80 = 0;
    iVar10 = (int)DAT_1466ad6c8;
    if (iVar10 != 0) {
      puVar9 = DAT_1466ad6c0;
      if (DAT_1466ad6c0 == (uint *)0x0) {
        puVar9 = (uint *)&DAT_1466ad6b0;
      }
      uVar1 = *puVar9;
      uStack_80 = 0;
      local_98 = 0;
      while (uVar1 == 0) {
        lVar6 = (longlong)local_98;
        uStack_80 = uStack_80 + 0x20;
        iVar4 = local_98 + 1;
        bVar2 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar4;
        if (bVar2) goto LAB_142d8726f;
        uVar1 = puVar9[lVar6 + 1];
      }
      uStack_94 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_84 = (uStack_80 - iVar4) + 0x1f;
      if (iVar10 < iStack_84) {
LAB_142d8726f:
        iStack_84 = iVar10;
      }
    }
    iVar4 = iStack_84;
    local_58 = (code *)&DAT_1466ad6a0;
    iStack_50 = local_98;
    uStack_4c = uStack_94;
    puStack_48 = &DAT_1466ad6b0;
    uStack_40 = 0xffffffff;
    iStack_3c = iStack_84;
    iStack_38 = uStack_80;
    uStack_34 = iStack_7c;
    iStack_90 = local_98;
    uStack_8c = uStack_94;
    local_78 = uStack_80;
    uStack_74 = iStack_7c;
    local_88 = 0x466ad6b0;
    iStack_84 = 1;
    uStack_80 = 0xffffffff;
    iStack_7c = iVar4;
    if (iVar4 < iVar10) {
      do {
        lVar6 = (longlong)iStack_7c * 0x40 + DAT_1466ad6a0;
        if (*(int *)(lVar6 + 0x10) == 2) {
          local_28 = 0;
          local_18 = 0;
          if (DAT_146b340e0 == 0) {
LAB_142d8734c:
            local_58 = AK::MemoryMgr::StartProfileThreadUsage;
          }
          else {
            puVar5 = DAT_146b340d0;
            if (DAT_146b340d0 == (undefined8 *)0x0) {
              puVar5 = (undefined8 *)&DAT_146b340b0;
            }
            if (puVar5 == (undefined8 *)0x0) goto LAB_142d8734c;
            plVar3 = (longlong *)(**(code **)*puVar5)(puVar5,&puStack_48);
            (**(code **)(*plVar3 + 8))(plVar3);
            local_58 = DAT_146b340a0;
          }
          puVar8 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar8 = local_70;
          }
          if (*(int *)(lVar6 + 0x30) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = *(undefined2 **)(lVar6 + 0x28);
          }
          FUN_142d8ae80(0,puVar7,puVar8,0,&local_58,0);
        }
        uStack_80 = uStack_80 & ~uStack_8c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
      } while (iStack_7c < *(int *)(CONCAT44(iStack_84,local_88) + 0x18));
    }
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1466ad6f0);
    if (local_70 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d873f0 FUN_142d873f0 body=8 status=ok
// SIG undefined FUN_142d873f0(void)

undefined * FUN_142d873f0(void)

{
  return &DAT_1466ad6f0;
}



// FUNCTION 142d87400 FUN_142d87400 body=1559 status=ok
// SIG undefined FUN_142d87400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d87400(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  int local_res8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int iStack_94;
  uint uStack_90;
  int iStack_8c;
  uint local_88;
  int iStack_84;
  code *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined *puStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  undefined8 local_48;
  undefined4 local_38;
  
  lVar11 = *param_1;
  bVar15 = DAT_1466ad6a8 - _DAT_1466ad6d4 != (int)param_1[1];
  lVar12 = lVar11 + (longlong)(int)param_1[1] * 0x28;
  uVar10 = 0;
  for (; lVar11 != lVar12; lVar11 = lVar11 + 0x28) {
    TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1466ad6a0,local_res8,lVar11 + 8);
    uVar7 = uVar10;
    if (local_res8[0] != -1) {
      uVar7 = (longlong)local_res8[0] * 0x40 + DAT_1466ad6a0;
    }
    uVar4 = uVar7 + 0x10;
    if (uVar7 == 0) {
      uVar4 = uVar10;
    }
    if ((uVar4 == 0) || (cVar2 = FUN_142d7ad80(uVar4,lVar11), cVar2 == '\0')) {
      bVar15 = true;
    }
  }
  if (bVar15) {
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 1;
    iStack_94 = 0;
    uStack_90 = 0;
    iVar14 = (int)DAT_1466ad6c8;
    if (iVar14 != 0) {
      puVar13 = DAT_1466ad6c0;
      if (DAT_1466ad6c0 == (uint *)0x0) {
        puVar13 = (uint *)&DAT_1466ad6b0;
      }
      uVar1 = *puVar13;
      uVar7 = uVar10;
      uVar4 = uVar10;
      while (uVar1 == 0) {
        iVar3 = (int)uVar7;
        uStack_90 = (int)uVar4 + 0x20;
        uVar4 = (ulonglong)uStack_90;
        local_a8._0_4_ = iVar3 + 1;
        uVar7 = (ulonglong)(uint)local_a8;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_142d8756d;
        uVar1 = puVar13[(longlong)iVar3 + 1];
      }
      local_a8._4_4_ = -uVar1 & uVar1;
      iVar3 = 0x1f;
      if (local_a8._4_4_ != 0) {
        for (; local_a8._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (local_a8._4_4_ == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      iStack_94 = (uStack_90 - iVar3) + 0x1f;
      if (iVar14 < iStack_94) {
LAB_142d8756d:
        iStack_94 = iVar14;
      }
    }
    iStack_8c = iStack_94;
    uStack_a0._4_4_ = local_a8._4_4_;
    uStack_a0._0_4_ = (uint)local_a8;
    local_78 = (code *)&DAT_1466ad6a0;
    uStack_60 = 0xffffffff;
    iStack_5c = iStack_94;
    uStack_58 = uStack_90;
    uStack_70 = (uint)local_a8;
    uStack_6c = local_a8._4_4_;
    puStack_68 = &DAT_1466ad6b0;
    local_a8 = &DAT_1466ad6a0;
    local_88 = uStack_90;
    local_98 = 0x466ad6b0;
    iStack_94 = 1;
    uStack_90 = 0xffffffff;
    if (iStack_8c < iVar14) {
      do {
        lVar12 = (longlong)iStack_8c * 0x40 + *local_a8;
        if (*(int *)(lVar12 + 0x10) == 1) {
          local_48 = 0;
          local_38 = 0;
          if (DAT_146b340e0 == 0) {
LAB_142d87628:
            local_78 = AK::MemoryMgr::StartProfileThreadUsage;
          }
          else {
            puVar8 = DAT_146b340d0;
            if (DAT_146b340d0 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)&DAT_146b340b0;
            }
            if (puVar8 == (undefined8 *)0x0) goto LAB_142d87628;
            plVar5 = (longlong *)(**(code **)*puVar8)(puVar8,&puStack_68);
            (**(code **)(*plVar5 + 8))(plVar5);
            local_78 = DAT_146b340a0;
          }
          if (*(int *)(lVar12 + 0x30) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = *(undefined2 **)(lVar12 + 0x28);
          }
          FUN_142d8ae80(1,puVar9,0,0,&local_78,0);
        }
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < *(int *)(CONCAT44(iStack_94,local_98) + 0x18));
    }
    FUN_142d7f660(&DAT_1466ad6a0,(int)param_1[1]);
    lVar11 = *param_1;
    lVar12 = lVar11 + (longlong)(int)param_1[1] * 0x28;
    iStack_84 = iStack_8c;
    for (; lVar11 != lVar12; lVar11 = lVar11 + 0x28) {
      local_a8 = (longlong *)(lVar11 + 8);
      uStack_a0 = lVar11;
      iStack_8c = iStack_84;
      FUN_142d76cb0(&DAT_1466ad6a0,local_res8,&local_a8,0);
      iStack_84 = iStack_8c;
    }
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 1;
    iStack_94 = 0;
    uStack_90 = 0;
    iVar14 = (int)DAT_1466ad6c8;
    if (iVar14 != 0) {
      puVar13 = DAT_1466ad6c0;
      if (DAT_1466ad6c0 == (uint *)0x0) {
        puVar13 = (uint *)&DAT_1466ad6b0;
      }
      uVar1 = *puVar13;
      uVar7 = uVar10;
      uVar4 = uVar10;
      while (uVar1 == 0) {
        iVar3 = (int)uVar7;
        uStack_90 = (int)uVar4 + 0x20;
        uVar4 = (ulonglong)uStack_90;
        local_a8._0_4_ = iVar3 + 1;
        uVar7 = (ulonglong)(uint)local_a8;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_142d8778c;
        uVar1 = puVar13[(longlong)iVar3 + 1];
      }
      local_a8._4_4_ = -uVar1 & uVar1;
      iVar3 = 0x1f;
      if (local_a8._4_4_ != 0) {
        for (; local_a8._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (local_a8._4_4_ == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      iStack_94 = (uStack_90 - iVar3) + 0x1f;
      if (iVar14 < iStack_94) {
LAB_142d8778c:
        iStack_94 = iVar14;
      }
    }
    iStack_8c = iStack_94;
    uStack_a0._4_4_ = local_a8._4_4_;
    uStack_a0._0_4_ = (uint)local_a8;
    local_78 = (code *)&DAT_1466ad6a0;
    uStack_60 = 0xffffffff;
    iStack_5c = iStack_94;
    uStack_58 = uStack_90;
    uStack_70 = (uint)local_a8;
    uStack_6c = local_a8._4_4_;
    puStack_68 = &DAT_1466ad6b0;
    local_a8 = &DAT_1466ad6a0;
    local_88 = uStack_90;
    local_98 = 0x466ad6b0;
    iStack_94 = 1;
    uStack_90 = 0xffffffff;
    iStack_54 = iStack_84;
    if (iStack_8c < iVar14) {
      do {
        lVar12 = (longlong)iStack_8c * 0x40 + *local_a8;
        if (*(int *)(lVar12 + 0x10) == 1) {
          local_48 = 0;
          local_38 = 0;
          if (DAT_146b340e0 == 0) {
LAB_142d87838:
            local_78 = AK::MemoryMgr::StartProfileThreadUsage;
          }
          else {
            puVar8 = DAT_146b340d0;
            if (DAT_146b340d0 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)&DAT_146b340b0;
            }
            if (puVar8 == (undefined8 *)0x0) goto LAB_142d87838;
            plVar5 = (longlong *)(**(code **)*puVar8)(puVar8,&puStack_68);
            (**(code **)(*plVar5 + 8))(plVar5);
            local_78 = DAT_146b340a0;
          }
          if (*(int *)(lVar12 + 0x30) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = *(undefined2 **)(lVar12 + 0x28);
          }
          FUN_142d8ae80(0,puVar9,0,0,&local_78,0);
        }
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < *(int *)(CONCAT44(iStack_94,local_98) + 0x18));
    }
    uVar7 = DAT_146b34038;
    if ((DAT_146b34038 == 0) &&
       (plVar5 = (longlong *)FMemory::Realloc(0,0x20), uVar7 = uVar10, plVar5 != (longlong *)0x0)) {
      *plVar5 = (longlong)&PTR_GetPoolName_143f4c9a8;
      plVar5[1] = (longlong)FUN_142d87190;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar5[3] = lVar12;
      *plVar5 = (longlong)&PTR_GetPoolName_143f4c9f0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
      puVar6 = (ulonglong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar14 = DAT_1464b57d8;
      lVar12 = (longlong)DAT_1464b57d8;
      uVar7 = *puVar6;
      DAT_1464b57d8 = DAT_1464b57d8 + 1;
      if (DAT_1464b57dc < DAT_1464b57d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar14);
      }
      puVar8 = (undefined8 *)(lVar12 * 0x10 + DAT_1464b57d0);
      *puVar8 = plVar5;
      *(undefined4 *)(puVar8 + 1) = 2;
    }
    DAT_146b34038 = uVar7;
    uVar7 = DAT_146b34070;
    if ((DAT_146b34070 == 0) &&
       (plVar5 = (longlong *)FMemory::Realloc(0,0x20), uVar7 = uVar10, plVar5 != (longlong *)0x0)) {
      *plVar5 = (longlong)&PTR_GetPoolName_143f4c9a8;
      plVar5[1] = (longlong)FUN_142d87ef0;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar5[3] = lVar12;
      *plVar5 = (longlong)&PTR_GetPoolName_143f4c9f0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535868,1);
      puVar6 = (ulonglong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar14 = DAT_146535870;
      lVar12 = (longlong)DAT_146535870;
      uVar7 = *puVar6;
      DAT_146535870 = DAT_146535870 + 1;
      if (DAT_146535874 < DAT_146535870) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535868,iVar14);
      }
      puVar8 = (undefined8 *)(lVar12 * 0x10 + DAT_146535868);
      *puVar8 = plVar5;
      *(undefined4 *)(puVar8 + 1) = 2;
    }
    DAT_146b34070 = uVar7;
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1466ad6f0);
  }
  return;
}



// FUNCTION 142d87a30 HandleOnLoadoutChangedChanged body=38 status=ok
// SIG undefined HandleOnLoadoutChangedChanged(void)

void URefinementWidget::HandleOnLoadoutChangedChanged(undefined8 param_1,longlong *param_2)

{
  FUN_142d7e4b0();
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142d87a60 FUN_142d87a60 body=51 status=ok
// SIG undefined FUN_142d87a60(void)

void FUN_142d87a60(undefined8 param_1)

{
  int iVar1;
  
  FUN_1425ed1d0();
  iVar1 = FUN_142235230(param_1);
  if (iVar1 != 1) {
    FUN_142227350(param_1,0,1);
    return;
  }
  return;
}



// FUNCTION 142d87b10 FUN_142d87b10 body=127 status=ok
// SIG undefined FUN_142d87b10(void)

void FUN_142d87b10(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4e8);
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x4f0) * 2;
    for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      puVar2 = (undefined4 *)FLinearColor::FLinearColor(local_18,puVar3 + 1);
      local_28 = *puVar2;
      uStack_24 = puVar2[1];
      uStack_20 = puVar2[2];
      uStack_1c = puVar2[3];
      FUN_14260ee50(lVar1,*puVar3,&local_28);
    }
  }
  return;
}



// FUNCTION 142d87b90 FUN_142d87b90 body=105 status=ok
// SIG undefined FUN_142d87b90(void)

void FUN_142d87b90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0x4d0) * 2;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
      FUN_14260f0c0(lVar1,*puVar2,*(undefined4 *)(puVar2 + 1));
    }
  }
  return;
}



// FUNCTION 142d87c00 FUN_142d87c00 body=131 status=ok
// SIG undefined FUN_142d87c00(void)

void FUN_142d87c00(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4d8);
    puVar1 = puVar3 + (longlong)*(int *)(param_1 + 0x4e0) * 3;
    if (puVar3 != puVar1) {
      puVar4 = puVar3 + 1;
      do {
        local_18 = *puVar4;
        local_10 = *(undefined4 *)(puVar4 + 1);
        FUN_142610200(lVar2,*puVar3,&local_18);
        puVar3 = puVar3 + 3;
        puVar4 = puVar4 + 3;
      } while (puVar3 != puVar1);
    }
  }
  return;
}



// FUNCTION 142d87cb0 FUN_142d87cb0 body=536 status=ok
// SIG undefined FUN_142d87cb0(void)

void FUN_142d87cb0(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined4 local_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  code *local_68;
  int iStack_60;
  uint uStack_5c;
  undefined *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined8 local_38;
  undefined4 local_28;
  
  local_98 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  uStack_80 = 0;
  iVar9 = (int)DAT_1466ad6c8;
  if (iVar9 != 0) {
    puVar8 = DAT_1466ad6c0;
    if (DAT_1466ad6c0 == (uint *)0x0) {
      puVar8 = (uint *)&DAT_1466ad6b0;
    }
    uVar1 = *puVar8;
    while (uVar1 == 0) {
      lVar4 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar2 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar2) goto LAB_142d87d71;
      uVar1 = puVar8[lVar4 + 1];
    }
    uStack_94 = -uVar1 & uVar1;
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
    iStack_84 = (uStack_80 - iVar7) + 0x1f;
    if (iVar9 < iStack_84) {
LAB_142d87d71:
      iStack_84 = iVar9;
    }
  }
  iStack_7c = iStack_84;
  local_68 = (code *)&DAT_1466ad6a0;
  iStack_60 = local_98;
  uStack_5c = uStack_94;
  puStack_58 = &DAT_1466ad6b0;
  uStack_50 = 0xffffffff;
  iStack_4c = iStack_84;
  iStack_48 = uStack_80;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78 = uStack_80;
  local_88 = 0x466ad6b0;
  iStack_84 = 1;
  uStack_80 = 0xffffffff;
  if (iStack_7c < iVar9) {
    do {
      lVar4 = (longlong)iStack_7c * 0x40 + DAT_1466ad6a0;
      if (*(int *)(lVar4 + 0x10) == 4) {
        local_38 = 0;
        local_28 = 0;
        if (DAT_146b340e0 == 0) {
LAB_142d87e48:
          local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar5 = DAT_146b340d0;
          if (DAT_146b340d0 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)&DAT_146b340b0;
          }
          if (puVar5 == (undefined8 *)0x0) goto LAB_142d87e48;
          plVar3 = (longlong *)(**(code **)*puVar5)(puVar5,&puStack_58);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_68 = DAT_146b340a0;
        }
        if (*(int *)(lVar4 + 0x30) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar4 + 0x28);
        }
        FUN_142d8ae80(0,puVar6,0,0,&local_68,param_1);
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < *(int *)(CONCAT44(iStack_84,local_88) + 0x18));
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1466ad6f0);
  return;
}



// FUNCTION 142d87ef0 FUN_142d87ef0 body=605 status=ok
// SIG undefined FUN_142d87ef0(void)

void FUN_142d87ef0(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  int iVar10;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined4 local_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined2 *local_70;
  int local_68;
  code *local_58;
  int iStack_50;
  uint uStack_4c;
  undefined *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_1 != 0) {
    FUN_1428cc8c0(param_1,&local_70);
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    uStack_80 = 0;
    iVar10 = (int)DAT_1466ad6c8;
    if (iVar10 != 0) {
      puVar9 = DAT_1466ad6c0;
      if (DAT_1466ad6c0 == (uint *)0x0) {
        puVar9 = (uint *)&DAT_1466ad6b0;
      }
      uVar1 = *puVar9;
      uStack_80 = 0;
      local_98 = 0;
      while (uVar1 == 0) {
        lVar6 = (longlong)local_98;
        uStack_80 = uStack_80 + 0x20;
        iVar4 = local_98 + 1;
        bVar2 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar4;
        if (bVar2) goto LAB_142d87fcf;
        uVar1 = puVar9[lVar6 + 1];
      }
      uStack_94 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_84 = (uStack_80 - iVar4) + 0x1f;
      if (iVar10 < iStack_84) {
LAB_142d87fcf:
        iStack_84 = iVar10;
      }
    }
    iVar4 = iStack_84;
    local_58 = (code *)&DAT_1466ad6a0;
    iStack_50 = local_98;
    uStack_4c = uStack_94;
    puStack_48 = &DAT_1466ad6b0;
    uStack_40 = 0xffffffff;
    iStack_3c = iStack_84;
    iStack_38 = uStack_80;
    uStack_34 = iStack_7c;
    iStack_90 = local_98;
    uStack_8c = uStack_94;
    local_78 = uStack_80;
    uStack_74 = iStack_7c;
    local_88 = 0x466ad6b0;
    iStack_84 = 1;
    uStack_80 = 0xffffffff;
    iStack_7c = iVar4;
    if (iVar4 < iVar10) {
      do {
        lVar6 = (longlong)iStack_7c * 0x40 + DAT_1466ad6a0;
        if (*(int *)(lVar6 + 0x10) == 7) {
          local_28 = 0;
          local_18 = 0;
          if (DAT_146b340e0 == 0) {
LAB_142d880ac:
            local_58 = AK::MemoryMgr::StartProfileThreadUsage;
          }
          else {
            puVar5 = DAT_146b340d0;
            if (DAT_146b340d0 == (undefined8 *)0x0) {
              puVar5 = (undefined8 *)&DAT_146b340b0;
            }
            if (puVar5 == (undefined8 *)0x0) goto LAB_142d880ac;
            plVar3 = (longlong *)(**(code **)*puVar5)(puVar5,&puStack_48);
            (**(code **)(*plVar3 + 8))(plVar3);
            local_58 = DAT_146b340a0;
          }
          puVar8 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar8 = local_70;
          }
          if (*(int *)(lVar6 + 0x30) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = *(undefined2 **)(lVar6 + 0x28);
          }
          FUN_142d8ae80(0,puVar7,puVar8,0,&local_58,0);
        }
        uStack_80 = uStack_80 & ~uStack_8c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
      } while (iStack_7c < *(int *)(CONCAT44(iStack_84,local_88) + 0x18));
    }
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1466ad6f0);
    if (local_70 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d88150 FUN_142d88150 body=4 status=ok
// SIG undefined FUN_142d88150(void)

void FUN_142d88150(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



// FUNCTION 142d88160 FUN_142d88160 body=34 status=ok
// SIG undefined FUN_142d88160(void)

void FUN_142d88160(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x28) = param_2[4];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = param_2[6];
  return;
}



// FUNCTION 142d88190 FUN_142d88190 body=119 status=ok
// SIG undefined FUN_142d88190(void)

void FUN_142d88190(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar4 = *(undefined4 **)(param_1 + 0x38);
  puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0x40) * 2;
  for (; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    local_res8 = *puVar4;
    local_resc = puVar4[1];
    cVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(&local_res8);
      cVar2 = FUN_142aaac50(uVar3);
      if (cVar2 != '\0') {
        uVar3 = FWeakObjectPtr::Get(&local_res8);
        FUN_142aab510(uVar3);
      }
    }
  }
  return;
}



// FUNCTION 142d88210 FUN_142d88210 body=275 status=ok
// SIG undefined FUN_142d88210(void)

void FUN_142d88210(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_28;
  longlong *local_20;
  
  local_28 = param_1[0xc];
  local_20 = (longlong *)param_1[0xd];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
  bVar6 = false;
  iVar9 = *(int *)((longlong)param_1 + 0x9c);
  iVar8 = (int)param_1[0x12] + -1;
  lVar10 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar11 = lVar10 << 4;
    bVar6 = false;
    do {
      lVar4 = param_1[0x11];
      if ((*(int *)(lVar11 + 8 + lVar4) == 0) ||
         (plVar5 = *(longlong **)(lVar11 + lVar4), plVar5 == (longlong *)0x0)) {
LAB_142d88298:
        bVar6 = true;
      }
      else {
        cVar7 = (**(code **)(*plVar5 + 0x40))(plVar5,&local_28,0,uVar3);
        if (cVar7 == '\0') goto LAB_142d88298;
      }
      lVar11 = lVar11 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
    iVar9 = *(int *)((longlong)param_1 + 0x9c);
  }
  *(int *)((longlong)param_1 + 0x9c) = iVar9 + -1;
  if (bVar6) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x11,0);
  }
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  (**(code **)(*param_1 + 0x48))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142d8831f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 142d88390 FUN_142d88390 body=31 status=ok
// SIG undefined FUN_142d88390(void)

void FUN_142d88390(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x710,local_res8);
  return;
}



// FUNCTION 142d883b0 FUN_142d883b0 body=31 status=ok
// SIG undefined FUN_142d883b0(void)

void FUN_142d883b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x720,local_res8);
  return;
}



// FUNCTION 142d883d0 FUN_142d883d0 body=189 status=ok
// SIG undefined FUN_142d883d0(void)

void FUN_142d883d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x1400) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) goto LAB_142d88429;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = UWidget::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + 0x30);
    for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (lVar5 != 0) {
          if (lVar5 == 0) goto LAB_142d88466;
          plVar4 = (longlong *)UWidget::GetPrivateStaticClass();
          plVar7 = *(longlong **)(param_1 + 0x30);
          plVar2 = plVar7;
          goto joined_r0x000142d88456;
        }
        break;
      }
    }
  }
  uVar6 = 0;
  goto LAB_142d88420;
joined_r0x000142d88456:
  if (plVar2 == (longlong *)0x0) goto LAB_142d88466;
  if (plVar2 == plVar4) goto LAB_142d88468;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000142d88456;
LAB_142d88466:
  plVar7 = (longlong *)0x0;
LAB_142d88468:
  lVar5 = plVar7[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar5 = plVar7[0x1f];
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x30);
LAB_142d88420:
  *(undefined8 *)(param_1 + 0x38) = uVar6;
LAB_142d88429:
  FUN_142d95090(param_1);
  return;
}



// FUNCTION 142d88490 FUN_142d88490 body=922 status=ok
// SIG undefined FUN_142d88490(void)

void FUN_142d88490(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res8;
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined8 *local_18;
  undefined4 uStack_10;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x198);
    lVar8 = (longlong)*(int *)(param_1 + 0x1a0) * 0x20 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x20) {
      if (*(int *)(lVar7 + 0x10) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(lVar7 + 8);
      }
      puVar1 = (undefined8 *)FName::FName(&local_res8,puVar5,1);
      uVar2 = FUN_1415a7b70(*puVar1,0xffffffff);
      *(undefined8 *)(lVar7 + 0x18) = uVar2;
    }
    lVar7 = *(longlong *)(param_1 + 0x1a8);
    lVar8 = (longlong)*(int *)(param_1 + 0x1b0) * 0x20 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x20) {
      if (*(int *)(lVar7 + 0x10) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(lVar7 + 8);
      }
      puVar1 = (undefined8 *)FName::FName(&local_res8,puVar5,1);
      uVar2 = FUN_1415a7b70(*puVar1,0xffffffff);
      *(undefined8 *)(lVar7 + 0x18) = uVar2;
    }
    plVar4 = *(longlong **)(param_1 + 0x198);
    lVar7 = 0;
    plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x1a0) * 4;
    for (; lVar8 = lVar7, plVar4 != plVar6; plVar4 = plVar4 + 4) {
      if (*plVar4 == 0) {
        lVar8 = plVar4[3];
        break;
      }
    }
    *(longlong *)(param_1 + 0x1b8) = lVar8;
    plVar4 = *(longlong **)(param_1 + 0x1a8);
    plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x1b0) * 4;
    local_res8 = 0;
    for (; lVar3 = lVar7, plVar4 != plVar6; plVar4 = plVar4 + 4) {
      if (*plVar4 == 0) {
        lVar3 = plVar4[3];
        break;
      }
    }
    *(longlong *)(param_1 + 0x1c0) = lVar3;
    if (lVar8 == 0) {
      lVar3 = operator_new(0x38);
      lVar8 = lVar7;
      if (lVar3 != 0) {
        lVar8 = FBehaviorTreeInstanceId::FBehaviorTreeInstanceId(lVar3);
      }
      FName::FName(&local_28,L"Distance",1);
      FName::FName(local_20,L"Visibility",1);
      local_18 = &local_28;
      uStack_10 = 2;
      FUN_1415b7e80(lVar8,&local_18);
      local_18 = &local_res8;
      uStack_10 = 2;
      local_res8 = 0x3e8000003f400000;
      FUN_1415a2fd0(lVar8,0,&local_18);
      local_18 = &local_res8;
      uStack_10 = 2;
      local_res8 = 0x3e8000003f400000;
      FUN_1415a2fd0(lVar8,0x447a0000,&local_18);
      local_18 = &local_res8;
      uStack_10 = 2;
      local_res8 = 0x3dcccccd3e800000;
      FUN_1415a2fd0(lVar8,0x459c4000,&local_18);
      local_18 = &local_res8;
      uStack_10 = 2;
      local_res8 = 0;
      FUN_1415a2fd0(lVar8,0x466a6000,&local_18);
      lVar3 = *(longlong *)(param_1 + 0x1c0);
      *(longlong *)(param_1 + 0x1b8) = lVar8;
    }
    if (lVar3 == 0) {
      lVar8 = operator_new(0x38);
      if (lVar8 != 0) {
        lVar7 = FBehaviorTreeInstanceId::FBehaviorTreeInstanceId(lVar8);
      }
      local_18 = (undefined8 *)0x0;
      uStack_10 = 0;
      FUN_1415a2fd0(lVar7,0x41000000,&local_18);
      local_18 = (undefined8 *)0x0;
      uStack_10 = 0;
      FUN_1415a2fd0(lVar7,0x41800000,&local_18);
      local_18 = (undefined8 *)0x0;
      uStack_10 = 0;
      FUN_1415a2fd0(lVar7,0x42000000,&local_18);
      local_18 = (undefined8 *)0x0;
      uStack_10 = 0;
      FUN_1415a2fd0(lVar7,0x42800000,&local_18);
      *(longlong *)(param_1 + 0x1c0) = lVar7;
    }
  }
  return;
}



// FUNCTION 142d88830 FUN_142d88830 body=84 status=ok
// SIG undefined FUN_142d88830(void)

void FUN_142d88830(longlong param_1)

{
  int iVar1;
  
  FUN_1425edab0();
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_142397000(*(longlong *)(param_1 + 0x458),0,0,1);
  }
  iVar1 = FUN_142235230(param_1);
  if ((iVar1 != 1) && (*(longlong *)(param_1 + 0x4b0) != 0)) {
    FUN_142d922a0(param_1);
    return;
  }
  return;
}



// FUNCTION 142d88890 FUN_142d88890 body=238 status=ok
// SIG undefined FUN_142d88890(void)

void FUN_142d88890(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1417510e0();
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar1 = *(longlong **)(param_1 + 0xe0);
    uVar4 = 0;
    uVar3 = (longlong)*(int *)(param_1 + 0xe8) & 0x1fffffffffffffff;
    if (plVar1 + *(int *)(param_1 + 0xe8) < plVar1) {
      uVar3 = uVar4;
    }
    uVar2 = uVar4;
    if (uVar3 != 0) {
      do {
        if (*plVar1 != 0) {
          FUN_1417510e0();
        }
        plVar1 = plVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar3);
    }
    plVar1 = *(longlong **)(param_1 + 0xf0);
    uVar3 = (longlong)*(int *)(param_1 + 0xf8) & 0x1fffffffffffffff;
    if (plVar1 + *(int *)(param_1 + 0xf8) < plVar1) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      do {
        if (*plVar1 != 0) {
          FUN_1417510e0();
        }
        plVar1 = plVar1 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
    FUN_142d95700(param_1);
  }
  return;
}



// FUNCTION 142d88980 FUN_142d88980 body=94 status=ok
// SIG undefined FUN_142d88980(void)

void FUN_142d88980(longlong *param_1)

{
  char cVar1;
  
  UObject::PostLoad();
  if (param_1[6] != 0) {
    FUN_1417510e0();
  }
  if (param_1[7] != 0) {
    FUN_1417510e0();
  }
  cVar1 = FUN_142d86b00(param_1);
  if (cVar1 != '\0') {
    if (param_1[6] != 0) {
      FUN_142d85250(param_1[6],0);
    }
                    /* WARNING: Could not recover jumptable at 0x000142d889d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x280))(param_1);
    return;
  }
  return;
}



// FUNCTION 142d889e0 FUN_142d889e0 body=421 status=ok
// SIG undefined FUN_142d889e0(void)

void FUN_142d889e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  UObject::PostLoad();
  plVar9 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = UWidget::GetPrivateStaticClass();
    lVar6 = *(longlong *)(param_1 + 0x30);
    for (lVar8 = lVar6; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar3) {
        if (lVar6 != 0) {
          plVar7 = plVar9;
          if (lVar6 == 0) goto LAB_142d88a51;
          plVar4 = (longlong *)UWidget::GetPrivateStaticClass();
          plVar2 = *(longlong **)(param_1 + 0x30);
          plVar5 = plVar2;
          if (plVar2 == (longlong *)0x0) goto LAB_142d88a51;
          goto LAB_142d88a40;
        }
        break;
      }
    }
  }
  goto LAB_142d88a59;
  while (plVar1 = plVar5 + 6, plVar5 = (longlong *)*plVar1, plVar7 = plVar9,
        (longlong *)*plVar1 != (longlong *)0x0) {
LAB_142d88a40:
    plVar7 = plVar2;
    if (plVar5 == plVar4) break;
  }
LAB_142d88a51:
  FUN_1417510e0(plVar7);
LAB_142d88a59:
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_1417510e0(*(undefined8 *)(param_1 + 0x10));
    lVar8 = *(longlong *)(param_1 + 0x48);
    lVar6 = lVar8 + (longlong)*(int *)(param_1 + 0x50) * 0x28;
    for (; lVar8 != lVar6; lVar8 = lVar8 + 0x28) {
      plVar9 = *(longlong **)(lVar8 + 0x18);
      plVar7 = plVar9 + (longlong)*(int *)(lVar8 + 0x20) * 8;
      for (; plVar9 != plVar7; plVar9 = plVar9 + 8) {
        if (*plVar9 != 0) {
          FUN_1417510e0();
        }
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar3 = UWidget::GetPrivateStaticClass();
      lVar6 = *(longlong *)(param_1 + 0x30);
      lVar8 = lVar6;
      if (lVar6 != 0) {
        do {
          if (lVar8 == lVar3) {
            if (lVar6 != 0) {
              plVar7 = plVar9;
              if (lVar6 != 0) {
                plVar5 = (longlong *)UWidget::GetPrivateStaticClass();
                for (plVar2 = *(longlong **)(param_1 + 0x30);
                    (plVar7 = plVar9, plVar2 != (longlong *)0x0 &&
                    (plVar7 = *(longlong **)(param_1 + 0x30), plVar2 != plVar5));
                    plVar2 = (longlong *)plVar2[6]) {
                }
              }
              lVar6 = plVar7[0x1f];
              if (lVar6 == 0) {
                (**(code **)(*plVar7 + 0x368))(plVar7);
                lVar6 = plVar7[0x1f];
              }
              plVar9 = *(longlong **)(lVar6 + 0x30);
            }
            goto LAB_142d88af8;
          }
          lVar8 = *(longlong *)(lVar8 + 0x30);
        } while (lVar8 != 0);
        *(undefined8 *)(param_1 + 0x38) = 0;
        TArray<`anonymous_namespace'::FGuidCustomVersion_DEPRECATED,FDefaultAllocator>::Empty
                  (param_1 + 0x58,0);
        goto LAB_142d88b6e;
      }
    }
LAB_142d88af8:
    *(longlong **)(param_1 + 0x38) = plVar9;
    TArray<`anonymous_namespace'::FGuidCustomVersion_DEPRECATED,FDefaultAllocator>::Empty
              (param_1 + 0x58,0);
  }
LAB_142d88b6e:
  FUN_142d95090(param_1);
  return;
}



// FUNCTION 142d88b90 FUN_142d88b90 body=117 status=ok
// SIG undefined FUN_142d88b90(void)

void FUN_142d88b90(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1424589a0();
  if ((param_2 != (longlong *)0x0) && ((*(uint *)((longlong)param_2 + 0x4cc) >> 1 & 1) != 0)) {
    cVar1 = (**(code **)(*param_2 + 0x768))(param_2);
    if (cVar1 != '\0') {
      cVar1 = APlayerController::IsPrimaryPlayer(param_2);
      if (cVar1 != '\0') {
        lVar2 = FUN_142d77040(param_1);
        lVar3 = (**(code **)(*param_2 + 0x680))(param_2);
        if ((lVar2 != 0) && (lVar3 != 0)) {
          *(longlong *)(lVar2 + 0x558) = lVar3;
        }
      }
    }
  }
  return;
}



// FUNCTION 142d88c10 FUN_142d88c10 body=34 status=ok
// SIG undefined FUN_142d88c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d88c10(longlong param_1)

{
  FUN_1423947d0();
  _DAT_146b34170 = *(undefined8 *)(param_1 + 0x2d8);
  return;
}



// FUNCTION 142d88c40 FUN_142d88c40 body=119 status=ok
// SIG undefined FUN_142d88c40(void)

void FUN_142d88c40(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  cVar1 = UWorld::IsGameWorld(lVar2);
  if (((cVar1 != '\0') && (param_2 != 0)) && (*(longlong *)(param_1 + 0x118) != 0)) {
    *(byte *)(param_2 + 0x90) =
         *(byte *)(param_2 + 0x90) ^
         (*(byte *)(*(longlong *)(param_1 + 0x118) + 0x90) ^ *(byte *)(param_2 + 0x90)) & 1;
  }
  return;
}



// FUNCTION 142d88cc0 FUN_142d88cc0 body=1288 status=ok
// SIG undefined FUN_142d88cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d88cc0(int param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  wchar_t **ppwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  wchar_t *pwVar16;
  float fVar17;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  longlong *local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  int local_88;
  wchar_t *local_80;
  wchar_t *local_78 [2];
  wchar_t *local_68 [2];
  longlong local_58;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  
  puVar1 = PTR_DAT_1466ad5e0;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  pwVar10 = (wchar_t *)0x0;
  local_c0 = pwVar10;
  local_88 = param_1;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar13 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    local_c0 = (wchar_t *)(puVar1 + (longlong)iVar13 * 2);
  }
  local_c8 = (wchar_t *)puVar1;
  FUN_142d95e90(param_3,local_68,&local_c8);
  if (local_48 == '\0') {
    local_68[0] = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_58;
    param_3[1] = local_50;
  }
  puVar1 = PTR_DAT_1466ad5e0;
  pwVar4 = pwVar10;
  local_78[0] = local_68[0];
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar13 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    pwVar4 = (wchar_t *)(puVar1 + (longlong)iVar13 * 2);
  }
  local_c8 = (wchar_t *)puVar1;
  local_c0 = pwVar4;
  local_b0 = (longlong *)FUN_142d95d90(param_3,&local_a8,&local_c8);
  local_c8 = (wchar_t *)0x0;
  local_c0 = (wchar_t *)0x0;
  lVar11 = local_b0[1] - *local_b0 >> 1;
  local_80 = (wchar_t *)0x0;
  if (lVar11 != 0) {
    iVar13 = (int)lVar11 + 1;
    pwVar4 = pwVar10;
    iVar15 = 0;
    if (0 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,iVar13);
      pwVar4 = (wchar_t *)((ulonglong)local_c0 & 0xffffffff);
      iVar15 = local_c0._4_4_;
    }
    iVar13 = (int)pwVar4 + iVar13;
    local_c0 = (wchar_t *)CONCAT44(local_c0._4_4_,iVar13);
    if (iVar15 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,pwVar4);
      iVar13 = (int)local_c0;
    }
    pwVar4 = local_c8;
    _guard_xfg_dispatch_icall_nop(local_c8,(void *)*local_b0,lVar11 * 2);
    pwVar4[(longlong)iVar13 + -1] = L'\0';
    local_80 = pwVar4;
  }
  pwVar4 = local_80;
  puVar1 = PTR_DAT_1466ad5e0;
  local_a0 = pwVar10;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar13 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    local_a0 = (wchar_t *)(puVar1 + (longlong)iVar13 * 2);
  }
  local_a8 = (wchar_t *)puVar1;
  local_b0 = (longlong *)FUN_142d95d90(param_3,&local_98,&local_a8);
  local_a8 = (wchar_t *)0x0;
  local_a0 = (wchar_t *)0x0;
  lVar11 = local_b0[1] - *local_b0 >> 1;
  pwVar12 = pwVar10;
  if (lVar11 != 0) {
    iVar14 = (int)lVar11 + 1;
    iVar13 = 0;
    iVar15 = 0;
    if (0 < iVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8,iVar14);
      iVar13 = (int)local_a0;
      iVar15 = local_a0._4_4_;
    }
    local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,iVar13 + iVar14);
    if (iVar15 < iVar13 + iVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar13);
    }
    pwVar12 = local_a8;
    _guard_xfg_dispatch_icall_nop(local_a8,(void *)*local_b0,lVar11 * 2);
    pwVar12[(longlong)(int)local_a0 + -1] = L'\0';
  }
  local_b0 = (longlong *)*param_3;
  lVar11 = param_3[1] - (longlong)local_b0 >> 1;
  local_98 = (wchar_t *)0x0;
  local_90 = 0;
  local_b8 = (wchar_t *)0x0;
  if (lVar11 != 0) {
    uVar2 = (int)lVar11 + 1;
    local_b8 = (wchar_t *)(ulonglong)uVar2;
    pwVar16 = pwVar10;
    iVar13 = 0;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,uVar2);
      pwVar16 = (wchar_t *)(local_90 & 0xffffffff);
      uVar2 = (uint)local_b8;
      iVar13 = local_90._4_4_;
    }
    iVar15 = (int)pwVar16 + uVar2;
    local_90 = CONCAT44(local_90._4_4_,iVar15);
    if (iVar13 < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,pwVar16);
      iVar15 = (int)local_90;
    }
    pwVar16 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,local_b0,lVar11 * 2);
    pwVar16[(longlong)iVar15 + -1] = L'\0';
    local_b8 = pwVar16;
  }
  pwVar16 = local_b8;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  pwVar8 = L"";
  if ((int)local_c0 != 0) {
    pwVar8 = local_80;
  }
  plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,pwVar8);
  local_b0 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    if (local_b8 != (wchar_t *)0x0) {
      FMemory::Free(local_b8);
    }
    if (pwVar12 != (wchar_t *)0x0) {
      FMemory::Free(pwVar12);
    }
    if (local_80 != (wchar_t *)0x0) {
      FMemory::Free(local_80);
    }
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar5 = *(longlong **)(param_4 + 0x30);
      if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
        plVar5 = (longlong *)(param_4 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (*(longlong *)(param_4 + 0x30) != 0) {
      FMemory::Free();
    }
    return 0;
  }
  local_b8 = (wchar_t *)((ulonglong)local_b8 & 0xffffffff00000000);
  iVar13 = _wtoi(local_78[0]);
  lVar11 = *plVar5;
  if (iVar13 == 0) {
    uVar3 = (**(code **)(lVar11 + 0x68))(plVar5);
    FString::PrintfImpl(&local_c8,&DAT_14588d504,uVar3);
    iVar13 = (int)local_c0;
    pwVar10 = local_c8;
  }
  else if (iVar13 == 1) {
    fVar17 = (float)(**(code **)(lVar11 + 0x70))();
    FString::PrintfImpl(&local_c8,&DAT_1458942e0,(double)fVar17);
    iVar13 = (int)local_c0;
    pwVar10 = local_c8;
  }
  else {
    ppwVar6 = (wchar_t **)(**(code **)(lVar11 + 0x78))(plVar5,&local_c8);
    if (local_78 != ppwVar6) {
      pwVar10 = *ppwVar6;
      *ppwVar6 = (wchar_t *)0x0;
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,*(undefined4 *)(ppwVar6 + 1));
      ppwVar6[1] = (wchar_t *)0x0;
    }
    if (local_c8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    iVar13 = (int)local_b8;
  }
  pwVar8 = L"";
  if (local_88 == 0) {
    pwVar9 = L"";
    if ((int)local_a0 != 0) {
      pwVar9 = pwVar12;
    }
    pwVar7 = L"";
    if (iVar13 != 0) {
      pwVar7 = pwVar10;
    }
    iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar7,pwVar9);
    if (iVar13 != 0) {
LAB_142d890db:
      if (pwVar10 != (wchar_t *)0x0) {
        FMemory::Free(pwVar10);
      }
      if (pwVar16 != (wchar_t *)0x0) {
        FMemory::Free(pwVar16);
      }
      if (pwVar12 != (wchar_t *)0x0) {
        FMemory::Free(pwVar12);
      }
      if (pwVar4 != (wchar_t *)0x0) {
        FMemory::Free(pwVar4);
      }
      FUN_1404bed90(param_4);
      return 0;
    }
    if ((int)local_90 != 0) {
      pwVar8 = pwVar16;
    }
  }
  else {
    if (local_88 != 1) goto LAB_142d89138;
    pwVar9 = L"";
    if ((int)local_90 != 0) {
      pwVar9 = pwVar16;
    }
    pwVar7 = L"";
    if (iVar13 != 0) {
      pwVar7 = pwVar10;
    }
    iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar7,pwVar9);
    if (iVar13 != 0) goto LAB_142d890db;
    if ((int)local_a0 != 0) {
      pwVar8 = pwVar12;
    }
  }
  (**(code **)(*local_b0 + 0x60))(local_b0,pwVar8,0x8000000);
LAB_142d89138:
  if (pwVar10 != (wchar_t *)0x0) {
    FMemory::Free(pwVar10);
  }
  if (pwVar16 != (wchar_t *)0x0) {
    FMemory::Free(pwVar16);
  }
  if (pwVar12 != (wchar_t *)0x0) {
    FMemory::Free(pwVar12);
  }
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_4 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142d891d0 FUN_142d891d0 body=2356 status=ok
// SIG undefined FUN_142d891d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d891d0(int param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_998 [32];
  wchar_t *local_978;
  undefined8 uStack_970;
  longlong local_968;
  wchar_t *local_958;
  uint local_950;
  int local_94c;
  longlong local_948;
  void *local_940;
  uint local_938;
  int local_934;
  wchar_t *local_930;
  wchar_t *local_928;
  undefined8 local_920;
  longlong local_918;
  int local_910;
  wchar_t *local_908;
  wchar_t *local_900;
  wchar_t *local_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  longlong local_8e8;
  undefined8 local_8d8;
  longlong local_8d0;
  undefined1 local_8c8 [80];
  wchar_t *local_878;
  undefined8 uStack_870;
  longlong local_868;
  longlong local_860;
  char local_858;
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  puVar1 = PTR_DAT_1466ad5e0;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_998;
  pwVar17 = (wchar_t *)0x0;
  uStack_970 = pwVar17;
  local_948 = param_4;
  local_910 = param_1;
  local_8d0 = param_2;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    uStack_970 = (wchar_t *)(puVar1 + (longlong)iVar5 * 2);
  }
  local_978 = (wchar_t *)puVar1;
  FUN_142d95e90(param_3,&local_878,&local_978);
  if (local_858 == '\0') {
    uVar11 = param_3[1];
    local_920 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_868;
    param_3[1] = local_860;
    local_920 = local_878;
    uVar11 = uStack_870;
  }
  puVar1 = PTR_DAT_1466ad5e0;
  pwVar7 = pwVar17;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    pwVar7 = (wchar_t *)(puVar1 + (longlong)iVar5 * 2);
  }
  local_978 = (wchar_t *)puVar1;
  uStack_970 = pwVar7;
  FUN_142d95e90(param_3,&local_878,&local_978);
  if (local_858 == '\0') {
    uVar20 = param_3[1];
    pwVar7 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_868;
    param_3[1] = local_860;
    pwVar7 = local_878;
    uVar20 = uStack_870;
  }
  puVar1 = PTR_DAT_1466ad5e0;
  pwVar9 = pwVar17;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    pwVar9 = (wchar_t *)(puVar1 + (longlong)iVar5 * 2);
  }
  local_978 = (wchar_t *)puVar1;
  uStack_970 = pwVar9;
  FUN_142d95e90(param_3,&local_878,&local_978);
  if (local_858 == '\0') {
    uVar22 = param_3[1];
    local_930 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_868;
    param_3[1] = local_860;
    local_930 = local_878;
    uVar22 = uStack_870;
  }
  puVar1 = PTR_DAT_1466ad5e0;
  pwVar9 = pwVar17;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    pwVar9 = (wchar_t *)(puVar1 + (longlong)iVar5 * 2);
  }
  local_978 = (wchar_t *)puVar1;
  uStack_970 = pwVar9;
  FUN_142d95e90(param_3,&local_878,&local_978);
  if (local_858 == '\0') {
    uVar8 = param_3[1];
    pwVar9 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_868;
    param_3[1] = local_860;
    uVar8 = uStack_870;
    pwVar9 = local_878;
  }
  iVar5 = 0;
  if (((longlong)(uVar8 - (longlong)pwVar9) >> 1 != 0) && (iVar5 = _wtoi(pwVar9), iVar5 < 1)) {
    iVar5 = 0;
  }
  local_908 = (wchar_t *)*param_3;
  local_928 = (wchar_t *)param_3[1];
  if (local_908 + iVar5 < (wchar_t *)param_3[1]) {
    *param_3 = (longlong)(local_908 + iVar5);
    local_928 = local_908 + iVar5;
  }
  puVar1 = PTR_DAT_1466ad5e0;
  pwVar9 = pwVar17;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    pwVar9 = (wchar_t *)(puVar1 + (longlong)iVar5 * 2);
  }
  local_978 = (wchar_t *)puVar1;
  uStack_970 = pwVar9;
  FUN_142d95e90(param_3,&local_878,&local_978);
  if (local_858 == '\0') {
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_868;
    param_3[1] = local_860;
  }
  local_918 = param_3[1];
  lVar21 = (longlong)(uVar20 - (longlong)pwVar7) >> 1;
  local_900 = (wchar_t *)*param_3;
  local_94c = 0;
  local_958 = (wchar_t *)0x0;
  local_950 = 0;
  pwVar9 = pwVar17;
  if (lVar21 != 0) {
    iVar5 = (int)(lVar21 + 1U);
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_958,lVar21 + 1U & 0xffffffff);
    }
    local_950 = iVar5 + local_950;
    if (local_94c < (int)local_950) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_958);
    }
    uVar2 = local_950;
    pwVar9 = local_958;
    _guard_xfg_dispatch_icall_nop(local_958,pwVar7,lVar21 * 2);
    pwVar9[(int)(uVar2 - 1)] = L'\0';
  }
  pwVar10 = local_930;
  local_978 = (wchar_t *)0x0;
  lVar21 = (longlong)(uVar22 - (longlong)local_930) >> 1;
  iVar5 = 0;
  uStack_970 = (wchar_t *)0x0;
  pwVar7 = pwVar17;
  if (lVar21 != 0) {
    iVar18 = (int)(lVar21 + 1U);
    iVar6 = iVar5;
    if (0 < iVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_978,lVar21 + 1U & 0xffffffff);
      iVar6 = uStack_970._4_4_;
    }
    iVar18 = iVar18 + (int)uStack_970;
    uStack_970 = (wchar_t *)CONCAT44(uStack_970._4_4_,iVar18);
    if (iVar6 < iVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_978);
      iVar18 = (int)uStack_970;
    }
    pwVar7 = local_978;
    _guard_xfg_dispatch_icall_nop(local_978,pwVar10,lVar21 * 2);
    pwVar7[iVar18 + -1] = L'\0';
  }
  pwVar10 = local_920;
  local_940 = (void *)0x0;
  lVar21 = (longlong)(uVar11 - (longlong)local_920) >> 1;
  local_938 = 0;
  local_934 = 0;
  if (lVar21 != 0) {
    iVar18 = (int)(lVar21 + 1U);
    pwVar16 = pwVar17;
    if (0 < iVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_940,lVar21 + 1U & 0xffffffff);
      pwVar16 = (wchar_t *)(ulonglong)local_938;
    }
    local_938 = iVar18 + (int)pwVar16;
    if (local_934 < (int)local_938) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_940);
    }
    _guard_xfg_dispatch_icall_nop(local_940,pwVar10,lVar21 * 2);
    *(undefined2 *)((longlong)local_940 + (longlong)(int)(local_938 - 1) * 2) = 0;
  }
  pwVar10 = (wchar_t *)FUN_142d82f20(&local_940);
  plVar12 = (longlong *)0x0;
  if (pwVar10 != (wchar_t *)0x0) {
    local_8f8 = pwVar10;
    lVar21 = USoundMix::GetPrivateStaticClass();
    iVar18 = *(int *)(lVar21 + 0x90);
    uVar11 = (longlong)iVar18;
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < iVar18) ||
       (uVar11 = *(ulonglong *)(*(longlong *)(pwVar10 + 8) + 0x88),
       *(longlong *)(uVar11 + (longlong)iVar18 * 8) != lVar21 + 0x88)) {
      plVar12 = (longlong *)(uVar11 & 0xffffffffffffff00);
    }
    else {
      plVar12 = (longlong *)CONCAT71((int7)(uVar11 >> 8),1);
    }
    if ((char)plVar12 != '\0') goto LAB_142d89612;
  }
  local_8f8 = (wchar_t *)0x0;
  pwVar10 = pwVar17;
LAB_142d89612:
  if (local_940 != (void *)0x0) {
    plVar12 = (longlong *)FMemory::Free();
  }
  if (pwVar10 == (wchar_t *)0x0) {
    if (pwVar7 != (wchar_t *)0x0) {
      plVar12 = (longlong *)FMemory::Free(pwVar7);
    }
  }
  else {
    local_878 = *(wchar_t **)(pwVar10 + 0x14);
    if (local_878 == (wchar_t *)0x0) {
      uStack_870 = 0;
    }
    else {
      uStack_870 = *(ulonglong *)(local_878 + 0x1c);
    }
    local_868 = CONCAT17(local_868._7_1_,0x101ffffffff);
    plVar12 = (longlong *)FUN_140472e10(&local_878);
    uVar11 = uStack_870;
    while (uStack_870 = uVar11, uVar11 != 0) {
      local_920 = *(wchar_t **)(uVar11 + 0x18);
      pwVar9 = L"";
      if ((int)uStack_970 != 0) {
        pwVar9 = pwVar7;
      }
      if ((pwVar9 == (wchar_t *)0x0) || (*pwVar9 == L'\0')) {
        bVar23 = local_920 == (wchar_t *)0x0;
        local_8d8 = 0;
      }
      else {
        bVar23 = false;
        pbVar13 = (byte *)FName::GetComparisonNameEntry(&local_920);
        if (pbVar13 != (byte *)0x0) {
          local_930 = (wchar_t *)((ulonglong)local_930 & 0xffffffff00000000);
          cVar3 = FName::SplitNameWithCheck(pwVar9,local_848,0x400,&local_930);
          iVar18 = iVar5;
          if (cVar3 != '\0') {
            pwVar9 = local_848;
            iVar18 = (int)local_930 + 1;
          }
          if (iVar18 == local_920._4_4_) {
            if ((*pbVar13 & 1) == 0) {
              iVar18 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar9,pbVar13 + 0x10);
              bVar23 = iVar18 == 0;
            }
            else {
              iVar18 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
              bVar23 = iVar18 == 0;
            }
          }
        }
      }
      pwVar10 = local_8f8;
      pwVar9 = local_958;
      if (bVar23) {
        pwVar16 = L"";
        if (local_950 != 0) {
          pwVar16 = local_958;
        }
        lVar21 = *(longlong *)(local_8f8 + 0x14);
        puVar14 = (undefined8 *)FName::FName(&local_8f8,pwVar16,1);
        lVar21 = FUN_142de9380(pwVar10,*puVar14,lVar21);
        if (lVar21 != 0) {
          bVar4 = 0;
          local_868 = *(int *)(uVar11 + 0x44) + lVar21;
          local_878 = pwVar10;
          if (local_910 == 0) {
            local_918 = local_918 - (longlong)local_900 >> 1;
            local_958 = (wchar_t *)0x0;
            local_950 = 0;
            local_94c = 0;
            uStack_870 = uVar11;
            if (local_918 != 0) {
              iVar18 = (int)(local_918 + 1U);
              pwVar16 = pwVar17;
              if (0 < iVar18) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_958,local_918 + 1U & 0xffffffff);
                pwVar16 = (wchar_t *)(ulonglong)local_950;
              }
              local_950 = iVar18 + (int)pwVar16;
              if (local_94c < (int)local_950) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_958);
              }
              uVar2 = local_950;
              pwVar16 = local_958;
              _guard_xfg_dispatch_icall_nop(local_958,local_900,local_918 * 2);
              pwVar16[(int)(uVar2 - 1)] = L'\0';
            }
            local_928 = (wchar_t *)((longlong)local_928 - (longlong)local_908 >> 1);
            local_978 = (wchar_t *)0x0;
            uStack_970 = (wchar_t *)0x0;
            if (local_928 != (wchar_t *)0x0) {
              iVar18 = (int)((longlong)local_928 + 1U);
              if (0 < iVar18) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo
                          (&local_978,(longlong)local_928 + 1U & 0xffffffff);
                pwVar17 = (wchar_t *)((ulonglong)uStack_970 & 0xffffffff);
                iVar5 = uStack_970._4_4_;
              }
              iVar18 = iVar18 + (int)pwVar17;
              uStack_970 = (wchar_t *)CONCAT44(uStack_970._4_4_,iVar18);
              if (iVar5 < iVar18) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_978);
                iVar18 = (int)uStack_970;
              }
              pwVar17 = local_978;
              _guard_xfg_dispatch_icall_nop(local_978,local_908,(longlong)local_928 * 2);
              pwVar17[iVar18 + -1] = L'\0';
            }
            local_8f8 = local_878;
            uStack_8f0 = (undefined4)uStack_870;
            uStack_8ec = uStack_870._4_4_;
            local_8e8 = local_868;
            uVar15 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                               (local_8c8,local_948);
            bVar4 = FUN_142d7c6f0(&local_8f8,&local_978,&local_958,uVar15);
            if (pwVar17 != (wchar_t *)0x0) {
              FMemory::Free(pwVar17);
            }
            if (local_958 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            lVar21 = local_948;
            if ((bVar4 != 0) && ((*(byte *)(local_8d0 + 4) & 1) != 0)) {
              (**(code **)(*(longlong *)pwVar10 + 0x268))(pwVar10,uVar11);
              lVar21 = local_948;
            }
          }
          else {
            lVar21 = local_948;
            uStack_870 = uVar11;
            if (local_910 == 1) {
              local_978 = local_908;
              uStack_970 = local_928;
              FUN_14063eb30(&local_8f8,&local_978);
              local_978 = local_900;
              uStack_970 = (wchar_t *)local_918;
              FUN_14063eb30(&local_958,&local_978);
              lVar21 = local_948;
              local_978 = local_878;
              uStack_970 = (wchar_t *)uStack_870;
              local_968 = local_868;
              uVar15 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                 (local_8c8,local_948);
              bVar4 = FUN_142d7c6f0(&local_978,&local_958,&local_8f8,uVar15);
              if (local_958 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              if (local_8f8 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              if ((bVar4 != 0) && ((*(byte *)(local_8d0 + 4) & 1) != 0)) {
                (**(code **)(*(longlong *)pwVar10 + 0x270))(pwVar10,uVar11);
              }
            }
          }
          if (pwVar7 != (wchar_t *)0x0) {
            FMemory::Free(pwVar7);
          }
          if (pwVar9 != (wchar_t *)0x0) {
            FMemory::Free(pwVar9);
          }
          if (*(int *)(lVar21 + 0x40) != 0) {
            plVar12 = *(longlong **)(lVar21 + 0x30);
            if (*(longlong **)(lVar21 + 0x30) == (longlong *)0x0) {
              plVar12 = (longlong *)(lVar21 + 0x10);
            }
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12,0);
            }
          }
          if (*(longlong *)(lVar21 + 0x30) != 0) {
            FMemory::Free();
          }
          return (ulonglong)bVar4;
        }
        plVar12 = (longlong *)0x0;
        if (pwVar7 != (wchar_t *)0x0) {
          plVar12 = (longlong *)FMemory::Free(pwVar7);
        }
        goto joined_r0x000142d8977f;
      }
      uStack_870 = *(ulonglong *)(uVar11 + 0x28);
      plVar12 = (longlong *)FUN_140472e10(&local_878);
      uVar11 = uStack_870;
    }
    pwVar9 = local_958;
    if (pwVar7 != (wchar_t *)0x0) {
      plVar12 = (longlong *)FMemory::Free(pwVar7);
      pwVar9 = local_958;
    }
  }
joined_r0x000142d8977f:
  if (pwVar9 != (wchar_t *)0x0) {
    plVar12 = (longlong *)FMemory::Free(pwVar9);
  }
  lVar21 = local_948;
  if (*(int *)(local_948 + 0x40) != 0) {
    plVar12 = *(longlong **)(local_948 + 0x30);
    plVar19 = plVar12;
    if (plVar12 == (longlong *)0x0) {
      plVar19 = (longlong *)(local_948 + 0x10);
    }
    if (plVar19 != (longlong *)0x0) {
      plVar12 = (longlong *)(**(code **)(*plVar19 + 0x10))(plVar19,0);
    }
  }
  if (*(longlong *)(lVar21 + 0x30) != 0) {
    plVar12 = (longlong *)FMemory::Free();
  }
  return (ulonglong)plVar12 & 0xffffffffffffff00;
}



// FUNCTION 142d89b10 FUN_142d89b10 body=3733 status=ok
// SIG undefined FUN_142d89b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d89b10(int param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  ulonglong *puVar1;
  wchar_t **ppwVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  longlong *plVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong *puVar18;
  undefined2 *puVar19;
  longlong lVar20;
  wchar_t **ppwVar21;
  wchar_t *_Str;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198 [2];
  void *local_188;
  undefined8 local_180;
  int local_178;
  wchar_t *local_170;
  wchar_t *local_168;
  longlong local_160;
  wchar_t *local_158;
  wchar_t *local_150;
  char local_148;
  wchar_t *local_138;
  undefined *local_130;
  wchar_t *local_128;
  undefined *local_120;
  wchar_t *local_118;
  undefined *local_110;
  wchar_t *local_108;
  undefined *local_100;
  wchar_t *local_f8;
  int local_f0;
  undefined4 local_ec;
  wchar_t *local_e8;
  int local_e0;
  undefined4 local_dc;
  wchar_t *local_d8;
  int local_d0;
  undefined4 local_cc;
  wchar_t *local_c8;
  int local_c0;
  undefined4 local_bc;
  ulonglong local_b8 [16];
  
  puVar9 = PTR_DAT_1466ad5e0;
  ppwVar21 = &local_f8;
  local_b8[0] = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  puVar11 = (undefined *)0x0;
  iVar7 = 0;
  local_1d0 = puVar11;
  local_178 = param_1;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    local_1d0 = puVar9 + (longlong)iVar5 * 2;
  }
  local_1d8 = (wchar_t *)puVar9;
  FUN_142d95e90(param_3,&local_168,&local_1d8);
  if (local_148 == '\0') {
    lVar17 = param_3[1];
    pwVar15 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = (longlong)local_158;
    param_3[1] = (longlong)local_150;
    lVar17 = local_160;
    pwVar15 = local_168;
  }
  puVar9 = PTR_DAT_1466ad5e0;
  puVar8 = puVar11;
  local_1c8 = pwVar15;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar8 = puVar9 + (longlong)iVar5 * 2;
  }
  local_1d8 = (wchar_t *)puVar9;
  local_1d0 = puVar8;
  FUN_142d95e90(param_3,&local_168,&local_1d8);
  if (local_148 == '\0') {
    local_198[0] = param_3[1];
    local_170 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = (longlong)local_158;
    param_3[1] = (longlong)local_150;
    local_198[0] = local_160;
    local_170 = local_168;
  }
  puVar9 = PTR_DAT_1466ad5e0;
  puVar8 = puVar11;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar8 = puVar9 + (longlong)iVar5 * 2;
  }
  local_1d8 = (wchar_t *)puVar9;
  local_1d0 = puVar8;
  FUN_142d95e90(param_3,&local_168,&local_1d8);
  if (local_148 == '\0') {
    local_1a8 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = (longlong)local_158;
    param_3[1] = (longlong)local_150;
    local_1a8 = local_168;
  }
  puVar9 = PTR_DAT_1466ad5e0;
  puVar8 = puVar11;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar5 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar8 = puVar9 + (longlong)iVar5 * 2;
  }
  local_1d8 = (wchar_t *)puVar9;
  local_1d0 = puVar8;
  FUN_142d95e90(param_3,&local_168,&local_1d8);
  if (local_148 == '\0') {
    lVar20 = param_3[1];
    _Str = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = (longlong)local_158;
    param_3[1] = (longlong)local_150;
    _Str = local_168;
    lVar20 = local_160;
  }
  local_188 = (void *)0x0;
  lVar17 = lVar17 - (longlong)pwVar15 >> 1;
  local_180 = 0;
  if (lVar17 != 0) {
    iVar6 = (int)(lVar17 + 1U);
    puVar9 = puVar11;
    iVar5 = iVar7;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_188,lVar17 + 1U & 0xffffffff);
      puVar9 = (undefined *)(local_180 & 0xffffffff);
      iVar5 = local_180._4_4_;
    }
    iVar6 = (int)puVar9 + iVar6;
    local_180 = CONCAT44(local_180._4_4_,iVar6);
    if (iVar5 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188);
    }
    _guard_xfg_dispatch_icall_nop(local_188,local_1c8,lVar17 * 2);
    *(undefined2 *)((longlong)local_188 + (longlong)((int)local_180 + -1) * 2) = 0;
  }
  puVar9 = (undefined *)FUN_142d82f20(&local_188);
  plVar10 = (longlong *)0x0;
  if (puVar9 != (undefined *)0x0) {
    lVar17 = FUN_1429b6de0();
    iVar5 = *(int *)(lVar17 + 0x90);
    uVar14 = (longlong)iVar5;
    if ((*(int *)(*(longlong *)(puVar9 + 0x10) + 0x90) < iVar5) ||
       (uVar14 = *(ulonglong *)(*(longlong *)(puVar9 + 0x10) + 0x88),
       *(longlong *)(uVar14 + (longlong)iVar5 * 8) != lVar17 + 0x88)) {
      plVar10 = (longlong *)(uVar14 & 0xffffffffffffff00);
    }
    else {
      plVar10 = (longlong *)CONCAT71((int7)(uVar14 >> 8),1);
    }
    if ((char)plVar10 != '\0') goto LAB_142d89dbe;
  }
  puVar9 = puVar11;
LAB_142d89dbe:
  if (local_188 != (void *)0x0) {
    plVar10 = (longlong *)FMemory::Free();
  }
  if (puVar9 == (undefined *)0x0) {
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar10 = *(longlong **)(param_4 + 0x30);
      plVar16 = plVar10;
      if (plVar10 == (longlong *)0x0) {
        plVar16 = (longlong *)(param_4 + 0x10);
      }
      if (plVar16 != (longlong *)0x0) {
        plVar10 = (longlong *)(**(code **)(*plVar16 + 0x10))(plVar16,0);
      }
    }
    if (*(longlong *)(param_4 + 0x30) != 0) {
      plVar10 = (longlong *)FMemory::Free();
    }
    return (ulonglong)plVar10 & 0xffffffffffffff00;
  }
  if ((lVar20 - (longlong)_Str >> 1 != 0) && (iVar7 = _wtoi(_Str), iVar7 < 1)) {
    iVar7 = 0;
  }
  local_1c8 = (wchar_t *)*param_3;
  uStack_1c0 = (wchar_t *)param_3[1];
  if (local_1c8 + iVar7 < uStack_1c0) {
    *param_3 = (longlong)(local_1c8 + iVar7);
    uStack_1c0 = local_1c8 + iVar7;
  }
  puVar8 = PTR_DAT_1466ad5e0;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar7 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar11 = puVar8 + (longlong)iVar7 * 2;
  }
  local_1d8 = (wchar_t *)puVar8;
  local_1d0 = puVar11;
  FUN_142d95e90(param_3,&local_168,&local_1d8);
  if (local_148 == '\0') {
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = (longlong)local_158;
    param_3[1] = (longlong)local_150;
  }
  local_1b8 = (wchar_t *)*param_3;
  uStack_1b0 = (wchar_t *)param_3[1];
  iVar7 = _wtoi(local_1a8);
  if (iVar7 == 0) {
    local_1a8 = local_1c8;
    uStack_1a0 = (int)uStack_1c0;
    uStack_19c = uStack_1c0._4_4_;
    FUN_14063eb30(&local_1c8,&local_1a8);
    cVar3 = FString::IsNumeric(&local_1c8);
    if (cVar3 != '\0') {
      puVar19 = &DAT_143f3eda8;
      pwVar15 = L"";
      if ((int)uStack_1c0 != 0) {
        pwVar15 = local_1c8;
      }
      dVar22 = _wtof(pwVar15);
      FUN_14063eb30(&local_1d8,&local_1b8);
      cVar3 = FString::IsNumeric(&local_1d8);
      if (cVar3 != '\0') {
        pwVar15 = L"";
        if ((int)local_1d0 != 0) {
          pwVar15 = local_1d8;
        }
        dVar23 = _wtof(pwVar15);
        if (local_178 == 0) {
          local_1b8 = local_170;
          uStack_1b0 = (wchar_t *)local_198[0];
          puVar12 = (undefined8 *)FUN_14063eb30(local_198,&local_1b8);
          if (*(int *)(puVar12 + 1) != 0) {
            puVar19 = (undefined2 *)*puVar12;
          }
          puVar12 = (undefined8 *)FName::FName(&local_1a8,puVar19,1);
          bVar4 = FUN_142586640(puVar9,*puVar12,(float)dVar22,(float)dVar23);
          if (local_198[0] != 0) {
            FMemory::Free();
          }
          if (local_1d8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if (local_1c8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          FUN_1404bed90(param_4);
          return (ulonglong)bVar4;
        }
        if (local_178 == 1) {
          local_1b8 = local_170;
          uStack_1b0 = (wchar_t *)local_198[0];
          puVar12 = (undefined8 *)FUN_14063eb30(local_198,&local_1b8);
          if (*(int *)(puVar12 + 1) != 0) {
            puVar19 = (undefined2 *)*puVar12;
          }
          puVar12 = (undefined8 *)FName::FName(&local_1a8,puVar19,1);
          bVar4 = FUN_142586640(puVar9,*puVar12,(float)dVar23,(float)dVar22);
          if (local_198[0] != 0) {
            FMemory::Free();
          }
          if (local_1d8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if (local_1c8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          FUN_1404bed90(param_4);
          return (ulonglong)bVar4;
        }
      }
      if (local_1d8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    if (local_1c8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  else if (iVar7 == 1) {
    iVar7 = MNP_OverrideOutput_WC(&DAT_14588bf1c);
    local_1d8 = (wchar_t *)&DAT_14588bf1c;
    local_1d0 = &DAT_14588bf1c + (longlong)iVar7 * 2;
    FUN_142d95e90(&local_1c8,&local_168,&local_1d8);
    if (local_148 == '\0') {
      local_1c8 = (wchar_t *)0x0;
      uStack_1c0 = (wchar_t *)0x0;
    }
    else {
      local_1c8 = local_158;
      uStack_1c0 = local_150;
    }
    local_138 = (wchar_t *)0x0;
    local_130 = (undefined *)0x0;
    local_128 = (wchar_t *)0x0;
    local_120 = (undefined *)0x0;
    local_118 = (wchar_t *)0x0;
    local_110 = (undefined *)0x0;
    local_108 = (wchar_t *)0x0;
    local_100 = (undefined *)0x0;
    iVar7 = MNP_OverrideOutput_WC(&DAT_14588c068);
    local_1d8 = L",";
    local_1d0 = &DAT_14588c068 + (longlong)iVar7 * 2;
    uVar13 = FUN_142d95d90(&local_1c8,&local_1a8,&local_1d8);
    FUN_14063eb30(&local_1d8,uVar13);
    if (local_138 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_138 = local_1d8;
    local_130 = local_1d0;
    iVar7 = MNP_OverrideOutput_WC(&DAT_14588c06c);
    local_1d8 = L",";
    local_1d0 = &DAT_14588c06c + (longlong)iVar7 * 2;
    uVar13 = FUN_142d95d90(&local_1c8,&local_1a8,&local_1d8);
    FUN_14063eb30(&local_1d8,uVar13);
    if (local_128 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_128 = local_1d8;
    local_120 = local_1d0;
    iVar7 = MNP_OverrideOutput_WC(&DAT_14588c190);
    local_1d8 = L",";
    local_1d0 = &DAT_14588c190 + (longlong)iVar7 * 2;
    uVar13 = FUN_142d95d90(&local_1c8,&local_1a8,&local_1d8);
    FUN_14063eb30(&local_1d8,uVar13);
    if (local_118 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_118 = local_1d8;
    local_110 = local_1d0;
    iVar7 = MNP_OverrideOutput_WC(&DAT_14588c194);
    local_1d8 = L")";
    local_1d0 = &DAT_14588c194 + (longlong)iVar7 * 2;
    uVar13 = FUN_142d95d90(&local_1c8,&local_1a8,&local_1d8);
    FUN_14063eb30(&local_1d8,uVar13);
    if (local_108 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_108 = local_1d8;
    local_100 = local_1d0;
    cVar3 = FString::IsNumeric(&local_138);
    if ((((cVar3 == '\0') || (cVar3 = FString::IsNumeric(&local_128), cVar3 == '\0')) ||
        (cVar3 = FString::IsNumeric(&local_118), cVar3 == '\0')) ||
       (cVar3 = FString::IsNumeric(&local_108), cVar3 == '\0')) {
      lVar17 = 4;
      do {
        ppwVar2 = ppwVar21 + -2;
        ppwVar21 = ppwVar21 + -2;
        lVar17 = lVar17 + -1;
        if (*ppwVar2 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      } while (lVar17 != 0);
    }
    else {
      puVar19 = &DAT_143f3eda8;
      pwVar15 = L"";
      if ((int)local_100 != 0) {
        pwVar15 = local_108;
      }
      dVar22 = _wtof(pwVar15);
      pwVar15 = L"";
      if ((int)local_110 != 0) {
        pwVar15 = local_118;
      }
      dVar23 = _wtof(pwVar15);
      pwVar15 = L"";
      if ((int)local_120 != 0) {
        pwVar15 = local_128;
      }
      dVar24 = _wtof(pwVar15);
      pwVar15 = L"";
      if ((int)local_130 != 0) {
        pwVar15 = local_138;
      }
      dVar25 = _wtof(pwVar15);
      iVar7 = MNP_OverrideOutput_WC(&DAT_14588c198);
      local_1d8 = (wchar_t *)&DAT_14588c198;
      local_1d0 = &DAT_14588c198 + (longlong)iVar7 * 2;
      FUN_142d95e90(&local_1b8,&local_168,&local_1d8);
      if (local_148 == '\0') {
        local_1b8 = (wchar_t *)0x0;
        uStack_1b0 = (wchar_t *)0x0;
      }
      else {
        local_1b8 = local_158;
        uStack_1b0 = local_150;
      }
      local_f8 = (wchar_t *)0x0;
      local_e8 = (wchar_t *)0x0;
      local_d8 = (wchar_t *)0x0;
      local_c8 = (wchar_t *)0x0;
      iVar7 = MNP_OverrideOutput_WC(&DAT_14588c19c);
      local_1d8 = L",";
      local_1d0 = &DAT_14588c19c + (longlong)iVar7 * 2;
      uVar13 = FUN_142d95d90(&local_1b8,&local_1a8,&local_1d8);
      FUN_14063eb30(&local_1d8,uVar13);
      if (local_f8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_f8 = local_1d8;
      local_f0 = (int)local_1d0;
      local_ec = local_1d0._4_4_;
      iVar7 = MNP_OverrideOutput_WC(&DAT_14588c1a0);
      local_1d8 = L",";
      local_1d0 = &DAT_14588c1a0 + (longlong)iVar7 * 2;
      uVar13 = FUN_142d95d90(&local_1b8,&local_1a8,&local_1d8);
      FUN_14063eb30(&local_1d8,uVar13);
      if (local_e8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_e8 = local_1d8;
      local_e0 = (int)local_1d0;
      local_dc = local_1d0._4_4_;
      iVar7 = MNP_OverrideOutput_WC(&DAT_14588c1a4);
      local_1d8 = L",";
      local_1d0 = &DAT_14588c1a4 + (longlong)iVar7 * 2;
      uVar13 = FUN_142d95d90(&local_1b8,&local_1a8,&local_1d8);
      FUN_14063eb30(&local_1d8,uVar13);
      if (local_d8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_d8 = local_1d8;
      local_d0 = (int)local_1d0;
      local_cc = local_1d0._4_4_;
      iVar7 = MNP_OverrideOutput_WC(&DAT_14588c1a8);
      local_1d8 = L")";
      local_1d0 = &DAT_14588c1a8 + (longlong)iVar7 * 2;
      uVar13 = FUN_142d95d90(&local_1b8,&local_1a8,&local_1d8);
      FUN_14063eb30(&local_1d8,uVar13);
      if (local_c8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_c8 = local_1d8;
      local_c0 = (int)local_1d0;
      local_bc = local_1d0._4_4_;
      cVar3 = FString::IsNumeric(ppwVar21);
      if (((cVar3 == '\0') || (cVar3 = FString::IsNumeric(&local_e8), cVar3 == '\0')) ||
         ((cVar3 = FString::IsNumeric(&local_d8), cVar3 == '\0' ||
          (cVar3 = FString::IsNumeric(&local_c8), cVar3 == '\0')))) {
        lVar17 = 4;
        puVar18 = local_b8;
        lVar20 = 4;
        do {
          puVar1 = puVar18 + -2;
          puVar18 = puVar18 + -2;
          lVar20 = lVar20 + -1;
          if (*puVar1 != 0) {
            FMemory::Free();
          }
        } while (lVar20 != 0);
        do {
          ppwVar2 = ppwVar21 + -2;
          ppwVar21 = ppwVar21 + -2;
          lVar17 = lVar17 + -1;
          if (*ppwVar2 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        } while (lVar17 != 0);
      }
      else {
        pwVar15 = L"";
        if (local_c0 != 0) {
          pwVar15 = local_c8;
        }
        dVar26 = _wtof(pwVar15);
        pwVar15 = L"";
        if (local_d0 != 0) {
          pwVar15 = local_d8;
        }
        dVar27 = _wtof(pwVar15);
        pwVar15 = L"";
        if (local_e0 != 0) {
          pwVar15 = local_e8;
        }
        dVar28 = _wtof(pwVar15);
        pwVar15 = L"";
        if (local_f0 != 0) {
          pwVar15 = local_f8;
        }
        dVar29 = _wtof(pwVar15);
        if (local_178 == 0) {
          local_1c8 = local_170;
          uStack_1c0 = (wchar_t *)local_198[0];
          local_1d8 = (wchar_t *)CONCAT44((float)dVar28,(float)dVar29);
          local_1d0 = (undefined *)CONCAT44((float)dVar26,(float)dVar27);
          local_1b8 = (wchar_t *)CONCAT44((float)dVar24,(float)dVar25);
          uStack_1b0 = (wchar_t *)CONCAT44((float)dVar22,(float)dVar23);
          puVar12 = (undefined8 *)FUN_14063eb30(local_198,&local_1c8);
          if (*(int *)(puVar12 + 1) != 0) {
            puVar19 = (undefined2 *)*puVar12;
          }
          puVar12 = (undefined8 *)FName::FName(&local_1a8,puVar19,1);
          bVar4 = FUN_142586750(puVar9,*puVar12,&local_1b8,&local_1d8);
          if (local_198[0] != 0) {
            FMemory::Free();
          }
          lVar17 = 4;
          puVar18 = local_b8;
          lVar20 = 4;
          do {
            puVar1 = puVar18 + -2;
            puVar18 = puVar18 + -2;
            lVar20 = lVar20 + -1;
            if (*puVar1 != 0) {
              FMemory::Free();
            }
          } while (lVar20 != 0);
          do {
            ppwVar2 = ppwVar21 + -2;
            ppwVar21 = ppwVar21 + -2;
            lVar17 = lVar17 + -1;
            if (*ppwVar2 != (wchar_t *)0x0) {
              FMemory::Free();
            }
          } while (lVar17 != 0);
          FUN_1404bed90(param_4);
          return (ulonglong)bVar4;
        }
        if (local_178 == 1) {
          local_1c8 = local_170;
          uStack_1c0 = (wchar_t *)local_198[0];
          local_1d8 = (wchar_t *)CONCAT44((float)dVar24,(float)dVar25);
          local_1d0 = (undefined *)CONCAT44((float)dVar22,(float)dVar23);
          local_1b8 = (wchar_t *)CONCAT44((float)dVar28,(float)dVar29);
          uStack_1b0 = (wchar_t *)CONCAT44((float)dVar26,(float)dVar27);
          puVar12 = (undefined8 *)FUN_14063eb30(local_198,&local_1c8);
          if (*(int *)(puVar12 + 1) != 0) {
            puVar19 = (undefined2 *)*puVar12;
          }
          puVar12 = (undefined8 *)FName::FName(&local_1a8,puVar19,1);
          bVar4 = FUN_142586750(puVar9,*puVar12,&local_1b8,&local_1d8);
          if (local_198[0] != 0) {
            FMemory::Free();
          }
          lVar17 = 4;
          puVar18 = local_b8;
          lVar20 = 4;
          do {
            puVar1 = puVar18 + -2;
            puVar18 = puVar18 + -2;
            lVar20 = lVar20 + -1;
            if (*puVar1 != 0) {
              FMemory::Free();
            }
          } while (lVar20 != 0);
          do {
            ppwVar2 = ppwVar21 + -2;
            ppwVar21 = ppwVar21 + -2;
            lVar17 = lVar17 + -1;
            if (*ppwVar2 != (wchar_t *)0x0) {
              FMemory::Free();
            }
          } while (lVar17 != 0);
          FUN_1404bed90(param_4);
          return (ulonglong)bVar4;
        }
        lVar17 = 4;
        puVar18 = local_b8;
        lVar20 = 4;
        do {
          puVar1 = puVar18 + -2;
          puVar18 = puVar18 + -2;
          lVar20 = lVar20 + -1;
          if (*puVar1 != 0) {
            FMemory::Free();
          }
        } while (lVar20 != 0);
        do {
          ppwVar2 = ppwVar21 + -2;
          ppwVar21 = ppwVar21 + -2;
          lVar17 = lVar17 + -1;
          if (*ppwVar2 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        } while (lVar17 != 0);
      }
    }
  }
  uVar14 = FUN_1404bed90(param_4);
  return uVar14 & 0xffffffffffffff00;
}



// FUNCTION 142d8a9b0 FUN_142d8a9b0 body=1228 status=ok
// SIG undefined FUN_142d8a9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d8a9b0(int param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  bool bVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *_Src_00;
  longlong lVar12;
  undefined *puVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  longlong local_80;
  void *local_78;
  longlong local_70;
  wchar_t *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  puVar6 = PTR_DAT_1466ad5e0;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  puVar8 = (undefined *)0x0;
  local_b0 = puVar8;
  local_84 = param_1;
  local_80 = param_4;
  local_70 = param_2;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar2 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    local_b0 = puVar6 + (longlong)iVar2 * 2;
  }
  local_b8 = puVar6;
  FUN_142d95e90(param_3,&local_68,&local_b8);
  if (local_48 == '\0') {
    lVar14 = param_3[1];
    _Src_00 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_58;
    param_3[1] = local_50;
    _Src_00 = local_68;
    lVar14 = local_60;
  }
  puVar6 = PTR_DAT_1466ad5e0;
  puVar7 = puVar8;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar2 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar7 = puVar6 + (longlong)iVar2 * 2;
  }
  local_b8 = puVar6;
  local_b0 = puVar7;
  FUN_142d95e90(param_3,&local_68,&local_b8);
  if (local_48 == '\0') {
    pwVar10 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_58;
    param_3[1] = local_50;
    pwVar10 = local_68;
  }
  local_88 = _wtoi(pwVar10);
  puVar6 = PTR_DAT_1466ad5e0;
  puVar7 = puVar8;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar2 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar7 = puVar6 + (longlong)iVar2 * 2;
  }
  local_b8 = puVar6;
  local_b0 = puVar7;
  FUN_142d95e90(param_3,&local_68,&local_b8);
  if (local_48 == '\0') {
    lVar11 = param_3[1];
    pwVar10 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_58;
    param_3[1] = local_50;
    lVar11 = local_60;
    pwVar10 = local_68;
  }
  local_78 = (void *)*param_3;
  lVar12 = lVar14 - (longlong)_Src_00 >> 1;
  lVar14 = param_3[1];
  local_a8 = (void *)0x0;
  local_a0 = 0;
  if (lVar12 != 0) {
    iVar3 = (int)(lVar12 + 1U);
    puVar6 = puVar8;
    iVar2 = 0;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8,lVar12 + 1U & 0xffffffff);
      puVar6 = (undefined *)(local_a0 & 0xffffffff);
      iVar2 = local_a0._4_4_;
    }
    iVar3 = (int)puVar6 + iVar3;
    local_a0 = CONCAT44(local_a0._4_4_,iVar3);
    if (iVar2 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
    }
    _guard_xfg_dispatch_icall_nop(local_a8,_Src_00,lVar12 * 2);
    *(undefined2 *)((longlong)local_a8 + (longlong)((int)local_a0 + -1) * 2) = 0;
  }
  plVar4 = (longlong *)FUN_142d82f20(&local_a8);
  plVar5 = plVar4;
  if (local_a8 != (void *)0x0) {
    plVar5 = (longlong *)FMemory::Free();
  }
  lVar12 = local_80;
  if (plVar4 == (longlong *)0x0) {
    if (*(int *)(local_80 + 0x40) != 0) {
      plVar5 = *(longlong **)(local_80 + 0x30);
      plVar4 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        plVar4 = (longlong *)(local_80 + 0x10);
      }
      if (plVar4 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (*(longlong *)(lVar12 + 0x30) != 0) {
      plVar5 = (longlong *)FMemory::Free();
    }
    return (ulonglong)plVar5 & 0xffffffffffffff00;
  }
  local_98 = (void *)0x0;
  lVar11 = lVar11 - (longlong)pwVar10 >> 1;
  local_90 = 0;
  if (lVar11 != 0) {
    iVar3 = (int)(lVar11 + 1U);
    puVar6 = puVar8;
    iVar2 = 0;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,lVar11 + 1U & 0xffffffff);
      puVar6 = (undefined *)(local_90 & 0xffffffff);
      iVar2 = local_90._4_4_;
    }
    iVar3 = (int)puVar6 + iVar3;
    local_90 = CONCAT44(local_90._4_4_,iVar3);
    if (iVar2 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
    }
    _guard_xfg_dispatch_icall_nop(local_98,pwVar10,lVar11 * 2);
    *(undefined2 *)((longlong)local_98 + (longlong)((int)local_90 + -1) * 2) = 0;
  }
  puVar6 = (undefined *)FUN_142d82f20(&local_98);
  if (puVar6 == (undefined *)0x0) {
LAB_142d8ac8a:
    puVar6 = puVar8;
  }
  else {
    lVar12 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(puVar6 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142d8ac8a;
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  _Src = local_78;
  if ((lVar11 != 0) && (puVar6 == (undefined *)0x0)) goto LAB_142d8adcc;
  local_b8 = (undefined *)0x0;
  lVar14 = lVar14 - (longlong)local_78 >> 1;
  local_b0 = (undefined *)0x0;
  if (lVar14 != 0) {
    iVar3 = (int)(lVar14 + 1U);
    puVar7 = puVar8;
    iVar2 = 0;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,lVar14 + 1U & 0xffffffff);
      puVar7 = (undefined *)((ulonglong)local_b0 & 0xffffffff);
      iVar2 = local_b0._4_4_;
    }
    iVar3 = (int)puVar7 + iVar3;
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar3);
    if (iVar2 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
    }
    _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar14 * 2);
    *(undefined2 *)(local_b8 + (longlong)((int)local_b0 + -1) * 2) = 0;
  }
  puVar7 = (undefined *)FUN_142d82f20(&local_b8);
  if (puVar7 == (undefined *)0x0) {
LAB_142d8ad50:
    puVar7 = puVar8;
  }
  else {
    lVar11 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(puVar7 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142d8ad50;
  }
  if (local_b8 != (undefined *)0x0) {
    FMemory::Free();
  }
  iVar2 = local_84;
  if ((lVar14 == 0) || (puVar7 != (undefined *)0x0)) {
    puVar13 = puVar6;
    if (local_84 == 0) {
      puVar13 = puVar7;
      puVar7 = puVar6;
    }
    lVar14 = FUN_1429f11d0();
    iVar3 = local_88;
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
        lVar14 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar8 = (undefined *)(**(code **)(*plVar4 + 0x560))(plVar4,local_88);
    }
    if (puVar8 == puVar7) {
      lVar14 = FUN_1429f11d0();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
          lVar14 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*plVar4 + 0x568))(plVar4,iVar3,puVar13);
        uVar9 = 1;
        if ((*(byte *)(local_70 + 4) & 1) != 0) {
          if (iVar2 == 0) {
            (**(code **)(*plVar4 + 0x268))();
          }
          else {
            (**(code **)(*plVar4 + 0x270))(plVar4,0);
          }
        }
      }
      else {
        uVar9 = 0;
      }
      FUN_1404bed90(local_80);
      return uVar9;
    }
  }
LAB_142d8adcc:
  uVar9 = FUN_1404bed90(local_80);
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 142d8ae80 FUN_142d8ae80 body=1378 status=ok
// SIG undefined FUN_142d8ae80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d8ae80(uint param_1,longlong param_2,short *param_3,char param_4,longlong param_5,
                       undefined8 param_6)

{
  short sVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  short sVar8;
  short sVar9;
  longlong *plVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  bool bVar14;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong local_1c8;
  longlong lStack_1c0;
  char local_1b8;
  char local_1b7;
  char local_1b6;
  short *local_1b0;
  int local_1a8;
  char local_1a0;
  undefined1 local_198 [80];
  undefined1 local_148 [16];
  undefined1 local_138 [80];
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined4 local_a0;
  longlong local_60;
  longlong *local_48;
  
  plVar5 = (longlong *)(DAT_1468387a8 ^ (ulonglong)auStack_1f8);
  local_48 = plVar5;
  if (param_2 != 0) {
    iVar4 = MNP_OverrideOutput_WC(param_2);
    lStack_1c0 = param_2 + (longlong)iVar4 * 2;
    local_1c8 = param_2;
    uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_198,param_5);
    plVar5 = (longlong *)FUN_142d7a140(&local_1b8,&local_1c8,uVar6);
    psVar13 = local_1b0;
    if (local_1b8 != '\0') {
      plVar5 = (longlong *)0x0;
      if ((local_1b7 == '\x01') && ((byte)(local_1b6 - 1U) < 0xb)) {
        if (param_4 != '\0') goto LAB_142d8b028;
        if ((param_3 == (short *)0x0) || (*param_3 == 0)) {
          if (local_1a8 < 2) goto LAB_142d8b028;
          if (local_1b0 != (short *)0x0) {
            FMemory::Free();
          }
        }
        else {
          plVar5 = (longlong *)FUN_14063db30(local_148,param_3);
          if (local_1a0 != '\0') {
LAB_142d8b028:
            bVar3 = 0;
            switch(local_1b6) {
            case '\x01':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_198,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d8c5b0(param_1,&local_1b8,&local_1c8,uVar6);
              break;
            case '\x02':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_198,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d891d0(param_1,&local_1b8,&local_1c8,uVar6);
              break;
            case '\x03':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_198,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d88cc0(param_1,&local_1b8,&local_1c8,uVar6);
              break;
            case '\x04':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_198,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d8b410(param_1,&local_1b8,&local_1c8,uVar6);
              break;
            case '\x05':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_198,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d8b8a0(param_1,&local_1b8,&local_1c8,uVar6);
              break;
            case '\x06':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_198,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d8cb40(param_1,&local_1b8,&local_1c8,uVar6);
              psVar13 = local_1b0;
              break;
            case '\a':
              lVar7 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_198,param_5);
              if (param_1 < 2) {
                FUN_142d792e0(local_e8,&local_1c8);
                uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                  (local_138,lVar7);
                bVar3 = FUN_142d7bde0(local_e8,&local_1b8,param_1 == 0,uVar6);
                if (local_60 != 0) {
                  FMemory::Free();
                }
                local_a0 = 0;
                if (local_a8 != 0) {
                  FMemory::Free();
                }
                TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (local_e8);
                if (*(int *)(lVar7 + 0x40) != 0) {
                  plVar5 = *(longlong **)(lVar7 + 0x30);
                  if (*(longlong **)(lVar7 + 0x30) == (longlong *)0x0) {
                    plVar5 = (longlong *)(lVar7 + 0x10);
                  }
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5,0);
                  }
                }
                if (*(longlong *)(lVar7 + 0x30) != 0) {
                  FMemory::Free();
                }
              }
              else {
                if (*(int *)(lVar7 + 0x40) != 0) {
                  plVar5 = *(longlong **)(lVar7 + 0x30);
                  if (*(longlong **)(lVar7 + 0x30) == (longlong *)0x0) {
                    plVar5 = (longlong *)(lVar7 + 0x10);
                  }
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5,0);
                  }
                }
                if (*(longlong *)(lVar7 + 0x30) != 0) {
                  FMemory::Free();
                }
                bVar3 = 0;
              }
              break;
            case '\b':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_138,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d8a9b0(param_1,&local_1b8,&local_1c8,uVar6);
              break;
            case '\t':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_138,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d89b10(param_1,&local_1b8,&local_1c8,uVar6);
              break;
            case '\n':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_138,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d8bd60(param_1,&local_1b8,&local_1c8,uVar6);
              psVar13 = local_1b0;
              break;
            case '\v':
              uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                (local_138,param_5);
              local_1d8 = param_6;
              bVar3 = FUN_142d8d350(param_1,&local_1b8,&local_1c8,uVar6);
              psVar13 = local_1b0;
            }
            if (psVar13 != (short *)0x0) {
              FMemory::Free(psVar13);
            }
            FUN_1404bed90(param_5);
            return (ulonglong)bVar3;
          }
          psVar12 = &DAT_143f3eda8;
          if (local_1a8 != 0) {
            psVar12 = psVar13;
          }
          if (psVar12 == (short *)0x0) {
            bVar14 = (plVar5[1] - *plVar5 & 0xfffffffffffffffeU) == 0;
          }
          else {
            sVar8 = *psVar12;
            psVar2 = (short *)*plVar5;
            psVar11 = psVar2;
            if (sVar8 != 0) {
              do {
                if (psVar11 == (short *)plVar5[1]) {
                  bVar14 = sVar8 == 0;
                  goto LAB_142d8afdf;
                }
                sVar1 = *psVar11;
                sVar9 = sVar8 + -0x20;
                if (0x19 < (ushort)(sVar8 - 0x61U)) {
                  sVar9 = sVar8;
                }
                sVar8 = sVar1 + -0x20;
                if (0x19 < (ushort)(sVar1 - 0x61U)) {
                  sVar8 = sVar1;
                }
                if (sVar9 != sVar8) goto LAB_142d8afe6;
                sVar8 = *(short *)((longlong)psVar12 + (2 - (longlong)psVar2) + (longlong)psVar11);
                psVar11 = psVar11 + 1;
              } while (sVar8 != 0);
            }
            bVar14 = psVar11 == (short *)plVar5[1];
          }
LAB_142d8afdf:
          if (bVar14) goto LAB_142d8b028;
LAB_142d8afe6:
          if (psVar13 != (short *)0x0) {
            FMemory::Free(psVar13);
            plVar5 = (longlong *)FUN_1404bed90(param_5);
            goto LAB_142d8b3bf;
          }
        }
        plVar5 = (longlong *)FUN_1404bed90(param_5);
        goto LAB_142d8b3bf;
      }
    }
    if (local_1b0 != (short *)0x0) {
      plVar5 = (longlong *)FMemory::Free();
    }
  }
  if (*(int *)(param_5 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_5 + 0x30);
    plVar10 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      plVar10 = (longlong *)(param_5 + 0x10);
    }
    if (plVar10 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    plVar5 = (longlong *)FMemory::Free();
  }
LAB_142d8b3bf:
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}



// FUNCTION 142d8b410 FUN_142d8b410 body=1157 status=ok
// SIG undefined FUN_142d8b410(void)

ulonglong FUN_142d8b410(int param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                       longlong *param_5)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  longlong *plVar10;
  undefined *local_e8;
  undefined *local_e0;
  wchar_t *local_d8;
  void *local_d0;
  int local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  void *local_48;
  int local_40;
  
  if (param_1 == 0) {
    if (param_5 == (longlong *)0x0) {
LAB_142d8b80c:
      uVar6 = 0;
      local_d8 = L"ContextObj was not a savegame - exiting";
      if (*(int *)(param_4 + 8) != 0) {
        plVar10 = (longlong *)param_4[6];
        if ((longlong *)param_4[6] == (longlong *)0x0) {
          plVar10 = param_4 + 2;
        }
        if (plVar10 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar10 + 8))();
        }
      }
      in_RAX = (*(code *)*param_4)(uVar6,&local_d8);
    }
    else {
      lVar5 = FUN_142e5bfe0();
      puVar2 = PTR_DAT_1466ad5e0;
      if ((*(int *)(param_5[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_5[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142d8b80c;
      puVar9 = (undefined *)0x0;
      local_e0 = puVar9;
      if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
        iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
        local_e0 = puVar2 + (longlong)iVar4 * 2;
      }
      local_e8 = puVar2;
      uVar6 = FUN_142d95d90(param_3,&local_d0,&local_e8);
      FUN_14063eb30(&local_48,uVar6);
      puVar2 = PTR_DAT_1466ad5e0;
      puVar7 = puVar9;
      if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
        iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
        puVar7 = puVar2 + (longlong)iVar4 * 2;
      }
      local_e8 = puVar2;
      local_e0 = puVar7;
      puVar8 = (undefined8 *)FUN_142d95d90(param_3,&local_d0,&local_e8);
      iVar4 = _wtoi((wchar_t *)*puVar8);
      puVar2 = PTR_DAT_1466ad5e0;
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,iVar4);
      puVar7 = puVar9;
      if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
        iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
        puVar7 = puVar2 + (longlong)iVar4 * 2;
      }
      local_e8 = puVar2;
      local_e0 = puVar7;
      uVar6 = FUN_142d95d90(param_3,&local_d0,&local_e8);
      FUN_14063eb30(&local_58,uVar6);
      FUN_142d78060(&local_68,param_3);
      FUN_142d78060(&local_e8,param_3);
      FUN_142d78060(&local_d0,param_3);
      puVar2 = local_e0;
      if (local_60 != 0) {
        iVar4 = (int)local_e0;
        lVar5 = (longlong)(int)local_e0;
        if ((local_60 == (int)local_e0) && (local_60 == local_c8)) {
          local_c0 = (void *)0x0;
          local_b8 = local_40;
          if (local_40 == 0) {
            local_b4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_40,0);
            _guard_xfg_dispatch_icall_nop(local_c0,local_48,(longlong)local_40 * 2);
          }
          local_b0 = SUB81(local_d8,0);
          local_a8 = (void *)0x0;
          local_a0 = local_50;
          if (local_50 == 0) {
            local_9c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_50,0);
            _guard_xfg_dispatch_icall_nop(local_a8,local_58,(longlong)local_50 * 2);
          }
          local_98 = (void *)0x0;
          local_90 = local_60;
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_98,local_60,0);
          _guard_xfg_dispatch_icall_nop(local_98,local_68,(longlong)local_60 << 2);
          puVar9 = local_e8;
          local_88 = (void *)0x0;
          local_80 = iVar4;
          if (iVar4 == 0) {
            local_7c = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(&local_88,(ulonglong)puVar2 & 0xffffffff,0)
            ;
            _guard_xfg_dispatch_icall_nop(local_88,puVar9,lVar5 << 2);
          }
          local_78 = (void *)0x0;
          local_70 = local_c8;
          if (local_c8 == 0) {
            local_6c = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(&local_78,local_c8,0);
            _guard_xfg_dispatch_icall_nop(local_78,local_d0,(longlong)local_c8 << 2);
          }
          bVar3 = (**(code **)(*param_5 + 0x280))(param_5,&local_c0);
          if (local_78 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_88 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_98 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_a8 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_c0 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_d0 != (void *)0x0) {
            FMemory::Free(local_d0);
          }
          if (puVar9 != (undefined *)0x0) {
            FMemory::Free(puVar9);
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          FUN_1404bed90(param_4);
          return (ulonglong)bVar3;
        }
      }
      local_d8 = 
      L"Invalid Objectives, ObjectiveProgresses, or DesiredProgresses supplied - must be non-empty, equal-length lists of integers."
      ;
      if (*(int *)(param_4 + 8) != 0) {
        plVar10 = (longlong *)param_4[6];
        if ((longlong *)param_4[6] == (longlong *)0x0) {
          plVar10 = param_4 + 2;
        }
        if (plVar10 != (longlong *)0x0) {
          puVar9 = (undefined *)(**(code **)(*plVar10 + 8))();
        }
      }
      in_RAX = (*(code *)*param_4)(puVar9,&local_d8);
      if (local_d0 != (void *)0x0) {
        in_RAX = FMemory::Free();
      }
      if (local_e8 != (undefined *)0x0) {
        in_RAX = FMemory::Free();
      }
      if (local_68 != (void *)0x0) {
        in_RAX = FMemory::Free();
      }
      if (local_58 != (void *)0x0) {
        in_RAX = FMemory::Free();
      }
      if (local_48 != (void *)0x0) {
        in_RAX = FMemory::Free();
      }
    }
    if (*(int *)(param_4 + 8) == 0) goto LAB_142d8b86a;
    in_RAX = param_4[6];
    puVar8 = (undefined8 *)0x0;
    if (in_RAX == 0) {
      puVar8 = param_4 + 2;
    }
  }
  else {
    if (*(int *)(param_4 + 8) == 0) goto LAB_142d8b86a;
    in_RAX = param_4[6];
    puVar8 = (undefined8 *)0x0;
    if (in_RAX == 0) {
      puVar8 = param_4 + 2;
    }
  }
  plVar10 = (longlong *)((ulonglong)puVar8 | in_RAX);
  if (plVar10 != (longlong *)0x0) {
    in_RAX = (**(code **)(*plVar10 + 0x10))(plVar10,0);
  }
LAB_142d8b86a:
  if (param_4[6] != 0) {
    in_RAX = FMemory::Free();
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142d8b8a0 FUN_142d8b8a0 body=1202 status=ok
// SIG undefined FUN_142d8b8a0(void)

ulonglong FUN_142d8b8a0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                       longlong *param_5)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined *local_108;
  undefined *local_100;
  wchar_t *local_f8;
  void *local_f0;
  int local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  void *local_78;
  int local_70;
  void *local_68;
  int local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_1 == 0) {
    if (param_5 != (longlong *)0x0) {
      lVar5 = FUN_142e5bfe0();
      local_108 = PTR_DAT_1466ad5e0;
      if ((*(int *)(param_5[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_5[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        puVar9 = (undefined *)0x0;
        local_100 = puVar9;
        if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
          iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
          local_100 = local_108 + (longlong)iVar4 * 2;
        }
        uVar6 = FUN_142d95d90(param_3,&local_f0,&local_108);
        FUN_14063eb30(&local_78,uVar6);
        puVar2 = PTR_DAT_1466ad5e0;
        puVar7 = puVar9;
        if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
          iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
          puVar7 = puVar2 + (longlong)iVar4 * 2;
        }
        local_108 = puVar2;
        local_100 = puVar7;
        puVar8 = (undefined8 *)FUN_142d95d90(param_3,&local_f0,&local_108);
        iVar4 = _wtoi((wchar_t *)*puVar8);
        puVar2 = PTR_DAT_1466ad5e0;
        local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,iVar4);
        puVar7 = puVar9;
        if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
          iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
          puVar7 = puVar2 + (longlong)iVar4 * 2;
        }
        local_108 = puVar2;
        local_100 = puVar7;
        uVar6 = FUN_142d95d90(param_3,&local_f0,&local_108);
        FUN_14063eb30(&local_108,uVar6);
        FUN_142d78060(&local_88,param_3);
        FUN_142d78060(&local_68,param_3);
        if ((local_80 == 0) || (local_80 != local_60)) {
          local_f8 = 
          L"Invalid Objectives or ObjectiveProgresses supplied - must be non-empty, equal-length lists of integers."
          ;
          if (*(int *)(param_4 + 8) != 0) {
            plVar11 = (longlong *)param_4[6];
            if ((longlong *)param_4[6] == (longlong *)0x0) {
              plVar11 = param_4 + 2;
            }
            if (plVar11 != (longlong *)0x0) {
              puVar9 = (undefined *)(**(code **)(*plVar11 + 8))();
            }
          }
          (*(code *)*param_4)(puVar9,&local_f8);
          if (local_68 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_88 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_108 != (undefined *)0x0) {
            FMemory::Free();
          }
          if (local_78 != (void *)0x0) {
            FMemory::Free();
          }
          uVar10 = FUN_1404bed90(param_4);
          uVar10 = uVar10 & 0xffffffffffffff00;
        }
        else {
          uVar6 = FUN_14063db30(local_58,PTR_DAT_1466ad5e0);
          uVar6 = FUN_142d95d90(param_3,local_48,uVar6);
          FUN_14063eb30(&local_f0,uVar6);
          local_e0 = (void *)0x0;
          local_d8 = local_70;
          if (local_70 == 0) {
            local_d4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_70,0);
            _guard_xfg_dispatch_icall_nop(local_e0,local_78,(longlong)local_70 * 2);
          }
          puVar9 = local_108;
          lVar5 = (longlong)(int)local_100;
          local_d0 = SUB81(local_f8,0);
          local_c8 = (void *)0x0;
          local_c0 = (int)local_100;
          if ((int)local_100 == 0) {
            local_bc = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&local_c8,(ulonglong)local_100 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_c8,puVar9,lVar5 * 2);
          }
          local_b8 = (void *)0x0;
          local_b0 = local_80;
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_b8,local_80,0);
          _guard_xfg_dispatch_icall_nop(local_b8,local_88,(longlong)local_80 << 2);
          local_a8 = (void *)0x0;
          local_a0 = local_60;
          if (local_60 == 0) {
            local_9c = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(&local_a8,local_60,0);
            _guard_xfg_dispatch_icall_nop(local_a8,local_68,(longlong)local_60 << 2);
          }
          local_98 = (void *)0x0;
          local_90 = local_e8;
          if (local_e8 == 0) {
            local_8c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_e8,0);
            _guard_xfg_dispatch_icall_nop(local_98,local_f0,(longlong)local_e8 * 2);
          }
          bVar3 = (**(code **)(*param_5 + 0x278))(param_5,&local_e0);
          if (local_98 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_a8 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_b8 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_e0 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_f0 != (void *)0x0) {
            FMemory::Free(local_f0);
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          if (local_88 != (void *)0x0) {
            FMemory::Free();
          }
          if (puVar9 != (undefined *)0x0) {
            FMemory::Free(puVar9);
          }
          if (local_78 != (void *)0x0) {
            FMemory::Free();
          }
          FUN_1404bed90(param_4);
          uVar10 = (ulonglong)bVar3;
        }
        return uVar10;
      }
    }
    plVar13 = (longlong *)0x0;
    local_f8 = L"ContextObj was not a savegame - exiting";
    plVar11 = plVar13;
    if (*(int *)(param_4 + 8) != 0) {
      plVar12 = (longlong *)param_4[6];
      if ((longlong *)param_4[6] == (longlong *)0x0) {
        plVar12 = param_4 + 2;
      }
      if (plVar12 != (longlong *)0x0) {
        plVar11 = (longlong *)(**(code **)(*plVar12 + 8))();
      }
    }
    in_RAX = (*(code *)*param_4)(plVar11,&local_f8);
    if (*(int *)(param_4 + 8) == 0) goto LAB_142d8bd32;
    in_RAX = param_4[6];
    if (in_RAX == 0) {
      plVar13 = param_4 + 2;
    }
  }
  else {
    if (*(int *)(param_4 + 8) == 0) goto LAB_142d8bd32;
    in_RAX = param_4[6];
    plVar13 = (longlong *)0x0;
    if (in_RAX == 0) {
      plVar13 = param_4 + 2;
    }
  }
  plVar13 = (longlong *)((ulonglong)plVar13 | in_RAX);
  if (plVar13 != (longlong *)0x0) {
    in_RAX = (**(code **)(*plVar13 + 0x10))(plVar13,0);
  }
LAB_142d8bd32:
  if (param_4[6] != 0) {
    in_RAX = FMemory::Free();
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142d8bd60 FUN_142d8bd60 body=2125 status=ok
// SIG undefined FUN_142d8bd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d8bd60(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  void *_Src;
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined *puVar11;
  longlong lVar12;
  short *psVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_158;
  undefined8 uStack_150;
  longlong *local_148;
  int local_140;
  int local_13c;
  longlong *local_138;
  int local_130;
  int local_12c;
  longlong *local_128;
  int iStack_120;
  int iStack_11c;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  int local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined1 local_d0 [40];
  undefined1 local_a8;
  wchar_t *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_80;
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
  
  puVar11 = PTR_DAT_1466ad5e0;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar10 = (longlong *)0x0;
  uStack_150 = plVar10;
  local_100 = param_4;
  local_d8 = param_2;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar3 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    uStack_150 = (longlong *)(puVar11 + (longlong)iVar3 * 2);
  }
  local_158 = (longlong *)puVar11;
  plVar4 = (longlong *)FUN_142d95d90(param_3,&local_148,&local_158);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  local_12c = 0;
  lVar12 = plVar4[1] - *plVar4 >> 1;
  plVar15 = plVar10;
  if (lVar12 != 0) {
    iVar16 = (int)(lVar12 + 1U);
    iVar3 = 0;
    if (0 < iVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,lVar12 + 1U & 0xffffffff);
      iVar3 = local_130;
    }
    local_130 = iVar16 + iVar3;
    if (local_12c < local_130) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,iVar3);
    }
    iVar3 = local_130;
    plVar15 = local_138;
    _guard_xfg_dispatch_icall_nop(local_138,(void *)*plVar4,lVar12 * 2);
    *(short *)((longlong)plVar15 + (longlong)(iVar3 + -1) * 2) = 0;
  }
  puVar11 = PTR_DAT_1466ad5e0;
  plVar4 = plVar10;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar3 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    plVar4 = (longlong *)(puVar11 + (longlong)iVar3 * 2);
  }
  local_158 = (longlong *)puVar11;
  uStack_150 = plVar4;
  plVar5 = (longlong *)FUN_142d95d90(param_3,&local_128,&local_158);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_13c = 0;
  lVar12 = plVar5[1] - *plVar5 >> 1;
  plVar4 = plVar10;
  if (lVar12 != 0) {
    iVar16 = (int)(lVar12 + 1U);
    iVar3 = 0;
    if (0 < iVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148,lVar12 + 1U & 0xffffffff);
      iVar3 = local_140;
    }
    local_140 = iVar16 + iVar3;
    if (local_13c < local_140) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,iVar3);
    }
    iVar3 = local_140;
    plVar4 = local_148;
    _guard_xfg_dispatch_icall_nop(local_148,(void *)*plVar5,lVar12 * 2);
    *(short *)((longlong)plVar4 + (longlong)(iVar3 + -1) * 2) = 0;
  }
  puVar11 = PTR_DAT_1466ad5e0;
  plVar5 = plVar10;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar3 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    plVar5 = (longlong *)(puVar11 + (longlong)iVar3 * 2);
  }
  local_158 = (longlong *)puVar11;
  uStack_150 = plVar5;
  local_118 = (longlong *)FUN_142d95d90(param_3,&local_f8,&local_158);
  local_128 = (longlong *)0x0;
  iStack_120 = 0;
  lVar12 = local_118[1] - *local_118 >> 1;
  iStack_11c = 0;
  plVar5 = plVar10;
  if (lVar12 != 0) {
    iVar3 = (int)(lVar12 + 1U);
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128,lVar12 + 1U & 0xffffffff);
    }
    iStack_120 = iVar3 + iStack_120;
    if (iStack_11c < iStack_120) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128);
    }
    iVar3 = iStack_120;
    plVar5 = local_128;
    _guard_xfg_dispatch_icall_nop(local_128,(void *)*local_118,lVar12 * 2);
    *(short *)((longlong)plVar5 + (longlong)(iVar3 + -1) * 2) = 0;
  }
  puVar11 = PTR_DAT_1466ad5e0;
  plVar6 = plVar10;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar3 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    plVar6 = (longlong *)(puVar11 + (longlong)iVar3 * 2);
  }
  local_158 = (longlong *)puVar11;
  uStack_150 = plVar6;
  FUN_142d95e90(param_3,&local_a0,&local_158);
  if (local_80 == '\0') {
    local_98 = param_3[1];
    local_a0 = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_90;
    param_3[1] = local_88;
  }
  plVar6 = plVar10;
  if (local_98 - (longlong)local_a0 >> 1 != 0) {
    uVar2 = _wtoi(local_a0);
    plVar6 = (longlong *)(ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      plVar6 = (longlong *)0x0;
    }
  }
  local_158 = (longlong *)*param_3;
  plVar14 = (longlong *)param_3[1];
  plVar9 = (longlong *)((longlong)local_158 + (longlong)(int)plVar6 * 2);
  if (plVar9 < plVar14) {
    *param_3 = (short *)((longlong)local_158 + (longlong)(int)plVar6 * 2);
    plVar14 = plVar9;
  }
  puVar11 = PTR_DAT_1466ad5e0;
  local_110 = plVar10;
  uStack_150 = plVar14;
  local_f8 = local_158;
  local_e8 = plVar14;
  local_e0 = plVar14;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    local_118 = plVar14;
    local_108 = plVar14;
    iVar3 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    local_e8 = local_118;
    local_110 = (longlong *)(puVar11 + (longlong)iVar3 * 2);
  }
  local_118 = (longlong *)puVar11;
  local_108 = local_e0;
  FUN_142d95e90(param_3,&local_a0,&local_118);
  if (local_80 == '\0') {
    local_108 = local_e8;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_90;
    param_3[1] = local_88;
  }
  psVar13 = &DAT_14588c1ac;
  iVar3 = MNP_OverrideOutput_WC(&DAT_14588c1ac);
  if (local_f8 != local_108) {
    do {
      if (psVar13 == &DAT_14588c1ac + iVar3) goto LAB_142d8c170;
    } while ((*(short *)((longlong)local_158 + -0x14588c1ac + (longlong)psVar13) == *psVar13) &&
            (psVar13 = psVar13 + 1,
            (longlong *)((longlong)((longlong)local_158 + -0x14588c1ac) + (longlong)psVar13) !=
            plVar14));
  }
  if (psVar13 == &DAT_14588c1ac + iVar3) {
LAB_142d8c170:
    local_158 = (longlong *)((longlong)local_158 + (longlong)iVar3 * 2);
  }
  plVar9 = local_158;
  iVar3 = MNP_OverrideOutput_WC(&DAT_14588c1b0);
  puVar11 = &DAT_14588c1b0 + (longlong)iVar3 * 2;
  plVar6 = plVar14;
  while (plVar6 != plVar9) {
    if (puVar11 == &DAT_14588c1b0) goto LAB_142d8c1c7;
    plVar6 = (longlong *)((longlong)plVar6 + -2);
    if (*(short *)plVar6 != *(short *)(puVar11 + -2)) break;
    puVar11 = puVar11 + -2;
  }
  if (puVar11 == &DAT_14588c1b0) {
LAB_142d8c1c7:
    uStack_150 = (longlong *)((longlong)plVar14 + (longlong)iVar3 * -2);
  }
  _wtoi((wchar_t *)*param_3);
  local_f8 = (longlong *)0x0;
  local_f0 = (int)local_d8[2];
  lVar12 = (longlong)local_f0;
  _Src = (void *)local_d8[1];
  if (local_f0 == 0) goto LAB_142d8c527;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0,0);
  plVar6 = local_f8;
  _guard_xfg_dispatch_icall_nop(local_f8,_Src,lVar12 * 2);
  if ((local_f0 != 0) && (local_f0 != 1)) {
    local_168 = plVar6;
    plVar9 = (longlong *)&DAT_143f3eda8;
    if (local_130 != 0) {
      plVar9 = plVar15;
    }
    FString::PrintfImpl(&local_138,L"%s/%s.%s",plVar9,plVar6);
    uVar7 = FUN_142a2f930();
    puVar8 = (undefined8 *)FName::FName(&local_d8,plVar6,1);
    local_168 = (longlong *)((ulonglong)local_168 & 0xffffffff00000000);
    plVar9 = (longlong *)StaticFindObjectFastExplicit(uVar7,*puVar8,&local_138,0);
    if (plVar9 == (longlong *)0x0) {
LAB_142d8c2d4:
      local_118 = (longlong *)0x0;
      plVar9 = plVar10;
    }
    else {
      local_118 = plVar9;
      lVar12 = FUN_142a2f930();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
          lVar12 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142d8c2d4;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (plVar9 != (longlong *)0x0) {
      local_168 = (longlong *)&DAT_143f3eda8;
      if (iStack_120 != 0) {
        local_168 = plVar5;
      }
      plVar9 = (longlong *)&DAT_143f3eda8;
      if (local_140 != 0) {
        plVar9 = plVar4;
      }
      FString::PrintfImpl(&local_148,L"%s/%s.%s",plVar9);
      uVar7 = UNodeMappingContainer::StaticClass();
      puVar8 = (undefined8 *)FName::FName(&local_f8,plVar5,1);
      local_168 = (longlong *)((ulonglong)local_168 & 0xffffffff00000000);
      plVar9 = (longlong *)StaticFindObjectFastExplicit(uVar7,*puVar8,&local_148,0);
      if (plVar9 != (longlong *)0x0) {
        lVar12 = UNodeMappingContainer::StaticClass();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
            != lVar12 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_142d8c392;
      }
      plVar9 = plVar10;
LAB_142d8c392:
      if (local_148 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (plVar9 != (longlong *)0x0) {
        FActorSpawnParameters::FActorSpawnParameters(local_d0);
        local_a8 = 1;
        local_58 = _DAT_146b33f80 & _DAT_146b33f90;
        uStack_54 = uRam0000000146b33f84 & uRam0000000146b33f94;
        uStack_50 = uRam0000000146b33f88 & uRam0000000146b33f98;
        uStack_4c = uRam0000000146b33f8c & uRam0000000146b33f9c;
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = uRam0000000146b33f8c;
        local_128 = local_158;
        iStack_120 = (int)uStack_150;
        iStack_11c = uStack_150._4_4_;
        local_68 = 0;
        uStack_60 = 0;
        FUN_14063eb30(&local_158,&local_128);
        FUN_14162d2d0(&local_78,&local_158);
        if (local_158 != (longlong *)0x0) {
          FMemory::Free();
        }
        uVar7 = AAfrPlayerState::GetPrivateStaticClass();
        plVar10 = (longlong *)FUN_142550d00(local_118,uVar7,&local_78,local_d0);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x310))(plVar10,1);
          plVar10 = (longlong *)plVar10[0x8b];
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x638))(plVar10,0);
            *(undefined4 *)(plVar10 + 0x89) = 3;
            uVar7 = UAITask_LockLogic::StaticClass();
            lVar12 = (*DAT_146aeebe0)(uVar7);
            plVar10[0x8b] = lVar12;
            *(undefined1 *)((longlong)plVar10 + 0x451) = 3;
            (**(code **)(*plVar10 + 0x928))(plVar10,plVar9);
            if (plVar6 != (longlong *)0x0) {
              FMemory::Free(plVar6);
            }
            if (plVar5 != (longlong *)0x0) {
              FMemory::Free(plVar5);
            }
            if (plVar4 != (longlong *)0x0) {
              FMemory::Free(plVar4);
            }
            if (plVar15 != (longlong *)0x0) {
              FMemory::Free(plVar15);
            }
            FUN_1404bed90(local_100);
            return 1;
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      if (plVar15 != (longlong *)0x0) {
        FMemory::Free(plVar15);
      }
      FUN_1404bed90(local_100);
      return 0;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
LAB_142d8c527:
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (plVar15 != (longlong *)0x0) {
    FMemory::Free(plVar15);
  }
  lVar12 = local_100;
  if (*(int *)(local_100 + 0x40) != 0) {
    plVar10 = *(longlong **)(local_100 + 0x30);
    if (*(longlong **)(local_100 + 0x30) == (longlong *)0x0) {
      plVar10 = (longlong *)(local_100 + 0x10);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (*(longlong *)(lVar12 + 0x30) != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142d8c5b0 FUN_142d8c5b0 body=1416 status=ok
// SIG undefined FUN_142d8c5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d8c5b0(int param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  wchar_t *_Str;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_158 [32];
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined *local_108;
  ulonglong local_100 [2];
  int local_f0;
  void *local_e8 [2];
  undefined *local_d8 [2];
  longlong local_c8;
  undefined1 local_b8 [80];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  ulonglong local_40;
  
  puVar13 = PTR_DAT_1466ad5e0;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  puVar10 = (undefined *)0x0;
  local_130 = puVar10;
  local_f0 = param_1;
  local_c8 = param_2;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar12 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    local_130 = puVar13 + (longlong)iVar12 * 2;
  }
  local_138 = puVar13;
  FUN_142d95e90(param_3,&local_68,&local_138);
  if (local_48 == '\0') {
    local_128 = (undefined *)*param_3;
    uVar14 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    uVar14 = CONCAT44(uStack_5c,uStack_60);
    *param_3 = (ulonglong)local_58;
    param_3[1] = CONCAT71(uStack_4f,local_50);
    local_128 = (undefined *)CONCAT44(uStack_64,local_68);
  }
  puVar13 = PTR_DAT_1466ad5e0;
  puVar4 = puVar10;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar12 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar4 = puVar13 + (longlong)iVar12 * 2;
  }
  local_138 = puVar13;
  local_130 = puVar4;
  FUN_142d95e90(param_3,&local_68,&local_138);
  if (local_48 == '\0') {
    local_e8[0] = (void *)*param_3;
    uVar16 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    uVar16 = CONCAT44(uStack_5c,uStack_60);
    *param_3 = (ulonglong)local_58;
    param_3[1] = CONCAT71(uStack_4f,local_50);
    local_e8[0] = (void *)CONCAT44(uStack_64,local_68);
  }
  puVar13 = PTR_DAT_1466ad5e0;
  puVar4 = puVar10;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar12 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar4 = puVar13 + (longlong)iVar12 * 2;
  }
  local_138 = puVar13;
  local_130 = puVar4;
  FUN_142d95e90(param_3,&local_68,&local_138);
  if (local_48 == '\0') {
    _Str = (wchar_t *)*param_3;
    uVar5 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    local_108 = puVar10;
    puVar13 = puVar10;
  }
  else {
    _Str = (wchar_t *)CONCAT44(uStack_64,local_68);
    uVar5 = CONCAT44(uStack_5c,uStack_60);
    *param_3 = (ulonglong)local_58;
    param_3[1] = CONCAT71(uStack_4f,local_50);
    local_108 = local_58;
    puVar13 = (undefined *)CONCAT71(uStack_4f,local_50);
  }
  puVar4 = puVar10;
  if ((longlong)(uVar5 - (longlong)_Str) >> 1 != 0) {
    uVar3 = _wtoi(_Str);
    local_108 = (undefined *)*param_3;
    puVar13 = (undefined *)param_3[1];
    puVar4 = (undefined *)(ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      puVar4 = puVar10;
    }
  }
  puVar4 = local_108 + (longlong)(int)puVar4 * 2;
  if (puVar4 < puVar13) {
    *param_3 = (ulonglong)puVar4;
    puVar13 = puVar4;
  }
  puVar4 = PTR_DAT_1466ad5e0;
  puVar6 = puVar10;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar12 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    puVar6 = puVar4 + (longlong)iVar12 * 2;
  }
  local_138 = puVar4;
  local_130 = puVar6;
  FUN_142d95e90(param_3,&local_68,&local_138);
  pvVar1 = local_128;
  if (local_48 == '\0') {
    *param_3 = 0;
    param_3[1] = 0;
    local_d8[0] = (undefined *)0x0;
    local_100[0] = 0;
  }
  else {
    local_d8[0] = local_58;
    *param_3 = (ulonglong)local_58;
    local_100[0] = CONCAT71(uStack_4f,local_50);
    param_3[1] = local_100[0];
  }
  local_138 = (undefined *)0x0;
  lVar15 = (longlong)(uVar14 - (longlong)local_128) >> 1;
  local_130 = (undefined *)0x0;
  if (lVar15 != 0) {
    iVar11 = (int)lVar15 + 1;
    puVar4 = puVar10;
    iVar12 = 0;
    if (0 < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,iVar11);
      puVar4 = (undefined *)((ulonglong)local_130 & 0xffffffff);
      iVar12 = local_130._4_4_;
    }
    iVar11 = iVar11 + (int)puVar4;
    local_130 = (undefined *)CONCAT44(local_130._4_4_,iVar11);
    if (iVar12 < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
    }
    _guard_xfg_dispatch_icall_nop(local_138,pvVar1,lVar15 * 2);
    *(undefined2 *)(local_138 + (longlong)(int)local_130 * 2 + -2) = 0;
  }
  plVar7 = (longlong *)FUN_142d82f20(&local_138);
  plVar8 = plVar7;
  if (local_138 != (undefined *)0x0) {
    plVar8 = (longlong *)FMemory::Free();
  }
  if (plVar7 != (longlong *)0x0) {
    lVar15 = (longlong)(uVar16 - (longlong)local_e8[0]) >> 1;
    local_128 = (void *)0x0;
    uStack_120 = (undefined *)0x0;
    if (lVar15 != 0) {
      iVar12 = (int)lVar15 + 1;
      iVar11 = 0;
      if (0 < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128,iVar12);
        puVar10 = (undefined *)((ulonglong)uStack_120 & 0xffffffff);
        iVar11 = uStack_120._4_4_;
      }
      iVar12 = iVar12 + (int)puVar10;
      uStack_120 = (undefined *)CONCAT44(uStack_120._4_4_,iVar12);
      if (iVar11 < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128);
        iVar12 = (int)uStack_120;
      }
      pvVar1 = local_128;
      _guard_xfg_dispatch_icall_nop(local_128,local_e8[0],lVar15 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2 + -2) = 0;
    }
    uVar9 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,param_4);
    plVar8 = (longlong *)FUN_142d831f0(&local_68,&local_128,plVar7,uVar9);
    if (local_128 != (void *)0x0) {
      plVar8 = (longlong *)FMemory::Free();
    }
    if (local_50 != '\0') {
      bVar2 = 0;
      if (local_f0 == 0) {
        local_128 = local_d8[0];
        uStack_120 = (undefined *)local_100[0];
        FUN_14063eb30(local_d8,&local_128);
        local_128 = local_108;
        uStack_120 = puVar13;
        FUN_14063eb30(local_100,&local_128);
        local_128 = (undefined *)CONCAT44(uStack_64,local_68);
        uStack_120 = (undefined *)CONCAT44(uStack_5c,uStack_60);
        local_118 = local_58;
        uVar9 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,param_4);
        bVar2 = FUN_142d7c6f0(&local_128,local_100,local_d8,uVar9);
        if (local_100[0] != 0) {
          FMemory::Free();
        }
        if (local_d8[0] != (undefined *)0x0) {
          FMemory::Free();
        }
        if ((bVar2 != 0) && ((*(byte *)(local_c8 + 4) & 1) != 0)) {
          (**(code **)(*plVar7 + 0x268))(plVar7,CONCAT44(uStack_5c,uStack_60));
        }
      }
      else if (local_f0 == 1) {
        local_128 = local_108;
        uStack_120 = puVar13;
        FUN_14063eb30(local_e8,&local_128);
        local_128 = local_d8[0];
        uStack_120 = (undefined *)local_100[0];
        FUN_14063eb30(local_100,&local_128);
        local_128 = (undefined *)CONCAT44(uStack_64,local_68);
        uStack_120 = (undefined *)CONCAT44(uStack_5c,uStack_60);
        local_118 = local_58;
        uVar9 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,param_4);
        bVar2 = FUN_142d7c6f0(&local_128,local_100,local_e8,uVar9);
        if (local_100[0] != 0) {
          FMemory::Free();
        }
        if (local_e8[0] != (void *)0x0) {
          FMemory::Free();
        }
        if ((bVar2 != 0) && ((*(byte *)(local_c8 + 4) & 1) != 0)) {
          (**(code **)(*plVar7 + 0x270))(plVar7,CONCAT44(uStack_5c,uStack_60));
        }
      }
      if (*(int *)(param_4 + 0x40) != 0) {
        plVar8 = *(longlong **)(param_4 + 0x30);
        if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
          plVar8 = (longlong *)(param_4 + 0x10);
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (*(longlong *)(param_4 + 0x30) != 0) {
        FMemory::Free();
      }
      return (ulonglong)bVar2;
    }
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar8 = *(longlong **)(param_4 + 0x30);
    plVar7 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      plVar7 = (longlong *)(param_4 + 0x10);
    }
    if (plVar7 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    plVar8 = (longlong *)FMemory::Free();
  }
  return (ulonglong)plVar8 & 0xffffffffffffff00;
}



// FUNCTION 142d8cb40 FUN_142d8cb40 body=2064 status=ok
// SIG undefined FUN_142d8cb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d8cb40(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  short *psVar9;
  short *psVar10;
  wchar_t *_Str;
  undefined *puVar11;
  longlong lVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  undefined1 auStack_178 [32];
  short *local_158;
  char local_148;
  short *local_138;
  undefined8 uStack_130;
  short *local_128;
  int iStack_120;
  int iStack_11c;
  short *local_118;
  int local_110;
  int local_10c;
  short *local_108;
  int local_100;
  int local_fc;
  short *local_f8;
  short *local_f0;
  short *local_e8;
  short *local_e0;
  int local_d8;
  short *local_d0;
  longlong local_c8;
  short *local_c0;
  longlong *local_b8;
  undefined1 local_b0 [40];
  undefined1 local_88;
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
  
  puVar11 = PTR_DAT_1466ad5e0;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  psVar14 = (short *)0x0;
  uStack_130 = psVar14;
  local_c8 = param_4;
  local_b8 = param_2;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    uStack_130 = (short *)(puVar11 + (longlong)iVar4 * 2);
  }
  local_138 = (short *)puVar11;
  plVar5 = (longlong *)FUN_142d95d90(param_3,&local_118,&local_138);
  local_108 = (short *)0x0;
  local_100 = 0;
  local_fc = 0;
  lVar12 = plVar5[1] - *plVar5 >> 1;
  psVar16 = psVar14;
  if (lVar12 != 0) {
    iVar17 = (int)(lVar12 + 1U);
    iVar4 = 0;
    if (0 < iVar17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108,lVar12 + 1U & 0xffffffff);
      iVar4 = local_100;
    }
    local_100 = iVar17 + iVar4;
    if (local_fc < local_100) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,iVar4);
    }
    iVar4 = local_100;
    psVar16 = local_108;
    _guard_xfg_dispatch_icall_nop(local_108,(void *)*plVar5,lVar12 * 2);
    psVar16[iVar4 + -1] = 0;
  }
  puVar11 = PTR_DAT_1466ad5e0;
  psVar6 = psVar14;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    psVar6 = (short *)(puVar11 + (longlong)iVar4 * 2);
  }
  local_138 = (short *)puVar11;
  uStack_130 = psVar6;
  plVar5 = (longlong *)FUN_142d95d90(param_3,&local_118,&local_138);
  local_128 = (short *)0x0;
  iStack_120 = 0;
  iStack_11c = 0;
  lVar12 = plVar5[1] - *plVar5 >> 1;
  if (lVar12 != 0) {
    iVar17 = (int)(lVar12 + 1U);
    iVar4 = 0;
    if (0 < iVar17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128,lVar12 + 1U & 0xffffffff);
      iVar4 = iStack_120;
    }
    iStack_120 = iVar17 + iVar4;
    if (iStack_11c < iStack_120) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,iVar4);
    }
    iVar4 = iStack_120;
    psVar6 = local_128;
    _guard_xfg_dispatch_icall_nop(local_128,(void *)*plVar5,lVar12 * 2);
    psVar6[iVar4 + -1] = 0;
  }
  puVar11 = PTR_DAT_1466ad5e0;
  psVar6 = psVar14;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    psVar6 = (short *)(puVar11 + (longlong)iVar4 * 2);
  }
  local_138 = (short *)puVar11;
  uStack_130 = psVar6;
  plVar5 = (longlong *)FUN_142d95d90(param_3,&local_e0,&local_138);
  local_118 = (short *)0x0;
  local_110 = 0;
  local_10c = 0;
  lVar12 = plVar5[1] - *plVar5 >> 1;
  psVar6 = psVar14;
  if (lVar12 != 0) {
    iVar17 = (int)(lVar12 + 1U);
    iVar4 = 0;
    if (0 < iVar17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_118,lVar12 + 1U & 0xffffffff);
      iVar4 = local_110;
    }
    local_110 = iVar17 + iVar4;
    if (local_10c < local_110) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,iVar4);
    }
    iVar4 = local_110;
    psVar6 = local_118;
    _guard_xfg_dispatch_icall_nop(local_118,(void *)*plVar5,lVar12 * 2);
    psVar6[iVar4 + -1] = 0;
  }
  puVar11 = PTR_DAT_1466ad5e0;
  psVar13 = psVar14;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    psVar13 = (short *)(puVar11 + (longlong)iVar4 * 2);
  }
  local_138 = (short *)puVar11;
  uStack_130 = psVar13;
  FUN_142d95e90(param_3,&local_78,&local_138);
  if ((char)local_58 == '\0') {
    lVar12 = param_3[1];
    _Str = (wchar_t *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    _Str = (wchar_t *)CONCAT44(uStack_74,local_78);
    *param_3 = local_68;
    param_3[1] = uStack_60;
    lVar12 = CONCAT44(uStack_6c,uStack_70);
  }
  psVar13 = psVar14;
  if (lVar12 - (longlong)_Str >> 1 != 0) {
    uVar3 = _wtoi(_Str);
    psVar13 = (short *)(ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      psVar13 = (short *)0x0;
    }
  }
  psVar15 = (short *)*param_3;
  psVar9 = (short *)param_3[1];
  if (psVar15 + (int)psVar13 < psVar9) {
    *param_3 = psVar15 + (int)psVar13;
    psVar9 = psVar15 + (int)psVar13;
  }
  puVar11 = PTR_DAT_1466ad5e0;
  local_e8 = psVar14;
  local_138 = psVar15;
  uStack_130 = psVar9;
  local_e0 = psVar15;
  local_d0 = psVar9;
  local_c0 = psVar9;
  if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
    local_f8 = psVar9;
    local_f0 = psVar9;
    iVar4 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
    local_d0 = local_f0;
    local_e8 = (short *)(puVar11 + (longlong)iVar4 * 2);
  }
  local_f0 = (short *)puVar11;
  local_f8 = local_c0;
  FUN_142d95e90(param_3,&local_78,&local_f0);
  if ((char)local_58 == '\0') {
    local_f8 = local_d0;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = local_68;
    param_3[1] = uStack_60;
  }
  psVar13 = &DAT_14588c694;
  iVar4 = MNP_OverrideOutput_WC(&DAT_14588c694);
  if (local_e0 != local_f8) {
    do {
      if (psVar13 == &DAT_14588c694 + iVar4) goto LAB_142d8cf40;
    } while ((*(short *)((longlong)psVar13 + (longlong)(psVar15 + -0xa2c4634a)) == *psVar13) &&
            (psVar13 = psVar13 + 1,
            (short *)((longlong)psVar13 + (longlong)(psVar15 + -0xa2c4634a)) != psVar9));
  }
  if (psVar13 == &DAT_14588c694 + iVar4) {
LAB_142d8cf40:
    psVar15 = psVar15 + iVar4;
    local_138 = psVar15;
  }
  iVar4 = MNP_OverrideOutput_WC(&DAT_14588c6a4);
  puVar11 = &DAT_14588c6a4 + (longlong)iVar4 * 2;
  psVar13 = psVar9;
  while (psVar13 != psVar15) {
    if (puVar11 == &DAT_14588c6a4) goto LAB_142d8cf87;
    psVar13 = psVar13 + -1;
    if (*psVar13 != *(short *)(puVar11 + -2)) break;
    puVar11 = puVar11 + -2;
  }
  if (puVar11 == &DAT_14588c6a4) {
LAB_142d8cf87:
    uStack_130 = psVar9 + -(longlong)iVar4;
  }
  iVar4 = _wtoi((wchar_t *)*param_3);
  local_148 = iVar4 != 0;
  local_e0 = (short *)0x0;
  local_d8 = (int)local_b8[2];
  lVar12 = (longlong)local_d8;
  _Src = (void *)local_b8[1];
  if (local_d8 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_d8,0);
    psVar13 = local_e0;
    _guard_xfg_dispatch_icall_nop(local_e0,_Src,lVar12 * 2);
    if ((local_d8 != 0) && (local_d8 != 1)) {
      local_158 = psVar13;
      psVar15 = &DAT_143f3eda8;
      if (local_100 != 0) {
        psVar15 = psVar16;
      }
      FString::PrintfImpl(&local_108,L"%s/%s.%s",psVar15,psVar13);
      uVar7 = FUN_142a2f930();
      puVar8 = (undefined8 *)FName::FName(&local_b8,psVar13,1);
      local_158 = (short *)((ulonglong)local_158 & 0xffffffff00000000);
      psVar9 = (short *)StaticFindObjectFastExplicit(uVar7,*puVar8,&local_108,0);
      if (psVar9 == (short *)0x0) {
LAB_142d8d08c:
        psVar9 = psVar14;
      }
      else {
        lVar12 = FUN_142a2f930();
        if ((*(int *)(*(longlong *)(psVar9 + 8) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(psVar9 + 8) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_142d8d08c;
      }
      if (local_108 != (short *)0x0) {
        FMemory::Free();
      }
      psVar15 = local_128;
      if (psVar9 != (short *)0x0) {
        local_158 = &DAT_143f3eda8;
        if (local_110 != 0) {
          local_158 = psVar6;
        }
        psVar10 = &DAT_143f3eda8;
        if (iStack_120 != 0) {
          psVar10 = local_128;
        }
        FString::PrintfImpl(&local_118,L"%s/%s.%s",psVar10);
        uVar7 = UNodeMappingContainer::StaticClass();
        puVar8 = (undefined8 *)FName::FName(&local_e0,psVar6,1);
        local_158 = (short *)((ulonglong)local_158 & 0xffffffff00000000);
        psVar10 = (short *)StaticFindObjectFastExplicit(uVar7,*puVar8,&local_118,0);
        if (psVar10 == (short *)0x0) {
LAB_142d8d152:
          local_f0 = (short *)0x0;
          psVar10 = psVar14;
        }
        else {
          local_f0 = psVar10;
          lVar12 = UNodeMappingContainer::StaticClass();
          if ((*(int *)(*(longlong *)(psVar10 + 8) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(psVar10 + 8) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_142d8d152;
        }
        if (local_118 != (short *)0x0) {
          FMemory::Free();
        }
        if (psVar10 != (short *)0x0) {
          FActorSpawnParameters::FActorSpawnParameters(local_b0);
          local_88 = 1;
          local_58 = _DAT_146b33f80 & _DAT_146b33f90;
          uStack_54 = uRam0000000146b33f84 & uRam0000000146b33f94;
          uStack_50 = uRam0000000146b33f88 & uRam0000000146b33f98;
          uStack_4c = uRam0000000146b33f8c & uRam0000000146b33f9c;
          local_78 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = uRam0000000146b33f8c;
          local_128 = local_138;
          iStack_120 = (int)uStack_130;
          iStack_11c = uStack_130._4_4_;
          local_68 = 0;
          uStack_60 = 0;
          FUN_14063eb30(&local_138,&local_128);
          FUN_14162d2d0(&local_78,&local_138);
          if (local_138 != (short *)0x0) {
            FMemory::Free();
          }
          uVar7 = AAfrPlayerState::GetPrivateStaticClass();
          plVar5 = (longlong *)FUN_142550d00(psVar9,uVar7,&local_78,local_b0);
          if ((plVar5 != (longlong *)0x0) && (plVar5[0x8b] != 0)) {
            cVar2 = FUN_1428cdc10(psVar9);
            if (cVar2 != '\0') {
              *(undefined1 *)(plVar5[0x8b] + 0x24e) = 2;
            }
            (**(code **)(*(longlong *)plVar5[0x8b] + 0x928))((longlong *)plVar5[0x8b],local_f0);
            if (local_148 != '\0') {
              (**(code **)(*plVar5 + 0x310))(plVar5,1);
            }
            if (psVar13 != (short *)0x0) {
              FMemory::Free(psVar13);
            }
            if (psVar6 != (short *)0x0) {
              FMemory::Free(psVar6);
            }
            if (psVar15 != (short *)0x0) {
              FMemory::Free(psVar15);
            }
            if (psVar16 != (short *)0x0) {
              FMemory::Free(psVar16);
            }
            FUN_1404bed90(local_c8);
            return 1;
          }
        }
      }
      if (psVar13 != (short *)0x0) {
        FMemory::Free(psVar13);
      }
      if (psVar6 != (short *)0x0) {
        FMemory::Free(psVar6);
      }
      goto joined_r0x000142d8d2dd;
    }
    if (psVar13 != (short *)0x0) {
      FMemory::Free(psVar13);
    }
  }
  psVar15 = local_128;
  if (psVar6 != (short *)0x0) {
    FMemory::Free(psVar6);
    psVar15 = local_128;
  }
joined_r0x000142d8d2dd:
  if (psVar15 != (short *)0x0) {
    FMemory::Free(psVar15);
  }
  if (psVar16 != (short *)0x0) {
    FMemory::Free(psVar16);
  }
  lVar12 = local_c8;
  if (*(int *)(local_c8 + 0x40) != 0) {
    plVar5 = *(longlong **)(local_c8 + 0x30);
    if (*(longlong **)(local_c8 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(local_c8 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(lVar12 + 0x30) != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142d8d350 FUN_142d8d350 body=2299 status=ok
// SIG undefined FUN_142d8d350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d8d350(int param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  short *psVar13;
  undefined2 *puVar14;
  uint uVar15;
  int iVar16;
  short *psVar17;
  longlong lVar18;
  short *psVar19;
  int iVar20;
  short *psVar21;
  undefined1 auStack_1b8 [32];
  short *local_198;
  short *local_188;
  undefined8 local_180;
  short *local_178;
  undefined8 local_170;
  longlong *local_168;
  short *local_160;
  undefined8 local_158;
  short *local_148;
  undefined2 *local_138;
  uint local_130;
  int local_12c;
  longlong *local_128;
  short *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined2 *local_108;
  int local_100;
  longlong local_f8 [2];
  longlong local_e8;
  undefined1 local_e0 [24];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  wchar_t *local_98 [2];
  short *local_88;
  short *local_80;
  char local_78;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_118 = param_4;
  if (param_1 == 1) {
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
        plVar12 = (longlong *)(param_4 + 0x10);
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    lVar18 = *(longlong *)(param_4 + 0x30);
  }
  else {
    iVar16 = *(int *)(param_2 + 0x10);
    psVar13 = (short *)0x0;
    _Src = *(void **)(param_2 + 8);
    local_188 = (short *)0x0;
    local_180 = (short *)CONCAT44(local_180._4_4_,iVar16);
    if (iVar16 == 0) {
      local_180 = (short *)0x0;
      psVar21 = psVar13;
      iVar16 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_188,iVar16,0);
      psVar21 = local_188;
      _guard_xfg_dispatch_icall_nop(local_188,_Src,(longlong)iVar16 * 2);
      iVar16 = (int)local_180;
    }
    puVar5 = PTR_DAT_1466ad5e0;
    local_170 = psVar13;
    if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
      iVar6 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
      local_170 = (short *)(puVar5 + (longlong)iVar6 * 2);
    }
    local_178 = (short *)puVar5;
    local_168 = (longlong *)FUN_142d95d90(param_3,&local_160,&local_178);
    local_138 = (undefined2 *)0x0;
    local_130 = 0;
    lVar18 = local_168[1] - *local_168 >> 1;
    local_12c = 0;
    if (lVar18 != 0) {
      iVar6 = (int)(lVar18 + 1U);
      psVar7 = psVar13;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,lVar18 + 1U & 0xffffffff);
        iVar6 = (int)lVar18 + 1;
        psVar7 = (short *)(ulonglong)local_130;
      }
      local_130 = (int)psVar7 + iVar6;
      if (local_12c < (int)local_130) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,psVar7);
      }
      uVar15 = local_130;
      puVar14 = local_138;
      _guard_xfg_dispatch_icall_nop(local_138,(void *)*local_168,lVar18 * 2);
      puVar14[(int)(uVar15 - 1)] = 0;
    }
    puVar5 = PTR_DAT_1466ad5e0;
    psVar7 = psVar13;
    if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
      iVar6 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
      psVar7 = (short *)(puVar5 + (longlong)iVar6 * 2);
    }
    local_178 = (short *)puVar5;
    local_170 = psVar7;
    local_168 = (longlong *)FUN_142d95d90(param_3,&local_160,&local_178);
    local_178 = (short *)0x0;
    lVar18 = local_168[1] - *local_168 >> 1;
    local_170 = (short *)0x0;
    psVar7 = psVar13;
    if (lVar18 != 0) {
      iVar6 = (int)(lVar18 + 1U);
      iVar20 = 0;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178,lVar18 + 1U & 0xffffffff);
        iVar6 = (int)lVar18 + 1;
        psVar7 = (short *)((ulonglong)local_170 & 0xffffffff);
        iVar20 = local_170._4_4_;
      }
      iVar6 = (int)psVar7 + iVar6;
      local_170 = (short *)CONCAT44(local_170._4_4_,iVar6);
      if (iVar20 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,psVar7);
        iVar6 = (int)local_170;
      }
      psVar7 = local_178;
      _guard_xfg_dispatch_icall_nop(local_178,(void *)*local_168,lVar18 * 2);
      psVar7[iVar6 + -1] = 0;
    }
    puVar5 = PTR_DAT_1466ad5e0;
    local_158 = psVar13;
    if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
      iVar6 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
      local_158 = (short *)(puVar5 + (longlong)iVar6 * 2);
    }
    local_160 = (short *)puVar5;
    local_128 = (longlong *)FUN_142d95d90(param_3,local_e0,&local_160);
    local_160 = (short *)0x0;
    local_148 = (short *)(local_128[1] - *local_128 >> 1);
    local_158 = (short *)0x0;
    psVar19 = psVar13;
    if (local_148 != (short *)0x0) {
      local_168 = (longlong *)((longlong)local_148 + 1);
      iVar6 = 0;
      if (0 < (int)local_168) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_160,(ulonglong)local_168 & 0xffffffff);
        psVar19 = (short *)((ulonglong)local_158 & 0xffffffff);
        iVar6 = local_158._4_4_;
      }
      iVar20 = (int)psVar19 + (int)local_168;
      local_158 = (short *)CONCAT44(local_158._4_4_,iVar20);
      if (iVar6 < iVar20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,psVar19);
        iVar20 = (int)local_158;
      }
      psVar19 = local_160;
      _guard_xfg_dispatch_icall_nop(local_160,(void *)*local_128,(longlong)local_148 * 2);
      psVar19[iVar20 + -1] = 0;
    }
    puVar5 = PTR_DAT_1466ad5e0;
    local_120 = psVar13;
    if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
      iVar6 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
      local_120 = (short *)(puVar5 + (longlong)iVar6 * 2);
    }
    local_128 = (longlong *)puVar5;
    FUN_142d95e90(param_3,local_98,&local_128);
    if (local_78 == '\0') {
      local_98[0] = (wchar_t *)*param_3;
      *param_3 = 0;
      param_3[1] = 0;
      local_168 = (longlong *)psVar13;
      local_148 = psVar13;
    }
    else {
      *param_3 = local_88;
      param_3[1] = local_80;
      local_168 = (longlong *)local_80;
      local_148 = local_88;
    }
    iVar6 = 0;
    if ((longlong)local_168 - (longlong)local_148 >> 1 != 0) {
      iVar6 = _wtoi(local_98[0]);
      local_168 = (longlong *)param_3[1];
      local_148 = (short *)*param_3;
      if (iVar6 < 1) {
        iVar6 = 0;
      }
    }
    if (local_148 + iVar6 < local_168) {
      *param_3 = local_148 + iVar6;
      local_168 = (longlong *)(local_148 + iVar6);
    }
    if (((iVar16 == 0) || (iVar16 == 1)) && (psVar21 != (short *)&DAT_14588d0b8)) {
      uVar15 = local_180._4_4_;
      local_180 = (short *)((ulonglong)local_180._4_4_ << 0x20);
      if (uVar15 != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_188,10);
        psVar13 = (short *)((ulonglong)local_180 & 0xffffffff);
        psVar21 = local_188;
        uVar15 = local_180._4_4_;
      }
      iVar16 = (int)psVar13 + 10;
      local_180 = (short *)CONCAT44(local_180._4_4_,iVar16);
      if ((int)uVar15 < iVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188);
        psVar21 = local_188;
        iVar16 = (int)local_180;
      }
      psVar21[0] = 0x4d;
      psVar21[1] = 0x65;
      psVar21[2] = 0x6e;
      psVar21[3] = 0x75;
      psVar21[4] = 0x4d;
      psVar21[5] = 0x61;
      psVar21[6] = 0x70;
      psVar21[7] = 0x5f;
      psVar21[8] = 0x50;
      psVar21[9] = 0;
    }
    local_198 = &DAT_143f3eda8;
    if (iVar16 != 0) {
      local_198 = psVar21;
    }
    puVar14 = &DAT_143f3eda8;
    if (local_130 != 0) {
      puVar14 = local_138;
    }
    FString::PrintfImpl(local_f8,L"%s/%s.%s",puVar14);
    psVar13 = &DAT_143f3eda8;
    if (iVar16 != 0) {
      psVar13 = psVar21;
    }
    uVar8 = FUN_142a2f930();
    puVar9 = (undefined8 *)FName::FName(&local_128,psVar13,1);
    local_198 = (short *)((ulonglong)local_198 & 0xffffffff00000000);
    lVar18 = StaticFindObjectFastExplicit(uVar8,*puVar9,local_f8,0);
    if (lVar18 != 0) {
      lVar10 = FUN_142a2f930();
      if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FWeakObjectPtr::operator=(&local_110,lVar18);
        local_188 = local_148;
        local_a8 = _DAT_146b33f80 & _DAT_146b33f90;
        uStack_a4 = uRam0000000146b33f84 & uRam0000000146b33f94;
        uStack_a0 = uRam0000000146b33f88 & uRam0000000146b33f98;
        uStack_9c = uRam0000000146b33f8c & uRam0000000146b33f9c;
        local_c8 = 0;
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = uRam0000000146b33f8c;
        local_b8 = 0;
        lStack_b0 = 0;
        local_180 = (short *)local_168;
        FUN_14063eb30(&local_128,&local_188);
        FUN_14162d2d0(&local_c8,&local_128);
        if (local_128 != (longlong *)0x0) {
          FMemory::Free();
        }
        iVar16 = (int)local_158;
        psVar13 = &DAT_143f3eda8;
        if ((int)local_158 != 0) {
          psVar13 = psVar19;
        }
        FString::PrintfImpl(&local_188,L"%s_C",psVar13);
        psVar13 = &DAT_143f3eda8;
        if ((int)local_180 != 0) {
          psVar13 = local_188;
        }
        FName::FName(&local_e8,psVar13,1);
        if (local_188 != (short *)0x0) {
          FMemory::Free();
        }
        psVar13 = &DAT_143f3eda8;
        if (iVar16 != 0) {
          psVar13 = psVar19;
        }
        psVar17 = &DAT_143f3eda8;
        if ((int)local_170 != 0) {
          psVar17 = psVar7;
        }
        FString::PrintfImpl(&local_108,L"%s/%s",psVar17,psVar13);
        puVar14 = &DAT_143f3eda8;
        if (local_100 != 0) {
          puVar14 = local_108;
        }
        lVar11 = FUN_14178ae20(0,puVar14);
        lVar10 = lStack_b0;
        lVar18 = local_b8;
        if (lVar11 != 0) {
          if (local_108 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_f8[0] != 0) {
            FMemory::Free();
          }
          if (psVar19 != (short *)0x0) {
            FMemory::Free(psVar19);
          }
          if (psVar7 != (short *)0x0) {
            FMemory::Free(psVar7);
          }
          if (local_138 != (undefined2 *)0x0) {
            FMemory::Free(local_138);
          }
          if (psVar21 != (short *)0x0) {
            FMemory::Free(psVar21);
          }
          FUN_1404bed90(local_118);
          return 0;
        }
        lVar11 = CONCAT44(uStack_c4,local_c8);
        lVar1 = CONCAT44(uStack_bc,uStack_c0);
        local_148 = (short *)CONCAT44(local_148._4_4_,local_110);
        lVar2 = CONCAT44(uStack_a4,local_a8);
        lVar3 = CONCAT44(uStack_9c,uStack_a0);
        local_168 = (longlong *)CONCAT44(local_168._4_4_,local_10c);
        plVar12 = (longlong *)FMemory::Realloc(0,0x60);
        if (plVar12 != (longlong *)0x0) {
          *plVar12 = (longlong)&PTR_GetPoolName_14589a6e8;
          *(undefined4 *)(plVar12 + 2) = local_148._0_4_;
          *(undefined4 *)((longlong)plVar12 + 0x14) = local_168._0_4_;
          plVar12[3] = local_e8;
          plVar12[4] = lVar11;
          plVar12[5] = lVar1;
          plVar12[6] = lVar18;
          plVar12[7] = lVar10;
          plVar12[8] = lVar2;
          plVar12[9] = lVar3;
          lVar18 = FDelegateHandle::GenerateNewID();
          plVar12[0xb] = lVar18;
          *plVar12 = (longlong)&PTR_GetPoolName_14589a730;
        }
        psVar13 = &DAT_143f3eda8;
        if ((int)local_158 != 0) {
          psVar13 = psVar19;
        }
        psVar17 = &DAT_143f3eda8;
        if ((int)local_170 != 0) {
          psVar17 = psVar7;
        }
        FString::PrintfImpl(&local_188,L"%s/%s",psVar17,psVar13);
        psVar13 = &DAT_143f3eda8;
        if ((int)local_180 != 0) {
          psVar13 = local_188;
        }
        local_178 = (short *)0x0;
        local_170 = (short *)0x0;
        if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
          lVar18 = -1;
          do {
            lVar18 = lVar18 + 1;
          } while (psVar13[lVar18] != 0);
          uVar15 = (int)lVar18 + 1;
          local_170 = (short *)(ulonglong)uVar15;
          if (0 < (int)uVar15) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
          }
          FGenericPlatformString::Memcpy(local_178,psVar13,(longlong)(int)uVar15 * 2);
        }
        local_160 = (short *)0x0;
        local_158 = (short *)((ulonglong)local_158 & 0xffffffff00000000);
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x30))(plVar12,&local_160);
        }
        local_198 = (short *)CONCAT44(local_198._4_4_,0xffffffff);
        FUN_1416fec20(&local_178,&local_160,0,0);
        if (local_178 != (short *)0x0) {
          FMemory::Free();
        }
        if (local_188 != (short *)0x0) {
          FMemory::Free();
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x28))(plVar12,0);
          lVar18 = FMemory::Realloc(plVar12,0,0);
          if (lVar18 != 0) {
            FMemory::Free(lVar18);
          }
        }
        if (local_108 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_f8[0] != 0) {
          FMemory::Free();
        }
        if (psVar19 != (short *)0x0) {
          FMemory::Free(psVar19);
        }
        if (psVar7 != (short *)0x0) {
          FMemory::Free(psVar7);
        }
        if (local_138 != (undefined2 *)0x0) {
          FMemory::Free(local_138);
        }
        if (psVar21 != (short *)0x0) {
          FMemory::Free(psVar21);
        }
        FUN_1404bed90(local_118);
        return 1;
      }
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    if (psVar19 != (short *)0x0) {
      FMemory::Free(psVar19);
    }
    if (psVar7 != (short *)0x0) {
      FMemory::Free(psVar7);
    }
    if (local_138 != (undefined2 *)0x0) {
      FMemory::Free(local_138);
    }
    if (psVar21 != (short *)0x0) {
      FMemory::Free(psVar21);
    }
    lVar18 = local_118;
    if (*(int *)(local_118 + 0x40) != 0) {
      plVar12 = *(longlong **)(local_118 + 0x30);
      if (*(longlong **)(local_118 + 0x30) == (longlong *)0x0) {
        plVar12 = (longlong *)(local_118 + 0x10);
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    lVar18 = *(longlong *)(lVar18 + 0x30);
  }
  if (lVar18 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142d8dc50 FUN_142d8dc50 body=173 status=ok
// SIG undefined FUN_142d8dc50(void)

void FUN_142d8dc50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  local_18 = param_1[0xc];
  local_10 = (longlong *)param_1[0xd];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  FUN_142d7ded0(param_1 + 0xe,&local_18,1,0xffffffff,0xffffffff);
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 2;
  *(undefined4 *)(param_1 + 9) = 2;
  (**(code **)(*param_1 + 0x28))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142d8dcf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}



// FUNCTION 142d8dd20 FUN_142d8dd20 body=177 status=ok
// SIG undefined FUN_142d8dd20(void)

void FUN_142d8dd20(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  local_18 = param_1[0xc];
  local_10 = (longlong *)param_1[0xd];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  FUN_142d7ded0(param_1 + 0xe,&local_18,0,*(undefined4 *)((longlong)param_1 + 0x3c),(int)param_1[8])
  ;
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 3;
  *(undefined4 *)(param_1 + 9) = 3;
  (**(code **)(*param_1 + 0x28))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142d8ddcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}



// FUNCTION 142d8de00 FUN_142d8de00 body=354 status=ok
// SIG undefined FUN_142d8de00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d8de00(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_res10;
  undefined4 local_res14;
  ulonglong local_18;
  longlong local_10;
  ulonglong uVar6;
  
  if (DAT_1468b616c == '\0') {
    uVar1 = *param_1;
    if (uVar1 < param_1[1]) {
      uVar5 = (uint)((longlong)(param_1[1] - uVar1) >> 3);
      if ((int)DAT_1466ad5dc <= (int)uVar5) {
        uVar5 = DAT_1466ad5dc;
      }
      uVar2 = 0;
      uVar6 = (ulonglong)uVar5;
      if ((int)uVar5 < 1) {
        uVar6 = uVar2;
      }
      iVar4 = (int)uVar6;
      if (iVar4 != 0) {
        if (DAT_146af4bf0 != (longlong *)0x0) {
          local_10 = uVar1 + (longlong)iVar4 * 8;
          local_18 = uVar1;
          (**(code **)(*DAT_146af4bf0 + 0x30))(DAT_146af4bf0,&local_18);
        }
        if (0 < DAT_1466ad6a8 - _DAT_1466ad6d4) {
          local_18 = 0;
          local_10 = 0;
          if (0 < iVar4) {
            do {
              local_res10 = *(undefined4 *)(*param_1 + uVar2 * 8);
              local_res14 = *(undefined4 *)(*param_1 + uVar2 * 8 + 4);
              FUN_142d8e1a0(&local_res10,&local_18);
              uVar2 = uVar2 + 1;
            } while ((longlong)uVar2 < (longlong)iVar4);
            if (local_18 != 0) {
              FMemory::Free();
            }
          }
        }
        if (DAT_146b17150 != (longlong *)0x0) {
          uVar1 = *param_1;
          if ((ulonglong)(longlong)iVar4 < (ulonglong)((longlong)(param_1[1] - uVar1) >> 3)) {
            lVar3 = (longlong)iVar4 * 8;
            do {
              local_res10 = *(undefined4 *)(lVar3 + uVar1);
              local_res14 = *(undefined4 *)(lVar3 + 4 + uVar1);
              (**(code **)(*DAT_146b17150 + 0x4f0))(DAT_146b17150,&local_res10);
              uVar1 = *param_1;
              lVar3 = lVar3 + 8;
              uVar5 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar5;
            } while ((ulonglong)(longlong)(int)uVar5 <
                     (ulonglong)((longlong)(param_1[1] - uVar1) >> 3));
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d8df70 FUN_142d8df70 body=551 status=ok
// SIG undefined FUN_142d8df70(void)

void FUN_142d8df70(undefined8 *param_1,int param_2,code *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  code *pcVar10;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  code *local_68;
  int iStack_60;
  uint uStack_5c;
  code *pcStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined8 local_38;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_3 + 0x28);
  local_98 = 0;
  uStack_94 = 1;
  pcStack_58 = param_3 + 0x10;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar1 != 0) {
    pcVar10 = *(code **)(param_3 + 0x20);
    if (*(code **)(param_3 + 0x20) == (code *)0x0) {
      pcVar10 = pcStack_58;
    }
    uVar2 = *(uint *)pcVar10;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar3) goto LAB_142d8e041;
      uVar2 = *(uint *)(pcVar10 + (lVar5 + 1) * 4);
    }
    uStack_94 = -uVar2 & uVar2;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_88._4_4_ = (uStack_80 - iVar9) + 0x1f;
    if (iVar1 < local_88._4_4_) {
LAB_142d8e041:
      local_88._4_4_ = iVar1;
    }
  }
  uStack_50 = 0xffffffff;
  iStack_4c = local_88._4_4_;
  iStack_48 = uStack_80;
  iStack_60 = local_98;
  uStack_5c = uStack_94;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78 = uStack_80;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  bVar3 = local_88._4_4_ < iVar1;
  local_68 = param_3;
  local_88 = pcStack_58;
  if (bVar3) {
    do {
      lVar5 = (longlong)iStack_7c * 0x40 + *(longlong *)param_3;
      if (*(int *)(lVar5 + 0x10) == param_2) {
        local_38 = 0;
        local_28 = 0;
        if (DAT_146b340e0 == 0) {
LAB_142d8e10d:
          local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar6 = DAT_146b340d0;
          if (DAT_146b340d0 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)&DAT_146b340b0;
          }
          if (puVar6 == (undefined8 *)0x0) goto LAB_142d8e10d;
          plVar4 = (longlong *)(**(code **)*puVar6)(puVar6,&pcStack_58);
          (**(code **)(*plVar4 + 8))(plVar4);
          local_68 = DAT_146b340a0;
        }
        if (*(int *)(param_1 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_1;
        }
        if (*(int *)(lVar5 + 0x30) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(lVar5 + 0x28);
        }
        FUN_142d8ae80(0,puVar7,puVar8,0,&local_68,0);
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)*(uint *)(local_88 + 0x18));
  }
  return;
}



// FUNCTION 142d8e1a0 FUN_142d8e1a0 body=504 status=ok
// SIG undefined FUN_142d8e1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d8e1a0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_res18 [2];
  longlong local_18 [2];
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(param_1);
  if (lVar3 != 0) {
    lVar4 = AHeoCon::GetPrivateStaticClass();
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
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b341e8) &&
         (_Init_thread_header(&DAT_146b341e8), DAT_146b341e8 == -1)) {
        _DAT_146b341e0 = 3;
        DAT_146b341d8 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146b341d8);
        FGenericPlatformString::Memcpy(DAT_146b341d8,&DAT_145896498,6);
        atexit((_func_5014 *)&LAB_143ec0b60);
        _Init_thread_footer(&DAT_146b341e8);
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_res18[0] = *(undefined8 *)(lVar3 + 0x18);
          FName::ToString(local_res18,param_2);
          cVar2 = FString::RemoveFromEnd(param_2,&DAT_146b341d8,1);
          if (cVar2 == '\0') {
            return;
          }
        }
      }
      uVar6 = 6;
      goto LAB_142d8e30a;
    }
  }
  uVar6 = FWeakObjectPtr::Get(param_1);
  plVar5 = (longlong *)UObjectBaseUtility::GetPathName(uVar6,local_18,0);
  if (param_2 != plVar5) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar5;
    *plVar5 = 0;
    *(int *)(param_2 + 1) = (int)plVar5[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  uVar6 = 5;
LAB_142d8e30a:
  FUN_142d8df70(param_2,uVar6,&DAT_1466ad6a0);
  return;
}



// FUNCTION 142d8e3a0 FUN_142d8e3a0 body=310 status=ok
// SIG undefined FUN_142d8e3a0(void)

void FUN_142d8e3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,longlong param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  
  lVar1 = FUN_1406a6810();
  if (lVar1 == 0) {
    uVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_6);
    uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,param_4);
    FUN_1406a8a10(param_1,param_2,param_3,uVar3,param_5,uVar2,param_7);
  }
  else {
    uVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,param_6);
    uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_4);
    FUN_142d92130(lVar1,uVar3,param_5,uVar2);
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_4 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_6 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_6 + 0x30);
    if (*(longlong **)(param_6 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_6 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_6 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d8e4e0 FUN_142d8e4e0 body=398 status=ok
// SIG undefined FUN_142d8e4e0(void)

void FUN_142d8e4e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78 [80];
  
  lVar1 = FUN_1406a6810();
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + 8);
    local_80 = lVar3;
    FUN_140800100(param_1 + 0x138,&local_88,&local_80,0);
    lVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_3);
    FGenericPlatformMemory::MemswapGreaterThan8(lVar2,lVar1 + 0x100,0x50);
    if (*(int *)(lVar2 + 0x40) != 0) {
      plVar5 = *(longlong **)(lVar2 + 0x30);
      if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
        plVar5 = (longlong *)(lVar2 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      FMemory::Free();
    }
    local_88 = 0;
    if (lVar3 != 0) {
      plVar5 = *(longlong **)(param_1 + 0x1a8);
      plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x1b0) * 4;
      for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
        if (*plVar5 == lVar3) {
          lVar2 = plVar5[3];
          if (lVar2 != 0) goto LAB_142d8e5e2;
          break;
        }
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x1c0);
LAB_142d8e5e2:
    lVar3 = FUN_1406a6870(param_1,lVar3);
    FUN_142d94f70(param_1,lVar1,*(undefined4 *)(lVar3 + 8),lVar2,0);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_3 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d8e670 FUN_142d8e670 body=253 status=ok
// SIG undefined FUN_142d8e670(void)

void FUN_142d8e670(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int local_78 [4];
  undefined1 local_68 [80];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_14622c9a0,local_78,param_2);
  if (((local_78[0] != -1) && (lVar1 = DAT_14622c9a0 + (longlong)local_78[0] * 0x18, lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
    lVar3 = FUN_142e5c090();
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
      uVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,param_4);
      FUN_142d8e4e0(lVar1,param_3,uVar4);
    }
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_4 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d8e770 FUN_142d8e770 body=543 status=ok
// SIG undefined FUN_142d8e770(void)

void FUN_142d8e770(longlong *param_1)

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
        if (bVar4) goto LAB_142d8e89f;
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
LAB_142d8e89f:
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
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x40 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x3c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 7) =
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



// FUNCTION 142d8e990 FUN_142d8e990 body=132 status=ok
// SIG undefined FUN_142d8e990(void)

void FUN_142d8e990(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, lVar3 = (**(code **)(*param_1 + 0x668))(), lVar3 != 0)) {
    lVar4 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar3 + 0x550), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x440))(plVar1,local_res10,param_3);
    }
  }
  return;
}



// FUNCTION 142d8ea20 FUN_142d8ea20 body=67 status=ok
// SIG undefined FUN_142d8ea20(void)

void FUN_142d8ea20(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x9e0,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ea70 FUN_142d8ea70 body=126 status=ok
// SIG undefined FUN_142d8ea70(void)

void FUN_142d8ea70(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_142e39920();
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
      FUN_142dafbc0(lVar2 + 0xe08,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8eaf0 FUN_142d8eaf0 body=67 status=ok
// SIG undefined FUN_142d8eaf0(void)

void FUN_142d8eaf0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x328,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8eb40 FUN_142d8eb40 body=67 status=ok
// SIG undefined FUN_142d8eb40(void)

void FUN_142d8eb40(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = ULevelSequencePlayer::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x178,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8eb90 FUN_142d8eb90 body=67 status=ok
// SIG undefined FUN_142d8eb90(void)

void FUN_142d8eb90(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x14f0,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ebe0 FUN_142d8ebe0 body=67 status=ok
// SIG undefined FUN_142d8ebe0(void)

void FUN_142d8ebe0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x1588,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ec30 FUN_142d8ec30 body=67 status=ok
// SIG undefined FUN_142d8ec30(void)

void FUN_142d8ec30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x290,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ec80 FUN_142d8ec80 body=67 status=ok
// SIG undefined FUN_142d8ec80(void)

void FUN_142d8ec80(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x16b8,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ecd0 FUN_142d8ecd0 body=126 status=ok
// SIG undefined FUN_142d8ecd0(void)

void FUN_142d8ecd0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_142e39920();
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
      FUN_142dafbc0(lVar2 + 0xc40,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ed50 FUN_142d8ed50 body=67 status=ok
// SIG undefined FUN_142d8ed50(void)

void FUN_142d8ed50(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0xa78,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8eda0 FUN_142d8eda0 body=67 status=ok
// SIG undefined FUN_142d8eda0(void)

void FUN_142d8eda0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0xb10,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8edf0 FUN_142d8edf0 body=126 status=ok
// SIG undefined FUN_142d8edf0(void)

void FUN_142d8edf0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_142e39920();
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
      FUN_142dafbc0(lVar2 + 0xcd8,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ee70 FUN_142d8ee70 body=126 status=ok
// SIG undefined FUN_142d8ee70(void)

void FUN_142d8ee70(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_142e39920();
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
      FUN_142dafbc0(lVar2 + 0xd70,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8eef0 FUN_142d8eef0 body=67 status=ok
// SIG undefined FUN_142d8eef0(void)

void FUN_142d8eef0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x8b0,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ef40 FUN_142d8ef40 body=67 status=ok
// SIG undefined FUN_142d8ef40(void)

void FUN_142d8ef40(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0xba8,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8ef90 FUN_142d8ef90 body=67 status=ok
// SIG undefined FUN_142d8ef90(void)

void FUN_142d8ef90(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x948,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8efe0 FUN_142d8efe0 body=54 status=ok
// SIG undefined FUN_142d8efe0(void)

void FUN_142d8efe0(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_142dddd00(), lVar1 != 0)) {
    FUN_142ddcd30(lVar1,param_3 ^ 1,param_2);
  }
  return;
}



// FUNCTION 142d8f020 FUN_142d8f020 body=483 status=ok
// SIG undefined FUN_142d8f020(void)

void FUN_142d8f020(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong *local_28;
  int local_20;
  
  if (param_1 != 0) {
    uVar6 = FUN_142a07000();
    AActor::GetComponentsByClass(param_1,&local_28,uVar6);
    plVar2 = local_28 + local_20;
    for (plVar10 = local_28; plVar10 != plVar2; plVar10 = plVar10 + 1) {
      lVar4 = *plVar10;
      if (lVar4 != 0) {
        lVar7 = FUN_142a07000();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          puVar1 = (undefined1 *)(lVar4 + 0x9b0);
          puVar11 = (undefined1 *)(lVar4 + 0x9a0);
          puVar8 = *(undefined1 **)(lVar4 + 0x9f0);
          if (*(undefined1 **)(lVar4 + 0x9f0) == (undefined1 *)0x0) {
            puVar8 = puVar1;
          }
          puVar9 = puVar8 + (longlong)*(int *)(lVar4 + 0x9f8) * 0x10;
          for (; puVar8 != puVar9; puVar8 = puVar8 + 0x10) {
            if (*(longlong *)(puVar8 + 8) == param_2) goto LAB_142d8f111;
          }
          puVar8 = (undefined1 *)0x0;
LAB_142d8f111:
          if ((*(int *)(lVar4 + 0x9f8) == 0) &&
             (*(undefined1 **)(lVar4 + 0x9a8) != (undefined1 *)0x0)) {
            *puVar11 = **(undefined1 **)(lVar4 + 0x9a8);
          }
          if (puVar8 == (undefined1 *)0x0) {
            iVar3 = *(int *)(lVar4 + 0x9f8);
            *(int *)(lVar4 + 0x9f8) = iVar3 + 1;
            if (*(int *)(lVar4 + 0x9fc) < iVar3 + 1) {
              TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(puVar1,iVar3);
            }
            lVar7 = (longlong)iVar3 * 0x10;
            puVar8 = *(undefined1 **)(lVar4 + 0x9f0);
            if (*(undefined1 **)(lVar4 + 0x9f0) == (undefined1 *)0x0) {
              puVar8 = puVar1;
            }
            *(undefined8 *)(puVar8 + lVar7) = 0;
            *(undefined8 *)(puVar8 + lVar7 + 8) = 0;
            puVar8 = *(undefined1 **)(lVar4 + 0x9f0);
            if (*(undefined1 **)(lVar4 + 0x9f0) == (undefined1 *)0x0) {
              puVar8 = puVar1;
            }
            puVar8 = puVar8 + lVar7;
            *(longlong *)(puVar8 + 8) = param_2;
          }
          *puVar8 = 0;
          if (*(undefined1 **)(lVar4 + 0x9a8) != (undefined1 *)0x0) {
            if (*(int *)(lVar4 + 0x9f8) != 0) {
              puVar11 = *(undefined1 **)(lVar4 + 0x9f0);
              if (*(undefined1 **)(lVar4 + 0x9f0) == (undefined1 *)0x0) {
                puVar11 = puVar1;
              }
              puVar11 = puVar11 + (longlong)*(int *)(lVar4 + 0x9f8) * 0x10 + -0x10;
            }
            **(undefined1 **)(lVar4 + 0x9a8) = *puVar11;
          }
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 142d8f210 FUN_142d8f210 body=67 status=ok
// SIG undefined FUN_142d8f210(void)

void FUN_142d8f210(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x1620,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f260 FUN_142d8f260 body=122 status=ok
// SIG undefined FUN_142d8f260(void)

void FUN_142d8f260(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, lVar3 = (**(code **)(*param_1 + 0x668))(), lVar3 != 0)) {
    lVar4 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar3 + 0x550), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x448))(plVar1,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f2e0 FUN_142d8f2e0 body=67 status=ok
// SIG undefined FUN_142d8f2e0(void)

void FUN_142d8f2e0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x9e0,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f330 FUN_142d8f330 body=126 status=ok
// SIG undefined FUN_142d8f330(void)

void FUN_142d8f330(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_142e39920();
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
      FUN_142dbb5d0(lVar2 + 0xe08,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f3b0 FUN_142d8f3b0 body=67 status=ok
// SIG undefined FUN_142d8f3b0(void)

void FUN_142d8f3b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x328,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f400 FUN_142d8f400 body=67 status=ok
// SIG undefined FUN_142d8f400(void)

void FUN_142d8f400(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = ULevelSequencePlayer::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x178,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f450 FUN_142d8f450 body=67 status=ok
// SIG undefined FUN_142d8f450(void)

void FUN_142d8f450(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x14f0,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f4a0 FUN_142d8f4a0 body=67 status=ok
// SIG undefined FUN_142d8f4a0(void)

void FUN_142d8f4a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x1588,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f4f0 FUN_142d8f4f0 body=67 status=ok
// SIG undefined FUN_142d8f4f0(void)

void FUN_142d8f4f0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x290,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f540 FUN_142d8f540 body=67 status=ok
// SIG undefined FUN_142d8f540(void)

void FUN_142d8f540(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x16b8,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f590 FUN_142d8f590 body=126 status=ok
// SIG undefined FUN_142d8f590(void)

void FUN_142d8f590(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_142e39920();
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
      FUN_142dbb5d0(lVar2 + 0xc40,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f610 FUN_142d8f610 body=67 status=ok
// SIG undefined FUN_142d8f610(void)

void FUN_142d8f610(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0xa78,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f660 FUN_142d8f660 body=67 status=ok
// SIG undefined FUN_142d8f660(void)

void FUN_142d8f660(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0xb10,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f6b0 FUN_142d8f6b0 body=126 status=ok
// SIG undefined FUN_142d8f6b0(void)

void FUN_142d8f6b0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_142e39920();
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
      FUN_142dbb5d0(lVar2 + 0xcd8,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f730 FUN_142d8f730 body=126 status=ok
// SIG undefined FUN_142d8f730(void)

void FUN_142d8f730(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_142e39920();
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
      FUN_142dbb5d0(lVar2 + 0xd70,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f7b0 FUN_142d8f7b0 body=67 status=ok
// SIG undefined FUN_142d8f7b0(void)

void FUN_142d8f7b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x8b0,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f800 FUN_142d8f800 body=67 status=ok
// SIG undefined FUN_142d8f800(void)

void FUN_142d8f800(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x948,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8f850 FUN_142d8f850 body=645 status=ok
// SIG undefined FUN_142d8f850(void)

void FUN_142d8f850(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  longlong *local_58;
  int local_50;
  
  if (param_1 != 0) {
    uVar4 = FUN_142a07000();
    AActor::GetComponentsByClass(param_1,&local_58,uVar4);
    plVar1 = local_58 + local_50;
    for (plVar8 = local_58; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      lVar3 = *plVar8;
      if (lVar3 != 0) {
        lVar5 = FUN_142a07000();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if ((bVar14) && (puVar6 = (undefined1 *)(lVar3 + 0x9a0), 0 < *(int *)(lVar3 + 0x9f8))) {
          uVar2 = lVar3 + 0x9b0;
          lVar5 = (longlong)*(int *)(lVar3 + 0x9f8);
          if (*(int *)(lVar3 + 0x9f8) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = 0;
            lVar7 = 0;
            uVar12 = *(ulonglong *)(lVar3 + 0x9f0);
            if (*(ulonglong *)(lVar3 + 0x9f0) == 0) {
              uVar12 = uVar2;
            }
            bVar14 = *(longlong *)(uVar12 + 8) != param_2;
            iVar9 = 0;
            do {
              lVar7 = lVar7 + 1;
              iVar10 = iVar9 + 1;
              if (lVar7 < lVar5) {
                uVar12 = *(ulonglong *)(lVar3 + 0x9f0);
                if (*(ulonglong *)(lVar3 + 0x9f0) == 0) {
                  uVar12 = uVar2;
                }
                plVar11 = (longlong *)(lVar7 * 0x10 + 8 + uVar12);
                do {
                  if (bVar14 != (*plVar11 != param_2)) break;
                  iVar10 = iVar10 + 1;
                  lVar7 = lVar7 + 1;
                  plVar11 = plVar11 + 2;
                } while (lVar7 < lVar5);
              }
              if (bVar14 != false) {
                if (iVar13 != iVar9) {
                  uVar12 = (ulonglong)(*(longlong *)(lVar3 + 0x9f0) != 0) - 1 & uVar2 |
                           *(ulonglong *)(lVar3 + 0x9f0);
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar13 * 0x10 + uVar12),
                             (void *)((longlong)iVar9 * 0x10 + uVar12),
                             (longlong)(iVar10 - iVar9) << 4);
                }
                iVar13 = iVar13 + (iVar10 - iVar9);
              }
              bVar14 = (bool)(bVar14 ^ 1);
              iVar9 = iVar10;
            } while (lVar7 < lVar5);
            *(int *)(lVar3 + 0x9f8) = iVar13;
          }
          if (*(undefined1 **)(lVar3 + 0x9a8) != (undefined1 *)0x0) {
            if (*(int *)(lVar3 + 0x9f8) != 0) {
              uVar12 = *(ulonglong *)(lVar3 + 0x9f0);
              if (*(ulonglong *)(lVar3 + 0x9f0) == 0) {
                uVar12 = uVar2;
              }
              puVar6 = (undefined1 *)((longlong)iVar13 * 0x10 + -0x10 + uVar12);
            }
            **(undefined1 **)(lVar3 + 0x9a8) = *puVar6;
          }
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return;
}



// FUNCTION 142d8fae0 FUN_142d8fae0 body=67 status=ok
// SIG undefined FUN_142d8fae0(void)

void FUN_142d8fae0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x1620,local_res10);
    }
  }
  return;
}



// FUNCTION 142d8fb30 FUN_142d8fb30 body=302 status=ok
// SIG undefined FUN_142d8fb30(void)

void FUN_142d8fb30(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res10;
  
  FUN_14245d8f0();
  if (param_2 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      lVar3 = *(longlong *)(param_2 + 0x488);
      if (lVar3 != 0) {
        lVar4 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(longlong *)(param_2 + 0x848) = lVar3;
          local_res10 = lVar3;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_2 + 0x8c0,&local_res10);
        }
      }
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 400), plVar1 != (longlong *)0x0)) {
        lVar3 = FUN_142e4e4a0();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*plVar1 + 0x3b0))(plVar1,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d8fc60 FUN_142d8fc60 body=2991 status=ok
// SIG undefined FUN_142d8fc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d8fc60(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4,
                  undefined4 param_5,longlong *param_6,longlong param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  float *pfVar11;
  float *pfVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  float *pfVar24;
  byte bVar25;
  undefined4 uVar26;
  longlong *plVar27;
  char cVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  byte local_288;
  char local_287;
  char local_286;
  undefined4 local_284;
  float local_280 [2];
  undefined8 local_278;
  undefined8 local_270;
  uint *puStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  longlong *local_250;
  longlong *local_248;
  longlong local_240;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  longlong local_220;
  undefined1 local_218 [4];
  undefined1 local_214 [4];
  longlong *local_210;
  longlong *local_208;
  undefined8 uStack_200;
  uint *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  float *local_1d8;
  longlong **local_1d0;
  float *local_1c8;
  longlong *local_1c0;
  float *pfStack_1b8;
  uint *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float local_198;
  char local_194;
  longlong local_190;
  undefined8 local_188;
  uint local_180 [4];
  uint *local_170;
  undefined8 local_168;
  undefined4 local_160;
  int local_15c;
  longlong local_150;
  undefined4 local_148;
  uint local_138 [16];
  uint *local_f8;
  undefined8 local_f0;
  uint local_e8 [16];
  uint *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_250 = param_6;
  iVar23 = *(int *)(param_1 + 0xc);
  iVar19 = *(int *)(param_1 + 0x10) - iVar23;
  uVar29 = (ulonglong)param_3;
  local_220 = param_7;
  local_278 = param_4;
  local_240 = param_1;
  if (iVar19 + 1 < 1) {
    cVar28 = '\0';
  }
  else {
    iVar7 = rand();
    iVar7 = (int)((float)iVar7 * 3.051851e-05 * (float)(iVar19 + 1));
    if (iVar7 <= iVar19) {
      iVar19 = iVar7;
    }
    cVar28 = (char)iVar19;
  }
  cVar28 = (char)iVar23 + cVar28;
  local_284 = CONCAT31((int3)((uint)iVar23 >> 8),cVar28);
  if ('\0' < cVar28) {
    local_f8 = (uint *)0x0;
    local_f0 = 0;
    local_a8 = (uint *)0x0;
    local_a0 = 0;
    if (0 < (int)param_3) {
      bVar25 = 0;
      plVar27 = param_2;
      do {
        uVar3 = local_278;
        plVar2 = (longlong *)*plVar27;
        if (plVar2 == (longlong *)0x0) {
          bVar5 = false;
LAB_142d8fe57:
          uVar4 = local_f0;
          iVar23 = (int)local_f0;
          bVar25 = bVar25 | bVar5;
          iVar19 = (int)local_f0 + 1;
          local_f0 = CONCAT44(local_f0._4_4_,iVar19);
          if (local_f0._4_4_ < iVar19) {
            TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                      (local_138,uVar4 & 0xffffffff);
          }
          puVar10 = local_138;
          puVar13 = local_f8;
LAB_142d8fe8e:
          if (puVar13 != (uint *)0x0) {
            puVar10 = puVar13;
          }
          *(longlong **)(puVar10 + (longlong)iVar23 * 2) = param_2;
        }
        else {
          cVar28 = (**(code **)(*plVar2 + 0x280))(plVar2);
          plVar21 = local_250;
          if (((cVar28 == '\0') &&
              (cVar28 = FUN_142d86870(plVar2,uVar3,param_5), plVar21 = local_250, cVar28 != '\0'))
             && (cVar28 = FUN_142d86c80(plVar2,local_250,0), cVar28 != '\0')) {
            bVar5 = 0 < (int)plVar2[0x1f];
            goto LAB_142d8fe57;
          }
          plVar15 = (longlong *)plVar2[0x1c];
          plVar1 = plVar15 + (int)plVar2[0x1d];
          for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
            if ((*plVar15 != 0) && (*(char *)(*plVar15 + 0x38) == (char)plVar2[7])) {
              local_298 = 1;
              cVar28 = FUN_142d7e440(plVar2,local_278,param_5,plVar21);
              uVar4 = local_a0;
              if (cVar28 != '\0') {
                iVar23 = (int)local_a0;
                iVar19 = (int)local_a0 + 1;
                local_a0 = CONCAT44(local_a0._4_4_,iVar19);
                if (local_a0._4_4_ < iVar19) {
                  TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::
                  ResizeGrow(local_e8,uVar4 & 0xffffffff);
                }
                puVar10 = local_e8;
                puVar13 = local_a8;
                goto LAB_142d8fe8e;
              }
              break;
            }
          }
        }
        param_2 = param_2 + 8;
        plVar27 = plVar27 + 8;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
      local_288 = bVar25;
      if (0 < (int)local_f0) {
        local_287 = *(char *)(local_240 + 10);
        local_190 = 0;
        local_188 = 0;
        local_170 = (uint *)0x0;
        local_168 = 0;
        local_15c = 0;
        local_150 = 0;
        local_148 = 0;
        local_198 = 0.0;
        local_194 = '\0';
        local_160 = 0xffffffff;
        TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
        ::Empty(&local_190);
        local_270 = &local_198;
        puStack_268 = local_138;
        local_260 = &local_287;
        uStack_258 = &local_278;
        FUN_142d7ae70(&local_270);
        local_286 = '\0';
        lVar22 = local_220;
        uVar26 = local_284;
        if ('\0' < (char)local_284) {
          do {
            cVar28 = local_286;
            if ((lVar22 == 0) || (*(int *)(lVar22 + 0x10) == 0)) {
LAB_142d8ffb1:
              bVar5 = false;
            }
            else {
              cVar6 = FUN_142d78f20(&local_198,lVar22);
              if (cVar6 == '\0') goto LAB_142d8ffb1;
              bVar5 = true;
            }
            iVar19 = rand();
            fVar30 = 0.0;
            iVar23 = (int)local_168;
            puStack_268 = local_180;
            local_270 = (float *)0x100000000;
            local_260._4_4_ = 0;
            uStack_258._0_4_ = 0;
            fVar31 = local_198 * (float)iVar19 * 3.051851e-05;
            if ((int)local_168 != 0) {
              puVar10 = local_180;
              if (local_170 != (uint *)0x0) {
                puVar10 = local_170;
              }
              uVar8 = *puVar10;
              iVar19 = 0;
              while (uVar8 == 0) {
                uStack_258._0_4_ = (int)uStack_258 + 0x20;
                uVar29 = (ulonglong)local_270 >> 0x20;
                local_270 = (float *)CONCAT44((int)uVar29,iVar19 + 1);
                if ((int)((int)local_168 + -1 + ((int)local_168 + -1 >> 0x1f & 0x1fU)) >> 5 <=
                    iVar19) {
                  local_260._4_4_ = (int)local_168;
                  goto LAB_142d9008d;
                }
                uVar8 = puVar10[(longlong)iVar19 + 1];
                iVar19 = iVar19 + 1;
              }
              uVar8 = -uVar8 & uVar8;
              iVar19 = 0x1f;
              if (uVar8 != 0) {
                for (; uVar8 >> iVar19 == 0; iVar19 = iVar19 + -1) {
                }
              }
              local_270 = (float *)CONCAT44(uVar8,SUB84(local_270,0));
              if (uVar8 == 0) {
                iVar19 = 0x20;
              }
              else {
                iVar19 = 0x1f - iVar19;
              }
              local_260._4_4_ = ((int)uStack_258 - iVar19) + 0x1f;
              if ((int)local_168 < local_260._4_4_) {
                local_260._4_4_ = (int)local_168;
              }
            }
LAB_142d9008d:
            uStack_1f0 = CONCAT44(local_260._4_4_,0xffffffff);
            local_1e8 = CONCAT44(uStack_258._4_4_,(int)uStack_258);
            local_208 = &local_190;
            local_260._4_4_ = (int)local_168;
            pfStack_1b8 = local_270;
            local_260._0_4_ = -1 << ((byte)local_168 & 0x1f);
            uStack_200 = local_270;
            local_1f8 = puStack_268;
            local_1c0 = local_208;
            puStack_1b0 = puStack_268;
            uStack_1a8 = uStack_1f0;
            uStack_1a0 = local_1e8;
            while( true ) {
              lVar9 = (longlong)uStack_1f0._4_4_;
              if (((uStack_1f0._4_4_ == iVar23) && (local_1f8 == local_180)) &&
                 (local_208 == &local_190)) goto LAB_142d90767;
              lVar20 = *local_208;
              if ((fVar30 <= fVar31) && (fVar31 <= fVar30 + *(float *)(lVar20 + 8 + lVar9 * 0x18)))
              break;
              fVar30 = fVar30 + *(float *)(lVar20 + 8 + lVar9 * 0x18);
              uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0 & ~uStack_200._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_200);
            }
            plVar27 = *(longlong **)(lVar20 + lVar9 * 0x18);
            local_210 = plVar27;
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(&local_190,&local_238,plVar27);
            lVar22 = local_190;
            pfVar12 = (float *)0x0;
            pfVar17 = pfVar12;
            if (local_238 != -1) {
              pfVar17 = (float *)(local_190 + (longlong)local_238 * 0x18);
            }
            pfVar24 = pfVar17 + 2;
            if (pfVar17 == (float *)0x0) {
              pfVar24 = pfVar12;
            }
            if (pfVar24 != (float *)0x0) {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(&local_190,&local_234,plVar27);
              fVar30 = *(float *)(lVar22 + 8 + (longlong)local_234 * 0x18);
              TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
              ::Remove();
              local_198 = local_198 - fVar30;
            }
            uVar29 = local_f0 & 0xffffffff;
            puVar10 = local_f8;
            pfVar17 = pfVar12;
            pfVar24 = pfVar12;
            if (0 < (int)local_f0) {
              do {
                iVar23 = (int)uVar29;
                iVar19 = (int)pfVar17;
                puVar13 = local_138;
                if (puVar10 != (uint *)0x0) {
                  puVar13 = puVar10;
                }
                if (*(longlong **)((longlong)puVar13 + (longlong)pfVar24) == plVar27) {
                  iVar7 = (iVar23 - iVar19) + -1;
                  if (0 < iVar7) {
                    iVar7 = 1;
                  }
                  if (iVar7 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              (puVar13 + (longlong)iVar19 * 2,
                               puVar13 + (longlong)(iVar23 - iVar7) * 2,(longlong)iVar7 << 3);
                    iVar23 = (int)local_f0;
                  }
                  local_f0 = CONCAT44(local_f0._4_4_,iVar23 + -1);
                  FUN_1412a96f0();
                  uVar29 = local_f0 & 0xffffffff;
                  iVar19 = iVar19 + -1;
                  pfVar24 = pfVar24 + -2;
                  puVar10 = local_f8;
                }
                pfVar17 = (float *)(ulonglong)(iVar19 + 1U);
                pfVar24 = pfVar24 + 2;
                uVar26 = local_284;
              } while ((int)(iVar19 + 1U) < (int)uVar29);
            }
            if (bVar5) {
              local_220 = 0;
              local_198 = 0.0;
              TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
              ::Empty();
              puVar10 = local_138;
              if (local_f8 != (uint *)0x0) {
                puVar10 = local_f8;
              }
              pfVar17 = (float *)((longlong)(int)local_f0 & 0x1fffffffffffffff);
              if (puVar10 + (longlong)(int)local_f0 * 2 < puVar10) {
                pfVar17 = pfVar12;
              }
              pfVar24 = pfVar12;
              if (pfVar17 != (float *)0x0) {
                do {
                  local_240 = *(longlong *)puVar10;
                  if (local_287 == '\0') {
                    fVar30 = 1.0;
                  }
                  else {
                    fVar30 = (float)FUN_142c98860(local_240 + 8,local_278);
                  }
                  local_280[0] = fVar30;
                  if ((1e-08 < fVar30) || (local_194 != '\0')) {
                    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(&local_190,&local_230,local_240);
                    pfVar16 = pfVar12;
                    if (local_230 != -1) {
                      pfVar16 = (float *)(local_190 + (longlong)local_230 * 0x18);
                    }
                    pfVar11 = pfVar16 + 2;
                    if (pfVar16 == (float *)0x0) {
                      pfVar11 = pfVar12;
                    }
                    if (pfVar11 != (float *)0x0) {
                      local_198 = local_198 - *pfVar11;
                    }
                    local_198 = local_198 + fVar30;
                    local_1e0 = &local_240;
                    local_1d8 = local_280;
                    TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                              (&local_190,local_218,&local_1e0,0);
                  }
                  puVar10 = puVar10 + 2;
                  pfVar24 = (float *)((longlong)pfVar24 + 1);
                } while (pfVar24 != pfVar17);
              }
            }
            plVar2 = local_250;
            lVar22 = *plVar27;
            if (lVar22 != 0) {
              iVar23 = (int)local_250[1];
              *(int *)(local_250 + 1) = iVar23 + 1;
              if (*(int *)((longlong)local_250 + 0xc) < iVar23 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_250,iVar23);
              }
              *(longlong *)(*plVar2 + (longlong)iVar23 * 8) = lVar22;
              iVar23 = (int)local_a0 + -1;
              if (-1 < iVar23) {
                lVar22 = (longlong)iVar23 * 8;
                puVar10 = local_a8;
                lVar9 = lVar22;
                do {
                  puVar13 = local_e8;
                  if (puVar10 != (uint *)0x0) {
                    puVar13 = puVar10;
                  }
                  local_248 = *(longlong **)((longlong)puVar13 + lVar22);
                  if (*plVar27 != 0) {
                    plVar21 = *(longlong **)(*local_248 + 0xe0);
                    plVar2 = plVar21 + *(int *)(*local_248 + 0xe8);
                    for (; plVar21 != plVar2; plVar21 = plVar21 + 1) {
                      if (*plVar21 == *plVar27) {
                        if (local_287 == '\0') {
                          fVar30 = 1.0;
                        }
                        else {
                          fVar30 = (float)FUN_142c98860(local_248 + 1,local_278);
                        }
                        local_288 = local_288 | 0 < *(int *)(*local_248 + 0xf8);
                        local_280[0] = fVar30;
                        if ((1e-08 < fVar30) || (local_194 != '\0')) {
                          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                          ::FindId(&local_190,&local_22c,local_248);
                          pfVar17 = (float *)0x0;
                          if (local_22c != -1) {
                            pfVar17 = (float *)(local_190 + (longlong)local_22c * 0x18);
                          }
                          pfVar12 = pfVar17 + 2;
                          if (pfVar17 == (float *)0x0) {
                            pfVar12 = (float *)0x0;
                          }
                          if (pfVar12 != (float *)0x0) {
                            local_198 = local_198 - *pfVar12;
                          }
                          local_198 = local_198 + fVar30;
                          local_1d0 = &local_248;
                          local_1c8 = local_280;
                          TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
                          ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                                    (&local_190,local_214,&local_1d0,0);
                        }
                        uVar29 = local_f0;
                        lVar20 = (longlong)(int)local_f0;
                        iVar19 = (int)local_f0 + 1;
                        local_f0 = CONCAT44(local_f0._4_4_,iVar19);
                        if (local_f0._4_4_ < iVar19) {
                          TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::
                          ResizeGrow(local_138,uVar29 & 0xffffffff);
                        }
                        puVar10 = local_138;
                        if (local_f8 != (uint *)0x0) {
                          puVar10 = local_f8;
                        }
                        *(longlong **)(puVar10 + lVar20 * 2) = local_248;
                        iVar19 = ((int)local_a0 - iVar23) + -1;
                        if (0 < iVar19) {
                          iVar19 = 1;
                        }
                        if (iVar19 != 0) {
                          puVar10 = local_e8;
                          if (local_a8 != (uint *)0x0) {
                            puVar10 = local_a8;
                          }
                          _guard_xfg_dispatch_icall_nop
                                    ((void *)((longlong)puVar10 + lVar9),
                                     puVar10 + (longlong)((int)local_a0 - iVar19) * 2,
                                     (longlong)iVar19 << 3);
                        }
                        local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 + -1);
                        FUN_1412a96f0();
                        puVar10 = local_a8;
                        break;
                      }
                    }
                  }
                  lVar9 = lVar9 + -8;
                  lVar22 = lVar22 + -8;
                  iVar23 = iVar23 + -1;
                  cVar28 = local_286;
                } while (-1 < iVar23);
              }
              if (local_288 != 0) {
                iVar23 = (int)local_f0 + -1;
                if (-1 < iVar23) {
                  lVar22 = (longlong)iVar23 * 8;
                  lVar9 = lVar22;
                  puVar10 = local_f8;
                  iVar19 = (int)local_f0;
                  do {
                    puVar13 = local_138;
                    if (puVar10 != (uint *)0x0) {
                      puVar13 = puVar10;
                    }
                    plVar27 = *(longlong **)((longlong)puVar13 + lVar22);
                    lVar20 = *plVar27;
                    if ((lVar20 != 0) && (*local_210 != 0)) {
                      plVar21 = *(longlong **)(lVar20 + 0xf0);
                      plVar2 = plVar21 + *(int *)(lVar20 + 0xf8);
                      for (; plVar21 != plVar2; plVar21 = plVar21 + 1) {
                        if (*plVar21 == *local_210) {
                          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                          ::FindId(&local_190,&local_228,plVar27);
                          lVar20 = local_190;
                          lVar18 = 0;
                          if (local_228 != -1) {
                            lVar18 = local_190 + (longlong)local_228 * 0x18;
                          }
                          lVar14 = lVar18 + 8;
                          if (lVar18 == 0) {
                            lVar14 = 0;
                          }
                          if (lVar14 != 0) {
                            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                            ::FindId(&local_190,&local_224,plVar27);
                            fVar30 = *(float *)(lVar20 + 8 + (longlong)local_224 * 0x18);
                            TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
                            ::Remove(&local_190);
                            local_198 = local_198 - fVar30;
                            puVar10 = local_f8;
                            iVar19 = (int)local_f0;
                          }
                          iVar7 = (iVar19 - iVar23) + -1;
                          if (0 < iVar7) {
                            iVar7 = 1;
                          }
                          if (iVar7 != 0) {
                            puVar13 = local_138;
                            if (puVar10 != (uint *)0x0) {
                              puVar13 = puVar10;
                            }
                            _guard_xfg_dispatch_icall_nop
                                      ((void *)((longlong)puVar13 + lVar9),
                                       puVar13 + (longlong)(iVar19 - iVar7) * 2,(longlong)iVar7 << 3
                                      );
                            iVar19 = (int)local_f0;
                          }
                          local_f0 = CONCAT44(local_f0._4_4_,iVar19 + -1);
                          FUN_1412a96f0();
                          puVar10 = local_f8;
                          iVar19 = (int)local_f0;
                          break;
                        }
                      }
                    }
                    lVar9 = lVar9 + -8;
                    lVar22 = lVar22 + -8;
                    iVar23 = iVar23 + -1;
                    uVar26 = local_284;
                    cVar28 = local_286;
                  } while (-1 < iVar23);
                }
              }
            }
            lVar22 = local_220;
            if ((int)local_188 == local_15c) break;
LAB_142d90767:
            local_286 = cVar28 + '\x01';
          } while (local_286 < (char)uVar26);
        }
        local_148 = 0;
        if (local_150 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_190);
      }
      if (local_a8 != (uint *)0x0) {
        FMemory::Free();
      }
      if (local_f8 != (uint *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142d90810 FUN_142d90810 body=691 status=ok
// SIG undefined FUN_142d90810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d90810(longlong *param_1,int param_2,undefined8 param_3,int param_4,longlong *param_5,
                  longlong param_6)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_128 [32];
  longlong *local_108;
  int local_100 [2];
  float local_f8 [2];
  undefined1 local_f0 [8];
  longlong local_e8;
  longlong **local_e0;
  float *local_d8;
  float local_c8;
  char local_c4;
  longlong local_c0 [4];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar6 = (longlong)param_2;
  local_e8 = param_6;
  local_c8 = 0.0;
  local_c4 = '\0';
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0xffffffff;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(local_c0,param_2);
  if (0 < param_2) {
    do {
      plVar2 = (longlong *)*param_1;
      local_108 = plVar2;
      if (plVar2 == (longlong *)0x0) {
LAB_142d9093c:
        fVar7 = (float)FUN_142c98860(param_1 + 1,param_3);
        local_f8[0] = fVar7;
        if ((1e-08 < fVar7) || (local_c4 != '\0')) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(local_c0,local_100,local_108);
          pfVar5 = (float *)0x0;
          if (local_100[0] != -1) {
            pfVar5 = (float *)(local_c0[0] + (longlong)local_100[0] * 0x18);
          }
          pfVar4 = pfVar5 + 2;
          if (pfVar5 == (float *)0x0) {
            pfVar4 = (float *)0x0;
          }
          if (pfVar4 != (float *)0x0) {
            local_c8 = local_c8 - *pfVar4;
          }
          local_c8 = local_c8 + fVar7;
          local_e0 = &local_108;
          local_d8 = local_f8;
          TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                    (local_c0,local_f0,&local_e0,0);
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x280))(plVar2);
        if (cVar3 == '\0') {
          fVar7 = (float)FUN_142c98860(plVar2 + 0xe,param_3);
          if (((fVar7 <= (float)param_4) &&
              (fVar7 = (float)FUN_142c98860(plVar2 + 0x15,param_3), (float)param_4 <= fVar7)) &&
             (cVar3 = FUN_142d86c80(plVar2,param_5,0), cVar3 != '\0')) goto LAB_142d9093c;
        }
      }
      param_1 = param_1 + 8;
      lVar6 = lVar6 + -1;
      param_6 = local_e8;
    } while (lVar6 != 0);
  }
  if (param_6 != 0) {
    FUN_142d78c60(&local_c8,param_6);
  }
  local_108 = (longlong *)0x0;
  FUN_1407436b0(&local_c8,&local_108,0xbf800000);
  plVar2 = local_108;
  if (local_108 != (longlong *)0x0) {
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    *(longlong **)(*param_5 + (longlong)iVar1 * 8) = plVar2;
  }
  local_78 = 0;
  if (local_80 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_c0);
  return;
}



// FUNCTION 142d90ad0 FUN_142d90ad0 body=80 status=ok
// SIG undefined FUN_142d90ad0(void)

void FUN_142d90ad0(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if ((((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && ((*(byte *)(param_2 + 0x28) & 3) != 0)) &&
     ((*(ulonglong *)(param_2 + 0x30) & 0x2000000000001000) == 0)) {
    FUN_141764720(param_2,param_1 + 0x38,*(undefined8 *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142d90b20 FUN_142d90b20 body=126 status=ok
// SIG undefined FUN_142d90b20(void)

void FUN_142d90b20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_141763960();
  if (((*(byte *)(param_2 + 0x28) & 3) != 0) &&
     ((*(ulonglong *)(param_2 + 0x30) & 0x2000000000001000) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x50) * 0x28;
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
      FUN_141764720(param_2,lVar2 + 8,*(undefined8 *)(param_1 + 0x38));
    }
  }
  return;
}



// FUNCTION 142d90ba0 FUN_142d90ba0 body=236 status=ok
// SIG undefined FUN_142d90ba0(void)

void FUN_142d90ba0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x10);
    if (param_2 != 0) {
      lVar2 = FUN_1428dfc70();
      lVar5 = param_2;
      do {
        lVar3 = param_2;
        if (lVar5 == lVar2) goto LAB_142d90bf8;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar3 = 0;
LAB_142d90bf8:
    if ((lVar4 != lVar3) &&
       ((*(longlong *)(param_1 + 0x120) != 0 || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)))) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      cVar1 = UWorld::IsGameWorld(lVar4);
      if (cVar1 != '\0') {
        *(undefined8 *)(param_1 + 0x2e0) = 0;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x300) & 8) != 0) &&
     (cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar1 == '\0')) {
    *(longlong *)(param_1 + 0x2d0) = param_2;
    return;
  }
  FUN_142376910(param_1,param_2);
  return;
}



// FUNCTION 142d90c90 FUN_142d90c90 body=384 status=ok
// SIG undefined FUN_142d90c90(void)

void FUN_142d90c90(longlong *param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  undefined1 local_ac [164];
  
  if (param_1 != (longlong *)0x0) {
    pfVar7 = (float *)FUN_14238d380(param_1,local_b8);
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    pfVar7 = (float *)FUN_14238db80(param_1,&local_c8);
    fVar4 = *pfVar7;
    fVar5 = pfVar7[1];
    fVar6 = pfVar7[2];
    pfVar7 = (float *)FUN_142369f10(param_1,local_ac);
    local_c0 = (param_4 * pfVar7[2] + fVar6 * param_3 + fVar3 * param_2) * 0.017453292;
    local_c8 = CONCAT44((param_4 * pfVar7[1] + fVar5 * param_3 + fVar2 * param_2) * 0.017453292,
                        (param_4 * *pfVar7 + fVar4 * param_3 + fVar1 * param_2) * 0.017453292);
    local_b0 = local_c0;
    (**(code **)(*param_1 + 0x5e8))(param_1,&local_c8,param_5,1);
  }
  return;
}



// FUNCTION 142d90e10 FUN_142d90e10 body=191 status=ok
// SIG undefined FUN_142d90e10(void)

void FUN_142d90e10(longlong param_1,short *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if ((short *)*puVar1 == param_2) {
    *(undefined1 *)(param_1 + 0x99) = 1;
    return;
  }
  iVar2 = 0;
  iVar3 = iVar2;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    iVar3 = (int)lVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,iVar3);
    iVar2 = *(int *)(param_1 + 0x90);
  }
  *(int *)(param_1 + 0x90) = iVar2 + iVar3;
  if (*(int *)(param_1 + 0x94) < iVar2 + iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
  }
  if (iVar3 != 0) {
    _guard_xfg_dispatch_icall_nop((void *)*puVar1,param_2,(longlong)iVar3 * 2);
  }
  *(undefined1 *)(param_1 + 0x99) = 1;
  return;
}



// FUNCTION 142d90ed0 FUN_142d90ed0 body=152 status=ok
// SIG undefined FUN_142d90ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d90ed0(longlong param_1,int *param_2,float param_3)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if (((*(int *)(param_1 + 0x574) != param_2[3] || *(int *)(param_1 + 0x570) != param_2[2]) ||
        *(int *)(param_1 + 0x56c) != param_2[1]) || *(int *)(param_1 + 0x568) != *param_2) {
      _DAT_146b34150 = *(undefined8 *)param_2;
      _DAT_146b34158 = *(undefined8 *)(param_2 + 2);
      *(float *)(param_1 + 0x578) = param_3;
      *(undefined8 *)(param_1 + 0x568) = _DAT_146b34150;
      *(undefined8 *)(param_1 + 0x570) = _DAT_146b34158;
      DAT_146b33f30 = (float)*(undefined4 *)(param_1 + 0x578);
      return;
    }
    if ((*(float *)(param_1 + 0x57c) <= 0.0) ||
       (*(float *)(param_1 + 0x57c) <= param_3 - *(float *)(param_1 + 0x578))) {
      *(float *)(param_1 + 0x578) = param_3;
      DAT_146b33f30 = param_3;
    }
  }
  return;
}



// FUNCTION 142d90f70 FUN_142d90f70 body=3370 status=ok
// SIG undefined FUN_142d90f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_142d90f70(longlong *param_1,int *param_2,undefined8 *param_3)

{
  wchar_t **ppwVar1;
  longlong *plVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  wchar_t wVar10;
  int iVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_d8 [48];
  wchar_t *local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  wchar_t *local_60;
  wchar_t *local_58;
  char local_50;
  ulonglong local_48;
  
  puVar15 = auStack_d8;
  puVar14 = auStack_d8;
  puVar16 = auStack_d8;
  local_48 = DAT_1468387a8 ^ (ulonglong)&local_a8;
  pwVar8 = (wchar_t *)*param_3;
  pwVar12 = (wchar_t *)param_3[1];
  wVar10 = L'0';
  pwVar7 = pwVar8;
  do {
    if (pwVar7 == pwVar12) {
      bVar19 = wVar10 == L'\0';
      goto LAB_142d90ff1;
    }
    if (wVar10 != *pwVar7) {
      bVar19 = false;
      goto LAB_142d90ff1;
    }
    wVar10 = *(wchar_t *)(((longlong)&UNK_14588cea6 - (longlong)pwVar8) + (longlong)pwVar7);
    pwVar7 = pwVar7 + 1;
  } while (wVar10 != L'\0');
  bVar19 = pwVar7 == pwVar12;
LAB_142d90ff1:
  iVar11 = *param_2;
  if ((iVar11 < 0) || ((int)((longlong *)*param_1)[1] <= iVar11)) {
switchD_142d9106f_caseD_2:
    uVar6 = 0;
    puVar16 = auStack_d8;
    goto LAB_142d91c77;
  }
  iVar18 = iVar11 + 1;
  iVar11 = *(byte *)((longlong)iVar11 + *(longlong *)*param_1) - 0x1d;
  *param_2 = iVar18;
  switch(iVar11) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x18:
  case 0x19:
  case 0x2e:
    bVar5 = true;
    break;
  default:
    bVar5 = false;
  }
  if (!bVar5) goto switchD_142d9106f_caseD_2;
  uStack_a0 = pwVar12;
  local_a8 = pwVar8;
  switch(iVar11) {
  case 0:
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    uStack_a0 = pwVar12;
    local_a8 = pwVar8;
    if (local_50 != '\0') {
      uStack_a0 = local_68;
      local_a8 = local_70;
    }
    goto LAB_142d910b2;
  case 1:
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    uStack_a0 = pwVar12;
    local_a8 = pwVar8;
    if (local_50 != '\0') {
      uStack_a0 = local_68;
      local_a8 = local_70;
    }
    goto LAB_142d91333;
  default:
    goto switchD_142d9106f_caseD_2;
  case 3:
    local_80 = pwVar8;
    local_78 = pwVar12;
    FUN_14063eb30(&local_a8,&local_80);
    ppwVar1 = (wchar_t **)(param_1 + 3);
    if (ppwVar1 == &local_a8) {
      if (local_a8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppwVar1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *ppwVar1 = local_a8;
      *(int *)(param_1 + 4) = (int)uStack_a0;
      *(int *)((longlong)param_1 + 0x24) = uStack_a0._4_4_;
    }
    pwVar8 = (wchar_t *)FUN_142d82f20(ppwVar1);
    plVar2 = (longlong *)param_1[2];
    local_98 = (wchar_t *)0x0;
    if (pwVar8 != (wchar_t *)0x0) {
      local_98 = pwVar8;
    }
    if (plVar2 != (longlong *)0x0) {
      iVar11 = (int)plVar2[1];
      *(int *)(plVar2 + 1) = iVar11 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar11 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar11);
      }
      *(wchar_t **)(*plVar2 + (longlong)iVar11 * 8) = local_98;
    }
    goto LAB_142d91c5a;
  case 4:
  case 0x2e:
    lVar13 = (longlong)pwVar12 - (longlong)pwVar8 >> 1;
    if (lVar13 == 0) {
      local_98 = (wchar_t *)0x0;
    }
    else {
      lVar13 = lVar13 + 1;
      pwVar12 = (wchar_t *)0x0;
      lVar3 = lVar13 * 2;
      if (lVar3 != 0) {
        uVar9 = lVar3 + 0x1e;
        if (uVar9 <= lVar3 + 0xfU) {
          uVar9 = 0xffffffffffffff0;
        }
        puVar14 = auStack_d8 + -(uVar9 & 0xfffffffffffffff0);
        pwVar12 = (wchar_t *)((longlong)&uStack_a0 + -(uVar9 & 0xfffffffffffffff0));
      }
      lVar13 = (longlong)(int)lVar13;
      *(undefined8 *)(puVar14 + -8) = 0x142d91b53;
      wcsncpy(pwVar12,pwVar8,lVar13 - 1);
      *(undefined4 *)(puVar14 + 0x28) = 0xffffffff;
      pwVar12[lVar13 + -1] = L'\0';
      puVar14[0x20] = 1;
      *(undefined8 *)(puVar14 + -8) = 0x142d91b7a;
      FName::Init(&local_98,pwVar12,0,1);
      iVar18 = *param_2;
      puVar15 = puVar14;
    }
    *(int *)((longlong)iVar18 + *(longlong *)*param_1) = (int)local_98;
    *param_2 = *param_2 + 4;
    *(int *)((longlong)*param_2 + *(longlong *)*param_1) = (int)local_98;
    *param_2 = *param_2 + 4;
    uVar6 = 1;
    *(int *)((longlong)*param_2 + *(longlong *)*param_1) = (int)((ulonglong)local_98 >> 0x20);
    *param_2 = *param_2 + 4;
    puVar16 = puVar15;
    break;
  case 5:
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_88 = (wchar_t *)0x0;
      local_a8 = (wchar_t *)0x0;
    }
    else {
      local_a8 = local_60;
      local_88 = local_58;
      pwVar12 = local_68;
      pwVar8 = local_70;
    }
    pwVar7 = local_a8;
    uStack_a0 = local_88;
    local_98 = pwVar8;
    local_90 = pwVar12;
    FUN_142d77e10(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = (wchar_t *)0x0;
      local_90 = local_88;
    }
    else {
      local_a8 = local_60;
      uStack_a0 = local_58;
      local_90 = local_68;
      pwVar7 = local_70;
    }
    pwVar12 = uStack_a0;
    pwVar8 = local_a8;
    local_98 = pwVar7;
    FUN_142d77e10(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    uStack_a0 = pwVar12;
    local_a8 = pwVar8;
    if (local_50 != '\0') {
      uStack_a0 = local_68;
      local_a8 = local_70;
    }
LAB_142d910b2:
    FUN_142d77e10(param_1,param_2,&local_a8);
    uVar6 = 1;
    break;
  case 6:
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_88 = (wchar_t *)0x0;
      local_a8 = (wchar_t *)0x0;
    }
    else {
      local_a8 = local_60;
      local_88 = local_58;
      pwVar12 = local_68;
      pwVar8 = local_70;
    }
    pwVar7 = local_a8;
    uStack_a0 = local_88;
    local_98 = pwVar8;
    local_90 = pwVar12;
    FUN_142d77f30(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = (wchar_t *)0x0;
      local_90 = local_88;
    }
    else {
      local_a8 = local_60;
      uStack_a0 = local_58;
      local_90 = local_68;
      pwVar7 = local_70;
    }
    pwVar12 = uStack_a0;
    pwVar8 = local_a8;
    local_98 = pwVar7;
    FUN_142d77f30(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    uStack_a0 = pwVar12;
    local_a8 = pwVar8;
    if (local_50 != '\0') {
      uStack_a0 = local_68;
      local_a8 = local_70;
    }
LAB_142d91333:
    FUN_142d77f30(param_1,param_2,&local_a8);
    uVar6 = 1;
    puVar16 = auStack_d8;
    break;
  case 7:
  case 0xf:
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_80 = L":";
    local_78 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_80);
    local_78 = pwVar12;
    local_80 = pwVar8;
    if (local_50 != '\0') {
      local_78 = local_68;
      local_80 = local_70;
    }
    FUN_14063eb30(&local_a8,&local_80);
    ppwVar1 = (wchar_t **)(param_1 + 3);
    if (ppwVar1 == &local_a8) {
      if (local_a8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppwVar1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *ppwVar1 = local_a8;
      *(int *)(param_1 + 4) = (int)uStack_a0;
      *(int *)((longlong)param_1 + 0x24) = uStack_a0._4_4_;
    }
    if ((int)param_1[4] == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *ppwVar1;
    }
    iVar11 = _wtoi(pwVar8);
    *(char *)((longlong)*param_2 + *(longlong *)*param_1) = (char)iVar11;
    uVar6 = 1;
    *param_2 = *param_2 + 1;
    puVar16 = auStack_d8;
    break;
  case 8:
  case 9:
    uVar6 = 1;
    *(byte *)((longlong)iVar18 + -1 + *(longlong *)*param_1) = (bVar19 ^ 1U) + 0x25;
    puVar16 = auStack_d8;
    break;
  case 10:
  case 0xb:
    uVar6 = 1;
    *(byte *)((longlong)iVar18 + -1 + *(longlong *)*param_1) = bVar19 + 0x27;
    puVar16 = auStack_d8;
    break;
  case 0xe:
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_88 = (wchar_t *)0x0;
      local_a8 = (wchar_t *)0x0;
    }
    else {
      local_a8 = local_60;
      local_88 = local_58;
      pwVar12 = local_68;
      pwVar8 = local_70;
    }
    pwVar7 = local_a8;
    uStack_a0 = local_88;
    local_98 = pwVar8;
    local_90 = pwVar12;
    FUN_142d77f30(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = (wchar_t *)0x0;
      local_90 = local_88;
    }
    else {
      local_a8 = local_60;
      uStack_a0 = local_58;
      local_90 = local_68;
      pwVar7 = local_70;
    }
    pwVar12 = uStack_a0;
    pwVar8 = local_a8;
    local_98 = pwVar7;
    FUN_142d77f30(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_88 = (wchar_t *)0x0;
      local_a8 = (wchar_t *)0x0;
    }
    else {
      local_a8 = local_60;
      local_88 = local_58;
      pwVar8 = local_70;
      pwVar12 = local_68;
    }
    pwVar7 = local_a8;
    uStack_a0 = local_88;
    local_98 = pwVar8;
    local_90 = pwVar12;
    FUN_142d77f30(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = (wchar_t *)0x0;
      local_90 = local_88;
    }
    else {
      local_a8 = local_60;
      uStack_a0 = local_58;
      local_90 = local_68;
      pwVar7 = local_70;
    }
    pwVar12 = uStack_a0;
    pwVar8 = local_a8;
    local_98 = pwVar7;
    FUN_142d77f30(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_88 = (wchar_t *)0x0;
      local_a8 = (wchar_t *)0x0;
    }
    else {
      local_a8 = local_60;
      local_88 = local_58;
      pwVar8 = local_70;
      pwVar12 = local_68;
    }
    pwVar7 = local_a8;
    uStack_a0 = local_88;
    local_98 = pwVar8;
    local_90 = pwVar12;
    FUN_142d77f30(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = (wchar_t *)0x0;
      local_90 = local_88;
    }
    else {
      local_a8 = local_60;
      uStack_a0 = local_58;
      local_90 = local_68;
      pwVar7 = local_70;
    }
    pwVar12 = uStack_a0;
    pwVar8 = local_a8;
    local_98 = pwVar7;
    FUN_142d77f30(param_1,param_2,&local_98);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 == '\0') {
      local_88 = (wchar_t *)0x0;
      local_98 = (wchar_t *)0x0;
    }
    else {
      local_88 = local_60;
      local_98 = local_58;
      pwVar8 = local_70;
      pwVar12 = local_68;
    }
    local_a8 = local_88;
    uStack_a0 = local_98;
    local_80 = pwVar8;
    local_78 = pwVar12;
    FUN_142d77f30(param_1,param_2,&local_80);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_80 = L":";
    local_78 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_80);
    if (local_50 == '\0') {
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = (wchar_t *)0x0;
      local_80 = local_88;
      local_78 = local_98;
    }
    else {
      local_a8 = local_60;
      uStack_a0 = local_58;
      local_80 = local_70;
      local_78 = local_68;
    }
    pwVar12 = uStack_a0;
    pwVar8 = local_a8;
    FUN_142d77f30(param_1,param_2,&local_80);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_80 = L":";
    local_78 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_80);
    if (local_50 == '\0') {
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = (wchar_t *)0x0;
    }
    else {
      local_a8 = local_60;
      uStack_a0 = local_58;
      pwVar12 = local_68;
      pwVar8 = local_70;
    }
    pwVar4 = uStack_a0;
    pwVar7 = local_a8;
    local_80 = pwVar8;
    local_78 = pwVar12;
    FUN_142d77f30(param_1,param_2,&local_80);
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_80 = L":";
    local_78 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_80);
    local_78 = pwVar4;
    local_80 = pwVar7;
    if (local_50 != '\0') {
      local_78 = local_68;
      local_80 = local_70;
    }
    FUN_142d77f30(param_1,param_2,&local_80);
    uVar6 = 1;
    puVar16 = auStack_d8;
    break;
  case 0x18:
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 != '\0') {
      pwVar12 = local_68;
      pwVar8 = local_70;
    }
    pwVar7 = (wchar_t *)0x0;
    lVar13 = (longlong)pwVar12 - (longlong)pwVar8 >> 1;
    iVar11 = 0;
    uStack_a0 = (wchar_t *)0x0;
    local_a8 = (wchar_t *)0x0;
    if (lVar13 != 0) {
      iVar17 = (int)lVar13 + 1;
      iVar18 = iVar11;
      if (0 < iVar17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8,iVar17);
        pwVar7 = (wchar_t *)((ulonglong)uStack_a0 & 0xffffffff);
        iVar18 = uStack_a0._4_4_;
      }
      iVar11 = iVar17 + (int)pwVar7;
      uStack_a0 = (wchar_t *)CONCAT44(uStack_a0._4_4_,iVar11);
      if (iVar18 < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        iVar11 = (int)uStack_a0;
      }
      pwVar7 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,pwVar8,lVar13 * 2);
      pwVar7[(longlong)iVar11 + -1] = L'\0';
    }
    ppwVar1 = (wchar_t **)(param_1 + 3);
    if (ppwVar1 == &local_a8) {
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
    }
    else {
      if (*ppwVar1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *ppwVar1 = pwVar7;
      *(int *)(param_1 + 4) = iVar11;
      *(int *)((longlong)param_1 + 0x24) = uStack_a0._4_4_;
    }
    if ((int)param_1[4] == 0) {
      local_98 = (wchar_t *)_wtoi64(L"");
    }
    else {
      local_98 = (wchar_t *)_wtoi64(*ppwVar1);
    }
    goto LAB_142d91c5a;
  case 0x19:
    iVar11 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
    local_98 = L":";
    local_90 = &DAT_14588d1f4 + iVar11;
    FUN_142d95e90(&local_a8,&local_70,&local_98);
    if (local_50 != '\0') {
      pwVar12 = local_68;
      pwVar8 = local_70;
    }
    pwVar7 = (wchar_t *)0x0;
    lVar13 = (longlong)pwVar12 - (longlong)pwVar8 >> 1;
    iVar11 = 0;
    uStack_a0 = (wchar_t *)0x0;
    local_a8 = (wchar_t *)0x0;
    if (lVar13 != 0) {
      iVar17 = (int)lVar13 + 1;
      iVar18 = iVar11;
      if (0 < iVar17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8,iVar17);
        pwVar7 = (wchar_t *)((ulonglong)uStack_a0 & 0xffffffff);
        iVar18 = uStack_a0._4_4_;
      }
      iVar11 = iVar17 + (int)pwVar7;
      uStack_a0 = (wchar_t *)CONCAT44(uStack_a0._4_4_,iVar11);
      if (iVar18 < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        iVar11 = (int)uStack_a0;
      }
      pwVar7 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,pwVar8,lVar13 * 2);
      pwVar7[(longlong)iVar11 + -1] = L'\0';
    }
    ppwVar1 = (wchar_t **)(param_1 + 3);
    if (ppwVar1 == &local_a8) {
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
    }
    else {
      if (*ppwVar1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *ppwVar1 = pwVar7;
      *(int *)(param_1 + 4) = iVar11;
      *(int *)((longlong)param_1 + 0x24) = uStack_a0._4_4_;
    }
    if ((int)param_1[4] == 0) {
      local_98 = (wchar_t *)_wcstoui64(L"",(wchar_t **)0x0,0);
    }
    else {
      local_98 = (wchar_t *)_wcstoui64(*ppwVar1,(wchar_t **)0x0,0);
    }
LAB_142d91c5a:
    uVar6 = 1;
    *(wchar_t **)((longlong)*param_2 + *(longlong *)*param_1) = local_98;
    *param_2 = *param_2 + 8;
    puVar16 = auStack_d8;
  }
LAB_142d91c77:
  *(undefined8 *)(puVar16 + -8) = 0x142d91c83;
  return uVar6;
}



// FUNCTION 142d91d40 FUN_142d91d40 body=23 status=ok
// SIG undefined FUN_142d91d40(void)

void FUN_142d91d40(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x4a8) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(lVar1 + 0x2f0) >> 5 & 1) != param_2) {
    *(byte *)(lVar1 + 0x2f0) = *(byte *)(lVar1 + 0x2f0) & 0xdf | param_2 << 5;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142d91d60 FUN_142d91d60 body=320 status=ok
// SIG undefined FUN_142d91d60(void)

void FUN_142d91d60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  if (plVar1 != param_2) {
    plVar3 = (longlong *)*plVar1;
    for (iVar6 = *(int *)(param_1 + 0x88); iVar6 != 0; iVar6 = iVar6 + -1) {
      TArray<FSaveGameUserSetting,FDefaultAllocator>::
      ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar3 + 6);
      TArray<FSaveGameUserSetting,FDefaultAllocator>::
      ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar3 + 4);
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 8;
    }
    iVar6 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 0x88) = iVar6;
    if ((iVar6 == 0) && (*(int *)(param_1 + 0x8c) == 0)) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    else {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
      lVar5 = *plVar1;
      if (iVar6 != 0) {
        puVar4 = (undefined4 *)(lVar2 + 0x38);
        do {
          FString::FString(lVar5,puVar4 + -0xe);
          FString::FString(lVar5 + 0x10,puVar4 + -10);
          *(undefined8 *)(lVar5 + 0x20) = 0;
          TArray<FSBZLootValueArray,TSizedDefaultAllocator<32>_>::
          CopyToEmpty<FSBZLootValueArray,int>
                    (lVar5 + 0x20,*(undefined8 *)(puVar4 + -6),puVar4[-4],0,0);
          *(undefined8 *)(lVar5 + 0x30) = 0;
          FUN_140d1bcc0(lVar5 + 0x30,*(undefined8 *)(puVar4 + -2),*puVar4,0,0);
          lVar5 = lVar5 + 0x40;
          puVar4 = puVar4 + 0x10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142d91ea0 FUN_142d91ea0 body=215 status=ok
// SIG undefined FUN_142d91ea0(void)

void FUN_142d91ea0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x458);
    if (lVar3 != 0) {
      plVar4 = (longlong *)FLinearColor::FLinearColor(local_18,param_3);
      local_28 = *plVar4;
      uStack_20 = (undefined4)plVar4[1];
      uStack_1c = *(undefined4 *)((longlong)plVar4 + 0xc);
      FUN_14260ee50(lVar3,param_2,&local_28);
    }
    plVar4 = (longlong *)(param_1 + 0x4e8);
    plVar5 = (longlong *)*plVar4;
    iVar2 = *(int *)(param_1 + 0x4f0);
    plVar1 = plVar5 + (longlong)iVar2 * 2;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 2) {
      if (*plVar5 == param_2) {
        *(undefined4 *)(plVar5 + 1) = *param_3;
        return;
      }
    }
    uStack_20 = *param_3;
    *(int *)(param_1 + 0x4f0) = iVar2 + 1;
    local_28 = param_2;
    if (*(int *)(param_1 + 0x4f4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4);
    }
    plVar4 = (longlong *)(*plVar4 + (longlong)iVar2 * 0x10);
    *plVar4 = local_28;
    plVar4[1] = CONCAT44(uStack_1c,uStack_20);
  }
  return;
}



// FUNCTION 142d91f80 FUN_142d91f80 body=171 status=ok
// SIG undefined FUN_142d91f80(void)

void FUN_142d91f80(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uStack_1c;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_14260f0c0();
    }
    plVar4 = (longlong *)(param_1 + 0x4c8);
    plVar3 = (longlong *)*plVar4;
    iVar2 = *(int *)(param_1 + 0x4d0);
    plVar1 = plVar3 + (longlong)iVar2 * 2;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 2) {
      if (*plVar3 == param_2) {
        *(undefined4 *)(plVar3 + 1) = param_3;
        return;
      }
    }
    *(int *)(param_1 + 0x4d0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x4d4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4);
    }
    plVar1 = (longlong *)(*plVar4 + (longlong)iVar2 * 0x10);
    *plVar1 = param_2;
    plVar1[1] = CONCAT44(uStack_1c,param_3);
  }
  return;
}



// FUNCTION 142d92030 FUN_142d92030 body=251 status=ok
// SIG undefined FUN_142d92030(void)

void FUN_142d92030(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x458) != 0) {
      local_28 = *param_3;
      lStack_20 = CONCAT44(lStack_20._4_4_,(int)param_3[1]);
      FUN_142610200(*(longlong *)(param_1 + 0x458),param_2,&local_28);
    }
    plVar6 = (longlong *)(param_1 + 0x4d8);
    plVar5 = (longlong *)*plVar6;
    iVar3 = *(int *)(param_1 + 0x4e0);
    lVar2 = (longlong)iVar3 * 0x18;
    plVar1 = plVar5 + (longlong)iVar3 * 3;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 3) {
      if (*plVar5 == param_2) {
        plVar5[1] = *param_3;
        *(int *)(plVar5 + 2) = (int)param_3[1];
        return;
      }
    }
    local_18 = (undefined4)param_3[1];
    lStack_20 = *param_3;
    *(int *)(param_1 + 0x4e0) = iVar3 + 1;
    local_28 = param_2;
    if (*(int *)(param_1 + 0x4e4) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar6,iVar3);
    }
    lVar4 = *plVar6;
    plVar1 = (longlong *)(lVar4 + lVar2);
    *plVar1 = local_28;
    plVar1[1] = lStack_20;
    *(ulonglong *)(lVar4 + 0x10 + lVar2) = CONCAT44(uStack_14,local_18);
  }
  return;
}



// FUNCTION 142d92130 FUN_142d92130 body=364 status=ok
// SIG undefined FUN_142d92130(void)

void FUN_142d92130(longlong param_1,longlong param_2,undefined1 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_78 [80];
  
  lVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar1,param_1 + 0x50,0x50);
  if (*(int *)(lVar1 + 0x40) != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(lVar1 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x14) = param_3;
  lVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_4);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar1,param_1 + 0xa0,0x50);
  if (*(int *)(lVar1 + 0x40) != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(lVar1 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      lVar1 = param_1 + 0xb0;
    }
    if (lVar1 != 0 || *(longlong *)(param_1 + 0xd0) != 0) goto LAB_142d92224;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
LAB_142d92224:
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_2 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_4 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d922a0 FUN_142d922a0 body=170 status=ok
// SIG undefined FUN_142d922a0(void)

void FUN_142d922a0(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x96) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = uVar1;
  *(undefined4 *)(param_1 + 0x97) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar3;
  param_1[0x98] = *(longlong *)(param_2 + 4);
  lVar8 = param_1[0x96];
  if ((char)param_1[0x98] != '\0') {
    lVar6 = FUN_1422312c0();
    if (lVar6 != 0) {
      lVar7 = FUN_142e4e4a0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar5 = FUN_142d6fcd0(lVar6), cVar5 == '\0')) goto LAB_142d92330;
    }
    lVar8 = param_1[0x97];
  }
LAB_142d92330:
                    /* WARNING: Could not recover jumptable at 0x000142d92343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6f8))(param_1,lVar8);
  return;
}



// FUNCTION 142d92350 FUN_142d92350 body=253 status=ok
// SIG undefined FUN_142d92350(void)

void FUN_142d92350(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x4f8) = *param_2;
  *(undefined8 *)(param_1 + 0x500) = param_2[1];
  if (puVar1 != param_2 + 2) {
    iVar2 = *(int *)(param_2 + 3);
    pvVar3 = (void *)param_2[2];
    *(int *)(param_1 + 0x510) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x514) == 0)) {
      *(undefined4 *)(param_1 + 0x514) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 4);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x518);
  if (puVar1 != param_2 + 4) {
    iVar2 = *(int *)(param_2 + 5);
    pvVar3 = (void *)param_2[4];
    *(int *)(param_1 + 0x520) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x524) == 0)) {
      *(undefined4 *)(param_1 + 0x524) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  *(undefined8 *)(param_1 + 0x528) = param_2[6];
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 7);
  FUN_142d7ca60(param_1);
  return;
}



// FUNCTION 142d92450 FUN_142d92450 body=11 status=ok
// SIG undefined FUN_142d92450(void)

void FUN_142d92450(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x59) = *param_2;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142d92460 FUN_142d92460 body=62 status=ok
// SIG undefined FUN_142d92460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d92460(undefined8 param_1,float param_2,float param_3)

{
  if ((param_3 <= 0.0) && (param_2 <= 0.0)) {
    DAT_146b33f28 = DAT_146b33f28 == '\0';
    return;
  }
  DAT_146b33f28 = 1;
  if (0.0 < param_3) {
    _DAT_1466ad5d4 = param_3;
  }
  if (0.0 < param_2) {
    _DAT_1466ad5d8 = param_2;
  }
  return;
}



// FUNCTION 142d924a0 FUN_142d924a0 body=190 status=ok
// SIG undefined FUN_142d924a0(void)

void FUN_142d924a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((cVar1 == '\0') && (iVar2 = FUN_14233f450(param_1), iVar2 == 3)) {
    if (*(longlong *)(param_1 + 0x2d8) != 0) {
      if ((*(byte *)(param_1 + 0x300) & 4) == 0) {
        FUN_142362d90(param_1);
        FUN_142362db0(param_1);
      }
      else {
        FUN_142367710();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x2d0);
    if (lVar4 != 0) {
      lVar3 = FUN_1428dfc70();
      while (lVar4 != lVar3) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      FUN_142366800(param_1);
      local_res10[0] = *(longlong *)(param_1 + 0x2d8);
      if (local_res10[0] != 0) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x308,local_res10);
      }
    }
  }
  return;
}



// FUNCTION 142d92560 FUN_142d92560 body=410 status=ok
// SIG undefined FUN_142d92560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d92560(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  if (param_3 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    FUN_1423111b0(local_78,param_3,param_4);
    local_c8 = CONCAT44(uStack_54,local_58);
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    local_c0 = uStack_50;
    FQuat::Rotator(&local_a8,&local_98);
    local_b8 = local_68;
    local_b0 = uStack_60;
    uStack_b4 = uStack_64;
    lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (((lVar3 != 0) && (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
      lVar4 = FUN_142e4e3f0();
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
        local_80 = local_c0;
        uStack_a0 = local_b0;
        local_d8 = param_6;
        local_e0 = param_5;
        local_e8 = &local_88;
        local_88 = local_c8;
        local_a8 = CONCAT44(uStack_b4,local_b8);
        local_c8 = local_98;
        local_c0 = local_90;
        FUN_142e4e970(lVar3,param_2,&local_a8,&local_c8);
      }
    }
  }
  return;
}



// FUNCTION 142d92700 FUN_142d92700 body=426 status=ok
// SIG undefined FUN_142d92700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d92700(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  if (param_3 != (longlong *)0x0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    (**(code **)(*param_3 + 0x420))(param_3,local_78,param_4,0);
    local_c8 = CONCAT44(uStack_54,local_58);
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    local_c0 = uStack_50;
    FQuat::Rotator(&local_a8,&local_98);
    local_b8 = local_68;
    local_b0 = uStack_60;
    uStack_b4 = uStack_64;
    lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (((lVar3 != 0) && (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
      lVar4 = FUN_142e4e3f0();
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
        local_80 = local_c0;
        uStack_a0 = local_b0;
        local_d8 = param_6;
        local_e0 = param_5;
        local_e8 = &local_88;
        local_88 = local_c8;
        local_a8 = CONCAT44(uStack_b4,local_b8);
        local_c8 = local_98;
        local_c0 = local_90;
        FUN_142e4e970(lVar3,param_2,&local_a8,&local_c8);
      }
    }
  }
  return;
}



// FUNCTION 142d928b0 FUN_142d928b0 body=286 status=ok
// SIG undefined FUN_142d928b0(void)

void FUN_142d928b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 != 0) {
    iVar2 = FUN_1428cf800(lVar3);
    if ((iVar2 != 3) && (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
      lVar4 = FUN_142e4e3f0();
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
        local_38 = *param_5;
        local_30 = *(undefined4 *)(param_5 + 1);
        local_20 = *(undefined4 *)(param_4 + 1);
        local_10 = *(undefined4 *)(param_3 + 1);
        local_28 = *param_4;
        local_18 = *param_3;
        FUN_142e4e970(lVar3,param_2,&local_18,&local_28,&local_38,param_6,param_7);
      }
    }
  }
  return;
}



// FUNCTION 142d929d0 FUN_142d929d0 body=126 status=ok
// SIG undefined FUN_142d929d0(void)

void FUN_142d929d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_5;
  local_30 = *(undefined4 *)(param_5 + 1);
  local_20 = *(undefined4 *)(param_4 + 1);
  local_10 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_4;
  local_18 = *param_3;
  FUN_14245fa90(local_18,param_2,&local_18,&local_28,&local_38,param_6,param_6,param_7);
  return;
}



// FUNCTION 142d92a50 FUN_142d92a50 body=103 status=ok
// SIG undefined FUN_142d92a50(void)

ulonglong FUN_142d92a50(longlong *param_1)

{
  ulonglong in_RAX;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)((longlong)param_1 + 0x44) == 0) {
    *(undefined8 *)((longlong)param_1 + 0x44) = 1;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    param_1[6] = 0;
    (**(code **)(*param_1 + 0x30))(param_1,&local_28);
    *(undefined4 *)((longlong)param_1 + 0x24) = local_20;
    *(undefined4 *)(param_1 + 3) = local_28;
    *(undefined4 *)(param_1 + 4) = local_1c;
    *(int *)((longlong)param_1 + 0x1c) = local_24;
    *(float *)((longlong)param_1 + 0x2c) = (float)local_24;
    return CONCAT71((uint7)(uint3)((uint)local_1c >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142d92ac0 FUN_142d92ac0 body=255 status=ok
// SIG undefined FUN_142d92ac0(void)

void FUN_142d92ac0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  longlong *local_20;
  
  if (param_3 != '\0') {
    lVar4 = param_2[1];
    uVar5 = *param_2;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x20);
    iVar7 = iVar3 + 1;
    *(int *)(param_1 + 0x20) = iVar7;
    if (*(int *)(param_1 + 0x24) < iVar7) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18);
    }
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x18));
    *puVar8 = uVar5;
    puVar8[1] = lVar4;
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x28) != &local_28) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_20);
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0x38,param_2,param_3);
  return;
}



// FUNCTION 142d92c10 FUN_142d92c10 body=2717 status=ok
// SIG undefined FUN_142d92c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d92c10(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  byte local_res8;
  byte local_res18;
  float local_res20;
  float local_118;
  float local_114;
  float local_110;
  longlong local_108;
  uint local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  longlong local_e8;
  float local_e0;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0xa8) == 0) && (*(int *)(param_1 + 0x138) == 0)) {
    return;
  }
  local_108 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x168);
  if (local_108 == 0) {
    return;
  }
  bVar11 = 0;
  fVar21 = 0.0;
  lVar6 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar6 = param_1 + 0x20;
  }
  fVar22 = 0.0;
  lVar10 = (longlong)*(int *)(param_1 + 0xa8) * 0x20 + lVar6;
  fVar29 = 0.0;
  local_110 = 0.0;
  local_114 = 0.0;
  fVar25 = 0.0;
  fStack_f0 = 0.0;
  fVar26 = 0.0;
  fVar27 = 0.0;
  local_res18 = 0;
  local_res8 = 0;
  if (lVar6 != lVar10) {
    pfVar4 = (float *)(lVar6 + 0x14);
    local_res8 = 0;
    do {
      fVar23 = pfVar4[1];
      fVar14 = param_2 + pfVar4[-3];
      pfVar4[-3] = fVar14;
      if (*(char *)(pfVar4 + 2) == '\0') {
        fVar19 = param_2;
        if (fVar23 <= fVar14) {
          fVar19 = param_2 - (fVar14 - fVar23);
        }
        fVar19 = fVar19 / fVar23;
        fVar29 = fVar29 + fVar19 * *pfVar4;
        fVar21 = fVar21 + fVar19 * pfVar4[-2];
        fVar22 = fVar22 + fVar19 * pfVar4[-1];
        fStack_f0 = fVar29;
      }
      else {
        fVar19 = param_2;
        if (fVar23 <= fVar14) {
          fVar19 = param_2 - (fVar14 - fVar23);
        }
        fVar19 = fVar19 / fVar23;
        fVar25 = fVar25 + fVar19 * pfVar4[-2];
        fVar26 = fVar26 + fVar19 * pfVar4[-1];
        fVar27 = fVar27 + fVar19 * *pfVar4;
      }
      bVar11 = bVar11 | *(byte *)((longlong)pfVar4 + 9);
      lVar6 = lVar6 + 0x20;
      local_res8 = local_res8 | *(byte *)((longlong)pfVar4 + 10);
      pfVar4 = pfVar4 + 8;
      local_res18 = bVar11;
      local_114 = fVar22;
      local_110 = fVar21;
    } while (lVar6 != lVar10);
  }
  local_res20 = 0.0;
  local_118 = 0.0;
  fVar21 = 0.0;
  lVar6 = *(longlong *)(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x130) == 0) {
    lVar6 = param_1 + 0xb0;
  }
  fVar22 = 0.0;
  lVar10 = (longlong)*(int *)(param_1 + 0x138) * 0x20 + lVar6;
  fVar23 = 0.0;
  fVar19 = 0.0;
  fVar28 = 0.0;
  fVar14 = 0.0;
  if (lVar6 != lVar10) {
    pfVar4 = (float *)(lVar6 + 0x14);
    do {
      fVar24 = pfVar4[1];
      fVar15 = param_2 + pfVar4[-3];
      pfVar4[-3] = fVar15;
      if (*(char *)(pfVar4 + 2) == '\0') {
        fVar20 = param_2;
        if (fVar24 <= fVar15) {
          fVar20 = param_2 - (fVar15 - fVar24);
        }
        fVar20 = fVar20 / fVar24;
        fVar21 = fVar21 + fVar20 * pfVar4[-2];
        fVar22 = fVar22 + fVar20 * pfVar4[-1];
        fVar23 = fVar23 + fVar20 * *pfVar4;
      }
      else {
        fVar20 = param_2;
        if (fVar24 <= fVar15) {
          fVar20 = param_2 - (fVar15 - fVar24);
        }
        fVar20 = fVar20 / fVar24;
        fVar19 = fVar19 + fVar20 * pfVar4[-2];
        fVar28 = fVar28 + fVar20 * pfVar4[-1];
        fVar14 = fVar14 + fVar20 * *pfVar4;
      }
      lVar6 = lVar6 + 0x20;
      pfVar4 = pfVar4 + 8;
      local_res20 = fVar22;
      local_118 = fVar23;
    } while (lVar6 != lVar10);
  }
  lVar6 = (longlong)*(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar12 = 0;
    lVar10 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar10 = param_1 + 0x20;
    }
    bVar13 = *(float *)(lVar10 + 8) <= *(float *)(lVar10 + 0x18) &&
             *(float *)(lVar10 + 0x18) != *(float *)(lVar10 + 8);
    lVar10 = 0;
    iVar9 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar8 = iVar9 + 1;
      if (lVar10 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0xa0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          lVar7 = param_1 + 0x20;
        }
        lVar5 = lVar10 * 0x20;
        do {
          fVar22 = *(float *)(lVar5 + 0x18 + lVar7);
          pfVar4 = (float *)(lVar5 + 8 + lVar7);
          if (bVar13 != (*pfVar4 <= fVar22 && fVar22 != *pfVar4)) break;
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 1;
          lVar5 = lVar5 + 0x20;
        } while (lVar10 < lVar6);
      }
      if (bVar13 != false) {
        if (iVar12 != iVar9) {
          lVar7 = *(longlong *)(param_1 + 0xa0);
          if (*(longlong *)(param_1 + 0xa0) == 0) {
            lVar7 = param_1 + 0x20;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar12 * 0x20 + lVar7),
                     (void *)((longlong)iVar9 * 0x20 + lVar7),(longlong)(iVar8 - iVar9) << 5);
        }
        iVar12 = iVar12 + (iVar8 - iVar9);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar9 = iVar8;
    } while (lVar10 < lVar6);
    *(int *)(param_1 + 0xa8) = iVar12;
  }
  lVar6 = (longlong)*(int *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar12 = 0;
    lVar10 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar10 = param_1 + 0xb0;
    }
    bVar13 = *(float *)(lVar10 + 8) <= *(float *)(lVar10 + 0x18) &&
             *(float *)(lVar10 + 0x18) != *(float *)(lVar10 + 8);
    lVar10 = 0;
    iVar9 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar8 = iVar9 + 1;
      if (lVar10 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0x130);
        if (*(longlong *)(param_1 + 0x130) == 0) {
          lVar7 = param_1 + 0xb0;
        }
        lVar5 = lVar10 * 0x20;
        do {
          fVar22 = *(float *)(lVar5 + 0x18 + lVar7);
          pfVar4 = (float *)(lVar5 + 8 + lVar7);
          if (bVar13 != (*pfVar4 <= fVar22 && fVar22 != *pfVar4)) break;
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 1;
          lVar5 = lVar5 + 0x20;
        } while (lVar10 < lVar6);
      }
      if (bVar13 != false) {
        if (iVar12 != iVar9) {
          lVar7 = *(longlong *)(param_1 + 0x130);
          if (*(longlong *)(param_1 + 0x130) == 0) {
            lVar7 = param_1 + 0xb0;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar12 * 0x20 + lVar7),
                     (void *)((longlong)iVar9 * 0x20 + lVar7),(longlong)(iVar8 - iVar9) << 5);
        }
        iVar12 = iVar12 + (iVar8 - iVar9);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar9 = iVar8;
    } while (lVar10 < lVar6);
    *(int *)(param_1 + 0x138) = iVar12;
  }
  if (((local_110 != 0.0) || (local_114 != 0.0)) || (fVar29 != 0.0)) {
    local_e8 = CONCAT44(local_114,local_110);
    local_e0 = fStack_f0;
    FUN_142221b50(*(undefined8 *)(param_1 + 8),&local_e8,0,0,0);
  }
  lVar6 = local_108;
  if (((fVar25 != 0.0) || (fVar26 != 0.0)) || (fVar27 != 0.0)) {
    *(float *)(local_108 + 0x1ec) = fVar25 + *(float *)(local_108 + 0x1ec);
    *(float *)(local_108 + 0x1f0) = fVar26 + *(float *)(local_108 + 0x1f0);
    *(float *)(local_108 + 500) = fVar27 + *(float *)(local_108 + 500);
  }
  iVar12 = (int)(fVar21 * 0.0027777778);
  fVar22 = (float)iVar12 * 360.0;
  if (ABS(fVar21) < ABS((float)iVar12 * 360.0)) {
    fVar22 = fVar21;
  }
  fVar22 = fVar21 - fVar22;
  if (fVar22 < 0.0) {
    fVar22 = fVar22 + 360.0;
  }
  if (fVar22 == 0.0) {
    iVar12 = (int)(local_res20 * 0.0027777778);
    fVar22 = (float)iVar12 * 360.0;
    if (ABS(local_res20) < ABS((float)iVar12 * 360.0)) {
      fVar22 = local_res20;
    }
    fVar22 = local_res20 - fVar22;
    if (fVar22 < 0.0) {
      fVar22 = fVar22 + 360.0;
    }
    if (fVar22 != 0.0) goto LAB_142d932b4;
    iVar12 = (int)(local_118 * 0.0027777778);
    fVar22 = (float)iVar12 * 360.0;
    if (ABS(local_118) < ABS((float)iVar12 * 360.0)) {
      fVar22 = local_118;
    }
    fVar22 = local_118 - fVar22;
    if (fVar22 < 0.0) {
      fVar22 = fVar22 + 360.0;
    }
    if (fVar22 != 0.0) goto LAB_142d932b4;
  }
  else {
LAB_142d932b4:
    lVar10 = *(longlong *)(param_1 + 8);
    lVar7 = *(longlong *)(lVar10 + 0x168);
    fVar22 = DAT_1468b5da8;
    uVar2 = DAT_1468b5da0;
    if (lVar7 != 0) {
      local_f8 = *(float *)(lVar7 + 0x210);
      fStack_f4 = *(float *)(lVar7 + 0x214);
      fStack_f0 = *(float *)(lVar7 + 0x218);
      fStack_ec = *(float *)(lVar7 + 0x21c);
      auVar17._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_f4);
      auVar17._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_f8);
      auVar17._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_f0);
      auVar17._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_ec);
      iVar12 = movmskps(iVar12,auVar17);
      if (iVar12 != 0) {
        *(float *)(lVar7 + 0x250) = local_f8;
        *(float *)(lVar7 + 0x254) = fStack_f4;
        *(float *)(lVar7 + 600) = fStack_f0;
        *(float *)(lVar7 + 0x25c) = fStack_ec;
        puVar3 = (undefined8 *)FQuat::Rotator(&local_f8,&local_e8);
        *(undefined8 *)(lVar7 + 0x260) = *puVar3;
        *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar3 + 1);
        lVar10 = *(longlong *)(param_1 + 8);
      }
      fVar22 = *(float *)(lVar7 + 0x268);
      uVar2 = *(undefined8 *)(lVar7 + 0x260);
    }
    fVar24 = fVar21 + (float)uVar2;
    fVar23 = local_res20 + (float)((ulonglong)uVar2 >> 0x20);
    fVar25 = (float)DAT_146b33f50;
    fVar26 = DAT_146b33f50._4_4_;
    fVar27 = DAT_146b33f50._8_4_;
    auVar16._4_4_ = fVar23;
    auVar16._0_4_ = fVar24;
    auVar16._8_4_ = local_118 + fVar22;
    auVar16._12_4_ = 0;
    auVar17 = divps(auVar16,_DAT_146b33f50);
    fVar24 = fVar24 - (float)(int)auVar17._0_4_ * fVar25;
    fVar23 = fVar23 - (float)(int)auVar17._4_4_ * fVar26;
    fVar15 = (local_118 + fVar22) - (float)(int)auVar17._8_4_ * fVar27;
    fVar22 = (float)(((uint)(fVar24 + fVar25) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                    (uint)(fVar24 + fVar25));
    fVar23 = (float)(((uint)(fVar23 + fVar26) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                    (uint)(fVar23 + fVar26));
    fVar24 = (float)(((uint)(fVar15 + fVar27) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar27));
    local_100 = ((uint)(fVar24 - fVar27) ^ (uint)fVar24) & -(uint)(fRam0000000146b33f48 < fVar24) ^
                (uint)fVar24;
    local_108 = CONCAT44(((uint)(fVar23 - fVar26) ^ (uint)fVar23) &
                         -(uint)(fRam0000000146b33f44 < fVar23) ^ (uint)fVar23,
                         ((uint)(fVar22 - fVar25) ^ (uint)fVar22) & -(uint)(_DAT_146b33f40 < fVar22)
                         ^ (uint)fVar22);
    local_e8 = local_108;
    local_e0 = (float)local_100;
    AActor::SetActorRotation(lVar10,&local_e8,0);
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x728))(plVar1,&local_108,1);
    }
  }
  fVar22 = (float)(int)(fVar19 * 0.0027777778) * 360.0;
  if (ABS(fVar19) < ABS(fVar22)) {
    fVar22 = fVar19;
  }
  fVar19 = fVar19 - fVar22;
  if (fVar19 < 0.0) {
    fVar19 = fVar19 + 360.0;
  }
  if (fVar19 == 0.0) {
    fVar22 = (float)(int)(fVar28 * 0.0027777778) * 360.0;
    if (ABS(fVar28) < ABS(fVar22)) {
      fVar22 = fVar28;
    }
    fVar28 = fVar28 - fVar22;
    if (fVar28 < 0.0) {
      fVar28 = fVar28 + 360.0;
    }
    if (fVar28 == 0.0) {
      fVar22 = (float)(int)(fVar14 * 0.0027777778) * 360.0;
      if (ABS(fVar14) < ABS(fVar22)) {
        fVar22 = fVar14;
      }
      fVar14 = fVar14 - fVar22;
      if (fVar14 < 0.0) {
        fVar14 = fVar14 + 360.0;
      }
      if (fVar14 == 0.0) goto LAB_142d935d0;
    }
  }
  local_res20 = local_res20 + *(float *)(lVar6 + 0x1fc);
  local_118 = local_118 + *(float *)(lVar6 + 0x200);
  fVar21 = fVar21 + *(float *)(lVar6 + 0x1f8);
  fVar22 = (float)DAT_146b33f50;
  fVar25 = DAT_146b33f50._4_4_;
  fVar26 = DAT_146b33f50._8_4_;
  auVar18._4_4_ = local_res20;
  auVar18._0_4_ = fVar21;
  auVar18._8_4_ = local_118;
  auVar18._12_4_ = 0;
  auVar17 = divps(auVar18,_DAT_146b33f50);
  fVar21 = fVar21 - (float)(int)auVar17._0_4_ * fVar22;
  local_res20 = local_res20 - (float)(int)auVar17._4_4_ * fVar25;
  local_118 = local_118 - (float)(int)auVar17._8_4_ * fVar26;
  fVar21 = (float)(((uint)(fVar21 + fVar22) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                  (uint)(fVar21 + fVar22));
  fVar27 = (float)(((uint)(local_res20 + fVar25) ^ (uint)local_res20) & -(uint)(0.0 <= local_res20)
                  ^ (uint)(local_res20 + fVar25));
  fStack_f0 = (float)(((uint)(local_118 + fVar26) ^ (uint)local_118) & -(uint)(0.0 <= local_118) ^
                     (uint)(local_118 + fVar26));
  fStack_f0 = (float)(((uint)(fStack_f0 - fVar26) ^ (uint)fStack_f0) &
                      -(uint)(fRam0000000146b33f48 < fStack_f0) ^ (uint)fStack_f0);
  local_e8 = CONCAT44(((uint)(fVar27 - fVar25) ^ (uint)fVar27) &
                      -(uint)(fRam0000000146b33f44 < fVar27) ^ (uint)fVar27,
                      ((uint)(fVar21 - fVar22) ^ (uint)fVar21) & -(uint)(_DAT_146b33f40 < fVar21) ^
                      (uint)fVar21);
  local_e0 = fStack_f0;
  FUN_142398470(lVar6,&local_e8,0,0,0);
LAB_142d935d0:
  if (*(int *)(param_1 + 0xa8) == 0) {
    if (local_res8 == 0) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(lVar6 + 0x18c) = _DAT_1468b5d90;
    fVar29 = DAT_1468b5d98;
  }
  else {
    if (*(int *)(param_1 + 0xa8) < 1) {
      return;
    }
    if (local_res18 == 0) {
      return;
    }
    if (param_2 <= 0.0) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x18);
    param_2 = 1.0 / param_2;
    fVar29 = param_2 * fVar29;
    *(ulonglong *)(lVar6 + 0x18c) = CONCAT44(local_114 * param_2,local_110 * param_2);
  }
  *(float *)(lVar6 + 0x194) = fVar29;
  return;
}



// FUNCTION 142d936c0 FUN_142d936c0 body=365 status=ok
// SIG undefined FUN_142d936c0(void)

undefined8 FUN_142d936c0(longlong *param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (((char)param_1[7] == '\0') && (*(int *)((longlong)param_1 + 0x44) != 0)) {
    param_2 = param_2 + *(float *)((longlong)param_1 + 0x34);
    *(float *)((longlong)param_1 + 0x34) = param_2;
    iVar2 = (int)param_1[9];
    if (iVar2 == 0) {
      fVar4 = (float)(int)param_1[3];
    }
    else {
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          iVar2 = *(int *)((longlong)param_1 + 0x3c) + 1;
          if (iVar2 < 0) {
            return 1;
          }
          *(int *)((longlong)param_1 + 0x3c) = iVar2;
          *(undefined4 *)(param_1 + 9) = 0;
          param_1[6] = 0;
          (**(code **)(*param_1 + 0x30))(param_1,&local_48);
          *(undefined4 *)((longlong)param_1 + 0x24) = local_40;
          *(undefined4 *)(param_1 + 3) = local_48;
          *(undefined4 *)(param_1 + 4) = local_3c;
          *(int *)((longlong)param_1 + 0x1c) = local_44;
          *(float *)((longlong)param_1 + 0x2c) = (float)local_44;
          return 1;
        }
        if (iVar2 != 3) {
          return 1;
        }
        if ((int)param_1[6] < (int)param_1[4]) {
          iVar2 = (int)param_1[6] + 1;
          fVar4 = *(float *)((longlong)param_1 + 0x24);
          *(undefined4 *)((longlong)param_1 + 0x34) = 0;
          *(int *)(param_1 + 6) = iVar2;
          if ((0.0 < fVar4) && (1 < iVar2)) {
            fVar3 = (float)FGenericPlatformMath::SRand();
            lVar1 = param_1[5];
            fVar4 = _guard_xfg_dispatch_icall_nop(fVar4,(float)iVar2);
            *(float *)((longlong)param_1 + 0x2c) =
                 (float)(int)(fVar4 * (float)*(int *)((longlong)param_1 + 0x1c) +
                             fVar3 * (float)(int)lVar1);
          }
          *(undefined4 *)(param_1 + 9) = 1;
          return 1;
        }
        (**(code **)(*param_1 + 0x58))(param_1);
        return 1;
      }
      fVar4 = *(float *)((longlong)param_1 + 0x2c);
    }
    if (fVar4 <= param_2) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  return 1;
}



// FUNCTION 142d93830 FUN_142d93830 body=375 status=ok
// SIG undefined FUN_142d93830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d93830(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  int iStack_20;
  
  plVar1 = (longlong *)(param_1 + -0x130);
  lVar9 = (**(code **)(*plVar1 + 0x148))(plVar1);
  if (lVar9 != 0) {
    FUN_1406aa060(plVar1);
    FUN_142d94cb0(plVar1,lVar9);
    iVar11 = *(int *)(param_1 + 0x60);
    if (0 < iVar11) {
      uVar12 = 0;
      local_38 = (undefined8 *)0x0;
      local_2c = 0;
      local_30 = iVar11;
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_38,0);
      puVar8 = local_38;
      uVar7 = uRam0000000146b33f9c;
      uVar6 = uRam0000000146b33f98;
      uVar5 = uRam0000000146b33f94;
      uVar4 = _DAT_146b33f90;
      uVar15 = uRam0000000146b33f8c;
      puVar14 = local_38;
      for (; uRam0000000146b33f8c = uVar15, iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined4 *)puVar14 = 0;
        *(undefined4 *)((longlong)puVar14 + 4) = 0;
        *(undefined4 *)(puVar14 + 1) = 0;
        *(uint *)((longlong)puVar14 + 0xc) = uVar15;
        puVar14[2] = 0;
        puVar14[3] = 0;
        uVar15 = uRam0000000146b33f84 & uVar5;
        uVar16 = uRam0000000146b33f88 & uVar6;
        uVar17 = uRam0000000146b33f8c & uVar7;
        *(uint *)(puVar14 + 4) = _DAT_146b33f80 & uVar4;
        *(uint *)((longlong)puVar14 + 0x24) = uVar15;
        *(uint *)(puVar14 + 5) = uVar16;
        *(uint *)((longlong)puVar14 + 0x2c) = uVar17;
        uVar15 = uRam0000000146b33f8c;
        puVar14 = puVar14 + 6;
      }
      uVar13 = uVar12;
      puVar14 = local_38;
      if (0 < *(int *)(param_1 + 0x60)) {
        do {
          puVar10 = (undefined8 *)
                    FRotator::Quaternion
                              ((longlong)(int)uVar13 * 0x5c + *(longlong *)(param_1 + 0x58) + 0x30,
                               &local_28);
          uVar12 = uVar12 + 0x5c;
          uVar15 = (int)uVar13 + 1;
          uVar3 = puVar10[1];
          *puVar14 = *puVar10;
          puVar14[1] = uVar3;
          lVar9 = *(longlong *)(param_1 + 0x58);
          auVar2._4_4_ = *(undefined4 *)(lVar9 + -0x34 + uVar12);
          auVar2._0_4_ = *(undefined4 *)(lVar9 + -0x38 + uVar12);
          auVar2._8_4_ = *(undefined4 *)(lVar9 + -0x30 + uVar12);
          auVar2._12_4_ = 0;
          *(undefined1 (*) [16])(puVar14 + 2) = auVar2;
          uVar13 = (ulonglong)uVar15;
          puVar14 = puVar14 + 6;
        } while ((int)uVar15 < *(int *)(param_1 + 0x60));
      }
      local_28 = puVar8;
      iStack_20 = local_30;
      (**(code **)(*plVar1 + 0x278))(plVar1,&local_28);
      if (puVar8 != (undefined8 *)0x0) {
        FMemory::Free(puVar8);
      }
    }
  }
  return;
}



// FUNCTION 142d939b0 FUN_142d939b0 body=870 status=ok
// SIG undefined FUN_142d939b0(void)

void FUN_142d939b0(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [24];
  float local_f0;
  byte local_e8 [12];
  undefined4 local_dc;
  float local_d8;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_7c [116];
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
    return;
  }
  plVar4 = (longlong *)FUN_142d805f0(param_1);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x830))(plVar4,&local_138,local_108);
  FRotator::Vector(local_108);
  local_120 = local_130 + local_140 * 50.0;
  fStack_124 = local_134 + local_144 * 50.0;
  local_128 = local_138 + local_148 * 50.0;
  local_110 = local_130 + local_140 * 1e+06;
  local_114 = local_134 + local_144 * 1e+06;
  local_118 = local_138 + local_148 * 1e+06;
  _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
  local_dc = 0x3f800000;
  UWorld::LineTraceSingleByChannel
            (lVar3,local_e8,&local_128,&local_118,2,&DAT_146aefe90,&DAT_146aefe68);
  if (((local_e8[0] & 1) == 0) || ((local_e8[0] & 2) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (plVar4 = (longlong *)FWeakObjectPtr::Get(local_7c), plVar4 != (longlong *)0x0)) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = plVar4[0x92];
      if (lVar3 != 0) {
        lVar5 = FUN_1429e18b0();
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_142d93c5a;
      }
      uVar6 = UScrollBox::GetPrivateStaticClass();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
      if (plVar4 != (longlong *)0x0) {
        uVar7 = (**(code **)(*plVar4 + 0x408))(plVar4);
        FUN_142d29b80(plVar4,uVar7,0);
      }
    }
  }
LAB_142d93c5a:
  if (((local_e8[0] & 1) == 0) || ((local_e8[0] & 2) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(ulonglong *)(param_1 + 0x6f4) = CONCAT44(fStack_124,local_128);
  *(undefined1 *)(param_1 + 0x6f0) = uVar2;
  *(float *)(param_1 + 0x6fc) = local_120;
  local_f0 = local_130 + local_140 * local_d8;
  *(ulonglong *)(param_1 + 0x700) =
       CONCAT44(local_134 + local_144 * local_d8,local_138 + local_148 * local_d8);
  *(float *)(param_1 + 0x708) = local_f0;
  *(undefined8 *)(param_1 + 0x70c) = local_bc;
  *(undefined4 *)(param_1 + 0x714) = local_b4;
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142d93d20 FUN_142d93d20 body=119 status=ok
// SIG undefined FUN_142d93d20(void)

void FUN_142d93d20(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar4 = *(undefined4 **)(param_1 + 0x38);
  puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0x40) * 2;
  for (; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    local_res8 = *puVar4;
    local_resc = puVar4[1];
    cVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(&local_res8);
      cVar2 = FUN_142aaac40(uVar3);
      if (cVar2 != '\0') {
        uVar3 = FWeakObjectPtr::Get(&local_res8);
        FUN_142aab520(uVar3);
      }
    }
  }
  return;
}



// FUNCTION 142d93da0 FUN_142d93da0 body=316 status=ok
// SIG undefined FUN_142d93da0(void)

void FUN_142d93da0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x28) + lVar10;
      plVar3 = (longlong *)FUN_142d806f0(param_1,param_2,lVar7);
      if (plVar3 != (longlong *)0x0) {
        lVar1 = *plVar3;
        lVar2 = plVar3[1];
        lVar7 = *(longlong *)(lVar7 + 0x110);
        for (lVar9 = lVar1; lVar9 != (longlong)(int)lVar2 * 0x10 + lVar1; lVar9 = lVar9 + 0x10) {
          if (((*(longlong *)(lVar9 + 8) == lVar7) && (param_2 != 0)) &&
             (lVar4 = FWeakObjectPtr::GetEvenIfUnreachable(lVar9), param_2 == lVar4)) {
            iVar8 = (int)(lVar9 - lVar1 >> 4);
            if (iVar8 != -1) {
              iVar6 = (int)plVar3[1];
              iVar5 = (iVar6 - iVar8) + -1;
              if (0 < iVar5) {
                iVar5 = 1;
              }
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar8 * 0x10 + *plVar3),
                           (void *)((longlong)(iVar6 - iVar5) * 0x10 + *plVar3),(longlong)iVar5 << 4
                          );
                iVar6 = (int)plVar3[1];
              }
              *(int *)(plVar3 + 1) = iVar6 + -1;
            }
            break;
          }
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar3);
      }
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 0x118;
    } while (iVar11 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142d93ee0 FUN_142d93ee0 body=430 status=ok
// SIG undefined FUN_142d93ee0(void)

void FUN_142d93ee0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8;
  undefined1 local_res9;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar11 = 0;
  uVar8 = uVar11;
  uVar12 = uVar11;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar12);
      uVar3 = param_2;
      if (1 < *(int *)(puVar9 + 1)) {
        if (*(int *)(puVar9 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar9;
        }
        uVar3 = FUN_141799410(0,param_2,puVar10,0);
      }
      local_38 = 0;
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      FUN_1424ab4b0(puVar9 + 2,&local_res8,&local_48,uVar3);
      plVar2 = local_48;
      local_res9 = 0;
      if (local_48 != (longlong *)0x0) {
        lVar4 = UObjectProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (plVar2[0xe] != 0)) {
          lVar5 = UObject::GetPrivateStaticClass();
          for (lVar4 = plVar2[0xe]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) {
              uVar6 = (**(code **)(*plVar2 + 0x378))(plVar2,uStack_40);
              if (uVar6 != 0) {
                lVar4 = UObject::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) goto LAB_142d9402e;
              }
              break;
            }
          }
        }
      }
      uVar6 = uVar11;
LAB_142d9402e:
      if (uVar6 == param_3) {
        lVar4 = FUN_142d806f0(param_1,param_2,puVar9);
        if (lVar4 == 0) {
          return;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4,param_2,puVar9[0x22]);
        return;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar12 = uVar12 + 0x118;
    } while ((int)uVar7 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142d94090 FUN_142d94090 body=73 status=ok
// SIG undefined FUN_142d94090(void)

void FUN_142d94090(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x278))(param_1,param_3);
    FUN_142d943d0(param_1,param_2,param_3,uVar1);
  }
  return;
}



// FUNCTION 142d940e0 FUN_142d940e0 body=72 status=ok
// SIG undefined FUN_142d940e0(void)

void FUN_142d940e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1406a6810();
  if (lVar1 != 0) {
    FUN_142d94f70(param_1,lVar1,0x7fffffff,0,1);
  }
  FUN_1406a94c0(param_1,param_2);
  return;
}



// FUNCTION 142d94130 FUN_142d94130 body=672 status=ok
// SIG undefined FUN_142d94130(void)

void FUN_142d94130(longlong param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
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
  
  local_98 = *param_2;
  uStack_94 = param_2[1];
  puStack_90 = *(uint **)(param_2 + 2);
  FUN_1406a96a0(local_98,&local_98);
  uStack_94 = 1;
  local_50 = (longlong *)(param_1 + 0x138);
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0x160);
  puVar1 = (uint *)(param_1 + 0x148);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar13 = *(uint **)(param_1 + 0x158);
    if (*(uint **)(param_1 + 0x158) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar3 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar4) goto LAB_142d9420c;
      uVar3 = puVar13[lVar9 + 1];
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
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142d9420c:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x160);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  uVar12 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  puStack_90 = puVar1;
  uStack_84 = uVar3;
  local_68 = puVar1;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  local_78 = local_50;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar13 = *(uint **)(param_1 + 0x158);
    if (*(uint **)(param_1 + 0x158) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar8 = puVar13[(int)uVar3 >> 5] & local_88;
    iVar6 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142d942d2;
      uVar8 = puVar13[(longlong)iVar6 + 1];
      local_88 = 0xffffffff;
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar12 - iVar6) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142d942d2:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  do {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       (local_78 == (longlong *)(param_1 + 0x138))) {
      return;
    }
    lVar9 = *(longlong *)(*local_78 + (longlong)(int)uStack_5c * 0x10);
    puVar5 = (undefined8 *)FUN_1406a6870(param_1,lVar9);
    if (*(int *)(puVar5 + 1) != 0) {
      iVar6 = 0;
      if (lVar9 != 0) {
        plVar7 = *(longlong **)(param_1 + 0x1a8);
        plVar10 = plVar7 + (longlong)*(int *)(param_1 + 0x1b0) * 4;
        for (; plVar7 != plVar10; plVar7 = plVar7 + 4) {
          if (*plVar7 == lVar9) {
            lVar9 = plVar7[3];
            if (lVar9 != 0) goto LAB_142d94361;
            break;
          }
        }
      }
      lVar9 = *(longlong *)(param_1 + 0x1c0);
LAB_142d94361:
      puVar11 = (undefined8 *)*puVar5;
      if (0 < *(int *)(puVar5 + 1)) {
        do {
          FUN_142d94f70(param_1,*puVar11,iVar6,lVar9,0);
          iVar6 = iVar6 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar6 < *(int *)(puVar5 + 1));
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 142d943d0 FUN_142d943d0 body=533 status=ok
// SIG undefined FUN_142d943d0(void)

void FUN_142d943d0(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((param_3 != 0) && (param_2 != (longlong *)0x0)) {
    if (((*(uint *)((longlong)param_2 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar6 = (**(code **)(*param_2 + 0x768))(param_2), cVar6 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar8 = (longlong *)FUN_142dcf3a0(param_2,local_38);
      lVar10 = *plVar8;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_30 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (lVar10 != 0) {
        iVar7 = (**(code **)(*param_1 + 0x278))(param_1,param_3);
        plVar8 = (longlong *)UOnlineEngineInterface::Get();
        if (plVar8 != (longlong *)0x0) {
          puVar9 = (undefined8 *)FUN_142dcf3a0(param_2,local_28);
          local_48 = *puVar9;
          local_40 = (longlong *)puVar9[1];
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar8 + 0x408))(plVar8,&local_48,param_3,param_4,iVar7);
          plVar8 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_40 + 1;
            lVar10 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_20 + 1;
            lVar10 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar1 = (int *)((longlong)local_20 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_20 + 8))(local_20,1);
              }
            }
          }
        }
        if ((iVar7 <= param_4) &&
           (plVar8 = (longlong *)FUN_1422312c0(param_2), plVar8 != (longlong *)0x0)) {
          lVar10 = FUN_142e4e4a0();
          if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
              != lVar10 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            (**(code **)(*plVar8 + 0x3b8))(plVar8,param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d945f0 FUN_142d945f0 body=1714 status=ok
// SIG undefined FUN_142d945f0(void)

void FUN_142d945f0(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_138;
  float fStack_134;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  bVar11 = true;
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
  if ((plVar7 != (longlong *)0x0) && (lVar8 = FWeakObjectPtr::Get(param_1 + 0x10), lVar8 != 0)) {
    if (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x28)) {
      fVar1 = *(float *)(param_2 + 0x74);
      fVar12 = *(float *)(param_1 + 0x2c) + fVar1;
      bVar11 = *(float *)(param_1 + 0x28) <= fVar12;
      *(float *)(param_1 + 0x2c) = fVar12;
      lVar8 = *(longlong *)(lVar8 + 0x168);
      local_f8 = plVar7[0x44];
      lStack_f0 = plVar7[0x45];
      if (lVar8 == 0) {
        local_110 = DAT_1468b5d98;
        pfVar9 = (float *)&local_118;
        local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        pfVar9 = &local_138;
        local_138 = *(float *)(lVar8 + 0x220);
        local_130 = *(float *)(lVar8 + 0x228);
        fStack_134 = *(float *)(lVar8 + 0x224);
      }
      local_128 = *(undefined8 *)pfVar9;
      local_120 = pfVar9[2];
      fVar12 = local_120 + *(float *)(param_1 + 0x18);
      (**(code **)(*plVar7 + 0x458))(plVar7,&local_138);
      if (((0.0001 < ABS(local_138)) || (0.0001 < ABS(fStack_134))) || (0.0001 < ABS(local_130))) {
        fVar17 = fStack_134 * fStack_134 + local_138 * local_138 + local_130 * local_130;
        if (fVar17 < 2500.0) {
          fVar18 = local_130;
          fVar14 = fStack_134;
          fVar13 = local_138;
          if ((fVar17 != 1.0) &&
             (fVar18 = DAT_1468b5d98, fVar14 = DAT_1468b5d94, fVar13 = DAT_1468b5d90,
             1e-08 <= fVar17)) {
            auVar16 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
            fVar18 = auVar16._0_4_;
            fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
            fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
            fVar13 = local_138 * fVar18;
            fVar14 = fStack_134 * fVar18;
            fVar18 = local_130 * fVar18;
          }
          local_138 = fVar13 * 50.0;
          fStack_134 = fVar14 * 50.0;
          local_130 = fVar18 * 50.0;
        }
      }
      else {
        pfVar9 = (float *)UKismetMathLibrary::RandomUnitVector(&local_108);
        local_138 = *pfVar9 * 50.0;
        fStack_134 = pfVar9[1] * 50.0;
        local_130 = pfVar9[2] * 50.0;
      }
      local_128._0_4_ = (float)local_128 - (float)local_f8;
      local_128._4_4_ = local_128._4_4_ - local_f8._4_4_;
      fVar12 = fVar12 - (float)lStack_f0;
      fVar13 = SQRT(local_128._4_4_ * local_128._4_4_ + (float)local_128 * (float)local_128 +
                    fVar12 * fVar12);
      fVar17 = DAT_1468b5d98;
      fVar18 = DAT_1468b5d90;
      fVar14 = DAT_1468b5d94;
      if (1e-08 < fVar13) {
        fVar14 = 1.0 / fVar13;
        fVar17 = fVar14 * fVar12;
        fVar18 = fVar14 * (float)local_128;
        fVar14 = fVar14 * local_128._4_4_;
      }
      fVar15 = SQRT(fStack_134 * fStack_134 + local_138 * local_138 + local_130 * local_130);
      fVar19 = DAT_1468b5d90;
      fVar20 = DAT_1468b5d94;
      local_120 = DAT_1468b5d98;
      if (1e-08 < fVar15) {
        local_120 = 1.0 / fVar15;
        fVar19 = local_138 * local_120;
        fVar20 = fStack_134 * local_120;
        local_120 = local_130 * local_120;
      }
      local_128 = CONCAT44(fVar20,fVar19);
      if ((*(float *)(param_1 + 0x1c) <= fVar13 && fVar13 != *(float *)(param_1 + 0x1c)) ||
         (50.0 < ABS(fVar12))) {
        fVar12 = ((0.5 - (fVar19 * fVar18 + fVar20 * fVar14 + local_120 * fVar17) * 0.5) * fVar15 +
                 fVar15) / *(float *)(param_1 + 0x20);
        fVar18 = fVar18 * fVar12;
        fVar14 = fVar14 * fVar12;
        fVar17 = fVar17 * fVar12;
      }
      else {
        fVar17 = (50.0 - fVar15) / *(float *)(param_1 + 0x20);
        if (fVar15 <= 0.0) {
          pfVar9 = (float *)UKismetMathLibrary::RandomUnitVector(&local_108);
        }
        else {
          local_100 = local_120;
          pfVar9 = (float *)&local_108;
          local_108 = local_128;
        }
        fVar18 = fVar17 * *pfVar9;
        fVar14 = fVar17 * pfVar9[1];
        fVar17 = fVar17 * pfVar9[2];
      }
      fVar12 = *(float *)(param_1 + 0x24);
      fVar18 = fVar18 * fVar1 + local_138;
      fVar14 = fVar14 * fVar1 + fStack_134;
      local_100 = fVar17 * fVar1 + local_130;
      fVar17 = SQRT(fVar14 * fVar14 + fVar18 * fVar18 + local_100 * local_100);
      if (fVar12 < fVar17) {
        fVar17 = 1.0 / fVar17;
        local_100 = local_100 * fVar17 * fVar12;
        fVar18 = fVar18 * fVar17 * fVar12;
        fVar14 = fVar14 * fVar17 * fVar12;
      }
      local_110 = local_100 * fVar1;
      local_e8 = (undefined4)plVar7[0x42];
      uStack_e4 = *(undefined4 *)((longlong)plVar7 + 0x214);
      uStack_e0 = (undefined4)plVar7[0x43];
      uStack_dc = *(undefined4 *)((longlong)plVar7 + 0x21c);
      local_118 = CONCAT44(fVar14 * fVar1,fVar18 * fVar1);
      (**(code **)(*plVar7 + 0x490))(plVar7,&local_118,&local_e8,0,0,0,0);
      plVar7[0x48] = CONCAT44(fVar14,fVar18);
      *(float *)(plVar7 + 0x49) = local_100;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(bool *)(param_2 + 0x70) = bVar11;
  if (bVar11 != false) {
    iVar5 = *(int *)(param_2 + 0x68);
    lVar8 = (longlong)iVar5;
    *(int *)(param_2 + 0x68) = iVar5 + 1;
    if (*(int *)(param_2 + 0x6c) < iVar5 + 1) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2,iVar5);
    }
    lVar10 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar10 = param_2;
    }
    *(undefined8 *)(lVar10 + lVar8 * 0x18) = uVar6;
    *(undefined4 *)(lVar10 + 8 + lVar8 * 0x18) = uVar2;
    *(undefined4 *)(lVar10 + 0xc + lVar8 * 0x18) = uVar3;
    *(undefined4 *)(lVar10 + 0x10 + lVar8 * 0x18) = uVar4;
  }
  return;
}



// FUNCTION 142d94cb0 FUN_142d94cb0 body=690 status=ok
// SIG undefined FUN_142d94cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d94cb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  longlong local_80;
  int local_78;
  
  plVar1 = (longlong *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 400) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x194)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar1,0);
  }
  UWorld::GetPlayerControllerIterator(param_2,&local_80);
  while( true ) {
    if ((local_78 < 0) || (*(int *)(local_80 + 8) <= local_78)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    plVar5 = (longlong *)FWeakObjectPtr::Get();
    if (plVar5 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar5 + 0x688))();
      if (plVar6 != (longlong *)0x0) {
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x758))(plVar5);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = plVar6;
        }
        iVar2 = *(int *)(param_1 + 400);
        *(int *)(param_1 + 400) = iVar2 + 1;
        if (*(int *)(param_1 + 0x194) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar1,iVar2);
        }
        puVar10 = (undefined8 *)((longlong)iVar2 * 0x5c + *plVar1);
        uVar4 = (**(code **)(*plVar5 + 0x768))(plVar5);
        *(undefined1 *)(puVar10 + 0xb) = uVar4;
        (**(code **)(*plVar7 + 0x648))(plVar7,(longlong)puVar10 + 0x24,puVar10 + 6);
        puVar8 = (undefined8 *)FRotator::Vector(puVar10 + 6,local_98);
        *(undefined8 *)((longlong)puVar10 + 0x3c) = *puVar8;
        *(undefined4 *)((longlong)puVar10 + 0x44) = *(undefined4 *)(puVar8 + 1);
        (**(code **)(*plVar7 + 0x610))(plVar7,puVar10,(longlong)puVar10 + 0xc);
        puVar8 = (undefined8 *)FRotator::Vector((longlong)puVar10 + 0xc,local_8c);
        puVar10[3] = *puVar8;
        *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar8 + 1);
        lVar9 = APostProcessVolume::GetPrivateStaticClass();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          *puVar10 = *(undefined8 *)((longlong)puVar10 + 0x24);
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)((longlong)puVar10 + 0x2c);
        }
        if ((longlong *)plVar5[0xa5] == (longlong *)0x0) {
          fVar11 = 0.7853982;
        }
        else {
          fVar11 = (float)(**(code **)(*(longlong *)plVar5[0xa5] + 0x778))();
          fVar11 = fVar11 * 0.5 * 0.017453292;
        }
        uVar12 = __libm_sse2_sincosf_(fVar11);
        *(int *)((longlong)puVar10 + 0x4c) = (int)uVar12;
        *(int *)(puVar10 + 9) = (int)((ulonglong)uVar12 >> 0x20);
        fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
        *(float *)((longlong)puVar10 + 0x54) = 1.0 / fVar11;
        fVar11 = *(float *)(plVar5 + 0xab);
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
        *(float *)(puVar10 + 10) = (fVar11 - 1.0) * _DAT_1466ad5d0 + 1.0;
      }
    }
    local_78 = local_78 + 1;
  }
  return;
}



// FUNCTION 142d94f70 FUN_142d94f70 body=284 status=ok
// SIG undefined FUN_142d94f70(void)

void FUN_142d94f70(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int local_res10 [2];
  int local_18 [2];
  undefined8 local_10;
  
  cVar2 = param_5;
  iVar1 = *(int *)(param_2 + 0x1e);
  if (param_5 == '\0') {
    if (0.0 < *(float *)(param_2 + 2)) {
      iVar3 = FUN_1415a9e50(param_4,param_2,1);
      iVar3 = 4 - iVar3;
      if (iVar3 < 1) {
        local_res10[0] = 1;
      }
      else {
        local_res10[0] = 4;
        if (iVar3 < 4) {
          local_res10[0] = iVar3;
        }
      }
    }
    else {
      local_res10[0] = 1;
    }
  }
  else {
    local_res10[0] = 1;
  }
  *(int *)(param_2 + 0x1e) = local_res10[0];
  if (*(int *)(param_2 + 0x28) != 0) {
    plVar6 = (longlong *)param_2[0x26];
    puVar5 = (undefined8 *)0x0;
    puVar4 = puVar5;
    if (plVar6 == (longlong *)0x0) {
      puVar4 = param_2 + 0x22;
    }
    if ((puVar4 != (undefined8 *)0x0 || plVar6 != (longlong *)0x0) && (local_res10[0] != iVar1)) {
      local_10 = *param_2;
      param_5 = cVar2;
      local_18[0] = iVar1;
      if (*(int *)(param_2 + 0x28) != 0) {
        if (plVar6 == (longlong *)0x0) {
          plVar6 = param_2 + 0x22;
        }
        if (plVar6 != (longlong *)0x0) {
          puVar5 = (undefined8 *)(**(code **)(*plVar6 + 8))();
        }
      }
      (*(code *)param_2[0x20])(puVar5,&local_10,local_18,local_res10,&param_5);
    }
  }
  return;
}



// FUNCTION 142d95090 FUN_142d95090 body=1634 status=ok
// SIG undefined FUN_142d95090(void)

void FUN_142d95090(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  byte bVar22;
  byte bVar23;
  undefined8 *puVar24;
  longlong local_58;
  int local_50;
  
  bVar22 = ~(byte)(*(uint *)(param_1 + 8) >> 4);
  bVar7 = false;
  bVar23 = bVar22 & 1;
  bVar22 = bVar22 & 1;
  if (bVar23 == 0) {
    lVar19 = *(longlong *)(param_1 + 0x38);
  }
  else {
    plVar16 = *(longlong **)(param_1 + 0x10);
    lVar19 = plVar16[0x1f];
    if (lVar19 == 0) {
      (**(code **)(*plVar16 + 0x368))(plVar16);
      lVar19 = plVar16[0x1f];
    }
    if (*(longlong *)(lVar19 + 0x30) != 0) {
      lVar9 = UWidget::GetPrivateStaticClass();
      for (lVar14 = *(longlong *)(lVar19 + 0x30); lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)
          ) {
        if (lVar14 == lVar9) {
          if (*(longlong *)(lVar19 + 0x30) != 0) {
            plVar16 = *(longlong **)(param_1 + 0x10);
            lVar19 = plVar16[0x1f];
            if (lVar19 == 0) {
              (**(code **)(*plVar16 + 0x368))(plVar16);
              lVar19 = plVar16[0x1f];
            }
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar19 + 0x30);
          }
          break;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar9 = UWidget::GetPrivateStaticClass();
      lVar19 = *(longlong *)(param_1 + 0x30);
      for (lVar14 = lVar19; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
        if (lVar14 == lVar9) {
          if (lVar19 != 0) {
            if (lVar19 == 0) goto LAB_142d9519e;
            plVar10 = (longlong *)UWidget::GetPrivateStaticClass();
            plVar16 = *(longlong **)(param_1 + 0x30);
            plVar2 = plVar16;
            goto joined_r0x000142d95188;
          }
          break;
        }
      }
    }
    lVar19 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  goto LAB_142d951cd;
joined_r0x000142d95188:
  if (plVar2 == (longlong *)0x0) goto LAB_142d9519e;
  if (plVar2 == plVar10) goto LAB_142d951a0;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000142d95188;
LAB_142d9519e:
  plVar16 = (longlong *)0x0;
LAB_142d951a0:
  lVar19 = plVar16[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar16 + 0x368))(plVar16);
    lVar19 = plVar16[0x1f];
  }
  lVar19 = *(longlong *)(lVar19 + 0x30);
  *(longlong *)(param_1 + 0x38) = lVar19;
LAB_142d951cd:
  if (lVar19 == 0) {
    if (*(int *)(param_1 + 0x50) < 1) {
      return;
    }
    if ((bVar23 != 0) && (iVar17 = *(int *)(param_1 + 0x50), iVar17 != 0)) {
      iVar18 = *(int *)(param_1 + 0x60);
      if (*(int *)(param_1 + 100) < iVar17 + iVar18) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x58);
        iVar18 = *(int *)(param_1 + 0x60);
      }
      puVar20 = *(undefined8 **)(param_1 + 0x48);
      puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar18 * 0x28);
      puVar12 = (undefined4 *)((longlong)puVar24 + 0x24);
      iVar18 = iVar17;
      do {
        *puVar24 = *puVar20;
        *(undefined1 *)(puVar12 + -7) = *(undefined1 *)(puVar20 + 1);
        *(undefined1 *)((longlong)puVar12 + -0x1b) = *(undefined1 *)((longlong)puVar20 + 9);
        *(undefined1 *)((longlong)puVar12 + -0x1a) = *(undefined1 *)((longlong)puVar20 + 10);
        *(undefined8 *)(puVar12 + -6) = *(undefined8 *)((longlong)puVar20 + 0xc);
        *(undefined1 *)(puVar12 + -4) = *(undefined1 *)((longlong)puVar20 + 0x14);
        *(undefined8 *)(puVar12 + -3) = 0;
        iVar13 = *(int *)(puVar20 + 4);
        pvVar3 = (void *)puVar20[3];
        puVar12[-1] = iVar13;
        if (iVar13 == 0) {
          *puVar12 = 0;
        }
        else {
          TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(puVar12 + -3,iVar13,0);
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar12 + -3),pvVar3,(longlong)iVar13 << 6);
        }
        puVar24 = puVar24 + 5;
        puVar12 = puVar12 + 10;
        puVar20 = puVar20 + 5;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar17;
    }
    TArray<`anonymous_namespace'::FGuidCustomVersion_DEPRECATED,FDefaultAllocator>::Empty
              (param_1 + 0x48,0);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x50);
    lVar19 = *(longlong *)(param_1 + 0x48);
    local_58 = 0;
    local_50 = iVar17;
    if (iVar17 != 0) {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(&local_58,iVar17,0);
      lVar19 = lVar19 - local_58;
      puVar12 = (undefined4 *)(local_58 + 0x24);
      do {
        *(undefined8 *)(puVar12 + -9) = *(undefined8 *)(lVar19 + -0x24 + (longlong)puVar12);
        *(undefined1 *)(puVar12 + -7) = *(undefined1 *)(lVar19 + -0x1c + (longlong)puVar12);
        *(undefined1 *)((longlong)puVar12 + -0x1b) =
             *(undefined1 *)(lVar19 + -0x1b + (longlong)puVar12);
        *(undefined1 *)((longlong)puVar12 + -0x1a) =
             *(undefined1 *)(lVar19 + -0x1a + (longlong)puVar12);
        *(undefined8 *)(puVar12 + -6) = *(undefined8 *)(lVar19 + -0x18 + (longlong)puVar12);
        *(undefined1 *)(puVar12 + -4) = *(undefined1 *)(lVar19 + -0x10 + (longlong)puVar12);
        *(undefined8 *)(puVar12 + -3) = 0;
        iVar18 = *(int *)((longlong)puVar12 + lVar19 + -4);
        pvVar3 = *(void **)(lVar19 + -0xc + (longlong)puVar12);
        puVar12[-1] = iVar18;
        if (iVar18 == 0) {
          *puVar12 = 0;
        }
        else {
          TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(puVar12 + -3,iVar18,0);
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar12 + -3),pvVar3,(longlong)iVar18 << 6);
        }
        puVar12 = puVar12 + 10;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    iVar18 = local_50;
    lVar19 = local_58;
    plVar16 = (longlong *)(param_1 + 0x48);
    TArray<`anonymous_namespace'::FGuidCustomVersion_DEPRECATED,FDefaultAllocator>::Empty(plVar16,0)
    ;
    iVar17 = *(int *)(param_1 + 0x50);
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x48) + -1;
    bVar23 = (byte)iVar13;
    if (0xfe < iVar13) {
      bVar23 = 0xff;
    }
    iVar13 = (uint)bVar23 + iVar17;
    *(int *)(param_1 + 0x50) = iVar13;
    if (*(int *)(param_1 + 0x54) < iVar13) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar16);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar16 + (longlong)iVar17 * 0x28),0,(ulonglong)bVar23 * 0x28);
    uVar21 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      do {
        bVar23 = (char)uVar21 + 1;
        *(undefined8 *)(uVar21 * 0x28 + *plVar16) = *(undefined8 *)(param_1 + 0x38);
        *(undefined1 *)(uVar21 * 0x28 + 8 + *plVar16) =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x40) + 8 + uVar21 * 0x10);
        uVar21 = (ulonglong)bVar23;
      } while ((int)(uint)bVar23 < *(int *)(param_1 + 0x50));
    }
    uVar21 = 0;
    if (0 < iVar18) {
      uVar8 = 0;
      do {
        uVar15 = 0;
        lVar14 = 0;
        iVar17 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x48);
        if (0 < iVar17) {
          lVar9 = lVar19 + uVar21 * 0x28;
          puVar11 = (ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x40) + 8);
          do {
            if (*puVar11 == (ulonglong)*(byte *)(lVar9 + 8)) {
              if ((-1 < lVar14) && ((int)uVar15 < *(int *)(param_1 + 0x50))) {
                if (bVar22 != 0) {
                  lVar14 = lVar14 * 0x28;
                  pbVar1 = (byte *)(*plVar16 + 0x14 + lVar14);
                  *pbVar1 = *pbVar1 | *(byte *)(lVar9 + 0x14);
                  if ((*(char *)(lVar9 + 9) != '\0') && (*(char *)(*plVar16 + 9 + lVar14) == '\0'))
                  {
                    *(undefined1 *)(*plVar16 + 9 + lVar14) = 1;
                    *(undefined1 *)(*plVar16 + 10 + lVar14) = *(undefined1 *)(lVar9 + 10);
                    *(undefined8 *)(*plVar16 + 0xc + lVar14) = *(undefined8 *)(lVar9 + 0xc);
                  }
                  iVar17 = *(int *)(lVar9 + 0x20);
                  lVar14 = *plVar16 + lVar14;
                  lVar19 = local_58;
                  if (iVar17 != 0) {
                    iVar13 = *(int *)(lVar14 + 0x20);
                    if (*(int *)(lVar14 + 0x24) < iVar13 + iVar17) {
                      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(lVar14 + 0x18);
                      iVar13 = *(int *)(lVar14 + 0x20);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar13 * 0x40 + *(longlong *)(lVar14 + 0x18)),
                               *(void **)(lVar9 + 0x18),(longlong)iVar17 << 6);
                    *(int *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) + iVar17;
                    lVar19 = local_58;
                  }
                }
                if (uVar15 != uVar8) {
                  bVar7 = true;
                }
                goto LAB_142d9548b;
              }
              break;
            }
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 1;
            puVar11 = puVar11 + 2;
          } while (lVar14 < iVar17);
        }
        if ((bVar22 != 0) && (*(int *)(lVar19 + 0x20 + uVar21 * 0x28) != 0)) {
          iVar17 = *(int *)(param_1 + 0x60);
          *(int *)(param_1 + 0x60) = iVar17 + 1;
          if (*(int *)(param_1 + 100) < iVar17 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar17);
          }
          FUN_140e9a010(*(longlong *)(param_1 + 0x58) + (longlong)iVar17 * 0x28);
          bVar7 = true;
        }
LAB_142d9548b:
        bVar23 = (char)uVar21 + 1;
        uVar21 = (ulonglong)bVar23;
        uVar8 = (uint)bVar23;
      } while ((int)uVar8 < iVar18);
    }
    if (iVar18 != 0) {
      plVar16 = (longlong *)(lVar19 + 0x18);
      do {
        if (*plVar16 != 0) {
          FMemory::Free();
        }
        plVar16 = plVar16 + 5;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    if (lVar19 != 0) {
      FMemory::Free(lVar19);
    }
    if (!bVar7) {
      return;
    }
  }
  if (bVar22 != 0) {
    puVar12 = (undefined4 *)FGuid::NewGuid(&local_58);
    uVar4 = puVar12[1];
    uVar5 = puVar12[2];
    uVar6 = puVar12[3];
    *(undefined4 *)(param_1 + 0x68) = *puVar12;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    *(undefined4 *)(param_1 + 0x74) = uVar6;
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  return;
}



// FUNCTION 142d95700 FUN_142d95700 body=406 status=ok
// SIG undefined FUN_142d95700(void)

void FUN_142d95700(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = *(int *)(param_1 + 0xe8) + -1;
  if (-1 < iVar5) {
    lVar6 = (longlong)iVar5 * 8;
    lVar8 = (longlong)*(int *)(param_1 + 0xe8) << 3;
    lVar7 = lVar6;
    do {
      lVar1 = *(longlong *)(param_1 + 0xe0);
      lVar2 = *(longlong *)(lVar7 + lVar1);
      if ((((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 4 & 1) != 0)) ||
          (*(longlong *)(lVar2 + 0x10) != *(longlong *)(param_1 + 0x10))) ||
         (*(byte *)(param_1 + 0x38) < *(byte *)(lVar2 + 0x38))) {
        iVar4 = *(int *)(param_1 + 0xe8);
        iVar3 = (iVar4 - iVar5) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar6 + lVar1),(void *)(lVar8 + lVar1),(longlong)iVar3 << 3);
          iVar4 = *(int *)(param_1 + 0xe8);
        }
        *(int *)(param_1 + 0xe8) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xe0);
      }
      lVar8 = lVar8 + -8;
      lVar6 = lVar6 + -8;
      lVar7 = lVar7 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = *(int *)(param_1 + 0xf8) + -1;
  if (-1 < iVar5) {
    lVar6 = (longlong)iVar5 * 8;
    lVar8 = (longlong)*(int *)(param_1 + 0xf8) << 3;
    lVar7 = lVar6;
    do {
      lVar1 = *(longlong *)(param_1 + 0xf0);
      lVar2 = *(longlong *)(lVar7 + lVar1);
      if (((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 4 & 1) != 0)) ||
         ((*(longlong *)(lVar2 + 0x10) != *(longlong *)(param_1 + 0x10) ||
          (*(byte *)(param_1 + 0x38) < *(byte *)(lVar2 + 0x38))))) {
        iVar4 = *(int *)(param_1 + 0xf8);
        iVar3 = (iVar4 - iVar5) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar6 + lVar1),(void *)(lVar8 + lVar1),(longlong)iVar3 << 3);
          iVar4 = *(int *)(param_1 + 0xf8);
        }
        *(int *)(param_1 + 0xf8) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xf0);
      }
      lVar8 = lVar8 + -8;
      lVar6 = lVar6 + -8;
      lVar7 = lVar7 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}



// FUNCTION 142d958a0 FUN_142d958a0 body=278 status=ok
// SIG undefined FUN_142d958a0(void)

undefined8 FUN_142d958a0(longlong param_1,float *param_2,undefined4 param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined8 local_38;
  float local_30;
  
  if (*(char *)(param_1 + 0x70c) != '\0') {
    fVar3 = *(float *)(param_1 + 0x228);
    fVar6 = *param_2 - *(float *)(param_1 + 0x220);
    fVar2 = param_2[2];
    fVar7 = param_2[1] - *(float *)(param_1 + 0x224);
    if (((fVar7 * fVar7 + fVar6 * fVar6 + (fVar2 - fVar3) * (fVar2 - fVar3) <=
          *(float *)(param_1 + 0x704) * *(float *)(param_1 + 0x704)) &&
        (fVar3 - *(float *)(param_1 + 0x708) <= fVar2)) &&
       (fVar2 <= *(float *)(param_1 + 0x708) + fVar3)) {
      return 1;
    }
  }
  if (*(char *)(param_1 + 0x700) != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x6f0);
    plVar1 = plVar5 + *(int *)(param_1 + 0x6f8);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 != 0) {
        local_38 = *(undefined8 *)param_2;
        local_30 = param_2[2];
        cVar4 = FUN_1428ca150(*plVar5,&local_38,param_3,0);
        if (cVar4 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142d959c0 FUN_142d959c0 body=406 status=ok
// SIG undefined FUN_142d959c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d959c0(longlong param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  char local_38;
  ulonglong local_30;
  
  puVar2 = PTR_DAT_1466ad5e0;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar4 = (undefined *)0x0;
  iVar5 = 0;
  if (param_4 == 0) {
    if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
      iVar3 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
      puVar4 = puVar2 + (longlong)iVar3 * 2;
    }
    local_68 = puVar2;
    local_60 = puVar4;
    FUN_142d95e90(param_2,&local_58,&local_68);
    if (local_38 == '\0') {
      local_58 = *param_2;
      local_50 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *param_2 = local_48;
      param_2[1] = local_40;
    }
  }
  else {
    local_58 = *param_2;
    local_50 = param_2[1];
    if ((ulonglong)param_4 * 2 + local_58 < local_50) {
      local_50 = (ulonglong)param_4 * 2 + local_58;
      *param_2 = local_50;
    }
  }
  *param_3 = local_58;
  param_3[1] = local_50;
  if (local_50 <= local_58) {
    puVar1 = (undefined8 *)(param_1 + 0x88);
    if ((undefined *)*puVar1 != &DAT_1458912e0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      if (*(int *)(param_1 + 0x94) != 0x33) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,0x33);
        iVar5 = *(int *)(param_1 + 0x90);
      }
      *(int *)(param_1 + 0x90) = iVar5 + 0x33;
      if (*(int *)(param_1 + 0x94) < iVar5 + 0x33) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1,iVar5);
      }
      puVar1 = (undefined8 *)*puVar1;
      *puVar1 = 0x6c006900610066;
      puVar1[1] = 0x74002000640065;
      puVar1[2] = 0x6100700020006f;
      puVar1[3] = 0x20006500730072;
      puVar1[4] = 0x650020006e0061;
      puVar1[5] = 0x63006500700078;
      puVar1[6] = 0x20006400650074;
      puVar1[7] = 0x69007200740073;
      puVar1[8] = 0x6600200067006e;
      puVar1[9] = 0x20006d006f0072;
      puVar1[10] = 0x7200630069006d;
      puVar1[0xb] = 0x7400610070006f;
      *(undefined4 *)(puVar1 + 0xc) = 0x680063;
      *(undefined2 *)((longlong)puVar1 + 100) = 0;
    }
    *(undefined1 *)(param_1 + 0x99) = 1;
  }
  return;
}



// FUNCTION 142d95b60 FUN_142d95b60 body=377 status=ok
// SIG undefined FUN_142d95b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d95b60(longlong param_1,undefined8 *param_2,int *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  wchar_t *_Str;
  uint uVar6;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_70;
  wchar_t *local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar5 = (undefined2 *)PTR_DAT_1466ad5e0;
  if (param_4 != '\0') {
    puVar5 = &DAT_14588d1f4;
  }
  local_70 = (undefined2 *)0x0;
  uVar6 = 0;
  if (puVar5 != (undefined2 *)0x0) {
    iVar2 = MNP_OverrideOutput_WC(puVar5);
    local_70 = puVar5 + iVar2;
  }
  local_78 = puVar5;
  FUN_142d95e90(param_2,&local_68,&local_78);
  if (local_48 == '\0') {
    _Str = (wchar_t *)*param_2;
    pwVar4 = (wchar_t *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = local_58;
    param_2[1] = local_50;
    pwVar4 = local_60;
    _Str = local_68;
  }
  uVar3 = uVar6;
  if (_Str < pwVar4) {
    uVar3 = _wtoi(_Str);
  }
  *param_3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if (pwVar4 <= _Str) {
    plVar1 = (longlong *)(param_1 + 0x88);
    if ((wchar_t *)*plVar1 != L"failed to parse an expected integer from micropatch") {
      *(undefined4 *)(param_1 + 0x90) = 0;
      if (*(int *)(param_1 + 0x94) != 0x34) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0x34);
        uVar6 = *(uint *)(param_1 + 0x90);
      }
      *(uint *)(param_1 + 0x90) = uVar6 + 0x34;
      if (*(int *)(param_1 + 0x94) < (int)(uVar6 + 0x34)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,uVar6);
      }
      builtin_wcsncpy((wchar_t *)*plVar1,L"failed to parse an expected integer from micropatch",0x34
                     );
    }
    *(undefined1 *)(param_1 + 0x99) = 1;
  }
  return;
}



// FUNCTION 142d95ce0 FUN_142d95ce0 body=174 status=ok
// SIG undefined FUN_142d95ce0(void)

void FUN_142d95ce0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    UWorld::GetPlayerControllerIterator(lVar2,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar2 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x488);
      }
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
    }
  }
  return;
}



// FUNCTION 142d95d90 FUN_142d95d90 body=155 status=ok
// SIG undefined FUN_142d95d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142d95d90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  local_40 = param_3[1];
  FUN_142d95e90(param_1,&local_38,&local_48);
  if (local_18 == '\0') {
    uVar1 = *param_1;
    local_30 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    *param_2 = uVar1;
  }
  else {
    *param_1 = local_28;
    param_1[1] = local_20;
    *param_2 = local_38;
  }
  param_2[1] = local_30;
  return param_2;
}



// FUNCTION 142d95e30 FUN_142d95e30 body=93 status=ok
// SIG undefined FUN_142d95e30(void)

ulonglong FUN_142d95e30(longlong *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  psVar1 = (short *)param_2[1];
  psVar2 = (short *)*param_2;
  for (psVar3 = (short *)*param_1; psVar3 != (short *)param_1[1]; psVar3 = psVar3 + 1) {
    if (psVar2 == psVar1) goto LAB_142d95e70;
    if (*psVar3 != *psVar2) break;
    psVar2 = psVar2 + 1;
  }
  if (psVar2 != psVar1) {
    return (ulonglong)psVar2 & 0xffffffffffffff00;
  }
LAB_142d95e70:
  psVar1 = (short *)*param_1 + ((longlong)psVar1 - (longlong)*param_2 >> 1);
  *param_1 = (longlong)psVar1;
  return CONCAT71((int7)((ulonglong)psVar1 >> 8),1);
}


