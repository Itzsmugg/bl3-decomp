// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1430a04f0 FUN_1430a04f0 body=1065 status=ok
// SIG undefined FUN_1430a04f0(void)

void FUN_1430a04f0(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  int local_38;
  int local_34;
  longlong local_30;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  lVar5 = *(longlong *)(param_1 + 400);
  cVar2 = *(char *)(param_1 + 0x180);
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 400) = lVar5;
  }
  if (lVar5 != 0) {
    if ((((*(longlong *)(param_1 + 0x118) == 0) ||
         (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x150), plVar6 == (longlong *)0x0
         )) || (cVar1 = (**(code **)(*plVar6 + 0x780))(plVar6), cVar1 == '\0')) ||
       ((cVar1 = (**(code **)(*plVar6 + 0x778))(plVar6), cVar1 == '\0' &&
        (iVar3 = FUN_142340f30(param_1), iVar3 == 3)))) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0x180) = cVar1;
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        puVar4 = (undefined8 *)FName::FName(local_res8,L"OnUsed",1);
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = *puVar4;
        local_28 = local_38;
        local_24 = local_34;
        local_20 = local_30;
        FUN_143094570(lVar5,&local_28,1);
      }
    }
    else {
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnUsed",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar4;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143088a40(lVar5,&local_28,1,param_1);
    }
  }
  if (*(char *)(param_1 + 0x180) == '\0') {
    if (cVar2 == '\0') {
      return;
    }
    lVar5 = *(longlong *)(param_1 + 400);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x118);
      *(longlong *)(param_1 + 400) = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    puVar4 = (undefined8 *)FName::FName(local_res8,L"OnUseFinished",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *puVar4;
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_30;
    FUN_143094570(lVar5,&local_28,2);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 400);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 400) = lVar5;
    if (lVar5 == 0) goto LAB_1430a06e6;
  }
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"OnUseFinished",1);
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = *puVar4;
  local_28 = local_38;
  local_24 = local_34;
  local_20 = local_30;
  FUN_143088a40(lVar5,&local_28,2,param_1);
LAB_1430a06e6:
  lVar5 = FUN_14309ddd0(param_1);
  if (lVar5 != 0) {
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    plVar6 = (longlong *)FName::FName(local_res8,L"ResetPattern",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *plVar6;
    plVar6 = (longlong *)(lVar5 + 0x178);
    piVar7 = (int *)*plVar6;
    iVar3 = *(int *)(lVar5 + 0x180);
    for (piVar8 = piVar7; piVar8 != piVar7 + (longlong)iVar3 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
          ((cVar2 = FWeakObjectPtr::IsValid(piVar8), cVar2 == '\0' &&
           (cVar2 = FWeakObjectPtr::IsValid(&local_38), cVar2 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_30)) {
        if ((int)((longlong)piVar8 - (longlong)piVar7 >> 4) != -1) goto LAB_1430a07d1;
        break;
      }
    }
    iVar3 = *(int *)(lVar5 + 0x180);
    *(int *)(lVar5 + 0x180) = iVar3 + 1;
    if (*(int *)(lVar5 + 0x184) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
    }
    piVar7 = (int *)((longlong)iVar3 * 0x10 + *plVar6);
    *piVar7 = local_38;
    piVar7[1] = local_34;
    *(longlong *)(piVar7 + 2) = local_30;
LAB_1430a07d1:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
    plVar6 = (longlong *)(lVar5 + 0x188);
    piVar7 = (int *)*plVar6;
    iVar3 = *(int *)(lVar5 + 400);
    for (piVar8 = piVar7; piVar8 != piVar7 + (longlong)iVar3 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
          ((cVar2 = FWeakObjectPtr::IsValid(piVar8), cVar2 == '\0' &&
           (cVar2 = FWeakObjectPtr::IsValid(&local_38), cVar2 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_30)) {
        if ((int)((longlong)piVar8 - (longlong)piVar7 >> 4) != -1) goto LAB_1430a0875;
        break;
      }
    }
    iVar3 = *(int *)(lVar5 + 400);
    *(int *)(lVar5 + 400) = iVar3 + 1;
    if (*(int *)(lVar5 + 0x194) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
    }
    piVar7 = (int *)((longlong)iVar3 * 0x10 + *plVar6);
    *piVar7 = local_38;
    piVar7[1] = local_34;
    *(longlong *)(piVar7 + 2) = local_30;
LAB_1430a0875:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
  }
  return;
}



// FUNCTION 1430a0920 FUN_1430a0920 body=504 status=ok
// SIG undefined FUN_1430a0920(void)

void FUN_1430a0920(longlong param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  plVar9 = *(longlong **)(param_1 + 0x248);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x248) = plVar9;
    if (plVar9 == (longlong *)0x0) {
      return;
    }
  }
  lVar8 = 0;
  if (*(char *)(param_1 + 400) == '\x01') {
    lVar6 = (**(code **)(*plVar9 + 0x900))(plVar9,1,0);
    if (lVar6 == 0) {
      return;
    }
    lVar7 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    goto LAB_1430a0a31;
  }
  lVar6 = (**(code **)(*plVar9 + 0x900))(plVar9,0);
  if (lVar6 == 0) {
LAB_1430a09b5:
    lVar6 = lVar8;
  }
  else {
    lVar7 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1430a09b5;
  }
  iVar5 = FUN_14233f450(param_1);
  if (iVar5 == 3) {
    FUN_142350b20(param_1,1);
  }
  else {
    cVar4 = FUN_14307eb30(plVar9);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x230) = 1;
    }
  }
LAB_1430a0a31:
  if (lVar6 != 0) {
    if (*(int *)(param_1 + 0x240) == 0) {
      plVar9 = (longlong *)(param_1 + 0x238);
      *(undefined4 *)(param_1 + 0x240) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x244)) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar9,0);
      }
      uVar1 = *(uint *)(param_1 + 0x188);
      uVar10 = (ulonglong)uVar1;
      if (*(int *)(param_1 + 0x244) < (int)uVar1) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar9,uVar1);
      }
      if (0 < (int)uVar1) {
        do {
          iVar5 = FUN_1423ac950(lVar6,*(undefined8 *)(lVar8 + *(longlong *)(param_1 + 0x180)));
          if (iVar5 != -1) {
            iVar2 = *(int *)(param_1 + 0x240);
            *(int *)(param_1 + 0x240) = iVar2 + 1;
            if (*(int *)(param_1 + 0x244) < iVar2 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar2);
            }
            *(int *)(*plVar9 + (longlong)iVar2 * 4) = iVar5;
          }
          lVar8 = lVar8 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    if (*(char *)(param_1 + 0x192) != '\x01') {
      FUN_1430a3560(param_1);
    }
    FUN_1430a67a0(param_1,*(int *)(param_1 + 0x234) == -1);
  }
  return;
}



// FUNCTION 1430a0b20 FUN_1430a0b20 body=48 status=ok
// SIG undefined FUN_1430a0b20(void)

void FUN_1430a0b20(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x458))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001430a0b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1430a0b50 FUN_1430a0b50 body=234 status=ok
// SIG undefined FUN_1430a0b50(void)

void FUN_1430a0b50(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  undefined1 local_28 [16];
  
  if (DAT_146b48018 == '\0') {
    FUN_14309f510(&DAT_146b48010);
  }
  puVar2 = DAT_146b48010;
  if (param_2 != 0) {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1430a0bc4;
  }
  param_2 = 0;
LAB_1430a0bc4:
  puVar5 = puVar2 + 0xd;
  FUN_14309e1e0(puVar2,local_res10,puVar5,param_2,param_3);
  cVar3 = FUN_1407ce070(local_res10);
  if (cVar3 != '\0') {
    cVar3 = FUN_14307ee20(param_3,0);
    if (cVar3 != '\0') {
      puVar5 = puVar2 + 0xe;
    }
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_28,local_res10);
    FUN_142183020(*puVar2,local_28,puVar5);
  }
  return;
}



// FUNCTION 1430a0c40 FUN_1430a0c40 body=766 status=ok
// SIG undefined FUN_1430a0c40(void)

void FUN_1430a0c40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [24];
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Count",1);
  local_98 = param_1[0xb];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_res10,L"Count",1);
  local_98 = param_1[0xc];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_res18,&DAT_145a68f80,1);
  local_98 = param_1[0xd];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_res20,&DAT_145a68f78,1);
  local_98 = param_1[0xe];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_80,L"Count",1);
  local_98 = param_1[0xf];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_78,L"Count",1);
  local_98 = param_1[0x10];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_70,L"Count",1);
  local_98 = param_1[0x11];
  local_90 = *puVar2;
  local_88 = 0;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_68,L"Count",1);
  local_98 = param_1[0x12];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_60,L"Count",1);
  local_98 = param_1[0x16];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_58,L"Count",1);
  local_98 = param_1[0x17];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_50,L"Count",1);
  local_98 = param_1[0x18];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_48,&DAT_145a68f00,1);
  local_98 = param_1[0x13];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_40,&DAT_145a68ef8,1);
  local_98 = param_1[0x14];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  puVar2 = (undefined8 *)FName::FName(local_38,&DAT_145a68ef0,1);
  local_98 = param_1[0x15];
  local_88 = 0;
  local_90 = *puVar2;
  FUN_142184c40(uVar1,&local_98);
  return;
}



// FUNCTION 1430a0f40 FUN_1430a0f40 body=1391 status=ok
// SIG undefined FUN_1430a0f40(void)

undefined8 FUN_1430a0f40(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_98 [4];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined1 local_50 [40];
  
  lVar10 = param_2 + 8;
  if (*(int *)(param_2 + 0x90) != 3) {
    return 0;
  }
  plVar6 = (longlong *)FUN_1407ba8d0(lVar10,0);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = FUN_1429e18b0();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  if ((char)plVar6[0x25] != '\x03') {
    return 0;
  }
  plVar8 = (longlong *)FUN_1407ba8d0(lVar10,1);
  if (plVar8 != (longlong *)0x0) {
    lVar7 = FUN_1430b3b80();
    plVar9 = (longlong *)plVar8[2];
    if (((int)plVar9[0x12] < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(plVar9[0x11] + (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1430a1073;
  }
  plVar9 = (longlong *)FUN_1407ba8d0(lVar10,1);
  if (plVar9 == (longlong *)0x0) {
    return 0;
  }
  lVar10 = FUN_14171bfe0();
  if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
      lVar10 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  plVar8 = (longlong *)0x0;
LAB_1430a1073:
  local_res10 = plVar6;
  local_res18 = plVar9;
  FUN_14217e740(local_98);
  FUN_142194380(local_98,0x28,0,0,0);
  local_98[0] = local_res10;
  FUN_1421923f0(local_78,DAT_146b47f08,local_98);
  FUN_140bfa350(param_2,param_1 + 8,local_78);
  FUN_14217f430(local_78);
  FUN_14217f430(local_98);
  FUN_14217e740(local_98);
  FUN_142194380(local_98,0x28,0,0,0);
  local_98[0] = local_res10;
  FUN_1421923f0(local_78,DAT_146b47f10,local_98);
  FUN_140bfa350(param_2,param_1 + 0x18,local_78);
  FUN_14217f430(local_78);
  FUN_14217f430(local_98);
  FUN_14217e740(local_98);
  FUN_142194380(local_98,0x28,0,0,0);
  local_98[0] = local_res10;
  FUN_1421923f0(local_78,DAT_146b47f18,local_98);
  FUN_140bfa350(param_2,param_1 + 0x20,local_78);
  FUN_14217f430(local_78);
  FUN_14217f430(local_98);
  FUN_14217e740(local_98);
  FUN_142194380(local_98,0x28,0,0,0);
  local_98[0] = local_res10;
  FUN_1421923f0(&local_58,DAT_146b47f28,local_98);
  FUN_1421923f0(local_78,DAT_146b47ef0,&local_58);
  FUN_140bfa350(param_2,param_1 + 0x10,local_78);
  FUN_14217f430(local_78);
  FUN_14217f430(&local_58);
  FUN_14217f430(local_98);
  if (plVar8 == (longlong *)0x0) {
    if (plVar9 == (longlong *)0x0) {
      return 1;
    }
    FUN_14217e740(local_98);
    FUN_142194380(local_98,0x28,0,0,0);
    local_98[0] = local_res18;
    FUN_1421923f0(&local_58,DAT_146b47ef0,local_98);
    param_1 = param_1 + 0x40;
  }
  else {
    uVar4 = (**(code **)(*plVar8 + 0x858))(plVar8);
    cVar5 = FUN_1407ce070(param_2);
    if (cVar5 != '\0') {
      plVar6 = (longlong *)(param_2 + 0xa8);
      local_res10 = (longlong *)0x0;
      if ((**(longlong **)(param_1 + 0x48) == 0) ||
         (cVar5 = FUN_1407ce010(*(longlong **)(param_1 + 0x48) + 1), cVar5 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar11 = (longlong *)*plVar6;
        plVar9 = plVar11 + (longlong)*(int *)(param_2 + 0xb0) * 5;
        if (plVar11 != plVar9) {
          do {
            if ((*(longlong *)*plVar11 == **(longlong **)(param_1 + 0x48)) &&
               (*(longlong *)(((longlong *)*plVar11)[1] + 0x28) ==
                *(longlong *)((*(longlong **)(param_1 + 0x48))[1] + 0x28))) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (bVar3) goto LAB_1430a133c;
            plVar11 = plVar11 + 5;
          } while (plVar11 != plVar9);
        }
        local_58 = *(undefined8 *)(param_1 + 0x48);
        FUN_14217e740(local_50);
        FUN_142194380(local_50,0xc,0,1,0);
        iVar2 = *(int *)(param_2 + 0xb0);
        *(int *)(param_2 + 0xb0) = iVar2 + 1;
        local_50[0] = uVar4;
        if (*(int *)(param_2 + 0xb4) < iVar2 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
        }
        puVar1 = (undefined8 *)(*plVar6 + (longlong)iVar2 * 0x28);
        *puVar1 = local_58;
        FUN_14217e5b0(puVar1 + 1,local_50);
        FUN_14217f430(local_50);
      }
LAB_1430a133c:
      FUN_1421957f0(param_2);
    }
    plVar6 = (longlong *)FUN_14307cf20(plVar8,uVar4);
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x4d0))(plVar6,&local_res10), local_res10 != (longlong *)0x0)) {
      plVar9 = (longlong *)FUN_142e49950();
      plVar8 = local_res10;
      for (plVar6 = local_res10; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[6]) {
        if (plVar6 == plVar9) {
          plVar6 = (longlong *)local_res10[0x1f];
          if (plVar6 != (longlong *)0x0) goto LAB_1430a13dc;
          (**(code **)(*local_res10 + 0x368))(local_res10);
          plVar6 = (longlong *)plVar8[0x1f];
          if (plVar6 != (longlong *)0x0) goto LAB_1430a13dc;
          break;
        }
      }
    }
    plVar8 = (longlong *)FUN_142e49950();
    plVar6 = (longlong *)plVar8[0x1f];
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      plVar6 = (longlong *)plVar8[0x1f];
    }
LAB_1430a13dc:
    local_res10 = plVar6;
    FUN_14217e740(local_98);
    FUN_142194380(local_98,0x28,0,0,0);
    local_98[0] = local_res10;
    FUN_1421923f0(&local_58,DAT_146b47ef0,local_98);
    param_1 = param_1 + 0x50;
  }
  FUN_140bfa350(param_2,param_1,&local_58);
  FUN_14217f430(&local_58);
  FUN_14217f430(local_98);
  return 1;
}



// FUNCTION 1430a14b0 FUN_1430a14b0 body=363 status=ok
// SIG undefined FUN_1430a14b0(void)

void FUN_1430a14b0(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if (DAT_146b48018 == '\0') {
    FUN_14309f510(&DAT_146b48010);
  }
  puVar3 = DAT_146b48010;
  if (((*(char *)(param_1 + 0x330) != '\0') &&
      (cVar4 = FUN_14218fd10(*DAT_146b48010,DAT_146b48010 + 0x13), cVar4 != '\0')) &&
     (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0x780))(plVar2);
    if (cVar4 == '\0') {
      lVar8 = plVar2[2];
LAB_1430a15da:
      uVar5 = FUN_142d19640(param_1);
      uVar5 = FUN_14309e340(puVar3,local_res8,puVar3 + 0x13,uVar5,lVar8);
      FUN_1430a1620(uVar5,param_1);
    }
    else if (param_2 == 0) {
      lVar8 = *(longlong *)(param_1 + 0x50);
      if (lVar8 != 0) {
        lVar6 = FUN_142e0d0b0();
        lVar7 = lVar8;
        do {
          if (lVar7 == lVar6) goto LAB_1430a15da;
          lVar7 = *(longlong *)(lVar7 + 0x30);
        } while (lVar7 != 0);
      }
    }
    else {
      uVar5 = FUN_142d19640(param_1);
      FUN_14309e1e0(puVar3,local_res8,puVar3 + 0x13,uVar5,param_2);
      FUN_1430a1620(local_res8,param_1);
      bVar1 = *(byte *)(param_1 + 0x214);
      cVar4 = FUN_14307ee20(param_2,0);
      if ((bVar1 & 1) == 0) {
        lVar8 = 0x78;
        lVar7 = 0x80;
      }
      else {
        lVar8 = 0x88;
        lVar7 = 0x90;
      }
      if (cVar4 != '\0') {
        lVar8 = lVar7;
      }
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_res18,local_res8);
      FUN_142182e90(*puVar3,local_res18,lVar8 + (longlong)puVar3);
    }
  }
  return;
}



// FUNCTION 1430a1620 FUN_1430a1620 body=185 status=ok
// SIG undefined FUN_1430a1620(void)

void FUN_1430a1620(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 local_res18 [8];
  
  cVar3 = FUN_1407ce070();
  if (cVar3 != '\0') {
    if (DAT_146b48018 == '\0') {
      FUN_14309f510(&DAT_146b48010);
    }
    puVar2 = DAT_146b48010;
    if (((*(byte *)(param_2 + 0x20) & 4) == 0) && (1 < (byte)((char)param_2[0x5e] - 1U))) {
      lVar4 = (ulonglong)(*(byte *)((longlong)param_2 + 0x214) & 1) * 0x10 + 0x98;
    }
    else {
      lVar4 = 0xa0;
    }
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_res18,param_1);
    uVar1 = *puVar2;
    uVar5 = (**(code **)(*param_2 + 0x18))(param_2,0);
    FUN_142183020(uVar1,local_res18,lVar4 + (longlong)puVar2,uVar5);
  }
  return;
}



// FUNCTION 1430a16e0 FUN_1430a16e0 body=62 status=ok
// SIG undefined FUN_1430a16e0(void)

void FUN_1430a16e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1430bf780();
  }
  if (0 < *(int *)(param_1 + 0x1f8)) {
    FUN_142ca9970(param_1 + 0x1f0,1);
  }
  FUN_1430c2290(param_1);
  return;
}



// FUNCTION 1430a1720 FUN_1430a1720 body=124 status=ok
// SIG undefined FUN_1430a1720(void)

