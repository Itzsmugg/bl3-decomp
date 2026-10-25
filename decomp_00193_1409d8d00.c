// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1409d8d00 FUN_1409d8d00 body=232 status=ok
// SIG undefined FUN_1409d8d00(void)

void FUN_1409d8d00(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x668))(), lVar2 != 0)) {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(char *)(lVar2 + 0x758) != '\0')) &&
       (lVar2 = *(longlong *)(lVar2 + 0x568), lVar2 != 0)) {
      FUN_1409d9260(lVar2);
      FUN_142bcad50(lVar2,&DAT_1468652c8,param_2);
      FUN_142bcad50(lVar2,&DAT_1468652e0,param_4);
      local_18 = *param_3;
      local_10 = *(undefined4 *)(param_3 + 1);
      FUN_142bcae30(lVar2,&DAT_1468652e8,&local_18);
    }
  }
  return;
}



// FUNCTION 1409d8df0 FUN_1409d8df0 body=219 status=ok
// SIG undefined FUN_1409d8df0(void)

void FUN_1409d8df0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x668))(), lVar2 != 0)) {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(char *)(lVar2 + 0x758) != '\0')) &&
       (lVar2 = *(longlong *)(lVar2 + 0x568), lVar2 != 0)) {
      FUN_1409d9260(lVar2);
      FUN_142bcad50(lVar2,&DAT_1468652e0,param_3);
      local_18 = *param_2;
      local_10 = *(undefined4 *)(param_2 + 1);
      FUN_142bcae30(lVar2,&DAT_1468652e8,&local_18);
      UBlackboardComponent::SetValueAsBool(lVar2,&DAT_1468652f0,1);
    }
  }
  return;
}



// FUNCTION 1409d8ed0 FUN_1409d8ed0 body=905 status=ok
// SIG undefined FUN_1409d8ed0(void)

void FUN_1409d8ed0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong lVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  int *piVar13;
  int *piVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  int *local_res10;
  int local_48;
  int local_44;
  int *local_40;
  
  FUN_1409ad170();
  pwVar12 = *(wchar_t **)(param_1 + 0x250);
  pwVar16 = (wchar_t *)0x0;
  if (pwVar12 != (wchar_t *)0x0) {
    lVar8 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_1409d8f2e;
  }
  pwVar12 = pwVar16;
LAB_1409d8f2e:
  *(wchar_t **)(param_1 + 0x280) = pwVar12;
  puVar9 = (undefined4 *)FUN_1413d7310(param_1,&local_48);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(undefined4 *)(param_1 + 0x288) = *puVar9;
  *(undefined4 *)(param_1 + 0x28c) = uVar2;
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  *(undefined4 *)(param_1 + 0x294) = uVar4;
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(puVar9 + 4);
  if ((*(longlong *)(param_1 + 0x240) != 0) && (*(char *)(param_1 + 0x27a) != '\0')) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovementModeChanged",L"::");
    pwVar12 = pwVar16;
    while (pwVar6 = pwVar10, pwVar6 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar12 = pwVar6;
    }
    FName::FName(&local_res10,pwVar12 + 2,1);
    piVar13 = local_res10;
    lVar8 = *(longlong *)(param_1 + 0x240);
    plVar15 = (longlong *)(lVar8 + 0x5b0);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = (int *)0x0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = piVar13;
    if ((piVar13 != (int *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_48), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_40);
    }
    piVar13 = (int *)*plVar15;
    iVar1 = *(int *)(lVar8 + 0x5b8);
    for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
      if (((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
         ((cVar7 = FWeakObjectPtr::IsValid(piVar14), cVar7 == '\0' &&
          (cVar7 = FWeakObjectPtr::IsValid(&local_48), cVar7 == '\0')))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (*(int **)(piVar14 + 2) == local_40)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_1409d90d8;
        break;
      }
    }
    iVar1 = *(int *)(lVar8 + 0x5b8);
    *(int *)(lVar8 + 0x5b8) = iVar1 + 1;
    if (*(int *)(lVar8 + 0x5bc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
    }
    piVar13 = (int *)((longlong)iVar1 * 0x10 + *plVar15);
    *piVar13 = local_48;
    piVar13[1] = local_44;
    *(int **)(piVar13 + 2) = local_40;
LAB_1409d90d8:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerLanded",L"::");
    while (pwVar10 = pwVar12, pwVar10 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
      pwVar16 = pwVar10;
    }
    FName::FName(&local_res10,pwVar16 + 2,1);
    lVar8 = *(longlong *)(param_1 + 0x240);
    plVar15 = (longlong *)(lVar8 + 0x5a0);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = (int *)0x0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = local_res10;
    if ((local_res10 != (int *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_48), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_40);
    }
    piVar13 = (int *)*plVar15;
    iVar1 = *(int *)(lVar8 + 0x5a8);
    for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
      if (((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
         ((cVar7 = FWeakObjectPtr::IsValid(piVar14), cVar7 == '\0' &&
          (cVar7 = FWeakObjectPtr::IsValid(&local_48), cVar7 == '\0')))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (*(int **)(piVar14 + 2) == local_40)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_1409d9228;
        break;
      }
    }
    iVar1 = *(int *)(lVar8 + 0x5a8);
    *(int *)(lVar8 + 0x5a8) = iVar1 + 1;
    if (*(int *)(lVar8 + 0x5ac) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
    }
    piVar13 = (int *)((longlong)iVar1 * 0x10 + *plVar15);
    *piVar13 = local_48;
    piVar13[1] = local_44;
    *(int **)(piVar13 + 2) = local_40;
LAB_1409d9228:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
  }
  FUN_1409baaf0(param_1,1);
  return;
}



// FUNCTION 1409d9260 FUN_1409d9260 body=493 status=ok
// SIG undefined FUN_1409d9260(void)

void FUN_1409d9260(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
  plVar2 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
  plVar3 = (longlong *)UBlackboardKeyType_Bool::GetPrivateStaticClass();
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
  }
  FUN_142bb3d50(param_1,DAT_1468652c8,lVar4);
  FUN_142bb5c30(param_1,&DAT_1468652c8);
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
  }
  FUN_142bb3d50(param_1,DAT_1468652d8,lVar4);
  FUN_142bb5c30(param_1,&DAT_1468652d8);
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
  }
  FUN_142bb3d50(param_1,DAT_1468652e0,lVar4);
  FUN_142bb5c30(param_1,&DAT_1468652e0);
  if (plVar2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar2[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar4 = plVar2[0x1f];
    }
  }
  FUN_142bb3d50(param_1,DAT_1468652e8,lVar4);
  FUN_142bb5c30(param_1,&DAT_1468652e8);
  if (plVar3 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
  }
  FUN_142bb3d50(param_1,DAT_1468652f0,lVar4);
  FUN_142bb5c30(param_1,&DAT_1468652f0);
  if (plVar3 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
  }
  FUN_142bb3d50(param_1,DAT_1468652d0,lVar4);
  FUN_142bb5c30(param_1,&DAT_1468652d0);
  return;
}



// FUNCTION 1409d9450 FUN_1409d9450 body=104 status=ok
// SIG undefined FUN_1409d9450(void)

void FUN_1409d9450(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_142c6f130();
  if (lVar3 != 0) {
    lVar4 = FUN_1413f82e0();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140c5b130(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
    }
  }
  FUN_1406ed720(param_1);
  return;
}



// FUNCTION 1409d94c0 FUN_1409d94c0 body=752 status=ok
// SIG undefined FUN_1409d94c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409d94c0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  
  lVar10 = *(longlong *)(param_1 + 0x5e0);
  lVar11 = (longlong)*(int *)(param_1 + 0x5e8) * 0x68 + lVar10;
  if (lVar10 != lVar11) {
    do {
      local_78 = *(undefined4 *)(param_1 + 0x5a0);
      uStack_74 = 0;
      local_70 = 0x42c80000;
      lVar2 = *(longlong *)(*(longlong *)(lVar10 + 8) + 0x20);
      pfVar1 = (float *)(lVar2 + 0x280);
      if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
          (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
         (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
        uVar9 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
        fVar5 = (float)DAT_146864d80;
        fVar6 = DAT_146864d80._4_4_;
        fVar7 = DAT_146864d80._8_4_;
        auVar12._12_4_ = 0;
        auVar12._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
        auVar12 = divps(auVar12,_DAT_146864d80);
        fVar13 = (float)uVar9 - (float)(int)auVar12._0_4_ * fVar5;
        fVar14 = (float)((ulonglong)uVar9 >> 0x20) - (float)(int)auVar12._4_4_ * fVar6;
        fVar15 = *(float *)(lVar2 + 0x200) - (float)(int)auVar12._8_4_ * fVar7;
        fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                        (uint)(fVar13 + fVar5));
        fVar14 = (float)(((uint)(fVar14 + fVar6) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                        (uint)(fVar14 + fVar6));
        fVar15 = (float)(((uint)(fVar15 + fVar7) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                        (uint)(fVar15 + fVar7));
        bVar4 = fRam0000000146864d78 < fVar15;
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar14 - fVar6) ^ (uint)fVar14) &
                      -(uint)(fRam0000000146864d74 < fVar14) ^ (uint)fVar14,
                      ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(_DAT_146864d70 < fVar13) ^
                      (uint)fVar13);
        *(uint *)(lVar2 + 0x288) =
             ((uint)(fVar15 - fVar7) ^ (uint)fVar15) & -(uint)bVar4 ^ (uint)fVar15;
        puVar8 = (undefined8 *)FRotator::Quaternion(pfVar1,local_48);
        uVar9 = puVar8[1];
        *(undefined8 *)(lVar2 + 0x270) = *puVar8;
        *(undefined8 *)(lVar2 + 0x278) = uVar9;
      }
      local_58 = *(undefined8 *)(lVar2 + 0x270);
      uStack_50 = *(undefined8 *)(lVar2 + 0x278);
      uVar16 = 0;
      FUN_142397be0(lVar2,&local_78,&local_58,0,0,0);
      local_60 = 0;
      local_68 = 0x42b4000000000000;
      FUN_142398470(*(undefined8 *)(*(longlong *)(lVar10 + 8) + 0x20),&local_68,0,0,
                    uVar16 & 0xffffffffffffff00);
      (**(code **)(*(longlong *)**(undefined8 **)(lVar10 + 8) + 0x838))
                ((longlong *)**(undefined8 **)(lVar10 + 8),0);
      (**(code **)(*(longlong *)**(undefined8 **)(lVar10 + 8) + 0x830))
                ((longlong *)**(undefined8 **)(lVar10 + 8),2,1);
      FUN_142397540(**(undefined8 **)(lVar10 + 8),0,1);
      FUN_142398ec0(**(undefined8 **)(lVar10 + 8),0,1);
      FUN_142398ec0(*(undefined8 *)(*(longlong *)(lVar10 + 8) + 8),0,1);
      if (*(longlong *)(param_1 + 0x4e8) != 0) {
        lVar2 = *(longlong *)(lVar10 + 8);
        plVar3 = *(longlong **)(lVar2 + 0x10);
        uVar9 = (**(code **)(*plVar3 + 0x5a8))(plVar3,0);
        FWeakObjectPtr::operator=(lVar2 + 0x18,uVar9);
      }
      FUN_1409d9b30(param_1,lVar10,1);
      FUN_1409d9b30(param_1,lVar10,2);
      FUN_1409d9b30(param_1,lVar10,3);
      lVar10 = lVar10 + 0x68;
    } while (lVar10 != lVar11);
  }
  return;
}



// FUNCTION 1409d97c0 FUN_1409d97c0 body=67 status=ok
// SIG undefined FUN_1409d97c0(void)

void FUN_1409d97c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1406ee000();
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  FUN_1406ed570(param_1,param_2,param_1 + 0x3b8,uVar1,0);
  return;
}



// FUNCTION 1409d9810 FUN_1409d9810 body=252 status=ok
// SIG undefined FUN_1409d9810(void)

void FUN_1409d9810(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*param_2 + 0x568) != 0) {
    uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    FUN_1406ed570(param_1,param_2,param_1 + 0x388,uVar1,0);
    uVar1 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
    FUN_1406ed570(param_1,param_2,param_1 + 0x398,uVar1,0);
    uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    FUN_1406ed570(param_1,param_2,param_1 + 0x3a8,uVar1,0);
    uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    FUN_1406ed570(param_1,param_2,param_1 + 0x3b8,uVar1,0);
    uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    FUN_1406ed570(param_1,param_2,param_1 + 0x3c8,uVar1,0);
    uVar1 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
    FUN_1406ed570(param_1,param_2,param_1 + 0x3d8,uVar1,0);
  }
  FUN_140713110(param_1,param_2);
  return;
}



// FUNCTION 1409d9910 FUN_1409d9910 body=273 status=ok
// SIG undefined FUN_1409d9910(void)

void FUN_1409d9910(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  local_48 = (**(code **)(*(longlong *)*param_2 + 0x148))();
  local_40 = &local_48;
  local_38 = FUN_14073d760(&local_48,DAT_1468590e8);
  puVar4 = local_40;
  local_30 = &local_48;
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  local_28 = 0;
  puVar6 = (undefined8 *)FUN_14073d760(local_40,local_38);
  puVar7 = (undefined8 *)FUN_14073d760(local_30,local_28);
  while( true ) {
    if (puVar6 == puVar7) {
      return;
    }
    lVar3 = puVar6[2];
    if (*(longlong *)(lVar3 + 0x118) == 0) break;
    cVar5 = FUN_142221b10(*(longlong *)(lVar3 + 0x118),*(undefined8 *)(param_1 + 0x240));
    if ((cVar5 != '\0') ||
       (cVar5 = UActorComponent::ComponentHasTag(lVar3,*(undefined8 *)(param_1 + 0x240)),
       cVar5 != '\0')) {
      FUN_1409c83c0(param_1,lVar3,lVar1 + lVar2 + 0x78);
    }
    puVar6 = (undefined8 *)FUN_14073d760(puVar4,*puVar6);
  }
  return;
}



// FUNCTION 1409d9a30 FUN_1409d9a30 body=147 status=ok
// SIG undefined FUN_1409d9a30(void)

void FUN_1409d9a30(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = (**(code **)(*(longlong *)*param_2 + 0x678))();
  if (lVar2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar2 + 0x908) != 0)) {
      FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0xd8) + param_2[1] + 0x48);
    }
  }
  return;
}



// FUNCTION 1409d9ad0 FUN_1409d9ad0 body=88 status=ok
// SIG undefined FUN_1409d9ad0(void)

void FUN_1409d9ad0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar3 = (longlong *)*param_2;
  uVar4 = FUN_141442a00();
  uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
  FWeakObjectPtr::operator=(lVar1 + lVar2 + 0x48,uVar4);
  return;
}



// FUNCTION 1409d9b30 FUN_1409d9b30 body=630 status=ok
// SIG undefined FUN_1409d9b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409d9b30(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined1 local_38 [32];
  
  lVar9 = (longlong)param_3 * 0x68;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x20 + lVar9);
  local_40 = 0x42c80000;
  pfVar1 = (float *)(lVar2 + 0x280);
  local_48 = (ulonglong)
             (uint)((float)param_3 * *(float *)(param_1 + 0x5a4) + *(float *)(param_1 + 0x5a0));
  if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
      (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
     (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
    local_58 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
    auVar10._12_4_ = 0;
    auVar10._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
    fVar4 = (float)DAT_146864d80;
    fVar5 = DAT_146864d80._4_4_;
    fVar6 = DAT_146864d80._8_4_;
    auVar10 = divps(auVar10,_DAT_146864d80);
    fVar12 = (float)local_58 - (float)(int)auVar10._0_4_ * fVar4;
    fVar13 = (float)((ulonglong)local_58 >> 0x20) - (float)(int)auVar10._4_4_ * fVar5;
    fVar14 = *(float *)(lVar2 + 0x200) - (float)(int)auVar10._8_4_ * fVar6;
    fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar12 + fVar4));
    fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar13 + fVar5));
    fVar14 = (float)(((uint)(fVar14 + fVar6) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                    (uint)(fVar14 + fVar6));
    uVar11 = ((uint)(fVar14 - fVar6) ^ (uint)fVar14) & -(uint)(fRam0000000146864d78 < fVar14) ^
             (uint)fVar14;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146864d74 < fVar13) ^
                  (uint)fVar13,
                  ((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(_DAT_146864d70 < fVar12) ^
                  (uint)fVar12);
    *(uint *)(lVar2 + 0x288) = uVar11;
    puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_38);
    uVar8 = puVar7[1];
    *(undefined8 *)(lVar2 + 0x270) = *puVar7;
    *(undefined8 *)(lVar2 + 0x278) = uVar8;
  }
  local_58 = *(undefined8 *)(lVar2 + 0x270);
  uStack_50 = *(ulonglong *)(lVar2 + 0x278);
  uVar15 = 0;
  FUN_142397be0(lVar2,&local_48,&local_58,0,0,0);
  uStack_50 = uStack_50 & 0xffffffff00000000;
  local_48 = 0x42b4000000000000;
  local_40 = 0;
  FUN_142398470(*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x20 + lVar9),&local_48,0,0,
                uVar15 & 0xffffffffffffff00);
  plVar3 = *(longlong **)(lVar9 + *(longlong *)(param_2 + 8));
  (**(code **)(*plVar3 + 0x838))(plVar3,0);
  plVar3 = *(longlong **)(lVar9 + *(longlong *)(param_2 + 8));
  (**(code **)(*plVar3 + 0x830))(plVar3,2,1);
  FUN_142397540(*(undefined8 *)(*(longlong *)(param_2 + 8) + lVar9),0,1);
  FUN_142398ec0(*(undefined8 *)(*(longlong *)(param_2 + 8) + lVar9),0,1);
  FUN_142398ec0(*(undefined8 *)(*(longlong *)(param_2 + 8) + 8 + lVar9),0,1);
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    plVar3 = *(longlong **)(lVar2 + 0x10 + lVar9);
    uVar8 = (**(code **)(*plVar3 + 0x5a8))(plVar3,0,*(longlong *)(param_1 + 0x4e8),0);
    FWeakObjectPtr::operator=(lVar9 + 0x18 + lVar2,uVar8);
  }
  return;
}



// FUNCTION 1409d9db0 FUN_1409d9db0 body=502 status=ok
// SIG undefined FUN_1409d9db0(void)

ulonglong FUN_1409d9db0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  byte bVar9;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = *param_3;
  bVar9 = 0;
  bVar8 = 0;
  if (*(int *)(param_2 + 0x120) != *(int *)(param_2 + 0x14c)) {
    lVar4 = *(longlong *)(param_2 + 0x158);
    if (*(longlong *)(param_2 + 0x158) == 0) {
      lVar4 = param_2 + 0x150;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_2 + 0x160) - 1U) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_2 + 0x118);
      do {
        lVar5 = (longlong)iVar3 * 0x20;
        if (*(longlong *)(lVar5 + lVar4) == lVar1) {
          if (((iVar3 != -1) && (lVar4 = (longlong)iVar3 * 0x20 + lVar4, lVar4 != 0)) &&
             ((longlong *)(lVar4 + 8) != (longlong *)0x0)) {
            plVar6 = *(longlong **)(lVar4 + 8);
            plVar7 = plVar6 + (longlong)*(int *)(lVar4 + 0x10) * 2;
            for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
              if (((plVar6[1] != 0) && (*plVar6 != 0)) &&
                 (lVar1 = *(longlong *)(*plVar6 + 0x48), lVar1 != 0)) {
                lVar4 = FUN_142df8d80();
                lVar1 = *(longlong *)(lVar1 + 0x10);
                if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
                   (bVar2 = true,
                   *(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
                   != lVar4 + 0x88)) {
                  bVar2 = false;
                }
                if (bVar2) {
                  bVar9 = 1;
                  bVar8 = 1;
                }
              }
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x18 + lVar4);
      } while (iVar3 != -1);
    }
  }
  plVar6 = *(longlong **)(param_2 + 0x108);
  plVar7 = plVar6 + (longlong)*(int *)(param_2 + 0x110) * 2;
  for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
    if (((plVar6[1] != 0) && (*plVar6 != 0)) && (lVar1 = *(longlong *)(*plVar6 + 0x48), lVar1 != 0))
    {
      lVar4 = FUN_142df8d80();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      bVar8 = bVar9;
      if (bVar2) {
        bVar8 = 1;
        bVar9 = bVar8;
      }
    }
  }
  return (ulonglong)bVar8;
}



// FUNCTION 1409d9fb0 FUN_1409d9fb0 body=236 status=ok
// SIG undefined FUN_1409d9fb0(void)

void FUN_1409d9fb0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xa58);
  if (param_2 != lVar2) {
    if (lVar2 != 0) {
      FUN_1407665e0(lVar2 + 0x290,param_1);
      lVar3 = FUN_1413f82e0();
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
        FUN_1407665e0(lVar2 + 0xf18,param_1);
      }
    }
    FWeakObjectPtr::operator=(param_1 + 0xa58,param_2);
    FUN_1409c8f40(param_1,param_2);
    FUN_1409eed80(param_1);
    if (*(longlong *)(param_1 + 0x700) != 0) {
      if (param_2 == 0) {
        param_2 = 0;
        uVar4 = 3;
      }
      else {
        uVar4 = 2;
      }
      FUN_140a15e10(*(longlong *)(param_1 + 0x700),uVar4,param_2);
    }
    FUN_14141c530(param_1);
  }
  return;
}



// FUNCTION 1409da0b0 FUN_1409da0b0 body=45 status=ok
// SIG undefined FUN_1409da0b0(void)

byte FUN_1409da0b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142c6c710(param_1 + -0x218);
  lVar1 = FUN_1406d4330(param_1 + -0x218);
  return ~(*(byte *)(lVar1 + 0x38) >> 1) & 1;
}



// FUNCTION 1409da0e0 FUN_1409da0e0 body=190 status=ok
// SIG undefined FUN_1409da0e0(void)

byte FUN_1409da0e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  bool bVar8;
  
  FUN_142c6c710(param_1 + -0x218);
  plVar2 = *(longlong **)(param_1 + -0x1d8);
  plVar5 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar5, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + -0x1e0);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  bVar7 = ~(*(byte *)(plVar5 + 7) >> 1) & 1;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    return bVar7;
  }
  return bVar7;
}



// FUNCTION 1409da1a0 FUN_1409da1a0 body=79 status=ok
// SIG undefined FUN_1409da1a0(void)

undefined8 FUN_1409da1a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1409da1f0(param_1 + -0x1b0,(undefined8 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    return 0;
  }
  return 1;
}



// FUNCTION 1409da1f0 FUN_1409da1f0 body=137 status=ok
// SIG undefined FUN_1409da1f0(void)

bool FUN_1409da1f0(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
    return *(char *)(param_1 + 0xa1) == '\x03';
  }
  if (cVar1 == '\x02') {
    lVar4 = FUN_1409a6530(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar4 != 0) {
      cVar1 = FUN_1409ae8a0(lVar4);
      return cVar1 == '\0';
    }
  }
  else if (cVar1 == '\x03') {
    local_28 = *(undefined8 *)(param_2 + 0x10);
    local_18 = 0;
    local_20 = param_1;
    uVar2 = FUN_1430ec7a0();
    piVar3 = (int *)FUN_142dd6f80(local_38,uVar2,&local_28);
    return 0 < *piVar3;
  }
  return false;
}



// FUNCTION 1409da280 FUN_1409da280 body=66 status=ok
// SIG undefined FUN_1409da280(void)

undefined1 FUN_1409da280(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140713b60();
  if (cVar1 != '\0') {
    cVar1 = FUN_1409ef380(param_1,param_2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409da2d0 FUN_1409da2d0 body=78 status=ok
// SIG undefined FUN_1409da2d0(void)

bool FUN_1409da2d0(undefined8 param_1)

{
  char local_res8 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined ***local_10;
  
  pcStack_38 = local_res8;
  local_58 = (undefined4)param_1;
  uStack_54 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_res8[0] = '\0';
  local_48 = &PTR_LAB_1441bff58;
  local_10 = &local_48;
  local_40 = local_58;
  uStack_3c = uStack_54;
  FUN_142c6db40(local_58,&local_48);
  return local_res8[0] == '\0';
}



// FUNCTION 1409da320 FUN_1409da320 body=39 status=ok
// SIG undefined FUN_1409da320(void)

bool FUN_1409da320(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 200) == 0) {
    return true;
  }
  lVar1 = FUN_142ceefa0();
  return lVar1 == 0;
}



// FUNCTION 1409da380 FUN_1409da380 body=25 status=ok
// SIG undefined FUN_1409da380(void)

bool FUN_1409da380(longlong param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(longlong *)(param_1 + 0x700) != 0) {
    bVar1 = *(char *)(*(longlong *)(param_1 + 0x700) + 0x2d0) == param_2;
  }
  return bVar1;
}



// FUNCTION 1409da3a0 FUN_1409da3a0 body=55 status=ok
// SIG undefined FUN_1409da3a0(void)

ulonglong FUN_1409da3a0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FOpenXRHMD::IsStereoEnabled();
  if ((((char)uVar1 != '\0') && (uVar1 = *(ulonglong *)(param_1 + 0x2b0), uVar1 != 0)) &&
     (*(char *)(uVar1 + 0xa0) == '\x04')) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1409da3e0 FUN_1409da3e0 body=125 status=ok
// SIG undefined FUN_1409da3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1409da3e0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x50) * 2;
  while( true ) {
    if (plVar2 == plVar3) {
      return in_RAX & 0xffffffffffffff00;
    }
    if (((*plVar2 != 0) && ((longlong *)plVar2[1] != (longlong *)0x0)) &&
       (in_RAX = (**(code **)(*(longlong *)plVar2[1] + 0x20))(), (char)in_RAX != '\0')) break;
    plVar2 = plVar2 + 2;
  }
  if (*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001409da459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_00000000 + 0x18))();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001409da446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)plVar2[1] + 0x18))();
  return uVar1;
}



// FUNCTION 1409da460 FUN_1409da460 body=55 status=ok
// SIG undefined FUN_1409da460(void)

undefined1 FUN_1409da460(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1409ae9b0();
  if (cVar1 == '\0') {
    cVar1 = FUN_1409ae850(param_1);
    if ((cVar1 == '\0') || (*(int *)(param_1 + 0x2cc) < 1)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1409da4a0 FUN_1409da4a0 body=274 status=ok
// SIG undefined FUN_1409da4a0(void)

undefined8 FUN_1409da4a0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float local_res10;
  float local_res14;
  undefined8 local_res20;
  undefined1 local_38 [32];
  
  plVar1 = *(longlong **)(*param_2 + 0x5c8);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  fVar5 = (float)FUN_142230c20(plVar1,param_3);
  local_res20 = *(undefined8 *)(*param_2 + 0x568);
  FUN_142de7970(param_1 + 0x110,&local_res10,*param_2,&local_res20);
  if (((*(longlong *)(param_3 + 0x10e0) != 0) &&
      (cVar2 = FUN_140ada980(*(longlong *)(param_3 + 0x10e0),plVar1), cVar2 == '\0')) &&
     ((pfVar3 = (float *)(**(code **)(*plVar1 + 0x308))(plVar1,local_38), 0.0001 < ABS(*pfVar3) ||
      ((0.0001 < ABS(pfVar3[1]) || (0.0001 < ABS(pfVar3[2]))))))) {
    if ((local_res10 - local_res14 <= fVar5) && (fVar5 <= local_res10)) {
      return 1;
    }
    return 0;
  }
  uVar4 = FUN_142c4a520(&local_res10,fVar5);
  return uVar4;
}



// FUNCTION 1409da5c0 FUN_1409da5c0 body=243 status=ok
// SIG undefined FUN_1409da5c0(void)

undefined8 FUN_1409da5c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 != 0) {
    lVar3 = FUN_1413f82e0();
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
      lVar3 = *(longlong *)(param_1 + 0x150);
      uVar6 = 0;
      uVar5 = uVar6;
      if (lVar3 != 0) {
        lVar4 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar3 + 0x908) != 0)) {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x908) + 0x180);
        }
      }
      if (*(longlong *)(param_2 + 0x908) != 0) {
        uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0x908) + 0x180);
      }
      iVar2 = FUN_142df3570(uVar5,uVar6);
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1409da6c0 FUN_1409da6c0 body=200 status=ok
// SIG undefined FUN_1409da6c0(void)

void FUN_1409da6c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x2a8) == 0) {
    if (*(longlong *)(param_1 + 0x240) == 0) {
      return;
    }
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_1409bf760(*(longlong *)(param_1 + 0x240),&local_18,0);
    for (plVar2 = local_18; plVar2 != local_18 + (int)local_10; plVar2 = plVar2 + 1) {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_1 + 0x2a0)))
      goto LAB_1409da745;
    }
    lVar1 = 0;
LAB_1409da745:
    *(longlong *)(param_1 + 0x2a8) = lVar1;
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
      lVar1 = *(longlong *)(param_1 + 0x2a8);
    }
    if (lVar1 == 0) {
      return;
    }
  }
  lVar1 = FUN_1423ac7e0();
  if (lVar1 != 0) {
    UAnimInstance::Montage_JumpToSection(lVar1,param_2,0);
  }
  return;
}



// FUNCTION 1409da790 FUN_1409da790 body=211 status=ok
// SIG undefined FUN_1409da790(void)

void FUN_1409da790(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_1409aed10();
  if (*(longlong *)(param_1 + 0x2a8) == 0) {
    if (*(longlong *)(param_1 + 0x240) == 0) {
      return;
    }
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_1409bf760(*(longlong *)(param_1 + 0x240),&local_18,0);
    for (plVar2 = local_18; plVar2 != local_18 + (int)local_10; plVar2 = plVar2 + 1) {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_1 + 0x2a0)))
      goto LAB_1409da820;
    }
    lVar1 = 0;
LAB_1409da820:
    *(longlong *)(param_1 + 0x2a8) = lVar1;
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
      lVar1 = *(longlong *)(param_1 + 0x2a8);
    }
    if (lVar1 == 0) {
      return;
    }
  }
  lVar1 = FUN_1423ac7e0();
  if (lVar1 != 0) {
    UAnimInstance::Montage_JumpToSection(lVar1,param_2,0);
  }
  return;
}



// FUNCTION 1409da870 FUN_1409da870 body=262 status=ok
// SIG undefined FUN_1409da870(void)

undefined8
FUN_1409da870(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18;
  longlong *local_10;
  
  local_28 = *param_8;
  local_20 = *(undefined4 *)(param_8 + 1);
  FUN_1409e0430(&local_18,param_1,param_4,param_3,param_5,param_6,param_7,&local_28,param_9,param_2,
                1);
  uVar5 = 0;
  if (local_18 != 0) {
    uVar5 = *(undefined8 *)(local_18 + 0x10);
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 1409da980 FUN_1409da980 body=110 status=ok
// SIG undefined FUN_1409da980(void)

undefined8 FUN_1409da980(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_142c6c710();
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
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  lVar3 = FUN_1406d4330(param_1);
  return *(undefined8 *)(lVar3 + 0x538);
}



// FUNCTION 1409da9f0 FUN_1409da9f0 body=110 status=ok
// SIG undefined FUN_1409da9f0(void)

undefined8 FUN_1409da9f0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_142c6c710();
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
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  lVar3 = FUN_1406d4330(param_1);
  return *(undefined8 *)(lVar3 + 0x548);
}



// FUNCTION 1409daa60 FUN_1409daa60 body=110 status=ok
// SIG undefined FUN_1409daa60(void)

undefined8 FUN_1409daa60(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_142c6c710();
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
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  lVar3 = FUN_1406d4330(param_1);
  return *(undefined8 *)(lVar3 + 0x540);
}



// FUNCTION 1409daad0 FUN_1409daad0 body=227 status=ok
// SIG undefined FUN_1409daad0(void)

longlong FUN_1409daad0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint local_res8 [2];
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  lVar8 = 0;
  lVar5 = lVar8;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar9 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar9;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    lVar5 = FUN_142c6f130(uVar4);
    if (lVar5 != 0) {
      uVar6 = FUN_1430a8880();
      plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
      if (plVar7 != (longlong *)0x0) {
        cVar2 = FUN_142c711a0(uVar4,&DAT_1468651a8,local_res8);
        if (cVar2 == '\0') {
          local_res8[0] = 0;
        }
        lVar8 = (**(code **)(*plVar7 + 0xf0))(plVar7,local_res8[0] & 0xff);
      }
    }
    return lVar8;
  }
  return 0;
}



// FUNCTION 1409dabc0 FUN_1409dabc0 body=156 status=ok
// SIG undefined FUN_1409dabc0(void)

void FUN_1409dabc0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  lVar3 = 0;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
     (lVar3 = FUN_1406d4330(param_1), *(longlong *)(lVar3 + 0x508) != 0)) {
    FUN_1409e4a70(lVar3,0,param_2);
  }
  return;
}



// FUNCTION 1409dac60 FUN_1409dac60 body=119 status=ok
// SIG undefined FUN_1409dac60(void)

void FUN_1409dac60(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4630(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409dace0 FUN_1409dace0 body=119 status=ok
// SIG undefined FUN_1409dace0(void)

void FUN_1409dace0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e46c0(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409dad60 FUN_1409dad60 body=119 status=ok
// SIG undefined FUN_1409dad60(void)

void FUN_1409dad60(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4770(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409dade0 FUN_1409dade0 body=119 status=ok
// SIG undefined FUN_1409dade0(void)

void FUN_1409dade0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4840(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409dae60 FUN_1409dae60 body=135 status=ok
// SIG undefined FUN_1409dae60(void)

void FUN_1409dae60(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4910(uVar4,param_2,param_3);
  }
  return;
}



// FUNCTION 1409daef0 FUN_1409daef0 body=134 status=ok
// SIG undefined FUN_1409daef0(void)

void FUN_1409daef0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4a70(uVar4,param_2,param_3);
  }
  return;
}



// FUNCTION 1409daf80 FUN_1409daf80 body=119 status=ok
// SIG undefined FUN_1409daf80(void)

void FUN_1409daf80(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4c50(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db000 FUN_1409db000 body=119 status=ok
// SIG undefined FUN_1409db000(void)

void FUN_1409db000(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4dd0(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db080 FUN_1409db080 body=119 status=ok
// SIG undefined FUN_1409db080(void)

void FUN_1409db080(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4f10(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db100 FUN_1409db100 body=119 status=ok
// SIG undefined FUN_1409db100(void)

void FUN_1409db100(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e4f80(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db180 FUN_1409db180 body=119 status=ok
// SIG undefined FUN_1409db180(void)

void FUN_1409db180(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e51f0(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db200 FUN_1409db200 body=119 status=ok
// SIG undefined FUN_1409db200(void)

void FUN_1409db200(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e5330(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db280 FUN_1409db280 body=104 status=ok
// SIG undefined FUN_1409db280(void)

void FUN_1409db280(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_142c6c710();
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
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    *(undefined4 *)(param_1 + 500) = param_2;
  }
  return;
}



// FUNCTION 1409db2f0 FUN_1409db2f0 body=119 status=ok
// SIG undefined FUN_1409db2f0(void)

void FUN_1409db2f0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e5440(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db370 FUN_1409db370 body=119 status=ok
// SIG undefined FUN_1409db370(void)

void FUN_1409db370(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e5560(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db3f0 FUN_1409db3f0 body=119 status=ok
// SIG undefined FUN_1409db3f0(void)

void FUN_1409db3f0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_142c6c710();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_1409e5640(uVar4,param_2);
  }
  return;
}



// FUNCTION 1409db470 FUN_1409db470 body=1124 status=ok
// SIG undefined FUN_1409db470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409db470(longlong param_1,char param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulonglong uVar24;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [48];
  
  if ((param_2 != '\0') || (0.0 < *(float *)(param_1 + 0x588))) {
    lVar4 = FUN_142c728d0();
    lVar7 = 0;
    if (*(longlong *)(param_1 + 0x540) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x540) + 0x168);
    }
    if ((lVar4 != 0) && (lVar7 != 0)) {
      fVar8 = (*(float *)(lVar4 + 0x790) - *(float *)(param_1 + 0x588)) /
              *(float *)(param_1 + 0x584);
      if (0.0 <= fVar8) {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        fVar21 = fVar8 + fVar8;
        if (0.5 <= fVar8) {
          fVar8 = 1.0 - (fVar21 - 1.0);
          fVar21 = (1.0 - fVar8 * fVar8) + 1.0;
        }
        else {
          fVar21 = fVar21 * fVar21;
        }
      }
      else {
        fVar21 = 0.0;
      }
      fVar21 = fVar21 * 0.5;
      if (param_2 == '\0') {
        fStack_70 = (*(float *)(param_1 + 0x574) - *(float *)(param_1 + 0x55c)) * fVar21 +
                    *(float *)(param_1 + 0x55c);
        local_88 = CONCAT44((*(float *)(param_1 + 0x570) - *(float *)(param_1 + 0x558)) * fVar21 +
                            *(float *)(param_1 + 0x558),
                            (*(float *)(param_1 + 0x56c) - *(float *)(param_1 + 0x554)) * fVar21 +
                            *(float *)(param_1 + 0x554));
      }
      else {
        local_88 = *(undefined8 *)(param_1 + 0x56c);
        fStack_70 = *(float *)(param_1 + 0x574);
      }
      pfVar6 = (float *)(lVar7 + 0x280);
      local_78 = local_88;
      if (((*(float *)(lVar7 + 0x1f8) != *pfVar6) ||
          (*(float *)(lVar7 + 0x1fc) != *(float *)(lVar7 + 0x284))) ||
         (*(float *)(lVar7 + 0x200) != *(float *)(lVar7 + 0x288))) {
        local_88 = *(undefined8 *)*(undefined1 (*) [12])(lVar7 + 0x1f8);
        auVar9._12_4_ = 0;
        auVar9._0_12_ = *(undefined1 (*) [12])(lVar7 + 0x1f8);
        fVar8 = (float)DAT_146864d80;
        fVar12 = DAT_146864d80._4_4_;
        fVar13 = DAT_146864d80._8_4_;
        auVar9 = divps(auVar9,_DAT_146864d80);
        fVar18 = (float)local_88 - (float)(int)auVar9._0_4_ * fVar8;
        fVar19 = (float)((ulonglong)local_88 >> 0x20) - (float)(int)auVar9._4_4_ * fVar12;
        fVar20 = *(float *)(lVar7 + 0x200) - (float)(int)auVar9._8_4_ * fVar13;
        fVar18 = (float)(((uint)(fVar18 + fVar8) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                        (uint)(fVar18 + fVar8));
        fVar19 = (float)(((uint)(fVar19 + fVar12) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                        (uint)(fVar19 + fVar12));
        fVar20 = (float)(((uint)(fVar20 + fVar13) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                        (uint)(fVar20 + fVar13));
        uVar14 = ((uint)(fVar20 - fVar13) ^ (uint)fVar20) & -(uint)(fRam0000000146864d78 < fVar20) ^
                 (uint)fVar20;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar14);
        *(ulonglong *)pfVar6 =
             CONCAT44(((uint)(fVar19 - fVar12) ^ (uint)fVar19) &
                      -(uint)(fRam0000000146864d74 < fVar19) ^ (uint)fVar19,
                      ((uint)(fVar18 - fVar8) ^ (uint)fVar18) & -(uint)(_DAT_146864d70 < fVar18) ^
                      (uint)fVar18);
        *(uint *)(lVar7 + 0x288) = uVar14;
        puVar5 = (undefined8 *)FRotator::Quaternion(pfVar6,&local_58);
        uVar3 = puVar5[1];
        *(undefined8 *)(lVar7 + 0x270) = *puVar5;
        *(undefined8 *)(lVar7 + 0x278) = uVar3;
      }
      local_88 = *(undefined8 *)(lVar7 + 0x270);
      uStack_80 = *(undefined8 *)(lVar7 + 0x278);
      uVar24 = 0;
      FUN_142397be0(lVar7,&local_78,&local_88,0,0,0);
      if (param_2 == '\0') {
        puVar5 = (undefined8 *)FRotator::Quaternion(param_1 + 0x560,&local_78);
        local_58 = *puVar5;
        uStack_50 = puVar5[1];
        puVar5 = (undefined8 *)FRotator::Quaternion(param_1 + 0x578,&local_78);
        local_68 = *puVar5;
        uStack_60 = puVar5[1];
        pfVar6 = (float *)FQuat::Slerp_NotNormalized(local_48,&local_58,&local_68,fVar21);
        fVar8 = *pfVar6;
        fVar21 = pfVar6[1];
        local_78 = *(undefined8 *)pfVar6;
        fStack_70 = pfVar6[2];
        fStack_6c = pfVar6[3];
        auVar10._0_4_ = fVar8 * fVar8 + fStack_70 * fStack_70;
        auVar10._4_4_ = fVar21 * fVar21 + fStack_6c * fStack_6c;
        auVar10._8_4_ = fStack_70 * fStack_70 + fVar8 * fVar8;
        auVar10._12_4_ = fStack_6c * fStack_6c + fVar21 * fVar21;
        fVar20 = auVar10._4_4_ + auVar10._0_4_;
        fVar15 = auVar10._8_4_ + auVar10._4_4_;
        fVar16 = auVar10._12_4_ + auVar10._8_4_;
        fVar17 = auVar10._0_4_ + auVar10._12_4_;
        auVar1._4_4_ = fVar15;
        auVar1._0_4_ = fVar20;
        auVar1._8_4_ = fVar16;
        auVar1._12_4_ = fVar17;
        auVar9 = rsqrtps(auVar10,auVar1);
        fVar12 = auVar9._0_4_;
        fVar13 = auVar9._4_4_;
        fVar18 = auVar9._8_4_;
        fVar19 = auVar9._12_4_;
        fVar12 = (_DAT_146864da0 - fVar12 * fVar12 * fVar20 * _DAT_146864da0) * fVar12 + fVar12;
        fVar13 = (fRam0000000146864da4 - fVar13 * fVar13 * fVar15 * fRam0000000146864da4) * fVar13 +
                 fVar13;
        fVar18 = (fRam0000000146864da8 - fVar18 * fVar18 * fVar16 * fRam0000000146864da8) * fVar18 +
                 fVar18;
        fVar19 = (fRam0000000146864dac - fVar19 * fVar19 * fVar17 * fRam0000000146864dac) * fVar19 +
                 fVar19;
        fVar22 = (float)(((uint)(((_DAT_146864da0 - fVar12 * fVar12 * fVar20 * _DAT_146864da0) *
                                  fVar12 + fVar12) * fVar8) ^ _DAT_146864d90) &
                         -(uint)(1e-08 <= fVar20) ^ _DAT_146864d90);
        fVar23 = (float)(((uint)(((fRam0000000146864da4 -
                                  fVar13 * fVar13 * fVar15 * fRam0000000146864da4) * fVar13 + fVar13
                                 ) * fVar21) ^ uRam0000000146864d94) & -(uint)(1e-08 <= fVar15) ^
                        uRam0000000146864d94);
        fVar16 = (float)(((uint)(((fRam0000000146864da8 -
                                  fVar18 * fVar18 * fVar16 * fRam0000000146864da8) * fVar18 + fVar18
                                 ) * fStack_70) ^ uRam0000000146864d98) & -(uint)(1e-08 <= fVar16) ^
                        uRam0000000146864d98);
        fVar17 = (float)(((uint)(((fRam0000000146864dac -
                                  fVar19 * fVar19 * fVar17 * fRam0000000146864dac) * fVar19 + fVar19
                                 ) * fStack_6c) ^ uRam0000000146864d9c) & -(uint)(1e-08 <= fVar17) ^
                        uRam0000000146864d9c);
        auVar11._0_4_ = fVar22 * fVar22 + fVar16 * fVar16;
        auVar11._4_4_ = fVar23 * fVar23 + fVar17 * fVar17;
        auVar11._8_4_ = fVar16 * fVar16 + fVar22 * fVar22;
        auVar11._12_4_ = fVar17 * fVar17 + fVar23 * fVar23;
        fVar18 = auVar11._4_4_ + auVar11._0_4_;
        fVar19 = auVar11._8_4_ + auVar11._4_4_;
        fVar20 = auVar11._12_4_ + auVar11._8_4_;
        fVar15 = auVar11._0_4_ + auVar11._12_4_;
        auVar2._4_4_ = fVar19;
        auVar2._0_4_ = fVar18;
        auVar2._8_4_ = fVar20;
        auVar2._12_4_ = fVar15;
        auVar9 = rsqrtps(auVar11,auVar2);
        fVar8 = auVar9._0_4_;
        fVar21 = auVar9._4_4_;
        fVar12 = auVar9._8_4_;
        fVar13 = auVar9._12_4_;
        fVar8 = (_DAT_146864da0 - fVar8 * fVar8 * fVar18 * _DAT_146864da0) * fVar8 + fVar8;
        fVar21 = (fRam0000000146864da4 - fVar21 * fVar21 * fVar19 * fRam0000000146864da4) * fVar21 +
                 fVar21;
        fVar12 = (fRam0000000146864da8 - fVar12 * fVar12 * fVar20 * fRam0000000146864da8) * fVar12 +
                 fVar12;
        fVar13 = (fRam0000000146864dac - fVar13 * fVar13 * fVar15 * fRam0000000146864dac) * fVar13 +
                 fVar13;
        local_88 = CONCAT44(((uint)(((fRam0000000146864da4 -
                                     fVar21 * fVar21 * fVar19 * fRam0000000146864da4) * fVar21 +
                                    fVar21) * fVar23) ^ uRam0000000146864d94) &
                            -(uint)(1e-08 <= fVar19) ^ uRam0000000146864d94,
                            ((uint)(((_DAT_146864da0 - fVar8 * fVar8 * fVar18 * _DAT_146864da0) *
                                     fVar8 + fVar8) * fVar22) ^ _DAT_146864d90) &
                            -(uint)(1e-08 <= fVar18) ^ _DAT_146864d90);
        uStack_80 = CONCAT44(((uint)(((fRam0000000146864dac -
                                      fVar13 * fVar13 * fVar15 * fRam0000000146864dac) * fVar13 +
                                     fVar13) * fVar17) ^ uRam0000000146864d9c) &
                             -(uint)(1e-08 <= fVar15) ^ uRam0000000146864d9c,
                             ((uint)(((fRam0000000146864da8 -
                                      fVar12 * fVar12 * fVar20 * fRam0000000146864da8) * fVar12 +
                                     fVar12) * fVar16) ^ uRam0000000146864d98) &
                             -(uint)(1e-08 <= fVar20) ^ uRam0000000146864d98);
        puVar5 = (undefined8 *)FQuat::Rotator(&local_88,&local_78);
        local_78 = *puVar5;
        fStack_70 = *(float *)(puVar5 + 1);
      }
      else {
        local_78 = *(undefined8 *)(param_1 + 0x578);
        fStack_70 = *(float *)(param_1 + 0x580);
      }
      FUN_142398470(lVar7,&local_78,0,0,uVar24 & 0xffffffffffffff00);
    }
  }
  return;
}



// FUNCTION 1409db8e0 FUN_1409db8e0 body=486 status=ok
// SIG undefined FUN_1409db8e0(void)

void FUN_1409db8e0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1[2];
  cVar3 = (**(code **)(*param_1 + 0x38))();
  if (cVar3 != '\0') goto LAB_1409dbab4;
  lVar4 = FUN_142c6f130(param_1);
  if (lVar4 == 0) {
LAB_1409db95f:
    lVar4 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_142c6f130(param_1);
    lVar4 = (**(code **)(*plVar5 + 0x668))(plVar5);
    if (lVar4 == 0) goto LAB_1409db95f;
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1409db95f;
  }
  param_1[0xa3] = lVar4;
  if (*(char *)(lVar1 + 0x1d1) != '\0') {
    FUN_1409e4840(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1d2) != '\0') {
    FUN_1409e51f0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1d3) != '\0') {
    FUN_1409e4770(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1a8) == '\0') {
    if (*(char *)(lVar1 + 0x1a9) != '\0') {
      lVar4 = FUN_142c6f130(param_1);
      if (lVar4 != 0) {
        uVar7 = FUN_1430a8880();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar7);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0xf8))(plVar5,*(undefined4 *)(lVar1 + 0x1ac),0,0);
        }
      }
    }
  }
  else {
    FUN_1409e4910(param_1,1,*(undefined4 *)(lVar1 + 0x1ac));
  }
  if (*(char *)(lVar1 + 0x1b0) != '\0') {
    FUN_1409e5640(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1b1) != '\0') {
    FUN_1409e5560(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1d4) != '\0') {
    FUN_1409e4630(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1d7) != '\0') {
    FUN_1409e5440(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1d5) != '\0') {
    FUN_1409e4f10(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1d6) != '\0') {
    FUN_1409e4f80(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1d8) != '\0') {
    FUN_1409e5330(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1e6) != '\0') {
    FUN_1409e46c0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x1dc) != '\0') {
    FUN_1409e4dd0(param_1,1);
  }
LAB_1409dbab4:
  FUN_142c76580(param_1);
  return;
}



// FUNCTION 1409dbad0 FUN_1409dbad0 body=695 status=ok
// SIG undefined FUN_1409dbad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409dbad0(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  uint uStack_5c;
  undefined1 local_58 [80];
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_78 = _DAT_1468b5d90;
    fStack_70 = DAT_1468b5d98;
  }
  else {
    local_78 = *(undefined8 *)(lVar1 + 0x220);
    fStack_70 = *(float *)(lVar1 + 0x228);
  }
  fVar14 = fStack_70;
  uVar8 = local_78;
  local_80 = fStack_70;
  lVar1 = *(longlong *)(param_3 + 0x168);
  local_88 = local_78;
  if (lVar1 == 0) {
    local_78 = _DAT_1468b5d90;
    fStack_70 = DAT_1468b5d98;
  }
  else {
    local_78 = *(undefined8 *)(lVar1 + 0x220);
    fStack_70 = *(float *)(lVar1 + 0x228);
  }
  fStack_60 = fStack_70;
  local_88._0_4_ = (float)uVar8;
  local_68 = local_78;
  local_88._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
  fStack_70 = fStack_70 - fVar14;
  local_78 = CONCAT44((float)((ulonglong)local_78 >> 0x20) - local_88._4_4_,
                      (float)local_78 - (float)local_88);
  local_88 = uVar8;
  uVar8 = FRotationMatrix::MakeFromX(local_58,&local_78);
  uVar6 = FMatrix::Rotator(uVar8,&local_88);
  lVar1 = *(longlong *)(param_1 + 0x168);
  fVar14 = DAT_1468b5da8;
  uVar8 = DAT_1468b5da0;
  if (lVar1 != 0) {
    fVar14 = *(float *)(lVar1 + 0x210);
    local_78 = *(undefined8 *)(lVar1 + 0x210);
    fStack_70 = *(float *)(lVar1 + 0x218);
    fStack_6c = *(float *)(lVar1 + 0x21c);
    auVar11._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
    auVar11._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar14);
    auVar11._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_70);
    auVar11._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_6c);
    iVar7 = movmskps(uVar6,auVar11);
    if (iVar7 != 0) {
      *(float *)(lVar1 + 0x250) = fVar14;
      *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
      *(float *)(lVar1 + 600) = fStack_70;
      *(float *)(lVar1 + 0x25c) = fStack_6c;
      puVar9 = (undefined8 *)FQuat::Rotator(&local_78,&local_68);
      *(undefined8 *)(lVar1 + 0x260) = *puVar9;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar9 + 1);
    }
    fVar14 = *(float *)(lVar1 + 0x268);
    uVar8 = *(undefined8 *)(lVar1 + 0x260);
  }
  fVar13 = (float)local_88 - (float)uVar8;
  fVar12 = local_88._4_4_ - (float)((ulonglong)uVar8 >> 0x20);
  fVar2 = (float)DAT_146864d80;
  fVar3 = DAT_146864d80._4_4_;
  fVar4 = DAT_146864d80._8_4_;
  fVar5 = DAT_146864d80._12_4_;
  auVar10._4_4_ = fVar12;
  auVar10._0_4_ = fVar13;
  auVar10._8_4_ = local_80 - fVar14;
  auVar10._12_4_ = 0;
  auVar11 = divps(auVar10,_DAT_146864d80);
  fVar13 = fVar13 - (float)(int)auVar11._0_4_ * fVar2;
  fVar12 = fVar12 - (float)(int)auVar11._4_4_ * fVar3;
  fVar14 = (local_80 - fVar14) - (float)(int)auVar11._8_4_ * fVar4;
  fVar15 = 0.0 - (float)(int)auVar11._12_4_ * fVar5;
  local_68._0_4_ =
       (float)(((uint)(fVar13 + fVar2) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
              (uint)(fVar13 + fVar2));
  local_68._4_4_ =
       (float)(((uint)(fVar12 + fVar3) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
              (uint)(fVar12 + fVar3));
  fStack_60 = (float)(((uint)(fVar14 + fVar4) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                     (uint)(fVar14 + fVar4));
  fVar14 = (float)(((uint)(fVar15 + fVar5) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                  (uint)(fVar15 + fVar5));
  local_68._0_4_ =
       (float)(((uint)((float)local_68 - fVar2) ^ (uint)(float)local_68) &
               -(uint)(_DAT_146864d70 < (float)local_68) ^ (uint)(float)local_68);
  local_68._4_4_ =
       (float)(((uint)(local_68._4_4_ - fVar3) ^ (uint)local_68._4_4_) &
               -(uint)(fRam0000000146864d74 < local_68._4_4_) ^ (uint)local_68._4_4_);
  fStack_60 = (float)(((uint)(fStack_60 - fVar4) ^ (uint)fStack_60) &
                      -(uint)(fRam0000000146864d78 < fStack_60) ^ (uint)fStack_60);
  uStack_5c = ((uint)(fVar14 - fVar5) ^ (uint)fVar14) & -(uint)(fRam0000000146864d7c < fVar14) ^
              (uint)fVar14;
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x468),1);
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x460),1);
  AActor::SetActorTickEnabled(param_1,1);
  if (ABS(param_2) <= 1e-08) {
    param_2 = 1e-08;
  }
  *(float *)(param_1 + 0x47c) = param_2;
  *(ulonglong *)(param_1 + 0x470) = CONCAT44(local_68._4_4_ / param_2,(float)local_68 / param_2);
  *(float *)(param_1 + 0x478) = fStack_60 / param_2;
  return;
}



// FUNCTION 1409dbd90 FUN_1409dbd90 body=244 status=ok
// SIG undefined FUN_1409dbd90(void)

longlong * FUN_1409dbd90(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_48 [64];
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar9 = (undefined8 *)FUN_142c625b0(local_48,&DAT_1468651c8,param_2);
  iVar3 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar3);
  }
  uVar8 = puVar9[1];
  lVar4 = *param_1;
  lVar10 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar10 + lVar4) = *puVar9;
  ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
  uVar8 = puVar9[3];
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
  *puVar1 = puVar9[2];
  puVar1[1] = uVar8;
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x24);
  uVar6 = *(undefined4 *)(puVar9 + 5);
  uVar7 = *(undefined4 *)((longlong)puVar9 + 0x2c);
  puVar2 = (undefined4 *)(lVar10 + 0x20 + lVar4);
  *puVar2 = *(undefined4 *)(puVar9 + 4);
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
  puVar9 = (undefined8 *)FUN_142c62570(local_48,&DAT_1468651d0,param_3);
  iVar3 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar3);
  }
  lVar4 = *param_1;
  uVar8 = puVar9[1];
  lVar10 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar10 + lVar4) = *puVar9;
  ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
  uVar8 = puVar9[3];
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
  *puVar1 = puVar9[2];
  puVar1[1] = uVar8;
  uVar8 = puVar9[5];
  puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar4);
  *puVar1 = puVar9[4];
  puVar1[1] = uVar8;
  *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
  return param_1;
}



// FUNCTION 1409dbe90 FUN_1409dbe90 body=85 status=ok
// SIG undefined FUN_1409dbe90(void)

void FUN_1409dbe90(longlong *param_1)

{
  if (param_1[0x4c] != 0) {
    FUN_14223e980(param_1[0x4c],1);
    (**(code **)(*(longlong *)param_1[0x4c] + 0x6d0))((longlong *)param_1[0x4c],0);
    param_1[0x4c] = 0;
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  ASBZCharacter::OnEquipDone(param_1);
  return;
}



// FUNCTION 1409dbf10 FUN_1409dbf10 body=561 status=ok
// SIG undefined FUN_1409dbf10(void)

void FUN_1409dbf10(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 local_res8 [8];
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  lVar3 = *(longlong *)(param_1 + 2000);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x510);
    iVar2 = *(int *)(lVar3 + 0x538);
    puStack_48 = (uint *)(lVar3 + 0x520);
    local_98 = 0;
    uStack_94 = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    if (iVar2 != 0) {
      puVar12 = *(uint **)(lVar3 + 0x530);
      if (*(uint **)(lVar3 + 0x530) == (uint *)0x0) {
        puVar12 = puStack_48;
      }
      uVar11 = *puVar12;
      uStack_80 = 0;
      local_98 = 0;
      while (uVar11 == 0) {
        lVar10 = (longlong)(int)local_98;
        uStack_80 = uStack_80 + 0x20;
        uVar11 = local_98 + 1;
        bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
        local_98 = uVar11;
        if (bVar4) goto LAB_1409dbfed;
        uVar11 = puVar12[lVar10 + 1];
      }
      uStack_94 = -uVar11 & uVar11;
      iVar5 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_88._4_4_ = (uStack_80 - iVar5) + 0x1f;
      if (iVar2 < local_88._4_4_) {
LAB_1409dbfed:
        local_88._4_4_ = iVar2;
      }
    }
    auStack_40._4_4_ = local_88._4_4_;
    auStack_40._0_4_ = 0xffffffff;
    auStack_40._8_4_ = uStack_80;
    auStack_40._12_4_ = iStack_7c;
    uStack_50 = local_98;
    uStack_4c = uStack_94;
    local_60 = 0;
    local_30._0_4_ = SUB84(plVar1,0);
    local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_80 = 0xffffffff;
    iStack_7c = local_88._4_4_;
    uStack_90 = local_98;
    uStack_8c = uStack_94;
    local_78._8_4_ = (undefined4)local_30;
    local_78._0_8_ = auStack_40._8_8_;
    local_78._12_4_ = local_30._4_4_;
    bVar4 = local_88._4_4_ < *(int *)(lVar3 + 0x538);
    local_68 = plVar1;
    local_58 = plVar1;
    local_30 = plVar1;
    local_88 = puStack_48;
    if (bVar4) {
      do {
        lVar10 = (longlong)iStack_7c * 0x40;
        lVar3 = *(longlong *)(*(longlong *)(lVar10 + *plVar1) + 0x10);
        if (param_2 != 0) {
          lVar6 = FUN_1414bf1a0();
          lVar9 = param_2;
          do {
            lVar7 = param_2;
            if (lVar9 == lVar6) goto LAB_1409dc097;
            lVar9 = *(longlong *)(lVar9 + 0x30);
          } while (lVar9 != 0);
        }
        lVar7 = 0;
LAB_1409dc097:
        if (lVar3 == lVar7) {
          plVar8 = (longlong *)
                   TBaseUObjectMethodDelegateInstance<1,UBorder,FSlateBrush_const_*___ptr64___cdecl(void),TAttribute<FSlateBrush>_>
                   ::GetHandle(*(undefined8 *)(lVar10 + *plVar1),local_res8);
          if (*plVar8 == param_3) {
            plVar8 = *(longlong **)(lVar10 + *plVar1);
            (**(code **)(*plVar8 + 0x300))(plVar8,param_1 + 0x558,*plVar1 + 8 + lVar10,param_4);
          }
        }
        uStack_80 = uStack_80 & ~uStack_8c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while (iStack_7c < (int)local_88[6]);
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 1409dc150 FUN_1409dc150 body=18 status=ok
// SIG undefined FUN_1409dc150(void)

undefined1 FUN_1409dc150(longlong param_1)

{
  if ((*(int *)(param_1 + 0x40) < 1) && (*(int *)(param_1 + 0x50) < 1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1409dc170 FUN_1409dc170 body=1152 status=ok
// SIG undefined FUN_1409dc170(void)

byte FUN_1409dc170(longlong param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char local_res18 [8];
  undefined8 local_38 [2];
  
  bVar3 = FUN_142c79030();
  param_3 = (longlong *)*param_3;
  bVar3 = bVar3 & 1;
  if (param_3 != (longlong *)0x0) {
    if (*param_2 == '\0') {
      plVar4 = (longlong *)param_3[1];
      local_res18[0] = *(char *)(param_1 + 0x468);
      if ((char *)*plVar4 + 1 <= (char *)plVar4[1]) {
        local_res18[0] = *(char *)*plVar4;
        *plVar4 = *plVar4 + 1;
        FUN_1406da970(param_3,param_1 + 0x46c);
        return bVar3;
      }
      (**(code **)(*param_3 + 0x50))(param_3,local_res18,1);
      FUN_1406da970(param_3,param_1 + 0x46c);
      return bVar3;
    }
    if (*param_2 != '\x01') {
      return bVar3;
    }
    lVar6 = *(longlong *)(param_2 + 0x28);
    if (lVar6 == 0) {
      return bVar3;
    }
    local_res18[0] = *(char *)(param_1 + 0x468);
    if (local_res18[0] != *(char *)(lVar6 + 0x88)) {
      FUN_142c881e0(param_3,0x11,param_2);
      plVar4 = (longlong *)param_3[1];
      if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,local_res18,1);
      }
      else {
        local_res18[0] = *(char *)*plVar4;
        *plVar4 = *plVar4 + 1;
      }
    }
    if (((*(float *)(lVar6 + 0x8c) == *(float *)(param_1 + 0x46c)) &&
        (*(float *)(lVar6 + 0x90) == *(float *)(param_1 + 0x470))) &&
       (*(float *)(lVar6 + 0x94) == *(float *)(param_1 + 0x474))) {
      return bVar3;
    }
    FUN_142c881e0(param_3,0x12,param_2);
    FUN_1406da970(param_3,param_1 + 0x46c);
    return bVar3;
  }
  if (param_4 == (longlong *)0x0) {
    return bVar3;
  }
  if (*param_2 != '\0') {
    if (*param_2 != '\x01') {
      return bVar3;
    }
    if (param_2[1] == '\x11') {
      plVar4 = (longlong *)param_4[1];
      if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
        (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
      }
      else {
        local_res18[0] = *(char *)*plVar4;
        *plVar4 = *plVar4 + 1;
      }
      *(char *)(param_1 + 0x468) = local_res18[0];
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        plVar4[1] = param_1;
        *plVar4 = (longlong)&DAT_143f3ed00;
        puVar5 = &LAB_1409df110;
        goto LAB_1409dc348;
      }
    }
    else {
      if (param_2[1] != '\x12') {
        return bVar3;
      }
      FUN_1406da970(param_4,param_1 + 0x46c);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        plVar4[1] = param_1;
        *plVar4 = (longlong)&DAT_143f3ed00;
        puVar5 = &LAB_1409df1e0;
LAB_1409dc348:
        plVar4[2] = (longlong)puVar5;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar6;
        *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
    }
    iVar2 = *(int *)(param_2 + 0x38);
    *(int *)(param_2 + 0x38) = iVar2 + 1;
    if (*(int *)(param_2 + 0x3c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x30));
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 1) = 0;
    if (local_38 != puVar7) {
      if (plVar4 == (longlong *)0x0) {
        return bVar3;
      }
      (**(code **)(*plVar4 + 0x30))(plVar4);
    }
    if (plVar4 == (longlong *)0x0) {
      return bVar3;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    goto LAB_1409dc5b7;
  }
  plVar4 = (longlong *)param_4[1];
  if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
    (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
  }
  else {
    local_res18[0] = *(char *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  *(char *)(param_1 + 0x468) = local_res18[0];
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[1] = param_1;
    plVar4[2] = (longlong)&LAB_1409df110;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  plVar1 = (longlong *)(param_2 + 0x30);
  iVar2 = *(int *)(param_2 + 0x38);
  *(int *)(param_2 + 0x38) = iVar2 + 1;
  if (*(int *)(param_2 + 0x3c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0;
  if (local_38 == puVar7) {
LAB_1409dc4f7:
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar6 = FMemory::Realloc(plVar4,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  else if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4);
    goto LAB_1409dc4f7;
  }
  FUN_1406da970(param_4,param_1 + 0x46c);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[1] = param_1;
    plVar4[2] = (longlong)&LAB_1409df1e0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  iVar2 = *(int *)(param_2 + 0x38);
  *(int *)(param_2 + 0x38) = iVar2 + 1;
  if (*(int *)(param_2 + 0x3c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0;
  if (local_38 != puVar7) {
    if (plVar4 == (longlong *)0x0) {
      return bVar3;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4);
  }
  if (plVar4 == (longlong *)0x0) {
    return bVar3;
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,0);
LAB_1409dc5b7:
  lVar6 = FMemory::Realloc(plVar4,0,0);
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  return bVar3;
}



// FUNCTION 1409dc5f0 FUN_1409dc5f0 body=757 status=ok
// SIG undefined FUN_1409dc5f0(void)

byte FUN_1409dc5f0(longlong param_1,char *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 local_18 [2];
  
  bVar2 = FUN_1406f09b0();
  param_3 = (longlong *)*param_3;
  bVar2 = bVar2 & 1;
  if (param_3 == (longlong *)0x0) {
    if (param_4 != 0) {
      if (*param_2 == '\0') {
        bVar6 = false;
        if (-1 < *(char *)(param_4 + 0x28)) {
          lVar4 = *(longlong *)(param_4 + 0xa8);
          if (lVar4 < *(longlong *)(param_4 + 0xa0)) {
            bVar6 = (*(byte *)((longlong)(int)(lVar4 >> 3) + *(longlong *)(param_4 + 0x90)) &
                    '\x01' << ((byte)lVar4 & 7)) != 0;
            *(longlong *)(param_4 + 0xa8) = lVar4 + 1;
          }
          else {
            FUN_1416952d0(param_4,1);
          }
        }
        *(bool *)(param_1 + 0x560) = bVar6;
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar3[1] = param_1;
          *plVar3 = (longlong)&DAT_143f3ed00;
          plVar3[2] = (longlong)&LAB_1409df170;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar3[4] = lVar4;
          *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        iVar1 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar1 + 1;
        if (*(int *)(param_2 + 0x3c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar1);
        }
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x30));
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        if (local_18 != puVar5) {
          if (plVar3 == (longlong *)0x0) {
            return bVar2;
          }
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
        if (plVar3 == (longlong *)0x0) {
          return bVar2;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
      }
      else {
        if (*param_2 != '\x01') {
          return bVar2;
        }
        if (param_2[1] != '\r') {
          return bVar2;
        }
        bVar6 = false;
        if (-1 < *(char *)(param_4 + 0x28)) {
          lVar4 = *(longlong *)(param_4 + 0xa8);
          if (lVar4 < *(longlong *)(param_4 + 0xa0)) {
            bVar6 = (*(byte *)((longlong)(int)(lVar4 >> 3) + *(longlong *)(param_4 + 0x90)) &
                    '\x01' << ((byte)lVar4 & 7)) != 0;
            *(longlong *)(param_4 + 0xa8) = lVar4 + 1;
          }
          else {
            FUN_1416952d0(param_4,1);
          }
        }
        *(bool *)(param_1 + 0x560) = bVar6;
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar3[1] = param_1;
          *plVar3 = (longlong)&DAT_143f3ed00;
          plVar3[2] = (longlong)&LAB_1409df170;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar3[4] = lVar4;
          *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        iVar1 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar1 + 1;
        if (*(int *)(param_2 + 0x3c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar1);
        }
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x30));
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        if (local_18 != puVar5) {
          if (plVar3 == (longlong *)0x0) {
            return bVar2;
          }
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
        if (plVar3 == (longlong *)0x0) {
          return bVar2;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
      }
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  else if (*param_2 == '\0') {
    (**(code **)(*param_3 + 8))(param_3,param_1 + 0x560);
  }
  else if (((*param_2 == '\x01') && (*(longlong *)(param_2 + 0x28) != 0)) &&
          (*(char *)(*(longlong *)(param_2 + 0x28) + 0x65) != *(char *)(param_1 + 0x560))) {
    FUN_142c881e0(param_3,0xd,param_2);
    FBitWriter::WriteBit(param_3,*(undefined1 *)(param_1 + 0x560));
  }
  return bVar2;
}



// FUNCTION 1409dc8f0 FUN_1409dc8f0 body=243 status=ok
// SIG undefined FUN_1409dc8f0(void)

void FUN_1409dc8f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int local_res8 [2];
  undefined8 local_res18;
  undefined1 local_28 [8];
  undefined8 *local_20;
  int *local_18;
  
  local_res18 = param_3;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xc50,local_res8);
  piVar5 = (int *)0x0;
  piVar4 = piVar5;
  if (local_res8[0] != -1) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0xc50) + (longlong)local_res8[0] * 0x18);
  }
  piVar2 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar2 = piVar5;
  }
  if (piVar2 == (int *)0x0) {
    local_20 = &local_res18;
    local_res8[0] = 1;
    local_18 = local_res8;
    FUN_1409bf4b0(param_1 + 0xc50,local_28,&local_20,0);
    lVar3 = FUN_1409d7110(param_1);
    if (lVar3 != 0) {
      lVar3 = FUN_1409d7110(param_1);
      piVar5 = *(int **)(lVar3 + 0x908);
    }
    if ((piVar5 != (int *)0x0) && (iVar1 = FUN_142dec940(piVar5,local_res18), iVar1 == 2)) {
      FUN_14141b700(param_1,local_res18);
      return;
    }
  }
  else {
    *piVar2 = *piVar2 + 1;
  }
  return;
}



// FUNCTION 1409dc9f0 FUN_1409dc9f0 body=302 status=ok
// SIG undefined FUN_1409dc9f0(void)

void FUN_1409dc9f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 *local_18;
  int *local_10;
  
  local_res18 = param_3;
  if (param_2 == *(longlong *)(param_1 + 0x758)) {
    FUN_1409e5000();
  }
  if (param_2 != *(longlong *)(param_1 + 0x768)) {
    return;
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x958,local_res8,local_res18);
  if (((local_res8[0] != -1) &&
      (lVar5 = *(longlong *)(param_1 + 0x958) + (longlong)local_res8[0] * 0x18, lVar5 != 0)) &&
     (piVar3 = (int *)(lVar5 + 8), piVar3 != (int *)0x0)) {
    *piVar3 = *piVar3 + 1;
    return;
  }
  local_18 = &local_res18;
  local_res8[0] = 1;
  local_10 = local_res8;
  FUN_1409bf4b0(param_1 + 0x958,local_res10,&local_18,0);
  if ((*(byte *)(param_1 + 0x800) & 0x20) == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x150);
  if (lVar5 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = *(longlong *)(lVar5 + 0x908);
      goto LAB_1409dcaf2;
    }
  }
  lVar5 = 0;
LAB_1409dcaf2:
  if ((lVar5 != 0) && (iVar2 = FUN_142dec940(lVar5,local_res18), iVar2 == 2)) {
    FUN_14149e460(param_1,local_res18);
  }
  return;
}



// FUNCTION 1409dcb20 FUN_1409dcb20 body=107 status=ok
// SIG undefined FUN_1409dcb20(void)

void FUN_1409dcb20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0xc50);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8);
  piVar3 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar3 = (int *)(*plVar1 + (longlong)local_res8[0] * 0x18);
  }
  piVar2 = piVar3 + 2;
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(plVar1,param_3);
  }
  return;
}



// FUNCTION 1409dcb90 FUN_1409dcb90 body=154 status=ok
// SIG undefined FUN_1409dcb90(void)

void FUN_1409dcb90(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int local_res8 [2];
  
  if (param_2 == *(longlong *)(param_1 + 0x758)) {
    FUN_1409e5000();
  }
  if (param_2 == *(longlong *)(param_1 + 0x768)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x958,local_res8);
    piVar2 = (int *)0x0;
    if (local_res8[0] != -1) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x958) + (longlong)local_res8[0] * 0x18);
    }
    piVar1 = piVar2 + 2;
    if (piVar2 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x958,param_3);
    }
  }
  return;
}



// FUNCTION 1409dcc30 FUN_1409dcc30 body=135 status=ok
// SIG undefined FUN_1409dcc30(void)

void FUN_1409dcc30(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14222e2a0();
  if (lVar2 != 0) {
    lVar2 = FUN_1413f82e0();
    lVar3 = FUN_14222e2a0(param_1);
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
      FUN_1422279d0(param_1,&DAT_146532190);
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1409dccc0 FUN_1409dccc0 body=46 status=ok
// SIG undefined FUN_1409dccc0(void)

void FUN_1409dccc0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4e] = 0;
  (**(code **)(*param_1 + 0x260))();
  FUN_1409af740(param_1);
  return;
}



// FUNCTION 1409dccf0 FUN_1409dccf0 body=27 status=ok
// SIG undefined FUN_1409dccf0(void)

void FUN_1409dccf0(undefined8 param_1)

{
  FUN_1409af950();
  FUN_1409d4480(param_1);
  return;
}



// FUNCTION 1409dcd10 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_1409e2590(param_1);
  return;
}



// FUNCTION 1409dcd30 FUN_1409dcd30 body=391 status=ok
// SIG undefined FUN_1409dcd30(void)

void FUN_1409dcd30(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x598);
    lVar8 = 0;
    *(undefined8 *)(param_1 + 0x598) = 0;
    lVar6 = *(longlong *)(param_1 + 0x560);
    lVar7 = (longlong)*(int *)(param_1 + 0x568) * 0x68 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x68) {
      (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x280))(*(longlong **)(lVar6 + 0x18),0);
      FUN_142398ec0(*(undefined8 *)(lVar6 + 0x28),0,2);
      lVar4 = *(longlong *)(lVar6 + 8);
      lVar5 = (longlong)*(int *)(lVar6 + 0x10) * 0x70 + lVar4;
      for (; lVar4 != lVar5; lVar4 = lVar4 + 0x70) {
        FUN_1409eab60(param_1,lVar4);
        FUN_1409e81e0(param_1,lVar6,lVar4);
      }
      FUN_1405ac9d0(*(undefined8 *)(lVar6 + 0x30));
      FUN_1405ac8f0(lVar6 + 0x50,0,4);
    }
    FUN_1409e0bf0(param_1);
    if (*(longlong *)(param_1 + 0x578) != 0) {
      FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x590);
      *(undefined8 *)(param_1 + 0x590) = 0;
      lVar6 = *(longlong *)(param_1 + 0x5a0);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x94) & 2) == 0)) {
        iVar1 = *(int *)(lVar6 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar3 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar3;
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar3) * 0x18;
        }
        if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
          FUN_1409dddd0(lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409dcec0 FUN_1409dcec0 body=202 status=ok
// SIG undefined FUN_1409dcec0(void)

void FUN_1409dcec0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x5f0);
  lVar4 = (longlong)*(int *)(param_1 + 0x5f8) * 0x68 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x68) {
    (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x280))(*(longlong **)(lVar3 + 0x18),0);
    FUN_142398ec0(*(undefined8 *)(lVar3 + 0x28),0,2);
    lVar1 = *(longlong *)(lVar3 + 8);
    lVar2 = (longlong)*(int *)(lVar3 + 0x10) * 0x68 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x68) {
      FUN_1409ead30(param_1,lVar1);
    }
    FUN_1405ac8f0(lVar3 + 0x50,0,4);
    FUN_1409e8d70(param_1);
  }
  FUN_1409e0dc0(param_1);
  return;
}



// FUNCTION 1409dcf90 FUN_1409dcf90 body=146 status=ok
// SIG undefined FUN_1409dcf90(void)

void FUN_1409dcf90(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_3 + 0x40);
    *(undefined8 *)(param_3 + 0x40) = 0;
    FUN_142398ec0(*(undefined8 *)(param_3 + 0x10),0,2);
    FUN_1409eab60(param_1,param_3);
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x288))();
    FUN_1405ac8f0(param_2 + 0x50,0,4);
    FUN_1409e81e0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1409dd030 FUN_1409dd030 body=106 status=ok
// SIG undefined FUN_1409dd030(void)

void FUN_1409dd030(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_142398ec0(*(undefined8 *)(param_3 + 8),0,2);
  FUN_1409ead30(param_1,param_3);
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x288))();
  FUN_1405ac8f0(param_2 + 0x50,0,4);
  FUN_1409e8570(param_1,param_2,param_3);
  return;
}