void FUN_1430a1720(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) | 4;
  cVar1 = (**(code **)(*param_1 + 0x440))();
  if (cVar1 == '\0') {
    *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) & 0xfb;
                    /* WARNING: Could not recover jumptable at 0x0001430a178f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,0);
    return;
  }
  if ((char)param_1[0x37] == '\0') {
    iVar2 = FUN_142340f30(param_1);
    if (iVar2 != 3) {
      lVar3 = param_1[0x46];
      if (lVar3 == 0) {
        lVar3 = param_1[0x23];
        param_1[0x46] = lVar3;
      }
      FUN_14306ce80(lVar3,param_1[3]);
      return;
    }
  }
  return;
}



// FUNCTION 1430a17a0 FUN_1430a17a0 body=569 status=ok
// SIG undefined FUN_1430a17a0(void)

void FUN_1430a17a0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  int local_38;
  int local_34;
  longlong local_30;
  
  if ((*(char *)(param_1 + 0x180) != '\0') && (lVar4 = FUN_14309ddd0(), lVar4 != 0)) {
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    plVar5 = (longlong *)FName::FName(local_res8,L"ResetPattern",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *plVar5;
    plVar5 = (longlong *)(lVar4 + 0x178);
    piVar2 = (int *)*plVar5;
    iVar7 = *(int *)(lVar4 + 0x180);
    for (piVar8 = piVar2; piVar8 != piVar2 + (longlong)iVar7 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
          ((cVar3 = FWeakObjectPtr::IsValid(piVar8), cVar3 == '\0' &&
           (cVar3 = FWeakObjectPtr::IsValid(&local_38), cVar3 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_30)) {
        iVar7 = (int)((longlong)piVar8 - (longlong)piVar2 >> 4);
        if (iVar7 != -1) {
          iVar1 = *(int *)(lVar4 + 0x180);
          iVar6 = (iVar1 - iVar7) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar7 * 0x10 + *plVar5),
                       (void *)((longlong)(iVar1 - iVar6) * 0x10 + *plVar5),(longlong)iVar6 << 4);
            iVar1 = *(int *)(lVar4 + 0x180);
          }
          *(int *)(lVar4 + 0x180) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar5);
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar5);
    plVar5 = (longlong *)(lVar4 + 0x188);
    piVar2 = (int *)*plVar5;
    iVar7 = *(int *)(lVar4 + 400);
    for (piVar8 = piVar2; piVar8 != piVar2 + (longlong)iVar7 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
          ((cVar3 = FWeakObjectPtr::IsValid(piVar8), cVar3 == '\0' &&
           (cVar3 = FWeakObjectPtr::IsValid(&local_38), cVar3 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_30)) {
        iVar7 = (int)((longlong)piVar8 - (longlong)piVar2 >> 4);
        if (iVar7 != -1) {
          iVar1 = *(int *)(lVar4 + 400);
          iVar6 = (iVar1 - iVar7) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar7 * 0x10 + *plVar5),
                       (void *)((longlong)(iVar1 - iVar6) * 0x10 + *plVar5),(longlong)iVar6 << 4);
            iVar1 = *(int *)(lVar4 + 400);
          }
          *(int *)(lVar4 + 400) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar5);
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar5);
  }
  FUN_1430a48b0(param_1 + 0x1e0);
  return;
}



// FUNCTION 1430a19e0 FUN_1430a19e0 body=82 status=ok
// SIG undefined FUN_1430a19e0(void)

void FUN_1430a19e0(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x240)) {
    FUN_142350b20(param_1,0);
    *(undefined1 *)(param_1 + 0x230) = 0;
    FUN_1430a6640(param_1);
    if (*(char *)(param_1 + 0x220) != *(char *)(param_1 + 0x191)) {
      *(char *)(param_1 + 0x220) = *(char *)(param_1 + 0x191);
      FUN_1430a67a0(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1430a1a40 FUN_1430a1a40 body=12 status=ok
// SIG undefined FUN_1430a1a40(void)

void FUN_1430a1a40(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001430a1a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,0);
  return;
}



// FUNCTION 1430a1a60 FUN_1430a1a60 body=349 status=ok
// SIG undefined FUN_1430a1a60(void)

void FUN_1430a1a60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [152];
  
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    local_res8 = param_1;
    local_res10 = param_2;
    if (DAT_146b48018 == '\0') {
      FUN_14309f510(&DAT_146b48010);
    }
    puVar1 = DAT_146b48010;
    local_res18[0] = (**(code **)(*param_2 + 0x858))(param_2);
    uVar2 = *puVar1;
    puVar1 = puVar1 + 0x16;
    cVar3 = FUN_14218fd10(uVar2,puVar1);
    if (cVar3 != '\0') {
      cVar3 = FUN_14218fd60(uVar2);
      if (cVar3 == '\0') {
        lVar5 = FUN_142191860();
      }
      else {
        uVar4 = FUN_143097aa0(&local_res8,&local_res10,local_res18);
        FUN_14217c550(local_res20,uVar4);
        uVar6 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                          (local_b8,local_res20);
        lVar5 = FUN_14218b3a0(uVar2,uVar6);
        if (lVar5 == 0) {
          uVar6 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                            (local_b4,local_res20);
          uVar6 = FUN_1430966d0(local_b0,uVar6,&local_res8,&local_res10,local_res18);
          lVar5 = FUN_1421912a0(uVar2,uVar6);
        }
      }
      cVar3 = FUN_1407ce070(lVar5);
      if (cVar3 != '\0') {
        FUN_142182fa0(lVar5,puVar1);
      }
    }
  }
  return;
}



// FUNCTION 1430a1bd0 FUN_1430a1bd0 body=375 status=ok
// SIG undefined FUN_1430a1bd0(void)

void FUN_1430a1bd0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142343b00();
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar2 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar2);
  }
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar3);
    if (cVar1 != '\0') {
      lVar3 = *(longlong *)(param_1 + 400);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 400) = lVar3;
        if (lVar3 == 0) {
          return;
        }
      }
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnAttached",1);
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = *puVar4;
      local_28 = local_48;
      local_24 = local_44;
      local_20 = local_40;
      FUN_143088040(lVar3,&local_28);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnDetached",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar4;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143088210(lVar3,&local_28);
    }
  }
  return;
}



// FUNCTION 1430a1d50 FUN_1430a1d50 body=397 status=ok
// SIG undefined FUN_1430a1d50(void)

void FUN_1430a1d50(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142343b00();
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar3);
    if (cVar1 != '\0') {
      if ((((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
         (*(char *)(param_1 + 400) != '\x01')) {
        uVar2 = FUN_142232850();
        FUN_14247c340(param_1 + 0x140,uVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x248);
      *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_1 + 0x191);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x248) = lVar3;
        if (lVar3 == 0) {
          return;
        }
      }
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnAttached",1);
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = *puVar4;
      local_28 = local_48;
      local_24 = local_44;
      local_20 = local_40;
      FUN_143088040(lVar3,&local_28);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnDetached",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar4;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143088210(lVar3,&local_28);
    }
  }
  return;
}



// FUNCTION 1430a1ee0 FUN_1430a1ee0 body=350 status=ok
// SIG undefined FUN_1430a1ee0(void)

void FUN_1430a1ee0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_res8;
  longlong *local_res10 [2];
  undefined1 local_res20 [8];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined1 local_c0 [8];
  undefined1 local_b8 [160];
  
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    local_res8 = param_1;
    local_res10[0] = param_2;
    if (DAT_146b48018 == '\0') {
      FUN_14309f510(&DAT_146b48010);
    }
    puVar2 = DAT_146b48010;
    local_res20[0] = (**(code **)(*param_2 + 0x858))(param_2);
    uVar1 = *puVar2;
    uVar5 = param_3 & 0xff ^ 1;
    cVar3 = FUN_14218fd10(uVar1,puVar2 + uVar5 + 0x17);
    if (cVar3 != '\0') {
      cVar3 = FUN_14218fd60(uVar1);
      if (cVar3 == '\0') {
        lVar6 = FUN_142191860();
      }
      else {
        uVar4 = FUN_143097aa0(&local_res8,local_res10,local_res20);
        FUN_14217c550(local_c8,uVar4);
        uVar7 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_c4,local_c8);
        lVar6 = FUN_14218b3a0(uVar1,uVar7);
        if (lVar6 == 0) {
          uVar7 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                            (local_c0,local_c8);
          uVar7 = FUN_1430966d0(local_b8,uVar7,&local_res8,local_res10,local_res20);
          lVar6 = FUN_1421912a0(uVar1,uVar7);
        }
      }
      cVar3 = FUN_1407ce070(lVar6);
      if (cVar3 != '\0') {
        FUN_142182fa0(lVar6,puVar2 + uVar5 + 0x17);
      }
    }
  }
  return;
}



// FUNCTION 1430a2040 FUN_1430a2040 body=141 status=ok
// SIG undefined FUN_1430a2040(void)

void FUN_1430a2040(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x150), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x778))();
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_1 + 0x208);
      bVar3 = *(byte *)(param_1 + 0x209) >> 4;
      *(byte *)(param_1 + 0x208) = bVar3;
      if (*(byte *)(param_1 + 0x209) >> 4 == 0) {
        if (cVar2 == '\x01') goto LAB_1430a20ba;
      }
      else {
        if (bVar3 == 1) {
          FUN_1430a2c90(param_1);
          return;
        }
        if (bVar3 == 2) {
LAB_1430a20ba:
          FUN_1430a2a50(param_1);
          return;
        }
        if (bVar3 == 3) {
          FUN_1430a5b10(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1430a20d0 FUN_1430a20d0 body=149 status=ok
// SIG undefined FUN_1430a20d0(void)

void FUN_1430a20d0(longlong param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_1 + 0x229) & 1;
  if (bVar1 == param_2) {
    return;
  }
  if (bVar1 != 0) {
    if (*(longlong *)(param_1 + 0x230) == 0) {
      *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x118);
    }
    cVar2 = FUN_14307eb30();
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
      FUN_1430a4920(param_1);
    }
    FUN_1430bf8f0(param_1);
    return;
  }
  if (*(longlong *)(param_1 + 0x230) == 0) {
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x118);
  }
  cVar2 = FUN_14307eb30();
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  FUN_1430bf9b0(param_1);
  return;
}



// FUNCTION 1430a2170 FUN_1430a2170 body=100 status=ok
// SIG undefined FUN_1430a2170(void)

void FUN_1430a2170(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)*(byte *)(param_1 + 0x45) * 0.01;
  if (0.0 <= fVar2) {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x43) = fVar2;
  if (0.0 < fVar2) {
    cVar1 = UActorComponent::IsComponentTickEnabled();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001430a21c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x358))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1430a21f0 FUN_1430a21f0 body=240 status=ok
// SIG undefined FUN_1430a21f0(void)

void FUN_1430a21f0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(char *)(param_1 + 0x290) != '\0') {
    if ((0.0 < *(float *)(param_1 + 0x1b4)) &&
       (((*(char *)(param_1 + 0x291) == '\x02' || (*(char *)(param_1 + 0x292) != '\0')) ||
        (*(char *)(param_1 + 0x291) == '\x01')))) {
      *(undefined1 *)(param_1 + 0x2c4) = 0;
      uVar5 = FUN_14309b270();
      *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x1b4);
      lVar3 = *(longlong *)(param_1 + 0x120);
      *(undefined1 *)(param_1 + 0x2c4) = 1;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x790);
      *(undefined4 *)(param_1 + 0x2d0) = uVar5;
      *(undefined4 *)(param_1 + 0x2cc) = uVar1;
      *(undefined4 *)(param_1 + 0x2d4) = 0;
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(param_1 + 0x2d8) = local_res8;
      *(undefined4 *)(param_1 + 0x2dc) = local_resc;
    }
    plVar4 = *(longlong **)(param_1 + 0x2e0);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x118);
      *(longlong **)(param_1 + 0x2e0) = plVar4;
      if (plVar4 == (longlong *)0x0) {
        return;
      }
    }
    uVar2 = (**(code **)(*plVar4 + 0x858))();
    *(undefined1 *)(param_1 + 0x2c0) = uVar2;
  }
  return;
}



// FUNCTION 1430a22e0 FUN_1430a22e0 body=166 status=ok
// SIG undefined FUN_1430a22e0(void)

void FUN_1430a22e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  if (DAT_146b48018 == '\0') {
    FUN_14309f510(&DAT_146b48010);
  }
  puVar1 = DAT_146b48010;
  puVar3 = DAT_146b48010 + 0xb;
  FUN_14309e1e0(DAT_146b48010,local_res20,puVar3,param_1,param_2);
  cVar2 = FUN_1407ce070(local_res20);
  if (cVar2 != '\0') {
    cVar2 = FUN_14307ee20(param_2,0);
    if (cVar2 != '\0') {
      puVar3 = puVar1 + 0xc;
    }
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_18,local_res20);
    FUN_142182e90(*puVar1,local_18,puVar3);
  }
  return;
}



// FUNCTION 1430a23d0 FUN_1430a23d0 body=68 status=ok
// SIG undefined FUN_1430a23d0(void)

void FUN_1430a23d0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x1dc) != '\0') {
    lVar1 = FUN_14309ddd0();
    if (lVar1 != 0) {
      FUN_14308e930(lVar1);
    }
  }
  if (*(char *)(param_1 + 0x1cd) != '\0') {
    FUN_1430a48b0(param_1 + 0x1e0);
    return;
  }
  return;
}



// FUNCTION 1430a2420 FUN_1430a2420 body=201 status=ok
// SIG undefined FUN_1430a2420(void)

void FUN_1430a2420(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)((longlong)param_1 + 0x1a4) != 0.0) {
    fVar3 = *(float *)((longlong)param_1 + 0x1a4) + *(float *)(param_1 + 0x43);
    fVar4 = 0.0;
    if ((0.0 <= fVar3) && (fVar4 = fVar3, 1.0 <= fVar3)) {
      fVar3 = 1.0;
      fVar4 = fVar3;
    }
    *(float *)(param_1 + 0x43) = fVar4;
    if ((((*(byte *)((longlong)param_1 + 0x1b9) & 8) != 0) &&
        ((*(byte *)((longlong)param_1 + 0x229) & 1) == 0)) && (1.0 <= fVar4)) {
      FUN_1430a4ba0(fVar3,1);
    }
    FUN_1430a4920(param_1);
    cVar1 = UActorComponent::IsComponentTickEnabled(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x229) & 8) == 0) {
    return;
  }
  lVar2 = param_1[0x46];
  *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) & 0xf7;
  if (lVar2 == 0) {
    lVar2 = param_1[0x23];
    param_1[0x46] = lVar2;
  }
  FUN_14308fb00(lVar2,(char)param_1[0x3f],*(undefined1 *)((longlong)param_1 + 0x22a));
  return;
}



// FUNCTION 1430a24f0 FUN_1430a24f0 body=344 status=ok
// SIG undefined FUN_1430a24f0(void)

void FUN_1430a24f0(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float local_res10;
  float local_res14;
  float local_18;
  float local_14;
  float local_10;
  
  lVar1 = param_1[0x34];
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x38) < 1) {
    return;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x1ec) + 1;
  lVar4 = param_1[0x32];
  *(int *)((longlong)param_1 + 0x1ec) = iVar3;
  if (lVar4 == 0) {
    lVar4 = param_1[0x23];
    param_1[0x32] = lVar4;
    if (lVar4 == 0) goto LAB_1430a255b;
  }
  *(uint *)(param_1 + 0x3d) = (uint)*(byte *)(lVar4 + 0x693) * iVar3 * 0x135eb;
LAB_1430a255b:
  FUN_14307b9c0(lVar1,&local_res10);
  local_14 = local_res10 * *(float *)((longlong)param_1 + 0x1ac);
  local_10 = 0.0;
  local_18 = local_res14 * *(float *)(param_1 + 0x37);
  fVar5 = (float)(**(code **)(*param_1 + 0x410))(param_1);
  local_18 = local_18 * fVar5;
  local_14 = local_14 * fVar5;
  local_10 = local_10 * fVar5;
  lVar1 = FUN_14309ddd0(param_1);
  if (lVar1 != 0) {
    uVar2 = 1;
    if ((*(char *)((longlong)param_1 + 0x1dc) != '\0') && (lVar4 != 0)) {
      uVar2 = 1;
      if (*(longlong *)(lVar4 + 0x7f8) == DAT_146b479b8) {
        uVar2 = 0;
      }
    }
    FUN_14306b190(lVar1,&local_18,(int)param_1[0x3a],*(undefined4 *)((longlong)param_1 + 0x1d4),
                  (int)param_1[0x3b],uVar2);
  }
  return;
}



// FUNCTION 1430a2650 FUN_1430a2650 body=212 status=ok
// SIG undefined FUN_1430a2650(void)

void FUN_1430a2650(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (((*(char *)(param_1 + 0x1e4) == '\0') && (*(char *)(param_1 + 0x208) == '\x01')) &&
     (*(char *)(param_1 + 0x1e5) == '\0')) {
    plVar4 = *(longlong **)(param_1 + 0x1d0);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x118);
      *(longlong **)(param_1 + 0x1d0) = plVar4;
      if (plVar4 == (longlong *)0x0) {
        return;
      }
    }
    lVar2 = (**(code **)(*plVar4 + 0x950))(plVar4);
    if (lVar2 != 0) {
      plVar3 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4);
      cVar1 = (**(code **)(*plVar3 + 0x778))(plVar3);
      if (((cVar1 != '\0') &&
          (plVar4 = (longlong *)(**(code **)(plVar4[0x8c] + 0x10))(plVar4 + 0x8c,(char)plVar4[0xd2])
          , *(char *)(param_1 + 0x1d8) == '\0')) &&
         ((plVar4 != (longlong *)0x0 &&
          (cVar1 = (**(code **)(*plVar4 + 0x488))(plVar4,1), cVar1 != '\0')))) {
        *(undefined1 *)(param_1 + 0x1e4) = 1;
        FUN_14309f590(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1430a2730 FUN_1430a2730 body=70 status=ok
// SIG undefined FUN_1430a2730(void)

void FUN_1430a2730(longlong *param_1,char param_2)

{
  char local_res10 [24];
  
  if ((param_2 == '\0') && (*(char *)((longlong)param_1 + 0x1e9) != '\0')) {
    (**(code **)(*param_1 + 0x448))();
  }
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x4c,local_res10);
  return;
}



// FUNCTION 1430a2780 FUN_1430a2780 body=74 status=ok
// SIG undefined FUN_1430a2780(void)

void FUN_1430a2780(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x450))();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x50,0);
  cVar1 = (**(code **)(*param_1 + 0x458))(param_1);
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001430a27bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1430a27d0 FUN_1430a27d0 body=70 status=ok
// SIG undefined FUN_1430a27d0(void)

void FUN_1430a27d0(longlong *param_1,char param_2)

{
  char local_res10 [24];
  
  if ((param_2 == '\0') && (*(char *)((longlong)param_1 + 0x1e9) == '\0')) {
    (**(code **)(*param_1 + 0x448))();
  }
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x4a,local_res10);
  return;
}



// FUNCTION 1430a2820 FUN_1430a2820 body=62 status=ok
// SIG undefined FUN_1430a2820(void)

void FUN_1430a2820(longlong *param_1,char param_2)

{
  char local_res10 [24];
  
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x450))();
  }
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x4e,local_res10);
  return;
}



// FUNCTION 1430a2860 FUN_1430a2860 body=488 status=ok
// SIG undefined FUN_1430a2860(void)

void FUN_1430a2860(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_38;
  float local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,uVar1,0,0,0,0,0,0,0);
  *(byte *)(lVar4 + 0x71a) = *(byte *)(lVar4 + 0x71a) | 0x40;
  *(byte *)(lVar4 + 0xba) = *(byte *)(lVar4 + 0xba) | 3;
  *(uint *)(lVar4 + 0x398) =
       *(uint *)(lVar4 + 0x398) ^ (*(uint *)(param_2 + 0x398) ^ *(uint *)(lVar4 + 0x398)) & 1;
  *(byte *)(lVar4 + 0x2f0) =
       *(byte *)(lVar4 + 0x2f0) ^ (*(byte *)(lVar4 + 0x2f0) ^ *(byte *)(param_2 + 0x2f0)) & 0x20;
  *(byte *)(lVar4 + 0x2f0) =
       (*(byte *)(param_2 + 0x2f0) ^ *(byte *)(lVar4 + 0x2f0)) & 0x40 ^ *(byte *)(lVar4 + 0x2f0);
  FUN_142398e60(lVar4,*(undefined4 *)(param_2 + 0x6b8),0);
  FUN_14260f940(lVar4,*param_4);
  *(byte *)(lVar4 + 0x24c) = *(byte *)(lVar4 + 0x24c) | 0x10;
  uVar2 = *(undefined4 *)((longlong)param_4 + 0x24);
  local_30 = *(float *)(param_4 + 5);
  *(undefined4 *)(lVar4 + 0x1ec) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(lVar4 + 0x1f0) = uVar2;
  *(float *)(lVar4 + 500) = local_30;
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  FQuat::Rotator(&local_28,&local_38);
  *(undefined8 *)(lVar4 + 0x1f8) = local_38;
  *(float *)(lVar4 + 0x200) = local_30;
  local_30 = *(float *)(param_4 + 7) * *(float *)(param_2 + 0x238);
  *(ulonglong *)(lVar4 + 0x204) =
       CONCAT44(*(float *)((longlong)param_4 + 0x34) * *(float *)(param_2 + 0x234),
                *(float *)(param_4 + 6) * *(float *)(param_2 + 0x230));
  *(float *)(lVar4 + 0x20c) = local_30;
  FUN_142382f60(lVar4,param_2,&DAT_146af29ec,*param_3);
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  FUN_14234b270(lVar4,lVar5);
  return;
}



// FUNCTION 1430a2a50 FUN_1430a2a50 body=237 status=ok
// SIG undefined FUN_1430a2a50(void)

void FUN_1430a2a50(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  uint uStackX_c;
  
  plVar4 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x1f8) != 0) && (*(longlong *)(param_1 + 0x200) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x200) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      plVar6 = *(longlong **)(param_1 + 0x200);
      if (plVar6 == (longlong *)0x0) {
LAB_1430a2acc:
        plVar5 = (longlong *)0x1;
        plVar7 = plVar4;
      }
      else {
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(plVar6 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar3 == (int)plVar6[1];
          if (bVar8) {
            *(int *)(plVar6 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar8) {
            if (plVar6 != (longlong *)0x0) {
              plVar4 = *(longlong **)(param_1 + 0x1f8);
            }
            goto LAB_1430a2acc;
          }
          LOCK();
          iVar3 = (int)plVar6[1];
          bVar8 = iVar3 == 0;
          if (bVar8) {
            *(int *)(plVar6 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        plVar5 = (longlong *)0x1;
        plVar6 = plVar4;
        plVar7 = plVar4;
      }
      goto LAB_1430a2ade;
    }
  }
  plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar7 = (longlong *)0x0;
  plVar5 = plVar4;
LAB_1430a2ade:
  if ((plVar5 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_142c7dff0(plVar7);
    return;
  }
  return;
}



// FUNCTION 1430a2b40 FUN_1430a2b40 body=327 status=ok
// SIG undefined FUN_1430a2b40(void)

void FUN_1430a2b40(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  if (param_1[0x10] == 0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x11) & 2) == 0) {
      lVar2 = *param_2;
      local_40 = 0;
      local_50 = 0;
      local_58 = 0;
      puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x2a0))(0,local_res8);
      puVar1 = (undefined8 *)(**(code **)(lVar2 + 0x428))(param_2,local_38,*puVar1);
      local_48 = *puVar1;
      local_40 = *(undefined4 *)(puVar1 + 1);
      FUN_1405a1e30(local_20,param_2,param_1[0x10],&local_48,0x42480000,&local_58);
      puVar3 = local_20;
      goto LAB_1430a2c69;
    }
    lVar2 = FUN_14059b7e0(param_2[0x23],1);
  }
  else {
    lVar2 = param_2[0x23];
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x2a0))(param_1,local_res8);
    lVar2 = FUN_1405ab470(lVar2,*puVar1,1,param_2);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_1405a3150(lVar2,local_38,param_1[0x10],0);
  puVar3 = local_38;
LAB_1430a2c69:
  FUN_140591060(puVar3);
  return;
}



// FUNCTION 1430a2c90 FUN_1430a2c90 body=1832 status=ok
// SIG undefined FUN_1430a2c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430a2c90(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  uint local_270;
  float local_268;
  float local_264 [3];
  longlong local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined8 local_228;
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  longlong *local_210;
  longlong *local_208;
  undefined1 local_1f8 [32];
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c7;
  longlong *local_128;
  undefined1 local_118 [56];
  undefined1 local_e0 [56];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  plVar8 = (longlong *)param_1[0x3a];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)param_1[0x23];
    param_1[0x3a] = (longlong)plVar8;
  }
  fVar16 = (float)(**(code **)(*param_1 + 0x428))();
  FUN_142c62180(local_1f8);
  local_1c7 = 2;
  puVar7 = (undefined8 *)FUN_142c62590(local_118,&DAT_146b2fcb8,fVar16);
  iVar6 = local_1d0;
  lVar13 = (longlong)local_1d0;
  local_1d0 = local_1d0 + 1;
  if (local_1cc < local_1d0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_1d8,iVar6);
  }
  uVar14 = puVar7[1];
  puVar12 = (undefined8 *)(lVar13 * 0x38 + local_1d8);
  *puVar12 = *puVar7;
  puVar12[1] = uVar14;
  uVar14 = puVar7[3];
  puVar12[2] = puVar7[2];
  puVar12[3] = uVar14;
  uVar2 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uVar3 = *(undefined4 *)(puVar7 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar7 + 0x2c);
  *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)((longlong)puVar12 + 0x24) = uVar2;
  *(undefined4 *)(puVar12 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar4;
  puVar12[6] = puVar7[6];
  puVar7 = (undefined8 *)FUN_142c62570(local_e0,&DAT_146b2fd08,1000);
  iVar6 = local_1d0;
  lVar13 = (longlong)local_1d0;
  local_1d0 = local_1d0 + 1;
  if (local_1cc < local_1d0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_1d8,iVar6);
  }
  uVar14 = puVar7[1];
  local_270 = local_270 & 0xffffff00;
  local_278 = 0;
  puVar12 = (undefined8 *)(lVar13 * 0x38 + local_1d8);
  *puVar12 = *puVar7;
  puVar12[1] = uVar14;
  uVar14 = puVar7[3];
  puVar12[2] = puVar7[2];
  puVar12[3] = uVar14;
  uVar2 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uVar3 = *(undefined4 *)(puVar7 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar7 + 0x2c);
  *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)((longlong)puVar12 + 0x24) = uVar2;
  *(undefined4 *)(puVar12 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar4;
  puVar12[6] = puVar7[6];
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x998))(plVar8,local_218,2,local_1f8);
  param_1[0x3f] = *plVar8;
  plVar8 = (longlong *)plVar8[1];
  plVar11 = (longlong *)param_1[0x40];
  if (plVar8 != plVar11) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      plVar11 = (longlong *)param_1[0x40];
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar6 == 1) && (plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    param_1[0x40] = (longlong)plVar8;
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_210 + 1;
    lVar13 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
  if ((param_1[0x3f] != 0) && (param_1[0x40] != 0)) {
    plVar8 = (longlong *)0x0;
    piVar1 = (int *)(param_1[0x40] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar11 = (longlong *)param_1[0x40];
      local_238 = (longlong *)0x0;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar11[1];
        bVar15 = iVar6 == 0;
        if (bVar15) {
          *(int *)(plVar11 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar15) {
          LOCK();
          bVar15 = iVar6 == (int)plVar11[1];
          if (bVar15) {
            *(int *)(plVar11 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar15) {
            local_238 = (longlong *)param_1[0x3f];
            LOCK();
            plVar9 = plVar11 + 1;
            lVar13 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar11[1];
          bVar15 = iVar6 == 0;
          if (bVar15) {
            *(int *)(plVar11 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      plVar11 = local_238;
      cVar5 = (**(code **)(*local_238 + 0xb8))(local_238);
      *(bool *)((longlong)param_1 + 0x1e5) = cVar5 == '\0';
      if (param_1[0x23] != 0) {
        plVar8 = (longlong *)FUN_140a63ba0();
      }
      iVar6 = FUN_14233f450(param_1);
      if (((iVar6 == 3) ||
          ((plVar8 != (longlong *)0x0 &&
           (cVar5 = (**(code **)(*plVar8 + 0x778))(plVar8), cVar5 != '\0')))) &&
         (*(char *)((longlong)param_1 + 0x1e5) == '\0')) {
        local_228 = FUN_1430a7f60();
        cVar5 = FUN_142c72b80(plVar11,local_228);
        if (cVar5 == '\0') {
          local_268 = 0.5;
          plVar8 = (longlong *)FUN_142c6f640(plVar11,2);
          if (plVar8 == (longlong *)0x0) {
LAB_1430a2ff3:
            plVar8 = (longlong *)FUN_142c6f640(plVar11,1);
            if (plVar8 != (longlong *)0x0) {
              lVar13 = UMaterialInstanceConstant::GetPrivateStaticClass();
              if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                  lVar13 + 0x88)) {
                bVar15 = false;
              }
              else {
                bVar15 = true;
              }
              if (bVar15) goto LAB_1430a3042;
            }
            local_264[0] = *(float *)(param_1 + 0x3e);
          }
          else {
            lVar13 = UMaterialInstanceConstant::GetPrivateStaticClass();
            if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                lVar13 + 0x88)) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            if (!bVar15) goto LAB_1430a2ff3;
LAB_1430a3042:
            if (fVar16 <= 0.0) {
              fVar17 = 1.0;
            }
            else {
              fVar17 = (float)(**(code **)(*plVar8 + 0x280))(plVar8);
              fVar17 = fVar17 / fVar16;
            }
            FUN_142c71c20(plVar8,fVar17,&local_268,local_264);
            local_264[0] = local_264[0] - local_268;
            *(float *)(param_1 + 0x3e) = local_264[0];
          }
          local_248 = FUN_143099810;
          lVar13 = param_1[0x24];
          uStack_240 = 0;
          fVar16 = local_264[0] * *(float *)(param_1 + 0x3c) + local_268;
          if (lVar13 == 0) {
            lVar13 = FUN_1423407b0(param_1);
          }
          if (*(longlong *)(lVar13 + 400) == 0) {
            uVar14 = *(undefined8 *)(lVar13 + 0x3f8);
          }
          else {
            uVar14 = *(undefined8 *)(*(longlong *)(lVar13 + 400) + 0x90);
          }
          plVar8 = (longlong *)FMemory::Realloc(0,0x30);
          local_208 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar8 + 1,param_1);
            *(undefined4 *)(plVar8 + 2) = (undefined4)local_248;
            *(undefined4 *)((longlong)plVar8 + 0x14) = local_248._4_4_;
            *(undefined4 *)(plVar8 + 3) = uStack_240;
            *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_23c;
            lVar13 = FDelegateHandle::GenerateNewID();
            plVar8[5] = lVar13;
            *plVar8 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_a8 = 0;
          local_a0 = 0;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x30))(plVar8,&local_a8);
          }
          FWeakObjectPtr::operator=(local_98,0);
          local_270 = 0xbf800000;
          local_278 = 0;
          local_90 = 0;
          local_58 = (longlong *)0x0;
          local_48 = 0;
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar14,param_1 + 0x3d,&local_a8,fVar16);
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
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            local_208 = (longlong *)FMemory::Realloc(plVar8,0,0);
            if (local_208 != (longlong *)0x0) {
              FMemory::Free(local_208);
            }
          }
        }
      }
      local_250 = (longlong *)param_1[0x40];
      local_248 = FUN_1430a3610;
      uStack_240 = 0;
      local_258 = 0;
      if (local_250 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_250[1];
        bVar15 = iVar6 == 0;
        if (bVar15) {
          *(int *)(local_250 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar15) {
          LOCK();
          bVar15 = iVar6 == (int)local_250[1];
          if (bVar15) {
            *(int *)(local_250 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar15) {
            local_258 = param_1[0x3f];
            goto LAB_1430a3284;
          }
          LOCK();
          iVar6 = (int)local_250[1];
          bVar15 = iVar6 == 0;
          if (bVar15) {
            *(int *)(local_250 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_250 = (longlong *)0x0;
      }
LAB_1430a3284:
      plVar11 = local_250;
      lVar13 = local_258;
      plVar8 = (longlong *)(local_258 + 0x58);
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      local_128 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_FUN_143fcff50;
        FWeakObjectPtr::operator=(plVar9 + 1,param_1);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_248;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_248._4_4_;
        *(undefined4 *)(plVar9 + 3) = uStack_240;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_23c;
        lVar10 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar10;
        *plVar9 = (longlong)&PTR_FUN_143fcff98;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        (**(code **)(*plVar9 + 0x20))(plVar9,local_220);
        iVar6 = *(int *)(lVar13 + 0x60);
        *(int *)(lVar13 + 0x60) = iVar6 + 1;
        if (*(int *)(lVar13 + 100) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar6);
        }
        puVar7 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar8);
        *puVar7 = plVar9;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      plVar8 = local_250;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar11 + 1;
        lVar13 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_250)(local_250);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_250 + 8))(local_250,1);
          }
        }
      }
      goto LAB_1430a337e;
    }
  }
  FUN_143099810(param_1);
  FUN_1430a3610(param_1,5);
LAB_1430a337e:
  FUN_142c63c50(local_1f8);
  return;
}



// FUNCTION 1430a33c0 FUN_1430a33c0 body=228 status=ok
// SIG undefined FUN_1430a33c0(void)

void FUN_1430a33c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  
  FUN_14234a5b0();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b480f0) {
    _Init_thread_header(&DAT_146b480f0);
    if (DAT_146b480f0 == -1) {
      uVar1 = FUN_1430bf3b0();
      FUN_1430bf3b0();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedHeat",1);
      DAT_146b480e8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146b480f0);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b480e8 + 0x30)) {
    do {
      (**(code **)*param_2)
                (param_2,*(short *)(DAT_146b480e8 + 0x40) + (short)iVar3,
                 *(char *)(param_1 + 0x1b8) == '\0');
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b480e8 + 0x30));
  }
  return;
}



// FUNCTION 1430a34b0 OnLowPowerModeDelegate_Handler body=30 status=ok
// SIG undefined OnLowPowerModeDelegate_Handler(void)

void UApplicationLifecycleComponent::OnLowPowerModeDelegate_Handler
               (longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x178,local_res10);
  return;
}



// FUNCTION 1430a34d0 FUN_1430a34d0 body=57 status=ok
// SIG undefined FUN_1430a34d0(void)

void FUN_1430a34d0(longlong *param_1)

{
  char cVar1;
  
  if ((char)param_1[0x31] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x400))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001430a34fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x418))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1430a3510 FUN_1430a3510 body=44 status=ok
// SIG undefined FUN_1430a3510(void)

void FUN_1430a3510(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x291) == '\x02') || (*(char *)(param_1 + 0x292) != '\0')) ||
      (*(char *)(param_1 + 0x291) == '\x01')) && (*(char *)(param_1 + 0x295) != '\0')) {
    *(char *)(param_1 + 0x295) = *(char *)(param_1 + 0x295) + -1;
  }
  return;
}



// FUNCTION 1430a3540 FUN_1430a3540 body=28 status=ok
// SIG undefined FUN_1430a3540(void)

void FUN_1430a3540(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && ((char)param_1[0x25] == '\x03')) {
                    /* WARNING: Could not recover jumptable at 0x0001430a3554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x808))();
    return;
  }
  return;
}



// FUNCTION 1430a3560 FUN_1430a3560 body=166 status=ok
// SIG undefined FUN_1430a3560(void)

void FUN_1430a3560(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x248);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x248) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OnAmmoChanged",1);
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = *puVar1;
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  FUN_143087f00(lVar2,&local_18,param_1);
  return;
}



// FUNCTION 1430a3610 FUN_1430a3610 body=300 status=ok
// SIG undefined FUN_1430a3610(void)

void FUN_1430a3610(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  plVar5 = (longlong *)0x0;
  if (param_1 + 0x3f != local_18) {
    param_1[0x3f] = 0;
    plVar2 = (longlong *)param_1[0x40];
    param_1[0x40] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 0;
  if (param_1[0x23] != 0) {
    plVar5 = (longlong *)FUN_140a63ba0();
  }
  iVar4 = FUN_14233f450(param_1);
  if (iVar4 != 3) {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    cVar3 = (**(code **)(*plVar5 + 0x778))(plVar5);
    if (cVar3 == '\0') {
      return;
    }
  }
  if (param_2 == '\x01') {
    if (*(char *)((longlong)param_1 + 0x1e5) != '\0') {
      plVar5 = (longlong *)param_1[0x3a];
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x23];
        param_1[0x3a] = (longlong)plVar5;
      }
      (**(code **)(*plVar5 + 0x808))(plVar5,0xffffffff,0);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x36,0);
    }
  }
  else if ((char)param_1[0x41] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001430a3735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x410))(param_1);
    return;
  }
  FUN_1430a4fb0(param_1,0);
  local_res8[0] = 1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x34,local_res8);
  return;
}



// FUNCTION 1430a3740 FUN_1430a3740 body=66 status=ok
// SIG undefined FUN_1430a3740(void)

void FUN_1430a3740(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x2a8)) {
    FUN_142ca9970(param_1 + 0x2a0,1);
  }
  if (0 < *(int *)(param_1 + 0x2b8)) {
    FUN_142ca9970(param_1 + 0x2b0,1);
    return;
  }
  return;
}



// FUNCTION 1430a3790 FUN_1430a3790 body=1549 status=ok
// SIG undefined FUN_1430a3790(void)

void FUN_1430a3790(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte bVar7;
  char cVar8;
  float fVar9;
  byte local_res10 [8];
  undefined1 local_res18 [8];
  byte local_res20 [8];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56 [30];
  
  plVar3 = (longlong *)*param_2;
  plVar4 = (longlong *)*plVar3;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)plVar3[1];
    lVar5 = plVar3[4];
    cVar8 = (char)param_2[1];
    while (cVar8 != -1) {
      switch(cVar8) {
      case '\0':
        FUN_142487a60(param_1 + 8,plVar4,lVar5,local_res18);
        break;
      case '\x01':
        FUN_142487a60(param_1 + 0x14,plVar4,lVar5,local_res20);
        break;
      case '\x02':
        FUN_142487a60(param_1 + 0x20,plVar4,lVar5,&local_58);
        break;
      case '\x03':
        FUN_142487a60(param_1 + 0x3c,plVar4,lVar5,&local_57);
        break;
      case '\x04':
        FUN_142487a60(param_1 + 0x48,plVar4,lVar5,local_56);
        break;
      case '\x05':
        (**(code **)(*plVar4 + 8))(plVar4,param_1 + 0x3a);
        break;
      case '\x06':
        (**(code **)(*plVar4 + 8))(plVar4,param_1 + 0x38);
        break;
      case '\a':
        puVar6 = *(undefined1 **)plVar4[1];
        if ((undefined1 *)((undefined8 *)plVar4[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0xa8,1);
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = *puVar6;
          *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
        }
        fVar9 = (float)*(byte *)(param_1 + 0xa8) * 0.01;
        if (0.0 <= fVar9) {
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
        }
        else {
          fVar9 = 0.0;
        }
        *(float *)(param_1 + 0x98) = fVar9;
        if ((0.0 < fVar9) &&
           (cVar8 = UActorComponent::IsComponentTickEnabled(param_1 + -0x180), cVar8 == '\0')) {
          (**(code **)(*(longlong *)(param_1 + -0x180) + 0x358))(param_1 + -0x180,1);
        }
        break;
      case '\b':
        bVar2 = *(byte *)(param_1 + 0xa9);
        (**(code **)(*plVar4 + 8))(plVar4,local_res10);
        lVar1 = param_1 + -0x180;
        *(byte *)(param_1 + 0xa9) =
             *(byte *)(param_1 + 0xa9) ^ (local_res10[0] ^ *(byte *)(param_1 + 0xa9)) & 1;
        bVar7 = *(byte *)(param_1 + 0xa9) & 1;
        if (bVar7 != (bVar2 & 1)) {
          if (bVar7 == 0) {
            if (*(longlong *)(param_1 + 0xb0) == 0) {
              *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + -0x68);
            }
            cVar8 = FUN_14307eb30();
            if (cVar8 != '\0') {
              *(undefined4 *)(param_1 + 0xa0) = 0;
            }
            FUN_1430bf9b0(lVar1);
          }
          else {
            if (*(longlong *)(param_1 + 0xb0) == 0) {
              *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + -0x68);
            }
            cVar8 = FUN_14307eb30();
            if (cVar8 != '\0') {
              *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
              FUN_1430a4920(lVar1);
            }
            FUN_1430bf8f0(lVar1);
          }
        }
        break;
      default:
        goto switchD_1430a3b3a_default;
      }
      if ((char)param_2[1] != -1) {
        plVar3 = *(longlong **)(*param_2 + 8);
        puVar6 = *(undefined1 **)plVar3[1];
        if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar6;
          *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
        }
      }
      cVar8 = (char)param_2[1];
    }
  }
  else {
    lVar5 = plVar3[3];
    local_res10[0] = 0;
    if (*(float *)(lVar5 + 8) != *(float *)(param_1 + 0xc)) {
      plVar3 = (longlong *)plVar4[1];
      if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
      }
      else {
        local_res10[0] = *(byte *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 8,plVar4,0,local_res18);
    }
    local_res10[0] = 1;
    if (*(float *)(lVar5 + 0xc) != *(float *)(param_1 + 0x18)) {
      plVar3 = (longlong *)plVar4[1];
      if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
      }
      else {
        local_res10[0] = *(byte *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x14,plVar4,0,local_res18);
    }
    local_res10[0] = 2;
    if (*(float *)(lVar5 + 0x10) != *(float *)(param_1 + 0x24)) {
      plVar3 = (longlong *)plVar4[1];
      if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
      }
      else {
        local_res10[0] = *(byte *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x20,plVar4,0,local_res18);
    }
    local_res10[0] = 3;
    if (*(float *)(lVar5 + 0x14) != *(float *)(param_1 + 0x40)) {
      plVar3 = (longlong *)plVar4[1];
      if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
      }
      else {
        local_res10[0] = *(byte *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x3c,plVar4,0,local_res18);
    }
    local_res10[0] = 4;
    if (*(float *)(lVar5 + 0x18) != *(float *)(param_1 + 0x4c)) {
      plVar3 = (longlong *)plVar4[1];
      if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
      }
      else {
        local_res10[0] = *(byte *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x48,plVar4,0,local_res18);
    }
    local_res10[0] = 5;
    if (*(char *)(param_1 + 0x3a) != *(char *)(lVar5 + 0x1c)) {
      plVar3 = (longlong *)plVar4[1];
      if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
      }
      else {
        local_res10[0] = *(byte *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      (**(code **)(*plVar4 + 8))(plVar4,param_1 + 0x3a);
    }
    if ((*(byte *)(*param_2 + 0x68) & 1) == 0) {
      local_res10[0] = 6;
      if (*(char *)(param_1 + 0x38) != *(char *)(lVar5 + 0x1d)) {
        plVar3 = (longlong *)plVar4[1];
        if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
          (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
        }
        else {
          local_res10[0] = *(byte *)*plVar3;
          *plVar3 = *plVar3 + 1;
        }
        (**(code **)(*plVar4 + 8))(plVar4,param_1 + 0x38);
      }
      local_res10[0] = 7;
      if (*(char *)(param_1 + 0xa8) != *(char *)(lVar5 + 0x1f)) {
        plVar3 = (longlong *)plVar4[1];
        if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
          (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
        }
        else {
          local_res10[0] = *(byte *)*plVar3;
          *plVar3 = *plVar3 + 1;
        }
        puVar6 = *(undefined1 **)plVar4[1];
        if ((undefined1 *)((undefined8 *)plVar4[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0xa8,1);
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = *puVar6;
          *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
        }
      }
    }
    local_res20[0] = *(byte *)(param_1 + 0xa9) & 1;
    local_res10[0] = 8;
    if (local_res20[0] != *(byte *)(lVar5 + 0x1e)) {
      plVar3 = (longlong *)plVar4[1];
      if ((byte *)*plVar3 + 1 <= (byte *)plVar3[1]) {
        local_res10[0] = *(byte *)*plVar3;
        *plVar3 = *plVar3 + 1;
        (**(code **)(*plVar4 + 8))(plVar4,local_res20);
        return;
      }
      (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,1);
      (**(code **)(*plVar4 + 8))(plVar4,local_res20);
      return;
    }
  }
switchD_1430a3b3a_default:
  return;
}



// FUNCTION 1430a3dd0 FUN_1430a3dd0 body=491 status=ok
// SIG undefined FUN_1430a3dd0(void)

void FUN_1430a3dd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    lVar3 = plVar1[1];
    lVar4 = plVar1[4];
    cVar5 = (char)param_2[1];
    while (cVar5 != -1) {
      if (cVar5 == '\0') {
        lVar6 = param_1 + 0x10;
        puVar7 = local_res20;
      }
      else if (cVar5 == '\x01') {
        lVar6 = param_1 + 0x1c;
        puVar7 = local_res18;
      }
      else {
        if (cVar5 != '\x02') {
          return;
        }
        lVar6 = param_1 + 0x28;
        puVar7 = local_res10;
      }
      FUN_142487a60(lVar6,lVar3,lVar4,puVar7);
      if ((char)param_2[1] != -1) {
        plVar1 = *(longlong **)(*param_2 + 8);
        puVar7 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar7 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar7;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
      }
      cVar5 = (char)param_2[1];
    }
  }
  else {
    lVar3 = plVar1[3];
    local_res10[0] = 0;
    if (*(float *)(lVar3 + 8) != *(float *)(param_1 + 0x14)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x10,plVar2,0,local_res18);
    }
    local_res10[0] = 1;
    if (*(float *)(lVar3 + 0xc) != *(float *)(param_1 + 0x20)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x1c,plVar2,0,local_res18);
    }
    local_res10[0] = 2;
    if (*(float *)(lVar3 + 0x10) != *(float *)(param_1 + 0x2c)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x28,plVar2,0,local_res18);
      return;
    }
  }
  return;
}



// FUNCTION 1430a3fc0 FUN_1430a3fc0 body=274 status=ok
// SIG undefined FUN_1430a3fc0(void)

void FUN_1430a3fc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    lVar3 = plVar1[1];
    lVar4 = plVar1[4];
    cVar6 = (char)param_2[1];
    while ((cVar6 != -1 && (cVar6 == '\0'))) {
      FUN_142487a60(param_1 + 0x40,lVar3,lVar4,local_res10);
      if ((char)param_2[1] != -1) {
        plVar1 = *(longlong **)(*param_2 + 8);
        puVar5 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar5 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar5;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
      }
      cVar6 = (char)param_2[1];
    }
  }
  else {
    local_res10[0] = 0;
    if (*(float *)(plVar1[3] + 8) != *(float *)(param_1 + 0x44)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x40,plVar2,0,local_res18);
      return;
    }
  }
  return;
}



// FUNCTION 1430a40e0 FUN_1430a40e0 body=977 status=ok
// SIG undefined FUN_1430a40e0(void)

void FUN_1430a40e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  char cVar7;
  byte bVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    lVar4 = plVar1[1];
    lVar3 = plVar1[4];
    cVar7 = (char)param_2[1];
    while ((cVar7 != -1 && (cVar7 == '\0'))) {
      FUN_142487a60(param_1 + 0x40,lVar4,lVar3,local_res8);
      if ((char)param_2[1] != -1) {
        plVar1 = *(longlong **)(*param_2 + 8);
        puVar6 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar6;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
      }
      cVar7 = (char)param_2[1];
    }
  }
  else {
    local_res8[0] = 0;
    if (*(float *)(plVar1[3] + 8) != *(float *)(param_1 + 0x44)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res10[0] = 1;
      FUN_142487a60(param_1 + 0x40,plVar2,0,local_res10);
    }
  }
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar1 = (longlong *)plVar1[1];
    cVar7 = (char)param_2[1];
    while (cVar7 != -1) {
      if (cVar7 == '\x02') {
        puVar5 = *(undefined4 **)plVar1[1];
        if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar5 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_1 + 0x5c,4);
          if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar1,param_1 + 0x5c,4);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x5c) = *puVar5;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
        }
      }
      else {
        if (cVar7 != '\x03') {
          return;
        }
        cVar7 = *(char *)(param_1 + 0x89);
        puVar6 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_1 + 0x89,1);
        }
        else {
          *(undefined1 *)(param_1 + 0x89) = *puVar6;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
        if (*(char *)(param_1 + 0x89) != cVar7) {
          lVar4 = param_1 + -0x180;
          if (((*(longlong *)(param_1 + -0x68) != 0) &&
              (plVar2 = *(longlong **)(*(longlong *)(param_1 + -0x68) + 0x150),
              plVar2 != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*plVar2 + 0x778))(), cVar7 == '\0')) {
            cVar7 = *(char *)(param_1 + 0x88);
            bVar8 = *(byte *)(param_1 + 0x89) >> 4;
            *(byte *)(param_1 + 0x88) = bVar8;
            if (*(byte *)(param_1 + 0x89) >> 4 == 0) {
              if (cVar7 == '\x01') {
LAB_1430a43fd:
                FUN_1430a2a50(lVar4);
              }
            }
            else if (bVar8 == 1) {
              FUN_1430a2c90(lVar4);
            }
            else {
              if (bVar8 == 2) goto LAB_1430a43fd;
              if (bVar8 == 3) {
                FUN_1430a5b10(lVar4);
              }
            }
          }
        }
      }
      if ((char)param_2[1] != -1) {
        plVar2 = *(longlong **)(*param_2 + 8);
        puVar6 = *(undefined1 **)plVar2[1];
        if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar6;
          *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
        }
      }
      cVar7 = (char)param_2[1];
    }
  }
  else {
    lVar4 = plVar1[3];
    local_res8[0] = 2;
    if (*(int *)(param_1 + 0x5c) != *(int *)(lVar4 + 0x10)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      puVar5 = *(undefined4 **)plVar2[1];
      if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar5 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0x5c,4);
        if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar2,param_1 + 0x5c,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = *puVar5;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
      }
    }
    local_res8[0] = 3;
    if (*(char *)(param_1 + 0x89) != *(char *)(lVar4 + 0x14)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      puVar6 = *(undefined1 **)plVar2[1];
      if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar6 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0x89,1);
        return;
      }
      *(undefined1 *)(param_1 + 0x89) = *puVar6;
      *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
      return;
    }
  }
  return;
}



// FUNCTION 1430a44c0 FUN_1430a44c0 body=1005 status=ok
// SIG undefined FUN_1430a44c0(void)

void FUN_1430a44c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined1 local_res10 [8];
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar1 = (longlong *)plVar1[1];
    cVar6 = (char)param_2[1];
    while (cVar6 != -1) {
      if (cVar6 == '\0') {
        puVar4 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar4 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_1 + 0x113,1);
        }
        else {
          *(undefined1 *)(param_1 + 0x113) = *puVar4;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
        puVar4 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar4 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,(undefined1 *)(param_1 + 0x114),1);
        }
        else {
          *(undefined1 *)(param_1 + 0x114) = *puVar4;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
        if ((*(char *)(param_1 + 0x113) != '\0') || (*(char *)(param_1 + 0x114) != '\0')) {
          FUN_1430a5430(param_1 + -0x180,param_1 + 0x113);
        }
      }
      else if (cVar6 == '\x01') {
        puVar5 = *(undefined4 **)plVar1[1];
        if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar5 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_1 + 0x60,4);
          if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar1,param_1 + 0x60,4);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x60) = *puVar5;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
        }
      }
      else {
        if (cVar6 != '\x02') {
          return;
        }
        puVar5 = *(undefined4 **)plVar1[1];
        if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar5 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_1 + 100,4);
          if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar1,param_1 + 100,4);
          }
        }
        else {
          *(undefined4 *)(param_1 + 100) = *puVar5;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
        }
      }
      if ((char)param_2[1] != -1) {
        plVar2 = *(longlong **)(*param_2 + 8);
        puVar4 = *(undefined1 **)plVar2[1];
        if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar4 + 1) {
          (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar4;
          *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
        }
      }
      cVar6 = (char)param_2[1];
    }
  }
  else {
    lVar3 = plVar1[3];
    if (((*(byte *)(plVar1 + 0xd) & 1) == 0) &&
       ((local_res10[0] = 0, *(char *)(lVar3 + 8) != *(char *)(param_1 + 0x113) ||
        (*(char *)(lVar3 + 9) != *(char *)(param_1 + 0x114))))) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      puVar4 = *(undefined1 **)plVar2[1];
      if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar4 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0x113,1);
      }
      else {
        *(undefined1 *)(param_1 + 0x113) = *puVar4;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
      }
      puVar4 = *(undefined1 **)plVar2[1];
      if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar4 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,(undefined1 *)(param_1 + 0x114),1);
      }
      else {
        *(undefined1 *)(param_1 + 0x114) = *puVar4;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
      }
    }
    local_res10[0] = 1;
    if (*(float *)(lVar3 + 0xc) != *(float *)(param_1 + 0x60)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      puVar5 = *(undefined4 **)plVar2[1];
      if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar5 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0x60,4);
        if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar2,param_1 + 0x60,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = *puVar5;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
      }
    }
    local_res10[0] = 2;
    if (*(float *)(lVar3 + 0x10) != *(float *)(param_1 + 100)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      puVar5 = *(undefined4 **)plVar2[1];
      if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar5 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 100,4);
        if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar2,param_1 + 100,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 100) = *puVar5;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
      }
    }
  }
  return;
}



// FUNCTION 1430a48b0 FUN_1430a48b0 body=101 status=ok
// SIG undefined FUN_1430a48b0(void)

void FUN_1430a48b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0xffffffff;
  param_1[1] = 1;
  iVar1 = rand();
  iVar2 = 0x7ffffffe;
  if ((int)((float)iVar1 * 65538.0) != 0x7fffffff) {
    iVar2 = (int)((float)iVar1 * 65538.0);
  }
  param_1[2] = iVar2;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[5] = (undefined4)DAT_1468b5d88;
  param_1[6] = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 1430a4920 FUN_1430a4920 body=89 status=ok
// SIG undefined FUN_1430a4920(void)

void FUN_1430a4920(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x229);
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  lVar3 = 0x1cc;
  if ((bVar1 & 1) == 0) {
    lVar3 = 0x198;
  }
  *(float *)(param_1 + 0x220) = *(float *)(lVar3 + param_1) + *(float *)(lVar2 + 0x790);
  return;
}



// FUNCTION 1430a4990 FUN_1430a4990 body=84 status=ok
// SIG undefined FUN_1430a4990(void)

void FUN_1430a4990(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UCurveLinearColor::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x7f8))(param_1,uVar1,(char)param_1[0xd2]);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x220) != *(char *)(lVar2 + 0x191))) {
      *(char *)(lVar2 + 0x220) = *(char *)(lVar2 + 0x191);
      FUN_1430a67a0(lVar2,1);
    }
  }
  return;
}



// FUNCTION 1430a4a10 FUN_1430a4a10 body=26 status=ok
// SIG undefined FUN_1430a4a10(void)

void FUN_1430a4a10(undefined8 param_1)

{
  undefined2 local_res10 [12];
  
  local_res10[0] = 0;
  FUN_1430a5430(param_1,local_res10);
  return;
}



// FUNCTION 1430a4a30 FUN_1430a4a30 body=213 status=ok
// SIG undefined FUN_1430a4a30(void)

void FUN_1430a4a30(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x1d0);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x1d0) = lVar4;
    if (lVar4 == 0) goto LAB_1430a4af2;
  }
  plVar3 = (longlong *)
           (**(code **)(*(longlong *)(lVar4 + 0x460) + 0x10))
                     ((longlong *)(lVar4 + 0x460),*(undefined1 *)(lVar4 + 0x690));
  if ((plVar3 != (longlong *)0x0) &&
     (iVar1 = (**(code **)(*plVar3 + 0x420))(plVar3), iVar1 < param_2)) {
    iVar1 = (**(code **)(*plVar3 + 0x420))(plVar3);
    iVar1 = iVar1 + *(int *)(param_1 + 0x1dc);
    iVar2 = (**(code **)(*plVar3 + 0x420))(plVar3);
    if (iVar1 <= param_2) {
      param_2 = iVar1;
    }
    if (param_2 - iVar2 != 0) {
      (**(code **)(*plVar3 + 0x4b0))(plVar3,param_2 - iVar2,0,0,1);
    }
  }
LAB_1430a4af2:
  FUN_14309f590(param_1);
  return;
}



// FUNCTION 1430a4b10 FUN_1430a4b10 body=135 status=ok
// SIG undefined FUN_1430a4b10(void)

void FUN_1430a4b10(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x1ba) != param_2) &&
     (*(char *)(param_1 + 0x1ba) = param_2, (*(byte *)(param_1 + 0x229) & 1) != 0)) {
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      lVar2 = *(longlong *)(param_1 + 0x230);
      if (*(char *)(param_1 + 0x1ba) == '\0') {
        if (lVar2 == 0) {
          lVar2 = *(longlong *)(param_1 + 0x118);
          *(longlong *)(param_1 + 0x230) = lVar2;
        }
        FUN_14307f090(lVar2,0xbf800000,1);
        return;
      }
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x230) = lVar2;
      }
      FUN_143093f10(lVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1430a4ba0 FUN_1430a4ba0 body=246 status=ok
// SIG undefined FUN_1430a4ba0(void)

void FUN_1430a4ba0(longlong *param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
    *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) & 0xfe;
    *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) | param_2;
    (**(code **)(*param_1 + 0x260))(param_1);
    cVar1 = UActorComponent::IsComponentTickEnabled(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
    if ((*(byte *)((longlong)param_1 + 0x229) & 1) != 0) {
      *(int *)((longlong)param_1 + 0x224) = (int)param_1[0x38];
      if (*(char *)((longlong)param_1 + 0x1ba) == '\0') {
        lVar3 = param_1[0x46];
        if (lVar3 == 0) {
          lVar3 = param_1[0x23];
          param_1[0x46] = lVar3;
        }
        FUN_14307f090(lVar3,0xbf800000,1);
      }
      FUN_1430bf8f0(param_1);
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1ba) == '\0') {
      lVar3 = param_1[0x46];
      if (lVar3 == 0) {
        lVar3 = param_1[0x23];
        param_1[0x46] = lVar3;
      }
      FUN_143093f10(lVar3,1);
    }
    FUN_1430bf9b0(param_1);
  }
  return;
}



// FUNCTION 1430a4ca0 FUN_1430a4ca0 body=751 status=ok
// SIG undefined FUN_1430a4ca0(void)

void FUN_1430a4ca0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong local_res8;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  if (param_2 != param_1[0x40]) {
    cVar4 = (**(code **)(*param_1 + 0x408))();
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0x420))(param_1,1);
    }
    if (param_1[0x40] != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UWeaponUseComponent::OnPreUseFinished",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      lVar1 = param_1[0x40];
      plVar14 = (longlong *)(lVar1 + 0x178);
      lVar7 = *plVar14;
      iVar12 = *(int *)(lVar1 + 0x180);
      for (lVar13 = lVar7; lVar13 != (longlong)iVar12 * 0x10 + lVar7; lVar13 = lVar13 + 0x10) {
        if ((*(longlong *)(lVar13 + 8) == local_res8) &&
           (plVar6 = (longlong *)FWeakObjectPtr::GetEvenIfUnreachable(lVar13), param_1 == plVar6)) {
          iVar12 = (int)(lVar13 - lVar7 >> 4);
          if (iVar12 != -1) {
            iVar9 = *(int *)(lVar1 + 0x180);
            iVar8 = (iVar9 - iVar12) + -1;
            if (0 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar12 * 0x10 + *plVar14),
                         (void *)((longlong)(iVar9 - iVar8) * 0x10 + *plVar14),(longlong)iVar8 << 4)
              ;
              iVar9 = *(int *)(lVar1 + 0x180);
            }
            *(int *)(lVar1 + 0x180) = iVar9 + -1;
          }
          break;
        }
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    }
    param_1[0x40] = param_2;
    if (param_2 != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UWeaponUseComponent::OnPreUseFinished",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      lVar1 = param_1[0x40];
      plVar14 = (longlong *)(lVar1 + 0x178);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_40);
      }
      piVar10 = (int *)*plVar14;
      iVar12 = *(int *)(lVar1 + 0x180);
      for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar12 * 4; piVar11 = piVar11 + 4) {
        if ((((*piVar11 == local_48) && (piVar11[1] == local_44)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar11), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
           (*(longlong *)(piVar11 + 2) == local_40)) {
          if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_1430a4f68;
          break;
        }
      }
      iVar12 = *(int *)(lVar1 + 0x180);
      *(int *)(lVar1 + 0x180) = iVar12 + 1;
      if (*(int *)(lVar1 + 0x184) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar12);
      }
      piVar10 = (int *)((longlong)iVar12 * 0x10 + *plVar14);
      *piVar10 = local_48;
      piVar10[1] = local_44;
      *(longlong *)(piVar10 + 2) = local_40;
LAB_1430a4f68:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    }
  }
  return;
}



// FUNCTION 1430a4f90 FUN_1430a4f90 body=25 status=ok
// SIG undefined FUN_1430a4f90(void)

void FUN_1430a4f90(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x31]) {
    *(char *)(param_1 + 0x31) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001430a4fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x428))();
    return;
  }
  return;
}



// FUNCTION 1430a4fb0 FUN_1430a4fb0 body=249 status=ok
// SIG undefined FUN_1430a4fb0(void)

void FUN_1430a4fb0(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if (((char)param_1[0x41] == '\x01') && (param_2 != '\x01')) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    puVar2 = (undefined8 *)FName::FName(local_res8,L"OnUserInput",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = *puVar2;
    lVar3 = param_1[0x3a];
    local_18 = local_28;
    local_14 = local_24;
    if (lVar3 == 0) {
      lVar3 = param_1[0x23];
      param_1[0x3a] = lVar3;
    }
    local_10 = local_20;
    FUN_143094650(lVar3,&local_18);
  }
  *(char *)(param_1 + 0x41) = param_2;
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    *(byte *)((longlong)param_1 + 0x209) =
         *(char *)((longlong)param_1 + 0x209) + 1U & 0xf | (char)param_1[0x41] << 4;
                    /* WARNING: Could not recover jumptable at 0x0001430a509c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  return;
}



// FUNCTION 1430a50b0 FUN_1430a50b0 body=568 status=ok
// SIG undefined FUN_1430a50b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430a50b0(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
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
  local_b8 = *(undefined1 **)(param_1 + 0x208);
  fVar6 = param_2;
  if (local_b8 != (undefined1 *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      local_b8 = *(undefined1 **)(param_1 + 0x208);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    uVar2 = FTimerManager::FindTimer(uVar4,&local_b8,0);
    fVar6 = (float)FTimerManager::InternalGetTimerRemaining(uVar4,uVar2);
    if (fVar6 <= param_2) {
      fVar6 = param_2;
    }
  }
  local_b8 = &LAB_143099174;
  lVar1 = *(longlong *)(param_1 + 0x120);
  uStack_b0 = 0;
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar1 + 400) == 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_b0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_ac;
    lVar1 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar1;
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
  FUN_142880850(uVar4,param_1 + 0x208,&local_a8,fVar6);
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
    lVar1 = FMemory::Realloc(plVar3,0,0);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  return;
}



// FUNCTION 1430a52f0 FUN_1430a52f0 body=92 status=ok
// SIG undefined FUN_1430a52f0(void)

void FUN_1430a52f0(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UCurveLinearColor::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x7f8))(param_1,uVar1,(char)param_1[0xd2]);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x220) != param_2)) {
      *(char *)(lVar2 + 0x220) = param_2;
      FUN_1430a67a0(lVar2,1);
    }
  }
  return;
}



// FUNCTION 1430a5350 FUN_1430a5350 body=22 status=ok
// SIG undefined FUN_1430a5350(void)

void FUN_1430a5350(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x220) != param_2) {
    *(char *)(param_1 + 0x220) = param_2;
    FUN_1430a67a0(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1430a5370 FUN_1430a5370 body=124 status=ok
// SIG undefined FUN_1430a5370(void)

void FUN_1430a5370(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UCurveLinearColor::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x7f8))(param_1,uVar1,(char)param_1[0xd2]);
    if ((lVar2 != 0) && (param_2 != *(char *)(lVar2 + 0x192))) {
      *(char *)(lVar2 + 0x192) = param_2;
      if (param_2 != '\x01') {
        FUN_1430a3560();
        FUN_1430a67a0(lVar2,1);
        return;
      }
      FUN_1430a6640(lVar2);
    }
  }
  return;
}



// FUNCTION 1430a53f0 FUN_1430a53f0 body=64 status=ok
// SIG undefined FUN_1430a53f0(void)

void FUN_1430a53f0(longlong param_1,char param_2)

{
  if (param_2 == *(char *)(param_1 + 0x192)) {
    return;
  }
  *(char *)(param_1 + 0x192) = param_2;
  if (param_2 != '\x01') {
    FUN_1430a3560();
    FUN_1430a67a0(param_1,1);
    return;
  }
  FUN_1430a6640();
  return;
}



// FUNCTION 1430a5430 FUN_1430a5430 body=573 status=ok
// SIG undefined FUN_1430a5430(void)

void FUN_1430a5430(longlong *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (((param_1[0x23] == 0) ||
      (plVar5 = *(longlong **)(param_1[0x23] + 0x150), plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x778))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar4 = FUN_14233f450(param_1);
  if (((iVar4 < 3) && (bVar1)) &&
     ((*param_2 != *(char *)((longlong)param_1 + 0x291) ||
      (param_2[1] != *(char *)((longlong)param_1 + 0x292))))) {
    lVar7 = param_1[0x5c];
    if (lVar7 == 0) {
      lVar7 = param_1[0x23];
      param_1[0x5c] = lVar7;
    }
    bVar8 = 1;
    bVar3 = ATTLBaseBossWyvePawn::IsExecRotation(lVar7);
    bVar9 = 0;
    if (1 < bVar3) {
      do {
        plVar5 = (longlong *)FUN_14307d8d0(lVar7,bVar8);
        bVar9 = bVar8;
        if (plVar5 == param_1) break;
        bVar8 = bVar8 + 1;
        bVar3 = ATTLBaseBossWyvePawn::IsExecRotation(lVar7);
        bVar9 = 0;
      } while (bVar8 < bVar3);
    }
    lVar6 = param_1[0x24];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    FUN_1430b47d0(lVar7,bVar9,param_2,
                  *(float *)(lVar6 + 0x790) - *(float *)((longlong)param_1 + 0x29c));
  }
  cVar2 = *param_2;
  if (((cVar2 == '\x03') && (param_2[1] == '\0')) || (cVar2 == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x295) = 0;
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(param_1 + 0x5b) = local_res8;
      *(undefined4 *)((longlong)param_1 + 0x2dc) = local_resc;
      cVar2 = *param_2;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x291) != cVar2) ||
     (*(char *)((longlong)param_1 + 0x292) != param_2[1])) {
    *(undefined2 *)((longlong)param_1 + 0x291) = *(undefined2 *)param_2;
    cVar2 = UActorComponent::IsComponentTickEnabled(param_1);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*param_1 + 0x458))(param_1), cVar2 != '\0')) {
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
    cVar2 = *param_2;
    lVar7 = *param_1;
    if (cVar2 == '\0') {
      (**(code **)(lVar7 + 0x440))(param_1);
    }
    else if (cVar2 == '\x01') {
      (**(code **)(lVar7 + 0x428))(param_1,param_2[1]);
    }
    else if (cVar2 == '\x02') {
      (**(code **)(lVar7 + 0x430))(param_1);
    }
    else {
      (**(code **)(lVar7 + 0x438))();
    }
  }
  iVar4 = FUN_14233f450(param_1);
  if (iVar4 != 3) {
    return;
  }
  if (*(char *)(param_1[0x23] + 0x129) == '\x02') {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  }
  *(undefined2 *)((longlong)param_1 + 0x293) = *(undefined2 *)((longlong)param_1 + 0x291);
                    /* WARNING: Could not recover jumptable at 0x0001430a5660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 1430a5670 FUN_1430a5670 body=92 status=ok
// SIG undefined FUN_1430a5670(void)

void FUN_1430a5670(longlong param_1,char *param_2,float param_3)

{
  longlong lVar1;
  
  if ((*param_2 - 1U & 0xfd) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    *(float *)(param_1 + 0x29c) = param_3 + *(float *)(lVar1 + 0x790);
  }
  FUN_1430a5430(param_1,param_2);
  return;
}



// FUNCTION 1430a56d0 FUN_1430a56d0 body=93 status=ok
// SIG undefined FUN_1430a56d0(void)

void FUN_1430a56d0(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  fVar2 = *(float *)(lVar1 + 0x790);
  if (fVar2 - *(float *)(param_1 + 0x29c) < param_2) {
    fVar2 = (fVar2 + fVar2) - (*(float *)(param_1 + 0x29c) + param_2);
  }
  *(float *)(param_1 + 0x29c) = fVar2;
  return;
}



// FUNCTION 1430a5730 FUN_1430a5730 body=85 status=ok
// SIG undefined FUN_1430a5730(void)

undefined1 FUN_1430a5730(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponPreUseComponent.h"
             ,0x1e,L"Pure virtual not implemented (%s)",
             L"UWeaponPreUseComponent::ShouldRestartAfterUse");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponPreUseComponent.h"
             ,0x1e,L"Pure virtual not implemented (%s)",
             L"UWeaponPreUseComponent::ShouldRestartAfterUse");
  return 0;
}



// FUNCTION 1430a5790 FUN_1430a5790 body=107 status=ok
// SIG undefined FUN_1430a5790(void)

void FUN_1430a5790(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(byte *)(param_1 + 0x229) = *(byte *)(param_1 + 0x229) | 8;
  plVar2 = *(longlong **)(param_1 + 0x230);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x230) = plVar2;
  }
  uVar1 = (**(code **)(*plVar2 + 0x858))();
  lVar3 = *(longlong *)(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x22a) = uVar1;
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x230) = lVar3;
  }
  FUN_143083d20(lVar3,*(undefined1 *)(param_1 + 0x1f8),uVar1,0);
  return;
}



// FUNCTION 1430a5800 FUN_1430a5800 body=34 status=ok
// SIG undefined FUN_1430a5800(void)

ulonglong FUN_1430a5800(longlong param_1)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x200);
  if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x31] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001430a5818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x410))();
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1430a5830 OnCreateVertexInstances body=83 status=ok
// SIG undefined OnCreateVertexInstances(void)

void UEditableMeshAdapter::OnCreateVertexInstances(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponReloadComponent.h"
             ,0x26,L"Pure virtual not implemented (%s)",L"UWeaponReloadComponent::StartReloading");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponReloadComponent.h"
             ,0x26,L"Pure virtual not implemented (%s)",L"UWeaponReloadComponent::StartReloading");
  return;
}



// FUNCTION 1430a5890 FUN_1430a5890 body=257 status=ok
// SIG undefined FUN_1430a5890(void)

void FUN_1430a5890(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 0;
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"OnUserInput",1);
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = *puVar2;
  lVar3 = param_1[0x3a];
  local_18 = local_28;
  local_14 = local_24;
  if (lVar3 == 0) {
    lVar3 = param_1[0x23];
    param_1[0x3a] = lVar3;
  }
  local_10 = local_20;
  FUN_143088b40(lVar3,&local_18);
  *(undefined1 *)(param_1 + 0x41) = 1;
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    *(byte *)((longlong)param_1 + 0x209) =
         *(char *)((longlong)param_1 + 0x209) + 1U & 0xf | (char)param_1[0x41] << 4;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x32,local_res10);
  FUN_1430a2c90(param_1);
  return;
}



// FUNCTION 1430a59a0 ForcePositionUpdate body=85 status=ok
// SIG undefined ForcePositionUpdate(void)

undefined1 INetworkPredictionInterface::ForcePositionUpdate(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponPreUseComponent.h"
             ,0x21,L"Pure virtual not implemented (%s)",L"UWeaponPreUseComponent::StartUsing");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponPreUseComponent.h"
             ,0x21,L"Pure virtual not implemented (%s)",L"UWeaponPreUseComponent::StartUsing");
  return 0;
}



// FUNCTION 1430a5a20 FUN_1430a5a20 body=178 status=ok
// SIG undefined FUN_1430a5a20(void)

void FUN_1430a5a20(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined2 local_res8 [16];
  
  if ((*(char *)(param_1 + 0x291) != '\x02') && (*(char *)(param_1 + 0x292) == '\0')) {
    if (*(char *)(param_1 + 0x291) != '\x01') {
      fVar3 = 0.2;
      if (0 < *(int *)(param_1 + 400)) {
        fVar3 = **(float **)(param_1 + 0x188);
      }
      lVar1 = *(longlong *)(param_1 + 0x120);
      fVar3 = fVar3 * *(float *)(param_1 + 0x1e4);
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0();
      }
      fVar2 = *(float *)(lVar1 + 0x790);
      if (fVar2 - *(float *)(param_1 + 0x29c) < fVar3) {
        fVar2 = (fVar2 + fVar2) - (*(float *)(param_1 + 0x29c) + fVar3);
      }
      *(float *)(param_1 + 0x29c) = fVar2;
    }
    local_res8[0] = 1;
    FUN_1430a5430(param_1,local_res8);
  }
  return;
}



// FUNCTION 1430a5ae0 FUN_1430a5ae0 body=34 status=ok
// SIG undefined FUN_1430a5ae0(void)

undefined8 FUN_1430a5ae0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x200);
  if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x31] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001430a5af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x418))();
    return uVar2;
  }
  return 1;
}



// FUNCTION 1430a5b10 FUN_1430a5b10 body=137 status=ok
// SIG undefined FUN_1430a5b10(void)

void FUN_1430a5b10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x1d0);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x1d0) = plVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x1e8);
  if (*plVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar3,plVar1);
    *plVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001430a5b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x9a0))(plVar4,2);
  return;
}



// FUNCTION 1430a5ba0 FUN_1430a5ba0 body=83 status=ok
// SIG undefined FUN_1430a5ba0(void)

void FUN_1430a5ba0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponReloadComponent.h"
             ,0x27,L"Pure virtual not implemented (%s)",L"UWeaponReloadComponent::StopReloading");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponReloadComponent.h"
             ,0x27,L"Pure virtual not implemented (%s)",L"UWeaponReloadComponent::StopReloading");
  return;
}



// FUNCTION 1430a5c00 FUN_1430a5c00 body=68 status=ok
// SIG undefined FUN_1430a5c00(void)

void FUN_1430a5c00(longlong *param_1)

{
  char cVar1;
  undefined1 local_res8 [32];
  
  cVar1 = (**(code **)(*param_1 + 0x3f8))();
  if (cVar1 != '\0') {
    FUN_1430a4fb0(param_1,3);
    FUN_1430a5b10(param_1);
    local_res8[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x34,local_res8);
  }
  return;
}



// FUNCTION 1430a5c50 FilterIncomingDamage body=85 status=ok
// SIG undefined FilterIncomingDamage(void)

undefined1 IDamageableInterface::FilterIncomingDamage(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponPreUseComponent.h"
             ,0x24,L"Pure virtual not implemented (%s)",L"UWeaponPreUseComponent::StopUsing");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponPreUseComponent.h"
             ,0x24,L"Pure virtual not implemented (%s)",L"UWeaponPreUseComponent::StopUsing");
  return 1;
}



// FUNCTION 1430a5cb0 FUN_1430a5cb0 body=74 status=ok
// SIG undefined FUN_1430a5cb0(void)

undefined8 FUN_1430a5cb0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x400))();
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x200) + 0x418))
                (*(longlong **)(param_1 + 0x200),param_2);
    }
  }
  return 1;
}



// FUNCTION 1430a5d00 FUN_1430a5d00 body=112 status=ok
// SIG undefined FUN_1430a5d00(void)

void FUN_1430a5d00(longlong param_1,char param_2)

{
  float fVar1;
  undefined2 local_res10 [12];
  
  if (((param_2 == '\0') && (*(char *)(param_1 + 0x291) != '\0')) &&
     ((*(char *)(param_1 + 0x291) != '\x03' || (*(char *)(param_1 + 0x292) != '\0')))) {
    fVar1 = 0.2;
    if (0 < *(int *)(param_1 + 400)) {
      fVar1 = **(float **)(param_1 + 0x188);
    }
    FUN_1430a56d0(param_1,fVar1 * *(float *)(param_1 + 0x1e4));
  }
  if (*(char *)(param_1 + 0x291) != '\0') {
    local_res10[0] = 3;
    FUN_1430a5430(param_1,local_res10);
  }
  return;
}



// FUNCTION 1430a5d70 FUN_1430a5d70 body=100 status=ok
// SIG undefined FUN_1430a5d70(void)

void FUN_1430a5d70(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(byte *)(param_1 + 0x181) & 4) != 0) && (param_2 == '\0')) {
    plVar2 = *(longlong **)(param_1 + 0x210);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x118);
      *(longlong **)(param_1 + 0x210) = plVar2;
    }
    cVar1 = FUN_14307eb30(plVar2);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001430a5dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x8e0))(plVar2,0,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 1430a5de0 FUN_1430a5de0 body=97 status=ok
// SIG undefined FUN_1430a5de0(void)

void FUN_1430a5de0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 0x181) & 4) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x210);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x118);
      *(longlong **)(param_1 + 0x210) = plVar2;
    }
    cVar1 = FUN_14307eb30(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x8e0))(plVar2,0,*(undefined1 *)(param_1 + 0x180),0);
    }
  }
  return;
}



// FUNCTION 1430a5e50 FUN_1430a5e50 body=155 status=ok
// SIG undefined FUN_1430a5e50(void)

void FUN_1430a5e50(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_3[0xb];
  fVar1 = (float)param_3[2];
  uVar3 = uVar2 & 0xffffffe7;
  param_3[0xb] = uVar3;
  param_3[3] = fVar1;
  *(undefined8 *)(param_3 + 4) = 0;
  uVar4 = 0;
  if ((*(byte *)(param_1 + 0x90) & 2) != 0) {
    if (0.0 < fVar1) {
      uVar4 = 2;
    }
    uVar3 = uVar4 | uVar2 & 0xffffffe5;
  }
  uVar3 = (uVar3 * 2 ^ uVar3) & 4 ^ uVar3;
  param_3[0xb] = uVar3;
  if ((uVar3 & 2) != 0) {
    FUN_142cada80(param_3,fVar1,param_1 + 0x110,param_3[7],*(undefined4 *)(param_1 + 0x130),
                  param_3 + 9);
    return;
  }
  *param_3 = 0;
  FUN_142ca9b40();
  return;
}



// FUNCTION 1430a5f10 FUN_1430a5f10 body=953 status=ok
// SIG undefined FUN_1430a5f10(void)

void FUN_1430a5f10(longlong *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  FUN_142357eb0();
  lVar4 = param_1[0x46];
  if (lVar4 == 0) {
    lVar4 = param_1[0x23];
    param_1[0x46] = lVar4;
    if (lVar4 == 0) {
      return;
    }
  }
  if (((char)param_1[0x37] != '\0') || (cVar1 = FUN_14307eb30(lVar4), cVar1 != '\0')) {
    fVar9 = (float)(**(code **)(*param_1 + 0x428))(param_1);
    if (fVar9 <= 0.0) {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      if (*(float *)(param_1 + 0x44) < *(float *)(lVar3 + 0x790) ||
          *(float *)(param_1 + 0x44) == *(float *)(lVar3 + 0x790)) {
        fVar11 = (float)(**(code **)(*param_1 + 0x430))(param_1);
        fVar9 = fVar9 - fVar11;
      }
    }
    else {
      FUN_1430a4920(param_1);
    }
    fVar11 = *(float *)(param_1 + 0x43);
    if (((0.0 < fVar9) && (fVar11 < 1.0)) || ((fVar9 < 0.0 && (0.0 < fVar11)))) {
      fVar11 = fVar9 * param_2 + fVar11;
      if (0.0 <= fVar11) {
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
      }
      else {
        fVar11 = 0.0;
      }
      *(float *)(param_1 + 0x43) = fVar11;
    }
    if (((*(byte *)((longlong)param_1 + 0x1b9) & 8) != 0) &&
       (iVar2 = FUN_14233f450(param_1), iVar2 == 3)) {
      fVar9 = *(float *)((longlong)param_1 + 0x224);
      if (0.0 < fVar9) {
        fVar9 = fVar9 - param_2;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        *(float *)((longlong)param_1 + 0x224) = fVar9;
      }
      if ((1.0 < *(float *)(param_1 + 0x43) || *(float *)(param_1 + 0x43) == 1.0) || (0.0 < fVar9))
      {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      if ((*(byte *)((longlong)param_1 + 0x229) & 1) != bVar5) {
        FUN_1430a4ba0(param_1);
      }
    }
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x43) - *(float *)((longlong)param_1 + 0x21c))) {
    iVar2 = FUN_14233f450(param_1);
    if (((iVar2 == 3) && ((char)param_1[0x37] == '\0')) &&
       (lVar3 = param_1[0x45], cVar1 = (char)(int)(*(float *)(param_1 + 0x43) * 100.0),
       *(char *)(param_1 + 0x45) = cVar1, cVar1 != (char)lVar3)) {
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    if (param_1[0x3d] != 0) {
      uVar10 = (undefined4)param_1[0x43];
      if (param_1[0x3e] != 0) {
        uVar10 = UCurveFloat::GetFloatValue(param_1[0x3e],uVar10);
      }
      FUN_14308bb60(lVar4,param_1[0x3d],uVar10);
    }
    pfVar8 = (float *)param_1[0x3b];
    pfVar6 = pfVar8 + (longlong)(int)param_1[0x3c] * 4;
    if (pfVar8 != pfVar6) {
      pfVar7 = pfVar8 + 2;
      do {
        cVar1 = *(char *)(pfVar7 + -1);
        fVar9 = *(float *)((longlong)param_1 + 0x21c);
        fVar11 = *(float *)(param_1 + 0x43);
        if (cVar1 == '\0') {
          if ((fVar11 < *pfVar8) && (*pfVar8 <= fVar9)) goto LAB_1430a61c5;
        }
        else if (cVar1 == '\x01') {
          if ((fVar11 <= *pfVar8) && (*pfVar8 < fVar9)) goto LAB_1430a61c5;
        }
        else if (cVar1 == '\x02') {
          if ((*pfVar8 < fVar11) && (fVar9 <= *pfVar8)) goto LAB_1430a61c5;
        }
        else if ((cVar1 == '\x03') && ((*pfVar8 <= fVar11 && (fVar9 < *pfVar8)))) {
LAB_1430a61c5:
          lVar4 = UObject::FindFunction(param_1,*(undefined8 *)pfVar7);
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0x8c) == '\0')) {
            (**(code **)(*param_1 + 0x208))(param_1,lVar4,0);
          }
        }
        pfVar8 = pfVar8 + 4;
        pfVar7 = pfVar7 + 4;
      } while (pfVar8 != pfVar6);
    }
    if ((char)param_1[0x3f] != '\0') {
      (**(code **)(*param_1 + 0x438))(param_1);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x41,0);
    *(float *)((longlong)param_1 + 0x21c) = *(float *)(param_1 + 0x43);
    if ((*(float *)(param_1 + 0x43) == 0.0) &&
       (cVar1 = (**(code **)(*param_1 + 0x440))(param_1), cVar1 == '\0')) {
      (**(code **)(*param_1 + 0x358))(param_1,0);
      if (((*(byte *)((longlong)param_1 + 0x229) & 4) != 0) &&
         (((char)param_1[0x37] == '\0' && (iVar2 = FUN_142340f30(param_1), iVar2 != 3)))) {
        lVar4 = param_1[0x46];
        if (lVar4 == 0) {
          lVar4 = param_1[0x23];
          param_1[0x46] = lVar4;
        }
        FUN_143093ea0(lVar4,param_1[3]);
      }
      *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) & 0xfb;
    }
  }
  return;
}



// FUNCTION 1430a62d0 FUN_1430a62d0 body=528 status=ok
// SIG undefined FUN_1430a62d0(void)

void FUN_1430a62d0(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_142357eb0();
  if (*(char *)((longlong)param_1 + 0x2c4) != '\0') {
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    fVar5 = *(float *)((longlong)param_1 + 0x2cc) + *(float *)(param_1 + 0x59);
    if (fVar5 < *(float *)(lVar4 + 0x790) || fVar5 == *(float *)(lVar4 + 0x790)) {
      *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
      FWeakObjectPtr::operator=(&local_res8,0);
      *(uint *)(param_1 + 0x5b) = local_res8;
      *(undefined4 *)((longlong)param_1 + 0x2dc) = local_resc;
      cVar3 = (**(code **)(*param_1 + 0x458))(param_1);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x358))(param_1,0);
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x291) == '\0') {
    return;
  }
  if (param_1[0x23] == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1[0x23] + 0x150);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  cVar3 = (**(code **)(*plVar2 + 0x778))();
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x291) == '\x01') {
    fVar5 = 0.2;
    if (0 < (int)param_1[0x32]) {
      fVar5 = *(float *)param_1[0x31];
    }
    if (*(float *)(lVar4 + 0x790) - *(float *)((longlong)param_1 + 0x29c) <
        fVar5 * *(float *)((longlong)param_1 + 0x1e4)) {
      return;
    }
    local_res8 = CONCAT31(local_res8._1_3_,2);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x291) == '\x03') {
      fVar5 = 0.2;
      if (0 < (int)param_1[0x32]) {
        fVar5 = *(float *)param_1[0x31];
      }
      if (*(float *)(lVar4 + 0x790) - *(float *)((longlong)param_1 + 0x29c) <
          fVar5 * *(float *)((longlong)param_1 + 0x1e4)) {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x292) != '\0') {
        local_res8._0_2_ = CONCAT11(*(char *)((longlong)param_1 + 0x292) + -1,2);
        FUN_1430a5430(param_1,&local_res8);
        return;
      }
      local_res8 = local_res8 & 0xffff0000;
      FUN_1430a5430(param_1,&local_res8);
      return;
    }
    bVar1 = *(byte *)((longlong)param_1 + 0x292);
    if (bVar1 < *(byte *)((longlong)param_1 + 0x295)) {
      uVar6 = FUN_14309edb0(param_1,bVar1 + 1);
      FUN_1430a56d0(param_1,uVar6);
      cVar3 = *(char *)((longlong)param_1 + 0x292) + '\x01';
      local_res8 = CONCAT31(local_res8._1_3_,1);
      goto LAB_1430a64c9;
    }
    if (bVar1 <= *(byte *)((longlong)param_1 + 0x295)) {
      return;
    }
    uVar6 = FUN_14309edb0(param_1);
    FUN_1430a56d0(param_1,uVar6);
    local_res8 = CONCAT31(local_res8._1_3_,3);
  }
  cVar3 = *(char *)((longlong)param_1 + 0x292);
LAB_1430a64c9:
  local_res8._0_2_ = CONCAT11(cVar3,(undefined1)local_res8);
  FUN_1430a5430(param_1,&local_res8);
  return;
}



// FUNCTION 1430a64e0 FUN_1430a64e0 body=166 status=ok
// SIG undefined FUN_1430a64e0(void)

void FUN_1430a64e0(longlong param_1,longlong *param_2,float param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    if (0.0 < param_3) {
      lVar1 = *(longlong *)(param_1 + 0x120);
      *(float *)(param_1 + 0x2c8) = param_3;
      *(undefined1 *)(param_1 + 0x2c4) = 1;
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0();
      }
      *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(lVar1 + 0x790);
      uVar2 = FUN_14309b270(param_2);
      *(undefined4 *)(param_1 + 0x2d0) = uVar2;
      uVar2 = (**(code **)(*param_2 + 0x400))(param_2);
      *(undefined4 *)(param_1 + 0x2d4) = uVar2;
      FWeakObjectPtr::operator=(param_1 + 0x2d8,param_2);
    }
    *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)((longlong)param_2 + 0x29c);
    FUN_1430a5430(param_1,(longlong)param_2 + 0x291);
  }
  return;
}



// FUNCTION 1430a6590 FUN_1430a6590 body=83 status=ok
// SIG undefined FUN_1430a6590(void)

void FUN_1430a6590(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_1430a8880();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1430a65f0 FUN_1430a65f0 body=72 status=ok
// SIG undefined FUN_1430a65f0(void)

void FUN_1430a65f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_1430a8880();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x80))(plVar2,param_2,1);
    }
  }
  return;
}



// FUNCTION 1430a6640 FUN_1430a6640 body=163 status=ok
// SIG undefined FUN_1430a6640(void)

void FUN_1430a6640(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x248);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x248) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OnAmmoChanged",1);
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = *puVar1;
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  FUN_143093f70(lVar2,&local_18);
  return;
}



// FUNCTION 1430a66f0 FUN_1430a66f0 body=168 status=ok
// SIG undefined FUN_1430a66f0(void)

void FUN_1430a66f0(long param_1,longlong param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  if ((lVar2 != 0) && (((uint)param_3[0xb] & 1) != 0)) {
    fVar1 = *param_3;
    *(float *)(lVar2 + 0x68) = fVar1;
    fVar3 = param_3[1];
    if (0.0 < fVar3) {
      if (ABS(fVar3) <= 1e-08) {
        AK::MemoryMgr::StartProfileThreadUsage(param_1);
        *(undefined4 *)(lVar2 + 0x68) = 0;
        return;
      }
      fVar3 = (float)(int)(fVar1 / fVar3) * fVar3;
      if (ABS(fVar1) < ABS(fVar3)) {
        fVar3 = fVar1;
      }
      *(float *)(lVar2 + 0x68) = fVar1 - fVar3;
    }
  }
  return;
}



// FUNCTION 1430a67a0 FUN_1430a67a0 body=1260 status=ok
// SIG undefined FUN_1430a67a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430a67a0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar12 = (longlong *)param_1[0x49];
  if ((char)param_1[0x44] == '\x02') {
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)param_1[0x23];
      param_1[0x49] = (longlong)plVar12;
      if (plVar12 == (longlong *)0x0) {
        return;
      }
    }
    if ((int)param_1[0x48] == 0) {
      return;
    }
    local_48 = (longlong *)0x0;
    local_40 = 0;
    (**(code **)(*plVar12 + 0x908))(plVar12,(char)param_1[0x32],local_108);
    plVar12 = local_108;
    if (local_48 != (longlong *)0x0) {
      plVar12 = local_48;
    }
    plVar16 = plVar12 + (int)local_40;
    for (; plVar12 != plVar16; plVar12 = plVar12 + 1) {
      plVar7 = (longlong *)*plVar12;
      if (plVar7 != (longlong *)0x0) {
        lVar6 = FUN_142a0cc80();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (uVar11 = 0, uVar15 = 0, 0 < (int)param_1[0x48])) {
          do {
            (**(code **)(*plVar7 + 0x9d8))(plVar7,*(undefined4 *)(uVar11 + param_1[0x47]));
            uVar14 = (int)uVar15 + 1;
            uVar11 = uVar11 + 4;
            uVar15 = (ulonglong)uVar14;
          } while ((int)uVar14 < (int)param_1[0x48]);
        }
      }
    }
    if (local_48 == (longlong *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)param_1[0x23];
    param_1[0x49] = (longlong)plVar12;
    if (plVar12 == (longlong *)0x0) {
      return;
    }
  }
  plVar16 = (longlong *)0x0;
  iVar4 = 0;
  if ((char)param_1[0x46] != '\0') {
    iVar4 = *(int *)((longlong)param_1 + 0x224);
    goto LAB_1430a6a10;
  }
  plVar7 = (longlong *)param_1[0x45];
  if (plVar7 == (longlong *)0x0) {
    uVar9 = FUN_1430bc880();
    plVar7 = (longlong *)(**(code **)(*plVar12 + 0x800))(plVar12,uVar9,param_1);
    if (plVar7 == (longlong *)0x0) {
LAB_1430a69b2:
      plVar7 = plVar16;
    }
    else {
      lVar6 = FUN_1430bc880();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1430a69b2;
    }
    param_1[0x45] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar7 + 0x4d8))(plVar7,1);
    plVar7 = (longlong *)param_1[0x45];
    if (plVar7 == (longlong *)0x0) {
      return;
    }
  }
  if ((char)param_1[0x44] == '\0') {
    iVar4 = (**(code **)(*plVar7 + 0x420))(plVar7);
  }
  else if ((char)param_1[0x44] == '\x01') {
    iVar4 = (**(code **)(*plVar7 + 0x450))(plVar7);
  }
LAB_1430a6a10:
  if (param_2 == '\0') {
    if (*(char *)((longlong)param_1 + 0x192) == '\x02') {
      if (iVar4 < *(int *)((longlong)param_1 + 0x234)) {
        return;
      }
    }
    else if ((*(char *)((longlong)param_1 + 0x192) == '\x03') &&
            (*(int *)((longlong)param_1 + 0x234) <= iVar4)) {
      return;
    }
  }
  if ((iVar4 != *(int *)((longlong)param_1 + 0x234)) &&
     ((*(int *)((longlong)param_1 + 0x234) < (int)param_1[0x48] || (iVar4 < (int)param_1[0x48])))) {
    if (((*(byte *)(param_1 + 0x17) & 8) != 0) && (iVar5 = FUN_14233f450(param_1), iVar5 == 3)) {
      *(int *)((longlong)param_1 + 0x224) = iVar4;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    local_48 = (longlong *)0x0;
    local_40 = 0;
    (**(code **)(*plVar12 + 0x908))(plVar12,(char)param_1[0x32],local_108);
    lVar6 = (longlong)((int)param_1[0x48] - iVar4);
    plVar12 = local_108;
    if (local_48 != (longlong *)0x0) {
      plVar12 = local_48;
    }
    plVar7 = plVar12 + (int)local_40;
    local_128 = lVar6;
    local_120 = plVar7;
    if (plVar12 != plVar7) {
      do {
        plVar1 = (longlong *)*plVar12;
        if (plVar1 != (longlong *)0x0) {
          lVar8 = FUN_142a0cc80();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          plVar7 = local_120;
          if ((bVar2) && (plVar10 = plVar16, plVar13 = plVar16, 0 < (int)param_1[0x48])) {
            do {
              cVar3 = FUN_1423b47e0(plVar1,*(undefined4 *)(param_1[0x47] + (longlong)plVar13 * 4));
              if ((longlong)plVar13 < lVar6) {
                if ((cVar3 == '\0') &&
                   ((**(code **)(*plVar1 + 0x9d0))
                              (plVar1,*(undefined4 *)(param_1[0x47] + (longlong)plVar13 * 4),0),
                   lVar6 = local_128, param_1[0x34] != 0)) {
                  uVar9 = FUN_1423acf90(plVar1,local_118,
                                        *(undefined4 *)(param_1[0x47] + (longlong)plVar13 * 4));
                  plVar7 = param_1 + 0x34;
LAB_1430a6c06:
                  FUN_1430a2860(param_1,plVar1,uVar9,plVar7);
                  lVar6 = local_128;
                }
              }
              else if ((cVar3 != '\0') &&
                      ((**(code **)(*plVar1 + 0x9d8))
                                 (plVar1,*(undefined4 *)(param_1[0x47] + (longlong)plVar13 * 4)),
                      lVar6 = local_128, param_1[0x3c] != 0)) {
                uVar9 = FUN_1423acf90(plVar1,local_110,
                                      *(undefined4 *)(param_1[0x47] + (longlong)plVar13 * 4));
                plVar7 = param_1 + 0x3c;
                goto LAB_1430a6c06;
              }
              uVar14 = (int)plVar10 + 1;
              plVar10 = (longlong *)(ulonglong)uVar14;
              plVar13 = (longlong *)((longlong)plVar13 + 1);
              plVar7 = local_120;
            } while ((int)uVar14 < (int)param_1[0x48]);
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar7);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  *(int *)((longlong)param_1 + 0x234) = iVar4;
  return;
}



// FUNCTION 1430a6d20 FUN_1430a6d20 body=688 status=ok
// SIG undefined FUN_1430a6d20(void)

void FUN_1430a6d20(longlong *param_1,longlong *param_2,uint *param_3)

{
  byte bVar1;
  float *pfVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pfVar2 = *(float **)(param_3 + 8);
  if (pfVar2 == (float *)0x0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 6);
  plVar9 = (longlong *)0x0;
  if ((*(uint *)(param_2 + 1) >> 4 & 1) == 0) {
    plVar9 = (longlong *)param_2[4];
  }
  uVar7 = *param_3;
  plVar6 = param_2;
  if ((uVar7 & 0x40) != 0) {
    cVar4 = (**(code **)(*param_1 + 0x2a8))();
    if ((cVar4 != '\0') && (0.0 < *(float *)(param_1 + 0x26))) {
      fVar12 = *pfVar2 / *(float *)(param_1 + 0x26);
      param_3[4] = (uint)(float)-((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1);
    }
    *param_3 = *param_3 & 0xffffffbf;
    uVar7 = *param_3;
  }
  if ((uVar7 & 2) == 0) {
    if ((uVar7 & 4) == 0) {
      lVar3 = *param_1;
      fVar12 = pfVar2[2];
      if (*(char *)((longlong)param_1 + 0x91) == '\x01') {
        fVar11 = (float)(**(code **)(lVar3 + 0x2b0))(param_1,param_3[4]);
        pfVar2[2] = fVar11;
      }
      else {
        plVar6 = plVar9;
        uVar10 = FUN_142c98860(param_1 + 0x13,plVar9);
        fVar11 = (float)(**(code **)(lVar3 + 0x2b0))(param_1,uVar10);
        pfVar2[2] = fVar11;
        if ((float)param_3[4] != 0.0) {
          fVar13 = (float)param_3[4] + pfVar2[5];
          pfVar2[5] = fVar13;
          fVar11 = *(float *)(param_1 + 0x1c);
          if ((0.0 < fVar11) && (fVar11 < fVar13)) {
            pfVar2[5] = fVar11;
          }
          pfVar2[0xb] = (float)((uint)pfVar2[0xb] & 0xffffffef);
          pfVar2[0xb] = (float)((uint)pfVar2[0xb] | 8);
          *param_3 = *param_3 | 0x10;
          param_3[4] = 0;
        }
      }
      if ((fVar12 != pfVar2[2]) && ((*param_3 & 0x20) == 0)) {
        plVar6 = (longlong *)UNiagaraSystem::GetEffectType(param_2);
        FUN_1430a2b40(param_1,plVar6);
      }
    }
    else {
      *param_3 = uVar7 & 0xfffffffb;
      pfVar2[2] = 0.0;
      param_3[4] = 0;
    }
  }
  else {
    *param_3 = uVar7 & 0xfffffffb;
    fVar12 = (float)(**(code **)(*param_1 + 0x2b0))(param_1,param_3[4]);
    pfVar2[2] = fVar12;
    if (*(char *)((longlong)param_1 + 0x91) != '\x01') {
      param_3[4] = 0;
    }
  }
  if ((*(byte *)(param_1 + 6) & 8) != 0) {
    uVar7 = *(uint *)(param_1 + 0xf);
    uVar8 = (ulonglong)plVar6 & 0xffffffffffffff00;
    if (uVar7 == 0) {
      bVar5 = (**(code **)(*plVar9 + 0x858))(plVar9,uVar8);
      uVar8 = (ulonglong)bVar5;
    }
    else if ((char)uVar7 != '\0') {
      do {
        bVar5 = (byte)uVar7;
        if ((uVar7 & 1) != 0) break;
        uVar7 = (uint)(bVar5 >> 1);
        uVar8 = CONCAT71((int7)(uVar8 >> 8),(char)uVar8 + '\x01');
      } while (1 < bVar5);
    }
    fVar11 = (float)FUN_14309cbc0(plVar9,uVar8);
    fVar12 = *(float *)(param_1 + 0xe);
    if (((*(float *)(param_1 + 0xe) <= fVar11) &&
        (fVar13 = *(float *)((longlong)param_1 + 0x74), fVar12 = fVar11, 0.0 < fVar13)) &&
       (fVar12 = fVar13, fVar11 <= fVar13)) {
      fVar12 = fVar11;
    }
    pfVar2[7] = fVar12;
  }
  uVar7 = *param_3;
  if ((uVar7 & 2) == 0) {
    if ((uVar7 & 0x20) == 0) goto LAB_1430a6f7e;
    FUN_1430a5e50(param_1,param_3,pfVar2);
    *param_3 = *param_3 & 0xffffffdf;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x12);
    pfVar2[4] = 0.0;
    pfVar2[5] = 0.0;
    fVar12 = pfVar2[0xb];
    if ((bVar5 & 2) != 0) {
      fVar12 = (float)((uint)pfVar2[0xb] & 0xfffffffd);
    }
    *pfVar2 = 0.0;
    pfVar2[0xb] = (float)((uint)fVar12 & 0xffffffe3);
    FUN_142ca9b40(pfVar2 + 9);
    if (pfVar2[2] != 0.0) {
      FUN_1430a5e50(param_1,param_3,pfVar2);
    }
    *param_3 = *param_3 & 0xfffffffd;
  }
  uVar7 = *param_3;
LAB_1430a6f7e:
  if ((char)param_1[0x22] == '\0') {
    FUN_1430a66f0(param_1,param_3,pfVar2);
    uVar7 = *param_3;
  }
  else {
    uVar7 = uVar7 | 0x10;
    *param_3 = uVar7;
  }
  param_3[6] = (uint)pfVar2[2];
  *param_3 = ((uint)bVar1 << 3 ^ uVar7) & 8 ^ uVar7;
  return;
}



// FUNCTION 1430a6fd0 FUN_1430a6fd0 body=863 status=ok
// SIG undefined FUN_1430a6fd0(void)

void FUN_1430a6fd0(longlong *param_1,longlong *param_2,uint *param_3)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  
  lVar3 = *(longlong *)(param_3 + 2);
  if (lVar3 == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 6);
  plVar9 = (longlong *)0x0;
  if ((*(uint *)(param_2 + 1) >> 4 & 1) == 0) {
    plVar9 = (longlong *)param_2[4];
  }
  uVar7 = *param_3;
  if ((uVar7 & 0x40) != 0) {
    if ((((*(byte *)(param_1 + 6) & 8) != 0) && (0.0 < *(float *)((longlong)param_1 + 0x74))) &&
       ((char)param_1[0x37] == '\x02')) {
      fVar13 = ABS((float)*(undefined8 *)(lVar3 + 0x314));
      fVar10 = ABS((float)((ulonglong)*(undefined8 *)(lVar3 + 0x314) >> 0x20));
      if (fVar13 <= fVar10) {
        fVar13 = fVar10;
      }
      if (fVar13 <= ABS(*(float *)(lVar3 + 0x31c))) {
        fVar13 = ABS(*(float *)(lVar3 + 0x31c));
      }
      fVar10 = ABS(*(float *)((longlong)param_1 + 0x18c));
      if (ABS(*(float *)((longlong)param_1 + 0x18c)) <= ABS(*(float *)(param_1 + 0x31))) {
        fVar10 = ABS(*(float *)(param_1 + 0x31));
      }
      if (fVar10 <= ABS(*(float *)(param_1 + 0x32))) {
        fVar10 = ABS(*(float *)(param_1 + 0x32));
      }
      if (0.0 < fVar10) {
        param_3[4] = (uint)(float)-((int)ROUND(-0.5 - (fVar13 / fVar10 + fVar13 / fVar10)) >> 1);
      }
    }
    uVar7 = uVar7 & 0xffffffbf;
    *param_3 = uVar7;
  }
  if ((uVar7 & 2) == 0) {
    plVar6 = param_2;
    if ((uVar7 & 4) == 0) {
      lVar4 = *param_1;
      fVar13 = *(float *)(lVar3 + 0x140);
      if (*(char *)((longlong)param_1 + 0x91) == '\x01') {
        uVar11 = (**(code **)(lVar4 + 0x2b0))(param_1,param_3[4]);
        *(undefined4 *)(lVar3 + 0x140) = uVar11;
      }
      else {
        plVar6 = plVar9;
        uVar12 = FUN_142c98860(param_1 + 0x13,plVar9);
        uVar11 = (**(code **)(lVar4 + 0x2b0))(param_1,uVar12);
        *(undefined4 *)(lVar3 + 0x140) = uVar11;
        if ((float)param_3[4] != 0.0) {
          FUN_142c8e430(lVar3);
          param_3[4] = 0;
        }
      }
      if ((fVar13 != *(float *)(lVar3 + 0x140)) && ((*param_3 & 0x20) == 0)) {
        plVar6 = (longlong *)UNiagaraSystem::GetEffectType(param_2);
        FUN_1430a2b40(param_1,plVar6);
      }
    }
    else {
      *param_3 = uVar7 & 0xfffffffb;
      *(undefined4 *)(lVar3 + 0x140) = 0;
      if (((*(byte *)(param_1 + 0x12) & 1) != 0) && ((*(byte *)(param_1 + 0x12) & 2) == 0)) {
        if (((*(char *)(lVar3 + 0x1c8) == '\0') &&
            ((*(char *)(lVar3 + 0x248) == '\0' && (*(char *)(lVar3 + 0x2c8) == '\0')))) ||
           (uVar7 = 0, *(char *)(lVar3 + 0x144) == '\0')) {
          uVar7 = 2;
        }
        *param_3 = *param_3 & 0xfffffffd;
        *param_3 = *param_3 | uVar7;
        *(undefined4 *)(lVar3 + 0x168) = 0x3f800000;
        if ((*param_3 & 2) == 0) {
          *(undefined1 *)(lVar3 + 0x144) = 0;
          *(undefined1 *)(lVar3 + 0x147) = 1;
          if (0.0 < (float)param_3[4]) {
            *(uint *)(lVar3 + 0x168) = param_3[4];
          }
        }
      }
      param_3[4] = 0;
    }
  }
  else {
    *param_3 = uVar7 & 0xfffffffb;
    uVar11 = (**(code **)(*param_1 + 0x2b0))(param_1,param_3[4]);
    *(undefined4 *)(lVar3 + 0x140) = uVar11;
    plVar6 = param_2;
    if (*(char *)((longlong)param_1 + 0x91) != '\x01') {
      param_3[4] = 0;
    }
  }
  *(byte *)(lVar3 + 0x146) = (byte)*param_3 & 1;
  if ((*(byte *)(param_1 + 6) & 8) != 0) {
    uVar7 = *(uint *)(param_1 + 0xf);
    uVar8 = (ulonglong)plVar6 & 0xffffffffffffff00;
    if (uVar7 == 0) {
      bVar5 = (**(code **)(*plVar9 + 0x858))(plVar9,uVar8);
      uVar8 = (ulonglong)bVar5;
    }
    else if ((char)uVar7 != '\0') {
      do {
        bVar5 = (byte)uVar7;
        if ((uVar7 & 1) != 0) break;
        uVar7 = (uint)(bVar5 >> 1);
        uVar8 = CONCAT71((int7)(uVar8 >> 8),(char)uVar8 + '\x01');
      } while (1 < bVar5);
    }
    fVar10 = (float)FUN_14309cbc0(plVar9,uVar8);
    fVar13 = *(float *)(param_1 + 0xe);
    if (((*(float *)(param_1 + 0xe) <= fVar10) &&
        (fVar1 = *(float *)((longlong)param_1 + 0x74), fVar13 = fVar10, 0.0 < fVar1)) &&
       (fVar13 = fVar1, fVar10 <= fVar1)) {
      fVar13 = fVar10;
    }
    *(float *)(lVar3 + 0x164) = fVar13;
  }
  uVar7 = *param_3;
  if ((uVar7 & 2) == 0) {
    if ((uVar7 & 0x20) == 0) goto LAB_1430a72ff;
    FUN_142cadb80(lVar3);
    *param_3 = *param_3 & 0xffffffdf;
  }
  else {
    FUN_142ca9b50(lVar3);
    if (*(float *)(lVar3 + 0x140) != 0.0) {
      FUN_142cadb80(lVar3);
    }
    *param_3 = *param_3 & 0xfffffffd;
  }
  uVar7 = *param_3;
LAB_1430a72ff:
  param_3[6] = *(uint *)(lVar3 + 0x140);
  *param_3 = ((uint)bVar2 << 3 ^ uVar7) & 8 ^ uVar7;
  return;
}



// FUNCTION 1430a7330 FUN_1430a7330 body=531 status=ok
// SIG undefined FUN_1430a7330(void)

void FUN_1430a7330(longlong param_1,float param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  fVar4 = (float)param_4[2];
  param_4[3] = fVar4;
  uVar6 = 0;
  if ((param_4[0xb] & 8) != 0) {
    if ((param_4[0xb] & 0x10) == 0) {
      fVar4 = (float)param_4[5];
      if (0.0 < *(float *)(param_1 + 0xdc)) {
        fVar4 = (float)FMath::FInterpConstantTo(param_4[4],fVar4,param_2);
      }
      param_4[4] = fVar4;
      if (ABS(fVar4 - (float)param_4[5]) <= 1e-08) {
        uVar7 = *(undefined4 *)(param_1 + 0xe4);
        param_4[0xb] = param_4[0xb] | 0x10;
        param_4[6] = uVar7;
      }
    }
    else {
      fVar4 = (float)param_4[6];
      fVar3 = fVar4;
      fVar5 = param_2;
      if (0.0 < fVar4) {
        fVar3 = fVar4 - param_2;
        param_4[6] = fVar3;
        fVar5 = fVar4;
        if (0.0 < fVar3) goto LAB_1430a7427;
      }
      if (fVar3 <= 0.0) {
        fVar4 = (float)FMath::FInterpConstantTo(param_4[4],0,fVar5,*(undefined4 *)(param_1 + 0xe8));
        param_4[4] = fVar4;
        if (ABS(fVar4) <= 1e-08) {
          param_4[0xb] = param_4[0xb] & 0xffffffe7;
          param_4[4] = 0;
        }
      }
    }
LAB_1430a7427:
    fVar4 = (float)param_4[4] + (float)param_4[3];
    param_4[3] = fVar4;
  }
  if ((*(byte *)(param_1 + 0x90) & 2) != 0) {
    param_4[0xb] = param_4[0xb] & 0xfffffffd;
    uVar1 = 0;
    if (0.0 < fVar4) {
      uVar1 = 2;
    }
    param_4[0xb] = param_4[0xb] | uVar1;
  }
  uVar1 = param_4[0xb] & 2;
  if (uVar1 == 0) {
    if ((param_4[0xb] & 4) != 0) {
      if (*(char *)(param_1 + 0x138) == '\0') {
        if (1 < (byte)(*(char *)(param_1 + 0x110) - 3U)) {
          *param_4 = 0;
        }
      }
      else {
        *(byte *)(param_4 + 10) = *(byte *)(param_4 + 10) | 8;
      }
    }
  }
  else {
    *(byte *)(param_4 + 10) = *(byte *)(param_4 + 10) & 0xf7;
  }
  if (uVar1 == 0) {
    if ((*(byte *)(param_4 + 10) & 8) == 0) goto LAB_1430a74f8;
    pcVar2 = (char *)(param_1 + 0x138);
    if (*pcVar2 != '\x02') {
      uVar6 = *(undefined4 *)(param_1 + 0x130);
    }
    uVar7 = param_4[8];
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x130);
    uVar7 = param_4[7];
    pcVar2 = (char *)(param_1 + 0x110);
  }
  FUN_142caf3e0(param_2,param_4,fVar4,pcVar2,uVar7,uVar6,param_4 + 9);
LAB_1430a74f8:
  uVar1 = param_4[0xb];
  uVar1 = (uVar1 * 2 ^ uVar1) & 4 ^ uVar1;
  param_4[0xb] = uVar1;
  if ((((uVar1 & 8) == 0) && ((*(byte *)(param_4 + 10) & 2) != 0)) &&
     ((*(byte *)(param_4 + 10) & 8) == 0)) {
    *param_3 = *param_3 & 0xffffffef;
  }
  FUN_1430a66f0(param_1,param_3,param_4);
  return;
}



// FUNCTION 1430a7550 FUN_1430a7550 body=63 status=ok
// SIG undefined FUN_1430a7550(void)

void FUN_1430a7550(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UCurveLinearColor::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x7f8))(param_1,uVar1,(char)param_1[0xd2]);
    if (lVar2 != 0) {
      FUN_1430a67a0(lVar2,1);
    }
  }
  return;
}



// FUNCTION 1430a7590 FUN_1430a7590 body=12 status=ok
// SIG undefined FUN_1430a7590(void)

void FUN_1430a7590(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x208) = 0;
  return;
}



// FUNCTION 1430a75b0 FUN_1430a75b0 body=53 status=ok
// SIG undefined FUN_1430a75b0(void)

void FUN_1430a75b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_145a72d18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430a7610 FUN_1430a7610 body=162 status=ok
// SIG undefined FUN_1430a7610(void)

longlong FUN_1430a7610(void)

{
  if (DAT_146b48438 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"EnvQueryGenerator_FindProjectileTargets",&DAT_146b48438,
                  FUN_140447710,0xa0,0x10000000,0,L"Engine",&LAB_1430a8a00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8920,&LAB_140447700,0);
  }
  return DAT_146b48438;
}



// FUNCTION 1430a76d0 FUN_1430a76d0 body=162 status=ok
// SIG undefined FUN_1430a76d0(void)

longlong FUN_1430a76d0(void)

{
  if (DAT_146b48418 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"BodyWeaponHoldManagerComponent",&DAT_146b48418,
                  FUN_140447710,0x198,0x10000000,0,L"Engine",&LAB_1430a89c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b48418;
}



// FUNCTION 1430a7780 FUN_1430a7780 body=162 status=ok
// SIG undefined FUN_1430a7780(void)

longlong FUN_1430a7780(void)

{
  if (DAT_146b48448 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"EnvQueryItemType_ProjectileProxy",&DAT_146b48448,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_1430a8a10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEnvQueryItemType_VectorBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b48448;
}



// FUNCTION 1430a7840 FUN_1430a7840 body=162 status=ok
// SIG undefined FUN_1430a7840(void)

longlong FUN_1430a7840(void)

{
  if (DAT_146b48468 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"FiringPattern",&DAT_146b48468,FUN_140447710,0x50,0x10000000
                  ,0,L"Engine",&LAB_1430a8a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b48468;
}



// FUNCTION 1430a78f0 FUN_1430a78f0 body=162 status=ok
// SIG undefined FUN_1430a78f0(void)

longlong FUN_1430a78f0(void)

{
  if (DAT_146b48408 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"BodyWeaponHoldData",&DAT_146b48408,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",FUN_1430a8980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b48408;
}



// FUNCTION 1430a79b0 FUN_1430a79b0 body=162 status=ok
// SIG undefined FUN_1430a79b0(void)

longlong FUN_1430a79b0(void)

{
  if (DAT_146b48510 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"GbxTrajectometerComponent",&DAT_146b48510,FUN_1430a95b0,
                  0x340,0x10000000,0,L"Engine",&LAB_1430a8b10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b48510;
}



// FUNCTION 1430a7a60 FUN_1430a7a60 body=151 status=ok
// SIG undefined FUN_1430a7a60(void)

longlong FUN_1430a7a60(void)

{
  if (DAT_146b48478 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"FiringPatternData",&DAT_146b48478,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_1430a8a50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b48478;
}



// FUNCTION 1430a7b00 FUN_1430a7b00 body=162 status=ok
// SIG undefined FUN_1430a7b00(void)

longlong FUN_1430a7b00(void)

{
  if (DAT_146b48428 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"EnvQueryContext_ProjectileProxy",&DAT_146b48428,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",&LAB_1430a89e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8910,&LAB_140447700,0);
  }
  return DAT_146b48428;
}



// FUNCTION 1430a7bc0 FUN_1430a7bc0 body=47 status=ok
// SIG undefined FUN_1430a7bc0(void)

longlong FUN_1430a7bc0(void)

{
  if (DAT_146b484d8 == 0) {
    FUN_141786a30(&DAT_146b484d8,&PTR_FUN_14678e210);
  }
  return DAT_146b484d8;
}



// FUNCTION 1430a7bf0 FUN_1430a7bf0 body=47 status=ok
// SIG undefined FUN_1430a7bf0(void)

longlong FUN_1430a7bf0(void)

{
  if (DAT_146b48508 == 0) {
    FUN_141786440(&DAT_146b48508,&PTR_FUN_145a6f500);
  }
  return DAT_146b48508;
}



// FUNCTION 1430a7c20 FUN_1430a7c20 body=47 status=ok
// SIG undefined FUN_1430a7c20(void)

longlong FUN_1430a7c20(void)

{
  if (DAT_146b484f8 == 0) {
    FUN_141786a30(&DAT_146b484f8,&PTR_FUN_14678e460);
  }
  return DAT_146b484f8;
}



// FUNCTION 1430a7c50 FUN_1430a7c50 body=47 status=ok
// SIG undefined FUN_1430a7c50(void)

longlong FUN_1430a7c50(void)

{
  if (DAT_146b48500 == 0) {
    FUN_141786a30(&DAT_146b48500,&PTR_FUN_14678e4a0);
  }
  return DAT_146b48500;
}



// FUNCTION 1430a7c80 FUN_1430a7c80 body=53 status=ok
// SIG undefined FUN_1430a7c80(void)

void FUN_1430a7c80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a72ad0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1430a7cf0 FUN_1430a7cf0 body=162 status=ok
// SIG undefined FUN_1430a7cf0(void)

longlong FUN_1430a7cf0(void)

{
  if (DAT_146b48488 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"GbxAmmoTypeData",&DAT_146b48488,FUN_140447710,0x70,
                  0x10000000,0,L"Engine",FUN_1430a8a70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b48488;
}



// FUNCTION 1430a7dc0 FUN_1430a7dc0 body=162 status=ok
// SIG undefined FUN_1430a7dc0(void)

longlong FUN_1430a7dc0(void)

{
  if (DAT_146b483c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"AmmoProviderInterface",&DAT_146b483c8,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b483c8;
}



// FUNCTION 1430a7e70 FUN_1430a7e70 body=162 status=ok
// SIG undefined FUN_1430a7e70(void)

longlong FUN_1430a7e70(void)

{
  if (DAT_146b48498 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"GbxProjectileManager",&DAT_146b48498,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",FUN_1430a8ac0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b48498;
}



// FUNCTION 1430a7f20 Z_Construct_UPackage__Script_Engine body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_Engine(void)

longlong Z_Construct_UPackage__Script_Engine(void)

{
  if (DAT_146b48528 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
  }
  return DAT_146b48528;
}



// FUNCTION 1430a7f60 FUN_1430a7f60 body=162 status=ok
// SIG undefined FUN_1430a7f60(void)

longlong FUN_1430a7f60(void)

{
  if (DAT_146b483d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"AnimNotify_AmmoReloaded",&DAT_146b483d8,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_1430a8950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bc9e0,&LAB_140447700,0);
  }
  return DAT_146b483d8;
}



// FUNCTION 1430a8010 FUN_1430a8010 body=47 status=ok
// SIG undefined FUN_1430a8010(void)

longlong FUN_1430a8010(void)

{
  if (DAT_146b48648 == 0) {
    FUN_141786440(&DAT_146b48648,&PTR_GetPrivateStaticClass_145a711d0);
  }
  return DAT_146b48648;
}



// FUNCTION 1430a8040 FUN_1430a8040 body=47 status=ok
// SIG undefined FUN_1430a8040(void)

longlong FUN_1430a8040(void)

{
  if (DAT_146b485c0 == 0) {
    FUN_141786a30(&DAT_146b485c0,&PTR_FUN_14678ffc0);
  }
  return DAT_146b485c0;
}



// FUNCTION 1430a8070 FUN_1430a8070 body=47 status=ok
// SIG undefined FUN_1430a8070(void)

longlong FUN_1430a8070(void)

{
  if (DAT_146b485c8 == 0) {
    FUN_141786a30(&DAT_146b485c8,&PTR_FUN_146790040);
  }
  return DAT_146b485c8;
}



// FUNCTION 1430a80a0 FUN_1430a80a0 body=47 status=ok
// SIG undefined FUN_1430a80a0(void)

longlong FUN_1430a80a0(void)

{
  if (DAT_146b485d0 == 0) {
    FUN_141786a30(&DAT_146b485d0,&PTR_FUN_1467900c0);
  }
  return DAT_146b485d0;
}



// FUNCTION 1430a80d0 FUN_1430a80d0 body=47 status=ok
// SIG undefined FUN_1430a80d0(void)

longlong FUN_1430a80d0(void)

{
  if (DAT_146b485d8 == 0) {
    FUN_141786a30(&DAT_146b485d8,&PTR_FUN_146790140);
  }
  return DAT_146b485d8;
}



// FUNCTION 1430a8100 FUN_1430a8100 body=47 status=ok
// SIG undefined FUN_1430a8100(void)

longlong FUN_1430a8100(void)

{
  if (DAT_146b485e0 == 0) {
    FUN_141786a30(&DAT_146b485e0,&PTR_FUN_1467901c0);
  }
  return DAT_146b485e0;
}



// FUNCTION 1430a8130 FUN_1430a8130 body=47 status=ok
// SIG undefined FUN_1430a8130(void)

longlong FUN_1430a8130(void)

{
  if (DAT_146b485e8 == 0) {
    FUN_141786a30(&DAT_146b485e8,&PTR_FUN_146790240);
  }
  return DAT_146b485e8;
}



// FUNCTION 1430a8160 FUN_1430a8160 body=47 status=ok
// SIG undefined FUN_1430a8160(void)

longlong FUN_1430a8160(void)

{
  if (DAT_146b485f0 == 0) {
    FUN_141786a30(&DAT_146b485f0,&PTR_FUN_1467902c0);
  }
  return DAT_146b485f0;
}



// FUNCTION 1430a8190 FUN_1430a8190 body=47 status=ok
// SIG undefined FUN_1430a8190(void)

longlong FUN_1430a8190(void)

{
  if (DAT_146b485f8 == 0) {
    FUN_141786a30(&DAT_146b485f8,&PTR_FUN_146790340);
  }
  return DAT_146b485f8;
}



// FUNCTION 1430a81c0 FUN_1430a81c0 body=47 status=ok
// SIG undefined FUN_1430a81c0(void)

longlong FUN_1430a81c0(void)

{
  if (DAT_146b48600 == 0) {
    FUN_141786a30(&DAT_146b48600,&PTR_FUN_1467903c0);
  }
  return DAT_146b48600;
}



// FUNCTION 1430a81f0 FUN_1430a81f0 body=47 status=ok
// SIG undefined FUN_1430a81f0(void)

longlong FUN_1430a81f0(void)

{
  if (DAT_146b48608 == 0) {
    FUN_141786a30(&DAT_146b48608,&PTR_FUN_146790440);
  }
  return DAT_146b48608;
}



// FUNCTION 1430a8220 FUN_1430a8220 body=47 status=ok
// SIG undefined FUN_1430a8220(void)

longlong FUN_1430a8220(void)

{
  if (DAT_146b48610 == 0) {
    FUN_141786a30(&DAT_146b48610,&PTR_FUN_1467904c0);
  }
  return DAT_146b48610;
}



// FUNCTION 1430a8250 FUN_1430a8250 body=47 status=ok
// SIG undefined FUN_1430a8250(void)

longlong FUN_1430a8250(void)

{
  if (DAT_146b48618 == 0) {
    FUN_141786a30(&DAT_146b48618,&PTR_FUN_146790540);
  }
  return DAT_146b48618;
}



// FUNCTION 1430a8280 FUN_1430a8280 body=47 status=ok
// SIG undefined FUN_1430a8280(void)

longlong FUN_1430a8280(void)

{
  if (DAT_146b48620 == 0) {
    FUN_141786a30(&DAT_146b48620,&PTR_FUN_146790580);
  }
  return DAT_146b48620;
}



// FUNCTION 1430a82b0 FUN_1430a82b0 body=47 status=ok
// SIG undefined FUN_1430a82b0(void)

longlong FUN_1430a82b0(void)

{
  if (DAT_146b48628 == 0) {
    FUN_141786a30(&DAT_146b48628,&PTR_FUN_1467905c0);
  }
  return DAT_146b48628;
}



// FUNCTION 1430a82e0 FUN_1430a82e0 body=47 status=ok
// SIG undefined FUN_1430a82e0(void)

longlong FUN_1430a82e0(void)

{
  if (DAT_146b48630 == 0) {
    FUN_141786a30(&DAT_146b48630,&PTR_FUN_146790600);
  }
  return DAT_146b48630;
}



// FUNCTION 1430a8310 FUN_1430a8310 body=47 status=ok
// SIG undefined FUN_1430a8310(void)

longlong FUN_1430a8310(void)

{
  if (DAT_146b48638 == 0) {
    FUN_141786a30(&DAT_146b48638,&PTR_FUN_146790680);
  }
  return DAT_146b48638;
}



// FUNCTION 1430a8340 FUN_1430a8340 body=47 status=ok
// SIG undefined FUN_1430a8340(void)

longlong FUN_1430a8340(void)

{
  if (DAT_146b48640 == 0) {
    FUN_141786a30(&DAT_146b48640,&PTR_FUN_146790700);
  }
  return DAT_146b48640;
}



// FUNCTION 1430a8390 FUN_1430a8390 body=162 status=ok
// SIG undefined FUN_1430a8390(void)

longlong FUN_1430a8390(void)

{
  if (DAT_146b483e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"AnimNotify_EquipInterruptible",&DAT_146b483e8,FUN_140447710
                  ,0x40,0x10000000,0,L"Engine",&LAB_1430a8960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bc9e0,&LAB_140447700,0);
  }
  return DAT_146b483e8;
}



// FUNCTION 1430a8440 FUN_1430a8440 body=53 status=ok
// SIG undefined FUN_1430a8440(void)

void FUN_1430a8440(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_145a72ea0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430a8490 FUN_1430a8490 body=53 status=ok
// SIG undefined FUN_1430a8490(void)

void FUN_1430a8490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145a72fb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430a84d0 FUN_1430a84d0 body=53 status=ok
// SIG undefined FUN_1430a84d0(void)

void FUN_1430a84d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &PTR_FUN_145a730d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430a8510 FUN_1430a8510 body=53 status=ok
// SIG undefined FUN_1430a8510(void)

void FUN_1430a8510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &PTR_FUN_145a731e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430a8550 FUN_1430a8550 body=53 status=ok
// SIG undefined FUN_1430a8550(void)

void FUN_1430a8550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145a73300;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430a8590 FUN_1430a8590 body=53 status=ok
// SIG undefined FUN_1430a8590(void)

void FUN_1430a8590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145a73418;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430a85e0 FUN_1430a85e0 body=162 status=ok
// SIG undefined FUN_1430a85e0(void)

longlong FUN_1430a85e0(void)

{
  if (DAT_146b48520 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"GbxTrajectometerProjectile",&DAT_146b48520,FUN_140447710,
                  0x718,0x10000000,0,L"Engine",&LAB_1430a8940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1414744d0,&LAB_140447700,0);
  }
  return DAT_146b48520;
}



// FUNCTION 1430a86a0 FUN_1430a86a0 body=47 status=ok
// SIG undefined FUN_1430a86a0(void)

longlong FUN_1430a86a0(void)

{
  if (DAT_146b484a0 == 0) {
    FUN_141786a30(&DAT_146b484a0,&PTR_FUN_14678da80);
  }
  return DAT_146b484a0;
}



// FUNCTION 1430a86d0 FUN_1430a86d0 body=47 status=ok
// SIG undefined FUN_1430a86d0(void)

longlong FUN_1430a86d0(void)

{
  if (DAT_146b484c8 == 0) {
    FUN_141786440(&DAT_146b484c8,&PTR_thunk_FUN_1430a9310_145a71ae0);
  }
  return DAT_146b484c8;
}



// FUNCTION 1430a8700 FUN_1430a8700 body=47 status=ok
// SIG undefined FUN_1430a8700(void)

longlong FUN_1430a8700(void)

{
  if (DAT_146b484a8 == 0) {
    FUN_141786a30(&DAT_146b484a8,&PTR_FUN_14678db40);
  }
  return DAT_146b484a8;
}



// FUNCTION 1430a8730 FUN_1430a8730 body=47 status=ok
// SIG undefined FUN_1430a8730(void)

longlong FUN_1430a8730(void)

{
  if (DAT_146b484b0 == 0) {
    FUN_141786a30(&DAT_146b484b0,&PTR_FUN_14678dc80);
  }
  return DAT_146b484b0;
}



// FUNCTION 1430a8760 FUN_1430a8760 body=47 status=ok
// SIG undefined FUN_1430a8760(void)

longlong FUN_1430a8760(void)

{
  if (DAT_146b484b8 == 0) {
    FUN_141786a30(&DAT_146b484b8,&PTR_FUN_14678dcc0);
  }
  return DAT_146b484b8;
}



// FUNCTION 1430a8790 FUN_1430a8790 body=47 status=ok
// SIG undefined FUN_1430a8790(void)

longlong FUN_1430a8790(void)

{
  if (DAT_146b484c0 == 0) {
    FUN_141786a30(&DAT_146b484c0,&PTR_FUN_14678dd40);
  }
  return DAT_146b484c0;
}



// FUNCTION 1430a87c0 FUN_1430a87c0 body=162 status=ok
// SIG undefined FUN_1430a87c0(void)

longlong FUN_1430a87c0(void)

{
  if (DAT_146b483f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"AnimNotify_WeaponSkeletalControlEvent",&DAT_146b483f8,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",&LAB_1430a8970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bc9e0,&LAB_140447700,0);
  }
  return DAT_146b483f8;
}



// FUNCTION 1430a8880 FUN_1430a8880 body=162 status=ok
// SIG undefined FUN_1430a8880(void)

longlong FUN_1430a8880(void)

{
  if (DAT_146b48548 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"GbxWeaponUserInterface",&DAT_146b48548,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_1430a8b30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDamageableInterface::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b48548;
}



// FUNCTION 1430a8980 FUN_1430a8980 body=63 status=ok
// SIG undefined FUN_1430a8980(void)

void FUN_1430a8980(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a722b8;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 1430a8a70 FUN_1430a8a70 body=67 status=ok
// SIG undefined FUN_1430a8a70(void)

void FUN_1430a8a70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a72538;
    FText::FText(puVar1 + 6);
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0x3f800000;
  }
  return;
}



// FUNCTION 1430a8ac0 FUN_1430a8ac0 body=51 status=ok
// SIG undefined FUN_1430a8ac0(void)

void FUN_1430a8ac0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a727b8;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 1430a8b60 FUN_1430a8b60 body=171 status=ok
// SIG undefined FUN_1430a8b60(void)

void FUN_1430a8b60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x10);
    do {
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      iVar5 = (int)plVar4[1];
      lVar1 = *plVar4;
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 8);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = *plVar4;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1430a8c10 FUN_1430a8c10 body=79 status=ok
// SIG undefined FUN_1430a8c10(void)

longlong FUN_1430a8c10(longlong param_1,ulonglong param_2)

{
  FUN_1430a8b60(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1430a8c60 FUN_1430a8c60 body=146 status=ok
// SIG undefined FUN_1430a8c60(void)

longlong FUN_1430a8c60(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1430a8d00 FUN_1430a8d00 body=101 status=ok
// SIG undefined FUN_1430a8d00(void)

void FUN_1430a8d00(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,200);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0xbf800000;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc0) = 0x3f800000;
  return;
}



// FUNCTION 1430a8d90 FUN_1430a8d90 body=46 status=ok
// SIG undefined FUN_1430a8d90(void)

void FUN_1430a8d90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140590080(param_2 + 2);
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}



// FUNCTION 1430a8df0 FUN_1430a8df0 body=48 status=ok
// SIG undefined FUN_1430a8df0(void)

void FUN_1430a8df0(undefined8 param_1,undefined8 *param_2)

{
  FTickFunction::FTickFunction(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__145a5da10;
  *(undefined1 *)(param_2 + 1) = 5;
  *(byte *)((longlong)param_2 + 0xc) = *(byte *)((longlong)param_2 + 0xc) & 0xfb | 2;
  return;
}



// FUNCTION 1430a8f60 FUN_1430a8f60 body=106 status=ok
// SIG undefined FUN_1430a8f60(void)

undefined8 FUN_1430a8f60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 8);
    do {
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      FUN_1405913a0(puVar1 + 1,param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 0x20 + (longlong)puVar1);
      puVar1 = puVar1 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430a8fd0 FUN_1430a8fd0 body=456 status=ok
// SIG undefined FUN_1430a8fd0(void)

undefined8 FUN_1430a8fd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined8 *)(param_2 + 0x120);
    do {
      puVar7[-0x23] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x118);
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0x110);
      uVar6 = puVar2[1];
      puVar7[-0x22] = *puVar2;
      puVar7[-0x21] = uVar6;
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0x100);
      uVar6 = puVar2[1];
      puVar7[-0x20] = *puVar2;
      puVar7[-0x1f] = uVar6;
      puVar7[-0x1e] = *(undefined8 *)((longlong)puVar7 + param_3 + -0xf0);
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0xe8);
      uVar6 = puVar2[1];
      puVar7[-0x1d] = *puVar2;
      puVar7[-0x1c] = uVar6;
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0xd8);
      uVar6 = puVar2[1];
      puVar7[-0x1b] = *puVar2;
      puVar7[-0x1a] = uVar6;
      puVar7[-0x19] = *(undefined8 *)((longlong)puVar7 + param_3 + -200);
      *(undefined4 *)(puVar7 + -0x18) = *(undefined4 *)((longlong)puVar7 + param_3 + -0xc0);
      puVar7[-0x17] = *(undefined8 *)((longlong)puVar7 + param_3 + -0xb8);
      puVar7[-0x16] = *(undefined8 *)((longlong)puVar7 + param_3 + -0xb0);
      *(undefined4 *)(puVar7 + -0x15) = *(undefined4 *)((longlong)puVar7 + param_3 + -0xa8);
      *(undefined4 *)((longlong)puVar7 + -0xa4) =
           *(undefined4 *)((longlong)puVar7 + param_3 + -0xa4);
      puVar7[-0x14] = *(undefined8 *)((longlong)puVar7 + param_3 + -0xa0);
      *(undefined4 *)(puVar7 + -0x13) = *(undefined4 *)((longlong)puVar7 + param_3 + -0x98);
      puVar7[-0x12] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x90);
      puVar7[-0x11] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x88);
      *(undefined4 *)(puVar7 + -0x10) = *(undefined4 *)((longlong)puVar7 + param_3 + -0x80);
      puVar1 = (undefined4 *)((longlong)puVar7 + param_3 + -0x78);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(puVar7 + -0xf) = *puVar1;
      *(undefined4 *)((longlong)puVar7 + -0x74) = uVar3;
      *(undefined4 *)(puVar7 + -0xe) = uVar4;
      *(undefined4 *)((longlong)puVar7 + -0x6c) = uVar5;
      puVar1 = (undefined4 *)((longlong)puVar7 + param_3 + -0x68);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(puVar7 + -0xd) = *puVar1;
      *(undefined4 *)((longlong)puVar7 + -100) = uVar3;
      *(undefined4 *)(puVar7 + -0xc) = uVar4;
      *(undefined4 *)((longlong)puVar7 + -0x5c) = uVar5;
      puVar7[-0xb] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x58);
      puVar7[-10] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x50);
      *(undefined4 *)(puVar7 + -9) = *(undefined4 *)((longlong)puVar7 + param_3 + -0x48);
      *(undefined4 *)((longlong)puVar7 + -0x44) =
           *(undefined4 *)((longlong)puVar7 + param_3 + -0x44);
      *(undefined1 *)(puVar7 + -8) = *(undefined1 *)((longlong)puVar7 + param_3 + -0x40);
      FUN_140a29610(puVar7 + -7,param_3 + -0x38 + (longlong)puVar7);
      *(undefined4 *)(puVar7 + -5) = *(undefined4 *)((longlong)puVar7 + param_3 + -0x28);
      *(undefined8 *)((longlong)puVar7 + -0x24) =
           *(undefined8 *)((longlong)puVar7 + param_3 + -0x24);
      *(undefined8 *)((longlong)puVar7 + -0x1c) =
           *(undefined8 *)((longlong)puVar7 + param_3 + -0x1c);
      puVar7[-2] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x10);
      *(undefined4 *)(puVar7 + -1) = *(undefined4 *)((longlong)puVar7 + param_3 + -8);
      *(undefined4 *)((longlong)puVar7 + -4) = *(undefined4 *)((longlong)puVar7 + param_3 + -4);
      *puVar7 = *(undefined8 *)((longlong)puVar7 + param_3);
      puVar7 = puVar7 + 0x25;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430a91a0 FUN_1430a91a0 body=164 status=ok
// SIG undefined FUN_1430a91a0(void)

undefined8 FUN_1430a91a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 8);
    do {
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -8 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + -4) = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)(param_3 + 0x14 + (longlong)puVar1);
      puVar1[3] = *(undefined8 *)(param_3 + 0x18 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 0x20 + (longlong)puVar1);
      *(undefined8 *)((longlong)puVar1 + 0x24) = *(undefined8 *)(param_3 + 0x24 + (longlong)puVar1);
      FUN_140a29610(puVar1 + 6,param_3 + 0x30 + (longlong)puVar1);
      puVar1 = puVar1 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430a9250 FUN_1430a9250 body=85 status=ok
// SIG undefined FUN_1430a9250(void)

void FUN_1430a9250(void)

{
  if (DAT_146b48280 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    DAT_146b48280 = GetStaticEnum(FUN_1430a9d90,DAT_146b48528,L"EGbxTrajectoryTraceShape");
  }
  return;
}



// FUNCTION 1430a92b0 FUN_1430a92b0 body=85 status=ok
// SIG undefined FUN_1430a92b0(void)

void FUN_1430a92b0(void)

{
  if (DAT_146b48288 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    DAT_146b48288 = GetStaticEnum(FUN_1430a9dc0,DAT_146b48528,L"ELightBeamQueryActorType");
  }
  return;
}



// FUNCTION 1430a9310 FUN_1430a9310 body=162 status=ok
// SIG undefined FUN_1430a9310(void)

longlong FUN_1430a9310(void)

{
  if (DAT_146b484d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"GbxProjectileMovementComponent",&DAT_146b484d0,
                  FUN_1430a9580,0x2c8,0x10000000,0,L"Engine",&LAB_1430a8b00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429f6c00,&LAB_140447700,0);
  }
  return DAT_146b484d0;
}



// FUNCTION 1430a93c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScrollBar::GetPrivateStaticClass(void)

{
  if (DAT_146b48650 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"LightBeam",&DAT_146b48650,FUN_1430a95e0,0x610,0x10000000,0,
                  L"Engine",&LAB_1430a8b50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,AFGConveyorBeltHologram::GetPrivateStaticClass,0);
  }
  return DAT_146b48650;
}



// FUNCTION 1430a9470 FUN_1430a9470 body=6 status=ok
// SIG undefined FUN_1430a9470(void)

undefined8 FUN_1430a9470(void)

{
  return 0xa996b191;
}



// FUNCTION 1430a9480 FUN_1430a9480 body=6 status=ok
// SIG undefined FUN_1430a9480(void)

undefined8 FUN_1430a9480(void)

{
  return 0x44deb3c;
}



// FUNCTION 1430a9490 FUN_1430a9490 body=6 status=ok
// SIG undefined FUN_1430a9490(void)

undefined8 FUN_1430a9490(void)

{
  return 0x68d73c82;
}



// FUNCTION 1430a94a0 FUN_1430a94a0 body=6 status=ok
// SIG undefined FUN_1430a94a0(void)

undefined8 FUN_1430a94a0(void)

{
  return 0x848f74db;
}



// FUNCTION 1430a94b0 FUN_1430a94b0 body=6 status=ok
// SIG undefined FUN_1430a94b0(void)

undefined8 FUN_1430a94b0(void)

{
  return 0x6065a66c;
}



// FUNCTION 1430a94c0 FUN_1430a94c0 body=6 status=ok
// SIG undefined FUN_1430a94c0(void)

undefined8 FUN_1430a94c0(void)

{
  return 0xf4ec14e9;
}



// FUNCTION 1430a94d0 FUN_1430a94d0 body=6 status=ok
// SIG undefined FUN_1430a94d0(void)

undefined8 FUN_1430a94d0(void)

{
  return 0x997ce681;
}



// FUNCTION 1430a94e0 FUN_1430a94e0 body=6 status=ok
// SIG undefined FUN_1430a94e0(void)

undefined8 FUN_1430a94e0(void)

{
  return 0x9083f83c;
}



// FUNCTION 1430a94f0 FUN_1430a94f0 body=6 status=ok
// SIG undefined FUN_1430a94f0(void)

undefined8 FUN_1430a94f0(void)

{
  return 0x4dd2fbea;
}



// FUNCTION 1430a9570 thunk_FUN_1430bc9e0 body=5 status=ok
// SIG undefined thunk_FUN_1430bc9e0(void)

void thunk_FUN_1430bc9e0(void)

{
  FUN_1430bc9e0();
  return;
}



// FUNCTION 1430a9580 FUN_1430a9580 body=34 status=ok
// SIG undefined FUN_1430a9580(void)

void FUN_1430a9580(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1430a9310();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBounce_145a72a50,4);
  return;
}



// FUNCTION 1430a95b0 FUN_1430a95b0 body=34 status=ok
// SIG undefined FUN_1430a95b0(void)

void FUN_1430a95b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1430a79b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetTrajectometerEnabled_145a72be8,2);
  return;
}



// FUNCTION 1430a95e0 FUN_1430a95e0 body=34 status=ok
// SIG undefined FUN_1430a95e0(void)

void FUN_1430a95e0(void)

{
  undefined8 uVar1;
  
  uVar1 = UScrollBar::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAssociatedActor_145a73530,0x11);
  return;
}



// FUNCTION 1430a9610 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BlendListBase::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b48580 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a9470();
    DAT_146b48580 = GetStaticStruct(FUN_1430a9df0,lVar1,L"ClientLightBeamState",200,uVar2);
  }
  return;
}



// FUNCTION 1430a9690 FUN_1430a9690 body=113 status=ok
// SIG undefined FUN_1430a9690(void)

void FUN_1430a9690(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b48450 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a9480();
    DAT_146b48450 = GetStaticStruct(FUN_1430a9e20,lVar1,L"FiringPatternSample",0x1c,uVar2);
  }
  return;
}



// FUNCTION 1430a9710 FUN_1430a9710 body=113 status=ok
// SIG undefined FUN_1430a9710(void)

void FUN_1430a9710(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b484e8 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a9490();
    DAT_146b484e8 = GetStaticStruct(FUN_1430a9e50,lVar1,L"GbxTrajectometerTraceData",0x20,uVar2);
  }
  return;
}



// FUNCTION 1430a9790 FUN_1430a9790 body=113 status=ok
// SIG undefined FUN_1430a9790(void)

void FUN_1430a9790(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b485a0 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a94a0();
    DAT_146b485a0 = GetStaticStruct(FUN_1430a9e80,lVar1,L"LightBeamAttachment",0x28,uVar2);
  }
  return;
}



// FUNCTION 1430a9810 FUN_1430a9810 body=113 status=ok
// SIG undefined FUN_1430a9810(void)

void FUN_1430a9810(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b48570 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a94b0();
    DAT_146b48570 = GetStaticStruct(FUN_1430a9eb0,lVar1,L"LightBeamImpactFXTrackingData",0x30,uVar2)
    ;
  }
  return;
}



// FUNCTION 1430a9890 FUN_1430a9890 body=113 status=ok
// SIG undefined FUN_1430a9890(void)

void FUN_1430a9890(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b48590 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a94c0();
    DAT_146b48590 = GetStaticStruct(FUN_1430a9ee0,lVar1,L"LightBeamInitializationData",0x128,uVar2);
  }
  return;
}



// FUNCTION 1430a9910 FUN_1430a9910 body=113 status=ok
// SIG undefined FUN_1430a9910(void)

void FUN_1430a9910(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b485b0 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a94d0();
    DAT_146b485b0 = GetStaticStruct(FUN_1430a9f10,lVar1,L"LightBeamQueryData",0x28,uVar2);
  }
  return;
}



// FUNCTION 1430a9990 FUN_1430a9990 body=113 status=ok
// SIG undefined FUN_1430a9990(void)

void FUN_1430a9990(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b48560 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a94e0();
    DAT_146b48560 = GetStaticStruct(FUN_1430a9f40,lVar1,L"LightBeamTickFunction",0x58,uVar2);
  }
  return;
}



// FUNCTION 1430a9a10 FUN_1430a9a10 body=113 status=ok
// SIG undefined FUN_1430a9a10(void)

void FUN_1430a9a10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b48530 == 0) {
    if (DAT_146b48528 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b48528,&PTR_s__Script_GbxWeapon_145a72cf0);
    }
    lVar1 = DAT_146b48528;
    uVar2 = FUN_1430a94f0();
    DAT_146b48530 = GetStaticStruct(FUN_1430a9f70,lVar1,L"WeaponShotModifierData",0x48,uVar2);
  }
  return;
}



// FUNCTION 1430a9a90 FUN_1430a9a90 body=47 status=ok
// SIG undefined FUN_1430a9a90(void)

longlong FUN_1430a9a90(void)

{
  if (DAT_146b48518 == 0) {
    FUN_141786440(&DAT_146b48518,&PTR_FUN_145a71610);
  }
  return DAT_146b48518;
}



// FUNCTION 1430a9ac0 FUN_1430a9ac0 body=47 status=ok
// SIG undefined FUN_1430a9ac0(void)

longlong FUN_1430a9ac0(void)

{
  if (DAT_146b483c0 == 0) {
    FUN_141786440(&DAT_146b483c0,&PTR_FUN_145a6fbb0);
  }
  return DAT_146b483c0;
}



// FUNCTION 1430a9af0 FUN_1430a9af0 body=47 status=ok
// SIG undefined FUN_1430a9af0(void)

longlong FUN_1430a9af0(void)

{
  if (DAT_146b483d0 == 0) {
    FUN_141786440(&DAT_146b483d0,&PTR_FUN_145a6fd90);
  }
  return DAT_146b483d0;
}



// FUNCTION 1430a9b20 FUN_1430a9b20 body=47 status=ok
// SIG undefined FUN_1430a9b20(void)

longlong FUN_1430a9b20(void)

{
  if (DAT_146b483e0 == 0) {
    FUN_141786440(&DAT_146b483e0,&PTR_FUN_145a70250);
  }
  return DAT_146b483e0;
}



// FUNCTION 1430a9b50 FUN_1430a9b50 body=47 status=ok
// SIG undefined FUN_1430a9b50(void)

longlong FUN_1430a9b50(void)

{
  if (DAT_146b483f0 == 0) {
    FUN_141786440(&DAT_146b483f0,&PTR_FUN_145a718d0);
  }
  return DAT_146b483f0;
}



// FUNCTION 1430a9b80 FUN_1430a9b80 body=47 status=ok
// SIG undefined FUN_1430a9b80(void)

longlong FUN_1430a9b80(void)

{
  if (DAT_146b48400 == 0) {
    FUN_141786440(&DAT_146b48400,&PTR_FUN_145a6f240);
  }
  return DAT_146b48400;
}



// FUNCTION 1430a9bb0 FUN_1430a9bb0 body=47 status=ok
// SIG undefined FUN_1430a9bb0(void)

longlong FUN_1430a9bb0(void)

{
  if (DAT_146b48410 == 0) {
    FUN_141786440(&DAT_146b48410,&PTR_FUN_145a6e7a0);
  }
  return DAT_146b48410;
}



// FUNCTION 1430a9be0 FUN_1430a9be0 body=47 status=ok
// SIG undefined FUN_1430a9be0(void)

longlong FUN_1430a9be0(void)

{
  if (DAT_146b48420 == 0) {
    FUN_141786440(&DAT_146b48420,&PTR_FUN_145a6e900);
  }
  return DAT_146b48420;
}



// FUNCTION 1430a9c10 FUN_1430a9c10 body=47 status=ok
// SIG undefined FUN_1430a9c10(void)

longlong FUN_1430a9c10(void)

{
  if (DAT_146b48430 == 0) {
    FUN_141786440(&DAT_146b48430,&PTR_FUN_145a6e380);
  }
  return DAT_146b48430;
}



// FUNCTION 1430a9c40 FUN_1430a9c40 body=47 status=ok
// SIG undefined FUN_1430a9c40(void)

longlong FUN_1430a9c40(void)

{
  if (DAT_146b48440 == 0) {
    FUN_141786440(&DAT_146b48440,&PTR_FUN_145a6e5f0);
  }
  return DAT_146b48440;
}



// FUNCTION 1430a9c70 FUN_1430a9c70 body=47 status=ok
// SIG undefined FUN_1430a9c70(void)

longlong FUN_1430a9c70(void)

{
  if (DAT_146b48460 == 0) {
    FUN_141786440(&DAT_146b48460,&PTR_FUN_145a6ede0);
  }
  return DAT_146b48460;
}



// FUNCTION 1430a9ca0 FUN_1430a9ca0 body=47 status=ok
// SIG undefined FUN_1430a9ca0(void)

longlong FUN_1430a9ca0(void)

{
  if (DAT_146b48470 == 0) {
    FUN_141786440(&DAT_146b48470,&PTR_FUN_145a6f190);
  }
  return DAT_146b48470;
}



// FUNCTION 1430a9cd0 FUN_1430a9cd0 body=47 status=ok
// SIG undefined FUN_1430a9cd0(void)

longlong FUN_1430a9cd0(void)

{
  if (DAT_146b48480 == 0) {
    FUN_141786440(&DAT_146b48480,&PTR_FUN_145a6f990);
  }
  return DAT_146b48480;
}



// FUNCTION 1430a9d00 FUN_1430a9d00 body=47 status=ok
// SIG undefined FUN_1430a9d00(void)

longlong FUN_1430a9d00(void)

{
  if (DAT_146b48490 == 0) {
    FUN_141786440(&DAT_146b48490,&PTR_FUN_145a6fcf0);
  }
  return DAT_146b48490;
}



// FUNCTION 1430a9d30 FUN_1430a9d30 body=47 status=ok
// SIG undefined FUN_1430a9d30(void)

longlong FUN_1430a9d30(void)

{
  if (DAT_146b48540 == 0) {
    FUN_141786440(&DAT_146b48540,&PTR_FUN_145a6e090);
  }
  return DAT_146b48540;
}



// FUNCTION 1430a9d60 FUN_1430a9d60 body=47 status=ok
// SIG undefined FUN_1430a9d60(void)

longlong FUN_1430a9d60(void)

{
  if (DAT_146b48550 == 0) {
    FUN_141786a30(&DAT_146b48550,&PTR_Z_Construct_UPackage__Script_Engine_14678eee0);
  }
  return DAT_146b48550;
}



// FUNCTION 1430a9d90 FUN_1430a9d90 body=47 status=ok
// SIG undefined FUN_1430a9d90(void)

longlong FUN_1430a9d90(void)

{
  if (DAT_146b484e0 == 0) {
    FUN_1417866a0(&DAT_146b484e0,&PTR_Z_Construct_UPackage__Script_Engine_146790d80);
  }
  return DAT_146b484e0;
}



// FUNCTION 1430a9dc0 FUN_1430a9dc0 body=47 status=ok
// SIG undefined FUN_1430a9dc0(void)

longlong FUN_1430a9dc0(void)

{
  if (DAT_146b48558 == 0) {
    FUN_1417866a0(&DAT_146b48558,&PTR_Z_Construct_UPackage__Script_Engine_146790dd0);
  }
  return DAT_146b48558;
}



// FUNCTION 1430a9df0 FUN_1430a9df0 body=47 status=ok
// SIG undefined FUN_1430a9df0(void)

longlong FUN_1430a9df0(void)

{
  if (DAT_146b48588 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b48588,&PTR_Z_Construct_UPackage__Script_Engine_14678f540);
  }
  return DAT_146b48588;
}



// FUNCTION 1430a9e20 FUN_1430a9e20 body=47 status=ok
// SIG undefined FUN_1430a9e20(void)

longlong FUN_1430a9e20(void)

{
  if (DAT_146b48458 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b48458,&PTR_Z_Construct_UPackage__Script_Engine_14678d160);
  }
  return DAT_146b48458;
}



// FUNCTION 1430a9e50 FUN_1430a9e50 body=47 status=ok
// SIG undefined FUN_1430a9e50(void)

longlong FUN_1430a9e50(void)

{
  if (DAT_146b484f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b484f0,&PTR_Z_Construct_UPackage__Script_Engine_14678e3c0);
  }
  return DAT_146b484f0;
}



// FUNCTION 1430a9e80 FUN_1430a9e80 body=47 status=ok
// SIG undefined FUN_1430a9e80(void)

longlong FUN_1430a9e80(void)

{
  if (DAT_146b485a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b485a8,&PTR_Z_Construct_UPackage__Script_Engine_14678fce0);
  }
  return DAT_146b485a8;
}



// FUNCTION 1430a9eb0 FUN_1430a9eb0 body=47 status=ok
// SIG undefined FUN_1430a9eb0(void)

longlong FUN_1430a9eb0(void)

{
  if (DAT_146b48578 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b48578,&PTR_Z_Construct_UPackage__Script_Engine_14678eff0);
  }
  return DAT_146b48578;
}



// FUNCTION 1430a9ee0 FUN_1430a9ee0 body=47 status=ok
// SIG undefined FUN_1430a9ee0(void)

longlong FUN_1430a9ee0(void)

{
  if (DAT_146b48598 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b48598,&PTR_Z_Construct_UPackage__Script_Engine_14678fb90);
  }
  return DAT_146b48598;
}



// FUNCTION 1430a9f10 FUN_1430a9f10 body=47 status=ok
// SIG undefined FUN_1430a9f10(void)

longlong FUN_1430a9f10(void)

{
  if (DAT_146b485b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b485b8,&PTR_Z_Construct_UPackage__Script_Engine_14678feb0);
  }
  return DAT_146b485b8;
}



// FUNCTION 1430a9f40 FUN_1430a9f40 body=47 status=ok
// SIG undefined FUN_1430a9f40(void)

longlong FUN_1430a9f40(void)

{
  if (DAT_146b48568 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b48568,&PTR_Z_Construct_UPackage__Script_Engine_14678ef20);
  }
  return DAT_146b48568;
}



// FUNCTION 1430a9f70 FUN_1430a9f70 body=47 status=ok
// SIG undefined FUN_1430a9f70(void)

longlong FUN_1430a9f70(void)

{
  if (DAT_146b48538 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b48538,&PTR_Z_Construct_UPackage__Script_Engine_14678edf0);
  }
  return DAT_146b48538;
}



// FUNCTION 1430a9fa0 FUN_1430a9fa0 body=134 status=ok
// SIG undefined FUN_1430a9fa0(void)

void FUN_1430a9fa0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14304a380(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430aa070 FUN_1430aa070 body=44 status=ok
// SIG undefined FUN_1430aa070(void)

void FUN_1430aa070(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14304ab70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430aa180 FUN_1430aa180 body=228 status=ok
// SIG undefined FUN_1430aa180(void)

void FUN_1430aa180(longlong *param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined **local_138 [29];
  longlong local_50;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  FUN_140aec950(local_138);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_138);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  pppuVar1 = local_138;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x298))(param_1,pppuVar1);
  local_138[0] = &PTR_FUN_14422f7d8;
  FWeakObjectPtr::operator=(local_20,0);
  local_18 = 0;
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430aa270 FUN_1430aa270 body=161 status=ok
// SIG undefined FUN_1430aa270(void)

void FUN_1430aa270(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x2a0))(param_1,puVar1);
  return;
}



// FUNCTION 1430aa320 FUN_1430aa320 body=269 status=ok
// SIG undefined FUN_1430aa320(void)

void FUN_1430aa320(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_a8 [16];
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_98;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar2 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x5a0))(param_1,puVar1,puVar2);
  return;
}



// FUNCTION 1430aa430 FUN_1430aa430 body=408 status=ok
// SIG undefined FUN_1430aa430(void)

void FUN_1430aa430(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a8 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_a0 = local_b0;
  (**(code **)(*param_1 + 0x5a8))(param_1,local_res10,local_res8,&local_a8,puVar1);
  return;
}



// FUNCTION 1430aa650 FUN_1430aa650 body=128 status=ok
// SIG undefined FUN_1430aa650(void)

void FUN_1430aa650(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143056240(param_1,local_res10);
  return;
}



// FUNCTION 1430aa6d0 FUN_1430aa6d0 body=123 status=ok
// SIG undefined FUN_1430aa6d0(void)

void FUN_1430aa6d0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14305ab00(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430aa750 FUN_1430aa750 body=128 status=ok
// SIG undefined FUN_1430aa750(void)

void FUN_1430aa750(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14305b410(param_1,local_res10);
  return;
}



// FUNCTION 1430aa7d0 FUN_1430aa7d0 body=130 status=ok
// SIG undefined FUN_1430aa7d0(void)

void FUN_1430aa7d0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14305b430(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1430aa880 FUN_1430aa880 body=53 status=ok
// SIG undefined FUN_1430aa880(void)

void FUN_1430aa880(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &PTR_FUN_145a77ba8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430aa8c0 FUN_1430aa8c0 body=53 status=ok
// SIG undefined FUN_1430aa8c0(void)

void FUN_1430aa8c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &PTR_FUN_145a77cc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1430aa900 FUN_1430aa900 body=53 status=ok
// SIG undefined FUN_1430aa900(void)

void FUN_1430aa900(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a77dd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430aa950 FUN_1430aa950 body=47 status=ok
// SIG undefined FUN_1430aa950(void)

longlong FUN_1430aa950(void)

{
  if (DAT_146b487d0 == 0) {
    FUN_141786440(&DAT_146b487d0,&PTR_GetPrivateStaticClass_145a75380);
  }
  return DAT_146b487d0;
}



// FUNCTION 1430aa980 FUN_1430aa980 body=47 status=ok
// SIG undefined FUN_1430aa980(void)

longlong FUN_1430aa980(void)

{
  if (DAT_146b487c8 == 0) {
    FUN_141786a30(&DAT_146b487c8,&PTR_FUN_1467921e0);
  }
  return DAT_146b487c8;
}



// FUNCTION 1430aa9b0 FUN_1430aa9b0 body=53 status=ok
// SIG undefined FUN_1430aa9b0(void)

void FUN_1430aa9b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145a77530;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430aa9f0 FUN_1430aa9f0 body=53 status=ok
// SIG undefined FUN_1430aa9f0(void)

void FUN_1430aa9f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_145a77648;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430aaa40 FUN_1430aaa40 body=162 status=ok
// SIG undefined FUN_1430aaa40(void)

longlong FUN_1430aaa40(void)

{
  if (DAT_146b48838 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"LightBeamStatics",&DAT_146b48838,FUN_1430abdd0,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b48838;
}



// FUNCTION 1430aaaf0 FUN_1430aaaf0 body=47 status=ok
// SIG undefined FUN_1430aaaf0(void)

longlong FUN_1430aaaf0(void)

{
  if (DAT_146b48830 == 0) {
    FUN_141786440(&DAT_146b48830,&PTR_FUN_145a75a50);
  }
  return DAT_146b48830;
}



// FUNCTION 1430aab20 FUN_1430aab20 body=47 status=ok
// SIG undefined FUN_1430aab20(void)

longlong FUN_1430aab20(void)

{
  if (DAT_146b487e8 == 0) {
    FUN_141786a30(&DAT_146b487e8,&PTR_FUN_146792590);
  }
  return DAT_146b487e8;
}



// FUNCTION 1430aab50 FUN_1430aab50 body=47 status=ok
// SIG undefined FUN_1430aab50(void)

longlong FUN_1430aab50(void)

{
  if (DAT_146b487f0 == 0) {
    FUN_141786a30(&DAT_146b487f0,&PTR_FUN_1467929c0);
  }
  return DAT_146b487f0;
}



// FUNCTION 1430aab80 FUN_1430aab80 body=47 status=ok
// SIG undefined FUN_1430aab80(void)

longlong FUN_1430aab80(void)

{
  if (DAT_146b487f8 == 0) {
    FUN_141786a30(&DAT_146b487f8,&PTR_FUN_146792a40);
  }
  return DAT_146b487f8;
}



// FUNCTION 1430aabb0 FUN_1430aabb0 body=47 status=ok
// SIG undefined FUN_1430aabb0(void)

longlong FUN_1430aabb0(void)

{
  if (DAT_146b48800 == 0) {
    FUN_141786a30(&DAT_146b48800,&PTR_FUN_146792b10);
  }
  return DAT_146b48800;
}



// FUNCTION 1430aabe0 FUN_1430aabe0 body=47 status=ok
// SIG undefined FUN_1430aabe0(void)

longlong FUN_1430aabe0(void)

{
  if (DAT_146b48808 == 0) {
    FUN_141786a30(&DAT_146b48808,&PTR_FUN_146792bd0);
  }
  return DAT_146b48808;
}



// FUNCTION 1430aac10 FUN_1430aac10 body=47 status=ok
// SIG undefined FUN_1430aac10(void)

longlong FUN_1430aac10(void)

{
  if (DAT_146b48810 == 0) {
    FUN_141786a30(&DAT_146b48810,&PTR_FUN_146792d20);
  }
  return DAT_146b48810;
}



// FUNCTION 1430aac40 FUN_1430aac40 body=47 status=ok
// SIG undefined FUN_1430aac40(void)

longlong FUN_1430aac40(void)

{
  if (DAT_146b48818 == 0) {
    FUN_141786a30(&DAT_146b48818,&PTR_FUN_146792da0);
  }
  return DAT_146b48818;
}



// FUNCTION 1430aac70 FUN_1430aac70 body=47 status=ok
// SIG undefined FUN_1430aac70(void)

longlong FUN_1430aac70(void)

{
  if (DAT_146b48820 == 0) {
    FUN_141786a30(&DAT_146b48820,&PTR_FUN_146792e60);
  }
  return DAT_146b48820;
}



// FUNCTION 1430aaca0 FUN_1430aaca0 body=47 status=ok
// SIG undefined FUN_1430aaca0(void)

longlong FUN_1430aaca0(void)

{
  if (DAT_146b48828 == 0) {
    FUN_141786a30(&DAT_146b48828,&PTR_FUN_146792f60);
  }
  return DAT_146b48828;
}



// FUNCTION 1430aace0 FUN_1430aace0 body=47 status=ok
// SIG undefined FUN_1430aace0(void)

longlong FUN_1430aace0(void)

{
  if (DAT_146b48790 == 0) {
    FUN_141786440(&DAT_146b48790,&PTR_LAB_145a75fd0);
  }
  return DAT_146b48790;
}



// FUNCTION 1430aad10 FUN_1430aad10 body=47 status=ok
// SIG undefined FUN_1430aad10(void)

longlong FUN_1430aad10(void)

{
  if (DAT_146b48780 == 0) {
    FUN_141786a30(&DAT_146b48780,&PTR_FUN_146790f00);
  }
  return DAT_146b48780;
}



// FUNCTION 1430aad40 FUN_1430aad40 body=47 status=ok
// SIG undefined FUN_1430aad40(void)

longlong FUN_1430aad40(void)

{
  if (DAT_146b48788 == 0) {
    FUN_141786a30(&DAT_146b48788,&PTR_FUN_146790fc0);
  }
  return DAT_146b48788;
}



// FUNCTION 1430aad70 FUN_1430aad70 body=47 status=ok
// SIG undefined FUN_1430aad70(void)

longlong FUN_1430aad70(void)

{
  if (DAT_146b48a08 == 0) {
    FUN_141786440(&DAT_146b48a08,&PTR_LAB_145a74ab0);
  }
  return DAT_146b48a08;
}



// FUNCTION 1430aada0 FUN_1430aada0 body=47 status=ok
// SIG undefined FUN_1430aada0(void)

longlong FUN_1430aada0(void)

{
  if (DAT_146b488d0 == 0) {
    FUN_141786a30(&DAT_146b488d0,&PTR_FUN_146794590);
  }
  return DAT_146b488d0;
}



// FUNCTION 1430aadd0 FUN_1430aadd0 body=47 status=ok
// SIG undefined FUN_1430aadd0(void)

longlong FUN_1430aadd0(void)

{
  if (DAT_146b488d8 == 0) {
    FUN_141786a30(&DAT_146b488d8,&PTR_FUN_1467945d0);
  }
  return DAT_146b488d8;
}



// FUNCTION 1430aae00 FUN_1430aae00 body=47 status=ok
// SIG undefined FUN_1430aae00(void)

longlong FUN_1430aae00(void)

{
  if (DAT_146b488e0 == 0) {
    FUN_141786a30(&DAT_146b488e0,&PTR_FUN_146794610);
  }
  return DAT_146b488e0;
}



// FUNCTION 1430aae30 FUN_1430aae30 body=47 status=ok
// SIG undefined FUN_1430aae30(void)

longlong FUN_1430aae30(void)

{
  if (DAT_146b488e8 == 0) {
    FUN_141786a30(&DAT_146b488e8,&PTR_FUN_146794650);
  }
  return DAT_146b488e8;
}



// FUNCTION 1430aae60 FUN_1430aae60 body=47 status=ok
// SIG undefined FUN_1430aae60(void)

longlong FUN_1430aae60(void)

{
  if (DAT_146b488f0 == 0) {
    FUN_141786a30(&DAT_146b488f0,&PTR_FUN_1467946d0);
  }
  return DAT_146b488f0;
}