// FUNCTION 1409dd0a0 FUN_1409dd0a0 body=489 status=ok
// SIG undefined FUN_1409dd0a0(void)

void FUN_1409dd0a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
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
  
  lVar4 = *(longlong *)(param_1 + 2000);
  if (lVar4 != 0) {
    plVar1 = (longlong *)(lVar4 + 0x510);
    iVar2 = *(int *)(lVar4 + 0x538);
    puStack_28 = (uint *)(lVar4 + 0x520);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)(lVar4 + 0x530);
      if (*(uint **)(lVar4 + 0x530) == (uint *)0x0) {
        puVar8 = puStack_28;
      }
      uVar3 = *puVar8;
      local_78 = 0;
      uStack_60 = 0;
      while (uVar3 == 0) {
        lVar7 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar9 = local_78 + 1;
        bVar6 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar9;
        if (bVar6) goto LAB_1409dd18d;
        uVar3 = puVar8[lVar7 + 1];
      }
      uStack_74 = -uVar3 & uVar3;
      iVar9 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_68._4_4_ = (uStack_60 - iVar9) + 0x1f;
      if (iVar2 < local_68._4_4_) {
LAB_1409dd18d:
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
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    iStack_70 = local_78;
    uStack_6c = uStack_74;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar6 = local_68._4_4_ < *(int *)(lVar4 + 0x538);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    local_68 = puStack_28;
    if (bVar6) {
      do {
        plVar5 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar1);
        (**(code **)(*plVar5 + 0x2e8))
                  (plVar5,param_1 + 0x558,*plVar1 + 8 + (longlong)iStack_5c * 0x40,param_2,param_3);
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 1409dd290 FUN_1409dd290 body=477 status=ok
// SIG undefined FUN_1409dd290(void)

void FUN_1409dd290(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  lVar3 = *(longlong *)(param_1 + 2000);
  local_68 = (uint *)CONCAT44(local_68._4_4_,(undefined4)local_68);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x510);
    iVar2 = *(int *)(lVar3 + 0x538);
    puStack_28 = (uint *)(lVar3 + 0x520);
    local_78 = 0x100000000;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)(lVar3 + 0x530);
      if (*(uint **)(lVar3 + 0x530) == (uint *)0x0) {
        puVar9 = puStack_28;
      }
      uVar7 = *puVar9;
      iVar8 = 0;
      uStack_60 = 0;
      while (uVar7 == 0) {
        uStack_60 = uStack_60 + 0x20;
        uVar6 = (ulonglong)local_78 >> 0x20;
        local_78 = CONCAT44((int)uVar6,iVar8 + 1);
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1409dd36d;
        uVar7 = puVar9[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar8 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      local_78 = CONCAT44(uVar7,(undefined4)local_78);
      if (uVar7 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      local_68._4_4_ = (uStack_60 - iVar8) + 0x1f;
      if (iVar2 < local_68._4_4_) {
LAB_1409dd36d:
        local_68._4_4_ = iVar2;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = local_78;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    uStack_70 = local_78;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar5 = local_68._4_4_ < *(int *)(lVar3 + 0x538);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    local_68 = puStack_28;
    if (bVar5) {
      do {
        plVar4 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar1);
        (**(code **)(*plVar4 + 0x2e0))
                  (plVar4,param_1 + 0x558,*plVar1 + 8 + (longlong)iStack_5c * 0x40,param_2);
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x800) & 2) != 0) {
    FUN_1409ed1e0(param_1);
  }
  return;
}



// FUNCTION 1409dd470 FUN_1409dd470 body=368 status=ok
// SIG undefined FUN_1409dd470(void)

void FUN_1409dd470(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  plVar3 = (longlong *)param_2[1];
  lVar8 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (((lVar8 != 0) && (*(int *)(lVar8 + 0x30) == *(int *)(param_1 + 0xcc8))) &&
     (*(longlong *)(param_1 + 0xcc0) != 0)) {
    plVar6 = (longlong *)FUN_142be4ff0(lVar8,0);
    plVar4 = *(longlong **)(param_1 + 0xcc0);
    cVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (cVar5 == '\0') {
      if (plVar6 != (longlong *)0x0) {
        plVar4[2] = (longlong)plVar6;
        uVar7 = UScrollBox::GetPrivateStaticClass();
        lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
        plVar4[3] = lVar8;
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
      cVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (cVar5 == '\0') {
        plVar4[2] = 0;
        plVar4[3] = 0;
        FUN_143059e20(plVar4[1],plVar4[0x1e]);
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      else {
        (**(code **)(*plVar4 + 0x38))(plVar4);
        *(byte *)(plVar4 + 0x1b) = *(byte *)(plVar4 + 0x1b) | 1;
      }
    }
  }
  *(undefined8 *)(param_1 + 0xcc0) = 0;
  *(undefined4 *)(param_1 + 0xcc8) = 0xffffffff;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 1409dd5e0 FUN_1409dd5e0 body=371 status=ok
// SIG undefined FUN_1409dd5e0(void)

void FUN_1409dd5e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  int local_res18 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 *local_20;
  int *local_18;
  
  if (param_3 != (longlong *)0x0) {
    FWeakObjectPtr::operator=(&local_30,param_3);
    local_38 = local_30;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x5b0,local_res18,&local_38);
    if (((local_res18[0] == -1) ||
        (lVar4 = *(longlong *)(param_1 + 0x5b0) + (longlong)local_res18[0] * 0x14, lVar4 == 0)) ||
       (piVar5 = (int *)(lVar4 + 8), piVar5 == (int *)0x0)) {
      local_res18[0] = 1;
      FWeakObjectPtr::operator=(local_28,param_3);
      local_20 = local_28;
      local_18 = local_res18;
      FUN_1409bf210(param_1 + 0x5b0,&local_38,&local_20,0);
      piVar5 = (int *)(*(longlong *)(param_1 + 0x5b0) + ((longlong)(int)local_38 * 5 + 2) * 4);
    }
    if (*piVar5 == 1) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(param_1 + 0x4c0) != 0)) {
        if (param_3[0x121] == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(param_3[0x121] + 0x180);
        }
        iVar3 = FUN_142dec980(*(longlong *)(param_1 + 0x4c0),uVar6);
        if ((iVar3 == 2) && (cVar2 = (**(code **)(*param_3 + 0x950))(param_3), cVar2 == '\0')) {
          FUN_1409c8840(param_1,param_3);
          return;
        }
      }
    }
    else {
      *piVar5 = *piVar5 + 1;
    }
  }
  return;
}



// FUNCTION 1409dd760 FUN_1409dd760 body=508 status=ok
// SIG undefined FUN_1409dd760(void)

void FUN_1409dd760(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  
  if ((param_2 == 0) || (lVar8 = *(longlong *)(param_2 + 0x50), lVar8 == 0)) {
    return;
  }
  lVar4 = FUN_142e0d0b0();
  while (lVar8 != lVar4) {
    lVar8 = *(longlong *)(lVar8 + 0x30);
    if (lVar8 == 0) {
      return;
    }
  }
  lVar8 = 0;
  lVar4 = lVar8;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    lVar5 = FUN_142e0d0b0();
    for (lVar9 = *(longlong *)(param_1 + 0x280);
        (lVar4 = lVar8, lVar9 != 0 && (lVar4 = *(longlong *)(param_1 + 0x280), lVar9 != lVar5));
        lVar9 = *(longlong *)(lVar9 + 0x30)) {
    }
  }
  lVar9 = *(longlong *)(param_2 + 0x50);
  lVar5 = lVar8;
  if (lVar9 != 0) {
    lVar6 = FUN_142e0d0b0();
    lVar7 = lVar9;
    do {
      lVar5 = lVar9;
      if (lVar7 == lVar6) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar5 = lVar8;
    } while (lVar7 != 0);
  }
  while( true ) {
    if (lVar5 == 0) {
      return;
    }
    if (lVar5 == lVar4) break;
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    return;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x2b0) + 0x128) >>
       (*(byte *)(*(longlong *)(param_1 + 0x2b8) + 0xa0) & 0x1f) & 1) == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x2b0) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
  }
  if (lVar8 == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x2d8);
  lVar9 = *plVar1;
  lVar4 = lVar9 + (longlong)*(int *)(param_1 + 0x2e0) * 8;
  while( true ) {
    if (lVar9 == lVar4) {
      FWeakObjectPtr::operator=(&local_res10,lVar8);
      iVar2 = *(int *)(param_1 + 0x2e0);
      *(int *)(param_1 + 0x2e0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      lVar4 = *plVar1;
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 8) = local_res10;
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar2 * 8) = local_res14;
      local_40 = *(undefined8 *)(param_1 + 0x2b0);
      uStack_38 = *(undefined8 *)(param_1 + 0x2b8);
      local_48[0] = 0x3e;
      local_30 = *(undefined8 *)(param_1 + 0x2c0);
      local_20 = *(undefined4 *)(param_2 + 0x1d8);
      local_28 = lVar8;
      FUN_1409ed640(param_1,local_48);
      return;
    }
    cVar3 = FUN_14058c1e0(lVar9,lVar8);
    if (cVar3 != '\0') break;
    lVar9 = lVar9 + 8;
  }
  return;
}



// FUNCTION 1409dd960 FUN_1409dd960 body=497 status=ok
// SIG undefined FUN_1409dd960(void)

/* WARNING: Removing unreachable block (ram,0x0001409ddb2f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409dd960(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 local_70 [56];
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x50);
    lVar6 = 0;
    lVar4 = lVar6;
    if (lVar3 != 0) {
      lVar2 = FUN_142e0d0b0();
      lVar5 = lVar3;
      do {
        lVar4 = lVar3;
        if (lVar5 == lVar2) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar4 = lVar6;
      } while (lVar5 != 0);
    }
    lVar3 = lVar6;
    if (*(longlong *)(param_1 + 0x790) != 0) {
      lVar2 = FUN_142e0d0b0();
      for (lVar5 = *(longlong *)(param_1 + 0x790);
          (lVar3 = lVar6, lVar5 != 0 && (lVar3 = *(longlong *)(param_1 + 0x790), lVar5 != lVar2));
          lVar5 = *(longlong *)(lVar5 + 0x30)) {
      }
    }
    if (lVar4 == lVar3) {
      fVar9 = 0.0;
      FUN_142c8c260(local_70,0x3f800000);
      local_38 = 0xff;
      local_30 = 0;
      local_28 = 0;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
         (*(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x30) != 0)) {
        fVar9 = (float)FUN_142d19d70(param_2);
      }
      uVar7 = (undefined4)_DAT_1468b5d90;
      uVar8 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
      uVar1 = DAT_1468b5d98;
      if (((*(longlong *)(param_2 + 0x2b0) != 0) &&
          (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118), lVar3 != 0)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x168), lVar3 != 0)) {
        uVar7 = *(undefined4 *)(lVar3 + 0x220);
        uVar8 = *(undefined4 *)(lVar3 + 0x224);
        uVar1 = *(undefined4 *)(lVar3 + 0x228);
      }
      *(float *)(param_1 + 0xbe4) = fVar9 + *(float *)(param_1 + 0xbe4);
      *(ulonglong *)(param_1 + 0xbd8) = CONCAT44(uVar8,uVar7);
      *(undefined4 *)(param_1 + 0xbe0) = uVar1;
    }
  }
  return;
}



// FUNCTION 1409ddb60 FUN_1409ddb60 body=203 status=ok
// SIG undefined FUN_1409ddb60(void)

void FUN_1409ddb60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0xac2) & 0x20) == 0)) {
    lVar3 = *(longlong *)(param_2 + 0x50);
    lVar5 = 0;
    lVar4 = lVar5;
    if (lVar3 != 0) {
      lVar1 = FUN_142e0d0b0();
      lVar2 = lVar3;
      do {
        lVar4 = lVar3;
        if (lVar2 == lVar1) break;
        lVar2 = *(longlong *)(lVar2 + 0x30);
        lVar4 = lVar5;
      } while (lVar2 != 0);
    }
    lVar3 = lVar5;
    if (*(longlong *)(param_1 + 0x798) != 0) {
      lVar1 = FUN_142e0d0b0();
      for (lVar2 = *(longlong *)(param_1 + 0x798);
          (lVar3 = lVar5, lVar2 != 0 && (lVar3 = *(longlong *)(param_1 + 0x798), lVar2 != lVar1));
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
      }
    }
    if (lVar4 == lVar3) {
      FUN_1409e54d0(param_1,0);
      if (*(longlong *)(param_2 + 0x2b0) != 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
      }
      FUN_14141c470(param_1,lVar5);
      *(byte *)(param_1 + 0xac2) = *(byte *)(param_1 + 0xac2) | 0x20;
    }
  }
  return;
}



// FUNCTION 1409ddc30 FUN_1409ddc30 body=38 status=ok
// SIG undefined FUN_1409ddc30(void)

void FUN_1409ddc30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x748);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_142397540(lVar1,*(undefined1 *)(param_2 + 0x30),2);
    return;
  }
  FUN_142397540(lVar1,0,2);
  return;
}



// FUNCTION 1409ddc80 FUN_1409ddc80 body=22 status=ok
// SIG undefined FUN_1409ddc80(void)

void FUN_1409ddc80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x808) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x808) + 0x78) = *(undefined4 *)(param_1 + 0x7dc);
  }
  return;
}



// FUNCTION 1409ddca0 FUN_1409ddca0 body=76 status=ok
// SIG undefined FUN_1409ddca0(void)

void FUN_1409ddca0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0xac1) != '\0')) {
    *(undefined1 *)((longlong)plVar1 + 0xac1) = 0;
    FUN_1409ef530(plVar1);
    (**(code **)(*plVar1 + 0x600))(plVar1);
  }
  FUN_1409d1300(param_1);
  return;
}



// FUNCTION 1409ddcf0 FUN_1409ddcf0 body=92 status=ok
// SIG undefined FUN_1409ddcf0(void)

void FUN_1409ddcf0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  cVar1 = FOpenXRHMD::IsStereoEnabled();
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x278) & 2) != 0)) {
    local_28 = *(undefined4 *)(param_1 + 0x1d8);
    uStack_24 = *(undefined4 *)(param_1 + 0x1dc);
    uStack_20 = *(undefined4 *)(param_1 + 0x1e0);
    uStack_1c = *(undefined4 *)(param_1 + 0x1e4);
    *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
    local_18 = *(undefined8 *)(param_1 + 0x1e8);
    uVar2 = FUN_1413e2590(param_1,*(undefined4 *)(param_1 + 0x288));
    FUN_142d55d50(&local_28,uVar2);
  }
  return;
}



// FUNCTION 1409ddd50 FUN_1409ddd50 body=115 status=ok
// SIG undefined FUN_1409ddd50(void)

void FUN_1409ddd50(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int local_res18 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_3 != 0) {
    FWeakObjectPtr::operator=(&local_18,param_3);
    local_10 = local_18;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x5b0,local_res18);
    piVar2 = (int *)0x0;
    if (local_res18[0] != -1) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x5b0) + (longlong)local_res18[0] * 0x14);
    }
    piVar1 = piVar2 + 2;
    if (piVar2 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}



// FUNCTION 1409dddd0 FUN_1409dddd0 body=207 status=ok
// SIG undefined FUN_1409dddd0(void)

void FUN_1409dddd0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x23a0,0);
  if (*(longlong *)(param_1 + 0x23b0) != 0) {
    uVar1 = FName::FName(local_res8,L"A9K_IsPerformingAnAction",1);
    UBlackboardComponent::SetValueAsBool(*(undefined8 *)(param_1 + 0x23b0),uVar1,0);
    uVar1 = FName::FName(local_res8,L"A9K_Phase1_FloorDone",1);
    UBlackboardComponent::SetValueAsBool(*(undefined8 *)(param_1 + 0x23b0),uVar1,1);
    uVar1 = FName::FName(local_res8,L"A9K_FloorB_Done",1);
    UBlackboardComponent::SetValueAsBool(*(undefined8 *)(param_1 + 0x23b0),uVar1,1);
    uVar1 = FName::FName(local_res8,L"A9K_FloorC_Done",1);
    UBlackboardComponent::SetValueAsBool(*(undefined8 *)(param_1 + 0x23b0),uVar1,1);
  }
  return;
}



// FUNCTION 1409ddea0 FUN_1409ddea0 body=92 status=ok
// SIG undefined FUN_1409ddea0(void)

void FUN_1409ddea0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x590);
    *(undefined8 *)(param_1 + 0x590) = 0;
    lVar1 = *(longlong *)(param_1 + 0x5a0);
    if ((lVar1 != 0) && (cVar2 = FUN_1407cd900(lVar1), cVar2 == '\0')) {
      FUN_1409dddd0(lVar1);
    }
  }
  return;
}



// FUNCTION 1409ddf00 FUN_1409ddf00 body=899 status=ok
// SIG undefined FUN_1409ddf00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409ddf00(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
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
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x588);
    *(undefined8 *)(param_1 + 0x588) = 0;
    iVar2 = *(int *)(param_1 + 0x558);
    iVar3 = *(int *)(param_1 + 0x5a8);
    iVar8 = (*(int *)(param_1 + 0x5ac) + iVar2 + *(int *)(param_1 + 0x5b0)) % iVar2;
    iVar5 = iVar3 + *(int *)(param_1 + 0x5b0);
    *(int *)(param_1 + 0x5b0) = iVar5;
    *(int *)(param_1 + 0x5b4) = iVar8;
    lVar9 = (longlong)iVar8 * 0x68 + *(longlong *)(param_1 + 0x550);
    if (*(longlong *)(param_1 + 0x578) != 0) {
      FUN_1409e5a60(param_1,lVar9,*(undefined4 *)(param_1 + 0x508));
      plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_1441bfe38;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        plVar6[2] = (longlong)FUN_1409df280;
        plVar6[3] = lVar9;
        *(bool *)(plVar6 + 4) = iVar5 == iVar3 * iVar2;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_1441bfe80;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x508);
      uVar4 = *(undefined8 *)(param_1 + 0x578);
      local_c8 = 0;
      local_c0 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_d0 = 0xbf800000;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_d8 = 0;
      FUN_142880850(uVar4,lVar9 + 0x48,&local_c8,uVar1);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar9 = FMemory::Realloc(plVar6,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
    }
    if (*(int *)(param_1 + 0x5b0) != *(int *)(param_1 + 0x5a8) * *(int *)(param_1 + 0x558)) {
      uVar1 = *(undefined4 *)(param_1 + 0x4fc);
      uVar4 = *(undefined8 *)(param_1 + 0x578);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        plVar6[2] = (longlong)FUN_1409ddf00;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar9;
        *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_d0 = 0xbf800000;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_d8 = 0;
      FUN_142880850(uVar4,param_1 + 0x588,&local_c8,uVar1);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar9 = FMemory::Realloc(plVar6,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409de290 FUN_1409de290 body=858 status=ok
// SIG undefined FUN_1409de290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409de290(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
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
  iVar2 = *(int *)(param_1 + 0x5e8);
  iVar7 = (*(int *)(param_1 + 0x63c) + iVar2 + *(int *)(param_1 + 0x640)) % iVar2;
  *(int *)(param_1 + 0x644) = iVar7;
  iVar3 = *(int *)(param_1 + 0x638);
  iVar4 = iVar3 + *(int *)(param_1 + 0x640);
  *(int *)(param_1 + 0x640) = iVar4;
  lVar10 = (longlong)iVar7 * 0x68 + *(longlong *)(param_1 + 0x5e0);
  FUN_1409e5bf0(param_1,lVar10,*(undefined4 *)(param_1 + 0x598));
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_1441bfe38;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_1409df3a0;
    plVar5[3] = lVar10;
    *(bool *)(plVar5 + 4) = iVar4 == iVar3 * iVar2;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_1441bfe80;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar6 == 0) {
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar8 = *(undefined8 *)(lVar6 + 0x90);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x598);
  local_c8 = 0;
  local_c0 = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_c8);
  }
  FWeakObjectPtr::operator=(local_b8,0);
  local_d0 = 0xbf800000;
  local_d8 = 0;
  local_b0 = 0;
  local_78 = (longlong *)0x0;
  local_68 = 0;
  local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar8,lVar10 + 0x48,&local_c8,uVar1);
  if (local_68 != 0) {
    plVar9 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar9 = local_78;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar10 = FMemory::Realloc(plVar5,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  if (*(int *)(param_1 + 0x640) != *(int *)(param_1 + 0x638) * *(int *)(param_1 + 0x5e8)) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
    if (lVar10 == 0) {
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
    }
    else {
      uVar8 = *(undefined8 *)(lVar10 + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x58c);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_1409de290;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar10;
      *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_d0 = 0xbf800000;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_d8 = 0;
    FUN_142880850(uVar8,param_1 + 0x618,&local_c8,uVar1);
    if (local_68 != 0) {
      plVar9 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar9 = local_78;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar10 = FMemory::Realloc(plVar5,0,0);
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
  }
  return;
}



// FUNCTION 1409de5f0 FUN_1409de5f0 body=46 status=ok
// SIG undefined FUN_1409de5f0(void)

void FUN_1409de5f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(int *)(param_3 + 0x108) != 0) {
    FUN_14223c850(param_1,*(longlong *)(param_3 + 0x100) + 0x14,0,0,0);
  }
  return;
}



// FUNCTION 1409de620 FUN_1409de620 body=118 status=ok
// SIG undefined FUN_1409de620(void)

void FUN_1409de620(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x2b0) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118), lVar1 != 0)) {
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
      FUN_1409e3520(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 1409de6a0 FUN_1409de6a0 body=1022 status=ok
// SIG undefined FUN_1409de6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409de6a0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined4 local_268 [2];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_248 [64];
  undefined8 local_208;
  undefined8 local_200;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  longlong local_a8;
  undefined1 local_94;
  undefined1 local_8c;
  undefined1 local_80;
  longlong local_68;
  ulonglong local_48;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (DAT_146865474 != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x470) == 0) {
    return;
  }
  uVar12 = 0;
  uVar9 = uVar12;
  if (param_2[0x56] != 0) {
    uVar9 = *(ulonglong *)(param_2[0x56] + 0x118);
  }
  if (uVar9 == param_2[7]) {
    return;
  }
  DAT_146865474 = 1;
  if ((param_2[0x56] != 0) && (uVar9 = *(ulonglong *)(param_2[0x56] + 0x118), uVar9 != 0)) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1409de77b;
  }
  uVar9 = uVar12;
LAB_1409de77b:
  uVar2 = param_2[10];
  local_268[0] = 0;
  local_260 = 0;
  uStack_258 = 0;
  if (uVar2 != 0) {
    uVar7 = FUN_142e0d0b0();
    uVar10 = uVar2;
    do {
      if (uVar10 == uVar7) {
        puVar13 = *(ulonglong **)(param_1 + 0x4a0);
        puVar1 = puVar13 + *(int *)(param_1 + 0x4a8);
        for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
          if (*puVar13 != 0) {
            uVar8 = FUN_142e0d0b0();
            uVar10 = *puVar13;
            uVar7 = uVar10;
            if (uVar10 != 0) {
LAB_1409de810:
              if (uVar7 != uVar8) goto code_r0x0001409de815;
              if (uVar10 == 0) goto LAB_1409de882;
              uVar7 = FUN_142e0d0b0();
              for (uVar10 = *puVar13;
                  (uVar8 = uVar12, uVar10 != 0 && (uVar8 = *puVar13, uVar10 != uVar7));
                  uVar10 = *(ulonglong *)(uVar10 + 0x30)) {
              }
              uVar7 = FUN_142e0d0b0();
              uVar10 = uVar2;
              do {
                uVar4 = uVar2;
                if (uVar10 == uVar7) break;
                uVar10 = *(ulonglong *)(uVar10 + 0x30);
                uVar4 = uVar12;
              } while (uVar10 != 0);
              for (; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
                if (uVar4 == uVar8) {
                  DAT_146865474 = 0;
                  return;
                }
              }
            }
          }
LAB_1409de882:
        }
        break;
      }
      uVar10 = *(ulonglong *)(uVar10 + 0x30);
    } while (uVar10 != 0);
  }
  lVar6 = param_2[10];
  uVar16 = (**(code **)(*param_2 + 0x18))(param_2,0);
  local_278 = local_268;
  cVar5 = FUN_14144bd60(param_1,uVar9,uVar16,lVar6);
  if (cVar5 != '\0') {
    *(int *)(param_1 + 0x590) = *(int *)(param_1 + 0x590) + 1;
    fVar17 = (float)(**(code **)(*param_2 + 0x18))(param_2,0);
    *(float *)(param_1 + 0x604) = fVar17 + *(float *)(param_1 + 0x604);
    lVar6 = *(longlong *)(param_1 + 0x580);
    lVar14 = (longlong)*(int *)(param_1 + 0x588) * 0x60 + lVar6;
    for (; lVar6 != lVar14; lVar6 = lVar6 + 0x60) {
      if (*(ulonglong *)(lVar6 + 0x10) != uVar9) {
        local_278 = (undefined4 *)((ulonglong)local_278 & 0xffffffffffffff00);
        FUN_140a7aa40(local_248,*(ulonglong *)(lVar6 + 0x10),*(undefined8 *)(param_1 + 0x470),0);
        local_200 = local_260;
        local_208 = uStack_258;
        FUN_140a82f00(local_248,local_268[0],1);
        if (local_68 != 0) {
          FMemory::Free();
        }
        local_80 = 0;
        local_8c = 0;
        local_94 = 0;
        if (local_a8 != 0) {
          FMemory::Free();
        }
        if (local_c8 != 0) {
          plVar15 = local_f8;
          if (local_d8 != (longlong *)0x0) {
            plVar15 = local_d8;
          }
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x10))(plVar15,0);
          }
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
    *(int *)(param_1 + 0x590) = *(int *)(param_1 + 0x590) + -1;
    if (*(int *)(param_1 + 0x590) < 1) {
      puVar11 = *(undefined8 **)(param_1 + 0x5a0);
      uVar9 = (longlong)*(int *)(param_1 + 0x5a8) & 0x1fffffffffffffff;
      if (puVar11 + *(int *)(param_1 + 0x5a8) < puVar11) {
        uVar9 = uVar12;
      }
      if (uVar9 != 0) {
        do {
          FUN_1409e3520(*(undefined8 *)(param_1 + 0x598),*puVar11);
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar12 != uVar9);
      }
    }
  }
  DAT_146865474 = 0;
  return;
code_r0x0001409de815:
  uVar7 = *(ulonglong *)(uVar7 + 0x30);
  if (uVar7 == 0) goto LAB_1409de882;
  goto LAB_1409de810;
}



// FUNCTION 1409deaa0 FUN_1409deaa0 body=41 status=ok
// SIG undefined FUN_1409deaa0(void)

void FUN_1409deaa0(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 != 1) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x4c8);
    }
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x248) == '\x01')) {
      lVar1 = *param_1;
      uVar2 = FUN_14178ac60(param_1,DAT_14688c3d8);
                    /* WARNING: Could not recover jumptable at 0x0001413d8086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1409dead0 FUN_1409dead0 body=193 status=ok
// SIG undefined FUN_1409dead0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409dead0(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  pcVar2 = *(char **)(param_1 + 0x410);
  pcVar1 = pcVar2 + (longlong)*(int *)(param_1 + 0x418) * 0x38;
  if (pcVar2 != pcVar1) {
    do {
      if (*pcVar2 == *(char *)(param_1 + 0x2d0)) {
        FUN_142df1610(pcVar2 + 0x20,local_28,0);
        if (local_20 == '\0') {
          uVar3 = FUN_142cc4350(local_28,0);
          *(undefined4 *)(param_1 + 0x30c) = uVar3;
        }
        FUN_142df1610(pcVar2 + 8,local_28,0);
        if (local_20 != '\0') {
          return;
        }
        uVar3 = FUN_142cc4350(local_28,0);
        *(undefined4 *)(param_1 + 0x314) = uVar3;
        return;
      }
      pcVar2 = pcVar2 + 0x38;
    } while (pcVar2 != pcVar1);
  }
  return;
}



// FUNCTION 1409deba0 FUN_1409deba0 body=834 status=ok
// SIG undefined FUN_1409deba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409deba0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,byte *param_7)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  byte local_158 [4];
  undefined4 local_154;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [144];
  
  if (param_3 != 0) {
    plVar1 = (longlong *)(param_1 + 0x728);
    lVar7 = *plVar1;
    lVar6 = lVar7 + (longlong)*(int *)(param_1 + 0x730) * 8;
    for (; lVar7 != lVar6; lVar7 = lVar7 + 8) {
      cVar2 = FUN_14058c1e0(lVar7,param_3);
      if (cVar2 != '\0') {
        return;
      }
    }
    FWeakObjectPtr::operator=(&local_res18);
    iVar3 = *(int *)(param_1 + 0x730);
    *(int *)(param_1 + 0x730) = iVar3 + 1;
    if (*(int *)(param_1 + 0x734) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    lVar6 = *plVar1;
    *(undefined4 *)(lVar6 + (longlong)iVar3 * 8) = local_res18;
    *(undefined4 *)(lVar6 + 4 + (longlong)iVar3 * 8) = local_res1c;
    _guard_xfg_dispatch_icall_nop(local_158,0,0x90);
    local_14c = 0x3f800000;
    if (param_6 == '\0') {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        local_180 = DAT_1464aa7b0;
        puVar4 = &local_188;
        local_188 = DAT_1464aa7a8;
        lVar6 = 0;
      }
      else {
        puVar4 = (undefined8 *)FUN_142369f10(*(longlong *)(param_1 + 0x168),local_c8);
        lVar6 = *(longlong *)(param_1 + 0x168);
      }
      local_17c = *puVar4;
      local_174 = *(undefined4 *)(puVar4 + 1);
      if (lVar6 == 0) {
        local_188 = _DAT_1468b5d90;
        local_180 = DAT_1468b5d98;
      }
      else {
        local_188 = *(undefined8 *)(lVar6 + 0x220);
        local_180 = *(undefined4 *)(lVar6 + 0x228);
      }
      local_168 = local_180;
      local_170 = local_188;
      pbVar5 = (byte *)FUN_1422ffd10(local_b8,param_3,param_4,&local_170,&local_17c);
      param_7 = local_158;
      local_158[0] = local_158[0] ^ (*pbVar5 ^ local_158[0]) & 1;
      local_158[0] = (*pbVar5 ^ local_158[0]) & 2 ^ local_158[0];
      local_154 = *(undefined4 *)(pbVar5 + 4);
      local_150 = local_150 ^ (*(uint *)(pbVar5 + 8) ^ local_150) & 1;
      local_14c = *(undefined4 *)(pbVar5 + 0xc);
      local_148 = *(undefined4 *)(pbVar5 + 0x10);
      local_144 = *(undefined8 *)(pbVar5 + 0x14);
      local_13c = *(undefined4 *)(pbVar5 + 0x1c);
      local_138 = *(undefined8 *)(pbVar5 + 0x20);
      local_130 = *(undefined4 *)(pbVar5 + 0x28);
      local_12c = *(undefined8 *)(pbVar5 + 0x2c);
      local_124 = *(undefined4 *)(pbVar5 + 0x34);
      local_120 = *(undefined8 *)(pbVar5 + 0x38);
      local_118 = *(undefined4 *)(pbVar5 + 0x40);
      local_114 = *(undefined8 *)(pbVar5 + 0x44);
      local_10c = *(undefined4 *)(pbVar5 + 0x4c);
      local_108 = *(undefined8 *)(pbVar5 + 0x50);
      local_100 = *(undefined4 *)(pbVar5 + 0x58);
      local_fc = *(undefined4 *)(pbVar5 + 0x5c);
      local_f8 = *(undefined4 *)(pbVar5 + 0x60);
      local_f4 = *(undefined4 *)(pbVar5 + 100);
      local_f0 = *(undefined4 *)(pbVar5 + 0x68);
      local_ec = *(undefined4 *)(pbVar5 + 0x6c);
      local_e8 = *(undefined4 *)(pbVar5 + 0x70);
      local_e4 = *(undefined4 *)(pbVar5 + 0x74);
      local_e0 = *(undefined4 *)(pbVar5 + 0x78);
      local_d8 = *(undefined8 *)(pbVar5 + 0x80);
      local_d0 = *(undefined8 *)(pbVar5 + 0x88);
    }
    iVar3 = (**(code **)(*(longlong *)(param_1 + 0x460) + 0x20))
                      ((longlong *)(param_1 + 0x460),param_3);
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x70a) != '\0') {
        FUN_1414740e0(param_1,param_7);
      }
    }
    else if (iVar3 == 1) {
      if (*(char *)(param_1 + 0x70b) != '\0') {
        FUN_141474220(param_1,param_7);
      }
    }
    else if ((iVar3 == 2) && (*(char *)(param_1 + 0x709) != '\0')) {
      FUN_141473fa0(param_1,param_7);
    }
  }
  return;
}



// FUNCTION 1409deef0 FUN_1409deef0 body=136 status=ok
// SIG undefined FUN_1409deef0(void)

void FUN_1409deef0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FUN_142c6f130();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_142e27720();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if ((lVar3 != 0) && (param_2 == '\x01')) {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x1db) != '\0') {
        *(undefined4 *)(param_1 + 0x46c) = 0;
        *(undefined4 *)(param_1 + 0x4f8) = 0;
      }
      uVar2 = FUN_142c86b10(param_1,local_18);
      FUN_142c84750(lVar3,uVar2);
    }
  }
  return;
}



// FUNCTION 1409def90 thunk_FUN_1413d8050 body=5 status=ok
// SIG undefined thunk_FUN_1413d8050(void)

void thunk_FUN_1413d8050(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688c3d8);
                    /* WARNING: Could not recover jumptable at 0x0001413d8086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1409defa0 FUN_1409defa0 body=241 status=ok
// SIG undefined FUN_1409defa0(void)

void FUN_1409defa0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_1409b1af0();
  lVar2 = *(longlong *)(param_1 + 0x118);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x1b8) != '\0')) {
    plVar6 = (longlong *)(lVar2 + 0x350);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1441bff88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x409def80;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1441bffd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = *(int *)(lVar2 + 0x358);
      *(int *)(lVar2 + 0x358) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x35c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 1409df0a0 FUN_1409df0a0 body=82 status=ok
// SIG undefined FUN_1409df0a0(void)

void FUN_1409df0a0(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x828);
  cVar1 = *(char *)(param_1 + 0x845);
  if (cVar2 != cVar1) {
    *(char *)(param_1 + 0x845) = cVar2;
    if (cVar2 == '\x03') {
      FUN_1409ee050();
      cVar2 = *(char *)(param_1 + 0x845);
    }
    FUN_14149eb20(param_1,cVar1,cVar2);
  }
  return;
}



// FUNCTION 1409df150 FUN_1409df150 body=27 status=ok
// SIG undefined FUN_1409df150(void)

void FUN_1409df150(undefined8 param_1)

{
  FUN_1409eed80();
  FUN_14141c530(param_1);
  return;
}



// FUNCTION 1409df190 PostInitializeComponents body=31 status=ok
// SIG undefined PostInitializeComponents(void)

void ATOG2EnemyCharacter::PostInitializeComponents(longlong param_1)

{
  FUN_140a0f6e0();
  FUN_142d2ad60(*(undefined8 *)(param_1 + 0x738));
  return;
}



// FUNCTION 1409df1b0 FUN_1409df1b0 body=31 status=ok
// SIG undefined FUN_1409df1b0(void)

void FUN_1409df1b0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_142d2ad60(*(undefined8 *)(param_1 + 0x750));
  return;
}



// FUNCTION 1409df280 FUN_1409df280 body=284 status=ok
// SIG undefined FUN_1409df280(void)

void FUN_1409df280(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))(*(longlong **)(param_2 + 0x18),0);
    FUN_142398ec0(*(undefined8 *)(param_2 + 0x28),0,2);
    lVar2 = *(longlong *)(param_2 + 8);
    lVar3 = (longlong)*(int *)(param_2 + 0x10) * 0x70 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x70) {
      FUN_1409eab60(param_1,lVar2);
      FUN_1409e81e0(param_1,param_2,lVar2);
    }
    FUN_1405ac8f0(param_2 + 0x50,0,4);
    FUN_1409e0bf0(param_1);
    if ((param_3 != '\0') && (*(longlong *)(param_1 + 0x578) != 0)) {
      FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x590);
      *(undefined8 *)(param_1 + 0x590) = 0;
      lVar2 = *(longlong *)(param_1 + 0x5a0);
      if ((lVar2 != 0) && (cVar1 = FUN_1407cd900(lVar2), cVar1 == '\0')) {
        FUN_1409dddd0(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 1409df3a0 FUN_1409df3a0 body=316 status=ok
// SIG undefined FUN_1409df3a0(void)

void FUN_1409df3a0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))(*(longlong **)(param_2 + 0x18),0);
  FUN_142398ec0(*(undefined8 *)(param_2 + 0x28),0,2);
  lVar1 = *(longlong *)(param_2 + 8);
  lVar3 = (longlong)*(int *)(param_2 + 0x10) * 0x68 + lVar1;
  for (; lVar1 != lVar3; lVar1 = lVar1 + 0x68) {
    FUN_1409ead30(param_1,lVar1);
  }
  FUN_1405ac8f0(param_2 + 0x50,0,4);
  lVar1 = *(longlong *)(param_2 + 8);
  lVar3 = (longlong)*(int *)(param_2 + 0x10) * 0x68 + lVar1;
  for (; lVar1 != lVar3; lVar1 = lVar1 + 0x68) {
    FUN_1409e8570(param_1,param_2,lVar1);
  }
  FUN_1409e0dc0(param_1);
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x5e0);
    lVar3 = (longlong)*(int *)(param_1 + 0x5e8) * 0x68 + lVar1;
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0x68) {
      puVar2 = *(undefined8 **)(lVar1 + 8);
      puVar4 = puVar2 + (longlong)*(int *)(lVar1 + 0x10) * 0xd;
      for (; puVar2 != puVar4; puVar2 = puVar2 + 0xd) {
        (**(code **)(*(longlong *)*puVar2 + 0x638))((longlong *)*puVar2,0);
      }
    }
    if (*(longlong *)(param_1 + 0x630) != 0) {
      FUN_1409dddd0();
    }
  }
  return;
}



// FUNCTION 1409df4e0 FUN_1409df4e0 body=360 status=ok
// SIG undefined FUN_1409df4e0(void)

void FUN_1409df4e0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  FUN_1409b1ff0();
  if (param_1[0x23] == 0) {
    *(undefined4 *)(param_1 + 0x51) = 0;
    return;
  }
  plVar7 = (longlong *)param_1[0x28];
  plVar6 = plVar7 + (int)param_1[0x29];
  for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
    if ((*plVar7 != 0) && (lVar3 = FUN_1409a72d0(param_1[0x23],param_1[2]), lVar3 != 0)) {
      lVar4 = FUN_1413e0a90();
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
        *(uint *)(param_1 + 0x4f) =
             *(uint *)(param_1 + 0x4f) | 1 << (*(byte *)(lVar3 + 0xa0) & 0x1f);
      }
    }
  }
  uVar5 = 0;
  plVar6 = (longlong *)param_1[0x4c];
  uVar8 = (longlong)(int)param_1[0x4d] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_1[0x4d] < plVar6) {
    uVar8 = uVar5;
  }
  if (uVar8 != 0) {
    do {
      lVar3 = *plVar6;
      if ((lVar3 != 0) && (cVar2 = FUN_1409ae710(param_1,lVar3), cVar2 != '\0')) {
        *(uint *)(param_1 + 0x4f) =
             *(uint *)(param_1 + 0x4f) | 1 << (*(byte *)(lVar3 + 0xa0) & 0x1f);
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar8);
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  *(undefined4 *)(param_1 + 0x51) = 0;
  return;
}



// FUNCTION 1409df650 FUN_1409df650 body=417 status=ok
// SIG undefined FUN_1409df650(void)

void FUN_1409df650(code *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  FUN_1409d4480();
  if (((*(longlong *)(param_1 + 0x2b0) != 0) &&
      (*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x128) != 0)) &&
     (*(longlong *)(param_1 + 0x110) != 0)) {
    lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x8e0) + 0x10))();
    if (lVar2 != 0) {
      uStack_20._4_4_ = (uint)((ulonglong)uStack_20 >> 0x20);
      local_28 = FUN_1409dd760;
      uStack_20._0_4_ = 0;
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (lVar2 + 0x1d0,local_res8,param_1,&local_28);
      local_28 = AK::MemoryMgr::StartProfileThreadUsage;
      uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (lVar2 + 0x208,local_res8,param_1,&local_28);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x2b8);
  pcVar1 = param_1 + 0x2f8;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  param_1[0x2f4] = (code)0x0;
  if (pcVar1 != (code *)local_18) {
    if (*(longlong *)pcVar1 != 0) {
      FMemory::Free();
    }
    *(longlong *)pcVar1 = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  if (lVar2 != 0) {
    uVar3 = FUN_1430ec7a0(param_1);
    uVar4 = FUN_142c98860(lVar2 + 0x110,uVar3);
    *(undefined4 *)(param_1 + 0x2ec) = uVar4;
    param_1[0x2f4] = *(code *)(lVar2 + 0xe2);
    *(undefined4 *)(param_1 + 0x300) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x304)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2f8,0);
    }
  }
  uStack_20 = 0;
  local_28 = param_1;
  uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  uStack_20 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
  uVar3 = FUN_1430ec7a0(param_1);
  FUN_140e93b10(uVar3,&local_28);
  FUN_1409b1ff0(param_1);
  return;
}



// FUNCTION 1409df800 FUN_1409df800 body=52 status=ok
// SIG undefined FUN_1409df800(void)

void FUN_1409df800(longlong param_1,undefined8 param_2)

{
  FUN_1406f1df0();
  if (*(char *)(param_1 + 0x239) == '\0') {
    FUN_1409e0f70(param_1,param_2);
  }
  return;
}



// FUNCTION 1409df840 FUN_1409df840 body=106 status=ok
// SIG undefined FUN_1409df840(void)

void FUN_1409df840(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  FUN_1406f1df0();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar4 = FUN_1413e48b0();
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar1 + 0x750) != 0)) {
      FUN_140a14d70(*(longlong *)(lVar1 + 0x750),CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 1409df8b0 FUN_1409df8b0 body=46 status=ok
// SIG undefined FUN_1409df8b0(void)

void FUN_1409df8b0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4e] = 0;
  (**(code **)(*param_1 + 0x260))();
  FUN_1409b3e30(param_1);
  return;
}



// FUNCTION 1409df8e0 FUN_1409df8e0 body=69 status=ok
// SIG undefined FUN_1409df8e0(void)

void FUN_1409df8e0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  if (*(char *)(param_1 + 0x239) != '\0') {
    FUN_1409e0f70();
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 1409df930 FUN_1409df930 body=124 status=ok
// SIG undefined FUN_1409df930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409df930(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(lVar1 + 0x60) = local_res8;
  *(undefined4 *)(lVar1 + 100) = local_resc;
  *(undefined8 *)(lVar1 + 0x68) = _DAT_146294670;
  *(undefined4 *)(lVar1 + 0x70) = DAT_146294678;
  FUN_140715eb0(param_1,param_2,param_3);
  return;
}



// FUNCTION 1409df9b0 FUN_1409df9b0 body=146 status=ok
// SIG undefined FUN_1409df9b0(void)

void FUN_1409df9b0(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x750) != 0)) {
      FUN_140a14d70(*(longlong *)(lVar1 + 0x750),0);
    }
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 1409dfa50 FUN_1409dfa50 body=146 status=ok
// SIG undefined FUN_1409dfa50(void)

void FUN_1409dfa50(longlong param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x48 + param_2[1]);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10e0) != 0)) {
    cVar1 = FUN_140ada980(*(longlong *)(lVar2 + 0x10e0),*(undefined8 *)(*param_2 + 0x5c8));
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(lVar2 + 0x10e0) + 0x418))
                (*(longlong **)(lVar2 + 0x10e0),*param_2,0);
    }
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 1409dfaf0 FUN_1409dfaf0 body=91 status=ok
// SIG undefined FUN_1409dfaf0(void)

void FUN_1409dfaf0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x48 + *(longlong *)(param_2 + 8));
  if (lVar1 != 0) {
    FUN_1409fd7e0(lVar1,1);
    FUN_1406f2080(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1409dfb50 FUN_1409dfb50 body=80 status=ok
// SIG undefined FUN_1409dfb50(void)

void FUN_1409dfb50(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *(undefined8 *)(param_2 + 0x2f8);
  local_20 = *(undefined4 *)(param_2 + 0x300);
  local_18 = *(undefined8 *)(param_2 + 0x110);
  local_10 = *(undefined4 *)(param_2 + 0x118);
  FUN_141302170(local_18,&local_18,*(undefined4 *)(param_2 + 0x304),&local_28);
  return;
}



// FUNCTION 1409dfba0 FUN_1409dfba0 body=88 status=ok
// SIG undefined FUN_1409dfba0(void)

void FUN_1409dfba0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FUN_1409d7110(lVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x8e0) + 0x10))();
      if (lVar2 != 0) {
        FUN_140483870(lVar2 + 0x1d0,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409dfc00 HandleTargetDestroyed body=7 status=ok
// SIG undefined HandleTargetDestroyed(void)

void AConGaTrongCharacter::HandleTargetDestroyed(undefined8 param_1)

{
  FUN_1409d9fb0(param_1,0);
  return;
}



// FUNCTION 1409dfc10 FUN_1409dfc10 body=63 status=ok
// SIG undefined FUN_1409dfc10(void)

void FUN_1409dfc10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0xac1) != '\x01')) {
    *(undefined1 *)((longlong)plVar1 + 0xac1) = 1;
    FUN_1409ef530(plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001409dfc42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x600))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1409dfc50 FUN_1409dfc50 body=159 status=ok
// SIG undefined FUN_1409dfc50(void)

void FUN_1409dfc50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  code *local_18;
  undefined4 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0xf8) = lVar1;
    uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
    uVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar3 = FUN_1409d7110(lVar1);
      if (lVar3 != 0) {
        lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x8e0) + 0x10))();
        if (lVar3 != 0) {
          local_18 = FUN_1409dd960;
          uStack_10 = 0;
          TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                    (lVar3 + 0x1d0,local_res8,lVar1,&local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409dfd00 FUN_1409dfd00 body=67 status=ok
// SIG undefined FUN_1409dfd00(void)

void FUN_1409dfd00(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    (**(code **)(**(longlong **)(param_2 + 0x20) + 0x288))();
  }
  return;
}



// FUNCTION 1409dfd50 FUN_1409dfd50 body=89 status=ok
// SIG undefined FUN_1409dfd50(void)

void FUN_1409dfd50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
  }
  FUN_142880530(uVar2,param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001409dfda2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x288))();
  return;
}



// FUNCTION 1409dfdb0 FUN_1409dfdb0 body=213 status=ok
// SIG undefined FUN_1409dfdb0(void)

void FUN_1409dfdb0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
    if (*(char *)(param_1 + 0x128) == '\x03') {
      iVar2 = rand();
      iVar1 = *(int *)(param_1 + 0x574);
      iVar3 = (int)((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05);
      iVar2 = 1;
      if (iVar3 < 2) {
        iVar2 = iVar3;
      }
      uVar4 = 1;
      if (iVar2 == 0) {
        uVar4 = 0xffffffff;
      }
      iVar2 = 0;
      if (0 < iVar1) {
        iVar2 = rand();
        iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar1);
        iVar2 = iVar1 + -1;
        if (iVar3 <= iVar1 + -1) {
          iVar2 = iVar3;
        }
      }
      FUN_1412d9c00(param_1,uVar4,iVar2);
    }
  }
  return;
}



// FUNCTION 1409dfe90 FUN_1409dfe90 body=231 status=ok
// SIG undefined FUN_1409dfe90(void)

void FUN_1409dfe90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x90);
  }
  FUN_142880530(uVar5,param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x610) = 0;
  if (*(char *)(param_1 + 0x128) == '\x03') {
    iVar3 = rand();
    iVar1 = *(int *)(param_1 + 0x604);
    iVar4 = (int)((float)iVar3 * 3.051851e-05 + (float)iVar3 * 3.051851e-05);
    iVar3 = 1;
    if (iVar4 < 2) {
      iVar3 = iVar4;
    }
    uVar6 = 1;
    if (iVar3 == 0) {
      uVar6 = 0xffffffff;
    }
    iVar3 = 0;
    if (0 < iVar1) {
      iVar3 = rand();
      iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar1);
      iVar3 = iVar1 + -1;
      if (iVar4 <= iVar1 + -1) {
        iVar3 = iVar4;
      }
    }
    FUN_1412de4e0(param_1,uVar6,iVar3);
  }
  return;
}



// FUNCTION 1409dff80 FUN_1409dff80 body=293 status=ok
// SIG undefined FUN_1409dff80(void)

void FUN_1409dff80(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
    if (*(char *)(param_1 + 0x128) == '\x03') {
      iVar4 = *(int *)(param_1 + 0x574);
      if (iVar4 < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = rand();
        iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar4);
        iVar2 = iVar4 + -1;
        if (iVar3 <= iVar4 + -1) {
          iVar2 = iVar3;
        }
      }
      local_18 = (int *)0x0;
      local_10 = 1;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_18,0);
      *local_18 = iVar2 + 1;
      iVar3 = rand();
      uVar1 = local_10;
      iVar4 = 2;
      if ((int)((float)iVar3 * 9.155553e-05) < 3) {
        iVar4 = (int)((float)iVar3 * 9.155553e-05);
      }
      lVar6 = (longlong)(int)local_10;
      iVar3 = *(int *)(param_1 + 0x574);
      iVar5 = (int)local_10 + 1;
      local_10 = CONCAT44(local_10._4_4_,iVar5);
      if (local_10._4_4_ < iVar5) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_18,uVar1 & 0xffffffff);
      }
      local_18[lVar6] = (iVar4 + 2 + iVar2 + 1) % iVar3 + 1;
      FUN_1412d9c50(param_1,&local_18);
      if (local_18 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1409e00b0 FUN_1409e00b0 body=485 status=ok
// SIG undefined FUN_1409e00b0(void)

void FUN_1409e00b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined4 local_res8;
  float fStackX_c;
  float local_58;
  float local_54;
  longlong local_48;
  int local_40;
  int local_3c;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar5 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + 0x90);
  }
  FUN_142880530(uVar2,param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x610) = 0;
  FUN_1409d1cc0(param_1 + 0x5f0,0);
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_1409d48b0(param_1);
    lVar5 = *(longlong *)(param_1 + 0x5e0);
    lVar6 = 0;
    iVar3 = 0;
    local_48 = 0;
    lVar7 = (longlong)*(int *)(param_1 + 0x5e8) * 0x68 + lVar5;
    local_3c = 0;
    iVar4 = 0;
    for (; lVar5 != lVar7; lVar5 = lVar5 + 0x68) {
      fVar8 = local_54 - *(float *)(*(longlong *)(lVar5 + 0x28) + 0x1d4);
      fVar9 = local_58 - *(float *)(*(longlong *)(lVar5 + 0x28) + 0x1d0);
      local_res8 = *(undefined4 *)(lVar5 + 0x38);
      local_40 = iVar4 + 1;
      fStackX_c = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
      if (iVar3 < local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar4);
        lVar6 = local_48;
        iVar3 = local_3c;
      }
      *(ulonglong *)(lVar6 + (longlong)iVar4 * 8) = CONCAT44(fStackX_c,local_res8);
      iVar4 = local_40;
    }
    FUN_1409bfcd0(lVar6,(longlong)iVar4,(undefined1)local_res8,&local_res8);
    iVar4 = *(int *)(param_1 + 0x604);
    iVar3 = iVar4 + -4;
    if (iVar3 < 1) {
      iVar4 = 0;
    }
    else {
      iVar1 = rand();
      iVar4 = iVar4 + -5;
      iVar3 = (int)((float)iVar1 * 3.051851e-05 * (float)iVar3);
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    FUN_1412de530(param_1,*(undefined4 *)(lVar6 + 0x10 + (longlong)iVar4 * 8));
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return;
}



// FUNCTION 1409e02c0 FUN_1409e02c0 body=359 status=ok
// SIG undefined FUN_1409e02c0(void)

float * FUN_1409e02c0(float *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_2 != (longlong *)0x0) {
    lVar7 = param_2[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar7 = param_2[0x1f];
      if (lVar7 == 0) {
        return param_1;
      }
    }
    lVar1 = *(longlong *)(lVar7 + 0x260);
    iVar8 = 0;
    iVar5 = iVar8;
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x68);
      for (plVar6 = plVar2; plVar6 != plVar2 + *(int *)(lVar1 + 0x70); plVar6 = plVar6 + 1) {
        if (*plVar6 == *param_3) {
          iVar4 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
          if (iVar4 != -1) {
            iVar5 = (iVar4 + 1) * 100;
          }
          break;
        }
      }
    }
    lVar1 = *(longlong *)(lVar7 + 0x268);
    lVar3 = param_3[1];
    *param_1 = (float)iVar5;
    iVar5 = iVar8;
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x68);
      for (plVar6 = plVar2; plVar6 != plVar2 + *(int *)(lVar1 + 0x70); plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar3) {
          iVar4 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
          if (iVar4 != -1) {
            iVar5 = (iVar4 + 1) * 100;
          }
          break;
        }
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0x270);
    lVar1 = param_3[2];
    param_1[1] = (float)iVar5;
    if (lVar7 != 0) {
      plVar2 = *(longlong **)(lVar7 + 0x68);
      for (plVar6 = plVar2; iVar8 = 0, plVar6 != plVar2 + *(int *)(lVar7 + 0x70);
          plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar1) {
          iVar5 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
          if (iVar5 != -1) {
            iVar8 = (iVar5 + 1) * 100;
          }
          break;
        }
      }
    }
    param_1[2] = (float)iVar8;
  }
  return param_1;
}



// FUNCTION 1409e0430 FUN_1409e0430 body=1184 status=ok
// SIG undefined FUN_1409e0430(void)

undefined8 *
FUN_1409e0430(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4,
             longlong param_5,float param_6,float param_7,float *param_8,int param_9,
             longlong *param_10,undefined1 param_11)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined1 local_1d8 [32];
  longlong local_1b8;
  int local_1b0;
  int local_1ac;
  undefined1 local_1a7;
  undefined1 local_108 [224];
  
  if (param_2 != (longlong *)0x0) {
    plVar8 = (longlong *)FUN_142e20fc0();
    plVar14 = param_2;
    do {
      if (plVar14 == plVar8) {
        if (param_3 != (longlong *)0x0) {
          FUN_142c62180(local_1d8);
          puVar13 = (undefined8 *)*param_10;
          puVar15 = puVar13 + (longlong)(int)param_10[1] * 7;
          iVar6 = local_1b0;
          for (; puVar13 != puVar15; puVar13 = puVar13 + 7) {
            local_1b0 = iVar6 + 1;
            if (local_1ac < local_1b0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_1b8,iVar6);
            }
            uVar11 = puVar13[1];
            puVar12 = (undefined8 *)((longlong)iVar6 * 0x38 + local_1b8);
            *puVar12 = *puVar13;
            puVar12[1] = uVar11;
            uVar11 = puVar13[3];
            puVar12[2] = puVar13[2];
            puVar12[3] = uVar11;
            uVar2 = *(undefined4 *)((longlong)puVar13 + 0x24);
            uVar3 = *(undefined4 *)(puVar13 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar13 + 0x2c);
            *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar13 + 4);
            *(undefined4 *)((longlong)puVar12 + 0x24) = uVar2;
            *(undefined4 *)(puVar12 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar4;
            puVar12[6] = puVar13[6];
            iVar6 = local_1b0;
          }
          local_1b0 = iVar6;
          lVar9 = FUN_1413f82e0();
          if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
              != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (param_5 != 0)) {
            uVar7 = (**(code **)(*param_3 + 0xa68))(param_3);
            FUN_142c62570(&local_218,&DAT_146b47440,uVar7);
            iVar6 = local_1b0;
            lVar9 = (longlong)local_1b0;
            local_1b0 = local_1b0 + 1;
            if (local_1ac < local_1b0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_1b8,iVar6);
            }
            puVar13 = (undefined8 *)(lVar9 * 0x38 + local_1b8);
            *puVar13 = local_218;
            puVar13[1] = uStack_210;
            puVar13[2] = local_208;
            puVar13[3] = uStack_200;
            *(undefined4 *)(puVar13 + 4) = local_1f8;
            *(undefined4 *)((longlong)puVar13 + 0x24) = uStack_1f4;
            *(undefined4 *)(puVar13 + 5) = uStack_1f0;
            *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_1ec;
            puVar13[6] = local_1e8;
          }
          if (0.0 < param_6) {
            FUN_142c62590(&local_218,&DAT_146b2fcb8);
            iVar6 = local_1b0;
            lVar9 = (longlong)local_1b0;
            local_1b0 = local_1b0 + 1;
            if (local_1ac < local_1b0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_1b8,iVar6);
            }
            puVar13 = (undefined8 *)(lVar9 * 0x38 + local_1b8);
            *puVar13 = local_218;
            puVar13[1] = uStack_210;
            puVar13[2] = local_208;
            puVar13[3] = uStack_200;
            *(undefined4 *)(puVar13 + 4) = local_1f8;
            *(undefined4 *)((longlong)puVar13 + 0x24) = uStack_1f4;
            *(undefined4 *)(puVar13 + 5) = uStack_1f0;
            *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_1ec;
            puVar13[6] = local_1e8;
          }
          if (0.0 < param_7) {
            FUN_142c62590(&local_218,&DAT_146b2fcd8);
            iVar6 = local_1b0;
            lVar9 = (longlong)local_1b0;
            local_1b0 = local_1b0 + 1;
            if (local_1ac < local_1b0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_1b8,iVar6);
            }
            puVar13 = (undefined8 *)(lVar9 * 0x38 + local_1b8);
            *puVar13 = local_218;
            puVar13[1] = uStack_210;
            puVar13[2] = local_208;
            puVar13[3] = uStack_200;
            *(undefined4 *)(puVar13 + 4) = local_1f8;
            *(undefined4 *)((longlong)puVar13 + 0x24) = uStack_1f4;
            *(undefined4 *)(puVar13 + 5) = uStack_1f0;
            *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_1ec;
            puVar13[6] = local_1e8;
          }
          lVar9 = param_2[0x1f];
          if (lVar9 == 0) {
            (**(code **)(*param_2 + 0x368))(param_2);
            lVar9 = param_2[0x1f];
            if (lVar9 != 0) goto LAB_1409e06bc;
          }
          else {
LAB_1409e06bc:
            lVar10 = UThrobber::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              if (*param_8 != 0.0) {
                FUN_142c62590(&local_218,lVar9 + 0x198);
                iVar6 = local_1b0;
                lVar10 = (longlong)local_1b0;
                local_1b0 = local_1b0 + 1;
                if (local_1ac < local_1b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_1b8,iVar6);
                }
                lVar10 = lVar10 * 0x38;
                *(undefined8 *)(lVar10 + local_1b8) = local_218;
                ((undefined8 *)(lVar10 + local_1b8))[1] = uStack_210;
                puVar13 = (undefined8 *)(lVar10 + 0x10 + local_1b8);
                *puVar13 = local_208;
                puVar13[1] = uStack_200;
                puVar1 = (undefined4 *)(lVar10 + 0x20 + local_1b8);
                *puVar1 = local_1f8;
                puVar1[1] = uStack_1f4;
                puVar1[2] = uStack_1f0;
                puVar1[3] = uStack_1ec;
                *(undefined8 *)(lVar10 + 0x30 + local_1b8) = local_1e8;
              }
              if (param_8[1] != 0.0) {
                FUN_142c62590(&local_218,lVar9 + 0x1a0);
                iVar6 = local_1b0;
                lVar9 = (longlong)local_1b0;
                local_1b0 = local_1b0 + 1;
                if (local_1ac < local_1b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_1b8,iVar6);
                }
                lVar9 = lVar9 * 0x38;
                *(undefined8 *)(lVar9 + local_1b8) = local_218;
                ((undefined8 *)(lVar9 + local_1b8))[1] = uStack_210;
                puVar13 = (undefined8 *)(lVar9 + 0x10 + local_1b8);
                *puVar13 = local_208;
                puVar13[1] = uStack_200;
                puVar1 = (undefined4 *)(lVar9 + 0x20 + local_1b8);
                *puVar1 = local_1f8;
                puVar1[1] = uStack_1f4;
                puVar1[2] = uStack_1f0;
                puVar1[3] = uStack_1ec;
                *(undefined8 *)(lVar9 + 0x30 + local_1b8) = local_1e8;
              }
            }
          }
          if (0 < param_9) {
            FUN_142c62570(&local_218,&DAT_146b2fd08);
            iVar6 = local_1b0;
            lVar9 = (longlong)local_1b0;
            local_1b0 = local_1b0 + 1;
            if (local_1ac < local_1b0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_1b8,iVar6);
            }
            lVar9 = lVar9 * 0x38;
            *(undefined8 *)(lVar9 + local_1b8) = local_218;
            ((undefined8 *)(lVar9 + local_1b8))[1] = uStack_210;
            puVar13 = (undefined8 *)(lVar9 + 0x10 + local_1b8);
            *puVar13 = local_208;
            puVar13[1] = uStack_200;
            puVar1 = (undefined4 *)(lVar9 + 0x20 + local_1b8);
            *puVar1 = local_1f8;
            puVar1[1] = uStack_1f4;
            puVar1[2] = uStack_1f0;
            puVar1[3] = uStack_1ec;
            *(undefined8 *)(lVar9 + 0x30 + local_1b8) = local_1e8;
          }
          local_1a7 = param_4;
          uVar11 = FUN_142e27720();
          lVar9 = (**(code **)(*param_3 + 0x628))(param_3,uVar11);
          if (lVar9 != 0) {
            uVar11 = FUN_1405e0fd0(local_108,local_1d8);
            FUN_142c7bb40(lVar9,param_1,param_2,uVar11,param_11);
            FUN_142c63c50(local_1d8);
            return param_1;
          }
          FUN_142c63c50(local_1d8);
        }
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
      plVar14 = (longlong *)plVar14[6];
    } while (plVar14 != (longlong *)0x0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1409e08d0 FUN_1409e08d0 body=187 status=ok
// SIG undefined FUN_1409e08d0(void)

void FUN_1409e08d0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_142c62320(local_28);
  vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr(local_28,*(undefined8 *)(lVar1 + 0x48));
  FInputModeUIOnly::SetLockMouseToViewportBehavior(local_28,param_3);
  FUN_142c82380(local_28,*(undefined4 *)(lVar1 + 0x108));
  FAIStimulus::SetExpirationAge(local_28,*(undefined4 *)(lVar1 + 0x10c));
  uVar2 = FDifficultyFloat::FDifficultyFloat(local_38);
  uVar3 = FUN_142c6f840(param_1,param_2,1);
  FUN_142c7c830(param_1,1,uVar3,local_28,uVar2);
  return;
}



// FUNCTION 1409e0990 FUN_1409e0990 body=270 status=ok
// SIG undefined FUN_1409e0990(void)

void FUN_1409e0990(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1405ac8f0(param_2 + 0x50,0,4);
    switch(*(undefined4 *)(param_2 + 0x38)) {
    case 1:
    case 5:
      FUN_1405a9fb0(*(undefined8 *)(param_2 + 0x30),param_1 + 0x620,2,0);
      uVar2 = *(undefined8 *)(param_1 + 0x4b8);
      break;
    case 2:
    case 6:
      FUN_1405a9fb0(*(undefined8 *)(param_2 + 0x30),param_1 + 0x620,2,0);
      uVar2 = *(undefined8 *)(param_1 + 0x4c0);
      break;
    case 3:
    case 7:
      FUN_1405a9fb0(*(undefined8 *)(param_2 + 0x30),param_1 + 0x620,2,0);
      uVar2 = *(undefined8 *)(param_1 + 0x4c8);
      break;
    case 4:
    case 8:
      FUN_1405a9fb0(*(undefined8 *)(param_2 + 0x30),param_1 + 0x620,2,0);
      uVar2 = *(undefined8 *)(param_1 + 0x4d0);
      break;
    default:
      goto switchD_1409e09e3_default;
    }
    lVar1 = FUN_1405a3150(*(undefined8 *)(param_2 + 0x30),local_28,uVar2,0);
    FUN_1405913a0(param_2 + 0x50,lVar1);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(lVar1 + 0x10);
    FUN_140591060(local_28);
  }
switchD_1409e09e3_default:
  return;
}



// FUNCTION 1409e0ac0 FUN_1409e0ac0 body=267 status=ok
// SIG undefined FUN_1409e0ac0(void)

void FUN_1409e0ac0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1405ac8f0(param_2 + 0x50,0,4);
    switch(*(undefined4 *)(param_2 + 0x38)) {
    case 0:
    case 4:
      FUN_1405a9fb0(*(undefined8 *)(param_2 + 0x30),param_1 + 0x6b0,2,0);
      uVar2 = *(undefined8 *)(param_1 + 0x548);
      break;
    case 1:
    case 5:
      FUN_1405a9fb0(*(undefined8 *)(param_2 + 0x30),param_1 + 0x6b0,2,0);
      uVar2 = *(undefined8 *)(param_1 + 0x550);
      break;
    case 2:
    case 6:
      FUN_1405a9fb0(*(undefined8 *)(param_2 + 0x30),param_1 + 0x6b0,2,0);
      uVar2 = *(undefined8 *)(param_1 + 0x558);
      break;
    case 3:
    case 7:
      FUN_1405a9fb0(*(undefined8 *)(param_2 + 0x30),param_1 + 0x6b0,2,0);
      uVar2 = *(undefined8 *)(param_1 + 0x560);
      break;
    default:
      goto switchD_1409e0b10_default;
    }
    lVar1 = FUN_1405a3150(*(undefined8 *)(param_2 + 0x30),local_28,uVar2,0);
    FUN_1405913a0(param_2 + 0x50,lVar1);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(lVar1 + 0x10);
    FUN_140591060(local_28);
  }
switchD_1409e0b10_default:
  return;
}



// FUNCTION 1409e0bf0 FUN_1409e0bf0 body=452 status=ok
// SIG undefined FUN_1409e0bf0(void)

void FUN_1409e0bf0(longlong param_1)

{
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x630) != '\0') {
    *(undefined1 *)(param_1 + 0x630) = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x530,0);
  }
  if ((*(longlong *)(param_1 + 0x478) != 0) && (*(longlong *)(param_1 + 0x5c0) != 0)) {
    FUN_1405a9fb0(*(longlong *)(param_1 + 0x5c0),param_1 + 0x5e0,2,0);
    FUN_1405a3150(*(undefined8 *)(param_1 + 0x5c0),local_28,*(undefined8 *)(param_1 + 0x478),0);
    FUN_140591060(local_28);
  }
  if ((*(longlong *)(param_1 + 0x480) != 0) && (*(longlong *)(param_1 + 0x5c8) != 0)) {
    FUN_1405a9fb0(*(longlong *)(param_1 + 0x5c8),param_1 + 0x5f0,2,0);
    FUN_1405a3150(*(undefined8 *)(param_1 + 0x5c8),local_28,*(undefined8 *)(param_1 + 0x480),0);
    FUN_140591060(local_28);
  }
  if ((*(longlong *)(param_1 + 0x488) != 0) && (*(longlong *)(param_1 + 0x5d0) != 0)) {
    FUN_1405a9fb0(*(longlong *)(param_1 + 0x5d0),param_1 + 0x600,2,0);
    FUN_1405a3150(*(undefined8 *)(param_1 + 0x5d0),local_28,*(undefined8 *)(param_1 + 0x488),0);
    FUN_140591060(local_28);
  }
  if ((*(longlong *)(param_1 + 0x490) != 0) && (*(longlong *)(param_1 + 0x5d8) != 0)) {
    FUN_1405a9fb0(*(longlong *)(param_1 + 0x5d8),param_1 + 0x610,2,0);
    FUN_1405a3150(*(undefined8 *)(param_1 + 0x5d8),local_28,*(undefined8 *)(param_1 + 0x490),0);
    FUN_140591060(local_28);
  }
  *(undefined4 *)(param_1 + 0x5e8) = 0;
  if (*(int *)(param_1 + 0x5ec) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5e0,0);
  }
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  if (*(int *)(param_1 + 0x5fc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5f0,0);
  }
  *(undefined4 *)(param_1 + 0x608) = 0;
  if (*(int *)(param_1 + 0x60c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x600,0);
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  if (*(int *)(param_1 + 0x61c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x610,0);
  }
  return;
}



// FUNCTION 1409e0dc0 FUN_1409e0dc0 body=432 status=ok
// SIG undefined FUN_1409e0dc0(void)

void FUN_1409e0dc0(longlong param_1)

{
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x6c0) != '\0') {
    *(undefined1 *)(param_1 + 0x6c0) = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x5c8,0);
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FUN_1405a9fb0(*(undefined8 *)(param_1 + 0x650),param_1 + 0x670,2,0);
    FUN_1405a3150(*(undefined8 *)(param_1 + 0x650),local_28,*(undefined8 *)(param_1 + 0x508),0);
    FUN_140591060(local_28);
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FUN_1405a9fb0(*(undefined8 *)(param_1 + 0x658),param_1 + 0x680,2,0);
    FUN_1405a3150(*(undefined8 *)(param_1 + 0x658),local_28,*(undefined8 *)(param_1 + 0x510),0);
    FUN_140591060(local_28);
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FUN_1405a9fb0(*(undefined8 *)(param_1 + 0x660),param_1 + 0x690,2,0);
    FUN_1405a3150(*(undefined8 *)(param_1 + 0x660),local_28,*(undefined8 *)(param_1 + 0x518),0);
    FUN_140591060(local_28);
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FUN_1405a9fb0(*(undefined8 *)(param_1 + 0x668),param_1 + 0x6a0,2,0);
    FUN_1405a3150(*(undefined8 *)(param_1 + 0x668),local_28,*(undefined8 *)(param_1 + 0x520),0);
    FUN_140591060(local_28);
  }
  *(undefined4 *)(param_1 + 0x678) = 0;
  if (*(int *)(param_1 + 0x67c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x670,0);
  }
  *(undefined4 *)(param_1 + 0x688) = 0;
  if (*(int *)(param_1 + 0x68c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x680,0);
  }
  *(undefined4 *)(param_1 + 0x698) = 0;
  if (*(int *)(param_1 + 0x69c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x690,0);
  }
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (*(int *)(param_1 + 0x6ac) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x6a0,0);
  }
  return;
}



// FUNCTION 1409e0f70 FUN_1409e0f70 body=813 status=ok
// SIG undefined FUN_1409e0f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e0f70(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  undefined1 local_2b8;
  longlong local_2b0;
  undefined4 local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290 [2];
  undefined1 local_280 [8];
  undefined1 local_278 [512];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar8 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(param_1 + 0x238) != '\0') {
    if (*(float *)(param_2 + 3) < *(float *)(lVar8 + 0x48) ||
        *(float *)(param_2 + 3) == *(float *)(lVar8 + 0x48)) {
      return;
    }
    *(undefined4 *)(lVar8 + 0x48) = 0xbf800000;
  }
  iVar6 = *(int *)(param_1 + 0x120);
  lVar2 = *(longlong *)(*param_2 + 0x568);
  local_280[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_2b0 = lVar8;
  if (0 < iVar6) {
    FUN_1405f0df0(local_278,iVar6);
    iVar6 = *(int *)(param_1 + 0x120);
  }
  iVar3 = *(int *)(param_1 + 0x130);
  if (iVar6 <= *(int *)(param_1 + 0x130)) {
    iVar3 = iVar6;
  }
  local_290[0] = (longlong)iVar3;
  if (0 < local_290[0]) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x128) + lVar7 * 8);
      if (lVar8 != 0) {
        uVar5 = 0;
        uVar13 = 0;
        local_2b8 = 0;
        lVar10 = lVar9 + *(longlong *)(param_1 + 0x118);
        cVar1 = *(char *)(lVar9 + *(longlong *)(param_1 + 0x118));
        if (cVar1 == '\x01') {
          local_2a0 = lVar2;
          fVar12 = (float)FUN_142de77e0(lVar10,*param_2,0,&local_2a0);
          uVar4 = 0.5 <= fVar12;
        }
        else {
          if (cVar1 == '\0') {
            local_2a0 = lVar2;
            uVar13 = FUN_142de77e0(lVar10,*param_2,0,&local_2a0);
          }
          else if (cVar1 == '\x04') {
            local_298 = lVar2;
            uVar5 = FUN_142de7b90(lVar10,*param_2,&local_298);
            uVar4 = local_2b8;
            goto LAB_1409e10e0;
          }
          uVar4 = 0;
        }
LAB_1409e10e0:
        local_2d8 = CONCAT31(local_2d8._1_3_,uVar4);
        FUN_1405f1370(local_280,lVar8,uVar5,uVar13);
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x88;
      lVar8 = local_2b0;
    } while (lVar7 < local_290[0]);
  }
  lVar7 = *(longlong *)(param_1 + 0x100);
  lVar9 = *(longlong *)(param_1 + 0x110);
  lVar10 = (longlong)*(int *)(param_1 + 0x108) * 0x88 + lVar7;
  for (; (lVar11 = lVar9, lVar7 != lVar10 &&
         ((local_2b0 = lVar2, fVar12 = (float)FUN_142de77e0(lVar7,*param_2,0,&local_2b0),
          fVar12 < 0.5 || (lVar11 = *(longlong *)(lVar7 + 0x80), lVar11 == 0))));
      lVar7 = lVar7 + 0x88) {
  }
  if (lVar11 != 0) {
    local_2b0 = lVar2;
    uVar13 = FUN_142de77e0(param_1 + 0x138,*param_2,0,&local_2b0);
    local_2b0 = -0x100000000;
    local_2a8 = 0;
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x148))();
    local_2c8 = 0;
    local_2d0 = &local_2b0;
    local_2d8 = uVar13;
    FUN_1405f8040(local_290,uVar5,lVar11,local_280);
    if (*(char *)(param_1 + 0x238) != '\0') {
      local_2b0 = lVar2;
      fVar12 = (float)FUN_142de77e0(param_1 + 0x1b8,*param_2,0,&local_2b0);
      *(float *)(lVar8 + 0x48) = fVar12 + *(float *)(param_2 + 3);
    }
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409e12a0 FUN_1409e12a0 body=1230 status=ok
// SIG undefined FUN_1409e12a0(void)

longlong FUN_1409e12a0(longlong param_1,undefined8 param_2,undefined1 param_3,longlong *param_4,
                      undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                      undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 in_stack_ffffffffffffff18;
  uint uVar13;
  undefined4 uVar14;
  uint in_stack_ffffffffffffff28;
  uint in_stack_ffffffffffffff38;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong *local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_40;
  
  uVar13 = (uint)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (param_1 != 0) {
    lVar5 = FUN_142e20fc0();
    lVar6 = param_1;
    do {
      if (lVar6 == lVar5) {
        if (param_4 == (longlong *)0x0) {
          return 0;
        }
        local_68 = FUN_142e27720();
        lVar6 = (**(code **)(*param_4 + 0x628))(param_4,local_68);
        plVar12 = (longlong *)0x0;
        if (lVar6 == 0) {
          lVar5 = FUN_142c2de20();
          if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar12 = (longlong *)0x0;
          if (bVar3) {
            plVar11 = (longlong *)param_4[0x91];
            plVar12 = param_4 + 0xa2;
            if (plVar11 != (longlong *)0x0) {
              local_60 = FUN_142e27720();
              lVar6 = (**(code **)(*plVar11 + 0x628))(plVar11,local_60);
              param_4 = plVar11;
            }
          }
        }
        if (plVar12 == (longlong *)0x0) {
          lVar5 = FUN_1429d7ab0();
          if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (lVar5 = param_4[0x92], lVar5 != 0)) {
            lVar7 = FUN_142c2de20();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (plVar12 = (longlong *)(lVar5 + 0x510), plVar12 != (longlong *)0x0))
            goto LAB_1409e1445;
          }
          local_58 = UEnvQueryTest_Cover::StaticClass();
          lVar5 = (**(code **)(*param_4 + 0x628))(param_4,local_58);
          if (lVar5 == 0) {
            return 0;
          }
          plVar12 = (longlong *)(lVar5 + 0x178);
          if (plVar12 == (longlong *)0x0) {
            return 0;
          }
        }
LAB_1409e1445:
        if (lVar6 == 0) {
          return 0;
        }
        local_a8 = 0;
        uVar8 = GetTransientPackage();
        FUN_1417846f0(uVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar9 = UAISense_Damage::GetPrivateStaticClass();
        uVar14 = 0;
        lVar5 = FUN_1417985e0(uVar9,uVar8,0,0,(ulonglong)uVar13 << 0x20,0,
                              in_stack_ffffffffffffff28 & 0xffffff00,0,
                              in_stack_ffffffffffffff38 & 0xffffff00);
        *(undefined8 *)(lVar5 + 0x30) = local_a8;
        uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
        FUN_142b79770(lVar5,plVar12,uVar4);
        local_78 = *param_8;
        local_70 = *(undefined4 *)(param_8 + 1);
        FUN_1409e0430(&local_90,param_1,param_4,param_3,param_5,CONCAT44(uVar14,param_6),param_7,
                      &local_78,param_9,param_2,1);
        lVar6 = local_90;
        if ((local_90 == 0) || (*(longlong *)(local_90 + 0x10) == 0)) {
          if (local_88 == (longlong *)0x0) {
            return 0;
          }
          LOCK();
          plVar12 = local_88 + 1;
          lVar6 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar6 != 1) {
            return 0;
          }
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return 0;
          }
          (**(code **)(*local_88 + 8))(local_88,1);
          return 0;
        }
        *(longlong *)(lVar5 + 0x88) = *(longlong *)(local_90 + 0x10);
        uStack_98 = 0;
        local_a0 = FUN_1409d2890;
        plVar12 = (longlong *)FMemory::Realloc(0,0x30,0);
        local_50 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          *plVar12 = (longlong)&PTR_FUN_143fcff50;
          FWeakObjectPtr::operator=(plVar12 + 1,lVar5);
          *(undefined4 *)(plVar12 + 2) = (undefined4)local_a0;
          *(undefined4 *)((longlong)plVar12 + 0x14) = local_a0._4_4_;
          *(undefined4 *)(plVar12 + 3) = uStack_98;
          *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_94;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar12[5] = lVar7;
          *plVar12 = (longlong)&PTR_FUN_143fcff98;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x58,1);
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_a8);
          iVar2 = *(int *)(lVar6 + 0x60);
          *(int *)(lVar6 + 0x60) = iVar2 + 1;
          if (*(int *)(lVar6 + 100) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x58,iVar2);
          }
          lVar6 = *(longlong *)(lVar6 + 0x58);
          *(longlong **)(lVar6 + (longlong)iVar2 * 0x10) = plVar12;
          *(undefined4 *)(lVar6 + 8 + (longlong)iVar2 * 0x10) = 3;
        }
        lVar6 = *(longlong *)(lVar5 + 0x88);
        if (lVar6 != 0) {
          lVar7 = UTextureRenderTarget::StaticClass();
          lVar6 = *(longlong *)(lVar6 + 0x10);
          if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_a0 = (code *)&LAB_1409d2550;
            uStack_98 = 0;
            plVar11 = (longlong *)(local_90 + 200);
            plVar12 = (longlong *)FMemory::Realloc(0,0x30);
            local_40 = plVar12;
            if (plVar12 != (longlong *)0x0) {
              *plVar12 = (longlong)&PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(plVar12 + 1,lVar5);
              *(undefined4 *)(plVar12 + 2) = (undefined4)local_a0;
              *(undefined4 *)((longlong)plVar12 + 0x14) = local_a0._4_4_;
              *(undefined4 *)(plVar12 + 3) = uStack_98;
              *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_94;
              lVar6 = FDelegateHandle::GenerateNewID();
              plVar12[5] = lVar6;
              *plVar12 = (longlong)&PTR_FUN_143f77bd0;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
              (**(code **)(*plVar12 + 0x20))(plVar12,&local_a0);
              iVar2 = *(int *)(local_90 + 0xd0);
              *(int *)(local_90 + 0xd0) = iVar2 + 1;
              if (*(int *)(local_90 + 0xd4) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
              }
              puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar11);
              *puVar10 = plVar12;
              *(undefined4 *)(puVar10 + 1) = 3;
            }
          }
        }
        if (local_88 == (longlong *)0x0) {
          return lVar5;
        }
        LOCK();
        plVar12 = local_88 + 1;
        lVar6 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return lVar5;
        }
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
          return lVar5;
        }
        return lVar5;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 1409e1770 FUN_1409e1770 body=57 status=ok
// SIG undefined FUN_1409e1770(void)

void FUN_1409e1770(longlong param_1)

{
  longlong lVar1;
  
  FUN_142c7c970();
  lVar1 = FUN_142c728d0(param_1);
  if ((lVar1 != 0) && (*(float *)(param_1 + 0x588) <= 0.0)) {
    *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(lVar1 + 0x790);
  }
  return;
}



// FUNCTION 1409e17b0 FUN_1409e17b0 body=1407 status=ok
// SIG undefined FUN_1409e17b0(void)

void FUN_1409e17b0(longlong param_1,longlong *param_2,longlong param_3,undefined4 *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined1 local_438 [32];
  longlong local_418;
  int local_410;
  int local_40c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_338 [56];
  undefined1 local_300 [56];
  undefined1 local_2c8 [56];
  undefined1 local_290 [56];
  undefined1 local_258 [56];
  undefined1 local_220 [56];
  undefined1 local_1e8 [56];
  undefined1 local_1b0 [56];
  undefined1 local_178 [56];
  undefined1 local_140 [56];
  undefined1 local_108 [224];
  
  if (param_1 != 0) {
    lVar9 = FUN_1413d5010();
    lVar11 = param_1;
    while (lVar11 != lVar9) {
      lVar11 = *(longlong *)(lVar11 + 0x30);
      if (lVar11 == 0) {
        return;
      }
    }
    if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
      uVar10 = FUN_142e27720();
      lVar11 = (**(code **)(*param_2 + 0x628))(param_2,uVar10);
      if (lVar11 != 0) {
        local_358 = *param_4;
        uStack_354 = param_4[1];
        uStack_350 = param_4[2];
        uStack_34c = param_4[3];
        uVar6 = param_4[4];
        uStack_364 = param_4[5];
        uStack_360 = param_4[6];
        uStack_35c = param_4[7];
        local_368 = uVar6;
        FQuat::Rotator(&local_358,&local_448);
        FUN_142c62180(local_438);
        puVar12 = (undefined8 *)FUN_142c62590(local_338,&DAT_1468651e0,uVar6);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c62590(local_300,&DAT_1468651e8,uStack_364);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c62590(local_2c8,&DAT_1468651f0,uStack_360);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c62590(local_290,&DAT_1468651f8,local_448);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c62590(local_258,&DAT_146865200,local_444);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c62590(local_220,&DAT_146865208,local_440);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c625b0(local_1e8,&DAT_146865228,param_2);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c625b0(local_1b0,&DAT_146865210,param_3);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c62590(local_178,&DAT_146865220,param_5);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        puVar12 = (undefined8 *)FUN_142c625b0(local_140,&DAT_146865218,param_6);
        iVar5 = local_410;
        lVar9 = (longlong)local_410;
        local_410 = local_410 + 1;
        if (local_40c < local_410) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_418,iVar5);
        }
        uVar10 = puVar12[1];
        lVar9 = lVar9 * 0x38;
        *(undefined8 *)(lVar9 + local_418) = *puVar12;
        ((undefined8 *)(lVar9 + local_418))[1] = uVar10;
        uVar10 = puVar12[3];
        puVar3 = (undefined8 *)(lVar9 + 0x10 + local_418);
        *puVar3 = puVar12[2];
        puVar3[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar7 = *(undefined4 *)(puVar12 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar4 = (undefined4 *)(lVar9 + 0x20 + local_418);
        *puVar4 = *(undefined4 *)(puVar12 + 4);
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar9 + 0x30 + local_418) = puVar12[6];
        lVar13 = FUN_1413d5010();
        lVar9 = param_1;
        do {
          if (lVar9 == lVar13) goto LAB_1409e1cb0;
          lVar9 = *(longlong *)(lVar9 + 0x30);
        } while (lVar9 != 0);
        param_1 = 0;
LAB_1409e1cb0:
        uVar10 = FUN_1405e0fd0(local_108,local_438);
        FUN_142c7bb40(lVar11,local_348,param_1,uVar10,0);
        if (local_340 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_340 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_340)(local_340);
            LOCK();
            piVar2 = (int *)((longlong)local_340 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_340 + 8))(local_340,1);
            }
          }
        }
        FUN_142c63c50(local_438);
      }
    }
  }
  return;
}



// FUNCTION 1409e1d40 FUN_1409e1d40 body=54 status=ok
// SIG undefined FUN_1409e1d40(void)

void FUN_1409e1d40(longlong param_1)

{
  FUN_142c7d010();
  *(undefined4 *)(param_1 + 0x588) = 0;
  if (*(char *)(param_1 + 0x550) == '\0') {
    FUN_1409db470(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1409e1d80 FUN_1409e1d80 body=392 status=ok
// SIG undefined FUN_1409e1d80(void)

void FUN_1409e1d80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x138);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0xa60) & 2) == 0) {
      lVar6 = *(longlong *)(param_1 + 0xf8);
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x110);
    }
    if ((lVar6 != 0) && (lVar2 = FUN_14059b7e0(lVar2,1), lVar2 != 0)) {
      FUN_1405a3150(lVar2,local_28,lVar6,0);
      FUN_140591060(local_28);
    }
    lVar2 = *(longlong *)(param_1 + 0x138);
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0xa60) & 2) == 0)) {
      lVar6 = *(longlong *)(param_1 + 0x100);
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x118);
    }
    if (lVar6 != 0) {
      iVar1 = *(int *)(param_1 + 0x15c);
      plVar7 = (longlong *)0x0;
      plVar5 = plVar7;
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x128))) {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x120) + (longlong)iVar1 * 8);
      }
      if (*(int *)(lVar2 + 0xc08) != *(int *)(lVar2 + 0xc34)) {
        lVar3 = *(longlong *)(lVar2 + 0xc40);
        if (*(longlong *)(lVar2 + 0xc40) == 0) {
          lVar3 = lVar2 + 0xc38;
        }
        iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)plVar5 >> 0x20) + (int)plVar5) &
                                 (longlong)*(int *)(lVar2 + 0xc48) - 1U) * 4);
        if (iVar1 != -1) {
          do {
            plVar4 = (longlong *)(*(longlong *)(lVar2 + 0xc00) + (longlong)iVar1 * 0x18);
            if (*(longlong **)(*(longlong *)(lVar2 + 0xc00) + (longlong)iVar1 * 0x18) == plVar5) {
              if (iVar1 != -1) goto LAB_1409e1ec3;
              break;
            }
            iVar1 = (int)plVar4[2];
          } while (iVar1 != -1);
        }
      }
      plVar4 = plVar7;
LAB_1409e1ec3:
      plVar5 = plVar4 + 1;
      if (plVar4 == (longlong *)0x0) {
        plVar5 = plVar7;
      }
      if ((plVar5 != (longlong *)0x0) && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0))
      {
        if (plVar5[0xde] != lVar6) {
          FUN_14260f940(plVar5,lVar6);
        }
        (**(code **)(*plVar5 + 0x280))(plVar5,0);
      }
    }
  }
  return;
}



// FUNCTION 1409e1f30 FUN_1409e1f30 body=51 status=ok
// SIG undefined FUN_1409e1f30(void)

void FUN_1409e1f30(longlong param_1)

{
  undefined6 uStack_e;
  
  FUN_140716c20();
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x400);
  *(ulonglong *)(param_1 + 0x3c0) = CONCAT62(uStack_e,0xff00);
  return;
}



// FUNCTION 1409e1f70 FUN_1409e1f70 body=153 status=ok
// SIG undefined FUN_1409e1f70(void)

void FUN_1409e1f70(longlong param_1)

{
  char cVar1;
  
  FUN_142c7d610();
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_142c821f0(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x210) = 0;
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  if (*(char *)(param_1 + 0x1f8) != '\x01') {
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  cVar1 = FUN_142c73840(param_1 + 0x1f8);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x208);
  }
  return;
}



// FUNCTION 1409e2020 Pause body=27 status=ok
// SIG undefined Pause(void)

void UInvestigationBoard_FinalCluePresenterTask::Pause(longlong param_1)

{
  FUN_142c7d610();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 1409e2040 FUN_1409e2040 body=504 status=ok
// SIG undefined FUN_1409e2040(void)

void FUN_1409e2040(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  FUN_142c7d610();
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_142c821f0(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x210) = 0;
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  if (*(char *)(param_1 + 0x1f8) != '\x01') {
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  cVar11 = FUN_142c73840(param_1 + 0x1f8);
  if (cVar11 != '\0') {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x1fc);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x204);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x1fc);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x204);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x208);
  }
  if ((*(int *)(param_1 + 0x220) == 0) && (iVar12 = *(int *)(param_1 + 0x230), 0 < iVar12)) {
    plVar1 = (longlong *)(param_1 + 0x218);
    iVar5 = *(int *)(param_1 + 0x220);
    *(int *)(param_1 + 0x220) = iVar5 + iVar12;
    if (*(int *)(param_1 + 0x224) < iVar5 + iVar12) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
    }
    lVar13 = (longlong)iVar5 * 0xb0 + *plVar1;
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      FUN_142c622d0(lVar13);
      FUN_142c8c260(lVar13 + 0x78,0x3f800000);
      lVar13 = lVar13 + 0xb0;
    }
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0x220)) {
      lVar13 = 0;
      lVar14 = 0;
      do {
        lVar6 = *(longlong *)(param_1 + 0x228);
        lVar7 = *plVar1;
        puVar2 = (undefined4 *)(lVar6 + lVar13);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(lVar14 + lVar7);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(undefined8 *)(lVar14 + 0x10 + lVar7) = *(undefined8 *)(lVar6 + 0x10 + lVar13);
        FUN_142c8c260(&local_58,*(undefined4 *)(*(longlong *)(param_1 + 0x228) + 0x18 + lVar13));
        lVar6 = *plVar1;
        lVar13 = lVar13 + 0x20;
        iVar12 = iVar12 + 1;
        puVar4 = (undefined8 *)(lVar14 + 0x78 + lVar6);
        *puVar4 = local_58;
        puVar4[1] = uStack_50;
        puVar4 = (undefined8 *)(lVar14 + 0x88 + lVar6);
        *puVar4 = local_48;
        puVar4[1] = uStack_40;
        puVar2 = (undefined4 *)(lVar14 + 0x98 + lVar6);
        *puVar2 = local_38;
        puVar2[1] = uStack_34;
        puVar2[2] = uStack_30;
        puVar2[3] = uStack_2c;
        *(undefined8 *)(lVar14 + 0xa8 + lVar6) = local_28;
        lVar14 = lVar14 + 0xb0;
      } while (iVar12 < *(int *)(param_1 + 0x220));
    }
    *(undefined4 *)(param_1 + 0x230) = 0;
    if (*(int *)(param_1 + 0x234) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x228,0);
    }
  }
  return;
}



// FUNCTION 1409e2240 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1409cfe60(param_2,param_1);
  return;
}



// FUNCTION 1409e2250 FUN_1409e2250 body=43 status=ok
// SIG undefined FUN_1409e2250(void)

void FUN_1409e2250(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1409e22b0 FUN_1409e22b0 body=685 status=ok
// SIG undefined FUN_1409e22b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e22b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_158 [32];
  undefined1 local_138 [64];
  undefined1 local_f8 [128];
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  puVar15 = (undefined1 *)0x0;
  puVar16 = puVar15;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    puVar16 = *(undefined1 **)(*(longlong *)(param_1 + 0x18) + 0x118);
  }
  puVar12 = *(undefined1 **)(param_1 + 0x10);
  if (puVar12 != (undefined1 *)0x0) {
    lVar9 = FUN_1413dd0f0();
    if ((*(int *)(*(longlong *)(puVar12 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1409e2348;
  }
  puVar12 = puVar15;
LAB_1409e2348:
  iVar7 = rand();
  local_70 = *(int *)(puVar12 + 0x220);
  lVar9 = (longlong)local_70;
  local_6c = 0;
  local_78 = (undefined1 *)0x0;
  if (0 < local_70) {
    FUN_1409e3b30(local_f8);
  }
  puVar14 = local_f8;
  if (local_78 != (undefined1 *)0x0) {
    puVar14 = puVar15;
  }
  _guard_xfg_dispatch_icall_nop((void *)((ulonglong)puVar14 | (ulonglong)local_78),0,lVar9 << 2);
  iVar8 = *(int *)(puVar12 + 0x220);
  fVar21 = 0.0;
  fVar22 = 0.0;
  puVar14 = puVar15;
  puVar19 = puVar15;
  if (0 < iVar8) {
    do {
      puVar11 = local_78;
      uVar20 = FUN_142c728c0((longlong)(int)puVar19 * 0xb0 + *(longlong *)(puVar12 + 0x218),puVar16)
      ;
      puVar10 = local_f8;
      if (puVar11 != (undefined1 *)0x0) {
        puVar10 = puVar11;
      }
      *(undefined4 *)(puVar10 + (longlong)puVar14) = uVar20;
      puVar11 = local_f8;
      if (local_78 != (undefined1 *)0x0) {
        puVar11 = local_78;
      }
      uVar18 = (int)puVar19 + 1;
      fVar22 = fVar22 + *(float *)(puVar11 + (longlong)puVar14);
      iVar8 = *(int *)(puVar12 + 0x220);
      puVar14 = puVar14 + 4;
      puVar19 = (undefined1 *)(ulonglong)uVar18;
    } while ((int)uVar18 < iVar8);
  }
  fVar22 = (float)iVar7 * fVar22 * 3.051851e-05;
  puVar16 = puVar15;
  iVar7 = -1;
  if (0 < iVar8) {
    do {
      if (fVar21 <= fVar22) {
        puVar12 = local_f8;
        if (local_78 != (undefined1 *)0x0) {
          puVar12 = local_78;
        }
        iVar7 = (int)puVar16;
        if (fVar22 <= fVar21 + *(float *)(puVar12 + (longlong)puVar15 * 4)) break;
      }
      puVar12 = local_f8;
      if (local_78 != (undefined1 *)0x0) {
        puVar12 = local_78;
      }
      puVar16 = (undefined1 *)(ulonglong)((int)puVar16 + 1);
      fVar21 = fVar21 + *(float *)(puVar12 + (longlong)puVar15 * 4);
      puVar15 = puVar15 + 1;
      iVar7 = -1;
    } while ((longlong)puVar15 < (longlong)iVar8);
  }
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free(local_78);
  }
  puVar13 = (undefined8 *)FUN_142c62570(local_138,&DAT_146865230,iVar7);
  iVar7 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar7 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x20,iVar7);
  }
  lVar9 = *(longlong *)(param_1 + 0x20);
  uVar5 = puVar13[1];
  lVar17 = (longlong)iVar7 * 0x38;
  *(undefined8 *)(lVar17 + lVar9) = *puVar13;
  ((undefined8 *)(lVar17 + lVar9))[1] = uVar5;
  uVar5 = puVar13[3];
  puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar9);
  *puVar1 = puVar13[2];
  puVar1[1] = uVar5;
  uVar20 = *(undefined4 *)((longlong)puVar13 + 0x24);
  uVar3 = *(undefined4 *)(puVar13 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x2c);
  puVar2 = (undefined4 *)(lVar17 + 0x20 + lVar9);
  *puVar2 = *(undefined4 *)(puVar13 + 4);
  puVar2[1] = uVar20;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  *(undefined8 *)(lVar17 + 0x30 + lVar9) = puVar13[6];
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1cc);
  FUN_142c7d860(param_1);
  return;
}



// FUNCTION 1409e2590 FUN_1409e2590 body=253 status=ok
// SIG undefined FUN_1409e2590(void)

void FUN_1409e2590(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x1b8) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1c8);
  lVar6 = 0;
  if (cVar2 != '\0') goto LAB_1409e263e;
  uVar3 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
  lVar4 = FUN_1409a6100(*(undefined8 *)(param_1 + 0x118),uVar3);
  if (lVar4 == 0) {
LAB_1409e2627:
    lVar4 = lVar6;
  }
  else {
    lVar5 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1409e2627;
  }
  FWeakObjectPtr::operator=(param_1 + 0x1c8,lVar4);
LAB_1409e263e:
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1c8);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x1c8);
    lVar6 = FUN_1409d4cf0(uVar3);
  }
  if (lVar6 != *(longlong *)(param_1 + 0x1c0)) {
    *(longlong *)(param_1 + 0x1c0) = lVar6;
    FUN_14144bfc0(param_1);
  }
  return;
}



// FUNCTION 1409e2690 FUN_1409e2690 body=542 status=ok
// SIG undefined FUN_1409e2690(void)

void FUN_1409e2690(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  
  if (((*(longlong *)(param_1 + 0x758) != 0) && (*(char *)(param_1 + 0x820) != '\0')) &&
     (*(char *)(param_1 + 0x128) == '\x03')) {
    uVar8 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    uVar2 = FUN_1413f82e0();
    FUN_14238c280(*(undefined8 *)(param_1 + 0x758),&local_58,uVar2);
    iVar9 = *(int *)(param_1 + 0x778) + -1;
    if (-1 < iVar9) {
      plVar7 = (longlong *)(param_1 + 0x770);
      lVar11 = (longlong)iVar9 * 0x48;
      lVar12 = lVar11;
      do {
        for (plVar3 = local_58; plVar3 != local_58 + (int)local_50; plVar3 = plVar3 + 1) {
          if (*plVar3 == *(longlong *)(lVar12 + *plVar7)) {
            cVar1 = FUN_1409da5c0(param_1);
            if (cVar1 != '\0') goto LAB_1409e2802;
            break;
          }
        }
        puVar6 = (undefined8 *)(*plVar7 + lVar12);
        FUN_142ca9970(puVar6 + 7,1);
        FUN_142dd9490(puVar6 + 1);
        FUN_142dd9490(puVar6 + 4);
        FUN_1409ed4e0(param_1,local_48,1,*puVar6);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                  (*plVar7 + 0x38 + lVar11);
        iVar4 = *(int *)(param_1 + 0x778);
        iVar5 = (iVar4 - iVar9) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar11 + *plVar7),(void *)(*plVar7 + (longlong)(iVar4 - iVar5) * 0x48)
                     ,(longlong)iVar5 * 0x48);
          iVar4 = *(int *)(param_1 + 0x778);
        }
        *(int *)(param_1 + 0x778) = iVar4 + -1;
        TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(plVar7);
LAB_1409e2802:
        lVar11 = lVar11 + -0x48;
        lVar12 = lVar12 + -0x48;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    uVar10 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
    if (local_58 + (int)local_50 < local_58) {
      uVar10 = uVar8;
    }
    plVar7 = local_58;
    if (uVar10 != 0) {
      do {
        lVar12 = *plVar7;
        cVar1 = FUN_1409da5c0(param_1,lVar12);
        if (cVar1 != '\0') {
          FUN_1409c80c0(param_1,lVar12);
        }
        uVar8 = uVar8 + 1;
        plVar7 = plVar7 + 1;
      } while (uVar8 != uVar10);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return;
}



// FUNCTION 1409e28b0 FUN_1409e28b0 body=479 status=ok
// SIG undefined FUN_1409e28b0(void)

void FUN_1409e28b0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar6 = *(longlong *)(param_1 + 0x150);
  pwVar8 = (wchar_t *)0x0;
  pwVar9 = pwVar8;
  if (lVar6 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar9 = *(wchar_t **)(lVar6 + 0xe80);
    }
  }
  if (pwVar9 != (wchar_t *)0x0) {
    lVar6 = *(longlong *)(param_1 + 0x808);
    if (lVar6 == 0) {
      uVar4 = GetTransientPackage();
      FUN_1417846f0(uVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar5 = FUN_1430be340();
      lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
      *(longlong *)(param_1 + 0x808) = lVar6;
      *(undefined1 *)(lVar6 + 0x70) = 10;
      *(undefined1 *)(*(longlong *)(param_1 + 0x808) + 0x71) = 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x808) + 0xb0) = 2;
      *(undefined4 *)(*(longlong *)(param_1 + 0x808) + 0x78) = *(undefined4 *)(param_1 + 0x7dc);
      FWeakObjectPtr::operator=(local_28,0);
      local_20 = 0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDamageScalarChanged",L"::");
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      FWeakObjectPtr::operator=(local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(local_28), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_20);
      }
      FUN_142475720(param_1 + 0x7d8,local_28);
      lVar6 = *(longlong *)(param_1 + 0x808);
    }
    *(undefined1 *)(param_1 + 0x821) = 1;
    FUN_140a95900(pwVar9,lVar6,param_1,0);
  }
  return;
}



// FUNCTION 1409e2a90 FUN_1409e2a90 body=59 status=ok
// SIG undefined FUN_1409e2a90(void)

void FUN_1409e2a90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_18 = &local_res10;
  local_10 = local_res18;
  local_res10 = param_2;
  local_res18[0] = param_3;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (param_1 + 0xc00,local_res8,&local_18,0);
  return;
}



// FUNCTION 1409e2ad0 FUN_1409e2ad0 body=507 status=ok
// SIG undefined FUN_1409e2ad0(void)

void FUN_1409e2ad0(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong local_res10;
  code *local_28;
  undefined8 uStack_20;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x7e8,&local_res10);
    pwVar4 = (wchar_t *)0x0;
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    local_28 = FUN_1409d80e0;
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&AOperativeBarrier::HandleProjectileOverlap",L"::");
    pwVar3 = pwVar4;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    FUN_1407260e0(param_2 + 0x570,param_1,&local_28,local_res10);
    if ((*(byte *)(param_1 + 0x800) & 0x20) != 0) {
      if (*(longlong *)(param_1 + 0x768) != param_2) {
        FUN_1409ee890(param_1);
        *(longlong *)(param_1 + 0x768) = param_2;
      }
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = FUN_1409dc9f0;
      pwVar2 = _guard_xfg_dispatch_icall_nop
                         (L"&AOperativeBarrier::NotifyActorComponentBeginOverlap",L"::");
      pwVar3 = pwVar4;
      while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
        pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar3 = pwVar1;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      FUN_1407260e0(param_2 + 0x570,param_1,&local_28,local_res10);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = FUN_1409dcb90;
      pwVar3 = _guard_xfg_dispatch_icall_nop
                         (L"&AOperativeBarrier::NotifyActorComponentEndOverlap",L"::");
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar4 = pwVar2;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      FUN_1407260e0(param_2 + 0x580,param_1,&local_28,local_res10);
    }
  }
  return;
}



// FUNCTION 1409e2cd0 FUN_1409e2cd0 body=7 status=ok
// SIG undefined FUN_1409e2cd0(void)

void FUN_1409e2cd0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001409e2cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



// FUNCTION 1409e2ce0 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_1409e2e1f;
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
LAB_1409e2e1f:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x14);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[4] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[3] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 1409e2f00 FUN_1409e2f00 body=52 status=ok
// SIG undefined FUN_1409e2f00(void)

void FUN_1409e2f00(longlong param_1)

{
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x479) != '\0')) {
    FUN_1409be4f0(param_1 + 0x458);
    *(undefined1 *)(param_1 + 0x479) = 0;
  }
  return;
}



// FUNCTION 1409e2f40 FUN_1409e2f40 body=138 status=ok
// SIG undefined FUN_1409e2f40(void)

void FUN_1409e2f40(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x110) != 0) &&
     (lVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x8e0) + 0x10))(),
     lVar1 != 0)) {
    FUN_140483870(lVar1 + 0x1d0,param_1);
    FUN_140483870(lVar1 + 0x208,param_1);
  }
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2e4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2d8,0);
  }
  FUN_1409b71c0(param_1,param_2);
  return;
}



// FUNCTION 1409e2fd0 FUN_1409e2fd0 body=199 status=ok
// SIG undefined FUN_1409e2fd0(void)

void FUN_1409e2fd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x20) * 0x14;
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x14) {
    if ((*(char *)(lVar5 + 0x10) != '\0') && (lVar2 = *(longlong *)(param_1 + 8), lVar2 != 0)) {
      *(undefined1 *)(lVar5 + 0x10) = 0;
      lVar3 = FWeakObjectPtr::Get(lVar5);
      lVar4 = FWeakObjectPtr::Get(lVar5 + 8);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        FUN_140e8e960(lVar3,lVar2,lVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x18),0);
    return;
  }
  return;
}



// FUNCTION 1409e30a0 Remove body=338 status=ok
// SIG undefined Remove(void)

int TArray<TScriptInterface<IHoodEconomySystemUnlockable>,TSizedDefaultAllocator<32>_>::Remove
              (longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)*param_1;
  iVar11 = 0;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = ((longlong *)*param_1)[1];
  }
  if (*param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2[1];
  }
  if ((lVar5 == lVar2) && (lVar6 == *param_2)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  lVar6 = 0;
  iVar8 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar9 = iVar8 + 1;
    if (lVar6 < lVar10) {
      plVar3 = (longlong *)(lVar6 * 0x10 + *param_1);
      do {
        if (*plVar3 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = plVar3[1];
        }
        if (*param_2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_2[1];
        }
        if ((lVar5 == lVar2) && (*plVar3 == *param_2)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar7 != bVar4) break;
        iVar9 = iVar9 + 1;
        lVar6 = lVar6 + 1;
        plVar3 = plVar3 + 2;
      } while (lVar6 < lVar10);
    }
    if (bVar7 != 0) {
      if (iVar11 != iVar8) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x10 + *param_1),
                   (void *)((longlong)iVar8 * 0x10 + *param_1),(longlong)(iVar9 - iVar8) << 4);
      }
      iVar11 = iVar11 + (iVar9 - iVar8);
    }
    bVar7 = bVar7 ^ 1;
    iVar8 = iVar9;
    if (lVar10 <= lVar6) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}



// FUNCTION 1409e3200 FUN_1409e3200 body=362 status=ok
// SIG undefined FUN_1409e3200(void)

void FUN_1409e3200(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar8 = *(int *)(param_1 + 0xc0) + -1;
  if (0 < iVar8) {
    lVar10 = (longlong)iVar8 * 0x60;
    lVar9 = (longlong)*(int *)(param_1 + 0xc0) * 0x60;
    lVar11 = lVar10;
    do {
      if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0xc0))) {
        plVar1 = (longlong *)(param_1 + 0xb8);
        lVar5 = *plVar1;
        lVar2 = *(longlong *)(lVar10 + 0x10 + lVar5);
        lVar7 = 0;
        if (lVar2 != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x910);
        }
        if (lVar7 != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar7 + 0x1e8,*(undefined8 *)(lVar5 + 0x50 + lVar11))
          ;
          TBaseMulticastDelegate<void>::Remove
                    (lVar7 + 0x268,*(undefined8 *)(*plVar1 + 0x58 + lVar11));
          lVar5 = *plVar1;
        }
        plVar3 = *(longlong **)(lVar10 + 0x48 + lVar5);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
          *(undefined8 *)(lVar10 + lVar5 + 0x48) = 0;
        }
        iVar6 = *(int *)(param_1 + 0xc0);
        iVar4 = (iVar6 - iVar8) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar11),(void *)(*plVar1 + lVar9),(longlong)iVar4 * 0x60);
          iVar6 = *(int *)(param_1 + 0xc0);
        }
        *(int *)(param_1 + 0xc0) = iVar6 + -1;
        TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(plVar1);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        if (*(int *)(param_1 + 0x54) == -1) {
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
      }
      iVar8 = iVar8 + -1;
      lVar9 = lVar9 + -0x60;
      lVar11 = lVar11 + -0x60;
      lVar10 = lVar10 + -0x60;
    } while (0 < iVar8);
  }
  return;
}



// FUNCTION 1409e3380 FUN_1409e3380 body=300 status=ok
// SIG undefined FUN_1409e3380(void)

void FUN_1409e3380(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xc0))) {
    plVar1 = (longlong *)(param_1 + 0xb8);
    lVar6 = *plVar1;
    lVar8 = (longlong)param_2 * 0x60;
    lVar2 = *(longlong *)(lVar8 + 0x10 + lVar6);
    lVar7 = 0;
    if (lVar2 != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x910);
    }
    if (lVar7 != 0) {
      TBaseMulticastDelegate<void>::Remove(lVar7 + 0x1e8,*(undefined8 *)(lVar8 + lVar6 + 0x50));
      TBaseMulticastDelegate<void>::Remove(lVar7 + 0x268,*(undefined8 *)(lVar8 + 0x58 + *plVar1));
      lVar6 = *plVar1;
    }
    plVar3 = *(longlong **)(lVar8 + 0x48 + lVar6);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
      *(undefined8 *)(lVar8 + lVar6 + 0x48) = 0;
    }
    iVar5 = *(int *)(param_1 + 0xc0);
    iVar4 = (iVar5 - param_2) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar8 + *plVar1),(void *)((longlong)(param_2 + 1) * 0x60 + *plVar1),
                 (longlong)iVar4 * 0x60);
      iVar5 = *(int *)(param_1 + 0xc0);
    }
    *(int *)(param_1 + 0xc0) = iVar5 + -1;
    TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(plVar1);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1);
    iVar5 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x54) = iVar5;
    if (iVar5 == -1) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 1409e34b0 FUN_1409e34b0 body=100 status=ok
// SIG undefined FUN_1409e34b0(void)

void FUN_1409e34b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1409d7110();
  if ((lVar1 != 0) &&
     (((*(int *)(param_1 + 0xaa4) != 0 || *(int *)(param_1 + 0xaa0) != 0) ||
      *(int *)(param_1 + 0xa9c) != 0) || *(int *)(param_1 + 0xa98) != 0)) {
    uVar2 = FUN_1409d7110(param_1);
    FUN_140c542e0(uVar2,param_1 + 0xa68);
    *(undefined8 *)(param_1 + 0xaa0) = 0;
    *(undefined8 *)(param_1 + 0xa98) = 0;
  }
  return;
}



// FUNCTION 1409e3520 FUN_1409e3520 body=231 status=ok
// SIG undefined FUN_1409e3520(void)

void FUN_1409e3520(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_res8;
  
  local_res8 = param_2;
  if (*(int *)(param_1 + 0x590) < 1) {
    if (param_2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x580);
      lVar4 = (longlong)*(int *)(param_1 + 0x588) * 0x60 + lVar1;
      if (lVar1 != lVar4) {
        while (*(longlong *)(lVar1 + 0x10) != param_2) {
          lVar1 = lVar1 + 0x60;
          if (lVar1 == lVar4) {
            return;
          }
        }
        if (lVar1 != 0) {
          uVar3 = 0;
          if (0 < *(int *)(param_1 + 0x588)) {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x580) + 0x10);
            uVar5 = uVar3;
            do {
              if (*plVar2 == param_2) {
                FUN_1409e3380(param_1 + 0x4c8,uVar5);
                break;
              }
              uVar5 = (ulonglong)((int)uVar5 + 1);
              uVar3 = uVar3 + 1;
              plVar2 = plVar2 + 0xc;
            } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x588));
          }
          FUN_14144c040(param_1,param_2);
        }
      }
    }
  }
  else if (param_2 != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x5a0,&local_res8);
    return;
  }
  return;
}



// FUNCTION 1409e3610 FUN_1409e3610 body=107 status=ok
// SIG undefined FUN_1409e3610(void)

void FUN_1409e3610(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*param_2 == 0) {
    return;
  }
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  cVar1 = (**(code **)(*(longlong *)param_2[1] + 0x10))();
  if (cVar1 == '\0') {
    lVar3 = param_1 + 0x48;
  }
  else {
    if ((cVar1 != '\x01') || (iVar2 = FUN_14233f450(*(undefined8 *)(param_1 + 0x28)), iVar2 != 3))
    goto LAB_1409e3668;
    lVar3 = param_1 + 0x38;
  }
  TArray<TScriptInterface<IHoodEconomySystemUnlockable>,TSizedDefaultAllocator<32>_>::Remove
            (lVar3,param_2);
LAB_1409e3668:
  FUN_1409eeeb0(param_1);
  return;
}



// FUNCTION 1409e3690 RemoveInternal body=109 status=ok
// SIG undefined RemoveInternal(void)

void TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find();
  if (iVar1 != -1) {
    iVar2 = (int)param_1[1];
    iVar3 = (iVar2 - iVar1) + -1;
    if (0 < iVar3) {
      iVar3 = 1;
    }
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar1 * 0x10 + *param_1),
                 (void *)((longlong)(iVar2 - iVar3) * 0x10 + *param_1),(longlong)iVar3 << 4);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    return;
  }
  return;
}



// FUNCTION 1409e3700 FUN_1409e3700 body=389 status=ok
// SIG undefined FUN_1409e3700(void)

void FUN_1409e3700(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28;
  
  cVar3 = FUN_1430ef9c0();
  if (((cVar3 != '\0') && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (*(longlong *)(param_2 + 0x10) != 0)) {
    FWeakObjectPtr::operator=(local_38);
    FWeakObjectPtr::operator=(local_30,*(undefined8 *)(param_2 + 0x18));
    iVar8 = *(int *)(param_1 + 0x20) + -1;
    local_28 = 0;
    if (-1 < iVar8) {
      do {
        lVar1 = (longlong)iVar8 * 0x14;
        lVar9 = *(longlong *)(param_1 + 0x18) + lVar1;
        lVar5 = FWeakObjectPtr::Get(lVar9);
        lVar6 = FWeakObjectPtr::Get(local_38);
        if (lVar5 == lVar6) {
          lVar5 = FWeakObjectPtr::Get(lVar9 + 8);
          lVar6 = FWeakObjectPtr::Get(local_30);
          if (lVar5 == lVar6) {
            lVar5 = *(longlong *)(param_1 + 0x18) + lVar1;
            if ((*(char *)(lVar5 + 0x10) != '\0') &&
               (lVar6 = *(longlong *)(param_1 + 8), lVar6 != 0)) {
              *(undefined1 *)(lVar5 + 0x10) = 0;
              lVar9 = FWeakObjectPtr::Get(lVar5);
              lVar5 = FWeakObjectPtr::Get(lVar5 + 8);
              if ((lVar9 != 0) && (lVar5 != 0)) {
                FUN_140e8e960(lVar9,lVar6,lVar5);
              }
            }
            iVar7 = *(int *)(param_1 + 0x20);
            iVar4 = (iVar7 - iVar8) + -1;
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar1 + *(longlong *)(param_1 + 0x18)),
                         (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar8 + 1) * 0x14),
                         (longlong)iVar4 * 0x14);
              iVar7 = *(int *)(param_1 + 0x20);
            }
            *(int *)(param_1 + 0x20) = iVar7 + -1;
            TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x18);
            return;
          }
        }
        bVar2 = 0 < iVar8;
        iVar8 = iVar8 + -1;
      } while (bVar2);
    }
  }
  return;
}



// FUNCTION 1409e3890 FUN_1409e3890 body=104 status=ok
// SIG undefined FUN_1409e3890(void)

void FUN_1409e3890(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  plVar1 = plVar3 + iVar2;
  while( true ) {
    if (plVar3 == plVar1) {
      *(int *)(param_1 + 0x18) = iVar2 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x10));
      }
      *(longlong *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x10)) = param_2;
      return;
    }
    if (*plVar3 == param_2) break;
    plVar3 = plVar3 + 1;
  }
  return;
}



// FUNCTION 1409e3910 ResizeForCopy body=124 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x68,0);
    iVar3 = (int)(uVar1 / 0x68);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x68,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1409e3990 ResizeForCopy body=136 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x70,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 6);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x70,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1409e3a20 ResizeGrow body=261 status=ok
// SIG undefined ResizeGrow(void)

void TArray<int,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x108);
  if (uVar1 < 0x41) {
    uVar2 = 0x40;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x10c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x100);
  if (uVar2 < 0x41) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 0x100);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 2,0);
        *(void **)((longlong)param_1 + 0x100) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar5;
  return;
}



// FUNCTION 1409e3b30 FUN_1409e3b30 body=261 status=ok
// SIG undefined FUN_1409e3b30(void)

void FUN_1409e3b30(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x88);
  if (uVar1 < 0x21) {
    uVar2 = 0x20;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x8c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x8c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x80);
  if (uVar2 < 0x21) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 2,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar5;
  return;
}



// FUNCTION 1409e3c40 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x60) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x60,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x60);
      }
      goto LAB_1409e3cb6;
    }
    if (iVar4 == 0) goto LAB_1409e3cb6;
  }
  iVar4 = iVar5;
LAB_1409e3cb6:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x60,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1409e3cf0 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x14) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x14,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x14);
      }
      goto LAB_1409e3d66;
    }
    if (iVar4 == 0) goto LAB_1409e3d66;
  }
  iVar4 = iVar5;
LAB_1409e3d66:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x14,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1409e3da0 FUN_1409e3da0 body=155 status=ok
// SIG undefined FUN_1409e3da0(void)

longlong FUN_1409e3da0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_res10 [3];
  
  if (*(longlong *)(*param_2 + 0x568) != 0) {
    local_res10[0] = (longlong *)0x0;
    cVar2 = FUN_142cc3a70(param_1 + 0x100,*(longlong *)(*param_2 + 0x568),local_res10);
    if ((cVar2 != '\0') && (local_res10[0] != (longlong *)0x0)) {
      lVar3 = (**(code **)(*local_res10[0] + 0x678))();
      if (lVar3 != 0) {
        lVar4 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar3 + 0x10e0) != 0)) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1409e3e40 FUN_1409e3e40 body=66 status=ok
// SIG undefined FUN_1409e3e40(void)

undefined1 FUN_1409e3e40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x50);
  if (cVar2 == '\0') {
    return 2;
  }
  uVar1 = FWeakObjectPtr::Get(lVar3 + 0x50);
  cVar2 = FUN_140c48c20(uVar1);
  return cVar2 == '\0';
}



// FUNCTION 1409e3e90 FUN_1409e3e90 body=111 status=ok
// SIG undefined FUN_1409e3e90(void)

undefined1 FUN_1409e3e90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(*param_2 + 0x648);
  if (lVar1 == 0) {
    return 2;
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar4 = UProgressBar::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + 0x158);
    for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) goto LAB_1409e3ee7;
    }
  }
  lVar5 = 0;
LAB_1409e3ee7:
  cVar3 = FUN_142c736c0(lVar1,lVar5);
  return cVar3 == '\0';
}



// FUNCTION 1409e3f00 FUN_1409e3f00 body=52 status=ok
// SIG undefined FUN_1409e3f00(void)

char FUN_1409e3f00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_14071aa90();
  if (cVar1 == '\x01') {
    cVar1 = FUN_1409ef380(param_1,param_2);
    cVar1 = cVar1 == '\0';
  }
  return cVar1;
}



// FUNCTION 1409e3f40 FUN_1409e3f40 body=454 status=ok
// SIG undefined FUN_1409e3f40(void)

undefined8 FUN_1409e3f40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  char local_48 [16];
  longlong *local_38;
  
  plVar5 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x48 + param_2[1]);
  if (((plVar5 == (longlong *)0x0) || (plVar5[0x21c] == 0)) ||
     (cVar4 = (**(code **)(*plVar5 + 0x950))(plVar5), cVar4 != '\0')) {
    return 2;
  }
  if ((char)plVar5[0x1d8] != '\x03') {
    return 1;
  }
  cVar4 = FUN_140ada980(plVar5[0x21c],*(undefined8 *)(*param_2 + 0x5c8));
  if (cVar4 == '\0') {
    FUN_142de2fd0(local_48);
    cVar4 = (**(code **)(*(longlong *)plVar5[0x21c] + 0x420))
                      ((longlong *)plVar5[0x21c],*param_2,0,local_48);
    if ((cVar4 == '\0') || (local_48[0] == '\0')) {
      if (local_38 == (longlong *)0x0) {
        return 2;
      }
      LOCK();
      plVar5 = local_38 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return 2;
      }
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return 2;
      }
      (**(code **)(*local_38 + 8))(local_38,1);
      return 2;
    }
    cVar4 = FUN_1409da4a0(param_1,param_2,plVar5);
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)plVar5[0x21c] + 0x410))((longlong *)plVar5[0x21c],*param_2,0);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
          return 0;
        }
      }
    }
  }
  else {
    cVar4 = FUN_1409da4a0(param_1,param_2,plVar5);
    if (cVar4 == '\0') {
      (**(code **)(*(longlong *)plVar5[0x21c] + 0x418))((longlong *)plVar5[0x21c],*param_2,0);
    }
  }
  return 0;
}



// FUNCTION 1409e4110 FUN_1409e4110 body=33 status=ok
// SIG undefined FUN_1409e4110(void)

undefined1 FUN_1409e4110(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x298))();
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 1409e4140 FUN_1409e4140 body=39 status=ok
// SIG undefined FUN_1409e4140(void)

undefined4 FUN_1409e4140(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1409ce650();
  uVar2 = 0;
  if (cVar1 == *(char *)(param_1 + 0x100)) {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 1409e41b0 FUN_1409e41b0 body=129 status=ok
// SIG undefined FUN_1409e41b0(void)

void FUN_1409e41b0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  code *local_18;
  undefined4 uStack_10;
  
  local_18 = (code *)*param_2;
  uStack_10 = *(undefined4 *)(param_2 + 1);
  FUN_14141c420((int)local_18,&local_18);
  lVar1 = FUN_1409d7110(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x8e0) + 0x10))();
    if (lVar1 != 0) {
      local_18 = FUN_1409ddb60;
      uStack_10 = 0;
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (lVar1 + 0x208,local_res10,param_1,&local_18);
    }
  }
  return;
}



// FUNCTION 1409e4240 FUN_1409e4240 body=82 status=ok
// SIG undefined FUN_1409e4240(void)

void FUN_1409e4240(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FOpenXRHMD::IsStereoEnabled();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x270) != 0)) {
    cVar1 = FUN_1409a2da0(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_1430ec7c0(param_1);
      if (iVar2 < 3) {
        FUN_1413e2840();
        return;
      }
      FUN_1413e2bf0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409e42a0 FUN_1409e42a0 body=58 status=ok
// SIG undefined FUN_1409e42a0(void)

void FUN_1409e42a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FOpenXRHMD::IsStereoEnabled();
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2b0) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x2b0) + 0xa0) == '\x04')) {
    FUN_1413e2800(param_1);
    return;
  }
  return;
}



// FUNCTION 1409e4300 FUN_1409e4300 body=599 status=ok
// SIG undefined FUN_1409e4300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e4300(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 0xac3) != param_2) {
    *(char *)((longlong)param_1 + 0xac3) = param_2;
    if ((param_2 == '\0') || (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 == 0)) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar1 + 400) == 0) {
          uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
        }
        else {
          uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
        }
        FUN_142880530(uVar3,param_1 + 0x159);
        param_1[0x159] = 0;
      }
    }
    else {
      local_98 = FUN_1409eeaf0;
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
      local_a0 = 0xbf800000;
      local_a8 = 1;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 0x159,&local_88,0x40000000);
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
      FUN_1409eeaf0(param_1);
    }
  }
  return;
}



// FUNCTION 1409e4560 SetPhysicsAsset body=8 status=ok
// SIG undefined SetPhysicsAsset(void)

void USkinnedMeshComponent::SetPhysicsAsset(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x5a0) = param_2;
  return;
}



// FUNCTION 1409e4570 bpf__StartSelectBuild__pf body=8 status=ok
// SIG undefined bpf__StartSelectBuild__pf(void)

void ABP_AbducentBlock_C__pf4235152235::bpf__StartSelectBuild__pf
               (longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x630) = param_2;
  return;
}



// FUNCTION 1409e4580 FUN_1409e4580 body=146 status=ok
// SIG undefined FUN_1409e4580(void)

void FUN_1409e4580(longlong *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  
  if ((char)param_1[0x105] != param_2) {
    *(char *)(param_1 + 0x105) = param_2;
    if (param_2 == '\x01') {
      FUN_1409e28b0();
    }
    else if (*(char *)((longlong)param_1 + 0x821) != '\0') {
      FUN_1409ee840();
    }
    cVar2 = (char)param_1[0x105];
    cVar1 = *(char *)((longlong)param_1 + 0x845);
    if (cVar2 != cVar1) {
      *(char *)((longlong)param_1 + 0x845) = cVar2;
      if (cVar2 == '\x03') {
        FUN_1409ee050(param_1);
        cVar2 = *(char *)((longlong)param_1 + 0x845);
      }
      FUN_14149eb20(param_1,cVar1,cVar2);
    }
    FUN_1409ef4c0(param_1);
    (**(code **)(*param_1 + 0x600))(param_1);
  }
  return;
}



// FUNCTION 1409e4620 FUN_1409e4620 body=16 status=ok
// SIG undefined FUN_1409e4620(void)

void FUN_1409e4620(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x468) = param_3;
  *(undefined8 *)(param_1 + 0x460) = param_2;
  return;
}



// FUNCTION 1409e4630 FUN_1409e4630 body=137 status=ok
// SIG undefined FUN_1409e4630(void)

void FUN_1409e4630(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 local_res8 [32];
  
  if (((*(uint *)(param_1 + 0x500) >> 7 & 1) != (uint)param_2) &&
     (*(longlong *)(param_1 + 0x518) != 0)) {
    uVar2 = (uint)param_2 << 7 | *(uint *)(param_1 + 0x500) & 0xffffff7f;
    *(uint *)(param_1 + 0x500) = uVar2;
    if ((char)uVar2 < '\0') {
      uVar1 = FManaTextureResource::GetSizeXY(param_1,local_res8);
      FUN_142dafbc0(*(longlong *)(param_1 + 0x518) + 0x1560,uVar1);
      return;
    }
    uVar1 = FManaTextureResource::GetSizeXY(param_1,local_res8);
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x518) + 0x1560,uVar1);
  }
  return;
}



// FUNCTION 1409e46c0 FUN_1409e46c0 body=163 status=ok
// SIG undefined FUN_1409e46c0(void)

void FUN_1409e46c0(longlong param_1,byte param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142c6f130();
  if ((lVar2 != 0) && ((*(uint *)(param_1 + 0x500) >> 0xc & 1) != (uint)param_2)) {
    lVar3 = FUN_1413f82e0();
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
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) & 0xffffefff;
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) | (uint)param_2 << 0xc;
      FUN_140c58b00(lVar2,*(uint *)(param_1 + 0x500) >> 0xc & 0xffffff01);
    }
  }
  return;
}



// FUNCTION 1409e4770 FUN_1409e4770 body=195 status=ok
// SIG undefined FUN_1409e4770(void)

void FUN_1409e4770(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res18 [16];
  
  lVar1 = FUN_142c6f130();
  if ((lVar1 != 0) && ((*(uint *)(param_1 + 0x500) >> 4 & 1) != (uint)param_2)) {
    plVar2 = (longlong *)FUN_142c6f130(param_1);
    uVar3 = FUN_141403c70();
    lVar1 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar1 != 0) {
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) & 0xffffffef | (uint)param_2 << 4;
      if (((uint)param_2 << 4 & 0x10) != 0) {
        uVar3 = FManaTextureResource::GetSizeXY(param_1,local_res18);
        FUN_142dafbc0(lVar1 + 0xc40,uVar3);
        return;
      }
      uVar3 = FManaTextureResource::GetSizeXY(param_1,local_res18);
      FUN_142dbb5d0(lVar1 + 0xc40,uVar3);
    }
  }
  return;
}



// FUNCTION 1409e4840 FUN_1409e4840 body=203 status=ok
// SIG undefined FUN_1409e4840(void)

void FUN_1409e4840(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res18 [16];
  
  lVar1 = FUN_142c6f130();
  if ((lVar1 != 0) && ((*(uint *)(param_1 + 0x500) >> 2 & 1) != (uint)param_2)) {
    plVar2 = (longlong *)FUN_142c6f130(param_1);
    uVar3 = FUN_141403c70();
    lVar1 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar1 != 0) {
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) & 0xfffffffb | (uint)param_2 * 4;
      if (((uint)param_2 * 4 & 4) != 0) {
        uVar3 = FManaTextureResource::GetSizeXY(param_1,local_res18);
        FUN_142dafbc0(lVar1 + 0x2990,uVar3);
        return;
      }
      uVar3 = FManaTextureResource::GetSizeXY(param_1,local_res18);
      FUN_142dbb5d0(lVar1 + 0x2990,uVar3);
    }
  }
  return;
}



// FUNCTION 1409e4910 FUN_1409e4910 body=338 status=ok
// SIG undefined FUN_1409e4910(void)

void FUN_1409e4910(longlong param_1,char param_2,uint param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res20 [8];
  
  lVar2 = FUN_142c6f130();
  if (lVar2 != 0) {
    uVar3 = FUN_1430a8880();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar7 = *(uint *)(param_1 + 0x4fc);
      if (param_2 == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x10);
        uVar7 = uVar7 & param_3;
        if (lVar2 != 0) {
          lVar6 = UTextBlock::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (uVar7 != 0)) {
            if ((*(char *)(lVar2 + 0x1e6) != '\0') &&
               ((*(char *)(lVar2 + 0x1dd) != '\0' && ((uVar7 >> 3 & 1) != 0)))) {
              FUN_1409e46c0(param_1,0);
            }
            *(uint *)(param_1 + 0x4fc) = *(uint *)(param_1 + 0x4fc) & ~param_3;
            lVar2 = *plVar4;
            puVar5 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res20);
            (**(code **)(lVar2 + 0x108))(plVar4,*puVar5,uVar7,0);
          }
        }
      }
      else if ((~uVar7 & param_3) != 0) {
        *(uint *)(param_1 + 0x4fc) = uVar7 | param_3;
        lVar2 = *plVar4;
        puVar5 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res20);
        (**(code **)(lVar2 + 0x100))(plVar4,*puVar5,~uVar7 & param_3,1,0,0);
      }
    }
  }
  return;
}



// FUNCTION 1409e4a70 FUN_1409e4a70 body=294 status=ok
// SIG undefined FUN_1409e4a70(void)

void FUN_1409e4a70(longlong param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_142c6f130();
  if ((plVar3 != (longlong *)0x0) &&
     (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x668))(plVar3), plVar3 != (longlong *)0x0)) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (cVar2 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar2 != '\0')) &&
       (lVar4 = plVar3[0xa5], lVar4 != 0)) {
      lVar5 = FUN_142fd5420();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (param_2 != *(longlong *)(param_1 + 0x508))) {
        if (param_2 != 0) {
          FUN_142fccb00(lVar4,param_2,param_3,0);
        }
        FUN_142fcc0b0(lVar4,*(undefined8 *)(param_1 + 0x508),param_3,0);
        *(longlong *)(param_1 + 0x508) = param_2;
      }
    }
  }
  return;
}



// FUNCTION 1409e4ba0 FUN_1409e4ba0 body=161 status=ok
// SIG undefined FUN_1409e4ba0(void)

void FUN_1409e4ba0(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((*(longlong *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x110) != (longlong *)0x0))
     && (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x670))(), lVar2 != 0)) {
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
    if (bVar1) {
      if (param_2 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 600);
      }
      FUN_140d081d0(lVar2,1,uVar4);
    }
  }
  return;
}



// FUNCTION 1409e4c50 FUN_1409e4c50 body=209 status=ok
// SIG undefined FUN_1409e4c50(void)

void FUN_1409e4c50(longlong param_1,byte param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res18 [16];
  
  lVar2 = FUN_142c6f130();
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((*(uint *)(param_1 + 0x500) >> 0xb & 1) != (uint)param_2)) {
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) & 0xfffff7ff | (uint)param_2 << 0xb;
      puVar4 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res18);
      if (param_2 != 0) {
        FUN_140e1df50(lVar2,1,*puVar4,1,0);
        return;
      }
      FUN_140e3c160(lVar2,1,*puVar4,0);
    }
  }
  return;
}



// FUNCTION 1409e4d30 FUN_1409e4d30 body=24 status=ok
// SIG undefined FUN_1409e4d30(void)

void FUN_1409e4d30(longlong param_1,char *param_2)

{
  if (*param_2 != '\0') {
    *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) | *(uint *)(param_2 + 4);
    return;
  }
  *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & ~*(uint *)(param_2 + 4);
  return;
}



// FUNCTION 1409e4d50 FUN_1409e4d50 body=113 status=ok
// SIG undefined FUN_1409e4d50(void)

void FUN_1409e4d50(longlong param_1,char param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x11) != param_2) {
    *(char *)(param_1 + 0x11) = param_2;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      cVar1 = *(char *)(param_1 + 0x30);
      if (cVar1 != *(char *)(param_1 + 0x10)) {
        *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x10);
        UAbilityOverviewWidget::OnAbilityUsed(*(longlong *)(param_1 + 0x28),cVar1);
        param_2 = *(char *)(param_1 + 0x11);
      }
      cVar1 = *(char *)(param_1 + 0x31);
      if (cVar1 != param_2) {
        *(char *)(param_1 + 0x31) = param_2;
        UAbilityOverviewWidget::OnAbilityUsed(*(undefined8 *)(param_1 + 0x28),cVar1,param_2);
      }
    }
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001409e4db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x260))();
      return;
    }
  }
  return;
}



// FUNCTION 1409e4dd0 FUN_1409e4dd0 body=206 status=ok
// SIG undefined FUN_1409e4dd0(void)

void FUN_1409e4dd0(longlong param_1,byte param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  
  lVar2 = FUN_142c6f130();
  if (lVar2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && ((*(uint *)(param_1 + 0x500) >> 0xd & 1) != (uint)param_2)) &&
       (lVar3 = FUN_142cc1670(lVar2), lVar3 != 0)) {
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) & 0xffffdfff;
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) | (uint)param_2 << 0xd;
      puVar4 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res18);
      uVar5 = FUN_142cc1670(lVar2);
      FUN_142cd0010(uVar5,param_2,*puVar4);
    }
  }
  return;
}



// FUNCTION 1409e4ef0 FUN_1409e4ef0 body=20 status=ok
// SIG undefined FUN_1409e4ef0(void)

void FUN_1409e4ef0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x844) != param_2) {
    *(char *)(param_1 + 0x844) = param_2;
    FUN_1409ef4c0();
    return;
  }
  return;
}



// FUNCTION 1409e4f10 FUN_1409e4f10 body=104 status=ok
// SIG undefined FUN_1409e4f10(void)

void FUN_1409e4f10(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (((*(uint *)(param_1 + 0x500) >> 5 & 1) != (uint)param_2) &&
     (*(longlong *)(param_1 + 0x518) != 0)) {
    *(uint *)(param_1 + 0x500) = (uint)param_2 << 5 | *(uint *)(param_1 + 0x500) & 0xffffffdf;
    puVar1 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res8);
    FUN_140d134c0(*(undefined8 *)(param_1 + 0x518),*(uint *)(param_1 + 0x500) >> 5 & 0xffffff01,
                  *puVar1);
  }
  return;
}



// FUNCTION 1409e4f80 FUN_1409e4f80 body=104 status=ok
// SIG undefined FUN_1409e4f80(void)

void FUN_1409e4f80(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (((*(uint *)(param_1 + 0x500) >> 6 & 1) != (uint)param_2) &&
     (*(longlong *)(param_1 + 0x518) != 0)) {
    *(uint *)(param_1 + 0x500) = (uint)param_2 << 6 | *(uint *)(param_1 + 0x500) & 0xffffffbf;
    puVar1 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res8);
    FUN_140d13500(*(undefined8 *)(param_1 + 0x518),*(uint *)(param_1 + 0x500) >> 6 & 0xffffff01,
                  *puVar1);
  }
  return;
}



// FUNCTION 1409e4ff0 FUN_1409e4ff0 body=14 status=ok
// SIG undefined FUN_1409e4ff0(void)

void FUN_1409e4ff0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0xac2) & 1) != 0) {
    return;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xa58);
  if (param_2 != lVar2) {
    if (lVar2 != 0) {
      FUN_1407665e0(lVar2 + 0x290,param_1);
      lVar3 = FUN_1413f82e0();
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
        FUN_1407665e0(lVar2 + 0xf18,param_1);
      }
    }
    FWeakObjectPtr::operator=(param_1 + 0xa58,param_2);
    FUN_1409c8f40(param_1,param_2);
    FUN_1409eed80(param_1);
    if (*(longlong *)(param_1 + 0x700) != 0) {
      if (param_2 == 0) {
        param_2 = 0;
        uVar4 = 3;
      }
      else {
        uVar4 = 2;
      }
      FUN_140a15e10(*(longlong *)(param_1 + 0x700),uVar4,param_2);
    }
    FUN_14141c530(param_1);
  }
  return;
}



// FUNCTION 1409e5000 FUN_1409e5000 body=485 status=ok
// SIG undefined FUN_1409e5000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e5000(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    local_98 = FUN_1409e2690;
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
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x102,&local_88,0x800000);
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



// FUNCTION 1409e51f0 FUN_1409e51f0 body=203 status=ok
// SIG undefined FUN_1409e51f0(void)

void FUN_1409e51f0(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res18 [16];
  
  lVar1 = FUN_142c6f130();
  if ((lVar1 != 0) && ((*(uint *)(param_1 + 0x500) >> 3 & 1) != (uint)param_2)) {
    plVar2 = (longlong *)FUN_142c6f130(param_1);
    uVar3 = FUN_141403c70();
    lVar1 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar1 != 0) {
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) & 0xfffffff7 | (uint)param_2 * 8;
      if (((uint)param_2 * 8 & 8) != 0) {
        uVar3 = FManaTextureResource::GetSizeXY(param_1,local_res18);
        FUN_142dafbc0(lVar1 + 0x2a28,uVar3);
        return;
      }
      uVar3 = FManaTextureResource::GetSizeXY(param_1,local_res18);
      FUN_142dbb5d0(lVar1 + 0x2a28,uVar3);
    }
  }
  return;
}



// FUNCTION 1409e52c0 FUN_1409e52c0 body=98 status=ok
// SIG undefined FUN_1409e52c0(void)

void FUN_1409e52c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = FUN_142d52a00(param_1 + 0x298);
  if (cVar3 != '\0') {
    if (param_2 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x3f800000;
    }
    uVar1 = FUN_142d52a20(param_1 + 0x298);
    lVar2 = FArchive::operator<<(uVar1);
    FUN_14246fd50(lVar2 + 0x34,uVar4);
  }
  return;
}



// FUNCTION 1409e5330 FUN_1409e5330 body=154 status=ok
// SIG undefined FUN_1409e5330(void)

void FUN_1409e5330(longlong param_1,byte param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res18 [16];
  
  plVar1 = (longlong *)FUN_142c6f130();
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x500) >> 10 & 1) != (uint)param_2)) {
    uVar2 = FUN_1414b0910();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) & 0xfffffbff;
      *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) | (uint)param_2 << 10;
      puVar4 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res18);
      FUN_140a96a40(lVar3,*(uint *)(param_1 + 0x500) >> 10 & 0xffffff01,*puVar4);
    }
  }
  return;
}



// FUNCTION 1409e53d0 FUN_1409e53d0 body=106 status=ok
// SIG undefined FUN_1409e53d0(void)

void FUN_1409e53d0(longlong param_1,char param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x10) != param_2) {
    *(char *)(param_1 + 0x10) = param_2;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      cVar1 = *(char *)(param_1 + 0x30);
      if (cVar1 != param_2) {
        *(char *)(param_1 + 0x30) = param_2;
        UAbilityOverviewWidget::OnAbilityUsed(*(longlong *)(param_1 + 0x28),cVar1,param_2);
      }
      if (*(char *)(param_1 + 0x31) != *(char *)(param_1 + 0x11)) {
        *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x11);
        UAbilityOverviewWidget::OnAbilityUsed(*(undefined8 *)(param_1 + 0x28));
      }
    }
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001409e542d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x260))();
      return;
    }
  }
  return;
}



// FUNCTION 1409e5440 FUN_1409e5440 body=137 status=ok
// SIG undefined FUN_1409e5440(void)

void FUN_1409e5440(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 local_res8 [32];
  
  if (((*(uint *)(param_1 + 0x500) >> 8 & 1) != (uint)param_2) &&
     (*(longlong *)(param_1 + 0x518) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x500) & 0xfffffeff;
    *(uint *)(param_1 + 0x500) = (uint)param_2 << 8 | uVar2;
    if ((char)uVar2 < '\0') {
      uVar1 = FManaTextureResource::GetSizeXY(param_1,local_res8);
      FUN_142dafbc0(*(longlong *)(param_1 + 0x518) + 0x1690,uVar1);
      return;
    }
    uVar1 = FManaTextureResource::GetSizeXY(param_1,local_res8);
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x518) + 0x1690,uVar1);
  }
  return;
}



// FUNCTION 1409e54d0 FUN_1409e54d0 body=135 status=ok
// SIG undefined FUN_1409e54d0(void)

void FUN_1409e54d0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined4 uStack_10;
  
  lVar1 = FUN_1409d7110();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x8e0) + 0x10))();
    if (lVar1 != 0) {
      if (param_2 != '\0') {
        local_18 = FUN_1409ddb60;
        uStack_10 = 0;
        TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                  (lVar1 + 0x208,local_res18,param_1,&local_18);
        return;
      }
      FUN_140483870(lVar1 + 0x208,param_1);
    }
  }
  return;
}



// FUNCTION 1409e5560 FUN_1409e5560 body=219 status=ok
// SIG undefined FUN_1409e5560(void)

void FUN_1409e5560(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  if ((*(uint *)(param_1 + 0x500) >> 1 & 1) != (param_2 & 0xff)) {
    *(uint *)(param_1 + 0x500) = (param_2 & 0xff) * 2 | *(uint *)(param_1 + 0x500) & 0xfffffffd;
    lVar2 = FUN_142c6f130(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_1430a8880();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        cVar1 = FUN_142c711a0(param_1,&DAT_1468651a8,local_res10);
        lVar2 = *plVar4;
        uVar6 = local_res10[0];
        if (cVar1 == '\0') {
          uVar6 = 0;
        }
        if ((*(byte *)(param_1 + 0x500) & 2) == 0) {
          puVar5 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res8);
          (**(code **)(lVar2 + 0x68))(plVar4,uVar6 & 0xff,*puVar5);
        }
        else {
          puVar5 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res8);
          (**(code **)(lVar2 + 0x60))(plVar4,uVar6 & 0xff,*puVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409e5640 FUN_1409e5640 body=184 status=ok
// SIG undefined FUN_1409e5640(void)

void FUN_1409e5640(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  if ((*(uint *)(param_1 + 0x500) & 1) != (param_2 & 0xff)) {
    *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) & 0xfffffffe | param_2 & 0xff;
    lVar1 = FUN_142c6f130(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_1430a8880();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        lVar1 = *plVar3;
        if ((*(byte *)(param_1 + 0x500) & 1) != 0) {
          puVar4 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res8);
          (**(code **)(lVar1 + 0x78))(plVar3,*puVar4,0);
          return;
        }
        puVar4 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res8);
        (**(code **)(lVar1 + 0x80))(plVar3,*puVar4,0);
      }
    }
  }
  return;
}



// FUNCTION 1409e5700 FUN_1409e5700 body=406 status=ok
// SIG undefined FUN_1409e5700(void)

void FUN_1409e5700(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_res18 [2];
  int local_28;
  int local_24;
  longlong local_20;
  
  plVar5 = (longlong *)FUN_141473af0();
  if ((plVar5 != (longlong *)0x0) && (*(char *)(param_1 + 0x708) != '\0')) {
    (**(code **)(*plVar5 + 0x638))(plVar5,3);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOverlapBegin",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(local_res18,pwVar3 + 2,1);
    plVar10 = plVar5 + 0xae;
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    piVar8 = (int *)*plVar10;
    lVar7 = plVar5[0xaf];
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)(int)lVar7 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_20)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_1409e587d;
        break;
      }
    }
    iVar1 = (int)plVar5[0xaf];
    *(int *)(plVar5 + 0xaf) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0x57c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_28;
    piVar8[1] = local_24;
    *(longlong *)(piVar8 + 2) = local_20;
LAB_1409e587d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  return;
}



// FUNCTION 1409e58a0 FUN_1409e58a0 body=41 status=ok
// SIG undefined FUN_1409e58a0(void)

void FUN_1409e58a0(longlong param_1)

{
  FUN_1409bb210();
  FUN_1409bb1a0(param_1,*(undefined8 *)(param_1 + 0x290),param_1 + 0x298);
  return;
}



// FUNCTION 1409e58e0 FUN_1409e58e0 body=346 status=ok
// SIG undefined FUN_1409e58e0(void)

ulonglong FUN_1409e58e0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_res18 [8];
  
  cVar1 = FUN_1409bb440();
  if (cVar1 == '\0') {
    lVar2 = FUN_1409ab5c0(param_1,*(undefined8 *)(param_1 + 0x260));
    if (lVar2 != 0) {
      uVar6 = *(ulonglong *)(lVar2 + 0x18);
      if (uVar6 == DAT_1468651a0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38) < DAT_146865450) {
          _Init_thread_header(&DAT_146865450);
          if (DAT_146865450 == -1) {
            FWeakObjectPtr::operator=(&DAT_146865448,0);
            _Init_thread_footer(&DAT_146865450);
          }
        }
        cVar1 = FWeakObjectPtr::IsValid(&DAT_146865448);
        if (cVar1 == '\0') {
          uVar3 = FUN_14171bfe0();
          uVar3 = FUN_141799410(uVar3,0xffffffffffffffff,
                                L"/Game/PlayerCharacters/SirenBrawler/_Shared/_Design/Phasetrance/Projectiles/PhaseSlam/RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C"
                               );
          FWeakObjectPtr::operator=(&DAT_146865448,uVar3);
        }
        local_res18[0] = 2;
        uVar3 = FWeakObjectPtr::Get(&DAT_146865448);
        uVar4 = FUN_1430ec7a0(param_1);
        uVar5 = FUN_1430ec7a0(param_1);
        uVar6 = FUN_140a8e7e0(uVar5,uVar3,uVar4,local_res18);
        if ((char)uVar6 != '\0') goto LAB_1409e59ea;
      }
      return uVar6 & 0xffffffffffffff00;
    }
  }
LAB_1409e59ea:
  *param_2 = DAT_1468646e0;
  return 1;
}



// FUNCTION 1409e5a60 FUN_1409e5a60 body=392 status=ok
// SIG undefined FUN_1409e5a60(void)

void FUN_1409e5a60(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))(*(longlong **)(param_2 + 0x18),1);
  FUN_142398ec0(*(undefined8 *)(param_2 + 0x28),1,2);
  lVar11 = *(longlong *)(param_2 + 8);
  lVar12 = (longlong)*(int *)(param_2 + 0x10) * 0x70 + lVar11;
  for (; lVar11 != lVar12; lVar11 = lVar11 + 0x70) {
    *(undefined4 *)(lVar11 + 0x68) = param_3;
    FUN_1409e9230(param_1,lVar11);
  }
  plVar1 = (longlong *)(param_1 + 0x620);
  *(undefined4 *)(param_1 + 0x628) = 0;
  if (*(int *)(param_1 + 0x62c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  lVar11 = *(longlong *)(param_2 + 8);
  lVar12 = (longlong)*(int *)(param_2 + 0x10) * 0x70 + lVar11;
  for (; lVar11 != lVar12; lVar11 = lVar11 + 0x70) {
    lVar7 = *(longlong *)(lVar11 + 0x28);
    iVar6 = *(int *)(param_1 + 0x628);
    uVar8 = *(undefined4 *)(lVar7 + 0x220);
    uVar9 = *(undefined4 *)(lVar7 + 0x224);
    uVar10 = *(undefined4 *)(lVar7 + 0x228);
    uVar4 = *(undefined4 *)(lVar11 + 0x38);
    uVar5 = *(undefined4 *)(param_1 + 0x4d8);
    *(int *)(param_1 + 0x628) = iVar6 + 1;
    if (*(int *)(param_1 + 0x62c) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar6);
    }
    lVar7 = *plVar1;
    puVar2 = (undefined4 *)((longlong)iVar6 * 0x20 + lVar7);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = 0;
    puVar3 = (undefined8 *)((longlong)iVar6 * 0x20 + 0x10 + lVar7);
    *puVar3 = 0;
    puVar3[1] = CONCAT44(uVar5,uVar4);
  }
  FUN_1409e0990(param_1,param_2);
  return;
}



// FUNCTION 1409e5bf0 FUN_1409e5bf0 body=392 status=ok
// SIG undefined FUN_1409e5bf0(void)

void FUN_1409e5bf0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))(*(longlong **)(param_2 + 0x18),1);
  FUN_142398ec0(*(undefined8 *)(param_2 + 0x28),1,2);
  lVar11 = *(longlong *)(param_2 + 8);
  lVar12 = (longlong)*(int *)(param_2 + 0x10) * 0x68 + lVar11;
  for (; lVar11 != lVar12; lVar11 = lVar11 + 0x68) {
    *(undefined4 *)(lVar11 + 0x60) = param_3;
    FUN_1409e93f0(param_1,lVar11);
  }
  plVar1 = (longlong *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  if (*(int *)(param_1 + 0x6bc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  lVar11 = *(longlong *)(param_2 + 8);
  lVar12 = (longlong)*(int *)(param_2 + 0x10) * 0x68 + lVar11;
  for (; lVar11 != lVar12; lVar11 = lVar11 + 0x68) {
    lVar7 = *(longlong *)(lVar11 + 0x20);
    iVar6 = *(int *)(param_1 + 0x6b8);
    uVar8 = *(undefined4 *)(lVar7 + 0x220);
    uVar9 = *(undefined4 *)(lVar7 + 0x224);
    uVar10 = *(undefined4 *)(lVar7 + 0x228);
    uVar4 = *(undefined4 *)(lVar11 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 0x568);
    *(int *)(param_1 + 0x6b8) = iVar6 + 1;
    if (*(int *)(param_1 + 0x6bc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar6);
    }
    lVar7 = *plVar1;
    puVar2 = (undefined4 *)((longlong)iVar6 * 0x20 + lVar7);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = 0;
    puVar3 = (undefined8 *)((longlong)iVar6 * 0x20 + 0x10 + lVar7);
    *puVar3 = 0;
    puVar3[1] = CONCAT44(uVar5,uVar4);
  }
  FUN_1409e0ac0(param_1,param_2);
  return;
}



// FUNCTION 1409e5d80 FUN_1409e5d80 body=221 status=ok
// SIG undefined FUN_1409e5d80(void)

void FUN_1409e5d80(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x820) != '\0') {
    plVar1 = (longlong *)(param_1 + 0x770);
    *(undefined1 *)(param_1 + 0x820) = 0;
    puVar3 = (undefined8 *)*plVar1;
    uVar6 = (ulonglong)*(int *)(param_1 + 0x778);
    puVar2 = puVar3 + uVar6 * 9;
    if (puVar3 != puVar2) {
      do {
        FUN_142ca9970(puVar3 + 7,1);
        FUN_142dd9490(puVar3 + 1);
        FUN_142dd9490(puVar3 + 4);
        FUN_1409ed4e0(param_1,local_28,1,*puVar3);
        puVar3 = puVar3 + 9;
      } while (puVar3 != puVar2);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x778);
    }
    if ((int)uVar6 != 0) {
      lVar4 = *plVar1 + 0x38;
      do {
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar4);
        lVar4 = lVar4 + 0x48;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x778) = 0;
    if (*(int *)(param_1 + 0x77c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
  }
  return;
}



// FUNCTION 1409e5e60 FUN_1409e5e60 body=285 status=ok
// SIG undefined FUN_1409e5e60(void)

void FUN_1409e5e60(ulonglong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  plVar4 = (longlong *)*param_1;
  uVar5 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_1[1] < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      bVar2 = *(byte *)(plVar1 + 0x1b);
      if ((bVar2 & 1) != 0) {
        plVar1[2] = 0;
        plVar1[3] = 0;
        FUN_143059e20(plVar1[1],plVar1[0x1e]);
        (**(code **)(*plVar1 + 0x28))(plVar1);
        *(byte *)(plVar1 + 0x1b) = *(byte *)(plVar1 + 0x1b) & 0xfe;
        *(int *)(plVar1 + 0x1c) = (int)plVar1[0x1d];
        *(undefined4 *)((longlong)plVar1 + 0xdc) = *(undefined4 *)((longlong)plVar1 + 0xe4);
        (**(code **)(*plVar1 + 0x20))(plVar1);
        bVar2 = *(byte *)(plVar1 + 0x1b);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
      *(byte *)(plVar1 + 0x1b) = bVar2 & 0xfd;
    } while (uVar3 != uVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  return;
}



// FUNCTION 1409e5f80 FUN_1409e5f80 body=217 status=ok
// SIG undefined FUN_1409e5f80(void)

void FUN_1409e5f80(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(byte *)(param_1 + 0x392) = *(byte *)(param_1 + 0x392) | 1;
  FUN_1409e5e60(param_1 + 0x570);
  plVar1 = (longlong *)(param_1 + -0x730);
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001409e5fca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
    return;
  }
  *(byte *)(param_1 + 0x392) = *(byte *)(param_1 + 0x392) | 4;
  if (*(char *)(param_1 + 0x393) != '\0') {
    *(undefined1 *)(param_1 + 0x393) = 0;
    lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      FUN_142880530(uVar3,param_1 + 0x398);
      *(undefined8 *)(param_1 + 0x398) = 0;
    }
  }
  FUN_1409d9fb0(plVar1,0);
  FUN_14141c4f0(plVar1);
  return;
}



// FUNCTION 1409e6060 FUN_1409e6060 body=73 status=ok
// SIG undefined FUN_1409e6060(void)

void FUN_1409e6060(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + -0x458);
  *(undefined1 *)(param_1 + 0x20) = 1;
  FUN_1414a2fe0(plVar1);
  if (param_2 != '\0') {
    (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001409e60a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x600))(plVar1);
  return;
}



// FUNCTION 1409e60b0 FUN_1409e60b0 body=177 status=ok
// SIG undefined FUN_1409e60b0(void)

void FUN_1409e60b0(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  
  *(undefined1 *)(param_1 + 0x2c4) = 1;
  plVar1 = (longlong *)(param_1 + -0x560);
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001409e60d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
    return;
  }
  if (*(char *)(param_1 + 0x2c8) != '\x03') {
    cVar3 = '\x03';
    *(undefined1 *)(param_1 + 0x2c8) = 3;
    if (*(char *)(param_1 + 0x2c1) != '\0') {
      FUN_1409ee840(plVar1);
      cVar3 = *(char *)(param_1 + 0x2c8);
    }
    cVar2 = *(char *)(param_1 + 0x2e5);
    if (cVar3 != cVar2) {
      *(char *)(param_1 + 0x2e5) = cVar3;
      if (cVar3 == '\x03') {
        FUN_1409ee050(plVar1);
        cVar3 = *(char *)(param_1 + 0x2e5);
      }
      FUN_14149eb20(plVar1,cVar2,cVar3);
    }
    FUN_1409ef4c0(plVar1);
    (**(code **)(*plVar1 + 0x600))(plVar1);
  }
  return;
}



// FUNCTION 1409e6170 FUN_1409e6170 body=97 status=ok
// SIG undefined FUN_1409e6170(void)

void FUN_1409e6170(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x4c] == 0) {
    lVar1 = FUN_1413e2c30();
    param_1[0x4c] = lVar1;
    if (lVar1 != 0) {
      FUN_14223ec50(lVar1,1);
      FUN_14223e980(param_1[0x4c],1);
      FUN_1409e4ba0(param_1,1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001409e61c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  return;
}



// FUNCTION 1409e61e0 FUN_1409e61e0 body=534 status=ok
// SIG undefined FUN_1409e61e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e61e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong *local_110;
  undefined1 local_108;
  longlong local_f8 [5];
  byte local_d0;
  byte local_cf;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(param_1 + 0x10);
  pbVar6 = (byte *)0x0;
  plVar3 = (longlong *)FUN_142c6f130();
  if (plVar3 == (longlong *)0x0) {
LAB_1409e6245:
    cVar2 = '\0';
  }
  else {
    uVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 == 0) goto LAB_1409e6245;
    cVar2 = *(char *)(lVar5 + 0x974);
  }
  if (cVar2 == '\x01') {
    pbVar6 = (byte *)(lVar1 + 0x200);
  }
  else if (cVar2 == '\x02') {
    pbVar6 = (byte *)(lVar1 + 0x360);
  }
  else if (cVar2 == '\x03') {
    pbVar6 = (byte *)(lVar1 + 0x4c0);
  }
  else if (cVar2 == '\x04') {
    pbVar6 = (byte *)(lVar1 + 0x620);
  }
  else if (cVar2 == '\x05') {
    pbVar6 = (byte *)(lVar1 + 0x780);
  }
  local_cf = local_cf & 0xfe;
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_58 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_d0 = 0x40;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_68 = 0x3f800000;
  local_64 = 0x3f800000;
  local_60 = 0;
  local_54 = *(undefined4 *)(lVar1 + 0x1e0);
  if (pbVar6 != (byte *)0x0) {
    local_110 = local_f8;
    local_108 = 0;
    local_118 = 0;
    FUN_142d71bd0(pbVar6 + 0x10,param_2,param_3,0);
    if ((*pbVar6 & 1) != 0) {
      local_d0 = local_d0 ^ (*pbVar6 * '\x02' ^ local_d0) & 4;
      local_d0 = (*pbVar6 >> 2 ^ local_d0) & 1 ^ local_d0;
      local_d0 = (local_d0 ^ *pbVar6) & 8 ^ local_d0;
      if ((((local_d0 & 4) != 0) && ((local_d0 & 1) != 0)) && ((local_d0 & 8) != 0))
      goto LAB_1409e6387;
    }
  }
  local_110 = local_f8;
  local_108 = 0;
  local_118 = 0;
  FUN_142d71bd0(lVar1 + 0xa0,param_2,param_3,0);
LAB_1409e6387:
  if (local_88 != 0) {
    plVar3 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar3 = local_98;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_f8[2] != 0) {
    FMemory::Free();
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409e6400 FUN_1409e6400 body=4913 status=ok
// SIG undefined FUN_1409e6400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001409e73f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409e6400(longlong param_1,int param_2)

{
  uint3 uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 *puVar20;
  longlong lVar21;
  float *pfVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  ulonglong uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  uint uVar37;
  float fVar38;
  undefined1 auStack_5b8 [32];
  undefined4 local_598;
  undefined8 *local_590;
  undefined1 local_588;
  undefined8 *local_580;
  undefined1 local_578;
  float local_570;
  undefined8 local_568;
  undefined1 local_558;
  undefined1 local_557;
  uint *local_550;
  uint local_548;
  undefined8 local_540;
  longlong local_538;
  undefined8 local_530;
  longlong local_528;
  float local_520;
  float local_51c;
  float local_518;
  ulonglong local_510;
  longlong *local_508;
  longlong local_500;
  undefined8 local_4f8;
  uint local_4f0 [2];
  float local_4e8 [2];
  uint local_4e0 [2];
  longlong *local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  float local_4b0;
  uint *local_4a8;
  ulonglong local_4a0;
  undefined8 local_498;
  uint local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_478;
  uint uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  float fStack_464;
  undefined1 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  undefined1 local_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 local_434;
  uint local_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f4;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  undefined4 local_3d4;
  undefined8 local_3d0;
  float local_3bc;
  undefined8 local_3b8;
  longlong *local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  uint uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  float local_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined1 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined8 local_360;
  uint *local_350;
  float *local_348;
  uint *local_340;
  ulonglong *local_338;
  undefined8 local_330;
  undefined8 local_328;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined1 local_2b8 [12];
  undefined1 local_2ac [20];
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  uint local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  float local_268;
  char local_264;
  longlong local_260;
  undefined8 local_258;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined1 local_228 [8];
  undefined1 *local_220;
  int local_218;
  undefined8 local_208;
  longlong lStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [32];
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined1 local_178 [48];
  undefined1 local_148 [48];
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  local_538 = param_1;
  plVar12 = (longlong *)FUN_142c6f130();
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar19 = *(longlong *)(param_1 + 0x10);
  local_530 = 0;
  bVar3 = true;
  local_528 = lVar19;
  local_508 = plVar12;
  if (*(longlong *)(lVar19 + 0x110) != 0) {
    uVar13 = (**(code **)(*plVar12 + 0x148))(plVar12);
    lVar14 = FUN_142d80ec0(uVar13);
    if (lVar14 != 0) {
      lVar15 = plVar12[0x2d];
      if (lVar15 == 0) {
        local_410 = DAT_1468b5d98;
        puVar17 = &local_418;
        local_418 = _DAT_1468b5d90;
      }
      else {
        puVar17 = (undefined8 *)&local_43c;
        local_43c = *(undefined4 *)(lVar15 + 0x220);
        local_298 = *(undefined4 *)(lVar15 + 0x220);
        uStack_294 = *(undefined4 *)(lVar15 + 0x224);
        uStack_290 = *(undefined4 *)(lVar15 + 0x228);
        uStack_28c = *(undefined4 *)(lVar15 + 0x22c);
        local_434 = *(undefined4 *)(lVar15 + 0x228);
        uStack_438 = *(undefined4 *)(lVar15 + 0x224);
      }
      local_40c = *puVar17;
      local_404 = *(undefined4 *)(puVar17 + 1);
      local_590 = (undefined8 *)CONCAT71(local_590._1_7_,1);
      local_598 = 0;
      fVar28 = (float)FUN_142d81a10(lVar14,*(undefined8 *)(lVar19 + 0x110),plVar12);
      if (fVar28 <= 0.0) {
        return;
      }
      if (fVar28 <= 0.75) {
        iVar9 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        param_2 = (int)((float)(param_2 - iVar9) * fVar28 * 1.3333334 + (float)iVar9);
      }
    }
  }
  lVar14 = (**(code **)(*plVar12 + 0x148))(plVar12);
  if (((*(byte *)(lVar14 + 0x830) & 2) != 0) && (param_2 = param_2 / 2, param_2 < 2)) {
    param_2 = 1;
  }
  local_500 = 0;
  local_4f8 = 0;
  local_4d8 = (longlong *)0x0;
  if (*(char *)(lVar19 + 0x1f8) != '\0') {
    local_328 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar14 = (**(code **)(*plVar12 + 0x628))(plVar12,local_328);
    param_1 = local_538;
    if (lVar14 != 0) {
      lVar15 = AGFreezeCharacterCue::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
        bVar3 = false;
      }
      param_1 = local_538;
      if (bVar3) {
        local_330 = FUN_142a07000();
        plVar16 = (longlong *)(**(code **)(*plVar12 + 0x628))(plVar12,local_330);
        if (plVar16 != (longlong *)0x0) {
          local_4d8 = plVar16;
          lVar15 = FUN_142a07000();
          if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
              lVar15 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_140a88030(lVar14,&local_500);
            param_1 = local_538;
            goto LAB_1409e66a9;
          }
        }
        local_4d8 = (longlong *)0x0;
        param_1 = local_538;
      }
    }
  }
LAB_1409e66a9:
  iVar9 = *(int *)(lVar19 + 0x70) + (int)local_4f8;
  if (iVar9 < 1) goto LAB_1409e76e6;
  fVar28 = (float)FUN_142d60a40(param_1);
  FUN_142d61120(&local_520,param_1,0);
  lVar14 = plVar12[0x2d];
  if (lVar14 == 0) {
    puVar26 = (uint *)&local_400;
    local_400 = _DAT_1468b5d90;
    local_3f8 = DAT_1468b5d98;
  }
  else {
    puVar26 = &local_430;
    local_430 = *(uint *)(lVar14 + 0x220);
    local_288 = *(uint *)(lVar14 + 0x220);
    uStack_284 = *(undefined4 *)(lVar14 + 0x224);
    uStack_280 = *(undefined4 *)(lVar14 + 0x228);
    uStack_27c = *(undefined4 *)(lVar14 + 0x22c);
    local_428 = *(undefined4 *)(lVar14 + 0x228);
    uStack_42c = *(undefined4 *)(lVar14 + 0x224);
  }
  local_498 = *(undefined8 *)puVar26;
  local_490 = puVar26[2];
  uVar1 = (uint3)(local_490 >> 8);
  if (((local_520 == 0.0) && (local_51c == 0.0)) && (local_518 == 0.0)) {
    iVar10 = (int)CONCAT71((uint7)uVar1,1);
  }
  else {
    iVar10 = (uint)uVar1 << 8;
  }
  local_550 = puVar26;
  if ((char)iVar10 == '\0') {
    puVar17 = (undefined8 *)FVector::Rotation(&local_520,local_2b8);
  }
  else {
    if (lVar14 == 0) {
      local_3e0 = DAT_1468b5da8;
      puVar18 = &local_3e8;
      local_3e8 = DAT_1468b5da0;
    }
    else {
      local_318 = *(float *)(lVar14 + 0x210);
      fStack_314 = *(float *)(lVar14 + 0x214);
      fStack_310 = *(float *)(lVar14 + 0x218);
      fStack_30c = *(float *)(lVar14 + 0x21c);
      auVar29._4_4_ = -(uint)(fStack_314 != *(float *)(lVar14 + 0x254));
      auVar29._0_4_ = -(uint)(local_318 != *(float *)(lVar14 + 0x250));
      auVar29._8_4_ = -(uint)(fStack_310 != *(float *)(lVar14 + 600));
      auVar29._12_4_ = -(uint)(fStack_30c != *(float *)(lVar14 + 0x25c));
      iVar10 = movmskps(iVar10,auVar29);
      if (iVar10 != 0) {
        *(float *)(lVar14 + 0x250) = local_318;
        *(float *)(lVar14 + 0x254) = fStack_314;
        *(float *)(lVar14 + 600) = fStack_310;
        *(float *)(lVar14 + 0x25c) = fStack_30c;
        puVar17 = (undefined8 *)FQuat::Rotator(&local_318,local_2ac);
        *(undefined8 *)(lVar14 + 0x260) = *puVar17;
        *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(puVar17 + 1);
      }
      local_3ec = *(undefined4 *)(lVar14 + 0x268);
      puVar18 = &local_3f4;
      local_3f4 = *(undefined8 *)(lVar14 + 0x260);
    }
    local_3d4 = *(undefined4 *)(puVar18 + 1);
    puVar17 = &local_3dc;
    local_3dc = *puVar18;
  }
  local_488 = *puVar17;
  local_480 = *(undefined4 *)(puVar17 + 1);
  lVar14 = plVar12[0x2d];
  if (lVar14 == 0) {
    local_448 = 0x3f800000;
    puVar17 = (undefined8 *)&local_448;
    local_444 = 0x3f800000;
    local_440 = 0x3f800000;
  }
  else {
    puVar17 = (undefined8 *)&local_424;
    local_424 = *(undefined4 *)(lVar14 + 0x230);
    local_278 = *(undefined4 *)(lVar14 + 0x230);
    uStack_274 = *(undefined4 *)(lVar14 + 0x234);
    uStack_270 = *(undefined4 *)(lVar14 + 0x238);
    uStack_26c = *(undefined4 *)(lVar14 + 0x23c);
    local_41c = *(undefined4 *)(lVar14 + 0x238);
    uStack_420 = *(undefined4 *)(lVar14 + 0x234);
  }
  local_3d0 = *puVar17;
  local_268 = 0.0;
  local_264 = '\0';
  local_260 = 0;
  local_258 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0xffffffff;
  local_22c = 0;
  local_220 = (undefined1 *)0x0;
  local_218 = 0;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
            (&local_260,iVar9 * 2);
  lVar14 = local_528;
  local_548 = *(uint *)(lVar19 + 0x70);
  lVar19 = (longlong)(int)local_548;
  uVar27 = 0;
  uVar25 = uVar27;
  if (0 < (int)local_548) {
    do {
      iVar9 = 0;
      lVar15 = *(longlong *)(lVar14 + 0x68);
      if (0 < *(int *)(lVar15 + uVar27)) {
        do {
          local_4f0[0] = iVar9 << 0x10 | (uint)uVar25;
          local_4e8[0] = *(float *)(*(longlong *)(lVar14 + 0x68) + 4 + uVar27);
          if ((1e-08 < local_4e8[0]) || (local_264 != '\0')) {
            if ((int)local_258 != local_22c) {
              puVar20 = local_228;
              if (local_220 != (undefined1 *)0x0) {
                puVar20 = local_220;
              }
              iVar10 = *(int *)(puVar20 + (longlong)(int)(local_218 - 1U & local_4f0[0]) * 4);
              while (iVar10 != -1) {
                lVar21 = (longlong)iVar10;
                if (*(uint *)(local_260 + lVar21 * 0x10) == local_4f0[0]) {
                  if (((iVar10 != -1) && (lVar21 = lVar21 * 0x10 + local_260, lVar21 != 0)) &&
                     (pfVar22 = (float *)(lVar21 + 4), pfVar22 != (float *)0x0)) {
                    local_268 = local_268 - *pfVar22;
                  }
                  break;
                }
                iVar10 = *(int *)(local_260 + 8 + lVar21 * 0x10);
              }
            }
            local_268 = local_268 + local_4e8[0];
            local_350 = local_4f0;
            local_348 = local_4e8;
            FUN_1407b93f0(&local_260,&local_4d0,&local_350);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(lVar15 + uVar27));
      }
      uVar27 = uVar27 + 0x28;
      lVar19 = lVar19 + -1;
      puVar26 = local_550;
      uVar25 = (ulonglong)((uint)uVar25 + 1);
      plVar12 = local_508;
    } while (lVar19 != 0);
  }
  uVar37 = local_548;
  if (0 < (int)local_4f8) {
    local_340 = local_4e0;
    local_338 = &local_510;
    uVar23 = local_548;
    do {
      local_510 = CONCAT44(local_510._4_4_,0x3f800000);
      if ((int)local_258 != local_22c) {
        puVar20 = local_228;
        if (local_220 != (undefined1 *)0x0) {
          puVar20 = local_220;
        }
        iVar9 = *(int *)(puVar20 + (longlong)(int)(local_218 - 1U & uVar23) * 4);
        while (iVar9 != -1) {
          lVar19 = (longlong)iVar9;
          if (*(uint *)(local_260 + lVar19 * 0x10) == uVar23) {
            if (((iVar9 != -1) && (lVar19 = lVar19 * 0x10 + local_260, lVar19 != 0)) &&
               (pfVar22 = (float *)(lVar19 + 4), pfVar22 != (float *)0x0)) {
              local_268 = local_268 - *pfVar22;
            }
            break;
          }
          iVar9 = *(int *)(local_260 + 8 + lVar19 * 0x10);
        }
      }
      local_268 = local_268 + 1.0;
      local_4e0[0] = uVar23;
      FUN_1407b93f0(&local_260,&local_550,&local_340,0);
      uVar23 = uVar23 + 1;
    } while ((int)(uVar23 - uVar37) < (int)local_4f8);
  }
  fVar38 = 5.0;
  FName::FName(&local_530,L"PhysicsActor",1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar19 = DAT_146b33f38;
  lVar15 = DAT_146b33f38 + 0x30;
  lVar14 = FWeakObjectPtr::Get(lVar15);
  if (lVar14 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar19 + 0x38)) &&
       (local_540 = 0, *(longlong *)(lVar19 + 0x40) != 0)) {
      lVar14 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar15,lVar14);
      if ((lVar14 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar19 + 0x38) = DAT_1464b56f4;
      }
      lVar14 = FWeakObjectPtr::Get(lVar15);
      if (lVar14 != 0) goto LAB_1409e6c2a;
    }
  }
  else {
LAB_1409e6c2a:
    lVar19 = FUN_142e0ceb0();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar19 + 0x90) * 8
         ) != lVar19 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      fVar38 = *(float *)(lVar14 + 0x1d4);
      lVar19 = FUN_1413f82e0();
      if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar19 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar19 + 0x90) * 8) !=
          lVar19 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(char *)((longlong)plVar12 + 0xec2) != '\0')) {
        local_530 = *(undefined8 *)(lVar14 + 0x1e0);
      }
      else {
        local_530 = *(undefined8 *)(lVar14 + 0x1d8);
      }
    }
  }
  lVar19 = local_528;
  plVar16 = *(longlong **)(local_528 + 0x90);
  if (plVar16 != (longlong *)0x0) {
    lVar14 = plVar16[0x1f];
    if (lVar14 == 0) {
      (**(code **)(*plVar16 + 0x368))(plVar16);
      lVar14 = plVar16[0x1f];
      if (lVar14 == 0) goto LAB_1409e6d64;
    }
    if (*(float *)(lVar14 + 0xcc) != 0.0) {
      fVar38 = *(float *)(lVar14 + 0xcc);
    }
  }
LAB_1409e6d64:
  local_4a8 = (uint *)0x0;
  local_4a0 = 0;
  FUN_1409c0150(&local_268,param_2,0,&local_4a8);
  fVar30 = *(float *)(lVar19 + 0x8e0);
  local_3a0 = *(undefined8 *)puVar26;
  uStack_398 = puVar26[2];
  uStack_394 = (undefined4)local_488;
  uStack_390 = (undefined4)((ulonglong)local_488 >> 0x20);
  fVar33 = local_518 * fVar28 * fVar30;
  uStack_3a8 = 0;
  fVar31 = local_51c * fVar28 * fVar30;
  uStack_38c = local_480;
  fVar30 = fVar30 * local_520 * fVar28;
  local_3b8 = CONCAT44(fVar31,fVar30);
  local_3bc = fVar33;
  local_3b0 = plVar12;
  uStack_388 = local_3b8;
  local_380 = fVar33;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar19 = DAT_146b33f38;
  lVar15 = DAT_146b33f38 + 0x30;
  lVar14 = FWeakObjectPtr::Get(lVar15);
  if (lVar14 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar19 + 0x38)) &&
       (local_540 = 0, *(longlong *)(lVar19 + 0x40) != 0)) {
      lVar14 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar15,lVar14);
      if ((lVar14 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar19 + 0x38) = DAT_1464b56f4;
      }
      lVar14 = FWeakObjectPtr::Get(lVar15);
      if (lVar14 != 0) goto LAB_1409e6eaf;
    }
LAB_1409e6ee5:
    lVar14 = 0;
  }
  else {
LAB_1409e6eaf:
    lVar19 = FUN_142e0ceb0();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar19 + 0x90) * 8
         ) != lVar19 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1409e6ee5;
  }
  uVar23 = local_490;
  lVar19 = 0;
  if (0 < (int)local_4a0) {
    fVar28 = (float)local_3d0;
    uVar7 = local_498._4_4_;
    uVar6 = (undefined4)local_498;
    puVar26 = local_4a8;
    local_510 = local_4a0 & 0xffffffff;
    do {
      uVar24 = *puVar26 & 0xffff;
      local_4c0 = DAT_1468b5d98;
      local_4b8 = CONCAT44(fVar31,fVar30);
      uVar2 = uVar24 - uVar37;
      if ((int)uVar24 < (int)uVar37) {
        uVar2 = uVar24;
      }
      local_4c8 = _DAT_1468b5d90;
      local_557 = 0;
      local_558 = 0;
      uVar11 = uVar6;
      uVar36 = uVar7;
      uVar37 = uVar23;
      local_550 = puVar26;
      local_4b0 = fVar33;
      if (*(longlong *)(local_528 + 0x80) != 0) {
        uStack_468 = 0;
        fStack_464 = 0.0;
        local_478 = 0;
        uStack_470 = 0;
        uStack_46c = 0;
        local_460 = 1;
        local_45c = 0;
        local_454 = 0;
        local_2f8 = local_3b0;
        uStack_2f0 = uStack_3a8;
        uStack_2e0 = CONCAT44(uStack_394,uStack_398);
        local_450 = 1;
        local_2e8 = local_3a0;
        local_2d8 = CONCAT44(uStack_38c,uStack_390);
        uStack_2d0 = uStack_388;
        local_2c8 = CONCAT44(uStack_37c,local_380);
        FUN_142d9d660(*(longlong *)(local_528 + 0x80),&local_2f8,&local_478);
        local_4b8 = CONCAT44(uStack_468,uStack_46c);
        local_4b0 = fStack_464;
        local_4c8 = local_45c;
        local_4c0 = local_454;
        local_557 = local_460;
        local_558 = local_450;
        uVar11 = (undefined4)local_478;
        uVar36 = local_478._4_4_;
        uVar37 = uStack_470;
      }
      plVar12 = local_4d8;
      lVar15 = local_528;
      uVar5 = local_557;
      uVar4 = local_558;
      lVar21 = (longlong)(int)uVar2;
      if ((int)uVar24 < (int)local_548) {
        if (*(char *)(*(longlong *)(local_528 + 0x68) + 8 + lVar21 * 0x28) == '\0') {
          iVar9 = rand();
          fVar30 = (*(float *)(lVar15 + 0x7c) - *(float *)(lVar15 + 0x78)) * (float)iVar9 *
                   3.051851e-05 + *(float *)(lVar15 + 0x78);
          lVar15 = *(longlong *)(lVar15 + 0x68);
        }
        else {
          iVar9 = rand();
          lVar15 = *(longlong *)(lVar15 + 0x68);
          fVar30 = (*(float *)(lVar15 + 0x10 + lVar21 * 0x28) -
                   *(float *)(lVar15 + 0xc + lVar21 * 0x28)) * (float)iVar9 * 3.051851e-05 +
                   *(float *)(lVar15 + 0xc + lVar21 * 0x28);
        }
        fVar30 = fVar30 * fVar28;
        FRotator::Quaternion(&local_488,&local_308);
        local_1d8 = local_308;
        uStack_1d0 = uStack_300;
        local_598 = *(undefined4 *)(local_528 + 0x88);
        local_568 = local_530;
        local_580 = &local_4c8;
        local_1c8._4_4_ = uVar36;
        local_1c8._0_4_ = uVar11;
        local_1c8._8_4_ = uVar37;
        local_1c8._12_4_ = 0;
        local_1b8._4_4_ = fVar30;
        local_1b8._0_4_ = fVar30;
        local_1b8._8_4_ = fVar30;
        local_1b8._12_4_ = 0;
        local_590 = &local_4b8;
        local_588 = uVar5;
        local_578 = uVar4;
        local_570 = fVar38;
        FUN_142d70190(local_538,*(longlong *)(local_528 + 0x68) + lVar21 * 0x28,&local_1d8,
                      *(undefined8 *)(lVar15 + 0x20 + lVar21 * 0x28));
        fVar30 = (float)local_3b8;
        fVar31 = (float)((ulonglong)local_3b8 >> 0x20);
      }
      else {
        puVar17 = (undefined8 *)(lVar21 * 0x90 + local_500);
        local_374 = 0x3f800000;
        local_370 = 0;
        local_378 = 1;
        local_36c = *(undefined4 *)(puVar17 + 0x10);
        local_360 = puVar17[0xb];
        local_208 = 0;
        lStack_200 = (ulonglong)uRam0000000146864dbc << 0x20;
        local_1f8 = ZEXT816(0);
        local_1e8._4_4_ = uRam0000000146864db4 & uRam0000000146864dc4;
        local_1e8._0_4_ = _DAT_146864db0 & _DAT_146864dc0;
        local_1e8._8_4_ = uRam0000000146864db8 & uRam0000000146864dc8;
        local_1e8._12_4_ = uRam0000000146864dbc & uRam0000000146864dcc;
        local_368 = local_36c;
        if (local_4d8 != (longlong *)0x0) {
          FUN_1423b0980(local_4d8,&local_508,*puVar17);
          local_540 = 0;
          if (local_508 == (longlong *)0x0) {
            puVar18 = (undefined8 *)(**(code **)(*plVar12 + 0x420))(plVar12,local_118,*puVar17,0);
            local_208 = *puVar18;
            lStack_200 = puVar18[1];
            local_1f8 = *(undefined1 (*) [16])(puVar18 + 2);
            local_1e8 = *(undefined1 (*) [16])(puVar18 + 4);
          }
          else {
            local_4d0 = 0;
            if (puVar17[10] == 0) {
              uVar11 = FUN_1423ac950();
              puVar18 = (undefined8 *)FUN_1423acfd0(plVar12,local_148,uVar11);
            }
            else {
              puVar18 = (undefined8 *)
                        (**(code **)(*plVar12 + 0x420))(plVar12,local_178,puVar17[10],0);
            }
            local_208 = *puVar18;
            lStack_200 = puVar18[1];
            local_1f8 = *(undefined1 (*) [16])(puVar18 + 2);
            fVar33 = *(float *)((longlong)puVar18 + 0x24);
            local_1e8 = *(undefined1 (*) [16])(puVar18 + 4);
            if ((*(char *)((longlong)puVar17 + 0x7c) == '\0') || (local_508 == (longlong *)*puVar17)
               ) {
              fVar32 = *(float *)(puVar17 + 0x10);
              fVar34 = fVar32 * *(float *)(puVar18 + 5);
              fVar35 = fVar32 * *(float *)*(undefined1 (*) [16])(puVar18 + 4);
            }
            else {
              (**(code **)(*plVar12 + 0x420))(plVar12,local_1a8,*puVar17,0);
              fVar32 = *(float *)(puVar17 + 0x10);
              fVar34 = fVar32 * fStack_180;
              fVar35 = fVar32 * local_188;
              fVar33 = fStack_184;
            }
            local_1e8._4_4_ = fVar32 * fVar33;
            local_1e8._0_4_ = fVar35;
            local_1e8._8_4_ = fVar34;
            local_1e8._12_4_ = 0;
          }
          if (*(char *)((longlong)puVar17 + 0x4b) != '\0') {
            plVar16 = (longlong *)
                      (**(code **)(*plVar12 + 0x560))(plVar12,*(undefined4 *)(puVar17 + 0x11));
            plVar12 = (longlong *)puVar17[0xe];
            if (plVar12 == (longlong *)0x0) {
              lVar15 = puVar17[0xb];
              if (lVar15 == 0) {
LAB_1409e72f7:
                lVar15 = puVar17[0xb];
                if (lVar15 != 0) {
                  lVar21 = UNodeMappingContainer::StaticClass();
                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar21 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar21 + 0x90) * 8) != lVar21 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    plVar12 = (longlong *)UStaticMesh::GetMaterial(lVar15,0);
                  }
                }
              }
              else {
                lVar21 = USkeleton::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar21 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar21 + 0x90) * 8) != lVar21 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) goto LAB_1409e72f7;
                if (*(int *)(lVar15 + 0xa8) < 1) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  plVar12 = (longlong *)**(undefined8 **)(lVar15 + 0xa0);
                }
              }
              if (*(char *)((longlong)puVar17 + 0x4c) == '\x02') {
                puVar26 = local_550;
                if (plVar12 == (longlong *)0x0) goto LAB_1409e74af;
                if (plVar16 != (longlong *)0x0) {
                  lVar15 = (**(code **)(*plVar12 + 0x290))(plVar12);
                  lVar21 = (**(code **)(*plVar16 + 0x290))(plVar16);
                  plVar8 = plVar16;
                  if (lVar15 == lVar21) {
                    while (plVar12 = plVar8, puVar26 = local_550, plVar12 != (longlong *)0x0) {
                      lVar15 = FUN_1429ba110();
                      if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
                           ) != lVar15 + 0x88)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      if (!bVar3) goto LAB_1409e7417;
                      lVar15 = FUN_1429ba110();
                      plVar8 = plRam0000000000000090;
                      if ((*(int *)(lVar15 + 0x90) <= *(int *)(plVar12[2] + 0x90)) &&
                         (*(longlong *)
                           (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
                           ) == lVar15 + 0x88)) {
                        plVar8 = (longlong *)plVar12[0x12];
                      }
                    }
                    goto LAB_1409e74af;
                  }
                }
              }
LAB_1409e7417:
              puVar26 = local_550;
              if (plVar12 == (longlong *)0x0) goto LAB_1409e74af;
            }
            puVar26 = local_550;
            if (((((lVar19 == 0) || (*(longlong **)(lVar19 + 0x90) != plVar12)) &&
                 (plVar12 != (longlong *)0x0)) &&
                ((plVar16 != (longlong *)0x0 &&
                 (lVar19 = UMaterialInstanceDynamic::Create(plVar12,0), puVar26 = local_550,
                 lVar19 != 0)))) &&
               (FUN_142589350(lVar19,plVar16,*(undefined1 *)((longlong)puVar17 + 0x4c)),
               puVar26 = local_550, lVar14 != 0)) {
              puVar18 = *(undefined8 **)(lVar14 + 0x1e8);
              uVar27 = 0;
              uVar25 = (longlong)*(int *)(lVar14 + 0x1f0) & 0x1fffffffffffffff;
              if (puVar18 + *(int *)(lVar14 + 0x1f0) < puVar18) {
                uVar25 = uVar27;
              }
              if (uVar25 != 0) {
                do {
                  FUN_142588f70(lVar19,*puVar18);
                  uVar27 = uVar27 + 1;
                  puVar18 = puVar18 + 1;
                  puVar26 = local_550;
                } while (uVar27 != uVar25);
              }
            }
          }
        }
LAB_1409e74af:
        local_598 = *(undefined4 *)((longlong)puVar17 + 0x84);
        local_568 = local_530;
        local_578 = local_558;
        local_580 = &local_4c8;
        local_588 = local_557;
        local_590 = &local_4b8;
        local_570 = fVar38;
        FUN_142d70190(local_538,&local_378,&local_208);
      }
      puVar26 = puVar26 + 1;
      local_510 = local_510 - 1;
      uVar37 = local_548;
      fVar33 = local_3bc;
    } while (local_510 != 0);
    local_510 = 0;
    local_550 = puVar26;
  }
  if (local_4a8 != (uint *)0x0) {
    FMemory::Free();
  }
  local_218 = 0;
  if (local_220 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_260);
LAB_1409e76e6:
  if (local_500 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409e7740 FUN_1409e7740 body=70 status=ok
// SIG undefined FUN_1409e7740(void)

void FUN_1409e7740(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x4e] != 0) {
    return;
  }
  lVar1 = FUN_1413e2c80();
  param_1[0x4e] = lVar1;
  if (lVar1 == 0) {
    FUN_1409bce70();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001409e7779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 1409e7790 FUN_1409e7790 body=502 status=ok
// SIG undefined FUN_1409e7790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e7790(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
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
  lVar3 = *(longlong *)(param_1 + 0x5f0);
  lVar4 = (longlong)*(int *)(param_1 + 0x5f8) * 0x68 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x68) {
    FUN_1409e5bf0(param_1,lVar3,*(undefined4 *)(param_1 + 0x594));
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x90);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x594);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_1409dcec0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_a0 = 0xbf800000;
  local_a8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar5,param_1 + 0x628,&local_98,uVar1);
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1409e7990 FUN_1409e7990 body=672 status=ok
// SIG undefined FUN_1409e7990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e7990(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142398ec0(*(undefined8 *)(param_3 + 0x10),1,2);
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))(*(longlong **)(param_2 + 0x18),1);
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_1 + 0x500);
    FUN_1409e9230(param_1,param_3);
    plVar4 = (longlong *)(param_1 + 0x620);
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x628) = 0;
    if (*(int *)(param_1 + 0x62c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar4,0);
      iVar7 = *(int *)(param_1 + 0x628);
    }
    lVar5 = *(longlong *)(param_3 + 0x28);
    uStack_ec = 0;
    uStack_e4 = 0;
    local_f8 = *(undefined4 *)(lVar5 + 0x220);
    uStack_f4 = *(undefined4 *)(lVar5 + 0x224);
    uStack_f0 = *(undefined4 *)(lVar5 + 0x228);
    uStack_e0 = *(undefined4 *)(param_3 + 0x38);
    uStack_dc = *(undefined4 *)(param_1 + 0x4d8);
    *(int *)(param_1 + 0x628) = iVar7 + 1;
    local_d0 = uStack_f0;
    if (*(int *)(param_1 + 0x62c) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar4,iVar7);
    }
    lVar5 = *plVar4;
    puVar1 = (undefined4 *)((longlong)iVar7 * 0x20 + lVar5);
    *puVar1 = local_f8;
    puVar1[1] = uStack_f4;
    puVar1[2] = uStack_f0;
    puVar1[3] = (undefined4)uStack_ec;
    puVar1 = (undefined4 *)((longlong)iVar7 * 0x20 + 0x10 + lVar5);
    *puVar1 = uStack_ec._4_4_;
    puVar1[1] = uStack_e4;
    puVar1[2] = uStack_e0;
    puVar1[3] = uStack_dc;
    FUN_1409e0990(param_1,param_2);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_1441bfec8;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)FUN_1409dcf90;
      plVar4[3] = param_2;
      plVar4[4] = param_3;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_1441bff10;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x500);
    uVar3 = *(undefined8 *)(param_1 + 0x578);
    local_c8 = 0;
    local_c0 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_100 = 0xbf800000;
    local_108 = 0;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_3 + 0x40,&local_c8,uVar2);
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
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1409e7c30 FUN_1409e7c30 body=651 status=ok
// SIG undefined FUN_1409e7c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e7c30(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_142398ec0(*(undefined8 *)(param_3 + 8),1,2);
  *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_1 + 0x590);
  FUN_1409e93f0(param_1,param_3);
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))(*(longlong **)(param_2 + 0x18),1);
  plVar3 = (longlong *)(param_1 + 0x6b0);
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  if (*(int *)(param_1 + 0x6bc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar3,0);
    iVar7 = *(int *)(param_1 + 0x6b8);
  }
  lVar4 = *(longlong *)(param_3 + 0x20);
  uStack_ec = 0;
  uStack_e4 = 0;
  local_f8 = *(undefined4 *)(lVar4 + 0x220);
  uStack_f4 = *(undefined4 *)(lVar4 + 0x224);
  uStack_f0 = *(undefined4 *)(lVar4 + 0x228);
  uStack_e0 = *(undefined4 *)(param_3 + 0x30);
  uStack_dc = *(undefined4 *)(param_1 + 0x568);
  *(int *)(param_1 + 0x6b8) = iVar7 + 1;
  local_d0 = uStack_f0;
  if (*(int *)(param_1 + 0x6bc) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar3,iVar7);
  }
  lVar4 = *plVar3;
  puVar1 = (undefined4 *)((longlong)iVar7 * 0x20 + lVar4);
  *puVar1 = local_f8;
  puVar1[1] = uStack_f4;
  puVar1[2] = uStack_f0;
  puVar1[3] = (undefined4)uStack_ec;
  puVar1 = (undefined4 *)((longlong)iVar7 * 0x20 + 0x10 + lVar4);
  *puVar1 = uStack_ec._4_4_;
  puVar1[1] = uStack_e4;
  puVar1[2] = uStack_e0;
  puVar1[3] = uStack_dc;
  FUN_1409e0ac0(param_1,param_2);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1441bfec8;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)FUN_1409dd030;
    plVar3[3] = param_2;
    plVar3[4] = param_3;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1441bff10;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x90);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x590);
  local_c8 = 0;
  local_c0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
  }
  FWeakObjectPtr::operator=(local_b8,0);
  local_100 = 0xbf800000;
  local_108 = 0;
  local_b0 = 0;
  local_78 = (longlong *)0x0;
  local_68 = 0;
  local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar5,param_3 + 0x38,&local_c8,uVar2);
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
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 1409e7ec0 FUN_1409e7ec0 body=615 status=ok
// SIG undefined FUN_1409e7ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e7ec0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    plVar5 = (longlong *)(param_1 + 0x560);
    FUN_1409d1cc0(plVar5,0);
    lVar7 = *(longlong *)(param_1 + 0x550);
    lVar9 = (longlong)*(int *)(param_1 + 0x558) * 0x68 + lVar7;
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x68) {
      piVar6 = (int *)*param_2;
      piVar1 = piVar6 + *(int *)(param_2 + 1);
      if (piVar6 != piVar1) {
        do {
          if (*piVar6 == *(int *)(lVar7 + 0x38)) goto LAB_1409e7f9b;
          piVar6 = piVar6 + 1;
        } while (piVar6 != piVar1);
      }
      iVar3 = *(int *)(param_1 + 0x568);
      *(int *)(param_1 + 0x568) = iVar3 + 1;
      if (*(int *)(param_1 + 0x56c) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar5,iVar3);
      }
      FUN_1409c2a00((longlong)iVar3 * 0x68 + *plVar5,lVar7);
      FUN_1409e5a60(param_1,lVar7,*(undefined4 *)(param_1 + 0x504));
LAB_1409e7f9b:
    }
    uVar2 = *(undefined4 *)(param_1 + 0x504);
    uVar4 = *(undefined8 *)(param_1 + 0x578);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_1409dcd30;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar7;
      *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x598,&local_a8,uVar2);
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
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar7 = FMemory::Realloc(plVar5,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  return;
}



// FUNCTION 1409e8130 FUN_1409e8130 body=162 status=ok
// SIG undefined FUN_1409e8130(void)

void FUN_1409e8130(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x5e0);
  lVar3 = (longlong)*(int *)(param_1 + 0x5e8) * 0x68 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x68) {
    if (*(int *)(lVar2 + 0x38) != param_2) {
      iVar1 = *(int *)(param_1 + 0x5f8);
      *(int *)(param_1 + 0x5f8) = iVar1 + 1;
      if (*(int *)(param_1 + 0x5fc) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x5f0,iVar1);
      }
      FUN_1409c2770((longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 0x5f0),lVar2);
    }
  }
  FUN_1409e7790(param_1);
  return;
}



// FUNCTION 1409e81e0 FUN_1409e81e0 body=905 status=ok
// SIG undefined FUN_1409e81e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e81e0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 auStack_128 [32];
  int local_108;
  uint uStack_104;
  undefined8 uStack_100;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  int iStack_e0;
  uint uStack_dc;
  uint *local_d8;
  uint uStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  longlong *local_b0;
  int iStack_a8;
  uint uStack_a4;
  uint *puStack_a0;
  uint uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88 [2];
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_58 = 0xffffffff;
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar4 = FUN_1429d7ab0();
  FUN_14238c610(*(undefined8 *)(param_3 + 8),local_88,uVar4);
  iVar6 = (int)local_60;
  local_d8 = local_78;
  local_108 = 0;
  uStack_104 = 1;
  iStack_f4 = 0;
  iStack_f0 = 0;
  if ((int)local_60 != 0) {
    puVar8 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar8 = local_68;
    }
    uVar2 = *puVar8;
    iStack_f0 = 0;
    local_108 = 0;
    while (uVar2 == 0) {
      iStack_f0 = iStack_f0 + 0x20;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_108) {
        iStack_f4 = (int)local_60;
        local_108 = local_108 + 1;
        goto LAB_1409e830a;
      }
      uVar2 = puVar8[(longlong)local_108 + 1];
      local_108 = local_108 + 1;
    }
    uStack_104 = -uVar2 & uVar2;
    iVar3 = 0x1f;
    if (uStack_104 != 0) {
      for (; uStack_104 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_104 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    iStack_f4 = (iStack_f0 - iVar3) + 0x1f;
    if ((int)local_60 < iStack_f4) {
      iStack_f4 = (int)local_60;
    }
  }
LAB_1409e830a:
  uStack_d0 = 0xffffffff;
  iStack_cc = iStack_f4;
  local_c8 = CONCAT44(uStack_ec,iStack_f0);
  local_e8 = local_88;
  iStack_e0 = local_108;
  uStack_dc = uStack_104;
  iStack_f8 = -1 << ((byte)local_60 & 0x1f);
  iStack_f4 = (int)local_60;
  local_b0 = local_e8;
  puStack_a0 = local_d8;
  uStack_90 = local_c8;
  iStack_a8 = iStack_e0;
  uStack_a4 = uStack_dc;
  uStack_98 = uStack_d0;
  iStack_94 = iStack_cc;
  uStack_100 = local_d8;
  while (((iStack_cc != iVar6 || (local_d8 != local_78)) || (local_e8 != local_88))) {
    FUN_1409cd640(param_1,*(undefined8 *)(*local_e8 + (longlong)iStack_cc * 0x10));
    uStack_d0 = uStack_d0 & ~uStack_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e0);
  }
  lVar7 = *(longlong *)(param_3 + 0x28);
  uStack_100._4_4_ = 0;
  iStack_f8 = 0;
  iStack_f4 = 0;
  local_108 = *(undefined4 *)(lVar7 + 0x220);
  uStack_104 = *(undefined4 *)(lVar7 + 0x224);
  uStack_100._0_4_ = *(undefined4 *)(lVar7 + 0x228);
  iStack_f0 = *(undefined4 *)(param_3 + 0x38);
  uStack_ec = *(undefined4 *)(param_1 + 0x4d8);
  local_b8 = (undefined4)uStack_100;
  iVar3 = rand();
  iVar6 = 3;
  if ((int)((float)iVar3 * 0.00012207404) < 4) {
    iVar6 = (int)((float)iVar3 * 0.00012207404);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x5e8);
    lVar7 = (longlong)iVar6;
    *(int *)(param_1 + 0x5e8) = iVar6 + 1;
    if (*(int *)(param_1 + 0x5ec) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x5e0,iVar6);
    }
    lVar5 = *(longlong *)(param_1 + 0x5e0);
  }
  else if (iVar6 == 1) {
    iVar6 = *(int *)(param_1 + 0x5f8);
    lVar7 = (longlong)iVar6;
    *(int *)(param_1 + 0x5f8) = iVar6 + 1;
    if (*(int *)(param_1 + 0x5fc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x5f0,iVar6);
    }
    lVar5 = *(longlong *)(param_1 + 0x5f0);
  }
  else if (iVar6 == 2) {
    iVar6 = *(int *)(param_1 + 0x608);
    lVar7 = (longlong)iVar6;
    *(int *)(param_1 + 0x608) = iVar6 + 1;
    if (*(int *)(param_1 + 0x60c) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x600,iVar6);
    }
    lVar5 = *(longlong *)(param_1 + 0x600);
  }
  else {
    if (iVar6 != 3) goto LAB_1409e850f;
    iVar6 = *(int *)(param_1 + 0x618);
    lVar7 = (longlong)iVar6;
    *(int *)(param_1 + 0x618) = iVar6 + 1;
    if (*(int *)(param_1 + 0x61c) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x610,iVar6);
    }
    lVar5 = *(longlong *)(param_1 + 0x610);
  }
  puVar1 = (undefined8 *)(lVar7 * 0x20 + lVar5);
  *puVar1 = CONCAT44(uStack_104,local_108);
  puVar1[1] = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  puVar1 = (undefined8 *)(lVar7 * 0x20 + 0x10 + lVar5);
  *puVar1 = CONCAT44(iStack_f4,iStack_f8);
  puVar1[1] = CONCAT44(uStack_ec,iStack_f0);
LAB_1409e850f:
  (**(code **)(**(longlong **)(param_3 + 0x28) + 0x280))(*(longlong **)(param_3 + 0x28),1);
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x288))();
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  return;
}



// FUNCTION 1409e8570 FUN_1409e8570 body=2036 status=ok
// SIG undefined FUN_1409e8570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409e8570(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  ulonglong uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined8 *local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  undefined8 *local_2e8;
  longlong **local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  int iStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined2 local_278;
  undefined2 uStack_276;
  undefined4 uStack_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  uint uStack_244;
  undefined4 local_240;
  int iStack_23c;
  uint local_238;
  longlong *local_230;
  longlong local_228;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong *local_1c8;
  undefined8 uStack_1c0;
  uint *local_1b8;
  uint uStack_1b0;
  int iStack_1ac;
  undefined8 local_1a8;
  longlong *local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint uStack_180;
  int iStack_17c;
  undefined8 uStack_178;
  longlong *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  uint uStack_150;
  int iStack_14c;
  longlong local_148 [2];
  uint local_138 [4];
  uint *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_230 = param_3;
  local_228 = param_2;
  (**(code **)(*(longlong *)*param_3 + 0x638))((longlong *)*param_3,1);
  uVar14 = 0;
  local_118 = 0xffffffff;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = (uint *)0x0;
  local_120 = 0;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  uVar8 = FUN_1429d7ab0();
  FUN_14238c610(*param_3,local_148,uVar8);
  pvVar5 = ThreadLocalStoragePointer;
  iVar12 = (int)local_120;
  local_1b8 = local_138;
  local_298 = 0x100000000;
  iStack_284 = 0;
  uStack_280 = 0;
  if ((int)local_120 != 0) {
    puVar17 = local_138;
    if (local_128 != (uint *)0x0) {
      puVar17 = local_128;
    }
    uVar6 = *puVar17;
    uVar13 = uVar14;
    uVar15 = uVar14;
    while (uVar6 == 0) {
      iVar7 = (int)uVar13;
      uStack_280 = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)uStack_280;
      uVar13 = (ulonglong)(iVar7 + 1U);
      uVar4 = (ulonglong)local_298 >> 0x20;
      local_298 = CONCAT44((int)uVar4,iVar7 + 1U);
      if ((int)((int)local_120 + -1 + ((int)local_120 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) {
        iStack_284 = (int)local_120;
        goto LAB_1409e86d8;
      }
      uVar6 = puVar17[(longlong)iVar7 + 1];
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_298 = CONCAT44(uVar6,(undefined4)local_298);
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_284 = (uStack_280 - iVar7) + 0x1f;
    if ((int)local_120 < iStack_284) {
      iStack_284 = (int)local_120;
    }
  }
LAB_1409e86d8:
  uStack_288 = 0xffffffff;
  uVar13 = (ulonglong)_tls_index;
  local_1c8 = local_148;
  uStack_1b0 = 0xffffffff;
  iStack_1ac = iStack_284;
  local_1a8 = CONCAT44(uStack_27c,uStack_280);
  uStack_190 = local_298;
  uStack_1c0 = local_298;
  local_198 = local_1c8;
  uStack_188 = local_1b8;
  uStack_178 = local_1a8;
  uStack_290 = local_1b8;
  uStack_180 = uStack_1b0;
  iStack_17c = iStack_1ac;
  while( true ) {
    plVar16 = local_230;
    if ((iStack_1ac == iVar12) && (local_1b8 == local_138)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_1c8 == local_148)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    uVar15 = *(ulonglong *)(*local_1c8 + (longlong)iStack_1ac * 0x10);
    if (uVar15 == 0) {
LAB_1409e87c6:
      uVar15 = uVar14;
    }
    else {
      lVar9 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(uVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1409e87c6;
    }
    if (uVar15 != 0) {
      _guard_xfg_dispatch_icall_nop(&local_f8,0,0x90);
      local_ec = 0x3f800000;
      FUN_142d979c0(&local_168);
      local_250 = 0xbf800000;
      uStack_24c = 0xbf800000;
      uStack_248 = 0xbf800000;
      uStack_244 = uStack_244 & 0xffffff00;
      local_240 = 0x3f800000;
      iStack_23c = 0x3f800000;
      local_238 = 0x3f800000;
      local_278 = 0;
      uStack_274 = 0;
      local_258 = 0x3f800000;
      uStack_254 = 0x3f800000;
      if (*(int *)(*(longlong *)((longlong)pvVar5 + uVar13 * 8) + 0x38) < DAT_146865740) {
        _Init_thread_header(&DAT_146865740);
        if (DAT_146865740 == -1) {
          FName::FName(&DAT_146865738,&DAT_14419d1cc,1);
          _Init_thread_footer(&DAT_146865740);
        }
      }
      local_298 = CONCAT44(uStack_24c,local_250);
      local_2a8 = 0;
      local_2b0 = 0;
      uStack_280 = local_238;
      local_200 = DAT_1468b5da8;
      local_1f0 = DAT_1468b5da8;
      local_2c0 = CONCAT44(uStack_274,CONCAT22(uStack_276,local_278));
      uStack_290._0_4_ = uStack_248;
      uStack_290._4_4_ = uStack_244;
      local_210 = DAT_1468b5d98;
      uStack_288 = local_240;
      iStack_284 = iStack_23c;
      local_1e0 = DAT_1468b5d98;
      local_198 = local_168;
      uStack_190 = uStack_160;
      local_208 = DAT_1468b5da0;
      local_1f8 = DAT_1468b5da0;
      local_2b8 = CONCAT44(uStack_254,local_258);
      local_2c8 = &local_298;
      local_2e0 = &local_198;
      local_2d0 = 0;
      local_2d8 = 0;
      local_2f8 = &local_208;
      local_2f0 = 0;
      local_300 = &local_1f8;
      local_308 = &local_1e8;
      local_310 = &local_1d8;
      local_318 = DAT_146865738;
      local_340 = &local_268;
      local_320 = 0;
      local_328 = 0;
      local_330 = 0;
      local_338 = 0;
      local_348 = &local_f8;
      local_1d0 = DAT_1468b5d98;
      local_260 = DAT_1468b5d98;
      uStack_188 = (uint *)CONCAT44(uStack_154,local_158);
      uStack_180 = uStack_150;
      iStack_17c = iStack_14c;
      local_218 = _DAT_1468b5d90;
      local_1e8 = _DAT_1468b5d90;
      local_1d8 = _DAT_1468b5d90;
      local_268 = _DAT_1468b5d90;
      local_2e8 = &local_218;
      FUN_140a875c0(*(undefined8 *)(param_1 + 0x630),*(undefined8 *)(param_1 + 0x4f8),uVar15,
                    *(undefined4 *)(param_1 + 0x5a8));
    }
    uStack_1b0 = uStack_1b0 & ~uStack_1c0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1c0);
  }
  if (*(char *)(param_1 + 0x5d8) != '\0') {
    *(byte *)(*local_230 + 0x24c) = *(byte *)(*local_230 + 0x24c) & 0xbf;
    FUN_142398ec0(*local_230,1);
  }
  uStack_290._4_4_ = 0;
  uStack_288 = 0;
  iStack_284 = 0;
  local_298 = *(undefined8 *)(plVar16[4] + 0x220);
  uStack_290._0_4_ = *(undefined4 *)(plVar16[4] + 0x228);
  uStack_280 = (uint)plVar16[6];
  uStack_27c = *(undefined4 *)(param_1 + 0x568);
  local_260 = (undefined4)uStack_290;
  iVar7 = rand();
  iVar12 = 3;
  if ((int)((float)iVar7 * 0.00012207404) < 4) {
    iVar12 = (int)((float)iVar7 * 0.00012207404);
  }
  if (iVar12 == 0) {
    iVar12 = *(int *)(param_1 + 0x678);
    lVar9 = (longlong)iVar12;
    *(int *)(param_1 + 0x678) = iVar12 + 1;
    if (*(int *)(param_1 + 0x67c) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x670,iVar12);
    }
    lVar10 = *(longlong *)(param_1 + 0x670);
  }
  else if (iVar12 == 1) {
    iVar12 = *(int *)(param_1 + 0x688);
    lVar9 = (longlong)iVar12;
    *(int *)(param_1 + 0x688) = iVar12 + 1;
    if (*(int *)(param_1 + 0x68c) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x680,iVar12);
    }
    lVar10 = *(longlong *)(param_1 + 0x680);
  }
  else if (iVar12 == 2) {
    iVar12 = *(int *)(param_1 + 0x698);
    lVar9 = (longlong)iVar12;
    *(int *)(param_1 + 0x698) = iVar12 + 1;
    if (*(int *)(param_1 + 0x69c) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x690,iVar12);
    }
    lVar10 = *(longlong *)(param_1 + 0x690);
  }
  else {
    if (iVar12 != 3) goto LAB_1409e8b54;
    iVar12 = *(int *)(param_1 + 0x6a8);
    lVar9 = (longlong)iVar12;
    *(int *)(param_1 + 0x6a8) = iVar12 + 1;
    if (*(int *)(param_1 + 0x6ac) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x6a0,iVar12);
    }
    lVar10 = *(longlong *)(param_1 + 0x6a0);
  }
  puVar1 = (undefined8 *)(lVar9 * 0x20 + lVar10);
  *puVar1 = local_298;
  puVar1[1] = CONCAT44(uStack_290._4_4_,(undefined4)uStack_290);
  puVar1 = (undefined8 *)(lVar9 * 0x20 + 0x10 + lVar10);
  *puVar1 = CONCAT44(iStack_284,uStack_288);
  puVar1[1] = CONCAT44(uStack_27c,uStack_280);
LAB_1409e8b54:
  (**(code **)(*(longlong *)plVar16[4] + 0x280))((longlong *)plVar16[4],1);
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_1441bfec8;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_1409ea770;
    plVar11[3] = local_228;
    plVar11[4] = (longlong)plVar16;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[5] = lVar9;
    *plVar11 = (longlong)&PTR_FUN_1441bff10;
  }
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar9 == 0) {
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar8 = *(undefined8 *)(lVar9 + 0x90);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x59c);
  local_f8 = 0;
  local_f0 = 0;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,&local_f8);
  }
  FWeakObjectPtr::operator=(local_e8,0);
  local_340 = (undefined8 *)CONCAT44(local_340._4_4_,0xbf800000);
  local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_e0 = 0;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  local_348 = (undefined8 *)((ulonglong)local_348 & 0xffffffffffffff00);
  FUN_142880850(uVar8,plVar16 + 5,&local_f8,uVar2);
  if (local_98 != 0) {
    plVar16 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar16 = local_a8;
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    lVar9 = FMemory::Realloc(plVar11,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  local_100 = 0;
  if (local_108 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_148);
  return;
}



// FUNCTION 1409e8d70 FUN_1409e8d70 body=494 status=ok
// SIG undefined FUN_1409e8d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e8d70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)(param_2 + 8);
  lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0x68 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x68) {
    FUN_1409e8570(param_1,param_2,lVar3);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x90);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x59c);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)&LAB_1409ddc60;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_b0 = 0xbf800000;
  local_b8 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar5,param_1 + 0x620,&local_a8,uVar1);
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1409e8f60 FUN_1409e8f60 body=347 status=ok
// SIG undefined FUN_1409e8f60(void)

void FUN_1409e8f60(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float local_res8 [2];
  undefined4 local_res18 [4];
  
  if (*(longlong *)(param_1 + 0x578) != 0) {
    local_res18[0] = 0;
    local_res8[0] = 0.0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146865590) &&
       (_Init_thread_header(&DAT_146865590), DAT_146865590 == -1)) {
      FName::FName(&DAT_146865588,"Emissive_Intensity",1);
      _Init_thread_footer(&DAT_146865590);
    }
    *(float *)(param_2 + 0x60) = *(float *)(param_1 + 0x518) + *(float *)(param_2 + 0x60);
    FUN_1423d62c0(*(undefined8 *)(param_1 + 0x520),local_res18,local_res8);
    uVar3 = UCurveFloat::GetFloatValue
                      (*(undefined8 *)(param_1 + 0x520),
                       (*(float *)(param_2 + 0x60) / *(float *)(param_2 + 0x68)) * local_res8[0]);
    if (*(float *)(param_2 + 0x68) < *(float *)(param_2 + 0x60) ||
        *(float *)(param_2 + 0x68) == *(float *)(param_2 + 0x60)) {
      FUN_142880530(*(undefined8 *)(param_1 + 0x578),param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x50) = 0;
    }
    else {
      uVar2 = FWeakObjectPtr::Get(param_2 + 0x20);
      cVar1 = FUN_1417904d0(uVar2,1);
      if (cVar1 != '\0') {
        uVar2 = FWeakObjectPtr::Get(param_2 + 0x20);
        FUN_1425a2750(uVar2,DAT_146865588,uVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409e90c0 FUN_1409e90c0 body=359 status=ok
// SIG undefined FUN_1409e90c0(void)

void FUN_1409e90c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  local_res8[0] = 0.0;
  *(float *)(param_2 + 0x58) = *(float *)(param_1 + 0x5b0) + *(float *)(param_2 + 0x58);
  FUN_1423d62c0(*(undefined8 *)(param_1 + 0x5b8),local_res10,local_res8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146865720) {
    _Init_thread_header(&DAT_146865720);
    if (DAT_146865720 == -1) {
      FName::FName(&DAT_146865718,"Emissive_Intensity",1);
      _Init_thread_footer(&DAT_146865720);
    }
  }
  uVar4 = UCurveFloat::GetFloatValue
                    (*(undefined8 *)(param_1 + 0x5b8),
                     (*(float *)(param_2 + 0x58) / *(float *)(param_2 + 0x60)) * local_res8[0]);
  if (*(float *)(param_2 + 0x60) < *(float *)(param_2 + 0x58) ||
      *(float *)(param_2 + 0x60) == *(float *)(param_2 + 0x58)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x90);
    }
    FUN_142880530(uVar3,param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  else {
    uVar3 = FWeakObjectPtr::Get(param_2 + 0x18);
    cVar2 = FUN_1417904d0(uVar3,1);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_2 + 0x18);
      FUN_1425a2750(uVar3,DAT_146865718,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1409e9230 FUN_1409e9230 body=436 status=ok
// SIG undefined FUN_1409e9230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e9230(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    *(undefined4 *)(param_2 + 0x60) = 0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1441bfda8;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_1409e8f60;
      plVar3[3] = param_2;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1441bfdf0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x518);
    uVar2 = *(undefined8 *)(param_1 + 0x578);
    local_a8 = 0;
    local_a0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_b0 = 0xbf800000;
    local_b8 = 1;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_2 + 0x50,&local_a8,uVar1);
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



// FUNCTION 1409e93f0 FUN_1409e93f0 body=455 status=ok
// SIG undefined FUN_1409e93f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e93f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_2 + 0x58) = 0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1441bfda8;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_1409e90c0;
    plVar2[3] = param_2;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_1441bfdf0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x5b0);
  local_a8 = 0;
  local_a0 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_b0 = 0xbf800000;
  local_b8 = 1;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_2 + 0x48,&local_a8,uVar1);
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1409e95c0 FUN_1409e95c0 body=499 status=ok
// SIG undefined FUN_1409e95c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e95c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    *(undefined1 *)(param_1 + 0x630) = 1;
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
    *(undefined4 *)(param_1 + 0x5b8) = 0;
    FUN_1409ef7b0(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x514);
    uVar2 = *(undefined8 *)(param_1 + 0x578);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_1409c78e0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0x580,&local_a8,uVar1);
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



// FUNCTION 1409e97c0 FUN_1409e97c0 body=518 status=ok
// SIG undefined FUN_1409e97c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e97c0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x6c0) = 1;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
  }
  FUN_142880530(uVar4,param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined4 *)(param_1 + 0x648) = 0;
  FUN_1409efb70(param_1);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x5ac);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_1409c7c70;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_b0 = 0xbf800000;
  local_b8 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_1 + 0x610,&local_a8,uVar1);
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1409e99d0 FUN_1409e99d0 body=102 status=ok
// SIG undefined FUN_1409e99d0(void)

void FUN_1409e99d0(longlong param_1,float param_2,float *param_3)

{
  float fVar1;
  
  if (ABS(param_2) <= 1e-08) {
    param_2 = 1e-08;
  }
  fVar1 = param_3[2];
  *(ulonglong *)(param_1 + 0x470) = CONCAT44(param_3[1] / param_2,*param_3 / param_2);
  *(float *)(param_1 + 0x478) = fVar1 / param_2;
  *(float *)(param_1 + 0x47c) = param_2;
  return;
}



// FUNCTION 1409e9a40 FUN_1409e9a40 body=492 status=ok
// SIG undefined FUN_1409e9a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e9a40(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    *(undefined1 *)(param_1 + 0x630) = 1;
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
    FUN_1409ef7b0(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x4f0);
    uVar2 = *(undefined8 *)(param_1 + 0x578);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_1409dfdb0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0x580,&local_a8,uVar1);
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



// FUNCTION 1409e9c30 FUN_1409e9c30 body=512 status=ok
// SIG undefined FUN_1409e9c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e9c30(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x6c0) = 1;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
  }
  FUN_142880530(uVar4,param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x610) = 0;
  FUN_1409efb70(param_1);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x580);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_1409dfe90;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_b0 = 0xbf800000;
  local_b8 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_1 + 0x610,&local_a8,uVar1);
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1409e9e30 FUN_1409e9e30 body=500 status=ok
// SIG undefined FUN_1409e9e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409e9e30(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    *(undefined1 *)(param_1 + 0x630) = 1;
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
    FUN_1409ef7b0(param_1);
    fVar1 = *(float *)(param_1 + 0x4f4);
    fVar2 = *(float *)(param_1 + 0x4f0);
    uVar3 = *(undefined8 *)(param_1 + 0x578);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)FUN_1409dff80;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x580,&local_a8,fVar1 + fVar2);
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
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1409ea030 FUN_1409ea030 body=520 status=ok
// SIG undefined FUN_1409ea030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409ea030(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x6c0) = 1;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x90);
  }
  FUN_142880530(uVar5,param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x610) = 0;
  FUN_1409efb70(param_1);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x90);
  }
  fVar1 = *(float *)(param_1 + 0x584);
  fVar2 = *(float *)(param_1 + 0x580);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)FUN_1409e00b0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_b0 = 0xbf800000;
  local_b8 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar5,param_1 + 0x610,&local_a8,fVar1 + fVar2);
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
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 1409ea240 FUN_1409ea240 body=60 status=ok
// SIG undefined FUN_1409ea240(void)

void FUN_1409ea240(longlong param_1)

{
  undefined1 local_res8 [32];
  
  if (*(char *)(param_1 + 0x2330) == '\0') {
    *(undefined1 *)(param_1 + 0x2330) = 1;
    local_res8[0] = 1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x2338,local_res8);
    *(undefined1 *)(param_1 + 0x23d0) = 1;
  }
  return;
}



// FUNCTION 1409ea290 FUN_1409ea290 body=1037 status=ok
// SIG undefined FUN_1409ea290(void)

void FUN_1409ea290(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined1 local_res20 [8];
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  undefined4 *puStack_b0;
  undefined1 *local_a8;
  undefined **local_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong *local_88;
  undefined4 *puStack_80;
  undefined1 *local_78;
  undefined ***local_68;
  undefined1 local_60 [32];
  
  *(undefined1 *)(param_1 + 0xa2) = 1;
  plVar6 = (longlong *)FUN_142c6f130();
  lVar3 = param_1[2];
  local_res18 = FUN_1409d7d20(param_1);
  if (local_res18 == 0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    return;
  }
  local_res10[0] = 0;
  if (plVar6 != (longlong *)0x0) {
    uVar7 = FUN_1430a8880();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar7);
    if ((plVar8 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar8 + 0xf0))(plVar8,0), lVar9 != 0)
       ) {
      lVar10 = FUN_14149b100();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((((bVar4) && (local_res10[0] = FUN_141270170(lVar9), *(char *)(lVar3 + 0x1e4) != '\0')) &&
          ((*(uint *)(param_1 + 0xa0) & 0x200) == 0)) &&
         (((((char)plVar6[0x25] == '\x03' ||
            (cVar5 = *(char *)((longlong)param_1 + 0x31), cVar5 == '\x02')) ||
           ((cVar5 == '\x03' && ((char)plVar6[0x25] == '\x02')))) || (cVar5 == '\x01')))) {
        cVar5 = FUN_14307ee20(lVar9,1);
        if (cVar5 != '\0') {
          (**(code **)(*param_1 + 0x108))(param_1);
          return;
        }
        lVar9 = FUN_1413f82e0();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x200;
          FWeakObjectPtr::operator=(&local_d8,0);
          local_d0 = 0;
          uVar7 = FUN_142c86b70(param_1,local_60);
          FUN_1409c0470(&local_c8,uVar7);
          FUN_1409beed0(plVar6 + 0x208,&local_c8);
          plVar8 = plStack_c0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_c0 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar12 = (int *)((longlong)plVar8 + 0xc);
              iVar2 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
              }
            }
          }
          plVar8 = (longlong *)FName::FName(local_res20,L"OnZoomedNotifyActions",1);
          FWeakObjectPtr::operator=(&local_d8,plVar6);
          local_d0 = *plVar8;
          plVar8 = plVar6 + 0x206;
          piVar12 = (int *)*plVar8;
          lVar9 = plVar6[0x207];
          for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)(int)lVar9 * 4;
              piVar13 = piVar13 + 4) {
            if (((*piVar13 == local_d8) && (piVar13[1] == local_d4)) ||
               ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
                (cVar5 = FWeakObjectPtr::IsValid(&local_d8), cVar5 == '\0')))) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((bVar4) && (*(longlong *)(piVar13 + 2) == local_d0)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_1409ea584;
              break;
            }
          }
          iVar2 = (int)plVar6[0x207];
          *(int *)(plVar6 + 0x207) = iVar2 + 1;
          if (*(int *)((longlong)plVar6 + 0x103c) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
          }
          piVar12 = (int *)((longlong)iVar2 * 0x10 + *plVar8);
          *piVar12 = local_d8;
          piVar12[1] = local_d4;
          *(longlong *)(piVar12 + 2) = local_d0;
LAB_1409ea584:
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
        }
      }
    }
  }
  local_res8[0] = 1;
  if ((*(char *)(local_res18 + 0x162) == '\0') &&
     (((plVar6 == (longlong *)0x0 ||
       (plVar8 = (longlong *)(**(code **)(*plVar6 + 0x670))(plVar6), plVar8 == (longlong *)0x0)) ||
      (cVar5 = (**(code **)(*plVar8 + 0x768))(plVar8), cVar5 == '\0')))) {
    local_res8[0] = 0;
  }
  local_b8 = &local_res18;
  puStack_b0 = local_res10;
  local_a8 = local_res8;
  local_a0 = &PTR_LAB_1441c0018;
  local_68 = &local_a0;
  local_c8 = param_1;
  plStack_c0 = (longlong *)lVar3;
  local_98 = param_1;
  lStack_90 = lVar3;
  local_78 = local_a8;
  local_88 = local_b8;
  puStack_80 = puStack_b0;
  FUN_142c6db40(param_1,&local_a0);
  uVar11 = *(uint *)(param_1 + 0xa0);
  if (((uVar11 & 1) != 0) && (*(char *)(local_res18 + 0x1b0) == '\0')) {
    FUN_1409e5640(param_1,0);
    uVar11 = *(uint *)(param_1 + 0xa0);
  }
  if (((uVar11 & 2) != 0) && (*(char *)(local_res18 + 0x1b1) == '\0')) {
    FUN_1409e5560(param_1,0);
  }
  FUN_1413d24f0(lVar3,plVar6);
  return;
}



// FUNCTION 1409ea6a0 FUN_1409ea6a0 body=194 status=ok
// SIG undefined FUN_1409ea6a0(void)

void FUN_1409ea6a0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1409ea290();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(lVar3 + 0x219) != '\0') && (*(char *)(lVar3 + 0x1dd) != '\0')) {
    FUN_1409e4a70(param_1,DAT_146865238,0xbf800000);
  }
  if ((*(char *)(lVar3 + 0x218) != '\0') && (*(char *)(lVar3 + 0x1dd) != '\0')) {
    lVar3 = FUN_142c6f130(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_1413f82e0();
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
        iVar2 = FUN_142235230(lVar3);
        if (iVar2 != 3) {
          lVar3 = FUN_142ceefa0(lVar3);
          if (lVar3 != 0) {
            FUN_142cf4960(lVar3,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409ea770 FUN_1409ea770 body=161 status=ok
// SIG undefined FUN_1409ea770(void)

void FUN_1409ea770(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
  }
  FUN_142880530(uVar2,param_3 + 5);
  param_3[5] = 0;
  (**(code **)(*(longlong *)*param_3 + 0x638))((longlong *)*param_3,0);
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x288))();
  if (*(char *)(param_1 + 0x5d8) != '\0') {
    *(byte *)(*param_3 + 0x24c) = *(byte *)(*param_3 + 0x24c) | 0x40;
    FUN_142398ec0(*param_3,0,1);
  }
  return;
}



// FUNCTION 1409ea820 FUN_1409ea820 body=404 status=ok
// SIG undefined FUN_1409ea820(void)

void FUN_1409ea820(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float local_res8 [2];
  undefined4 local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x578) != 0) {
    local_res18[0] = 0;
    local_res8[0] = 0.0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468655a0) &&
       (_Init_thread_header(&DAT_1468655a0), DAT_1468655a0 == -1)) {
      FName::FName(&DAT_146865598,"Emissive_Intensity",1);
      _Init_thread_footer(&DAT_1468655a0);
    }
    *(float *)(param_2 + 100) = *(float *)(param_1 + 0x518) + *(float *)(param_2 + 100);
    FUN_1423d62c0(*(undefined8 *)(param_1 + 0x528),local_res18,local_res8);
    UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x528),*(undefined4 *)(param_2 + 100));
    if (local_res8[0] < *(float *)(param_2 + 100) || local_res8[0] == *(float *)(param_2 + 100)) {
      uVar2 = FWeakObjectPtr::Get(param_2 + 0x20);
      cVar1 = FUN_1417904d0(uVar2,1);
      if (cVar1 != '\0') {
        uVar2 = FWeakObjectPtr::Get(param_2 + 0x20);
        FUN_1425a2750(uVar2,DAT_146865598,0);
      }
      FUN_142880530(*(undefined8 *)(param_1 + 0x578),param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x58) = 0;
    }
    else {
      uVar2 = FWeakObjectPtr::Get(param_2 + 0x20);
      cVar1 = FUN_1417904d0(uVar2,1);
      if (cVar1 != '\0') {
        uVar2 = FWeakObjectPtr::Get(param_2 + 0x20);
        uVar3 = UCurveFloat::GetFloatValue
                          (*(undefined8 *)(param_1 + 0x528),*(undefined4 *)(param_2 + 100));
        FUN_1425a2750(uVar2,DAT_146865598,uVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409ea9c0 FUN_1409ea9c0 body=416 status=ok
// SIG undefined FUN_1409ea9c0(void)

void FUN_1409ea9c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  local_res8[0] = 0.0;
  *(float *)(param_2 + 0x5c) = *(float *)(param_1 + 0x5b0) + *(float *)(param_2 + 0x5c);
  FUN_1423d62c0(*(undefined8 *)(param_1 + 0x5c0),local_res10,local_res8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146865730) {
    _Init_thread_header(&DAT_146865730);
    if (DAT_146865730 == -1) {
      FName::FName(&DAT_146865728,"Emissive_Intensity",1);
      _Init_thread_footer(&DAT_146865730);
    }
  }
  UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x5c0),*(undefined4 *)(param_2 + 0x5c));
  if (local_res8[0] < *(float *)(param_2 + 0x5c) || local_res8[0] == *(float *)(param_2 + 0x5c)) {
    uVar3 = FWeakObjectPtr::Get(param_2 + 0x18);
    cVar2 = FUN_1417904d0(uVar3,1);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_2 + 0x18);
      FUN_1425a2750(uVar3,DAT_146865728,0);
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x90);
    }
    FUN_142880530(uVar3,param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  else {
    uVar3 = FWeakObjectPtr::Get(param_2 + 0x18);
    cVar2 = FUN_1417904d0(uVar3,1);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_2 + 0x18);
      uVar4 = UCurveFloat::GetFloatValue
                        (*(undefined8 *)(param_1 + 0x5c0),*(undefined4 *)(param_2 + 0x5c));
      FUN_1425a2750(uVar3,DAT_146865728,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1409eab60 FUN_1409eab60 body=457 status=ok
// SIG undefined FUN_1409eab60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409eab60(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    *(undefined8 *)(param_2 + 0x60) = 0;
    FUN_142880530(*(undefined8 *)(param_1 + 0x578),param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = 0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1441bfda8;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_1409ea820;
      plVar3[3] = param_2;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1441bfdf0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x518);
    uVar2 = *(undefined8 *)(param_1 + 0x578);
    local_a8 = 0;
    local_a0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_b0 = 0xbf800000;
    local_b8 = 1;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_2 + 0x58,&local_a8,uVar1);
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



// FUNCTION 1409ead30 FUN_1409ead30 body=455 status=ok
// SIG undefined FUN_1409ead30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409ead30(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1441bfda8;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_1409ea9c0;
    plVar2[3] = param_2;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_1441bfdf0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x5b0);
  local_a8 = 0;
  local_a0 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_b0 = 0xbf800000;
  local_b8 = 1;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_2 + 0x50,&local_a8,uVar1);
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1409eaf00 FUN_1409eaf00 body=203 status=ok
// SIG undefined FUN_1409eaf00(void)

void FUN_1409eaf00(longlong param_1)

{
  undefined1 local_res8 [32];
  
  *(undefined1 *)(param_1 + 0x23d0) = 0;
  if (*(char *)(param_1 + 0x2330) != '\0') {
    *(undefined1 *)(param_1 + 0x2330) = 0;
    local_res8[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x2338,local_res8);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x2368,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146865620) {
    _Init_thread_header(&DAT_146865620);
    if (DAT_146865620 == -1) {
      FName::FName(&DAT_146865618,L"A9K_IsSawRunning",1);
      _Init_thread_footer(&DAT_146865620);
    }
  }
  if (*(longlong *)(param_1 + 0x23b0) != 0) {
    UBlackboardComponent::SetValueAsBool(*(longlong *)(param_1 + 0x23b0),&DAT_146865618,0);
    return;
  }
  return;
}


