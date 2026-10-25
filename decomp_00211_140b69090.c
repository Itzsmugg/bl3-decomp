// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b69090 FUN_140b69090 body=74 status=ok
// SIG undefined FUN_140b69090(void)

void FUN_140b69090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140b50980();
  FUN_1414c0510(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b690e0 FUN_140b690e0 body=90 status=ok
// SIG undefined FUN_140b690e0(void)

void FUN_140b690e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_140b21990(param_2,param_3);
  }
  FUN_1414c0510(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b69140 FUN_140b69140 body=872 status=ok
// SIG undefined FUN_140b69140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b69140(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  longlong *local_f8;
  int local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e8 = param_4;
  local_d0 = param_3;
  if ((param_2 != (longlong *)0x0) && (param_2[0x23] != 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x108);
    puVar7 = puVar5 + (longlong)*(int *)(param_1 + 0x110) * 4;
    for (; puVar5 != puVar7; puVar5 = puVar5 + 4) {
      iVar1 = *(int *)(puVar5 + 3);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      if (iVar1 < 1) {
        uVar8 = 0;
      }
      else {
        iVar2 = *(int *)(param_4 + 8) + -1;
        if ((iVar2 < 0) || (iVar1 <= iVar2)) {
          iVar2 = iVar1 + -1;
        }
        uVar8 = FUN_142c98860((longlong)iVar2 * 0x38 + puVar5[2],0);
      }
      local_118 = *(undefined1 *)(puVar5 + 1);
      local_108 = 1;
      local_110 = uVar6;
      FUN_140b1a410(param_2,*puVar5,param_2[0x23],uVar8);
    }
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_140b43730(param_2);
    }
    lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar3 != 0) {
      local_f8 = (longlong *)0x0;
      local_f0 = 0;
      FWeakObjectPtr::operator=(&local_e0,param_2);
      FWeakObjectPtr::operator=(&local_d8,param_1);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      param_4 = local_e8;
      if (plVar4 == (longlong *)0x0) {
        if (((local_f0 != 0) && (local_f8 != (longlong *)0x0)) &&
           ((**(code **)(*local_f8 + 0x28))(local_f8,0), param_4 = local_e8,
           local_f8 != (longlong *)0x0)) {
          local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
          param_4 = local_e8;
        }
      }
      else {
        *plVar4 = (longlong)&PTR_GetPoolName_1442cbdc0;
        *(undefined4 *)(plVar4 + 1) = local_e0;
        *(undefined4 *)((longlong)plVar4 + 0xc) = local_dc;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_d4;
        *(undefined4 *)(plVar4 + 2) = local_d8;
        plVar4[3] = local_e8;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar3;
        *plVar4 = (longlong)&PTR_GetPoolName_1442cbe08;
        FUN_140b56de0(plVar4,&local_f8);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar3 = FMemory::Realloc(plVar4,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
      lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      local_c8 = 0;
      local_c0 = 0;
      if ((local_f0 != 0) && (local_f8 != (longlong *)0x0)) {
        (**(code **)(*local_f8 + 0x30))(local_f8,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_110 = CONCAT44(local_110._4_4_,0xbf800000);
      local_118 = 0;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_2 + 0xbc,&local_c8,0x3c23d70a);
      if (local_68 != 0) {
        plVar4 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar4 = local_78;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (local_f0 != 0) {
        if (local_f8 == (longlong *)0x0) goto LAB_140b6947b;
        (**(code **)(*local_f8 + 0x28))(local_f8,0);
        if (local_f8 != (longlong *)0x0) {
          local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
        }
        local_f0 = 0;
      }
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free(local_f8);
      }
    }
  }
LAB_140b6947b:
  FUN_1414c0510(param_1,param_2,local_d0,param_4);
  return;
}



// FUNCTION 140b694b0 FUN_140b694b0 body=68 status=ok
// SIG undefined FUN_140b694b0(void)

void FUN_140b694b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1414c0510();
  if (*(char *)(param_1 + 0x194) != '\0') {
    FUN_140b55640(param_1,param_2,param_4);
  }
  return;
}



// FUNCTION 140b69500 FUN_140b69500 body=881 status=ok
// SIG undefined FUN_140b69500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b69500(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_170;
  longlong local_168;
  longlong *local_158;
  int local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if ((((param_2 != (longlong *)0x0) && (param_2[0x23] != 0)) &&
      (lVar2 = (**(code **)(*param_2 + 0x148))(), lVar2 != 0)) && (param_3 != 0)) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_128 = *(undefined8 *)(param_1 + 0x110);
    uStack_120 = *(undefined8 *)(param_1 + 0x118);
    local_118 = *(undefined8 *)(param_1 + 0x120);
    uStack_110 = *(undefined8 *)(param_1 + 0x128);
    local_168 = param_3;
    if (!bVar1) {
      local_168 = 0;
    }
    local_108 = *(undefined8 *)(param_1 + 0x130);
    uStack_100 = *(undefined8 *)(param_1 + 0x138);
    local_170 = *(undefined8 *)(param_1 + 400);
    local_f8 = *(undefined8 *)(param_1 + 0x160);
    uStack_f0 = *(undefined8 *)(param_1 + 0x168);
    local_178 = &local_128;
    local_e8 = *(undefined4 *)(param_1 + 0x170);
    uStack_e4 = *(undefined4 *)(param_1 + 0x174);
    uStack_e0 = *(undefined4 *)(param_1 + 0x178);
    uStack_dc = *(undefined4 *)(param_1 + 0x17c);
    local_d8 = *(undefined4 *)(param_1 + 0x180);
    uStack_d4 = *(undefined4 *)(param_1 + 0x184);
    uStack_d0 = *(undefined4 *)(param_1 + 0x188);
    uStack_cc = *(undefined4 *)(param_1 + 0x18c);
    FUN_140b22250(param_2,*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x158),
                  &local_f8);
    local_158 = (longlong *)0x0;
    local_150 = 0;
    FWeakObjectPtr::operator=(&local_140,param_2);
    FWeakObjectPtr::operator=(&local_138,param_3);
    local_148 = local_138;
    local_144 = local_134;
    plVar3 = (longlong *)FMemory::Realloc(0,0x40,0);
    if (plVar3 == (longlong *)0x0) {
      if (((local_150 != 0) && (local_158 != (longlong *)0x0)) &&
         ((**(code **)(*local_158 + 0x28))(local_158,0), local_158 != (longlong *)0x0)) {
        local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
      }
    }
    else {
      *plVar3 = (longlong)&PTR_GetPoolName_1442cbf70;
      *(undefined4 *)(plVar3 + 1) = local_140;
      *(undefined4 *)((longlong)plVar3 + 0xc) = local_13c;
      *(undefined4 *)(plVar3 + 2) = local_148;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_144;
      plVar3[3] = (longlong)param_2;
      plVar3[4] = param_1;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[6] = lVar2;
      *plVar3 = (longlong)&PTR_GetPoolName_1442cbfb8;
      FUN_140b56f30(plVar3,&local_158);
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    local_c8 = 0;
    local_c0 = 0;
    if ((local_150 != 0) && (local_158 != (longlong *)0x0)) {
      (**(code **)(*local_158 + 0x30))(local_158,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_b0 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    FUN_142880af0(uVar4,&local_c8);
    if (local_68 != 0) {
      plVar3 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar3 = local_78;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (local_150 != 0) {
      if (local_158 == (longlong *)0x0) goto LAB_140b69845;
      (**(code **)(*local_158 + 0x28))(local_158,0);
      if (local_158 != (longlong *)0x0) {
        local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
      }
      local_150 = 0;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
  }
LAB_140b69845:
  FUN_1414c0510(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b69880 FUN_140b69880 body=263 status=ok
// SIG undefined FUN_140b69880(void)

void FUN_140b69880(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *local_48;
  undefined8 local_40;
  
  if (param_2 != 0) {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_140b5bba0(param_1,param_2,param_4,&local_48);
    uVar2 = *(undefined8 *)(param_2 + 0x118);
    puVar1 = local_48 + (longlong)(int)local_40 * 9;
    for (puVar4 = local_48; puVar4 != puVar1; puVar4 = puVar4 + 9) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = FUN_142c98860(puVar4 + 2,0);
      FUN_140b1a410(param_2,*puVar4,uVar2,uVar5,*(undefined1 *)(puVar4 + 1),uVar3,0);
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free(local_48);
    }
  }
  FUN_1414c0510(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b69990 FUN_140b69990 body=40 status=ok
// SIG undefined FUN_140b69990(void)

void FUN_140b69990(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c05a0(local_28,local_18,&local_28);
  return;
}



// FUNCTION 140b699c0 FUN_140b699c0 body=208 status=ok
// SIG undefined FUN_140b699c0(void)

void FUN_140b699c0(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
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
      FUN_140b6f380(param_1,param_2,lVar1,param_4);
    }
    FUN_140b3bb90(param_2,*(undefined8 *)(param_1 + 0x118));
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c05a0(param_1,param_2,&local_28,param_4);
  return;
}



// FUNCTION 140b69a90 FUN_140b69a90 body=297 status=ok
// SIG undefined FUN_140b69a90(void)

void FUN_140b69a90(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x128);
    puVar5 = puVar4 + (longlong)*(int *)(param_1 + 0x130) * 4;
    for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
      iVar1 = *(int *)(puVar4 + 3);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      if (iVar1 < 1) {
        uVar6 = 0;
      }
      else {
        iVar3 = *(int *)(param_4 + 8) + -1;
        if ((iVar3 < 0) || (iVar1 <= iVar3)) {
          iVar3 = iVar1 + -1;
        }
        uVar6 = FUN_142c98860((longlong)iVar3 * 0x38 + puVar4[2],0);
      }
      FUN_140b1a410(param_2,*puVar4,*(undefined8 *)(param_2 + 0x118),uVar6,
                    *(undefined1 *)(puVar4 + 1),uVar2,2);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      FUN_140b43730(param_2);
    }
  }
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  FUN_1414c05a0(param_1,param_2,&local_38,param_4);
  return;
}



// FUNCTION 140b69bc0 FUN_140b69bc0 body=254 status=ok
// SIG undefined FUN_140b69bc0(void)

void FUN_140b69bc0(longlong *param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  char cVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  cVar1 = (char)param_1[0x21];
  if (((cVar1 == '\0') && (param_2 != 0)) && (*(char *)(param_4 + 0xc) != '\0')) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_18 = *(undefined8 *)(param_3 + 4);
    (**(code **)(*param_1 + 0x310))(local_28,local_18,&local_28);
    if (*(char *)((longlong)param_1 + 0x10b) != '\0') {
      *(undefined1 *)(param_4 + 0xc) = 0;
    }
  }
  else if (((cVar1 != '\0') && ((cVar1 == '\x01' || (cVar1 == '\x02')))) &&
          (*(char *)((longlong)param_1 + 0x10b) != '\0')) {
    *(undefined1 *)(param_4 + 0xc) = 1;
  }
  if ((*(char *)((longlong)param_1 + 0x109) != '\0') &&
     (*(char *)((longlong)param_1 + 0x10a) == '\0')) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_18 = *(undefined8 *)(param_3 + 4);
    (**(code **)(*param_1 + 0x318))(param_1,param_2,&local_28,param_4);
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c05a0(param_1,param_2,&local_28,param_4);
  return;
}



// FUNCTION 140b69cc0 FUN_140b69cc0 body=40 status=ok
// SIG undefined FUN_140b69cc0(void)

void FUN_140b69cc0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0650(local_28,local_18,&local_28);
  return;
}



// FUNCTION 140b69cf0 FUN_140b69cf0 body=390 status=ok
// SIG undefined FUN_140b69cf0(void)

void FUN_140b69cf0(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x168);
    puVar5 = puVar4 + (longlong)*(int *)(param_1 + 0x170) * 4;
    for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
      FUN_140b3cf80(param_2,*puVar4,*(undefined8 *)(param_1 + 0x10),3);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x148);
    puVar5 = puVar4 + (longlong)*(int *)(param_1 + 0x150) * 4;
    for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
      iVar1 = *(int *)(puVar4 + 3);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      if (iVar1 < 1) {
        uVar6 = 0;
      }
      else {
        iVar3 = *(int *)(param_4 + 8) + -1;
        if ((iVar3 < 0) || (iVar1 <= iVar3)) {
          iVar3 = iVar1 + -1;
        }
        uVar6 = FUN_142c98860((longlong)iVar3 * 0x38 + puVar4[2],0);
      }
      FUN_140b1a410(param_2,*puVar4,*(undefined8 *)(param_2 + 0x118),uVar6,
                    *(undefined1 *)(puVar4 + 1),uVar2,4);
    }
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_140b43730(param_2);
    }
    if ((*(longlong *)(param_1 + 0x178) != 0) && (*(char *)(param_1 + 0x180) != '\0')) {
      FUN_140b43870(param_2);
    }
  }
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0650(param_1,param_2,&local_38,param_4);
  return;
}



// FUNCTION 140b69e80 FUN_140b69e80 body=243 status=ok
// SIG undefined FUN_140b69e80(void)

void FUN_140b69e80(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x118), lVar3 != 0)) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && ((*(byte *)(lVar3 + 0x56c) & 1) != 0)) &&
        (1 < (byte)(*(char *)(lVar3 + 0xec0) - 3U))) && (lVar3 = FUN_140c41820(lVar3), lVar3 == 0))
    {
      FUN_140b73e50(param_1,param_2,1);
      FUN_140b40390(param_2,*(undefined8 *)(param_1 + 0x140));
    }
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0650(param_1,param_2,&local_28,param_4);
  return;
}



// FUNCTION 140b69f80 FUN_140b69f80 body=220 status=ok
// SIG undefined FUN_140b69f80(void)

void FUN_140b69f80(longlong *param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((((char)param_1[0x21] == '\x03') && (param_2 != 0)) && (*(char *)(param_4 + 0xc) != '\0')) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_18 = *(undefined8 *)(param_3 + 4);
    (**(code **)(*param_1 + 0x310))(local_28,local_18,&local_28);
    if (*(char *)((longlong)param_1 + 0x10b) != '\0') {
      *(undefined1 *)(param_4 + 0xc) = 0;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x109) != '\0') &&
     (*(char *)((longlong)param_1 + 0x10a) == '\x03')) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_18 = *(undefined8 *)(param_3 + 4);
    (**(code **)(*param_1 + 0x318))(param_1,param_2,&local_28,param_4);
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0650(param_1,param_2,&local_28,param_4);
  return;
}



// FUNCTION 140b6a060 FUN_140b6a060 body=40 status=ok
// SIG undefined FUN_140b6a060(void)

void FUN_140b6a060(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0700(local_28,local_18,&local_28);
  return;
}



// FUNCTION 140b6a090 FUN_140b6a090 body=201 status=ok
// SIG undefined FUN_140b6a090(void)

void FUN_140b6a090(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
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
      FUN_140b46630(param_2,lVar1);
      FUN_140b3bb90(param_2,*(undefined8 *)(param_1 + 0x120));
    }
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0700(param_1,param_2,&local_28,param_4);
  return;
}



// FUNCTION 140b6a160 FUN_140b6a160 body=201 status=ok
// SIG undefined FUN_140b6a160(void)

void FUN_140b6a160(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x128);
    puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x130) * 4;
    for (; puVar1 != puVar2; puVar1 = puVar1 + 4) {
      FUN_140b3cf80(param_2,*puVar1,*(undefined8 *)(param_1 + 0x10),2);
    }
    if ((*(longlong *)(param_1 + 0x138) != 0) && (*(char *)(param_1 + 0x140) != '\0')) {
      FUN_140b43870(param_2);
    }
  }
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0700(param_1,param_2,&local_38,param_4);
  return;
}



// FUNCTION 140b6a230 FUN_140b6a230 body=220 status=ok
// SIG undefined FUN_140b6a230(void)

void FUN_140b6a230(longlong *param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((((char)param_1[0x21] == '\x01') && (param_2 != 0)) && (*(char *)(param_4 + 0xc) != '\0')) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_18 = *(undefined8 *)(param_3 + 4);
    (**(code **)(*param_1 + 0x310))(local_28,local_18,&local_28);
    if (*(char *)((longlong)param_1 + 0x10b) != '\0') {
      *(undefined1 *)(param_4 + 0xc) = 0;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x109) != '\0') &&
     (*(char *)((longlong)param_1 + 0x10a) == '\x01')) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_18 = *(undefined8 *)(param_3 + 4);
    (**(code **)(*param_1 + 0x318))(param_1,param_2,&local_28,param_4);
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0700(param_1,param_2,&local_28,param_4);
  return;
}



// FUNCTION 140b6a310 FUN_140b6a310 body=198 status=ok
// SIG undefined FUN_140b6a310(void)

void FUN_140b6a310(longlong param_1,longlong param_2)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((param_2 != 0) && (*(char *)(param_2 + 0x5b1) == '\0')) &&
      (bVar2 = FUN_140b2cbe0(param_2,0), 1 < bVar2)) &&
     (lVar4 = *(longlong *)(param_2 + 0x118), lVar4 != 0)) {
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
    if (((bVar1) && (1 < (byte)(*(char *)(lVar4 + 0xec0) - 3U))) &&
       (lVar4 = FUN_140c41820(lVar4), lVar4 == 0)) {
      FUN_140b73e50(param_1,param_2,1);
      FUN_140b40390(param_2,*(undefined8 *)(param_1 + 0x140));
    }
  }
  return;
}



// FUNCTION 140b6a3e0 FUN_140b6a3e0 body=245 status=ok
// SIG undefined FUN_140b6a3e0(void)

void FUN_140b6a3e0(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_2 + 0x118);
  if (lVar5 == 0) {
    return;
  }
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (((((*(byte *)(lVar5 + 0x56c) & 1) == 0) || ((byte)(param_3 - 3U) < 2)) ||
        (bVar2 = FUN_140b2cbe0(param_2,0), bVar2 < 2)) || (lVar5 = FUN_140c41820(lVar5), lVar5 != 0)
       ) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (*(char *)(param_2 + 0x5b1) != cVar3) {
      if (cVar3 == '\0') {
        FUN_140b40390(param_2,*(undefined8 *)(param_1 + 0x148));
        FUN_140b73e50(param_1,param_2,0);
      }
      else {
        FUN_140b73e50(param_1,param_2,1);
        FUN_140b40390(param_2,*(undefined8 *)(param_1 + 0x140));
      }
    }
    return;
  }
  return;
}



// FUNCTION 140b6a4e0 FUN_140b6a4e0 body=65 status=ok
// SIG undefined FUN_140b6a4e0(void)

void FUN_140b6a4e0(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x5b1) != '\0') {
    FUN_140b40390(param_2,*(undefined8 *)(param_1 + 0x148));
    FUN_140b73e50(param_1,param_2,0);
  }
  return;
}



// FUNCTION 140b6a540 FUN_140b6a540 body=168 status=ok
// SIG undefined FUN_140b6a540(void)

void FUN_140b6a540(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      puVar2 = (undefined8 *)USkinnedMeshComponent::GetSlavePoseComponents(param_2);
      FUN_142880530(uVar3,puVar2);
      *puVar2 = 0;
    }
  }
  FUN_1414c07b0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b6a5f0 FUN_140b6a5f0 body=111 status=ok
// SIG undefined FUN_140b6a5f0(void)

void FUN_140b6a5f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    if (param_2 == 0) goto LAB_140b6a63a;
    FUN_140b46630(param_2,param_3);
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_140b23040(param_2,param_3);
  }
LAB_140b6a63a:
  FUN_1414c07b0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b6a690 FUN_140b6a690 body=99 status=ok
// SIG undefined FUN_140b6a690(void)

void FUN_140b6a690(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1414c07b0();
  if (*(char *)(param_1 + 0x194) != '\0') {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar2 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
      lVar3 = *(longlong *)(param_1 + 0x110);
      for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar2) goto LAB_140b6a6e0;
      }
    }
    lVar3 = 0;
LAB_140b6a6e0:
    FUN_142d49d00(param_3,lVar3);
  }
  return;
}



// FUNCTION 140b6a700 FUN_140b6a700 body=196 status=ok
// SIG undefined FUN_140b6a700(void)

void FUN_140b6a700(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 == 0) goto LAB_140b6a79f;
  if (*(char *)(param_2 + 0x5b1) != '\0') {
    FUN_140b40390(param_2,*(undefined8 *)(param_1 + 0x148));
    FUN_140b73e50(param_1,param_2,0);
    FUN_140b38d30(param_2,0);
  }
  if (param_3 == 0) {
LAB_140b6a795:
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_3;
    if (!bVar1) goto LAB_140b6a795;
  }
  FUN_140b23320(param_2,lVar2);
LAB_140b6a79f:
  FUN_1414c07b0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b6a810 FUN_140b6a810 body=749 status=ok
// SIG undefined FUN_140b6a810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b6a810(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_140b2cbb0(param_2);
    if (lVar3 == 0) {
      lVar3 = param_2[0x23];
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
        if (bVar1) {
          if (*(longlong *)(lVar3 + 0x910) != 0) {
            FUN_142d1bf20(*(longlong *)(lVar3 + 0x910),lVar3 + 0x12d0);
          }
          cVar2 = FUN_142d52a00(lVar3 + 0x12d0);
          if (cVar2 != '\0') {
            if (*(longlong *)(lVar3 + 0x910) != 0) {
              FUN_142d1bf20(*(longlong *)(lVar3 + 0x910),lVar3 + 0x12d0);
            }
            local_48 = *(undefined8 *)(lVar3 + 0x12d0);
            uStack_40 = *(undefined4 *)(lVar3 + 0x12d8);
            uStack_3c = *(undefined4 *)(lVar3 + 0x12dc);
            local_38 = *(undefined8 *)(lVar3 + 0x12e0);
            uVar7 = FUN_140b5df60(param_1,param_3,0);
            FUN_142d5c380(&local_48,uVar7,0);
            if (param_4 == 0) {
              lVar3 = *(longlong *)(lVar3 + 0x168);
              if (lVar3 == 0) {
                local_70 = DAT_1468b5d98;
                puVar5 = &local_78;
                local_78 = _DAT_1468b5d90;
              }
              else {
                puVar5 = &local_88;
                local_80 = *(undefined4 *)(lVar3 + 0x228);
                local_88 = *(undefined8 *)(lVar3 + 0x220);
              }
              puVar6 = &local_68;
              local_68 = *puVar5;
              local_60 = *(undefined4 *)(puVar5 + 1);
            }
            else {
              lVar3 = *(longlong *)(param_4 + 0x168);
              if (lVar3 == 0) {
                local_88 = _DAT_1468b5d90;
                local_80 = DAT_1468b5d98;
              }
              else {
                local_80 = *(undefined4 *)(lVar3 + 0x228);
                local_88 = *(undefined8 *)(lVar3 + 0x220);
              }
              puVar6 = &local_78;
              local_78 = local_88;
              local_70 = local_80;
            }
            local_80 = 0;
            uStack_40 = *(undefined4 *)(puVar6 + 1);
            local_88 = 0;
            local_48 = *puVar6;
            uVar7 = (**(code **)(*param_2 + 0x148))(param_2);
            FUN_1405a1e30(&local_68,uVar7,*(undefined8 *)(param_1 + 0x110),&local_48,0x42480000,
                          &local_88);
            FUN_140591060(&local_68);
          }
        }
      }
    }
    else if ((param_4 != 0) && (lVar3 = FUN_140a63ba0(param_4), lVar3 != 0)) {
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
        FUN_140b46630(param_2,lVar3);
      }
    }
  }
  FUN_1414c08e0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b6ab00 FUN_140b6ab00 body=136 status=ok
// SIG undefined FUN_140b6ab00(void)

void FUN_140b6ab00(undefined8 param_1,longlong param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468698c0) {
    _Init_thread_header(&DAT_1468698c0);
    if (DAT_1468698c0 == -1) {
      FName::FName(&DAT_1468698b8,L"Sanctuary3_P",1);
      _Init_thread_footer(&DAT_1468698c0);
    }
  }
  if (*(longlong *)(param_2 + 0x18) == DAT_1468698b8) {
    FUN_140b52250(param_2);
    return;
  }
  return;
}



// FUNCTION 140b6ab90 FUN_140b6ab90 body=3002 status=ok
// SIG undefined FUN_140b6ab90(void)

void FUN_140b6ab90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 *local_a0;
  undefined8 uStack_98;
  
  plVar2 = param_6;
  if (param_6 == (longlong *)0x0) {
    return;
  }
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  local_a0 = (undefined8 *)operator_new(0x30);
  uVar3 = 0;
  uStack_ac = 0x5a;
  param_6._0_4_ = 0;
  local_b0 = 0;
  *local_a0 = local_a0;
  local_a0[1] = local_a0;
  local_a0[2] = local_a0;
  *(undefined2 *)(local_a0 + 3) = 0x101;
  puVar6 = (undefined8 *)local_a0[1];
  puVar7 = local_a0;
  if (*(char *)((longlong)local_a0[1] + 0x19) == '\0') {
    do {
      if (0.0 < *(float *)((longlong)puVar6 + 0x1c) || *(float *)((longlong)puVar6 + 0x1c) == 0.0) {
        puVar8 = (undefined8 *)*puVar6;
        puVar7 = puVar6;
      }
      else {
        puVar8 = (undefined8 *)puVar6[2];
      }
      puVar6 = puVar8;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
    if ((puVar7 == local_a0) || (0.0 < *(float *)((longlong)puVar7 + 0x1c))) goto LAB_140b6ac58;
  }
  else {
LAB_140b6ac58:
    puVar6 = (undefined8 *)operator_new(0x30);
    *puVar6 = local_a0;
    puVar6[1] = local_a0;
    puVar6[2] = local_a0;
    *(undefined2 *)(puVar6 + 3) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = param_6._0_4_;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    FUN_140b4a1f0(&local_a0,&local_b8,puVar7,(undefined4 *)((longlong)puVar6 + 0x1c),puVar6);
    puVar7 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
  }
  puVar7[4] = CONCAT44(uStack_ac,local_b0);
  *(undefined4 *)(puVar7 + 5) = 0x82;
  param_6._0_4_ = 0x3dcccccd;
  local_b0 = 0;
  uStack_ac = 0x32;
  puVar7 = (undefined8 *)local_a0[1];
  puVar6 = local_a0;
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    do {
      if (0.1 < *(float *)((longlong)puVar7 + 0x1c) || *(float *)((longlong)puVar7 + 0x1c) == 0.1) {
        puVar8 = (undefined8 *)*puVar7;
        puVar6 = puVar7;
      }
      else {
        puVar8 = (undefined8 *)puVar7[2];
      }
      puVar7 = puVar8;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
    if ((puVar6 == local_a0) || (0.1 < *(float *)((longlong)puVar6 + 0x1c))) goto LAB_140b6ad15;
  }
  else {
LAB_140b6ad15:
    puVar7 = (undefined8 *)operator_new(0x30);
    *puVar7 = local_a0;
    puVar7[1] = local_a0;
    puVar7[2] = local_a0;
    *(undefined2 *)(puVar7 + 3) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = param_6._0_4_;
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    FUN_140b4a1f0(&local_a0,&local_b8,puVar6,(undefined4 *)((longlong)puVar7 + 0x1c),puVar7);
    puVar6 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
  }
  puVar6[4] = CONCAT44(uStack_ac,local_b0);
  *(undefined4 *)(puVar6 + 5) = 0x82;
  param_6._0_4_ = 0x3e4ccccd;
  local_b0 = 0x1e;
  uStack_ac = 0x32;
  puVar7 = (undefined8 *)local_a0[1];
  puVar6 = local_a0;
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    do {
      if (0.2 < *(float *)((longlong)puVar7 + 0x1c) || *(float *)((longlong)puVar7 + 0x1c) == 0.2) {
        puVar8 = (undefined8 *)*puVar7;
        puVar6 = puVar7;
      }
      else {
        puVar8 = (undefined8 *)puVar7[2];
      }
      puVar7 = puVar8;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
    if ((puVar6 == local_a0) || (0.2 < *(float *)((longlong)puVar6 + 0x1c))) goto LAB_140b6add5;
  }
  else {
LAB_140b6add5:
    puVar7 = (undefined8 *)operator_new(0x30);
    *puVar7 = local_a0;
    puVar7[1] = local_a0;
    puVar7[2] = local_a0;
    *(undefined2 *)(puVar7 + 3) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = param_6._0_4_;
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    FUN_140b4a1f0(&local_a0,&local_b8,puVar6,(undefined4 *)((longlong)puVar7 + 0x1c),puVar7);
    puVar6 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
  }
  puVar6[4] = CONCAT44(uStack_ac,local_b0);
  *(undefined4 *)(puVar6 + 5) = 0x8c;
  param_6._0_4_ = 0x3e99999a;
  local_b0 = 0x8c;
  uStack_ac = 0x3c;
  puVar7 = (undefined8 *)FUN_140b4ed70(&local_a0,&param_6);
  uVar1 = CONCAT44(uStack_ac,local_b0);
  local_b0 = 0xb4;
  uStack_ac = 0xb4;
  *puVar7 = uVar1;
  *(undefined4 *)(puVar7 + 1) = 0x1e;
  param_6._0_4_ = 0x3ecccccd;
  puVar7 = (undefined8 *)FUN_140b4ed70(&local_a0,&param_6);
  uVar1 = CONCAT44(uStack_ac,local_b0);
  local_b0 = 0xb4;
  uStack_ac = 0xb4;
  *puVar7 = uVar1;
  *(undefined4 *)(puVar7 + 1) = 0xb4;
  param_6._0_4_ = 0x3f000000;
  puVar7 = (undefined8 *)FUN_140b4ed70(&local_a0,&param_6);
  uVar1 = CONCAT44(uStack_ac,local_b0);
  local_b0 = 0xb4;
  uStack_ac = 0xb4;
  *puVar7 = uVar1;
  *(undefined4 *)(puVar7 + 1) = 0xb4;
  param_6._0_4_ = 0x3f19999a;
  puVar7 = (undefined8 *)FUN_140b4ed70(&local_a0,&param_6);
  uVar1 = CONCAT44(uStack_ac,local_b0);
  local_b0 = 0x96;
  uStack_ac = 100;
  *puVar7 = uVar1;
  *(undefined4 *)(puVar7 + 1) = 0xb4;
  param_6._0_4_ = 0x3f333333;
  puVar7 = (undefined8 *)FUN_140b4ed70(&local_a0,&param_6);
  uVar1 = CONCAT44(uStack_ac,local_b0);
  local_b0 = 0x7d;
  uStack_ac = 0x50;
  *puVar7 = uVar1;
  *(undefined4 *)(puVar7 + 1) = 0x50;
  param_6._0_4_ = 0x3f4ccccd;
  puVar7 = (undefined8 *)FUN_140b4ed70(&local_a0,&param_6);
  uVar1 = CONCAT44(uStack_ac,local_b0);
  local_b0 = 0;
  uStack_ac = 0x32;
  *puVar7 = uVar1;
  *(undefined4 *)(puVar7 + 1) = 0x82;
  param_6._0_4_ = 0x3f666666;
  puVar7 = (undefined8 *)FUN_140b4ed70(&local_a0,&param_6);
  uVar1 = CONCAT44(uStack_ac,local_b0);
  local_b0 = 0;
  *puVar7 = uVar1;
  *(undefined4 *)(puVar7 + 1) = 0x82;
  param_6._0_4_ = 0x3f800000;
  uStack_ac = 0x5a;
  puVar7 = (undefined8 *)FUN_140b4ed70(&local_a0,&param_6);
  uVar4 = 0;
  uVar5 = 0;
  *puVar7 = CONCAT44(uStack_ac,local_b0);
  *(undefined4 *)(puVar7 + 1) = 0x82;
  fVar12 = (float)(**(code **)(*plVar2 + 8))(plVar2);
  fVar12 = _guard_xfg_dispatch_icall_nop(fVar12,1.0);
  fVar13 = _guard_xfg_dispatch_icall_nop(fVar12,0.1);
  fVar13 = fVar13 * 10.0;
  if (fVar12 < 0.0) {
    if (0.1 <= fVar12) goto LAB_140b6b0a7;
    if (0.2 <= fVar12) goto LAB_140b6b147;
    if (0.3 <= fVar12) goto LAB_140b6b1ed;
    if (0.4 <= fVar12) goto LAB_140b6b293;
    if (0.5 <= fVar12) goto LAB_140b6b339;
    if (0.6 <= fVar12) goto LAB_140b6b3df;
    if (0.7 <= fVar12) goto LAB_140b6b48d;
    if (0.8 <= fVar12) goto LAB_140b6b53b;
    if (fVar12 < 0.9) goto LAB_140b6b6ae;
LAB_140b6b5e9:
    uVar3 = 0;
    if (1.0 < fVar12) goto LAB_140b6b6ae;
    param_6._0_4_ = 0x3f800000;
    local_b8 = 0x3f666666;
    puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
    uVar3 = *puVar9;
    puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
    uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
    param_6._0_4_ = 0x3f800000;
    local_b8 = 0x3f666666;
    lVar10 = FUN_140b4ed70(&local_a0,&param_6);
    lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
    uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar10 + 4),fVar13);
    param_6._0_4_ = 0x3f800000;
    local_b8 = 0x3f666666;
  }
  else if (0.1 <= fVar12) {
LAB_140b6b0a7:
    if (0.2 <= fVar12) {
LAB_140b6b147:
      if (0.3 <= fVar12) {
LAB_140b6b1ed:
        if (0.4 <= fVar12) {
LAB_140b6b293:
          if (0.5 <= fVar12) {
LAB_140b6b339:
            if (0.6 <= fVar12) {
LAB_140b6b3df:
              if (0.7 <= fVar12) {
LAB_140b6b48d:
                if (0.8 <= fVar12) {
LAB_140b6b53b:
                  if (0.9 <= fVar12) goto LAB_140b6b5e9;
                  param_6._0_4_ = 0x3f666666;
                  local_b8 = 0x3f4ccccd;
                  puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
                  uVar3 = *puVar9;
                  puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
                  uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
                  param_6._0_4_ = 0x3f666666;
                  local_b8 = 0x3f4ccccd;
                  lVar10 = FUN_140b4ed70(&local_a0,&param_6);
                  lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
                  uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),
                                        *(undefined4 *)(lVar10 + 4),fVar13);
                  param_6._0_4_ = 0x3f666666;
                  local_b8 = 0x3f4ccccd;
                }
                else {
                  param_6._0_4_ = 0x3f4ccccd;
                  local_b8 = 0x3f333333;
                  puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
                  uVar3 = *puVar9;
                  puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
                  uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
                  param_6._0_4_ = 0x3f4ccccd;
                  local_b8 = 0x3f333333;
                  lVar10 = FUN_140b4ed70(&local_a0,&param_6);
                  lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
                  uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),
                                        *(undefined4 *)(lVar10 + 4),fVar13);
                  param_6._0_4_ = 0x3f4ccccd;
                  local_b8 = 0x3f333333;
                }
              }
              else {
                param_6._0_4_ = 0x3f333333;
                local_b8 = 0x3f19999a;
                puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
                uVar3 = *puVar9;
                puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
                uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
                param_6._0_4_ = 0x3f333333;
                local_b8 = 0x3f19999a;
                lVar10 = FUN_140b4ed70(&local_a0,&param_6);
                lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
                uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),
                                      *(undefined4 *)(lVar10 + 4),fVar13);
                param_6._0_4_ = 0x3f333333;
                local_b8 = 0x3f19999a;
              }
            }
            else {
              param_6._0_4_ = 0x3f19999a;
              local_b8 = 0x3f000000;
              puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
              uVar3 = *puVar9;
              puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
              uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
              param_6._0_4_ = 0x3f19999a;
              local_b8 = 0x3f000000;
              lVar10 = FUN_140b4ed70(&local_a0,&param_6);
              lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
              uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar10 + 4),
                                    fVar13);
              param_6._0_4_ = 0x3f19999a;
              local_b8 = 0x3f000000;
            }
          }
          else {
            param_6._0_4_ = 0x3f000000;
            local_b8 = 0x3ecccccd;
            puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
            uVar3 = *puVar9;
            puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
            uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
            param_6._0_4_ = 0x3f000000;
            local_b8 = 0x3ecccccd;
            lVar10 = FUN_140b4ed70(&local_a0,&param_6);
            lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
            uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar10 + 4),
                                  fVar13);
            param_6._0_4_ = 0x3f000000;
            local_b8 = 0x3ecccccd;
          }
        }
        else {
          param_6._0_4_ = 0x3ecccccd;
          local_b8 = 0x3e99999a;
          puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
          uVar3 = *puVar9;
          puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
          uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
          param_6._0_4_ = 0x3ecccccd;
          local_b8 = 0x3e99999a;
          lVar10 = FUN_140b4ed70(&local_a0,&param_6);
          lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
          uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar10 + 4),
                                fVar13);
          param_6._0_4_ = 0x3ecccccd;
          local_b8 = 0x3e99999a;
        }
      }
      else {
        param_6._0_4_ = 0x3e99999a;
        local_b8 = 0x3e4ccccd;
        puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
        uVar3 = *puVar9;
        puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
        uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
        param_6._0_4_ = 0x3e99999a;
        local_b8 = 0x3e4ccccd;
        lVar10 = FUN_140b4ed70(&local_a0,&param_6);
        lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
        uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar10 + 4),fVar13
                             );
        param_6._0_4_ = 0x3e99999a;
        local_b8 = 0x3e4ccccd;
      }
    }
    else {
      param_6._0_4_ = 0x3e4ccccd;
      local_b8 = 0x3dcccccd;
      puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
      uVar3 = *puVar9;
      puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
      uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
      param_6._0_4_ = 0x3e4ccccd;
      local_b8 = 0x3dcccccd;
      lVar10 = FUN_140b4ed70(&local_a0,&param_6);
      lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
      uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar10 + 4),fVar13);
      param_6._0_4_ = 0x3e4ccccd;
      local_b8 = 0x3dcccccd;
    }
  }
  else {
    param_6._0_4_ = 0x3dcccccd;
    local_b8 = 0;
    puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&param_6);
    uVar3 = *puVar9;
    puVar9 = (undefined4 *)FUN_140b4ed70(&local_a0,&local_b8);
    uVar3 = FUN_140b55010(param_1,*puVar9,uVar3,fVar13);
    param_6._0_4_ = 0x3dcccccd;
    local_b8 = 0;
    lVar10 = FUN_140b4ed70(&local_a0,&param_6);
    lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
    uVar4 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar10 + 4),fVar13);
    param_6._0_4_ = 0x3dcccccd;
    local_b8 = 0;
  }
  lVar10 = FUN_140b4ed70(&local_a0,&param_6);
  lVar11 = FUN_140b4ed70(&local_a0,&local_b8);
  uVar5 = FUN_140b55010(param_1,*(undefined4 *)(lVar11 + 8),*(undefined4 *)(lVar10 + 8),fVar13);
LAB_140b6b6ae:
  FUN_140b71410(param_1,param_2,uVar3,uVar4,uVar5,0x3f800000);
  FUN_140b54f00(param_1,param_3,param_4,param_5,uVar3,uVar4,uVar5,0x3f800000);
  std::
  _Tree<std::_Tmap_traits<void_*,OpenMesh::basic_multiplex_target_*,std::less<void_*>,std::allocator<std::pair<void_*_const,OpenMesh::basic_multiplex_target_*>_>,0>_>
  ::
  ~_Tree<std::_Tmap_traits<void_*,OpenMesh::basic_multiplex_target_*,std::less<void_*>,std::allocator<std::pair<void_*_const,OpenMesh::basic_multiplex_target_*>_>,0>_>
            (&local_a0);
  return;
}



// FUNCTION 140b6b750 FUN_140b6b750 body=426 status=ok
// SIG undefined FUN_140b6b750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b6b750(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if ((param_2 != (longlong *)0x0) &&
     (plVar2 = (longlong *)FUN_140c46a10(param_2,*(undefined8 *)(param_1 + 0x130)),
     plVar2 != (longlong *)0x0)) {
    lVar1 = param_2[0x2d];
    local_38 = 0;
    local_30 = 0;
    if (lVar1 == 0) {
      local_58 = _DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
    }
    else {
      local_58 = *(undefined8 *)(lVar1 + 0x220);
      local_50 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_20 = local_50;
    local_28 = local_58;
    uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    puVar5 = &local_38;
    FUN_1405a1e30(&local_58,uVar3,*(undefined8 *)(param_1 + 0x108),&local_28,
                  CONCAT44(uVar4,0x42480000),puVar5);
    uVar4 = (undefined4)((ulonglong)puVar5 >> 0x20);
    FUN_140591060(&local_58);
    local_20 = DAT_1468b5da8;
    local_28 = DAT_1468b5da0;
    local_50 = 0;
    local_30 = 0;
    local_38 = 0;
    uVar3 = (**(code **)(*plVar2 + 0x900))(plVar2,1,0);
    FUN_1424600f0(*(undefined8 *)(param_1 + 0x110),uVar3,*(undefined8 *)(param_1 + 0x118),&local_38,
                  &local_28,CONCAT44(uVar4,2),1,1,1,0);
  }
  return;
}



// FUNCTION 140b6b900 FUN_140b6b900 body=568 status=ok
// SIG undefined FUN_140b6b900(void)

undefined8 FUN_140b6b900(longlong param_1,byte param_2,float param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  
  fVar9 = 0.0;
  uVar10 = 0;
  if (param_2 < 0x10) {
    plVar4 = *(longlong **)(param_1 + 0x588 + (ulonglong)param_2 * 8);
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  *(byte *)(param_1 + 0x9b0) = param_2;
  if ((*(longlong *)(param_1 + 0x578) != 0) && (plVar4 != (longlong *)0x0)) {
    FUN_1423b5fe0(*(longlong *)(param_1 + 0x578),plVar4,0);
    fVar7 = 1.0;
    uVar6 = (**(code **)(*plVar4 + 0x280))(plVar4);
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
    fVar8 = (float)uVar6;
    if ((0.0 < param_3) && ((0.0 < fVar8 && (param_3 < fVar8)))) {
      fVar7 = fVar8 / param_3;
    }
    fVar9 = fVar8 / fVar7;
    if ((byte)(param_2 - 5) < 3) {
      fVar7 = -fVar7;
    }
    FUN_1423bafe0(*(undefined8 *)(param_1 + 0x578),fVar7);
    lVar3 = FUN_1423b0890(*(undefined8 *)(param_1 + 0x578));
    if (lVar3 != 0) {
      if (2 < (byte)(param_2 - 5)) {
        fVar8 = 0.0;
      }
      FUN_1422b40f0(lVar3,fVar8,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x578) + 0x358))
              (*(longlong **)(param_1 + 0x578),param_2 != 0);
    FUN_1423be6d0(*(undefined8 *)(param_1 + 0x578),0,0);
    (**(code **)(**(longlong **)(param_1 + 0x578) + 0x960))(*(longlong **)(param_1 + 0x578),0);
    FUN_14239b420(*(undefined8 *)(param_1 + 0x578),0,0,0);
    lVar3 = *(longlong *)(param_1 + 0x940);
    lVar5 = (longlong)*(int *)(param_1 + 0x948) * 0x30 + lVar3;
    for (; lVar3 != lVar5; lVar3 = lVar3 + 0x30) {
      if ((*(longlong *)(lVar3 + 8) != 0) &&
         (cVar2 = FBodyInstance::IsValidBodyInstance(*(longlong *)(lVar3 + 8) + 0x3b0),
         cVar2 != '\0')) {
        FUN_1426a89c0(*(longlong *)(lVar3 + 8) + 0x3b0,*(longlong *)(lVar3 + 8) + 0x210,1);
        lVar1 = *(longlong *)(lVar3 + 8);
        local_68 = *(undefined4 *)(lVar1 + 0x230);
        local_64 = *(undefined4 *)(lVar1 + 0x234);
        local_60 = *(undefined4 *)(lVar1 + 0x238);
        FUN_1426aef60(lVar1 + 0x3b0,&local_68,0);
      }
    }
  }
  FUN_140b76940(param_1);
  return CONCAT44(uVar10,fVar9);
}



// FUNCTION 140b6bb40 FUN_140b6bb40 body=94 status=ok
// SIG undefined FUN_140b6bb40(void)

void FUN_140b6bb40(longlong param_1)

{
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x9b0) != '\r') {
    if ((*(longlong *)(param_1 + 0x970) != 0) && (*(longlong *)(param_1 + 0x8c8) != 0)) {
      FUN_1405a3150(*(longlong *)(param_1 + 0x970),local_28,*(longlong *)(param_1 + 0x8c8),0);
      FUN_140591060(local_28);
    }
    FUN_140b6b900(param_1,0xd,0xbf800000);
    return;
  }
  return;
}



// FUNCTION 140b6bba0 FUN_140b6bba0 body=521 status=ok
// SIG undefined FUN_140b6bba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b6bba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_104 [8];
  undefined1 local_fc [8];
  undefined1 local_f4 [28];
  longlong local_d8 [5];
  undefined1 local_b0;
  byte local_af;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar2 = FWeakObjectPtr::Get(param_2);
  if (lVar2 != 0) {
    local_af = local_af & 0xfe;
    local_58 = 0;
    uStack_50 = 0x3f80000000000000;
    local_38 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_d8[4] = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_48 = 0x3f800000;
    local_44 = 0x3f800000;
    local_40 = 0;
    local_34 = 0x3f800000;
    local_b0 = 0x4c;
    _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
    local_15c = 0x3f800000;
    FWeakObjectPtr::operator=(local_fc,param_1);
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 == 0) {
      local_178 = _DAT_1468b5d90;
      local_170 = DAT_1468b5d98;
    }
    else {
      local_178 = *(undefined8 *)(lVar1 + 0x220);
      local_170 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_154 = local_178;
    local_148 = local_178;
    local_14c = local_170;
    local_140 = local_170;
    local_13c = DAT_1464aa798;
    local_130 = DAT_1464aa798;
    local_134 = DAT_1464aa7a0;
    local_128 = DAT_1464aa7a0;
    FWeakObjectPtr::operator=(local_f4,*(undefined8 *)(param_1 + 0x578));
    FWeakObjectPtr::operator=(local_104,*(undefined8 *)(param_1 + 0x8c0));
    local_188 = local_d8;
    local_180 = 0;
    FUN_142d68ea0(lVar2,param_1,local_168,0);
    if (local_68 != 0) {
      plVar3 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar3 = local_78;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_d8[2] != 0) {
      FMemory::Free();
    }
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_1414e6520(param_1);
  return;
}



// FUNCTION 140b6bdb0 FUN_140b6bdb0 body=650 status=ok
// SIG undefined FUN_140b6bdb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b6bdb0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  lVar2 = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x208);
  }
  if (lVar2 != 0) {
    FWeakObjectPtr::operator=(&local_d8,*(undefined8 *)(lVar2 + 0x148));
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    local_c8 = FUN_140b6bba0;
    uStack_c0 = 0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar1 == (longlong *)0x0) {
      if (((local_e0 != 0) && (local_e8 != (longlong *)0x0)) &&
         ((**(code **)(*local_e8 + 0x28))(local_e8,0), local_e8 != (longlong *)0x0)) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
    }
    else {
      *plVar1 = (longlong)&PTR_FUN_144230918;
      FWeakObjectPtr::operator=(plVar1 + 1,param_1);
      *(undefined4 *)(plVar1 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar1 + 0x14) = local_c8._4_4_;
      *(undefined4 *)(plVar1 + 3) = uStack_c0;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_bc;
      *(undefined4 *)(plVar1 + 4) = local_d8;
      *(undefined4 *)((longlong)plVar1 + 0x24) = local_d4;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[5] = lVar2;
      *plVar1 = (longlong)&PTR_FUN_144230960;
      FUN_140a884e0(plVar1,&local_e8);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_d0 = 0;
    uVar3 = AActor::GetWorldTimerManager(param_1);
    local_b8 = 0;
    local_b0 = 0;
    if ((local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
      (**(code **)(*local_e8 + 0x30))(local_e8,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_f0 = 0xbf800000;
    local_f8 = 0;
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,&local_d0,&local_b8,param_3);
    if (local_58 != 0) {
      plVar1 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar1 = local_68;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (local_e0 != 0) {
      if (local_e8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_e8 + 0x28))(local_e8,0);
      if (local_e8 != (longlong *)0x0) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
      local_e0 = 0;
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  return;
}



// FUNCTION 140b6c040 FUN_140b6c040 body=941 status=ok
// SIG undefined FUN_140b6c040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b6c040(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined8 in_stack_ffffffffffffff30;
  undefined8 *puVar13;
  undefined4 uVar14;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) && (param_3 != 0)) {
    plVar4 = (longlong *)FUN_140b28030(param_2,local_res20);
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      lVar10 = plVar4[0x1f];
      if (lVar10 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar10 = plVar4[0x1f];
        if (lVar10 == 0) {
          return;
        }
      }
      if (*(longlong *)(param_1 + 0x230) != 0) {
        plVar5 = (longlong *)UDungeonEventListener::GetPrivateStaticClass();
        plVar4 = *(longlong **)(param_1 + 0x230);
        for (plVar1 = plVar4; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
          if (plVar1 == plVar5) goto LAB_140b6c110;
        }
      }
      plVar4 = (longlong *)0x0;
LAB_140b6c110:
      lVar9 = plVar4[0x1f];
      if (lVar9 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar9 = plVar4[0x1f];
      }
      if (lVar9 != 0) {
        lVar6 = UDungeonEventListener::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar8 = *(undefined8 *)(param_2 + 0x118);
          uVar7 = FUN_142e11920(lVar9,lVar10);
          uVar11 = CONCAT44(uVar12,0x42c80000);
          FUN_142db83d0(uVar8,uVar7,1,0x4110000041800000,uVar11,4,1,1,0,
                        in_stack_ffffffffffffff50 & 0xffffffffffffff00,0,0,1);
          uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
          lVar6 = *(longlong *)(param_2 + 0x118);
          local_60 = 0;
          lVar2 = *(longlong *)(lVar6 + 0x168);
          local_68 = 0;
          if (lVar2 == 0) {
            local_88 = _DAT_1468b5d90;
            local_80 = DAT_1468b5d98;
          }
          else {
            local_88 = *(undefined8 *)(lVar2 + 0x220);
            local_80 = *(undefined4 *)(lVar2 + 0x228);
          }
          local_58 = local_88;
          local_50 = local_80;
          uVar8 = FUN_142e11d50(lVar9,lVar10);
          puVar13 = &local_68;
          FUN_1405a1e30(&local_88,lVar6,uVar8,&local_58,CONCAT44(uVar12,0x42480000),puVar13);
          uVar14 = (undefined4)((ulonglong)puVar13 >> 0x20);
          FUN_140591060(&local_88);
        }
      }
      if (*(longlong *)(param_1 + 0x240) != 0) {
        plVar5 = (longlong *)UDungeonEventListener::GetPrivateStaticClass();
        plVar4 = *(longlong **)(param_1 + 0x240);
        for (plVar1 = plVar4; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
          if (plVar1 == plVar5) goto LAB_140b6c2e2;
        }
      }
      plVar4 = (longlong *)0x0;
LAB_140b6c2e2:
      lVar9 = plVar4[0x1f];
      if (lVar9 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar9 = plVar4[0x1f];
        if (lVar9 == 0) {
          return;
        }
      }
      lVar6 = UDungeonEventListener::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar8 = *(undefined8 *)(param_3 + 0x168);
        local_58 = DAT_1468b5da0;
        local_50 = DAT_1468b5da8;
        local_80 = 0;
        local_68 = 0;
        local_60 = 0;
        uVar7 = FUN_142e11920(lVar9,lVar10);
        FUN_1424600f0(uVar7,uVar8,*(undefined8 *)(param_1 + 0x238),&local_68,&local_58,
                      CONCAT44(uVar14,2),1,1,1,0);
      }
    }
  }
  return;
}



// FUNCTION 140b6c3f0 FUN_140b6c3f0 body=27 status=ok
// SIG undefined FUN_140b6c3f0(void)

void FUN_140b6c3f0(longlong param_1)

{
  FUN_1422383f0();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80000000;
  return;
}



// FUNCTION 140b6c410 FUN_140b6c410 body=53 status=ok
// SIG undefined FUN_140b6c410(void)

void FUN_140b6c410(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1422384a0();
  uVar1 = FUN_1414e0f70();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  }
  return;
}



// FUNCTION 140b6c450 FUN_140b6c450 body=182 status=ok
// SIG undefined FUN_140b6c450(void)

void FUN_140b6c450(undefined8 param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res10;
  undefined4 local_res14;
  
  UObject::PostLoad();
  FWeakObjectPtr::operator=(&local_res10,param_1);
  lVar2 = DAT_1468697f8;
  lVar6 = DAT_1468697f8 + (longlong)DAT_146869800 * 8;
  lVar5 = DAT_1468697f8;
  do {
    if (lVar5 == lVar6) {
LAB_140b6c4b8:
      iVar3 = DAT_146869800;
      lVar6 = (longlong)DAT_146869800;
      DAT_146869800 = DAT_146869800 + 1;
      if (DAT_146869804 < DAT_146869800) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1468697f8,iVar3);
      }
      puVar1 = (undefined4 *)(DAT_1468697f8 + lVar6 * 8);
      *puVar1 = local_res10;
      puVar1[1] = local_res14;
      return;
    }
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res10);
    if (cVar4 != '\0') {
      if ((int)(lVar5 - lVar2 >> 3) != -1) {
        return;
      }
      goto LAB_140b6c4b8;
    }
    lVar5 = lVar5 + 8;
  } while( true );
}



// FUNCTION 140b6c510 FUN_140b6c510 body=200 status=ok
// SIG undefined FUN_140b6c510(void)

void FUN_140b6c510(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    lVar2 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b6c561;
  }
  lVar4 = 0;
LAB_140b6c561:
  *(longlong *)(param_1 + 0x6c8) = lVar4;
  if (lVar4 != 0) {
    uVar3 = APlayerState::GetPrivateStaticClass();
    lVar4 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x6c8),uVar3);
    if (lVar4 != 0) {
      lVar2 = APlayerState::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140b5fbb0(param_1,lVar4);
      }
    }
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x7fffffff;
  return;
}



// FUNCTION 140b6c5e0 FUN_140b6c5e0 body=537 status=ok
// SIG undefined FUN_140b6c5e0(void)

void FUN_140b6c5e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  cVar7 = *(char *)(param_1 + 0x581);
  lVar10 = 0x920;
  lVar12 = lVar10;
  if ((cVar7 != '\x01') && (lVar12 = 0x910, cVar7 == '\x02')) {
    lVar12 = 0x930;
  }
  iVar4 = *(int *)(lVar12 + 8 + param_1);
  plVar1 = (longlong *)(lVar12 + param_1);
  iVar8 = iVar4 + -1;
  if (-1 < iVar8) {
    lVar9 = (longlong)iVar8 << 6;
    lVar11 = (longlong)iVar4 << 6;
    lVar12 = lVar9;
    do {
      lVar3 = *plVar1;
      if (((((1 < (byte)(*(char *)(lVar9 + 0x35 + lVar3) - 3U)) &&
            (*(char *)(lVar9 + 0x34 + lVar3) == '\0')) &&
           ((*(longlong *)(lVar9 + lVar3) == 0 ||
            ((*(longlong *)(lVar9 + 8 + lVar3) == 0 || (*(longlong *)(lVar9 + 0x10 + lVar3) == 0))))
           )) && (-1 < iVar8)) && (iVar4 = (int)plVar1[1], iVar8 < iVar4)) {
        iVar6 = (iVar4 - iVar8) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar12 + lVar3),(void *)(lVar11 + lVar3),(longlong)iVar6 << 6);
          iVar4 = (int)plVar1[1];
        }
        *(int *)(plVar1 + 1) = iVar4 + -1;
        TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      lVar11 = lVar11 + -0x40;
      lVar12 = lVar12 + -0x40;
      lVar9 = lVar9 + -0x40;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    cVar7 = *(char *)(param_1 + 0x581);
  }
  if ((cVar7 != '\x01') && (lVar10 = 0x910, cVar7 == '\x02')) {
    lVar10 = 0x930;
  }
  plVar1 = (longlong *)(lVar10 + param_1);
  iVar4 = *(int *)(param_1 + 0x560);
  if (cVar7 != '\x02') {
    iVar4 = *(int *)(param_1 + 0x560) - (int)plVar1[1];
  }
  iVar6 = 0;
  iVar8 = iVar6;
  if (0 < iVar4) {
    do {
      iVar2 = (int)plVar1[1];
      *(int *)(plVar1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar2);
      }
      iVar8 = iVar8 + 1;
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x40 + *plVar1);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      puVar5[5] = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      *(undefined2 *)((longlong)puVar5 + 0x34) = 0x300;
      puVar5[7] = 0xffffffffffffffff;
    } while (iVar8 < iVar4);
  }
  if (0 < *(int *)(param_1 + 0x558)) {
    do {
      iVar4 = (int)plVar1[1];
      *(int *)(plVar1 + 1) = iVar4 + 1;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar4);
      }
      iVar6 = iVar6 + 1;
      puVar5 = (undefined8 *)((longlong)iVar4 * 0x40 + *plVar1);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      puVar5[5] = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      *(undefined2 *)((longlong)puVar5 + 0x34) = 0x400;
      puVar5[7] = 0xffffffffffffffff;
    } while (iVar6 < *(int *)(param_1 + 0x558));
  }
  FUN_140b55de0(param_1);
  FUN_140b76940(param_1);
  return;
}



// FUNCTION 140b6c800 FUN_140b6c800 body=280 status=ok
// SIG undefined FUN_140b6c800(void)

void FUN_140b6c800(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 local_res8 [8];
  longlong local_28;
  undefined8 local_20;
  
  if ((*param_1 != '\0') && (lVar1 = FUN_140b5d100(param_2), lVar1 != 0)) {
    FUN_140c3c4b0(lVar1);
    FUN_140c5b630(lVar1);
    lVar2 = FMistWorldUtils::GetDebugEntityDrawSystem(param_2);
    uVar3 = 0;
    if (lVar2 != 0) {
      local_res8[0] = 0;
      lVar2 = FUN_142f416d0(lVar2,param_2,local_res8);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x78);
      }
    }
    FUN_140c530e0(lVar1,uVar3);
    FUN_140c32600(lVar1);
    local_28 = 0;
    local_20 = 0;
    FUN_140c44970(lVar1,&local_28);
    FUN_140b63030(param_1,&local_28,param_1 + 0x20);
    if ((int)local_20 != 0) {
      plVar4 = (longlong *)(local_28 + 0x18);
      iVar5 = (int)local_20;
      do {
        if (plVar4[2] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        FUN_140b4e2b0(plVar4 + -3);
        plVar4 = plVar4 + 7;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140b6c920 FUN_140b6c920 body=87 status=ok
// SIG undefined FUN_140b6c920(void)

void FUN_140b6c920(undefined8 param_1,byte *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  
  if ((*param_2 & 0x10) != 0) {
    *(undefined1 *)(param_4 + 0xc) = 0;
    fVar1 = (float)FUN_142c98860(param_2 + 8,param_3);
    if (0.0 < fVar1) {
      FUN_140b72d20(param_1,param_3,param_4,fVar1);
    }
  }
  return;
}



// FUNCTION 140b6c980 FUN_140b6c980 body=52 status=ok
// SIG undefined FUN_140b6c980(void)

void FUN_140b6c980(longlong param_1,longlong param_2)

{
  undefined1 local_28 [40];
  
  if ((*(longlong *)(param_1 + 0x970) != 0) && (param_2 != 0)) {
    FUN_1405a3150(*(longlong *)(param_1 + 0x970),local_28,param_2,0);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 140b6c9c0 FUN_140b6c9c0 body=1550 status=ok
// SIG undefined FUN_140b6c9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140b6c9c0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined1 *local_1b0;
  float local_1a8;
  char local_198 [4];
  int local_194;
  undefined1 local_190 [8];
  longlong local_188;
  longlong local_178;
  undefined8 uStack_170;
  int local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  char *local_108;
  int *local_100;
  int *local_f8;
  int *local_f0;
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  fVar14 = *(float *)(param_2 + 0x790) - *(float *)(param_1 + 0xc0);
  if ((*(float *)(param_1 + 0x38) < 0.0) || (fVar14 < *(float *)(param_1 + 0x38))) {
    local_198[0] = '\0';
  }
  else {
    local_198[0] = '\x01';
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    iVar11 = 0;
  }
  else {
    local_160 = 0;
    local_158 = 0;
    local_res18[0] = param_3;
    local_res20[0] = param_4;
    if (*(int *)(param_1 + 0x60) != 0) {
      local_1b0 = local_190;
      uStack_170 = 0;
      local_1b8 = (undefined8 *)((ulonglong)local_1b8 & 0xffffffffffffff00);
      local_178 = param_2;
      FUN_142c90ad0(param_1 + 0x58,&local_160,param_2,&local_178);
    }
    local_108 = local_198;
    iVar11 = *(int *)(param_1 + 0xd0) + -1;
    local_100 = local_res18;
    local_194 = 0;
    local_f8 = &local_194;
    local_f0 = local_res20;
    if (-1 < iVar11) {
      lVar12 = (longlong)iVar11 * 0xe0;
      do {
        local_188 = lVar12;
        local_168 = iVar11;
        if ((local_198[0] == '\0') && (local_res20[0] <= local_res18[0] + local_194)) break;
        lVar1 = lVar12 + *(longlong *)(param_1 + 200);
        lVar8 = (longlong)iVar11 * 0xe0 + *(longlong *)(param_1 + 200);
        if ((*(char *)(param_1 + 0x20) == '\0') &&
           (cVar2 = FUN_140b8d350(param_2,lVar8), cVar2 != '\0')) {
          if (*(char *)(lVar1 + 0x60) == '\0') {
            *(undefined1 *)(lVar1 + 0x60) = 1;
            fVar13 = *(float *)(param_1 + 0x34);
            if (0.0 <= fVar13) {
              fVar13 = fVar13 - fVar14;
              if (fVar13 <= 0.0) {
                fVar13 = 0.0;
              }
              if (*(char *)(param_1 + 0x31) != '\0') {
                iVar4 = rand();
                fVar13 = (float)iVar4 * 3.051851e-05 * fVar13;
              }
            }
            local_1a8 = fVar13;
            if ((*(char *)(param_1 + 0x30) == '\0') || (local_1a8 <= 0.0)) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
            local_130 = *(undefined4 *)(param_1 + 0xf0);
            local_12c = *(undefined4 *)(param_1 + 0xf4);
            local_128 = *(undefined4 *)(param_1 + 0xf8);
            local_1b0 = (undefined1 *)CONCAT71(local_1b0._1_7_,uVar3);
            local_1b8 = &local_148;
            local_148 = 0;
            local_140 = 0;
            local_13c = 0;
            local_134 = 0;
            lVar5 = FUN_143018960(lVar8,param_2,&local_130,&local_13c);
            lVar8 = 0;
            if (lVar5 != 0) {
              lVar8 = ATrap::GetActivationShapeComponent(lVar5);
            }
            lVar6 = FUN_140b823d0(param_2);
            lVar12 = local_188;
            if (((lVar5 != 0) && (lVar8 != 0)) && (lVar6 != 0)) {
              local_194 = local_194 + 1;
              FUN_140b8ce60(lVar5,lVar6);
              FUN_140b8ce10(*(undefined8 *)(lVar5 + 0x568),lVar6);
              FUN_140b5eb50(param_1,param_2,lVar5);
              FUN_142ff3000(lVar8,lVar1 + 0x68);
              local_b8 = (longlong *)0x0;
              local_a8 = 0;
              puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
              if (puVar7 != (undefined8 *)0x0) {
                puVar7[1] = lVar1;
                *puVar7 = &PTR_FUN_143f77b70;
              }
              local_e8[0] = FUN_140b550e0;
              FUN_140b7fe80(param_2,local_e8);
              if (local_a8 != 0) {
                plVar9 = local_d8;
                if (local_b8 != (longlong *)0x0) {
                  plVar9 = local_b8;
                }
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9,0);
                }
              }
              lVar12 = local_188;
              if (local_b8 != (longlong *)0x0) {
                FMemory::Free();
                lVar12 = local_188;
              }
            }
          }
          if ((local_198[0] == '\0') && (local_res20[0] <= local_res18[0] + local_194))
          goto LAB_140b6cefe;
          iVar4 = *(int *)(lVar1 + 0xd8);
          if (0 < iVar4) {
            do {
              iVar4 = *(int *)(lVar1 + 0xd8);
              local_150 = *(undefined4 *)(*(longlong *)(lVar1 + 0xd0) + -8 + (longlong)iVar4 * 8);
              local_14c = *(undefined4 *)(*(longlong *)(lVar1 + 0xd0) + -4 + (longlong)iVar4 * 8);
              *(int *)(lVar1 + 0xd8) = iVar4 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar1 + 0xd0);
              lVar8 = FWeakObjectPtr::Get(&local_150);
              if (lVar8 != 0) {
                fVar13 = *(float *)(param_1 + 0x34);
                if (0.0 <= fVar13) {
                  fVar13 = fVar13 - fVar14;
                  if (fVar13 <= 0.0) {
                    fVar13 = 0.0;
                  }
                  if (*(char *)(param_1 + 0x31) != '\0') {
                    iVar4 = rand();
                    fVar13 = (float)iVar4 * 3.051851e-05 * fVar13;
                  }
                }
                if ((*(char *)(param_1 + 0x30) == '\0') || (fVar13 <= 0.0)) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = 1;
                }
                local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,fVar13);
                lVar8 = FUN_140b7d900(param_2,lVar1 + 0x68,lVar8,uVar10);
                if (lVar8 != 0) {
                  local_194 = local_194 + 1;
                  FUN_140b5eb50(param_1,param_2,lVar8);
                }
                cVar2 = FUN_140b4f4a0(&local_108);
                if (cVar2 == '\0') break;
              }
            } while (0 < *(int *)(lVar1 + 0xd8));
            goto LAB_140b6cefe;
          }
        }
        else {
          fVar13 = *(float *)(param_1 + 0x34);
          if (0.0 <= fVar13) {
            fVar13 = fVar13 - fVar14;
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
            if (*(char *)(param_1 + 0x31) != '\0') {
              iVar4 = rand();
              fVar13 = (float)iVar4 * 3.051851e-05 * fVar13;
            }
          }
          local_1a8 = fVar13;
          if ((*(char *)(param_1 + 0x30) == '\0') || (local_1a8 <= 0.0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          local_178 = *(longlong *)(param_1 + 0xf0);
          local_1b0 = (undefined1 *)CONCAT71(local_1b0._1_7_,uVar3);
          local_1b8 = &local_124;
          uStack_170 = CONCAT44(uStack_170._4_4_,*(undefined4 *)(param_1 + 0xf8));
          local_124 = 0;
          local_11c = 0;
          local_118 = 0;
          local_110 = 0;
          lVar8 = FUN_143018960(lVar8,param_2,&local_178,&local_118);
          if (lVar8 != 0) {
            if ((*(char *)(param_1 + 0x20) == '\x02') && (*(longlong *)(param_1 + 0x28) != 0)) {
              FUN_140b8ce10(*(undefined8 *)(lVar8 + 0x568));
              FUN_140b8ce60(lVar8,*(undefined8 *)(param_1 + 0x28));
            }
            local_194 = local_194 + 1;
            FUN_140b5eb50(param_1,param_2,lVar8);
          }
LAB_140b6cefe:
          iVar4 = *(int *)(lVar1 + 0xd8);
        }
        if (iVar4 == 0) {
          FUN_140b6fdf0(param_1 + 200,iVar11,1);
        }
        lVar12 = lVar12 + -0xe0;
        iVar11 = iVar11 + -1;
        local_188 = lVar12;
      } while (0 < local_168);
    }
    if (*(int *)(param_1 + 0xd0) == 0) {
      *(undefined1 *)(param_1 + 0xbc) = 0;
    }
    if ((int)local_158 != 0) {
      FUN_142ca9970(&local_160,1);
    }
    iVar11 = local_194;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_160);
  }
  return iVar11;
}



// FUNCTION 140b6cfd0 FUN_140b6cfd0 body=602 status=ok
// SIG undefined FUN_140b6cfd0(void)

int FUN_140b6cfd0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  
  if (*param_1 != 0) {
    iVar8 = *(int *)(*param_1 + 0xc);
    if (iVar8 < (int)DAT_1469e91c4) {
      uVar7 = iVar8 >> 0x1f & 0xffff;
      uVar4 = iVar8 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      cVar2 = (char)param_1[7];
      goto LAB_140b6d041;
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  cVar2 = '\0';
LAB_140b6d041:
  if ((char)param_1[3] == '\0') {
    *(undefined1 *)(param_1 + 7) = 0;
    return 0;
  }
  if (cVar2 == '\0') {
    return 0;
  }
  lVar5 = UWorld::GetGameState<APVPGameState>(param_2);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x750) = *(undefined1 *)((longlong)param_1 + 0x1a);
  }
  iVar11 = 0;
  cVar2 = FUN_140b81c70(param_2);
  iVar8 = (int)param_1[2] + -1;
  if (-1 < iVar8) {
    lVar10 = (longlong)iVar8 * 0x60;
    do {
      if (param_4 <= param_3) break;
      puVar9 = (undefined8 *)(param_1[1] + lVar10);
      cVar3 = FUN_1430036e0(puVar9);
      if (cVar3 != '\0') {
        if ((((char)param_1[3] == '\x02') && (cVar3 = FUN_1430035b0(*puVar9), cVar3 != '\0')) &&
           ((*(char *)((longlong)param_1 + 0x19) != '\0' || (cVar2 == '\x01')))) {
          if (param_1[4] != 0) {
            uVar4 = *(uint *)(param_1[4] + 0xc);
            if ((int)uVar4 < (int)DAT_1469e91c4) {
              uVar7 = uVar4 & 0xffff;
              if ((int)uVar4 < 0) {
                uVar4 = uVar4 + 0xffff;
                uVar7 = uVar7 - 0x10000;
              }
              lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                      (longlong)(int)uVar7 * 0x18;
            }
            else {
              lVar6 = 0;
            }
            if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) &&
               (lVar6 = FUN_14301a0d0(param_2,puVar9,0), lVar6 != 0)) {
              FUN_140b8ce10(lVar6,param_1[4]);
              goto LAB_140b6d1ba;
            }
          }
        }
        else {
          lVar6 = FUN_14301a0d0(param_2,puVar9,0);
          if (lVar6 != 0) {
LAB_140b6d1ba:
            param_3 = param_3 + 1;
            iVar11 = iVar11 + 1;
            FUN_140b5e400(param_1,param_2,lVar6);
          }
        }
      }
      FUN_140b3c970(param_1 + 1,iVar8);
      lVar10 = lVar10 + -0x60;
      bVar1 = 0 < iVar8;
      iVar8 = iVar8 + -1;
    } while (bVar1);
  }
  if ((int)param_1[2] == 0) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x750) = 0;
  }
  return iVar11;
}



// FUNCTION 140b6d230 FUN_140b6d230 body=1113 status=ok
// SIG undefined FUN_140b6d230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b6d230(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_2c8 [32];
  undefined4 *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 local_27c;
  undefined2 local_27b;
  undefined1 local_279;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined1 local_268 [16];
  undefined1 local_258 [28];
  undefined1 local_23c [236];
  undefined4 local_150;
  undefined1 local_14c;
  ulonglong local_58;
  
  if (param_2 == 0) {
    return;
  }
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  if (*(longlong *)(param_1 + 0x148) == 0) {
    return;
  }
  lVar5 = FUN_142e0d0b0();
  lVar12 = *(longlong *)(param_1 + 0x148);
  while( true ) {
    if (lVar12 == 0) {
      return;
    }
    if (lVar12 == lVar5) break;
    lVar12 = *(longlong *)(lVar12 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x148) == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x118) == 0) {
    return;
  }
  plVar6 = (longlong *)FUN_140b28030(param_2,local_268);
  if (*plVar6 == 0) {
    return;
  }
  lVar5 = FUN_142e49950();
  lVar12 = *plVar6;
  while( true ) {
    if (lVar12 == 0) {
      return;
    }
    if (lVar12 == lVar5) break;
    lVar12 = *(longlong *)(lVar12 + 0x30);
  }
  if (*plVar6 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  plVar6 = *(longlong **)(param_4 + 0x50);
  lVar12 = 0;
  if (plVar6 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar5 = plVar6[0x1f];
    }
  }
  lVar1 = *(longlong *)(param_4 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x148);
  lVar9 = lVar12;
  if (lVar8 != 0) {
    lVar7 = FUN_142e0d0b0();
    lVar10 = lVar8;
    do {
      lVar9 = lVar8;
      if (lVar10 == lVar7) break;
      lVar10 = *(longlong *)(lVar10 + 0x30);
      lVar9 = lVar12;
    } while (lVar10 != 0);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if ((*(char *)(param_1 + 0x108) != '\0') && (*(char *)(param_3 + 0xc) == '\0')) {
    return;
  }
  bVar3 = FUN_140b74c10(param_1,param_2,param_3,lVar1);
  if ((*(char *)(param_1 + 0x158) == '\0') ||
     (((*(char *)(param_1 + 0x160) != '\0' && (*(char *)(param_2 + 0x5b2) == '\0')) &&
      (cVar4 = FUN_140b2cbe0(param_2,0), cVar4 == '\x01')))) {
    bVar11 = 0;
  }
  else {
    uVar13 = FUN_142c98860(param_1 + 0x168,param_2);
    uVar14 = FUN_142c98860(param_1 + 0x1a0,param_2);
    local_290 = 0;
    local_298 = CONCAT44(local_298._4_4_,uVar14);
    local_2a0 = CONCAT44(local_2a0._4_4_,uVar13);
    local_2a8 = (undefined4 *)0x0;
    FUN_140ec5f90(&local_288,lVar1,*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(param_2 + 0x150)
                 );
    bVar11 = 1;
  }
  bVar11 = bVar11 | bVar3;
  bVar3 = FUN_140b2cbe0(param_2,0);
  if ((1 < bVar3) &&
     (uVar13 = FUN_140b5df60(param_1,param_3,1), *(longlong *)(param_1 + 0x150) != 0)) {
    lVar8 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
    for (lVar5 = *(longlong *)(param_1 + 0x150); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar8) {
        if (*(longlong *)(param_1 + 0x150) != 0) {
          FUN_142d0a300(local_258);
          local_14c = 1;
          local_150 = uVar13;
          plVar6 = (longlong *)FUN_140b28030(param_2,local_268);
          plVar6 = (longlong *)*plVar6;
          if (plVar6 == (longlong *)0x0) {
            lVar5 = 0;
          }
          else {
            lVar5 = plVar6[0x1f];
            if (lVar5 == 0) {
              (**(code **)(*plVar6 + 0x368))(plVar6);
              lVar5 = plVar6[0x1f];
            }
          }
          FWeakObjectPtr::operator=(local_23c,lVar5);
          local_27b = 0;
          local_279 = 0;
          local_288 = 0xbf800000;
          local_284 = 0xbf800000;
          local_280 = 0xbf800000;
          local_27c = 0;
          local_278 = 0x3f800000;
          local_274 = 0x3f800000;
          local_270 = 0x3f800000;
          lVar5 = lVar12;
          if (*(longlong *)(param_1 + 0x150) != 0) {
            lVar9 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
            for (lVar8 = *(longlong *)(param_1 + 0x150);
                (lVar5 = lVar12, lVar8 != 0 &&
                (lVar5 = *(longlong *)(param_1 + 0x150), lVar8 != lVar9));
                lVar8 = *(longlong *)(lVar8 + 0x30)) {
            }
          }
          local_2a8 = &local_288;
          local_298 = 0;
          local_2a0 = 0;
          FUN_140a86fb0(*(undefined8 *)(param_2 + 0x118),lVar5,lVar1,local_258);
          FUN_1409c53c0(local_258);
          plVar6 = (longlong *)FUN_140b2cbb0(param_2);
          if (plVar6 == (longlong *)0x0) {
            FUN_1414bbd70(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x100),
                          lVar1);
          }
          else {
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          bVar11 = 1;
        }
        break;
      }
    }
  }
  if (((bVar11 != 0) && (*(char *)(param_1 + 0x108) != '\0')) &&
     (fVar15 = (float)FUN_142c98860(param_1 + 0x110,param_2), 0.0 < fVar15)) {
    FUN_140b72d20(param_1,param_2,param_3,fVar15);
  }
  return;
}



// FUNCTION 140b6d690 FUN_140b6d690 body=160 status=ok
// SIG undefined FUN_140b6d690(void)

void FUN_140b6d690(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar6;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar4);
      if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b6d714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5,param_3);
        return;
      }
      FUN_142227350(param_2,0,1);
    }
  }
  return;
}



// FUNCTION 140b6d730 FUN_140b6d730 body=227 status=ok
// SIG undefined FUN_140b6d730(void)

void FUN_140b6d730(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    lVar7 = 0;
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) &&
       ((*(byte *)((longlong)param_2 + 0x94) & 2) == 0)) {
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar5;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
        uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
        if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b6d7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
        uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
        FUN_142543860(uVar3,param_2,0,1);
      }
    }
  }
  return;
}



// FUNCTION 140b6d820 FUN_140b6d820 body=264 status=ok
// SIG undefined FUN_140b6d820(void)

void FUN_140b6d820(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar8 = *(int *)(param_1 + 0x30) + -1;
  if (-1 < iVar8) {
    lVar9 = (longlong)iVar8 << 4;
    lVar11 = (longlong)*(int *)(param_1 + 0x30) << 4;
    lVar10 = lVar9;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      lVar2 = *(longlong *)(lVar10 + lVar1);
      if (lVar2 == 0) {
LAB_140b6d8bf:
        iVar6 = *(int *)(param_1 + 0x30);
        iVar4 = (iVar6 - iVar8) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + lVar1),(void *)(lVar11 + lVar1),(longlong)iVar4 << 4);
          iVar6 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar6 + -1;
        FUN_140b6d690(param_1,lVar2,param_2);
      }
      else {
        uVar3 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar3 < (int)DAT_1469e91c4) {
          uVar7 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)uVar7 * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) || (*(char *)(lVar2 + 0x128) == '\x03'))
        goto LAB_140b6d8bf;
      }
      lVar11 = lVar11 + -0x10;
      lVar9 = lVar9 + -0x10;
      lVar10 = lVar10 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 140b6d930 FUN_140b6d930 body=756 status=ok
// SIG undefined FUN_140b6d930(void)

void FUN_140b6d930(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *_Dst;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar9 = 0;
  fVar11 = 3.4028235e+38;
  iVar5 = -1;
  if (3 < iVar1) {
    iVar10 = 2;
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    do {
      lVar2 = plVar8[-2];
      if (lVar2 == 0) {
LAB_140b6d9d6:
        if (*(float *)(plVar8 + -1) < fVar11) {
          fVar11 = *(float *)(plVar8 + -1);
          iVar5 = iVar9;
        }
      }
      else {
        uVar4 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar6 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if (((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) || (*(char *)(lVar2 + 0x128) == '\x03'))
        goto LAB_140b6d9d6;
      }
      lVar2 = *plVar8;
      if (lVar2 == 0) {
LAB_140b6da36:
        if (*(float *)(plVar8 + 1) < fVar11) {
          iVar5 = iVar10 + -1;
          fVar11 = *(float *)(plVar8 + 1);
        }
      }
      else {
        uVar4 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar6 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if (((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) || (*(char *)(lVar2 + 0x128) == '\x03'))
        goto LAB_140b6da36;
      }
      lVar2 = plVar8[2];
      if (lVar2 == 0) {
LAB_140b6da98:
        if (*(float *)(plVar8 + 3) < fVar11) {
          fVar11 = *(float *)(plVar8 + 3);
          iVar5 = iVar10;
        }
      }
      else {
        uVar4 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar6 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if (((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) || (*(char *)(lVar2 + 0x128) == '\x03'))
        goto LAB_140b6da98;
      }
      lVar2 = plVar8[4];
      if (lVar2 == 0) {
LAB_140b6daf9:
        if (*(float *)(plVar8 + 5) < fVar11) {
          iVar5 = iVar10 + 1;
          fVar11 = *(float *)(plVar8 + 5);
        }
      }
      else {
        uVar4 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar6 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if (((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) || (*(char *)(lVar2 + 0x128) == '\x03'))
        goto LAB_140b6daf9;
      }
      plVar8 = plVar8 + 8;
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 4;
    } while (iVar9 < iVar1 + -3);
  }
  if (iVar9 < iVar1) {
    plVar8 = (longlong *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x28));
    do {
      lVar2 = *plVar8;
      if (lVar2 == 0) {
LAB_140b6db84:
        if (*(float *)(plVar8 + 1) < fVar11) {
          fVar11 = *(float *)(plVar8 + 1);
          iVar5 = iVar9;
        }
      }
      else {
        uVar4 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar6 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if (((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) || (*(char *)(lVar2 + 0x128) == '\x03'))
        goto LAB_140b6db84;
      }
      plVar8 = plVar8 + 2;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  if ((-1 < iVar5) && (iVar5 < iVar1)) {
    _Dst = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x28));
    iVar5 = (iVar1 - iVar5) + -1;
    if (0 < iVar5) {
      iVar5 = 1;
    }
    uVar3 = *_Dst;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((longlong)(iVar1 - iVar5) * 0x10 + *(longlong *)(param_1 + 0x28)),
                 (longlong)iVar5 << 4);
      iVar1 = *(int *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x30) = iVar1 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x28);
    FUN_140b6d690(param_1,uVar3,0);
  }
  return;
}



// FUNCTION 140b6dc30 FUN_140b6dc30 body=1658 status=ok
// SIG undefined FUN_140b6dc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b6dc30(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  ulonglong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  undefined8 **local_1a0;
  undefined1 local_198;
  char local_188;
  longlong *local_180;
  int local_178;
  undefined8 *local_168;
  undefined4 local_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  ulonglong local_88;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_128 = param_3;
  lVar9 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar9 == 0) {
    return;
  }
  if (param_2[0x23] == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  cVar7 = FUN_140b274e0(param_2);
  plVar11 = *(longlong **)(param_1 + 0x108);
  plVar15 = plVar11 + (longlong)*(int *)(param_1 + 0x110) * 4;
  if (plVar11 == plVar15) {
    return;
  }
  while ((char)*plVar11 != *(char *)(param_4 + 0x131)) {
    plVar11 = plVar11 + 4;
    if (plVar11 == plVar15) {
      return;
    }
  }
  local_148 = *(undefined8 **)(param_4 + 0x18);
  FName::ToString(&local_148,&local_180);
  local_1a8 = 0xffffffff;
  iVar8 = FUN_141592950(&local_180,L"Status",1);
  local_188 = iVar8 != -1;
  if (local_180 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((char)*plVar11 == cVar7) {
    if (plVar11[3] == 0) {
      return;
    }
    if (local_188 == '\0') {
      local_130 = 0;
      local_120 = 0;
      local_128 = (undefined8 *)0x0;
      lVar9 = *(longlong *)(param_2[0x23] + 0x168);
      if (lVar9 == 0) {
        local_168 = _DAT_1468b5d90;
        local_160 = DAT_1468b5d98;
      }
      else {
        local_168 = *(undefined8 **)(lVar9 + 0x220);
        local_160 = *(undefined4 *)(lVar9 + 0x228);
      }
      local_140 = local_160;
      local_1a0 = &local_128;
      local_148 = local_168;
      local_1a8 = 0x42480000;
      FUN_1405a1e30(&local_180,param_2,plVar11[3],&local_148);
      FUN_140591060(&local_180);
      return;
    }
    return;
  }
  pcVar13 = *(char **)(param_1 + 0x108);
  pcVar10 = pcVar13 + (longlong)*(int *)(param_1 + 0x110) * 0x20;
  do {
    if (pcVar13 == pcVar10) {
LAB_140b6de79:
      uVar19 = 0;
      plVar15 = (longlong *)*param_5;
      uVar17 = 0;
      uVar16 = (longlong)(int)param_5[1] & 0x1fffffffffffffff;
      if (plVar15 + (int)param_5[1] < plVar15) {
        uVar16 = uVar17;
      }
      if (uVar16 != 0) {
        do {
          lVar9 = *plVar15;
          if (lVar9 != 0) {
            local_168 = *(undefined8 **)(param_1 + 0x10);
            iVar8 = *(int *)(param_1 + 0x40);
            if (iVar8 < 1) {
              uVar18 = 0;
            }
            else {
              iVar1 = *(int *)(local_128 + 1);
              if ((iVar1 < 1) || (iVar8 <= iVar1 + -1)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                iVar8 = iVar1;
              }
              uVar18 = FUN_142c98860((longlong)(iVar8 + -1) * 0x38 + *(longlong *)(param_1 + 0x38),
                                     *local_128);
            }
            local_198 = 0;
            local_1a0 = (undefined8 **)local_168;
            local_1a8 = CONCAT31(local_1a8._1_3_,2);
            FUN_140b1a410(param_2,plVar11[1],lVar9,uVar18);
          }
          plVar15 = plVar15 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar16);
      }
      SButton::SetClickMethod(param_2,(char)*plVar11);
      if ((plVar11[2] != 0) && (local_188 == '\0')) {
        local_100 = 0;
        local_108 = 0;
        lVar9 = *(longlong *)(param_2[0x23] + 0x168);
        if (lVar9 == 0) {
          local_168 = _DAT_1468b5d90;
          local_160 = DAT_1468b5d98;
        }
        else {
          local_168 = *(undefined8 **)(lVar9 + 0x220);
          local_160 = *(undefined4 *)(lVar9 + 0x228);
        }
        local_130 = local_160;
        local_1a0 = (undefined8 **)&local_108;
        local_138 = local_168;
        local_1a8 = 0x42480000;
        FUN_1405a1e30(&local_168,param_2,plVar11[2],&local_138);
        FUN_140591060(&local_168);
      }
      local_180 = (longlong *)0x0;
      local_178 = 0;
      FWeakObjectPtr::operator=(&local_118,param_2);
      FWeakObjectPtr::operator=(&local_148,param_1);
      uVar18 = (undefined4)local_148;
      uVar6 = local_148._4_4_;
      lVar9 = *plVar11;
      lVar2 = plVar11[1];
      lVar3 = plVar11[2];
      lVar4 = plVar11[3];
      plVar11 = (longlong *)FMemory::Realloc(0,0x50);
      if (plVar11 == (longlong *)0x0) {
        if (((local_178 != 0) && (local_180 != (longlong *)0x0)) &&
           ((**(code **)(*local_180 + 0x28))(local_180,0), local_180 != (longlong *)0x0)) {
          local_180 = (longlong *)FMemory::Realloc(local_180,0,0);
        }
      }
      else {
        *plVar11 = (longlong)&PTR_GetPoolName_1442cbd30;
        *(undefined4 *)(plVar11 + 1) = local_118;
        *(undefined4 *)((longlong)plVar11 + 0xc) = local_114;
        *(undefined4 *)(plVar11 + 2) = uVar18;
        *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
        plVar11[3] = lVar9;
        plVar11[4] = lVar2;
        plVar11[7] = param_1;
        plVar11[5] = lVar3;
        plVar11[6] = lVar4;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar11[9] = lVar9;
        *plVar11 = (longlong)&PTR_GetPoolName_1442cbd78;
        FUN_140b56a80(plVar11,&local_180);
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        lVar9 = FMemory::Realloc(plVar11,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
      iVar8 = *(int *)(param_1 + 0x60);
      if (0 < iVar8) {
        iVar1 = *(int *)(local_128 + 1);
        if ((iVar1 < 1) || (iVar8 <= iVar1 + -1)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          iVar8 = iVar1;
        }
        uVar19 = FUN_142c98860((longlong)(iVar8 + -1) * 0x38 + *(longlong *)(param_1 + 0x58),
                               *local_128);
      }
      lVar9 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar9 + 400) == 0) {
        uVar14 = *(undefined8 *)(lVar9 + 0x3f8);
      }
      else {
        uVar14 = *(undefined8 *)(*(longlong *)(lVar9 + 400) + 0x90);
      }
      uVar12 = USkinnedMeshComponent::GetSlavePoseComponents(param_2);
      local_f8 = 0;
      local_f0 = 0;
      if ((local_178 != 0) && (local_180 != (longlong *)0x0)) {
        (**(code **)(*local_180 + 0x30))(local_180,&local_f8);
      }
      FWeakObjectPtr::operator=(local_e8,0);
      local_1a0 = (undefined8 **)CONCAT44(local_1a0._4_4_,0xbf800000);
      local_1a8 = local_1a8 & 0xffffff00;
      local_e0 = 0;
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar14,uVar12,&local_f8,uVar19);
      if (local_98 != 0) {
        plVar11 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar11 = local_a8;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
      if (local_178 != 0) {
        if (local_180 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_180 + 0x28))(local_180,0);
        if (local_180 != (longlong *)0x0) {
          local_180 = (longlong *)FMemory::Realloc(local_180,0,0);
        }
        local_178 = 0;
      }
      if (local_180 != (longlong *)0x0) {
        FMemory::Free(local_180);
      }
      return;
    }
    if (*pcVar13 == cVar7) {
      FUN_140b3cf80(param_2,*(undefined8 *)(pcVar13 + 8),*(undefined8 *)(param_1 + 0x10),0);
      goto LAB_140b6de79;
    }
    pcVar13 = pcVar13 + 0x20;
  } while( true );
}



// FUNCTION 140b6e2b0 FUN_140b6e2b0 body=416 status=ok
// SIG undefined FUN_140b6e2b0(void)

void FUN_140b6e2b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x968);
  if (lVar6 == 0) {
    if (*(char *)(param_1 + 0x4d4) == '\0') {
      return;
    }
    uVar2 = FUN_1409bff40();
    *(undefined8 *)(param_1 + 0x968) = uVar2;
    FUN_142398d80(uVar2,*(undefined4 *)(param_1 + 0x740));
    FUN_14260f940(*(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x738));
    FUN_14234b150(*(undefined8 *)(param_1 + 0x968));
    FUN_140ae39d0(param_1,*(undefined8 *)(param_1 + 0x968));
    lVar6 = *(longlong *)(param_1 + 0x968);
    if (lVar6 == 0) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x97c);
  if (*(char *)(param_1 + 0x581) == '\x01') {
    lVar3 = 0x920;
  }
  else {
    lVar3 = 0x910;
    if (*(char *)(param_1 + 0x581) == '\x02') {
      lVar3 = 0x930;
    }
  }
  lVar7 = 0;
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar3 + 8 + param_1))) {
    lVar7 = (longlong)iVar1 * 0x40 + *(longlong *)(lVar3 + param_1);
  }
  cVar5 = '\0';
  if (*(char *)(param_1 + 0x4d4) == '\0') {
LAB_140b6e393:
    if (lVar7 != 0) {
      FString::PrintfImpl(&local_18,L"Tray_%02d_Socket",*(int *)(lVar7 + 0x38) + 1);
      puVar4 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar4 = local_18;
      }
      FName::FName(&local_res8,puVar4,1);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      goto LAB_140b6e3e8;
    }
  }
  else if (lVar7 != 0) {
    cVar5 = '\x01';
    goto LAB_140b6e393;
  }
  local_res8 = 0;
LAB_140b6e3e8:
  FUN_140b71bb0(param_1,cVar5,lVar6,param_1 + 0x75c,param_1 + 0x750,local_res8);
  if ((cVar5 != '\0') && (lVar7 != 0)) {
    uVar8 = FUN_140b5da60(param_1,lVar7);
    FUN_14260f0c0(lVar6,*(undefined8 *)(param_1 + 0x748),uVar8);
  }
  return;
}



// FUNCTION 140b6e450 FUN_140b6e450 body=462 status=ok
// SIG undefined FUN_140b6e450(void)

void FUN_140b6e450(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  
  iVar3 = FUN_140b57e20();
  if (*(char *)(param_1 + 0x581) == '\x01') {
    lVar5 = 0x920;
  }
  else {
    lVar5 = 0x910;
    if (*(char *)(param_1 + 0x581) == '\x02') {
      lVar5 = 0x930;
    }
  }
  if ((iVar3 < 0) || (*(int *)(lVar5 + 8 + param_1) <= iVar3)) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar3 * 0x40 + *(longlong *)(lVar5 + param_1);
  }
  iVar1 = *(int *)(param_1 + 0x978);
  lVar7 = *(longlong *)(param_1 + 0x958);
  iVar2 = *(int *)(param_1 + 0x97c);
  if (lVar7 == 0) {
    if (*(char *)(param_1 + 0x4d4) == '\0') {
      return;
    }
    uVar4 = FUN_1409bff40(param_1);
    *(undefined8 *)(param_1 + 0x958) = uVar4;
    FUN_142398d80(uVar4,*(undefined4 *)(param_1 + 0x740));
    FUN_14260f940(*(undefined8 *)(param_1 + 0x958),*(undefined8 *)(param_1 + 0x730));
    FUN_14234b150(*(undefined8 *)(param_1 + 0x958));
    FUN_140ae39d0(param_1,*(undefined8 *)(param_1 + 0x958));
    lVar7 = *(longlong *)(param_1 + 0x958);
    if (lVar7 == 0) {
      return;
    }
  }
  cVar8 = '\0';
  if (((*(char *)(param_1 + 0x4d4) != '\0') && (iVar2 != iVar3)) && (iVar1 != iVar3)) {
    cVar8 = '\x01';
  }
  if (lVar5 == 0) {
    local_res8 = 0;
  }
  else {
    FString::PrintfImpl(&local_38,L"Tray_%02d_Socket",*(int *)(lVar5 + 0x38) + 1);
    puVar6 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    FName::FName(&local_res8,puVar6,1);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140b71bb0(param_1,cVar8,lVar7,param_1 + 0x75c,param_1 + 0x750,local_res8);
  if (cVar8 != '\0') {
    uVar9 = FUN_140b5da60(param_1,lVar5);
    FUN_14260f0c0(lVar7,*(undefined8 *)(param_1 + 0x748),uVar9);
  }
  return;
}



// FUNCTION 140b6e620 FUN_140b6e620 body=288 status=ok
// SIG undefined FUN_140b6e620(void)

void FUN_140b6e620(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar10;
  
  cVar2 = FWeakObjectPtr::IsValid(param_2);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_2);
    lVar4 = (**(code **)(*plVar3 + 0x680))(plVar3);
    if (lVar4 != 0) {
      lVar5 = UInputKeySelector::GetPrivateStaticClass();
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
        uVar7 = 0;
        iVar8 = 0;
        if (0 < *(int *)(param_2 + 0x10)) {
          puVar6 = (undefined4 *)(lVar4 + 0x5a8);
          uVar10 = uVar7;
          uVar11 = uVar7;
          uVar12 = uVar7;
          do {
            iVar8 = (int)uVar12;
            if (2 < (longlong)uVar11) break;
            lVar5 = *(longlong *)(uVar7 + *(longlong *)(param_2 + 8));
            if ((lVar5 != 0) && (*(char *)(lVar5 + 0x69) != '\0')) {
              *(longlong *)(puVar6 + -2) = lVar5;
              uVar12 = (ulonglong)(iVar8 + 1);
              uVar11 = uVar11 + 1;
              *puVar6 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x10 + uVar7);
              puVar6 = puVar6 + 4;
            }
            iVar8 = (int)uVar12;
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
            uVar7 = uVar7 + 0x18;
          } while ((int)uVar9 < *(int *)(param_2 + 0x10));
        }
        lVar5 = (longlong)iVar8;
        if (lVar5 < 3) {
          puVar6 = (undefined4 *)(lVar5 * 0x10 + 0x5a8 + lVar4);
          lVar5 = 3 - lVar5;
          do {
            *(undefined8 *)(puVar6 + -2) = 0;
            *puVar6 = 0;
            puVar6 = puVar6 + 4;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b6e740 FUN_140b6e740 body=1587 status=ok
// SIG undefined FUN_140b6e740(void)

void FUN_140b6e740(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  byte bVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar20;
  ulonglong uVar21;
  longlong *plVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 local_res20 [8];
  undefined8 local_78;
  undefined4 local_70;
  undefined2 *local_68;
  int local_60;
  ulonglong uVar19;
  
  lVar9 = *(longlong *)(param_1 + 0x940);
  lVar11 = (longlong)*(int *)(param_1 + 0x948) * 0x30 + lVar9;
  for (; lVar9 != lVar11; lVar9 = lVar9 + 0x30) {
    *(undefined4 *)(lVar9 + 0x28) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x581) == '\x01') {
    lVar9 = 0x920;
  }
  else {
    lVar9 = 0x910;
    if (*(char *)(param_1 + 0x581) == '\x02') {
      lVar9 = 0x930;
    }
  }
  uVar19 = 0;
  uVar21 = uVar19;
  if (0 < *(int *)(param_1 + 8 + lVar9)) {
    do {
      iVar1 = *(int *)(uVar21 + 0x38 + *(longlong *)(param_1 + lVar9));
      if (iVar1 != -1) {
        if ((iVar1 < 0) || (*(int *)(param_1 + 0x948) <= iVar1)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          *(int *)(*(longlong *)(param_1 + 0x940) + 0x28 + (longlong)iVar1 * 0x30) = (int)uVar19;
        }
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
      uVar21 = uVar21 + 0x40;
    } while ((int)uVar18 < *(int *)(param_1 + 8 + lVar9));
  }
  plVar17 = *(longlong **)(param_1 + 0x940);
  plVar22 = plVar17 + (longlong)*(int *)(param_1 + 0x948) * 6;
  do {
    if (plVar17 == plVar22) {
      FUN_140b73a50(param_1);
      return;
    }
    plVar16 = (longlong *)0x0;
    plVar6 = (longlong *)*plVar17;
    if (plVar6 != (longlong *)0x0) {
      iVar1 = (int)plVar17[5];
      if (*(char *)(param_1 + 0x581) == '\x01') {
        lVar9 = 0x920;
      }
      else {
        lVar9 = 0x910;
        if (*(char *)(param_1 + 0x581) == '\x02') {
          lVar9 = 0x930;
        }
      }
      if ((iVar1 < 0) || (*(int *)(param_1 + 8 + lVar9) <= iVar1)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if (((bVar23) &&
          (plVar16 = (longlong *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + lVar9)),
          plVar16 != (longlong *)0x0)) && (*(char *)((longlong)plVar16 + 0x35) == '\x01')) {
        uVar8 = *(undefined8 *)(param_1 + 0x698);
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x690);
      }
      (**(code **)(*plVar6 + 0x928))(plVar6,uVar8);
      bVar23 = plVar16 == (longlong *)0x0;
      if (plVar16 != (longlong *)0x0) {
        if ((*(char *)((longlong)plVar16 + 0x35) == '\x04') && (*(char *)(param_1 + 0x564) != '\0'))
        {
          bVar23 = true;
        }
        else {
          bVar23 = false;
        }
      }
      FUN_142397540(*plVar17,bVar23,1);
      if (bVar23 == false) {
        iVar1 = *(int *)(param_1 + 0x978);
        lVar9 = plVar17[5];
        if (plVar16 == (longlong *)0x0) {
          bVar23 = false;
        }
        else {
          bVar23 = *plVar16 != 0;
        }
        lVar11 = *(longlong *)(param_1 + 0x6b0);
        lVar14 = lVar11;
        if (plVar16 != (longlong *)0x0) {
          if (*(char *)((longlong)plVar16 + 0x35) == '\x01') {
            lVar11 = *(longlong *)(param_1 + 0x6b8);
          }
          lVar14 = lVar11;
          if (plVar16[2] != 0) {
            lVar7 = *(longlong *)(plVar16[2] + 0x210);
            lVar12 = 0;
            if (lVar7 != 0) {
              lVar12 = *(longlong *)(lVar7 + 0xb8);
            }
            if (lVar12 != 0) {
              plVar6 = *(longlong **)(param_1 + 0x6d0);
              plVar10 = plVar6 + (longlong)*(int *)(param_1 + 0x6d8) * 4;
              for (; plVar6 != plVar10; plVar6 = plVar6 + 4) {
                if (*plVar6 == lVar12) {
                  if (((*(char *)((longlong)plVar16 + 0x35) != '\x01') ||
                      (lVar14 = plVar6[2], lVar14 == 0)) && (lVar14 = lVar11, plVar6[1] != 0)) {
                    lVar14 = plVar6[1];
                  }
                  break;
                }
              }
            }
          }
        }
        if ((lVar14 != 0) && (plVar6 = (longlong *)*plVar17, plVar6 != (longlong *)0x0)) {
          lVar11 = plVar17[4];
          if (lVar11 == 0) {
            lVar11 = (**(code **)(*plVar6 + 0x560))(plVar6,0);
            if (lVar11 == 0) {
LAB_140b6ea2c:
              lVar11 = 0;
            }
            else {
              lVar7 = FUN_1429ba110();
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_140b6ea2c;
            }
            plVar17[4] = lVar11;
            if (lVar11 == 0) {
              lVar11 = (**(code **)(*(longlong *)*plVar17 + 0x5a8))((longlong *)*plVar17,0,lVar14,0)
              ;
              plVar17[4] = lVar11;
            }
          }
          else if (*(longlong *)(lVar11 + 0x90) != lVar14) {
            FUN_1425a2620(lVar11,lVar14);
            (**(code **)(*(longlong *)*plVar17 + 0x568))((longlong *)*plVar17,0,0);
            (**(code **)(*(longlong *)*plVar17 + 0x568))((longlong *)*plVar17,0,plVar17[4]);
          }
          if ((int)lVar9 == iVar1) {
            uVar24 = 0x3f800000;
          }
          else {
            uVar24 = 0;
          }
          FUN_1425a2750(plVar17[4],*(undefined8 *)(param_1 + 0x6c0),uVar24);
          if (bVar23) {
            uVar24 = 0x3f800000;
          }
          else {
            uVar24 = 0;
          }
          FUN_1425a2750(plVar17[4],*(undefined8 *)(param_1 + 0x6c8),uVar24);
        }
      }
      FUN_140b76530(param_1,plVar16,plVar17);
      if (((plVar16 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x718) == 0)) ||
         (*(char *)(param_1 + 0x4d4) == '\0')) {
LAB_140b6ebc2:
        bVar15 = 0;
      }
      else {
        iVar1 = (int)plVar17[5];
        if (*(char *)(param_1 + 0x581) == '\x01') {
          lVar9 = 0x928;
        }
        else {
          lVar9 = 0x918;
          if (*(char *)(param_1 + 0x581) == '\x02') {
            lVar9 = 0x938;
          }
        }
        iVar2 = *(int *)(param_1 + 0x978);
        iVar20 = *(int *)(param_1 + 0x554) + -1;
        iVar3 = *(int *)(param_1 + lVar9);
        if ((((iVar2 < 0) || (iVar1 < 0)) || ((iVar3 <= iVar2 || ((iVar3 <= iVar1 || (iVar3 < 1)))))
            ) || (iVar2 == iVar1)) {
          iVar5 = 0;
        }
        else if (iVar2 < iVar1) {
          iVar5 = iVar1 - iVar2;
        }
        else {
          iVar5 = (iVar3 - iVar2) + iVar1;
        }
        if (iVar20 < iVar5) {
          if (((((iVar2 < 0) || (iVar1 < 0)) || (iVar3 <= iVar2)) ||
              ((iVar3 <= iVar1 || (iVar3 < 1)))) || (iVar2 == iVar1)) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar2 - iVar1;
            if (iVar2 < iVar1) {
              iVar5 = iVar5 + iVar3;
            }
          }
          if (iVar20 < iVar5) goto LAB_140b6ebc2;
        }
        if ((*(char *)((longlong)plVar16 + 0x34) != '\x02') ||
           ((byte)(*(char *)((longlong)plVar16 + 0x35) - 3U) < 2)) goto LAB_140b6ebc2;
        bVar15 = 1;
      }
      if ((bVar15 != 0) && (plVar17[3] == 0)) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
        uVar18 = 0;
        lVar9 = FUN_1417985e0(uVar8,param_1,0,0,0,0,0,0,0);
        FUN_14260f940(lVar9,*(undefined8 *)(param_1 + 0x718));
        FUN_14234b150(lVar9);
        FUN_142398d80(lVar9,*(undefined4 *)(param_1 + 0x720));
        FString::PrintfImpl(&local_68,L"Tray_%02d_Socket",*(int *)((longlong)plVar17 + 0x2c) + 1);
        puVar13 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar13 = local_68;
        }
        FName::FName(local_res20,puVar13,1);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FUN_142382f60(lVar9,*(undefined8 *)(param_1 + 0x578),&DAT_146532184);
        local_78 = *(undefined8 *)(param_1 + 0x724);
        local_70 = *(undefined4 *)(param_1 + 0x72c);
        FUN_142398470(lVar9,&local_78,0,0,uVar18 & 0xffffff00);
        FUN_140ae39d0(param_1,lVar9);
        plVar17[3] = lVar9;
      }
      plVar6 = (longlong *)plVar17[3];
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x290))(plVar6,bVar15,0);
        FUN_142397540(plVar17[3],bVar15 ^ 1,1);
      }
    }
    plVar17 = plVar17 + 6;
  } while( true );
}



// FUNCTION 140b6ed80 FUN_140b6ed80 body=858 status=ok
// SIG undefined FUN_140b6ed80(void)

void FUN_140b6ed80(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  
  iVar1 = *(int *)(param_1 + 0x978);
  if (*(char *)(param_1 + 0x581) == '\x01') {
    lVar4 = 0x920;
  }
  else {
    lVar4 = 0x910;
    if (*(char *)(param_1 + 0x581) == '\x02') {
      lVar4 = 0x930;
    }
  }
  lVar7 = 0;
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar4 + 8 + param_1))) {
    lVar7 = (longlong)iVar1 * 0x40 + *(longlong *)(lVar4 + param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0x950);
  iVar2 = *(int *)(param_1 + 0x97c);
  if (lVar4 == 0) {
    if (*(char *)(param_1 + 0x4d4) != '\0') {
      uVar5 = FUN_1409bff40(param_1);
      *(undefined8 *)(param_1 + 0x950) = uVar5;
      FUN_142398d80(uVar5,*(undefined4 *)(param_1 + 0x740));
      FUN_14260f940(*(undefined8 *)(param_1 + 0x950),*(undefined8 *)(param_1 + 0x730));
      FUN_14234b150(*(undefined8 *)(param_1 + 0x950));
      FUN_140ae39d0(param_1,*(undefined8 *)(param_1 + 0x950));
      lVar4 = *(longlong *)(param_1 + 0x950);
      if (lVar4 != 0) goto LAB_140b6ee75;
    }
  }
  else {
LAB_140b6ee75:
    cVar3 = '\0';
    if (*(char *)(param_1 + 0x4d4) == '\0') {
LAB_140b6ee9a:
      if (lVar7 == 0) goto LAB_140b6eee6;
      FString::PrintfImpl(&local_38,L"Tray_%02d_Socket",*(int *)(lVar7 + 0x38) + 1);
      puVar6 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar6 = local_38;
      }
      FName::FName(&local_res8,puVar6,1);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (lVar7 != 0) {
        if ((1 < (byte)(*(char *)(lVar7 + 0x35) - 3U)) && (iVar2 != iVar1)) {
          cVar3 = '\x01';
        }
        goto LAB_140b6ee9a;
      }
LAB_140b6eee6:
      local_res8 = 0;
    }
    FUN_140b71bb0(param_1,cVar3,lVar4,param_1 + 0x75c,param_1 + 0x750,local_res8);
    if (cVar3 != '\0') {
      uVar9 = FUN_140b5da60(param_1,lVar7);
      FUN_14260f0c0(lVar4,*(undefined8 *)(param_1 + 0x748),uVar9);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x960);
  if (lVar4 == 0) {
    if (*(char *)(param_1 + 0x4d4) == '\0') goto LAB_140b6f0b0;
    uVar5 = FUN_1409bff40(param_1);
    *(undefined8 *)(param_1 + 0x960) = uVar5;
    FUN_142398d80(uVar5,*(undefined4 *)(param_1 + 0x770));
    FUN_14260f940(*(undefined8 *)(param_1 + 0x960),*(undefined8 *)(param_1 + 0x768));
    FUN_14234b150(*(undefined8 *)(param_1 + 0x960));
    FUN_140ae39d0(param_1,*(undefined8 *)(param_1 + 0x960));
    lVar4 = *(longlong *)(param_1 + 0x960);
    if (lVar4 == 0) goto LAB_140b6f0b0;
  }
  bVar8 = false;
  if (*(char *)(param_1 + 0x4d4) == '\0') {
LAB_140b6f036:
    if (lVar7 == 0) goto LAB_140b6f07f;
    FString::PrintfImpl(&local_38,L"Tray_%02d_Socket",*(int *)(lVar7 + 0x38) + 1);
    puVar6 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    FName::FName(&local_res8,puVar6,1);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (lVar7 != 0) {
      if ((((1 < (byte)(*(char *)(lVar7 + 0x35) - 3U)) && (*(longlong *)(lVar7 + 8) != 0)) &&
          (*(longlong *)(param_1 + 0x908) != 0)) &&
         ((*(longlong *)(param_1 + 0x8f0) != 0 && (iVar2 != iVar1)))) {
        if (*(char *)(param_1 + 0x581) == '\0') {
          cVar3 = FUN_140e46310(*(longlong *)(param_1 + 0x8f0),*(longlong *)(lVar7 + 8),
                                *(longlong *)(param_1 + 0x908));
          bVar8 = cVar3 == '\0';
        }
        else if ((*(char *)(param_1 + 0x581) == '\x01') && (cVar3 = FUN_140e45de0(), cVar3 == '\0'))
        {
          bVar8 = true;
        }
      }
      goto LAB_140b6f036;
    }
LAB_140b6f07f:
    local_res8 = 0;
  }
  FUN_140b71bb0(param_1,bVar8,lVar4,param_1 + 0x780,param_1 + 0x774,local_res8);
LAB_140b6f0b0:
  FUN_140b6e450(param_1);
  return;
}



// FUNCTION 140b6f0e0 FUN_140b6f0e0 body=420 status=ok
// SIG undefined FUN_140b6f0e0(void)

void FUN_140b6f0e0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  if ((param_2 != 0) && (lVar6 = (**(code **)(*param_1 + 0x148))(), lVar6 != 0)) {
    iVar12 = (int)param_1[6];
    iVar11 = 0;
    if (0 < iVar12) {
      lVar6 = 0;
      do {
        lVar3 = param_1[5];
        if (*(longlong *)(lVar3 + lVar6) == 0) {
LAB_140b6f18e:
          iVar5 = (iVar12 - iVar11) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar11 * 0x10 + lVar3),
                       (void *)((longlong)(iVar12 - iVar5) * 0x10 + lVar3),(longlong)iVar5 << 4);
            iVar12 = (int)param_1[6];
          }
          *(int *)(param_1 + 6) = iVar12 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 5);
          iVar12 = (int)param_1[6];
        }
        else {
          uVar4 = *(uint *)(*(longlong *)(lVar3 + lVar6) + 0xc);
          if ((int)uVar4 < (int)DAT_1469e91c4) {
            uVar10 = uVar4 & 0xffff;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0xffff;
              uVar10 = uVar10 - 0x10000;
            }
            lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                    (longlong)(int)uVar10 * 0x18;
          }
          else {
            lVar7 = 0;
          }
          if (((byte)((uint)*(undefined4 *)(lVar7 + 8) >> 0x1d) & 1) != 0) goto LAB_140b6f18e;
          iVar11 = iVar11 + 1;
          lVar6 = lVar6 + 0x10;
        }
      } while (iVar11 < iVar12);
    }
    plVar8 = (longlong *)param_1[5];
    plVar9 = plVar8 + (longlong)iVar12 * 2;
    for (; plVar8 != plVar9; plVar8 = plVar8 + 2) {
      if (*plVar8 == param_2) {
        return;
      }
    }
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar12 = (int)param_1[6];
    uVar2 = *(undefined4 *)(lVar6 + 0x790);
    *(int *)(param_1 + 6) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0x34) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 5,iVar12);
    }
    local_28 = (undefined4)param_2;
    uStack_24 = (undefined4)((ulonglong)param_2 >> 0x20);
    puVar1 = (undefined4 *)(param_1[5] + (longlong)iVar12 * 0x10);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uVar2;
    puVar1[3] = uStack_1c;
    if (DAT_146297190 < (int)param_1[6]) {
      FUN_140b6d930(param_1);
    }
  }
  return;
}



// FUNCTION 140b6f290 FUN_140b6f290 body=227 status=ok
// SIG undefined FUN_140b6f290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b6f290(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 == (longlong *)0x0) {
    _DAT_146869830 = 0;
    return;
  }
  *plVar3 = (longlong)&DAT_143f3ed00;
  plVar3[1] = (longlong)&DAT_146869830;
  plVar3[2] = (longlong)FUN_140b6ab00;
  lVar4 = FDelegateHandle::GenerateNewID();
  plVar3[4] = lVar4;
  *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535868,1);
  puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
  iVar2 = DAT_146535870;
  lVar4 = (longlong)DAT_146535870;
  uVar1 = *puVar5;
  DAT_146535870 = DAT_146535870 + 1;
  if (DAT_146535874 < DAT_146535870) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535868,iVar2);
  }
  puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_146535868);
  *puVar5 = plVar3;
  *(undefined4 *)(puVar5 + 1) = 3;
  _DAT_146869830 = uVar1;
  return;
}



// FUNCTION 140b6f380 FUN_140b6f380 body=120 status=ok
// SIG undefined FUN_140b6f380(void)

void FUN_140b6f380(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 < 1) {
      uVar4 = 0;
    }
    else {
      iVar2 = *(int *)(param_4 + 1);
      if ((iVar2 < 1) || (iVar1 <= iVar2 + -1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar1 = iVar2;
      }
      uVar4 = FUN_142c98860((longlong)(iVar1 + -1) * 0x38 + *(longlong *)(param_1 + 0x38),*param_4);
    }
    FUN_140b47710(param_2,uVar4);
    FUN_140b3c200(param_2,param_3);
  }
  return;
}



// FUNCTION 140b6f400 FUN_140b6f400 body=378 status=ok
// SIG undefined FUN_140b6f400(void)

void FUN_140b6f400(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  
  if ((param_3 == param_1) && (param_2 != 0)) {
    lVar4 = FUN_1407cb5c0(param_2);
    if (lVar4 != 0) {
      lVar5 = FUN_14147d9d0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140e8e640(lVar4);
      }
    }
    plVar10 = (longlong *)(param_2 + 0x788);
    iVar9 = *(int *)(param_2 + 0x790) + -1;
    if (-1 < iVar9) {
      lVar5 = (longlong)iVar9 << 4;
      lVar4 = lVar5;
      do {
        lVar7 = lVar5 + *plVar10;
        bVar2 = true;
        if ((param_1 == 0) || (lVar6 = FWeakObjectPtr::Get(lVar7), bVar3 = bVar2, param_1 != lVar6))
        {
          bVar3 = false;
        }
        if (bVar3) {
LAB_140b6f500:
          iVar1 = *(int *)(param_2 + 0x790);
          iVar8 = (iVar1 - iVar9) + -1;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar4 + *plVar10),
                       (void *)((longlong)(iVar1 - iVar8) * 0x10 + *plVar10),(longlong)iVar8 << 4);
            iVar1 = *(int *)(param_2 + 0x790);
          }
          *(int *)(param_2 + 0x790) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar10);
        }
        else {
          if ((*(longlong *)(lVar7 + 8) != 0) && (lVar7 = FWeakObjectPtr::Get(lVar7,1), lVar7 != 0))
          {
            bVar2 = false;
          }
          if (bVar2) goto LAB_140b6f500;
        }
        lVar4 = lVar4 + -0x10;
        lVar5 = lVar5 + -0x10;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return;
}



// FUNCTION 140b6f580 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<unsigned_char,DefaultKeyFuncs<unsigned_char,0>,FDefaultSetAllocator>::Rehash
               (longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar10;
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
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar10 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_140b6f6bf;
        uVar10 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
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
      if (iVar4 < iStack_44) {
LAB_140b6f6bf:
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
        pbVar3 = (byte *)(*param_1 + (longlong)iStack_1c * 0xc);
        uVar10 = (int)*plVar2 - 1U & (uint)*pbVar3;
        *(uint *)(pbVar3 + 8) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(pbVar3 + 4) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140b6f790 FUN_140b6f790 body=1631 status=ok
// SIG undefined FUN_140b6f790(void)

void FUN_140b6f790(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  float fVar20;
  int local_88;
  longlong local_80;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar9 = 0;
  lVar8 = (**(code **)(*param_2 + 0x678))(param_2);
  if ((lVar8 != 0) && (param_3 != '\0')) {
    lVar9 = (**(code **)(*param_2 + 0x680))(param_2);
  }
  local_88 = 0;
  if (*(int *)(param_1 + 0x30) < 1) {
    return;
  }
  lVar8 = 0;
  while( true ) {
    lVar17 = *(longlong *)(param_1 + 0x28) + lVar8;
    cVar4 = FUN_14058c1e0(lVar17,param_2);
    if ((cVar4 != '\0') || ((lVar9 != 0 && (cVar4 = FUN_14058c1e0(lVar17,lVar9), cVar4 != '\0'))))
    break;
    iVar14 = 0;
    lVar15 = 0;
    if (0 < *(int *)(lVar17 + 0x10)) {
      lVar12 = *(longlong *)(lVar17 + 8);
      do {
        puVar1 = *(undefined8 **)(lVar12 + 8);
        iVar7 = *(int *)(lVar12 + 0x10);
        for (puVar11 = puVar1; puVar11 != puVar1 + iVar7; puVar11 = puVar11 + 1) {
          if ((longlong *)*puVar11 == param_2) {
            iVar6 = (int)((longlong)puVar11 - (longlong)puVar1 >> 3);
            if (iVar6 != -1) {
              iVar5 = (iVar7 - iVar6) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (puVar1 + iVar6,puVar1 + (iVar6 + 1),(longlong)iVar5 << 3);
                iVar7 = *(int *)(lVar12 + 0x10);
              }
              *(int *)(lVar12 + 0x10) = iVar7 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar12 + 8);
              if (*(int *)(lVar12 + 0x10) == 0) {
                if (*(longlong *)(*(longlong *)(lVar17 + 8) + 8 + (longlong)iVar14 * 0x18) != 0) {
                  FMemory::Free();
                }
                iVar7 = *(int *)(lVar17 + 0x10);
                iVar6 = (iVar7 - iVar14) + -1;
                if (iVar6 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(lVar17 + 8) + (longlong)iVar14 * 0x18),
                             (void *)(*(longlong *)(lVar17 + 8) + (longlong)(iVar14 + 1) * 0x18),
                             (longlong)iVar6 * 0x18);
                  iVar7 = *(int *)(lVar17 + 0x10);
                }
                *(int *)(lVar17 + 0x10) = iVar7 + -1;
                TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(lVar17 + 8);
              }
              FUN_140b6e620(param_1,lVar17);
              if (*(int *)(lVar17 + 0x10) != 0) {
                return;
              }
              lVar8 = (longlong)local_88 * 3;
              TArray<FNamedInterfaceDef,FDefaultAllocator>::
              ~TArray<FNamedInterfaceDef,FDefaultAllocator>
                        (*(longlong *)(param_1 + 0x28) + 8 + (longlong)local_88 * 0x18);
              iVar14 = *(int *)(param_1 + 0x30);
              iVar7 = iVar14 - local_88;
              goto joined_r0x000140b6fd85;
            }
            break;
          }
        }
        iVar14 = iVar14 + 1;
        lVar15 = lVar15 + 1;
        lVar12 = lVar12 + 0x18;
      } while (lVar15 < *(int *)(lVar17 + 0x10));
    }
    local_88 = local_88 + 1;
    lVar8 = lVar8 + 0x18;
    if (*(int *)(param_1 + 0x30) <= local_88) {
      return;
    }
  }
  iVar14 = *(int *)(lVar17 + 0x10) + -1;
  if (-1 < iVar14) {
    plVar18 = (longlong *)(lVar17 + 8);
    lVar9 = (longlong)iVar14 * 0x18;
    local_80 = (longlong)*(int *)(lVar17 + 0x10) * 0x18;
    lVar8 = lVar9;
    do {
      lVar15 = *plVar18;
      if (param_3 == '\0') {
        if (*(longlong *)(lVar8 + 8 + lVar15) != 0) {
          FMemory::Free();
        }
        iVar7 = *(int *)(lVar17 + 0x10);
        iVar6 = (iVar7 - iVar14) + -1;
        if (iVar6 != 0) {
          lVar15 = *plVar18;
LAB_140b6fc5a:
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar15 + lVar8),(void *)(local_80 + lVar15),(longlong)iVar6 * 0x18);
          iVar7 = *(int *)(lVar17 + 0x10);
        }
LAB_140b6fc66:
        *(int *)(lVar17 + 0x10) = iVar7 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar18);
      }
      else if (*(char *)(*(longlong *)(lVar9 + lVar15) + 0x68) != '\0') {
        fVar20 = (float)FUN_142c98860(*(longlong *)(lVar9 + lVar15) + 0x70,param_2);
        if (0.0 <= fVar20) {
          if (1.0 <= fVar20) {
            fVar20 = 1.0;
          }
          if (fVar20 < 1.0) goto LAB_140b6fa61;
          iVar7 = 0;
          if (0 < *(int *)(lVar9 + 0x10 + lVar15)) {
            lVar12 = 0;
            do {
              lVar13 = *(longlong *)(lVar9 + 8 + lVar15);
              uVar2 = *(undefined8 *)(lVar13 + lVar12);
              *(undefined8 *)(lVar13 + lVar12) = 0;
              FUN_140b6d730(param_1,uVar2);
              iVar7 = iVar7 + 1;
              lVar12 = lVar12 + 8;
            } while (iVar7 < *(int *)(lVar9 + 0x10 + lVar15));
          }
          if (*(longlong *)(lVar8 + 8 + *plVar18) != 0) {
            FMemory::Free();
          }
        }
        else {
          fVar20 = 0.0;
LAB_140b6fa61:
          iVar7 = *(int *)(lVar9 + 0x10 + lVar15);
          cVar4 = *(char *)(*(longlong *)(lVar9 + lVar15) + 0x6a);
          iVar6 = (int)((float)iVar7 * fVar20);
          if (cVar4 == '\0') {
            iVar7 = 0;
            lVar12 = 0;
            if (0 < (longlong)iVar6) {
              do {
                if (*(int *)(lVar9 + 0x10 + lVar15) <= iVar7) break;
                lVar13 = *(longlong *)(lVar9 + 8 + lVar15);
                uVar2 = *(undefined8 *)(lVar13 + lVar12 * 8);
                *(undefined8 *)(lVar13 + lVar12 * 8) = 0;
                FUN_140b6d730(param_1,uVar2);
                iVar7 = iVar7 + 1;
                lVar12 = lVar12 + 1;
              } while (lVar12 < iVar6);
            }
          }
          else if (cVar4 == '\x01') {
            if (0 < iVar6) {
              lVar12 = (longlong)(iVar7 + -1);
              do {
                if (lVar12 < 0) break;
                lVar13 = *(longlong *)(lVar9 + 8 + lVar15);
                uVar2 = *(undefined8 *)(lVar13 + lVar12 * 8);
                *(undefined8 *)(lVar13 + lVar12 * 8) = 0;
                FUN_140b6d730(param_1,uVar2);
                iVar6 = iVar6 + -1;
                lVar12 = lVar12 + -1;
              } while (0 < iVar6);
            }
          }
          else if (cVar4 == '\x02') {
            while ((0 < iVar6 && (0 < *(int *)(lVar9 + 0x10 + lVar15)))) {
              iVar5 = rand();
              lVar12 = lVar9 + lVar15;
              iVar5 = iVar5 % *(int *)(lVar9 + 0x10 + lVar15);
              lVar13 = (longlong)iVar5;
              uVar2 = *(undefined8 *)(*(longlong *)(lVar12 + 8) + lVar13 * 8);
              *(undefined8 *)(*(longlong *)(lVar12 + 8) + lVar13 * 8) = 0;
              FUN_140b6d730(param_1,uVar2);
              iVar7 = *(int *)(lVar12 + 0x10);
              iVar10 = (iVar7 - iVar5) + -1;
              if (iVar10 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar12 + 8) + lVar13 * 8),
                           (void *)(*(longlong *)(lVar12 + 8) + (longlong)(iVar5 + 1) * 8),
                           (longlong)iVar10 << 3);
                iVar7 = *(int *)(lVar12 + 0x10);
              }
              *(int *)(lVar12 + 0x10) = iVar7 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar12 + 8);
              iVar6 = iVar6 + -1;
            }
          }
          iVar6 = *(int *)(lVar9 + 0x10 + lVar15);
          iVar7 = iVar6 + -1;
          if (-1 < iVar7) {
            lVar12 = lVar9 + lVar15;
            lVar13 = (longlong)iVar7 * 8;
            lVar19 = (longlong)iVar6 << 3;
            lVar16 = lVar13;
            do {
              lVar3 = *(longlong *)(lVar12 + 8);
              if (*(longlong *)(lVar3 + lVar13) == 0) {
                iVar6 = *(int *)(lVar12 + 0x10);
                iVar5 = (iVar6 - iVar7) + -1;
                if (iVar5 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar3 + lVar16),(void *)(lVar3 + lVar19),(longlong)iVar5 << 3)
                  ;
                  iVar6 = *(int *)(lVar12 + 0x10);
                }
                *(int *)(lVar12 + 0x10) = iVar6 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar12 + 8);
              }
              lVar19 = lVar19 + -8;
              lVar16 = lVar16 + -8;
              lVar13 = lVar13 + -8;
              iVar7 = iVar7 + -1;
            } while (-1 < iVar7);
            iVar6 = *(int *)(lVar9 + 0x10 + lVar15);
          }
          if (iVar6 != 0) goto LAB_140b6fd09;
          if (*(longlong *)(lVar8 + 8 + *plVar18) != 0) {
            FMemory::Free();
          }
        }
        iVar7 = *(int *)(lVar17 + 0x10);
        iVar6 = (iVar7 - iVar14) + -1;
        if (iVar6 != 0) {
          lVar15 = *plVar18;
          goto LAB_140b6fc5a;
        }
        goto LAB_140b6fc66;
      }
LAB_140b6fd09:
      local_80 = local_80 + -0x18;
      iVar14 = iVar14 + -1;
      lVar8 = lVar8 + -0x18;
      lVar9 = lVar9 + -0x18;
    } while (-1 < iVar14);
  }
  FUN_140b6e620(param_1,lVar17);
  if (*(int *)(lVar17 + 0x10) == 0) {
    lVar8 = (longlong)local_88 * 3;
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (*(longlong *)(param_1 + 0x28) + (lVar8 + 1) * 8);
    iVar14 = *(int *)(param_1 + 0x30);
    iVar7 = iVar14 - local_88;
joined_r0x000140b6fd85:
    if (iVar7 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8),
                 (void *)(*(longlong *)(param_1 + 0x28) + (longlong)(local_88 + 1) * 0x18),
                 (longlong)(iVar7 + -1) * 0x18);
      iVar14 = *(int *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x30) = iVar14 + -1;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140b6fdf0 FUN_140b6fdf0 body=313 status=ok
// SIG undefined FUN_140b6fdf0(void)

void FUN_140b6fdf0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar1 = (longlong *)(*param_1 + 0xb8 + (longlong)param_2 * 0xe0);
    iVar2 = param_3;
    do {
      if (plVar1[3] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (plVar1[-2] != 0) {
        FMemory::Free();
      }
      if (plVar1[-4] != 0) {
        FMemory::Free();
      }
      if (plVar1[-6] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0xe] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0x10] != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar1 + -0x13);
      plVar1 = plVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar3 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar3) {
      iVar3 = param_3;
    }
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xe0),
                 (void *)((longlong)(iVar2 - iVar3) * 0xe0 + *param_1),(longlong)iVar3 * 0xe0);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      FUN_140b70760(param_1);
    }
  }
  return;
}



// FUNCTION 140b6ff30 FUN_140b6ff30 body=96 status=ok
// SIG undefined FUN_140b6ff30(void)

void FUN_140b6ff30(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      *(byte *)(lVar1 + 0x71a) = *(byte *)(lVar1 + 0x71a) & 0xbf;
      lVar1 = *(longlong *)(param_1 + 0x6b0);
    }
    FUN_142600fa0(lVar1);
    if (param_2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x3b0))(*(longlong **)(param_1 + 0x6b0),0);
      *(undefined8 *)(param_1 + 0x6b0) = 0;
    }
  }
  return;
}



// FUNCTION 140b6ff90 FUN_140b6ff90 body=391 status=ok
// SIG undefined FUN_140b6ff90(void)

undefined8 FUN_140b6ff90(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1430b3b80();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = FUN_1430772b0(param_2,0);
      uVar7 = 0;
      uVar6 = 0;
      if (0 < iVar2) {
        do {
          lVar3 = (**(code **)(*param_2 + 0x900))(param_2,0,uVar6 & 0xff);
          if (lVar3 != 0) {
            lVar4 = FUN_142a07000();
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
              FUN_142367d60(lVar3);
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar2);
      }
      iVar2 = FUN_1430772b0(param_2,1);
      if (0 < iVar2) {
        do {
          lVar3 = (**(code **)(*param_2 + 0x900))(param_2,1,uVar7 & 0xff);
          if (lVar3 != 0) {
            lVar4 = FUN_142a07000();
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
              FUN_142367d60(lVar3);
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
    }
    else {
      uVar5 = FUN_1429bed90();
      lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
      if (lVar3 != 0) {
        FUN_142367d60(lVar3);
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140b70120 FUN_140b70120 body=305 status=ok
// SIG undefined FUN_140b70120(void)

undefined8 FUN_140b70120(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_1430b3b80();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 1;
  }
  lVar3 = param_1 + 0x198;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x1a0)) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x1a0) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_140b701f6;
    }
  }
  else {
LAB_140b701f6:
    lVar3 = USkeleton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b7022f;
  }
  lVar2 = 0;
LAB_140b7022f:
  FUN_1430940d0(param_2,lVar2);
  return 1;
}



// FUNCTION 140b70260 FUN_140b70260 body=205 status=ok
// SIG undefined FUN_140b70260(void)

void FUN_140b70260(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 == '\x01') {
    lVar4 = 0x920;
  }
  else {
    lVar4 = 0x910;
    if (param_2 == '\x02') {
      lVar4 = 0x930;
    }
  }
  iVar3 = *(int *)(lVar4 + 8 + param_1);
  plVar1 = (longlong *)(lVar4 + param_1);
  iVar6 = iVar3 + -1;
  if (-1 < iVar6) {
    lVar7 = (longlong)iVar6 << 6;
    lVar8 = (longlong)iVar3 << 6;
    lVar4 = lVar7;
    do {
      lVar2 = *plVar1;
      if (((*(longlong *)(lVar7 + lVar2) == 0) && (-1 < iVar6)) &&
         (iVar3 = (int)plVar1[1], iVar6 < iVar3)) {
        iVar5 = (iVar3 - iVar6) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar4 + lVar2),(void *)(lVar8 + lVar2),(longlong)iVar5 << 6);
          iVar3 = (int)plVar1[1];
        }
        *(int *)(plVar1 + 1) = iVar3 + -1;
        TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      lVar8 = lVar8 + -0x40;
      lVar4 = lVar4 + -0x40;
      lVar7 = lVar7 + -0x40;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}



// FUNCTION 140b70330 FUN_140b70330 body=547 status=ok
// SIG undefined FUN_140b70330(void)

void FUN_140b70330(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar9 = 0;
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar11 = *plVar1;
    do {
      iVar8 = 0;
      lVar10 = 0;
      if (0 < *(int *)(lVar11 + 0x10)) {
        lVar7 = *(longlong *)(lVar11 + 8);
        do {
          plVar2 = *(longlong **)(lVar7 + 8);
          iVar4 = *(int *)(lVar7 + 0x10);
          for (plVar5 = plVar2; plVar5 != plVar2 + iVar4; plVar5 = plVar5 + 1) {
            if (*plVar5 == param_2) {
              iVar3 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
              if (iVar3 != -1) {
                iVar6 = (iVar4 - iVar3) + -1;
                if (iVar6 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (plVar2 + iVar3,plVar2 + (iVar3 + 1),(longlong)iVar6 << 3);
                  iVar4 = *(int *)(lVar7 + 0x10);
                }
                *(int *)(lVar7 + 0x10) = iVar4 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar7 + 8);
                if (param_3 != '\0') {
                  FUN_140b6d730(param_1,param_2);
                }
                if (*(int *)(lVar7 + 0x10) == 0) {
                  if (*(longlong *)((longlong)iVar8 * 0x18 + 8 + *(longlong *)(lVar11 + 8)) != 0) {
                    FMemory::Free();
                  }
                  iVar4 = *(int *)(lVar11 + 0x10);
                  iVar3 = (iVar4 - iVar8) + -1;
                  if (iVar3 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(*(longlong *)(lVar11 + 8) + (longlong)iVar8 * 0x18),
                               (void *)(*(longlong *)(lVar11 + 8) + (longlong)(iVar8 + 1) * 0x18),
                               (longlong)iVar3 * 0x18);
                    iVar4 = *(int *)(lVar11 + 0x10);
                  }
                  *(int *)(lVar11 + 0x10) = iVar4 + -1;
                  TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(lVar11 + 8);
                }
                FUN_140b6e620(param_1,lVar11);
                if (*(int *)(lVar11 + 0x10) != 0) {
                  return;
                }
                TArray<FNamedInterfaceDef,FDefaultAllocator>::
                ~TArray<FNamedInterfaceDef,FDefaultAllocator>(*plVar1 + 8 + (longlong)iVar12 * 0x18)
                ;
                iVar8 = *(int *)(param_1 + 0x30);
                iVar4 = (iVar8 - iVar12) + -1;
                if (iVar4 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar1 + (longlong)iVar12 * 0x18),
                             (void *)(*plVar1 + (longlong)(iVar12 + 1) * 0x18),
                             (longlong)iVar4 * 0x18);
                  iVar8 = *(int *)(param_1 + 0x30);
                }
                *(int *)(param_1 + 0x30) = iVar8 + -1;
                TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
                return;
              }
              break;
            }
          }
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 1;
          lVar7 = lVar7 + 0x18;
        } while (lVar10 < *(int *)(lVar11 + 0x10));
      }
      iVar12 = iVar12 + 1;
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x18;
    } while (lVar9 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 140b70560 FUN_140b70560 body=360 status=ok
// SIG undefined FUN_140b70560(void)

void FUN_140b70560(longlong param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong local_58;
  int local_50;
  int iStack_4c;
  uint *local_48;
  undefined8 local_40;
  
  FUN_140b59010(param_3,0);
  if (0 < *(int *)(param_1 + 4)) {
    local_48 = (uint *)0x0;
    local_40 = 0;
    FUN_140b5bfb0(param_1);
    lVar11 = 0;
    iVar10 = 0;
    local_58 = 0;
    iVar12 = 0;
    iStack_4c = 0;
    puVar1 = local_48 + (int)local_40;
    puVar4 = local_48;
    iVar5 = 0;
    for (puVar9 = local_48; local_48 = puVar4, puVar9 != puVar1; puVar9 = puVar9 + 1) {
      uVar2 = *puVar9;
      uVar6 = 0;
      if (0 < (int)uVar2) {
        uVar8 = (ulonglong)uVar2;
        do {
          uVar6 = uVar6 * 2 | 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar3 = *param_2;
      bVar7 = (byte)iVar12;
      local_50 = iVar5 + 1;
      if (iVar10 < local_50) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
        lVar11 = local_58;
        iVar10 = iStack_4c;
      }
      iVar12 = iVar12 + uVar2;
      *(uint *)(lVar11 + (longlong)iVar5 * 4) = iVar3 >> (bVar7 & 0x1f) & uVar6;
      puVar4 = local_48;
      iVar5 = local_50;
    }
    local_50 = iVar5;
    FUN_140b5d1c0(param_1,&local_58,param_3);
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
    if (puVar4 != (uint *)0x0) {
      FMemory::Free(puVar4);
    }
  }
  return;
}



// FUNCTION 140b706d0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x110,0);
  iVar4 = (int)(uVar3 / 0x110);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x110,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140b70760 FUN_140b70760 body=171 status=ok
// SIG undefined FUN_140b70760(void)

ulonglong FUN_140b70760(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0xe0) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0xe0,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 7);
      }
      goto LAB_140b707da;
    }
    if (iVar5 == 0) goto LAB_140b707da;
  }
  iVar5 = iVar6;
LAB_140b707da:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xe0,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140b70810 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x110,0);
    iVar3 = (int)(uVar1 / 0x110);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x110,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140b70890 FUN_140b70890 body=357 status=ok
// SIG undefined FUN_140b70890(void)

undefined8 FUN_140b70890(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar3 = FUN_1414ba680();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = param_4;
    if (bVar2) goto LAB_140b709d7;
  }
  lVar3 = 0;
  if (param_4 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
      if (lVar4 != 0) {
        lVar7 = lVar3;
        if (*(longlong *)(lVar4 + 0x328) != 0) {
          lVar5 = FUN_1413c0f50();
          for (lVar1 = *(longlong *)(lVar4 + 0x328);
              (lVar7 = lVar3, lVar1 != 0 && (lVar7 = *(longlong *)(lVar4 + 0x328), lVar1 != lVar5));
              lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
        }
        uVar6 = FUN_140c428d0(param_4);
        lVar4 = FUN_140e7f920(uVar6,lVar7);
        if (lVar4 != 0) {
          lVar7 = FUN_1414ba680();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar3 = lVar4;
          }
        }
      }
    }
  }
LAB_140b709d7:
  FUN_142cb2580(param_2,lVar3);
  return param_2;
}



// FUNCTION 140b70a00 FUN_140b70a00 body=505 status=ok
// SIG undefined FUN_140b70a00(void)

void FUN_140b70a00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x4d8) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x4dc) = *(undefined4 *)(lVar1 + 0x14);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x120);
    if ((((lVar4 == 0) && (lVar4 = FUN_1423407b0(), lVar4 == 0)) ||
        (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 == 0)) ||
       (*(char *)(lVar4 + 0x670) == '\0')) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar4 + 0x674);
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (iVar3 == *(int *)(lVar4 + 0x4dc)) {
      lVar6 = *(longlong *)(lVar1 + 0x18);
      lVar7 = (longlong)*(int *)(lVar1 + 0x20) * 0x30 + lVar6;
      if (lVar6 != lVar7) {
        do {
          uVar5 = (**(code **)(*(longlong *)(param_1 + -0x660) + 0x148))(param_1 + -0x660);
          uVar5 = FUN_140b7dac0(uVar5,lVar6);
          FUN_140b1a330(*(undefined8 *)(param_1 + 0x48),uVar5);
          lVar6 = lVar6 + 0x30;
        } while (lVar6 != lVar7);
        lVar4 = *(longlong *)(param_1 + 0x48);
      }
      lVar6 = *(longlong *)(lVar1 + 0x38);
      lVar7 = (longlong)*(int *)(lVar1 + 0x40) * 0x30 + lVar6;
      if (lVar6 != lVar7) {
        do {
          uVar5 = (**(code **)(*(longlong *)(param_1 + -0x660) + 0x148))(param_1 + -0x660);
          lVar4 = FUN_140b7dac0(uVar5,lVar6);
          if (lVar4 != 0) {
            lVar2 = *(longlong *)(param_1 + 0x48);
            iVar3 = *(int *)(lVar2 + 0x4c0);
            *(int *)(lVar2 + 0x4c0) = iVar3 + 1;
            if (*(int *)(lVar2 + 0x4c4) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x4b8,iVar3)
              ;
            }
            *(longlong *)(*(longlong *)(lVar2 + 0x4b8) + (longlong)iVar3 * 8) = lVar4;
          }
          lVar6 = lVar6 + 0x30;
        } while (lVar6 != lVar7);
        lVar4 = *(longlong *)(param_1 + 0x48);
      }
      lVar6 = *(longlong *)(lVar1 + 0x68);
      lVar1 = lVar6 + (longlong)*(int *)(lVar1 + 0x70) * 8;
      if (lVar6 != lVar1) {
        do {
          lVar4 = FWeakObjectPtr::Get(lVar6);
          if (lVar4 != 0) {
            FUN_140b3be70(*(undefined8 *)(param_1 + 0x48),lVar4);
          }
          lVar6 = lVar6 + 8;
        } while (lVar6 != lVar1);
        lVar4 = *(longlong *)(param_1 + 0x48);
      }
      FUN_140b22160(lVar4);
      return;
    }
    FUN_140b3dbb0();
  }
  return;
}



// FUNCTION 140b70c00 FUN_140b70c00 body=231 status=ok
// SIG undefined FUN_140b70c00(void)

void FUN_140b70c00(longlong param_1,float param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x4f0) != 0) && (*(longlong **)(param_1 + 0x4e8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x4f0) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x4e8);
    }
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 == '\0') {
      return;
    }
  }
  if ((param_4 != '\0') && (cVar1 = FUN_140b602a0(param_1), cVar1 == '\0')) {
    return;
  }
  if ((param_3 != '\0') || (*(int *)(param_1 + 0x978) != 0)) {
    if ((param_4 != '\0') && (cVar1 = FUN_140b606e0(param_1), cVar1 == '\0')) {
      return;
    }
    iVar2 = FUN_140b56750(param_1,0,*(undefined4 *)(param_1 + 0x978),
                          *(undefined1 *)(param_1 + 0x581));
    if ((0 < iVar2) && (*(float *)(param_1 + 0x568) < param_2)) {
      param_2 = *(float *)(param_1 + 0x568);
    }
    FUN_140b70de0(param_1,0,iVar2 + 1,param_2,0);
  }
  return;
}



// FUNCTION 140b70cf0 FUN_140b70cf0 body=240 status=ok
// SIG undefined FUN_140b70cf0(void)

void FUN_140b70cf0(longlong param_1,float param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x4f0) != 0) && (*(longlong **)(param_1 + 0x4e8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x4f0) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x4e8);
    }
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 == '\0') {
      return;
    }
  }
  if ((param_4 != '\0') && (cVar1 = FUN_140b602a0(param_1), cVar1 == '\0')) {
    return;
  }
  if (param_3 == '\0') {
    cVar1 = FUN_140b609b0(param_1,*(undefined4 *)(param_1 + 0x978));
    if (cVar1 != '\0') {
      return;
    }
  }
  if ((param_4 != '\0') && (cVar1 = FUN_140b606e0(param_1), cVar1 == '\0')) {
    return;
  }
  iVar2 = FUN_140b56750(param_1,1,*(undefined4 *)(param_1 + 0x978),*(undefined1 *)(param_1 + 0x581))
  ;
  if ((0 < iVar2) && (*(float *)(param_1 + 0x568) < param_2)) {
    param_2 = *(float *)(param_1 + 0x568);
  }
  FUN_140b70de0(param_1,1,iVar2 + 1,param_2,0);
  return;
}



// FUNCTION 140b70de0 FUN_140b70de0 body=1156 status=ok
// SIG undefined FUN_140b70de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b70de0(longlong *param_1,char param_2,uint param_3,float param_4,char param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined4 local_130;
  char local_128 [8];
  longlong *local_120;
  int local_118;
  code *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  ulonglong local_88;
  
  if ((int)param_3 < 1) {
    return;
  }
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(char *)((longlong)param_1 + 0x4d4) == '\0') {
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0x13b);
    param_1[0x13b] = 0;
  }
  lVar1 = param_1[0x12f];
  uVar6 = 1;
  if (param_2 == '\0') {
    if (param_3 == 2) {
      lVar4 = 6;
    }
    else if (param_3 == 3) {
      lVar4 = 7;
    }
    else {
      lVar4 = 5;
    }
  }
  else if (param_3 == 2) {
    lVar4 = 2;
  }
  else if (param_3 == 3) {
    lVar4 = 3;
  }
  else {
    lVar4 = 1;
  }
  if ((param_1[lVar4 + 0xb1] == 0) || (param_5 != '\0')) {
    if (param_2 != '\0') {
      lVar4 = 1;
      goto LAB_140b70efe;
    }
    lVar4 = 5;
  }
  else {
    uVar6 = (ulonglong)param_3;
    param_3 = 1;
LAB_140b70efe:
    iVar5 = (int)uVar6;
    if (iVar5 < 1) goto LAB_140b70f31;
    if (param_2 != '\0') {
      do {
        FUN_140b5f570(param_1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      goto LAB_140b70f31;
    }
  }
  iVar5 = (int)uVar6;
  do {
    FUN_140b57a70(param_1);
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
LAB_140b70f31:
  if ((int)lVar1 != (int)param_1[0x12f]) {
    plVar2 = (longlong *)param_1[0x12a];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x290))(plVar2,1);
    }
    plVar2 = (longlong *)param_1[300];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x290))(plVar2,1);
    }
    plVar2 = (longlong *)param_1[0x12d];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x290))(plVar2,1);
    }
    if (0.0 < param_4) {
      param_4 = param_4 / (float)(int)param_3;
    }
    uVar7 = FUN_140b6b900(param_1,lVar4,param_4);
    local_128[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xa5,local_128);
    if (1 < (int)param_3) {
      local_120 = (longlong *)0x0;
      local_118 = 0;
      local_110 = FUN_140b70de0;
      uStack_108 = 0;
      plVar2 = (longlong *)FMemory::Realloc(0,0x40,0);
      if (plVar2 == (longlong *)0x0) {
        if (((local_118 != 0) && (local_120 != (longlong *)0x0)) &&
           ((**(code **)(*local_120 + 0x28))(local_120,0), local_120 != (longlong *)0x0)) {
          local_120 = (longlong *)FMemory::Realloc(local_120,0,0);
        }
      }
      else {
        *plVar2 = (longlong)&PTR_FUN_1442cc630;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        plVar2[2] = (longlong)local_110;
        plVar2[3] = CONCAT44(uStack_104,uStack_108);
        *(char *)(plVar2 + 4) = param_2;
        *(uint *)((longlong)plVar2 + 0x24) = param_3 - iVar5;
        *(float *)(plVar2 + 5) = (float)(int)(param_3 - iVar5) * param_4;
        *(char *)((longlong)plVar2 + 0x2c) = param_5;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[6] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_1442cc678;
        TBaseUObjectMethodDelegateInstance<0,UVisualComponent,TTypeWrapper<void>___cdecl(void),FName,FName>
        ::CreateCopy(plVar2,&local_120);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar1 + 400) == 0) {
          uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
        }
        else {
          uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
        }
        local_f8 = 0;
        local_f0 = 0;
        if ((local_118 != 0) && (local_120 != (longlong *)0x0)) {
          (**(code **)(*local_120 + 0x30))(local_120,&local_f8);
        }
        FWeakObjectPtr::operator=(local_e8,0);
        local_130 = 0xbf800000;
        local_138 = 0;
        local_e0 = 0;
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar3,param_1 + 0x13b,&local_f8,uVar7);
        if (local_98 != 0) {
          plVar2 = local_c8;
          if (local_a8 != (longlong *)0x0) {
            plVar2 = local_a8;
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,0);
          }
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
      }
      if (local_118 != 0) {
        if (local_120 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_120 + 0x28))(local_120,0);
        if (local_120 != (longlong *)0x0) {
          local_120 = (longlong *)FMemory::Realloc(local_120,0,0);
        }
        local_118 = 0;
      }
      if (local_120 != (longlong *)0x0) {
        FMemory::Free(local_120);
      }
    }
  }
  return;
}



// FUNCTION 140b71270 FUN_140b71270 body=78 status=ok
// SIG undefined FUN_140b71270(void)

void FUN_140b71270(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x578) != 0) {
    lVar1 = FUN_1423b0890();
    if (lVar1 != 0) {
      if (param_2 != '\0') {
        FUN_1422b3f10(lVar1,0);
        return;
      }
      FUN_1422b3f10(lVar1,0x3f800000);
      return;
    }
  }
  return;
}



// FUNCTION 140b712c0 FUN_140b712c0 body=254 status=ok
// SIG undefined FUN_140b712c0(void)

void FUN_140b712c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (param_2 != 0) {
    local_40 = 0x3f800000;
    local_48 = 0x3f8000003f800000;
    local_30 = DAT_1468b5da8;
    local_38 = DAT_1468b5da0;
    local_10 = 0;
    local_20 = 0;
    local_28 = 0;
    lVar1 = FUN_14245fd00(param_2,*(undefined8 *)(param_1 + 0x168),0,&local_28,&local_38,&local_48,2
                          ,1,0,1,0);
    if (lVar1 != 0) {
      if (*(longlong *)(param_1 + 0x6b0) != 0) {
        FUN_142600fa0();
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x3b0))(*(longlong **)(param_1 + 0x6b0),0);
      }
      *(longlong *)(param_1 + 0x6b0) = lVar1;
    }
  }
  return;
}



// FUNCTION 140b713c0 FUN_140b713c0 body=74 status=ok
// SIG undefined FUN_140b713c0(void)

void FUN_140b713c0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x6b0) != 0) {
      FUN_142600fa0();
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x3b0))(*(longlong **)(param_1 + 0x6b0),0);
    }
    *(longlong *)(param_1 + 0x6b0) = param_2;
  }
  return;
}



// FUNCTION 140b71410 FUN_140b71410 body=737 status=ok
// SIG undefined FUN_140b71410(void)

void FUN_140b71410(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                  float param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  lVar5 = 0;
  lVar4 = 0x3f;
  uVar6 = 4;
  do {
    iVar7 = 0;
    if (uVar6 - 4 < 0x1f9) {
      if (param_6 <= 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = param_6;
        if (1.0 <= param_6) {
          fVar8 = 1.0;
        }
      }
      iVar3 = (int)((1.0 - fVar8) * (float)*(byte *)(lVar5 + param_2) + (float)param_5 * fVar8);
      if (iVar3 < 1) {
        iVar3 = iVar7;
      }
      iVar1 = 0xff;
      if (iVar3 < 0xff) {
        iVar1 = iVar3;
      }
      *(char *)(lVar5 + param_2) = (char)iVar1;
      if (param_6 <= 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = param_6;
        if (1.0 <= param_6) {
          fVar8 = 1.0;
        }
      }
      iVar3 = (int)((1.0 - fVar8) * (float)*(byte *)(lVar5 + 1 + param_2) + (float)param_4 * fVar8);
      if (iVar3 < 1) {
        iVar3 = iVar7;
      }
      iVar1 = 0xff;
      if (iVar3 < 0xff) {
        iVar1 = iVar3;
      }
      *(char *)(lVar5 + 1 + param_2) = (char)iVar1;
      if (param_6 <= 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = param_6;
        if (1.0 <= param_6) {
          fVar8 = 1.0;
        }
      }
      *(undefined1 *)(lVar5 + 3 + param_2) = 0xff;
      iVar3 = (int)((1.0 - fVar8) * (float)*(byte *)(lVar5 + 2 + param_2) + (float)param_3 * fVar8);
      if (iVar3 < 1) {
        iVar3 = iVar7;
      }
      iVar1 = 0xff;
      if (iVar3 < 0xff) {
        iVar1 = iVar3;
      }
      *(char *)(lVar5 + 2 + param_2) = (char)iVar1;
    }
    uVar2 = uVar6 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    if ((uVar2 == 0) && (uVar6 < 0x1f9)) {
      if (param_6 <= 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = param_6;
        if (1.0 <= param_6) {
          fVar8 = 1.0;
        }
      }
      iVar3 = (int)((1.0 - fVar8) * (float)*(byte *)(lVar5 + 4 + param_2) + (float)param_5 * fVar8);
      if (iVar3 < 1) {
        iVar3 = iVar7;
      }
      iVar1 = 0xff;
      if (iVar3 < 0xff) {
        iVar1 = iVar3;
      }
      *(char *)(lVar5 + 4 + param_2) = (char)iVar1;
      if (param_6 <= 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = param_6;
        if (1.0 <= param_6) {
          fVar8 = 1.0;
        }
      }
      iVar3 = (int)((1.0 - fVar8) * (float)*(byte *)(lVar5 + 5 + param_2) + (float)param_4 * fVar8);
      if (iVar3 < 1) {
        iVar3 = iVar7;
      }
      iVar1 = 0xff;
      if (iVar3 < 0xff) {
        iVar1 = iVar3;
      }
      *(char *)(lVar5 + 5 + param_2) = (char)iVar1;
      if (param_6 <= 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = param_6;
        if (1.0 <= param_6) {
          fVar8 = 1.0;
        }
      }
      iVar3 = (int)((1.0 - fVar8) * (float)*(byte *)(lVar5 + 6 + param_2) + (float)param_3 * fVar8);
      if (iVar3 < 1) {
        iVar3 = iVar7;
      }
      iVar7 = 0xff;
      if (iVar3 < 0xff) {
        iVar7 = iVar3;
      }
      *(char *)(lVar5 + 6 + param_2) = (char)iVar7;
      *(undefined1 *)(lVar5 + 7 + param_2) = 0xff;
    }
    uVar6 = uVar6 + 8;
    lVar5 = lVar5 + 8;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 140b71700 FUN_140b71700 body=33 status=ok
// SIG undefined FUN_140b71700(void)

void FUN_140b71700(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x97c) = param_2;
  FUN_140b6ed80();
  FUN_140b6e2b0(param_1);
  return;
}



// FUNCTION 140b71730 FUN_140b71730 body=698 status=ok
// SIG undefined FUN_140b71730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b71730(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  longlong *local_f8;
  int local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  if (param_2 != (longlong *)0x0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
    FWeakObjectPtr::operator=(&local_e8);
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    FWeakObjectPtr::operator=(&local_e0,param_1);
    plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar1 == (longlong *)0x0) {
      if (((local_f0 != 0) && (local_f8 != (longlong *)0x0)) &&
         ((**(code **)(*local_f8 + 0x28))(local_f8,0), local_f8 != (longlong *)0x0)) {
        local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
      }
    }
    else {
      *plVar1 = (longlong)&PTR_GetPoolName_1442cbc10;
      *(undefined4 *)(plVar1 + 1) = local_e8;
      *(undefined4 *)((longlong)plVar1 + 0xc) = local_e4;
      *(undefined4 *)(plVar1 + 2) = local_e0;
      *(undefined4 *)((longlong)plVar1 + 0x14) = local_dc;
      plVar1[3] = param_5;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[5] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_1442cbc58;
      FUN_140b56e50(plVar1,&local_f8);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_d8[0] = 0;
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      local_c8 = 0;
      local_c0 = 0;
      if ((local_f0 != 0) && (local_f8 != (longlong *)0x0)) {
        (**(code **)(*local_f8 + 0x30))(local_f8,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_100 = 0xbf800000;
      local_108 = 0;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,local_d8,&local_c8,param_4);
      if (local_68 != 0) {
        plVar1 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar1 = local_78;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    }
    if (local_f0 != 0) {
      if (local_f8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_f8 + 0x28))(local_f8,0);
      if (local_f8 != (longlong *)0x0) {
        local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
      }
      local_f0 = 0;
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  return;
}



// FUNCTION 140b719f0 FUN_140b719f0 body=48 status=ok
// SIG undefined FUN_140b719f0(void)

void FUN_140b719f0(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x580) = param_2;
  if (param_2 == '\0') {
    FUN_140b71f50(param_1,0);
    return;
  }
  if (param_2 != '\x01') {
    if (param_2 == '\x02') {
      FUN_140b71f50(param_1,2);
      return;
    }
    return;
  }
  FUN_140b71f50(param_1,1);
  return;
}



// FUNCTION 140b71a20 FUN_140b71a20 body=332 status=ok
// SIG undefined FUN_140b71a20(void)

void FUN_140b71a20(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_140ae35c0();
  if (param_2 != 0) {
    lVar3 = UFocusButtonWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140b71a72;
  }
  param_2 = 0;
LAB_140b71a72:
  *(longlong *)(param_1 + 0x900) = param_2;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x6a8);
  }
  *(longlong *)(param_1 + 0x908) = lVar3;
  if (lVar3 != 0) {
    FUN_140483870(lVar3 + 0x2c0,param_1);
    lVar3 = *(longlong *)(param_1 + 0x908);
    plVar7 = (longlong *)(lVar3 + 0x2c0);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = 0x40b5e840;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = *(int *)(lVar3 + 0x2c8);
      *(int *)(lVar3 + 0x2c8) = iVar1 + 1;
      if (*(int *)(lVar3 + 0x2cc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140b71b70 FUN_140b71b70 body=53 status=ok
// SIG undefined FUN_140b71b70(void)

void FUN_140b71b70(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_140ae35d0();
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x4d8) + 0xc90);
  }
  *(undefined8 *)(param_1 + 0x8f0) = uVar1;
  FUN_140b5e840(param_1);
  return;
}



// FUNCTION 140b71bb0 FUN_140b71bb0 body=262 status=ok
// SIG undefined FUN_140b71bb0(void)

void FUN_140b71bb0(longlong param_1,char param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_2 != '\0') {
    FUN_142397540(param_3,0);
    cVar1 = (**(code **)(*param_3 + 0x2a0))(param_3);
    if (cVar1 == '\0') {
      (**(code **)(*param_3 + 0x290))(param_3,1,0);
    }
    (**(code **)(*param_3 + 0x418))(param_3,&DAT_146532190);
    FUN_142382f60(param_3,*(undefined8 *)(param_1 + 0x578),&DAT_146532184,param_6);
    local_28 = *param_5;
    local_20 = *(undefined4 *)(param_5 + 1);
    local_18 = *param_4;
    local_10 = *(undefined4 *)(param_4 + 1);
    FUN_1423982b0(param_3,&local_18,&local_28,0,0,0);
    return;
  }
  FUN_142397540(param_3,1);
                    /* WARNING: Could not recover jumptable at 0x000140b71caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x290))(param_3,0,0);
  return;
}



// FUNCTION 140b71cc0 FUN_140b71cc0 body=643 status=ok
// SIG undefined FUN_140b71cc0(void)

void FUN_140b71cc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  *(longlong *)(param_1 + 0x4d8) = param_2;
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x4b8) = *(undefined1 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_2 + 0x148);
  plVar1 = *(longlong **)(param_1 + 0x4c0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x928))(plVar1,*(undefined8 *)(param_2 + 0x120));
    lVar5 = *(longlong *)(param_1 + 0x4d8);
    uVar7 = uVar8;
    uVar9 = uVar8;
    if (0 < *(int *)(lVar5 + 0x130)) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x568))
                  (*(longlong **)(param_1 + 0x4c0),uVar7,
                   *(undefined8 *)(uVar9 + *(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x128)));
        lVar5 = *(longlong *)(param_1 + 0x4d8);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar9 = uVar9 + 8;
      } while ((int)uVar6 < *(int *)(lVar5 + 0x130));
    }
    local_20 = *(undefined4 *)(lVar5 + 0x138);
    local_28 = CONCAT44(local_20,local_20);
    local_10 = local_20;
    (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x3f8))
              (*(longlong **)(param_1 + 0x4c0),&local_28);
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar4 = FUN_143025260();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar5 + 0x480), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x928))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x4d8) + 0x120))
      ;
      lVar4 = *(longlong *)(param_1 + 0x4d8);
      uVar7 = uVar8;
      if (0 < *(int *)(lVar4 + 0x130)) {
        do {
          (**(code **)(**(longlong **)(lVar5 + 0x480) + 0x568))
                    (*(longlong **)(lVar5 + 0x480),uVar8,
                     *(undefined8 *)(uVar7 + *(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x128)))
          ;
          lVar4 = *(longlong *)(param_1 + 0x4d8);
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
          uVar7 = uVar7 + 8;
        } while ((int)uVar6 < *(int *)(lVar4 + 0x130));
      }
      local_20 = *(undefined4 *)(lVar4 + 0x138);
      local_28 = CONCAT44(local_20,local_20);
      local_10 = local_20;
      (**(code **)(**(longlong **)(lVar5 + 0x480) + 0x3f8))(*(longlong **)(lVar5 + 0x480),&local_28)
      ;
    }
  }
  if ((*(char *)(param_1 + 0x128) == '\x03') &&
     (plVar1 = *(longlong **)(param_1 + 0x498), plVar1 != (longlong *)0x0)) {
    lVar5 = FUN_1414c19b0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((*(byte *)(plVar1 + 99) & 1) != 0)) {
      lVar5 = *plVar1;
      iVar3 = FUN_14233f450(plVar1);
      (**(code **)(lVar5 + 0x508))(plVar1,iVar3 == 3);
    }
  }
  return;
}



// FUNCTION 140b71f50 FUN_140b71f50 body=869 status=ok
// SIG undefined FUN_140b71f50(void)

void FUN_140b71f50(longlong *param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (*(char *)((longlong)param_1 + 0x581) == param_2) {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))();
  lVar14 = 0;
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar7,param_1 + 0x13b);
    param_1[0x13b] = 0;
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x581);
  iVar8 = (int)param_1[0x12f];
  uVar9 = 2;
  if (bVar1 < 2) {
    uVar9 = (ulonglong)(uint)bVar1;
  }
  lVar10 = uVar9 + 0x98;
  lVar12 = 0x920;
  lVar3 = lVar12;
  if ((bVar1 != 1) && (lVar3 = 0x910, bVar1 == 2)) {
    lVar3 = 0x930;
  }
  if (((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 8 + (longlong)param_1))) &&
     (lVar3 = (longlong)iVar8 * 0x40 + *(longlong *)(lVar3 + (longlong)param_1), lVar3 != 0)) {
    lVar14 = *(longlong *)(lVar3 + 8);
  }
  param_1[lVar10 * 2] = lVar14;
  *(int *)(param_1 + lVar10 * 2 + 1) = (int)param_1[0x12f];
  lVar3 = 0x928;
  lVar14 = lVar3;
  if ((*(char *)((longlong)param_1 + 0x581) != '\x01') &&
     (lVar14 = 0x918, *(char *)((longlong)param_1 + 0x581) == '\x02')) {
    lVar14 = 0x938;
  }
  *(undefined4 *)((longlong)param_1 + lVar10 * 0x10 + 0xc) =
       *(undefined4 *)(lVar14 + (longlong)param_1);
  *(char *)((longlong)param_1 + 0x581) = param_2;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  if (param_2 == '\x01') {
    FUN_140b70260(param_1,1);
  }
  else if (param_2 == '\x02') {
    plVar4 = param_1 + 0x126;
    iVar8 = (int)param_1[0x127] + -1;
    if (-1 < iVar8) {
      lVar13 = (longlong)iVar8 << 6;
      lVar10 = (longlong)(int)param_1[0x127] << 6;
      lVar14 = lVar13;
      do {
        if (*(longlong *)(lVar13 + *plVar4) != 0) {
          FUN_142227350(*(longlong *)(lVar13 + *plVar4),0,1);
          *(undefined8 *)(lVar13 + *plVar4) = 0;
        }
        if ((-1 < iVar8) && (iVar2 = (int)param_1[0x127], iVar8 < iVar2)) {
          iVar5 = (iVar2 - iVar8) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar4 + lVar14),(void *)(*plVar4 + lVar10),(longlong)iVar5 << 6);
            iVar2 = (int)param_1[0x127];
          }
          *(int *)(param_1 + 0x127) = iVar2 + -1;
          TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar4);
        }
        lVar10 = lVar10 + -0x40;
        lVar14 = lVar14 + -0x40;
        lVar13 = lVar13 + -0x40;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  uVar9 = 0;
  bVar1 = *(byte *)((longlong)param_1 + 0x581);
  uVar6 = 2;
  if (bVar1 < 2) {
    uVar6 = (uint)bVar1;
  }
  lVar10 = (ulonglong)uVar6 + 0x98;
  lVar14 = lVar3;
  if ((bVar1 != 1) && (lVar14 = 0x918, bVar1 == 2)) {
    lVar14 = 0x938;
  }
  if (*(int *)((longlong)param_1 + lVar10 * 0x10 + 0xc) == *(int *)(lVar14 + (longlong)param_1)) {
    *(int *)(param_1 + 0x12f) = (int)param_1[lVar10 * 2 + 1];
  }
  else if (param_1[lVar10 * 2] != 0) {
    if ((bVar1 != 1) && (lVar12 = 0x910, bVar1 == 2)) {
      lVar12 = 0x930;
    }
    iVar8 = *(int *)((longlong)param_1 + lVar12 + 8);
    if (0 < iVar8) {
      plVar4 = (longlong *)(*(longlong *)((longlong)param_1 + lVar12) + 8);
      uVar11 = uVar9;
      do {
        iVar2 = (int)uVar11;
        if (*plVar4 == param_1[lVar10 * 2]) {
          if (iVar2 != -1) {
            *(int *)(param_1 + 0x12f) = iVar2;
          }
          break;
        }
        uVar11 = (ulonglong)(iVar2 + 1);
        uVar9 = uVar9 + 1;
        plVar4 = plVar4 + 8;
      } while ((longlong)uVar9 < (longlong)iVar8);
    }
  }
  FUN_140b55de0(param_1);
  bVar1 = *(byte *)((longlong)param_1 + 0x581);
  if (bVar1 == 0) {
    plVar4 = param_1;
    FUN_140b5e4a0(param_1);
  }
  else {
    if (bVar1 != 1) {
      uVar6 = bVar1 - 2;
      plVar4 = (longlong *)(ulonglong)uVar6;
      if (uVar6 != 0) goto LAB_140b7222e;
      *(undefined4 *)(param_1 + 0x12f) = 0;
    }
    plVar4 = param_1;
    FUN_140b5e450(param_1);
  }
LAB_140b7222e:
  if ((*(char *)((longlong)param_1 + 0x581) != '\x01') &&
     (lVar3 = 0x918, *(char *)((longlong)param_1 + 0x581) == '\x02')) {
    lVar3 = 0x938;
  }
  iVar8 = *(int *)(lVar3 + (longlong)param_1) - (int)param_1[0xab];
  if ((int)param_1[0x12f] == iVar8 + -1) {
    iVar2 = (int)((ulonglong)plVar4 >> 8) << 8;
  }
  else {
    iVar2 = (int)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
    if (((int)param_1[0x12f] == iVar8 + -2) && (iVar2 = 1, 3 < iVar8)) {
      iVar2 = 0;
    }
  }
  FUN_140b6b900(param_1,iVar2 + 0xe,0xbf800000);
  *(int *)(param_1 + 0x13f) = (int)param_1[0x12f];
  *(undefined1 *)((longlong)param_1 + 0x9f4) = 0;
  return;
}



// FUNCTION 140b722c0 FUN_140b722c0 body=57 status=ok
// SIG undefined FUN_140b722c0(void)

void FUN_140b722c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if ((param_2[1] != 0) && (*(char *)((longlong)param_2 + 0x34) == '\0')) {
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x3a0))(plVar1,0x3f000000);
    }
    *(undefined1 *)((longlong)param_2 + 0x34) = 1;
  }
  return;
}



// FUNCTION 140b72300 FUN_140b72300 body=994 status=ok
// SIG undefined FUN_140b72300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b72300(longlong param_1)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_68 [96];
  
  if ((*(longlong *)(param_1 + 0x6c0) != 0) && (*(longlong *)(param_1 + 0x5b0) != 0)) {
    plVar11 = (longlong *)FUN_1412d7880();
    plVar2 = *(longlong **)(param_1 + 0x5b0);
    plVar14 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      while (plVar14 != plVar11) {
        plVar14 = (longlong *)plVar14[6];
        if (plVar14 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        lVar15 = plVar2[0x1f];
        if (lVar15 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar15 = plVar2[0x1f];
          if (lVar15 == 0) {
            return;
          }
        }
        lVar12 = FUN_1414e47c0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (((bVar7) && (*(longlong *)(lVar15 + 0x578) != 0)) &&
           (lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x578) + 0x718), lVar12 != 0)) {
          USkeletalMesh::GetBounds(lVar12,&local_88);
          fStack_9c = local_7c + local_88;
          fStack_94 = local_80 + local_74;
          local_b0 = local_80 - local_74;
          fStack_98 = local_84 + local_78;
          local_a8 = CONCAT44(local_84 - local_78,local_88 - local_7c);
          fStack_a0 = local_b0;
          if (*(longlong *)(lVar12 + 0x100) != 0) {
            uStack_c0._0_4_ = fStack_94;
            puVar13 = (undefined8 *)
                      FUN_1426b9f00(*(longlong *)(lVar12 + 0x100),local_68,
                                    *(undefined8 *)(lVar15 + 0x578),&DAT_1468b5b70);
            local_a8 = *puVar13;
            fStack_a0 = (float)puVar13[1];
            fStack_9c = (float)((ulonglong)puVar13[1] >> 0x20);
            fStack_98 = (float)puVar13[2];
            fStack_94 = (float)((ulonglong)puVar13[2] >> 0x20);
          }
          fVar10 = fStack_94;
          fVar9 = fStack_98;
          fVar8 = fStack_9c;
          lVar15 = *(longlong *)(param_1 + 0x6c0);
          pfVar1 = (float *)(lVar15 + 0x280);
          local_b0 = (fStack_94 + fStack_a0) * 0.5;
          local_b8 = CONCAT44((fStack_98 + local_a8._4_4_) * 0.5,((float)local_a8 + fStack_9c) * 0.5
                             );
          if (((*(float *)(lVar15 + 0x1f8) == *pfVar1) &&
              (*(float *)(lVar15 + 0x1fc) == *(float *)(lVar15 + 0x284))) &&
             (*(float *)(lVar15 + 0x200) == *(float *)(lVar15 + 0x288))) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            local_c8 = *(undefined8 *)*(undefined1 (*) [12])(lVar15 + 0x1f8);
            auVar16._12_4_ = 0;
            auVar16._0_12_ = *(undefined1 (*) [12])(lVar15 + 0x1f8);
            fVar3 = (float)DAT_146869310;
            fVar4 = DAT_146869310._4_4_;
            fVar5 = DAT_146869310._8_4_;
            auVar16 = divps(auVar16,_DAT_146869310);
            fVar18 = (float)local_c8 - (float)(int)auVar16._0_4_ * fVar3;
            fVar19 = (float)((ulonglong)local_c8 >> 0x20) - (float)(int)auVar16._4_4_ * fVar4;
            fVar20 = *(float *)(lVar15 + 0x200) - (float)(int)auVar16._8_4_ * fVar5;
            fVar18 = (float)(((uint)(fVar18 + fVar3) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                            (uint)(fVar18 + fVar3));
            fVar19 = (float)(((uint)(fVar19 + fVar4) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                            (uint)(fVar19 + fVar4));
            fVar20 = (float)(((uint)(fVar20 + fVar5) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                            (uint)(fVar20 + fVar5));
            uVar17 = ((uint)(fVar20 - fVar5) ^ (uint)fVar20) &
                     -(uint)(fRam0000000146869308 < fVar20) ^ (uint)fVar20;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar17);
            *(ulonglong *)pfVar1 =
                 CONCAT44(((uint)(fVar19 - fVar4) ^ (uint)fVar19) &
                          -(uint)(fRam0000000146869304 < fVar19) ^ (uint)fVar19,
                          ((uint)(fVar18 - fVar3) ^ (uint)fVar18) & -(uint)(_DAT_146869300 < fVar18)
                          ^ (uint)fVar18);
            *(uint *)(lVar15 + 0x288) = uVar17;
            puVar13 = (undefined8 *)FRotator::Quaternion(pfVar1,local_68);
            uVar6 = puVar13[1];
            *(undefined8 *)(lVar15 + 0x270) = *puVar13;
            *(undefined8 *)(lVar15 + 0x278) = uVar6;
          }
          local_c8 = *(undefined8 *)(lVar15 + 0x270);
          uStack_c0 = *(undefined8 *)(lVar15 + 0x278);
          FUN_142397be0(lVar15,&local_b8,&local_c8,0,0,0);
          local_b0 = (fVar10 - fStack_a0) * 0.5;
          local_b8 = CONCAT44((fVar9 - local_a8._4_4_) * 0.5,(fVar8 - (float)local_a8) * 0.5);
          uStack_c0 = CONCAT44(uStack_c0._4_4_,local_b0);
          FUN_14234fd70(*(undefined8 *)(param_1 + 0x6c0),&local_b8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b726f0 FUN_140b726f0 body=43 status=ok
// SIG undefined FUN_140b726f0(void)

undefined1 FUN_140b726f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140ae3aa0();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x9ec) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140b72720 FUN_140b72720 body=241 status=ok
// SIG undefined FUN_140b72720(void)

undefined8 FUN_140b72720(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x5a8) == '\0') {
    return 0;
  }
  param_2 = param_2 + 0x6c;
  lVar3 = FWeakObjectPtr::Get(param_2);
  if (lVar3 != 0) {
    uVar4 = UScrollBox::GetPrivateStaticClass();
    uVar5 = FWeakObjectPtr::Get(param_2);
    lVar3 = AGameStateBase::OnRep_GameModeClass(uVar5,uVar4);
    if (lVar3 != 0) {
      lVar6 = UScrollBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(char *)(param_1 + 0x5aa) != '\0') {
          return 1;
        }
        if (*(char *)(param_1 + 0x5ab) == '\0') {
          return 0;
        }
        uVar4 = FWeakObjectPtr::Get(param_2);
        lVar3 = FUN_142df3510(uVar4);
        if (lVar3 == 0) {
          return 0;
        }
        iVar2 = FUN_142dec940(lVar3,param_1);
        if (iVar2 != 2) {
          return 0;
        }
        return 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x5a9) == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 140b72820 FUN_140b72820 body=609 status=ok
// SIG undefined FUN_140b72820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b72820(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_4b8 [32];
  undefined4 local_498;
  undefined4 local_494;
  undefined1 local_488 [560];
  longlong local_258 [2];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_200;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_180;
  int local_178;
  undefined1 local_170 [304];
  longlong local_40;
  ulonglong local_28;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar2 = AUGAICharacter::GetPrivateStaticClass();
  lVar1 = *(longlong *)(param_1 + 0x30);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (lVar1 == lVar2) break;
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_140b4bbc0(local_258);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = AUGAICharacter::GetPrivateStaticClass();
    local_258[0] = *(longlong *)(param_1 + 0x30);
    for (lVar1 = local_258[0]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_140b728e0;
    }
  }
  local_258[0] = 0;
LAB_140b728e0:
  local_248 = *param_3;
  uStack_240 = param_3[1];
  local_238 = *(undefined4 *)(param_3 + 2);
  uStack_234 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_230 = *(undefined4 *)(param_3 + 3);
  uStack_22c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_228 = *(undefined4 *)(param_3 + 4);
  uStack_224 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_220 = *(undefined4 *)(param_3 + 5);
  uStack_21c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_1e8 = param_2;
  local_1e0 = FUN_140a63ba0(param_2);
  FWeakObjectPtr::operator=(&local_498,param_1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 == (longlong *)0x0) {
    if ((local_178 != 0) && (local_180 != (longlong *)0x0)) {
      (**(code **)(*local_180 + 0x28))(local_180,0);
      if (local_180 != (longlong *)0x0) {
        local_180 = (longlong *)FMemory::Realloc(local_180,0,0);
      }
      local_178 = 0;
    }
  }
  else {
    *plVar3 = (longlong)&PTR_GetPoolName_1442cc480;
    *(undefined4 *)(plVar3 + 1) = local_498;
    *(undefined4 *)((longlong)plVar3 + 0xc) = local_494;
    lVar1 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar1;
    *plVar3 = (longlong)&PTR_GetPoolName_1442cc4c8;
    TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
    ::CreateCopy(plVar3,&local_180);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar1 = FMemory::Realloc(plVar3,0,0);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  uVar4 = FUN_140a7a570(local_488,local_258);
  uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
  FUN_1424ad6e0(uVar5,uVar4);
  if (local_40 != 0) {
    FMemory::Free();
  }
  FUN_1409f5970(local_170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_180);
  if (local_200 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b72a90 FUN_140b72a90 body=654 status=ok
// SIG undefined FUN_140b72a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b72a90(longlong *param_1,longlong param_2,undefined8 *param_3,char param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_4b8 [32];
  undefined4 local_498;
  undefined4 uStack_494;
  undefined1 local_488 [560];
  longlong local_258 [2];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_200;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1a8;
  longlong *local_180;
  int local_178;
  undefined1 local_170 [304];
  longlong local_40;
  ulonglong local_28;
  
  if (param_2 == 0) {
    return;
  }
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  lVar1 = UUGSlider::GetPrivateStaticClass();
  lVar2 = param_2;
  while (lVar2 != lVar1) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if (lVar2 == 0) {
      return;
    }
  }
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (param_1[0x2d] == 0) {
    return;
  }
  if (param_1[0x23] == 0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 == 0) {
    return;
  }
  FUN_140b4bbc0(local_258);
  lVar1 = UUGSlider::GetPrivateStaticClass();
  lVar2 = param_2;
  do {
    if (lVar2 == lVar1) goto LAB_140b72b52;
    lVar2 = *(longlong *)(lVar2 + 0x30);
  } while (lVar2 != 0);
  param_2 = 0;
LAB_140b72b52:
  local_248 = *param_3;
  uStack_240 = param_3[1];
  local_238 = *(undefined4 *)(param_3 + 2);
  uStack_234 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_230 = *(undefined4 *)(param_3 + 3);
  uStack_22c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_228 = *(undefined4 *)(param_3 + 4);
  uStack_224 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_220 = *(undefined4 *)(param_3 + 5);
  uStack_21c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_258[0] = param_2;
  local_1e8 = param_1;
  local_1e0 = FUN_140a63ba0(param_1);
  uStack_494 = 0;
  local_1a8 = 1;
  if ((param_4 != '\0') && (param_5 != 0)) {
    uStack_494 = FUN_1414d0eb0(param_5,*(undefined4 *)(param_5 + 0x700),
                               *(undefined4 *)(param_5 + 0x6f8));
  }
  local_498 = CONCAT31(local_498._1_3_,param_4);
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 == (longlong *)0x0) {
    if ((local_178 != 0) && (local_180 != (longlong *)0x0)) {
      (**(code **)(*local_180 + 0x28))(local_180,0);
      if (local_180 != (longlong *)0x0) {
        local_180 = (longlong *)FMemory::Realloc(local_180,0,0);
      }
      local_178 = 0;
    }
  }
  else {
    *plVar3 = (longlong)&PTR_GetPoolName_1442cc5a0;
    plVar3[1] = CONCAT44(uStack_494,local_498);
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_1442cc5e8;
    FUN_140b568a0(plVar3,&local_180);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  uVar4 = FUN_140a7a570(local_488,local_258);
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1424ad6e0(uVar5,uVar4);
  if (local_40 != 0) {
    FMemory::Free();
  }
  FUN_1409f5970(local_170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_180);
  if (local_200 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b72d20 FUN_140b72d20 body=707 status=ok
// SIG undefined FUN_140b72d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b72d20(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  longlong *local_108;
  int local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  if (param_2 != (longlong *)0x0) {
    local_68 = DAT_1468387a8 ^ (ulonglong)auStack_138;
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar1 != 0) {
      local_108 = (longlong *)0x0;
      local_100 = 0;
      *(undefined1 *)(param_3 + 0xc) = 0;
      FWeakObjectPtr::operator=(&local_f8,param_2);
      FWeakObjectPtr::operator=(&local_f0,param_1);
      plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar2 == (longlong *)0x0) {
        if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
           ((**(code **)(*local_108 + 0x28))(local_108,0), local_108 != (longlong *)0x0)) {
          local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
        }
      }
      else {
        *plVar2 = (longlong)&PTR_GetPoolName_1442cbca0;
        *(undefined4 *)(plVar2 + 1) = local_f8;
        *(undefined4 *)((longlong)plVar2 + 0xc) = local_f4;
        *(undefined4 *)(plVar2 + 2) = local_f0;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_ec;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[4] = lVar1;
        *plVar2 = (longlong)&PTR_GetPoolName_1442cbce8;
        FUN_140b569b0(plVar2,&local_108);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
      local_e8[0] = 0;
      lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      local_d8 = 0;
      local_d0 = 0;
      if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
        (**(code **)(*local_108 + 0x30))(local_108,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_110 = 0xbf800000;
      local_118 = 0;
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,local_e8,&local_d8,param_4);
      if (local_78 != 0) {
        plVar2 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar2 = local_88;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if (local_100 != 0) {
        if (local_108 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_108 + 0x28))(local_108,0);
        if (local_108 != (longlong *)0x0) {
          local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
        }
        local_100 = 0;
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free(local_108);
      }
    }
  }
  return;
}



// FUNCTION 140b72ff0 FUN_140b72ff0 body=532 status=ok
// SIG undefined FUN_140b72ff0(void)

void FUN_140b72ff0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  FUN_140ae47e0();
  lVar5 = *(longlong *)(param_1 + 0x8f0);
  if (lVar5 != 0) {
    plVar6 = (longlong *)(lVar5 + 0x178);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40b5e450;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = *(int *)(lVar5 + 0x180);
      *(int *)(lVar5 + 0x180) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x184) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x4d8);
  if (lVar5 != 0) {
    plVar6 = (longlong *)(lVar5 + 0xec8);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40b5e840;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = *(int *)(lVar5 + 0xed0);
      *(int *)(lVar5 + 0xed0) = iVar1 + 1;
      if (*(int *)(lVar5 + 0xed4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
  }
  FUN_140b6b900(param_1,0xb,0xbf800000);
  if ((*(longlong *)(param_1 + 0x578) != 0) && (lVar5 = FUN_1423b0890(), lVar5 != 0)) {
    FUN_1422b3f10(lVar5,0);
  }
  *(undefined4 *)(param_1 + 0x978) = 0;
  FUN_140b5e4a0(param_1);
  *(undefined1 *)(param_1 + 0x580) = 0;
  FUN_140b71f50(param_1,0);
  *(undefined4 *)(param_1 + 0x9e8) = 0;
  *(undefined1 *)(param_1 + 0x9ec) = 1;
  return;
}



// FUNCTION 140b73210 FUN_140b73210 body=549 status=ok
// SIG undefined FUN_140b73210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b73210(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [40];
  
  if (*(char *)(param_1 + 0x581) == '\x01') {
    lVar6 = 0x920;
  }
  else {
    lVar6 = 0x910;
    if (*(char *)(param_1 + 0x581) == '\x02') {
      lVar6 = 0x930;
    }
  }
  lVar11 = *(longlong *)(lVar6 + param_1);
  bVar4 = false;
  lVar6 = (longlong)*(int *)(lVar6 + 8 + param_1) * 0x40 + lVar11;
  if (lVar11 != lVar6) {
    do {
      if (*(char *)(lVar11 + 0x34) == '\x01') {
        lVar1 = *(longlong *)(lVar11 + 8);
        if ((lVar1 == 0) || (*(longlong *)(param_1 + 0x4d8) == 0)) {
LAB_140b733e9:
          bVar5 = 0;
        }
        else {
          plVar9 = *(longlong **)(param_1 + 0x910);
          plVar7 = plVar9 + (longlong)*(int *)(param_1 + 0x918) * 8;
          for (; (plVar10 = (longlong *)0x0, plVar9 != plVar7 &&
                 (plVar10 = plVar9, plVar9[1] != lVar1)); plVar9 = plVar9 + 8) {
          }
          if (plVar10 == (longlong *)0x0) {
            plVar9 = *(longlong **)(param_1 + 0x920);
            plVar7 = plVar9 + (longlong)*(int *)(param_1 + 0x928) * 8;
            for (; (plVar10 = (longlong *)0x0, plVar9 != plVar7 &&
                   (plVar10 = plVar9, plVar9[1] != lVar1)); plVar9 = plVar9 + 8) {
            }
            if (plVar10 == (longlong *)0x0) goto LAB_140b733e9;
          }
          lVar2 = *plVar10;
          if (lVar2 != 0) {
            if (*(char *)(param_1 + 0x56d) == '\0') {
              FUN_142227350(lVar2,0,1);
            }
            else {
              lVar3 = *(longlong *)(param_1 + 0x168);
              if (lVar3 == 0) {
                local_54 = DAT_1468b5d98;
                puVar8 = &local_5c;
                local_5c = _DAT_1468b5d90;
              }
              else {
                puVar8 = (undefined8 *)&local_68;
                local_68 = *(undefined4 *)(lVar3 + 0x220);
                local_60 = *(undefined4 *)(lVar3 + 0x228);
                uStack_64 = *(undefined4 *)(lVar3 + 0x224);
              }
              local_50 = *puVar8;
              local_48 = *(undefined4 *)(puVar8 + 1);
              FUN_14223c850(lVar2,&local_50,0,0,0);
              FUN_140b5c4a0(param_1,local_40,lVar1);
              FUN_1430191d0(*plVar10);
            }
            *plVar10 = 0;
          }
          *(undefined1 *)((longlong)plVar10 + 0x34) = 2;
          bVar5 = 1;
          plVar10[1] = 0;
          plVar10[2] = 0;
        }
        bVar4 = (bool)(bVar4 | bVar5);
      }
      lVar11 = lVar11 + 0x40;
    } while (lVar11 != lVar6);
    if (bVar4) {
      FUN_140b6e740(param_1);
    }
  }
  return;
}



// FUNCTION 140b73440 FUN_140b73440 body=55 status=ok
// SIG undefined FUN_140b73440(void)

void FUN_140b73440(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x578);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x358))(plVar1,0);
    FUN_1423be660(*(undefined8 *)(param_1 + 0x578));
    return;
  }
  return;
}



// FUNCTION 140b73480 FUN_140b73480 body=185 status=ok
// SIG undefined FUN_140b73480(void)

void FUN_140b73480(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  FUN_140ae5a60();
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  if (*(longlong *)(param_1 + 0x8f0) != 0) {
    FUN_140483870(*(longlong *)(param_1 + 0x8f0) + 0x178,param_1);
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FUN_140483870(*(longlong *)(param_1 + 0x4d8) + 0xec8,param_1);
  }
  puVar1 = (undefined4 *)(param_1 + 0x990);
  do {
    puVar1[-4] = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    uVar2 = uVar2 + 3;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1 = puVar1 + 0xc;
  } while (uVar2 < 3);
  FUN_140b6b900(param_1,0xc,0xbf800000);
  FUN_140b76130(param_1);
  *(undefined4 *)(param_1 + 0x9e8) = 0;
  *(undefined1 *)(param_1 + 0x9ec) = 1;
  return;
}



// FUNCTION 140b73540 FUN_140b73540 body=492 status=ok
// SIG undefined FUN_140b73540(void)

void FUN_140b73540(longlong *param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  
  FUN_140ae5f70();
  FUN_140b73a50(param_1);
  if ((((char)param_1[0x136] != '\0') && (param_1[0xaf] != 0)) &&
     (cVar3 = FUN_1423b4950(), cVar3 == '\0')) {
    FUN_140b73210(param_1);
    switch((char)param_1[0x136]) {
    case '\x01':
    case '\x02':
    case '\x03':
    case '\t':
      uVar5 = 0x140000004;
      break;
    default:
      uVar5 = 0;
      break;
    case '\x05':
    case '\x06':
    case '\a':
      uVar5 = 0x140000008;
      break;
    case '\f':
      plVar2 = (longlong *)param_1[0xaf];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x358))(plVar2,0);
        FUN_1423be660(param_1[0xaf]);
      }
      goto LAB_140b735ec;
    }
    FUN_140b6b900(param_1,uVar5,0xbf800000);
  }
LAB_140b735ec:
  lVar6 = 0x7a0;
  if (*(char *)((longlong)param_1 + 0x4d4) == '\0') {
    lVar6 = 0x830;
  }
  lVar6 = lVar6 + (longlong)param_1;
  if ((lVar6 != 0) && (*(char *)((longlong)param_1 + 0x9ec) != '\0')) {
    fVar1 = *(float *)(param_1 + 0x13d);
    fVar10 = fVar1 + param_2;
    *(float *)(param_1 + 0x13d) = fVar10;
    lVar7 = (longlong)*(int *)(lVar6 + 0x88);
    if (0 < lVar7) {
      lVar8 = 0;
      do {
        fVar10 = *(float *)(lVar8 + *(longlong *)(lVar6 + 0x80));
        if (((fVar10 < *(float *)(param_1 + 0x13d)) && (fVar1 <= fVar10)) &&
           (lVar4 = UObject::FindFunction
                              (param_1,*(undefined8 *)(lVar8 + 8 + *(longlong *)(lVar6 + 0x80))),
           lVar4 != 0)) {
          (**(code **)(*param_1 + 0x208))(param_1,lVar4,0);
        }
        lVar8 = lVar8 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      fVar10 = *(float *)(param_1 + 0x13d);
    }
    fVar1 = *(float *)(lVar6 + 0x78);
    uVar5 = FRuntimeFloatCurve::GetRichCurve(lVar6);
    uVar9 = FRichCurve::Eval(uVar5,fVar10 / fVar1,0);
    FUN_140b76490(param_1,uVar9);
    if (*(float *)(lVar6 + 0x78) < *(float *)(param_1 + 0x13d)) {
      *(undefined1 *)((longlong)param_1 + 0x9ec) = 0;
      if (*(char *)((longlong)param_1 + 0x4d4) == '\0') {
        FUN_1414e6780(param_1);
      }
      else {
        FUN_1414e6740();
      }
    }
  }
  FUN_140b73b70(param_1,param_2);
  FUN_140b6e450(param_1);
  return;
}



// FUNCTION 140b73760 FUN_140b73760 body=743 status=ok
// SIG undefined FUN_140b73760(void)

void FUN_140b73760(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
  if (lVar2 != 0) {
    iVar4 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x18)) {
      lVar9 = 0;
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
      do {
        iVar1 = FUN_140b6c9c0(*(longlong *)(param_1 + 0x10) + lVar9,lVar2,iVar4,DAT_1462971a4);
        iVar4 = iVar4 + iVar1;
        lVar9 = lVar9 + 0x110;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar9 = (longlong)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = 0;
      bVar11 = *(char *)(*(longlong *)(param_1 + 0x10) + 0xbc) != '\0';
      lVar10 = 0;
      iVar4 = 0;
      do {
        lVar10 = lVar10 + 1;
        iVar6 = iVar4 + 1;
        if (lVar10 < lVar9) {
          pcVar3 = (char *)(*(longlong *)(param_1 + 0x10) + 0xbc + lVar10 * 0x110);
          do {
            if (bVar11 != (*pcVar3 != '\0')) break;
            iVar6 = iVar6 + 1;
            lVar10 = lVar10 + 1;
            pcVar3 = pcVar3 + 0x110;
          } while (lVar10 < lVar9);
        }
        iVar7 = iVar6 - iVar4;
        if (bVar11 == false) {
          if (iVar7 != 0) {
            lVar5 = (longlong)iVar4 * 0x110 + 0xa8 + *(longlong *)(param_1 + 0x10);
            do {
              FUN_140b4e380(lVar5 + 0x20);
              TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5);
              TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5 + -0x30);
              if (*(longlong *)(lVar5 + -0x50) != 0) {
                FMemory::Free();
              }
              FUN_1409f5880(lVar5 + -0xa0);
              lVar5 = lVar5 + 0x110;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else {
          if (iVar1 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar1 * 0x110 + *(longlong *)(param_1 + 0x10)),
                       (void *)((longlong)iVar4 * 0x110 + *(longlong *)(param_1 + 0x10)),
                       (longlong)iVar7 * 0x110);
          }
          iVar1 = iVar1 + iVar7;
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar4 = iVar6;
      } while (lVar10 < lVar9);
      *(int *)(param_1 + 0x18) = iVar1;
    }
    iVar4 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x28)) {
      lVar9 = 0;
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x28);
      do {
        iVar1 = FUN_140b6cfd0(*(longlong *)(param_1 + 0x20) + lVar9,lVar2,iVar4,DAT_1462971b4);
        iVar4 = iVar4 + iVar1;
        lVar9 = lVar9 + 0x40;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar2 = (longlong)*(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar1 = 0;
      bVar11 = *(char *)(*(longlong *)(param_1 + 0x20) + 0x38) != '\0';
      lVar9 = 0;
      iVar4 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar6 = iVar4 + 1;
        if (lVar9 < lVar2) {
          pcVar3 = (char *)(*(longlong *)(param_1 + 0x20) + 0x38 + lVar9 * 0x40);
          do {
            if (bVar11 != (*pcVar3 != '\0')) break;
            iVar6 = iVar6 + 1;
            lVar9 = lVar9 + 1;
            pcVar3 = pcVar3 + 0x40;
          } while (lVar9 < lVar2);
        }
        iVar7 = iVar6 - iVar4;
        if (bVar11 == false) {
          if (iVar7 != 0) {
            lVar10 = (longlong)iVar4 * 0x40 + 8 + *(longlong *)(param_1 + 0x20);
            do {
              TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar10 + 0x20);
              FUN_1409f5880(lVar10);
              lVar10 = lVar10 + 0x40;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else {
          if (iVar1 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x20)),
                       (void *)((longlong)iVar4 * 0x40 + *(longlong *)(param_1 + 0x20)),
                       (longlong)iVar7 << 6);
          }
          iVar1 = iVar1 + iVar7;
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar4 = iVar6;
      } while (lVar9 < lVar2);
      *(int *)(param_1 + 0x28) = iVar1;
    }
  }
  return;
}



// FUNCTION 140b73a50 FUN_140b73a50 body=275 status=ok
// SIG undefined FUN_140b73a50(void)

void FUN_140b73a50(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  
  plVar7 = *(longlong **)(param_1 + 0x940);
  fVar1 = *(float *)(param_1 + 0x9bc);
  fVar2 = *(float *)(param_1 + 0x9c8);
  fVar3 = *(float *)(param_1 + 0x9d4);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x948) * 6;
  do {
    if (plVar7 == plVar8) {
      return;
    }
    lVar6 = plVar7[2];
    if (((lVar6 != 0) && (*plVar7 != 0)) && ((*(byte *)(lVar6 + 0x24c) & 0x40) == 0)) {
      fVar4 = *(float *)(param_1 + 0x9bc);
      fVar9 = 0.0;
      fVar5 = *(float *)(*plVar7 + 0x228);
      if (fVar5 <= fVar4) {
        if (fVar5 < fVar4) {
          fVar9 = (fVar4 - fVar5) / (fVar1 - fVar3);
          goto LAB_140b73b13;
        }
LAB_140b73b1d:
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = (fVar5 - fVar4) / (fVar2 - fVar1);
LAB_140b73b13:
        if (0.0 <= fVar9) goto LAB_140b73b1d;
        fVar9 = 0.0;
      }
      FUN_14260f0c0(lVar6,*(undefined8 *)(param_1 + 0x710),1.0 - fVar9);
    }
    plVar7 = plVar7 + 6;
  } while( true );
}



// FUNCTION 140b73b70 FUN_140b73b70 body=392 status=ok
// SIG undefined FUN_140b73b70(void)

void FUN_140b73b70(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte bVar10;
  
  iVar6 = *(int *)(param_1 + 0x978);
  if (iVar6 != *(int *)(param_1 + 0x9f8)) {
    *(undefined1 *)(param_1 + 0x9f4) = 1;
    *(undefined4 *)(param_1 + 0x9f0) = 0;
    *(int *)(param_1 + 0x9f8) = iVar6;
    return;
  }
  if ((*(char *)(param_1 + 0x9f4) != '\0') &&
     (param_2 = param_2 + *(float *)(param_1 + 0x9f0), *(float *)(param_1 + 0x9f0) = param_2,
     *(float *)(param_1 + 0x570) <= param_2)) {
    uVar8 = 0;
    bVar10 = 0;
    if (*(char *)(param_1 + 0x581) == '\x01') {
      lVar7 = 0x920;
    }
    else {
      lVar7 = 0x910;
      if (*(char *)(param_1 + 0x581) == '\x02') {
        lVar7 = 0x930;
      }
    }
    if (((-1 < iVar6) && (iVar6 < *(int *)(lVar7 + 8 + param_1))) &&
       (lVar7 = (longlong)iVar6 * 0x40 + *(longlong *)(lVar7 + param_1), lVar7 != 0)) {
      uVar8 = *(undefined8 *)(lVar7 + 8);
      bVar10 = *(byte *)(lVar7 + 0x35);
    }
    bVar3 = false;
    *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x514) + 1;
    iVar6 = *(int *)(param_1 + 0x514);
    iVar5 = *(int *)(param_1 + 0x508) + -1;
    lVar7 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar9 = lVar7 << 4;
      bVar3 = false;
      do {
        lVar1 = *(longlong *)(param_1 + 0x500);
        if ((*(int *)(lVar9 + 8 + lVar1) == 0) ||
           (plVar2 = *(longlong **)(lVar9 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140b73c71:
          bVar3 = true;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x40))();
          if (cVar4 == '\0') goto LAB_140b73c71;
        }
        lVar9 = lVar9 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      iVar6 = *(int *)(param_1 + 0x514);
    }
    *(int *)(param_1 + 0x514) = iVar6 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x500),0)
      ;
    }
    FUN_1414e65b0(param_1,bVar10,uVar8);
    if ((bVar10 < 3) && (*(longlong *)(param_1 + 0x8f0) != 0)) {
      FUN_1414b1f60(*(longlong *)(param_1 + 0x8f0),bVar10,uVar8);
    }
    *(undefined4 *)(param_1 + 0x9f8) = *(undefined4 *)(param_1 + 0x978);
    *(undefined1 *)(param_1 + 0x9f4) = 0;
  }
  return;
}



// FUNCTION 140b73d00 FUN_140b73d00 body=321 status=ok
// SIG undefined FUN_140b73d00(void)

undefined8 * FUN_140b73d00(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 2) = 0x3f800000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  TArray<FMaterialSlotEntry,TSizedDefaultAllocator<32>_>::operator=(param_2,param_1);
  iVar1 = *(int *)(param_2 + 6);
  *(int *)(param_2 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 5,iVar1);
  }
  *(undefined8 *)(param_2[5] + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_2 + 6);
  *(int *)(param_2 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 5,iVar1);
  }
  *(undefined8 *)(param_2[5] + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_2 + 6);
  *(int *)(param_2 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 5,iVar1);
  }
  *(undefined8 *)(param_2[5] + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x20);
  iVar1 = *(int *)(param_2 + 6);
  *(int *)(param_2 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 5,iVar1);
  }
  *(undefined8 *)(param_2[5] + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x28);
  iVar1 = *(int *)(param_2 + 6);
  *(int *)(param_2 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 5,iVar1);
  }
  *(undefined8 *)(param_2[5] + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x30);
  iVar1 = *(int *)(param_2 + 6);
  *(int *)(param_2 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 5,iVar1);
  }
  *(undefined8 *)(param_2[5] + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x38);
  return param_2;
}



// FUNCTION 140b73e50 FUN_140b73e50 body=1046 status=ok
// SIG undefined FUN_140b73e50(void)

void FUN_140b73e50(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int *piVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  bool bVar19;
  longlong local_res20;
  undefined8 local_68;
  longlong local_60;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x5b1) != param_3)) {
    *(char *)(param_2 + 0x5b1) = param_3;
    lVar6 = FUN_140b2c430(param_2);
    local_68 = lVar6;
    if (lVar6 != 0) {
      lVar7 = FUN_142a232e0();
      plVar12 = *(longlong **)(lVar6 + 0x1a0);
      plVar15 = plVar12 + *(int *)(lVar6 + 0x1a8);
      for (; plVar12 != plVar15; plVar12 = plVar12 + 1) {
        plVar1 = (longlong *)*plVar12;
        if (plVar1 != (longlong *)0x0) {
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          if (bVar19) {
            if (plVar1 != (longlong *)0x0) {
              if (param_3 != '\0') {
                (**(code **)(*plVar1 + 0x640))(plVar1,*(undefined8 *)(param_1 + 0x158));
              }
              (**(code **)(*plVar1 + 0x638))(plVar1,-(param_3 != '\0') & 3);
              FUN_142397540(plVar1,1);
            }
            break;
          }
        }
      }
      lVar7 = FUN_140b48990(lVar6);
      if (param_3 == '\0') {
        if (lVar7 != 0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&AShield::OnProjectedShieldParticleSystemFinished",L"::");
          pwVar4 = (wchar_t *)0x0;
          while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar4 = pwVar3;
          }
          FName::FName(&local_res20,pwVar4 + 2,1);
          plVar15 = (longlong *)(lVar7 + 0x8a8);
          FWeakObjectPtr::operator=(&local_68,0);
          local_60 = 0;
          FWeakObjectPtr::operator=(&local_68,param_2);
          local_60 = local_res20;
          if ((local_res20 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_68), lVar6 != 0)) {
            UObject::FindFunction(lVar6,local_60);
          }
          piVar2 = (int *)*plVar15;
          iVar16 = *(int *)(lVar7 + 0x8b0);
          for (piVar14 = piVar2; piVar14 != piVar2 + (longlong)iVar16 * 4; piVar14 = piVar14 + 4) {
            if (((*piVar14 == (int)local_68) &&
                (local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20),
                bVar19 = piVar14[1] == local_68._4_4_, bVar19)) ||
               ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
                (cVar5 = FWeakObjectPtr::IsValid(&local_68), cVar5 == '\0')))) {
              bVar19 = true;
            }
            else {
              bVar19 = false;
            }
            if ((bVar19) && (*(longlong *)(piVar14 + 2) == local_60)) {
              bVar19 = true;
            }
            else {
              bVar19 = false;
            }
            if (bVar19) {
              if ((int)((longlong)piVar14 - (longlong)piVar2 >> 4) != -1) goto LAB_140b741f3;
              break;
            }
          }
          iVar16 = *(int *)(lVar7 + 0x8b0);
          *(int *)(lVar7 + 0x8b0) = iVar16 + 1;
          if (*(int *)(lVar7 + 0x8b4) < iVar16 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar16);
          }
          puVar13 = (undefined4 *)((longlong)iVar16 * 0x10 + *plVar15);
          *puVar13 = (int)local_68;
          puVar13[1] = local_68._4_4_;
          *(longlong *)(puVar13 + 2) = local_60;
LAB_140b741f3:
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
        }
      }
      else {
        if (lVar7 != 0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&AShield::OnProjectedShieldParticleSystemFinished",L"::");
          pwVar4 = (wchar_t *)0x0;
          while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar4 = pwVar3;
          }
          FName::FName(&local_res20,pwVar4 + 2,1);
          plVar15 = (longlong *)(lVar7 + 0x8a8);
          lVar6 = *plVar15;
          iVar16 = *(int *)(lVar7 + 0x8b0);
          for (lVar17 = lVar6; lVar17 != (longlong)iVar16 * 0x10 + lVar6; lVar17 = lVar17 + 0x10) {
            if ((*(longlong *)(lVar17 + 8) == local_res20) &&
               (lVar9 = FWeakObjectPtr::GetEvenIfUnreachable(lVar17), param_2 == lVar9)) {
              bVar19 = true;
            }
            else {
              bVar19 = false;
            }
            if (bVar19) {
              iVar16 = (int)(lVar17 - lVar6 >> 4);
              if (iVar16 != -1) {
                iVar11 = *(int *)(lVar7 + 0x8b0);
                iVar10 = (iVar11 - iVar16) + -1;
                if (0 < iVar10) {
                  iVar10 = 1;
                }
                if (iVar10 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar16 * 0x10 + *plVar15),
                             (void *)((longlong)(iVar11 - iVar10) * 0x10 + *plVar15),
                             (longlong)iVar10 << 4);
                  iVar11 = *(int *)(lVar7 + 0x8b0);
                }
                *(int *)(lVar7 + 0x8b0) = iVar11 + -1;
              }
              break;
            }
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
          lVar6 = local_68;
        }
        FUN_140b7c040(lVar6,*(undefined8 *)(param_2 + 0x118),0);
      }
    }
    lVar6 = UWidgetComponent::GetRenderTarget(param_2);
    if (lVar6 != 0) {
      uVar18 = *(undefined8 *)(param_1 + 0x198);
      if (param_3 == '\0') {
        FUN_1405acd80(lVar6);
        uVar18 = *(undefined8 *)(param_1 + 0x1a0);
      }
      FUN_1405a3150(lVar6,&local_68,uVar18,0);
      FUN_140591060(&local_68);
    }
  }
  return;
}



// FUNCTION 140b74270 FUN_140b74270 body=32 status=ok
// SIG undefined FUN_140b74270(void)

void FUN_140b74270(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_142227350(param_1,0,1);
  return;
}



// FUNCTION 140b74290 FUN_140b74290 body=1295 status=ok
// SIG undefined FUN_140b74290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b74290(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined8 *local_180;
  longlong local_178;
  float local_170;
  longlong local_168;
  float local_160;
  longlong *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  longlong local_128;
  float local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  ulonglong local_78;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (*(char *)(param_1 + 0x194) != '\0') {
    return;
  }
  local_168 = param_4;
  local_108 = param_3;
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    lVar4 = param_2[0x2a];
    uVar5 = FUN_142c98860(param_1 + 0x1b0);
    plVar2 = (longlong *)FUN_140b223f0(lVar4,uVar5,param_1 + 0x1f0);
    if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x5b2) != '\0')) {
      (**(code **)(*plVar2 + 0x418))(plVar2,&DAT_146532190);
      lVar4 = param_2[0x2d];
      if (lVar4 == 0) {
        local_178 = _DAT_1468b5d90;
        local_170 = DAT_1468b5d98;
      }
      else {
        local_178 = *(longlong *)(lVar4 + 0x220);
        local_170 = *(float *)(lVar4 + 0x228);
      }
      local_188 = local_188 & 0xffffff00;
      local_170 = local_170 + *(float *)(param_1 + 0x1e8);
      local_120 = local_170;
      FUN_1423990b0(plVar2,&local_178,0,0);
    }
  }
  if (0.0 < *(float *)(param_1 + 400)) {
    FWeakObjectPtr::operator=(&local_118,param_2);
    local_148 = (longlong *)0x0;
    iStack_140 = 0;
    FWeakObjectPtr::operator=(&local_110,param_1);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    lVar4 = local_168;
    if (plVar2 == (longlong *)0x0) {
      if (((iStack_140 != 0) && (local_148 != (longlong *)0x0)) &&
         ((**(code **)(*local_148 + 0x28))(local_148,0), lVar4 = local_168,
         local_148 != (longlong *)0x0)) {
        local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
        lVar4 = local_168;
      }
    }
    else {
      *plVar2 = (longlong)&PTR_GetPoolName_1442cbe50;
      *(undefined4 *)(plVar2 + 1) = local_118;
      *(undefined4 *)((longlong)plVar2 + 0xc) = local_114;
      *(undefined4 *)(plVar2 + 2) = local_110;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_10c;
      plVar2[3] = local_168;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1442cbe98;
      FUN_140b56c70(plVar2,&local_148);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    local_178 = 0;
    lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)(param_1 + 400);
      local_e8 = 0;
      local_e0 = 0;
      if ((iStack_140 != 0) && (local_148 != (longlong *)0x0)) {
        (**(code **)(*local_148 + 0x30))(local_148,&local_e8);
      }
      FWeakObjectPtr::operator=(local_d8,0);
      local_180 = (undefined8 *)CONCAT44(local_180._4_4_,0xbf800000);
      local_188 = local_188 & 0xffffff00;
      local_d0 = 0;
      local_98 = (longlong *)0x0;
      local_88 = 0;
      local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar5,&local_178,&local_e8,uVar1);
      if (local_88 != 0) {
        plVar2 = local_b8;
        if (local_98 != (longlong *)0x0) {
          plVar2 = local_98;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
    }
    if (param_2[0x23] != 0) {
      local_f0 = 0;
      lVar3 = *(longlong *)(param_2[0x23] + 0x168);
      local_f8 = 0;
      if (lVar3 == 0) {
        local_168 = _DAT_1468b5d90;
        local_160 = DAT_1468b5d98;
      }
      else {
        local_168 = *(longlong *)(lVar3 + 0x220);
        local_160 = *(float *)(lVar3 + 0x228);
      }
      local_120 = local_160;
      local_128 = local_168;
      uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
      local_180 = &local_f8;
      local_188 = 0x42480000;
      FUN_1405a1e30(&local_168,uVar5,*(undefined8 *)(param_1 + 0x198),&local_128);
      FUN_140591060(&local_168);
    }
    if (iStack_140 != 0) {
      if (local_148 == (longlong *)0x0) goto LAB_140b74746;
      (**(code **)(*local_148 + 0x28))(local_148,0);
      if (local_148 != (longlong *)0x0) {
        local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
      }
      iStack_140 = 0;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
  }
  else {
    FUN_140b55640(param_1,param_2,local_168);
    lVar4 = local_168;
  }
LAB_140b74746:
  local_148 = (longlong *)*local_108;
  iStack_140 = *(int *)(local_108 + 1);
  uStack_13c = *(undefined4 *)((longlong)local_108 + 0xc);
  local_138 = local_108[2];
  FUN_1414c0a90(param_1,param_2,&local_148,lVar4);
  return;
}



// FUNCTION 140b747a0 FUN_140b747a0 body=1081 status=ok
// SIG undefined FUN_140b747a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b747a0(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined4 local_130;
  longlong *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_108 = param_4;
  local_f0 = param_3;
  if (((*(longlong *)(param_1 + 0x110) != 0) && (param_2 != (longlong *)0x0)) &&
     (lVar4 = param_2[0x23], lVar4 != 0)) {
    if (*(char *)((longlong)param_2 + 0x5b2) == '\0') {
      if (lVar4 != 0) {
        lVar3 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_140b3c040(param_2,lVar4,param_1);
        }
      }
    }
    else {
      plVar2 = (longlong *)FUN_140b2cbb0(param_2);
      if (plVar2 != (longlong *)0x0) {
        local_128 = (longlong *)0x0;
        uStack_120 = 0;
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_128);
        plVar2 = local_128 + (int)uStack_120;
        for (plVar5 = local_128; plVar5 != plVar2; plVar5 = plVar5 + 1) {
          lVar4 = *plVar5;
          if (lVar4 != 0) {
            lVar3 = FUN_1413f82e0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_140b3c040(param_2,lVar4,param_1);
            }
          }
          param_4 = local_108;
        }
        if (local_128 != (longlong *)0x0) {
          FMemory::Free(local_128);
        }
      }
    }
    if ((*(char *)(param_1 + 0x119) != '\0') &&
       (fVar7 = (float)FUN_140b5df60(param_1,param_4,0), 0.0 < fVar7)) {
      local_e8[0] = 0;
      local_128 = (longlong *)0x0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      FWeakObjectPtr::operator=(&local_f8,param_1);
      FWeakObjectPtr::operator=(&local_100,param_2);
      plVar2 = (longlong *)FMemory::Realloc(0,0x40);
      if (plVar2 == (longlong *)0x0) {
        if ((((int)uStack_120 != 0) && (local_128 != (longlong *)0x0)) &&
           ((**(code **)(*local_128 + 0x28))(local_128,0), local_128 != (longlong *)0x0)) {
          local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
        }
      }
      else {
        *plVar2 = (longlong)&PTR_GetPoolName_1442cbee0;
        plVar2[1] = local_108;
        plVar2[2] = (longlong)local_f0;
        *(undefined4 *)(plVar2 + 3) = local_100;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = local_fc;
        *(undefined4 *)(plVar2 + 4) = local_f8;
        *(undefined4 *)((longlong)plVar2 + 0x24) = local_f4;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar2[6] = lVar4;
        *plVar2 = (longlong)&PTR_GetPoolName_1442cbf28;
        FUN_140b56ba0(plVar2,&local_128);
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar4 = FMemory::Realloc(plVar2,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
      param_4 = local_108;
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      uVar8 = FUN_140b5df60(param_1,local_108,0);
      local_d8 = 0;
      local_d0 = 0;
      if (((int)uStack_120 != 0) && (local_128 != (longlong *)0x0)) {
        (**(code **)(*local_128 + 0x30))(local_128,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_130 = 0xbf800000;
      local_138 = 0;
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,local_e8,&local_d8,uVar8);
      if (local_78 != 0) {
        plVar2 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar2 = local_88;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if ((int)uStack_120 != 0) {
        if (local_128 == (longlong *)0x0) goto LAB_140b74b95;
        (**(code **)(*local_128 + 0x28))(local_128,0);
        if (local_128 != (longlong *)0x0) {
          local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
        }
        uStack_120 = uStack_120 & 0xffffffff00000000;
      }
      if (local_128 != (longlong *)0x0) {
        FMemory::Free(local_128);
      }
    }
  }
LAB_140b74b95:
  local_128 = (longlong *)*local_f0;
  uStack_120 = local_f0[1];
  local_118 = local_f0[2];
  FUN_1414c0a90(param_1,param_2,&local_128,param_4);
  return;
}



// FUNCTION 140b74be0 FUN_140b74be0 body=40 status=ok
// SIG undefined FUN_140b74be0(void)

void FUN_140b74be0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0a90(local_28,local_18,&local_28);
  return;
}



// FUNCTION 140b74c10 FUN_140b74c10 body=1292 status=ok
// SIG undefined FUN_140b74c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140b74c10(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined8 local_res8;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [16];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  float local_154;
  uint local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  longlong *local_138;
  longlong local_130;
  undefined4 local_11c;
  undefined8 local_110;
  longlong local_a8;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_18 [16];
  
  if ((((*(char *)(param_1 + 0x1e0) != '\0') && (param_2 != 0)) && (param_4 != 0)) &&
     (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar6 = FUN_1430aef40();
    for (lVar1 = *(longlong *)(param_1 + 0x1f0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar6) {
        if (*(longlong *)(param_1 + 0x1f0) == 0) {
          return 0;
        }
        if (*(longlong *)(param_2 + 0x150) == 0) {
          return 0;
        }
        if (((*(char *)(param_1 + 0x1e8) != '\0') && (*(char *)(param_2 + 0x5b2) == '\0')) &&
           (cVar3 = FUN_140b2cbe0(param_2,0), cVar3 == '\x01')) {
          return 0;
        }
        FUN_140a25850(&local_178);
        local_178 = &PTR_FUN_1442c5630;
        local_170 = *(undefined8 *)(param_1 + 0x1f0);
        local_38 = 0xbf800000bf800000;
        uStack_30 = 0x3f800000bf800000;
        local_28 = 0x3f800000;
        local_24 = 0x3f800000;
        puVar7 = (undefined8 *)FUN_140b28030(param_2,&local_res8);
        local_110 = *puVar7;
        local_11c = FUN_142c98860(param_1 + 0x1f8,param_2);
        local_140 = *(undefined8 *)(param_2 + 0x150);
        local_150 = local_150 | 2;
        local_130 = param_4;
        plVar8 = (longlong *)FUN_140b2cbb0(param_2);
        if ((plVar8 == (longlong *)0x0) ||
           (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8), plVar8 == (longlong *)0x0))
        {
          plVar8 = *(longlong **)(param_2 + 0x150);
          if (plVar8 != (longlong *)0x0) {
            lVar1 = plVar8[0x2d];
            if (lVar1 == 0) {
              local_1b0 = DAT_1468b5d98;
              puVar7 = &local_1b8;
              local_1b8 = _DAT_1468b5d90;
            }
            else {
              puVar7 = &local_1a8;
              local_1a0 = *(undefined4 *)(lVar1 + 0x228);
              local_1a8 = *(undefined8 *)(lVar1 + 0x220);
            }
            local_168 = *puVar7;
            local_160 = *(undefined4 *)(puVar7 + 1);
            local_138 = plVar8;
            (**(code **)(*plVar8 + 0x798))(plVar8,&local_1a8);
            pfVar9 = (float *)FRotator::Vector(&local_1a8,local_198);
            lVar1 = plVar8[0x2d];
            if (lVar1 == 0) {
              local_1b8 = _DAT_1468b5d90;
              local_1b0 = DAT_1468b5d98;
            }
            else {
              local_1b8 = *(undefined8 *)(lVar1 + 0x220);
              local_1b0 = *(float *)(lVar1 + 0x228);
            }
            local_1b0 = pfVar9[2] * 1000.0 + local_1b0;
            local_1a8 = CONCAT44(local_1a8._4_4_,0x41f00000);
            local_15c = CONCAT44(pfVar9[1] * 1000.0 + (float)((ulonglong)local_1b8 >> 0x20),
                                 *pfVar9 * 1000.0 + (float)local_1b8);
            local_1a0 = 0;
            local_154 = local_1b0;
            iVar4 = rand();
            local_150 = local_150 | 1;
            local_144 = local_1a0;
            local_14c = CONCAT44(local_1a8._4_4_ + ((float)iVar4 * 0.0012207404 - 20.0),
                                 (int)local_1a8);
          }
        }
        else {
          lVar1 = plVar8[0x2d];
          if (lVar1 == 0) {
            local_1b0 = DAT_1468b5d98;
            puVar7 = &local_1b8;
            local_1b8 = _DAT_1468b5d90;
          }
          else {
            puVar7 = &local_1a8;
            local_1a0 = *(undefined4 *)(lVar1 + 0x228);
            local_1a8 = *(undefined8 *)(lVar1 + 0x220);
          }
          local_168 = *puVar7;
          local_160 = *(undefined4 *)(puVar7 + 1);
          lVar1 = plVar8[0x2d];
          uVar5 = DAT_1468b5da8;
          uVar2 = DAT_1468b5da0;
          local_138 = plVar8;
          if (lVar1 != 0) {
            local_188 = *(float *)(lVar1 + 0x210);
            fStack_184 = *(float *)(lVar1 + 0x214);
            fStack_180 = *(float *)(lVar1 + 0x218);
            fStack_17c = *(float *)(lVar1 + 0x21c);
            auVar10._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_184);
            auVar10._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_188);
            auVar10._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_180);
            auVar10._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_17c);
            iVar4 = movmskps(local_160,auVar10);
            if (iVar4 != 0) {
              *(float *)(lVar1 + 0x250) = local_188;
              *(float *)(lVar1 + 0x254) = fStack_184;
              *(float *)(lVar1 + 600) = fStack_180;
              *(float *)(lVar1 + 0x25c) = fStack_17c;
              puVar7 = (undefined8 *)FQuat::Rotator(&local_188,local_18);
              *(undefined8 *)(lVar1 + 0x260) = *puVar7;
              *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
            }
            uVar5 = *(undefined4 *)(lVar1 + 0x268);
            uVar2 = *(undefined8 *)(lVar1 + 0x260);
          }
          local_1b8 = uVar2;
          local_1b0 = (float)uVar5;
          local_1a8 = uVar2;
          local_1a0 = uVar5;
          pfVar9 = (float *)FRotator::Vector(&local_1a8,local_198);
          lVar1 = plVar8[0x2d];
          if (lVar1 == 0) {
            local_1b0 = DAT_1468b5d98;
            puVar7 = &local_1b8;
            local_1b8 = _DAT_1468b5d90;
          }
          else {
            puVar7 = &local_1a8;
            local_1a0 = *(undefined4 *)(lVar1 + 0x228);
            local_1a8 = *(undefined8 *)(lVar1 + 0x220);
          }
          local_1b0 = pfVar9[2] * 1000.0 + *(float *)(puVar7 + 1);
          local_15c = CONCAT44(pfVar9[1] * 1000.0 + (float)((ulonglong)*puVar7 >> 0x20),
                               *pfVar9 * 1000.0 + (float)*puVar7);
          local_154 = local_1b0;
        }
        thunk_FUN_143040df0(&local_178);
        local_178 = &PTR_FUN_1441f17f0;
        FWeakObjectPtr::operator=(local_50,0);
        local_res8 = 0;
        local_48 = 0;
        if (local_a8 != 0) {
          FMemory::Free();
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140b75120 FUN_140b75120 body=132 status=ok
// SIG undefined FUN_140b75120(void)

ulonglong FUN_140b75120(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 != 0) && (lVar2 = UWorld::GetGameState<APVPGameState>(lVar1), lVar2 != 0)) {
    uVar3 = FUN_140b75390(lVar2 + 0x670,lVar1,param_2,param_3,param_4);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140b751b0 FUN_140b751b0 body=475 status=ok
// SIG undefined FUN_140b751b0(void)

void FUN_140b751b0(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong local_res18;
  int local_28;
  int local_24;
  longlong local_20;
  
  if ((0.0 < *(float *)(param_1 + 0x6b8)) && (lVar5 = FUN_1407c7450(), lVar5 != 0)) {
    FUN_1407c7790(lVar5,local_res8,param_1);
    cVar4 = FUN_1407ce070(local_res8);
    if ((cVar4 != '\0') &&
       ((lVar5 = FUN_1407cb620(lVar5,local_res8), lVar5 != 0 &&
        (lVar5 = FWmfMediaPlayer::GetSamples(lVar5), lVar5 != 0)))) {
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&AVendingMachine::RegisterWithPersistenceManagerPostSpawn",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res18,pwVar3 + 2,1);
      plVar10 = (longlong *)(lVar5 + 0x788);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res18;
      local_res10 = 0;
      if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_20);
      }
      piVar8 = (int *)*plVar10;
      iVar1 = *(int *)(lVar5 + 0x790);
      for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
        if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) &&
           (*(longlong *)(piVar9 + 2) == local_20)) {
          if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b7536e;
          break;
        }
      }
      iVar1 = *(int *)(lVar5 + 0x790);
      *(int *)(lVar5 + 0x790) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x794) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_140b7536e:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    }
  }
  return;
}



// FUNCTION 140b75390 FUN_140b75390 body=1286 status=ok
// SIG undefined FUN_140b75390(void)

char FUN_140b75390(longlong param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 local_res10 [16];
  int local_res20;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88 [2];
  longlong *local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  local_res20 = param_4;
  lVar5 = FMistWorldUtils::GetDebugEntityDrawSystem(param_2);
  if (lVar5 == 0) {
LAB_140b753ef:
    local_a0 = 0;
  }
  else {
    local_res10[0] = 0;
    lVar5 = FUN_142f416d0(lVar5,param_2,local_res10);
    if (lVar5 == 0) goto LAB_140b753ef;
    local_a0 = *(undefined8 *)(lVar5 + 0x78);
  }
  puVar6 = (undefined8 *)FName::ToString(&local_a0,local_48);
  puVar14 = &DAT_143f3eda8;
  iVar15 = 0;
  if (*(int *)(puVar6 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar6;
  }
  puVar6 = (undefined8 *)FPackageName::GetShortName(local_58,puVar12);
  if (*(int *)(puVar6 + 1) != 0) {
    puVar14 = (undefined2 *)*puVar6;
  }
  FName::FName(&local_68,puVar14,1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  bVar3 = false;
  if ((param_2 != 0) &&
     (lVar5 = UWorld::GetGameState<APVPGameState>(param_2), bVar3 = false, lVar5 != 0)) {
    local_98 = (longlong *)0x0;
    local_90 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_140c44180(&local_98,local_88);
    if ((0 < (int)local_90) &&
       ((lVar5 = *local_98, lVar5 != 0 && (&local_b0 != (longlong **)(lVar5 + 0x90))))) {
      iVar1 = *(int *)(lVar5 + 0x98);
      plVar11 = *(longlong **)(lVar5 + 0x90);
      local_a8 = CONCAT44(local_a8._4_4_,iVar1);
      iVar15 = 0;
      if (iVar1 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_b0,iVar1,0);
        _guard_xfg_dispatch_icall_nop(local_b0,plVar11,(longlong)iVar1 << 3);
        iVar15 = (int)local_a8;
      }
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    for (plVar11 = local_b0; plVar11 != local_b0 + iVar15; plVar11 = plVar11 + 1) {
      if (*plVar11 == local_68) {
        bVar3 = true;
        goto LAB_140b75531;
      }
    }
    bVar3 = false;
  }
LAB_140b75531:
  cVar4 = FUN_140b55160(param_1,param_2,param_3);
  if (cVar4 != '\0') goto LAB_140b75869;
  if (((param_2 != 0) && (*(int *)(param_2 + 0x708) == 3)) || (bVar3)) {
    if (param_4 < 1) {
      FUN_140b57930(param_1,param_2,0);
    }
    else {
      FUN_140b506d0(param_1,param_2,param_4,param_5);
    }
    goto LAB_140b75869;
  }
  lVar5 = FUN_142f429c0(param_2);
  if ((lVar5 == 0) || (lVar5 = FUN_142f41d90(lVar5,0), lVar5 == 0)) goto LAB_140b75869;
  lVar8 = 0;
  local_60 = FUN_142f46fc0();
  AActor::GetComponentsByClass(lVar5,&local_78,local_60);
  plVar11 = local_78 + local_70;
  plVar13 = local_78;
  if (local_78 != plVar11) {
    do {
      plVar2 = (longlong *)*plVar13;
      if ((lVar8 == 0) && (plVar2 != (longlong *)0x0)) {
        lVar7 = FUN_142f46fc0();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar8 = (**(code **)(*plVar2 + 0x8e8))(plVar2);
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar11);
    if (lVar8 != 0) {
      lVar7 = FUN_142f478b0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar7 = lVar8 + 0xf0;
        lVar9 = FWeakObjectPtr::Get(lVar7);
        if (lVar9 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar8 + 0xf8)) && (*(longlong *)(lVar8 + 0x100) != 0)) {
            lVar9 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar7,lVar9);
            if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar8 + 0xf8) = DAT_1464b56f4;
            }
            lVar9 = FWeakObjectPtr::Get(lVar7);
            if (lVar9 != 0) goto LAB_140b75705;
          }
        }
        else {
LAB_140b75705:
          lVar7 = FUN_142f47520();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar7 = FUN_142f478b0();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar7 = FWeakObjectPtr::Get();
              if (lVar7 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar9 + 0xf8)) && (*(longlong *)(lVar9 + 0x100) != 0)
                   ) {
                  lVar7 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar9 + 0xf0,lVar7);
                  if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar9 + 0xf8) = DAT_1464b56f4;
                  }
                  lVar7 = FWeakObjectPtr::Get(lVar9 + 0xf0);
                  if (lVar7 != 0) goto LAB_140b757f3;
                }
LAB_140b75829:
                lVar7 = 0;
              }
              else {
LAB_140b757f3:
                lVar10 = FUN_142f47520();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) goto LAB_140b75829;
              }
              if (lVar7 == lVar8) {
                lVar8 = lVar9;
              }
            }
          }
        }
      }
      *(int *)(param_1 + 8) = local_res20;
      *(undefined4 *)(param_1 + 0xc) = param_5;
      FUN_142f45ed0(lVar5,lVar8,0,0,1);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
LAB_140b75869:
  if (local_b0 != (longlong *)0x0) {
    FMemory::Free();
  }
  return cVar4;
}



// FUNCTION 140b758a0 FUN_140b758a0 body=920 status=ok
// SIG undefined FUN_140b758a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b758a0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float fVar11;
  undefined4 uVar12;
  longlong **pplVar13;
  undefined8 in_stack_ffffffffffffff50;
  uint uVar14;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined8 local_50;
  
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  if (((((*(char *)(param_3 + 0xc) != '\0') && (*(longlong *)(param_1 + 0x150) != 0)) &&
       (*(longlong *)(param_1 + 0x158) != 0)) &&
      ((param_2 != (longlong *)0x0 && (lVar7 = (**(code **)(*param_2 + 0x148))(param_2), lVar7 != 0)
       ))) && ((param_2[0x23] != 0 && ((char)param_2[0x25] == '\x03')))) {
    fVar11 = (float)FUN_140b5df60(param_1,param_3,0);
    iVar6 = rand();
    if ((float)iVar6 * 3.051851e-05 < fVar11) {
      local_58 = (longlong *)0x0;
      local_50 = 0;
      pplVar13 = &local_58;
      FUN_140b8d930(param_2[0x23],*(undefined8 *)(param_1 + 0x150),0,
                    *(undefined8 *)(param_1 + 0x158),pplVar13,(ulonglong)uVar14 << 0x20,0);
      uVar12 = (undefined4)((ulonglong)pplVar13 >> 0x20);
      plVar1 = local_58 + (int)local_50;
      for (plVar10 = local_58; plVar10 != plVar1; plVar10 = plVar10 + 1) {
        plVar2 = (longlong *)*plVar10;
        if ((plVar2 != (longlong *)0x0) &&
           (plVar3 = (longlong *)plVar2[0xad], plVar3 != (longlong *)0x0)) {
          lVar7 = AUGAreaEffectActor::GetPrivateStaticClass();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            uVar12 = FUN_140b5df60(param_1,param_3,
                                   CONCAT71((int7)((ulonglong)(lVar7 + 0x88) >> 8),1));
            *(undefined4 *)(plVar3 + 0x95) = uVar12;
            FUN_140b71cc0(plVar3,param_1);
            if (((plVar3[0x94] != 0) &&
                (lVar7 = (**(code **)(*param_2 + 0x148))(param_2), lVar7 != 0)) &&
               (lVar7 = (**(code **)(*param_2 + 0x148))(param_2), *(longlong *)(lVar7 + 400) != 0))
            {
              lVar7 = (**(code **)(*param_2 + 0x148))(param_2);
              lVar7 = *(longlong *)(lVar7 + 400);
              if (lVar7 != 0) {
                lVar8 = FUN_14141f270();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if ((bVar5) && (plVar4 = *(longlong **)(lVar7 + 0xb20), plVar4 != (longlong *)0x0))
                {
                  (**(code **)(*plVar4 + 0x278))(plVar4,plVar3[0x94],plVar2,param_2[0x23]);
                }
              }
            }
            lVar7 = *plVar2;
            (**(code **)(*plVar3 + 0x3a8))(plVar3);
            (**(code **)(lVar7 + 0x3a0))(plVar2);
          }
        }
        uVar12 = (undefined4)((ulonglong)pplVar13 >> 0x20);
      }
      local_70 = 0;
      local_78 = 0;
      lVar7 = *(longlong *)(param_2[0x23] + 0x168);
      local_98 = _DAT_1468b5d90;
      local_90 = DAT_1468b5d98;
      if (lVar7 != 0) {
        local_98 = *(undefined8 *)(lVar7 + 0x220);
        local_90 = *(undefined4 *)(lVar7 + 0x228);
      }
      local_60 = local_90;
      local_68 = local_98;
      uVar9 = (**(code **)(*param_2 + 0x148))(param_2);
      FUN_1405a1e30(&local_98,uVar9,*(undefined8 *)(param_1 + 0x140),&local_68,
                    CONCAT44(uVar12,0x42480000),&local_78);
      FUN_140591060(&local_98);
      *(undefined1 *)(param_3 + 0xc) = 0;
      FUN_140b72d20(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0x108));
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b75c40 FUN_140b75c40 body=68 status=ok
// SIG undefined FUN_140b75c40(void)

void FUN_140b75c40(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x6b0) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x2a0))();
    if (cVar1 == '\0') {
      FUN_1425fcab0(*(undefined8 *)(param_1 + 0x6b0),param_2);
    }
  }
  return;
}



// FUNCTION 140b75c90 FUN_140b75c90 body=143 status=ok
// SIG undefined FUN_140b75c90(void)

void FUN_140b75c90(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x60) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x60) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_140b400b0(*plVar1,0);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x58),0);
  }
  return;
}



// FUNCTION 140b75d20 FUN_140b75d20 body=287 status=ok
// SIG undefined FUN_140b75d20(void)

void FUN_140b75d20(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
    plVar7 = *(longlong **)(param_1 + 0x70);
    uVar8 = (longlong)*(int *)(param_1 + 0x78) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(param_1 + 0x78) < plVar7) {
      uVar8 = uVar5;
    }
    uVar6 = uVar5;
    if (uVar8 != 0) {
      do {
        plVar1 = (longlong *)*plVar7;
        if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x94) & 2) == 0)) {
          uVar2 = *(uint *)((longlong)plVar1 + 0xc);
          uVar3 = uVar5;
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
            (**(code **)(*plVar1 + 0x600))(plVar1);
            FUN_143012e60(plVar1);
            FUN_140b40050(plVar1,0);
          }
        }
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
    }
  }
  return;
}



// FUNCTION 140b75e40 FUN_140b75e40 body=289 status=ok
// SIG undefined FUN_140b75e40(void)

void FUN_140b75e40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong local_28;
  ulonglong local_20;
  short *local_18;
  int local_10;
  
  FUN_142359510();
  cVar2 = FUN_140b610a0(param_1);
  if (((cVar2 != '\0') && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x50),
     plVar1 != (longlong *)0x0)) {
    if (*(int *)(param_1 + 0x2e0) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0x2d8);
    }
    FString::PrintfImpl(&local_18,L"%s %d",puVar6,*(undefined4 *)(param_1 + 0x2ec));
    psVar5 = &DAT_143f3eda8;
    if (local_10 != 0) {
      psVar5 = local_18;
    }
    local_28 = 0;
    local_20 = 0;
    if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (psVar5[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_20 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,psVar5,(longlong)(int)uVar3 * 2);
    }
    (**(code **)(*plVar1 + 0x288))(plVar1,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_18 != (short *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140b75f70 FUN_140b75f70 body=169 status=ok
// SIG undefined FUN_140b75f70(void)

void FUN_140b75f70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    uVar5 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      plVar1 = *(longlong **)(param_1 + 0x28);
      plVar3 = plVar1;
      uVar7 = uVar5;
      do {
        iVar6 = (int)uVar7;
        if (*plVar3 == param_2) {
          iVar4 = *(int *)(param_1 + 0x30);
          iVar2 = (iVar4 - iVar6) + -1;
          if (0 < iVar2) {
            iVar2 = 1;
          }
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar1 + (longlong)iVar6 * 2,plVar1 + (longlong)(iVar4 - iVar2) * 2,
                       (longlong)iVar2 << 4);
            iVar4 = *(int *)(param_1 + 0x30);
          }
          *(int *)(param_1 + 0x30) = iVar4 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x28);
          return;
        }
        uVar7 = (ulonglong)(iVar6 + 1);
        uVar5 = uVar5 + 1;
        plVar3 = plVar3 + 2;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 140b76020 FUN_140b76020 body=221 status=ok
// SIG undefined FUN_140b76020(void)

void FUN_140b76020(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((*(longlong *)(param_1 + 0x110) != 0) && (param_2 != 0)) {
    if (*(char *)(param_2 + 0x5b2) == '\0') {
      lVar1 = *(longlong *)(param_2 + 0x118);
      if (lVar1 != 0) {
        lVar3 = FUN_1413f82e0();
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
          FUN_140b46510(param_2,lVar1,param_1);
        }
      }
    }
    else {
      FUN_140b3c6f0(param_2,param_1);
    }
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0b40(param_1,param_2,&local_28,param_4);
  return;
}



// FUNCTION 140b76100 FUN_140b76100 body=40 status=ok
// SIG undefined FUN_140b76100(void)

void FUN_140b76100(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1414c0b40(local_28,local_18,&local_28);
  return;
}



// FUNCTION 140b76130 FUN_140b76130 body=406 status=ok
// SIG undefined FUN_140b76130(void)

void FUN_140b76130(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  iVar4 = *(int *)(param_1 + 0x918);
  uVar2 = 1;
  uVar5 = uVar6;
  uVar8 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar4) {
    do {
      if ((-1 < (longlong)uVar5) && ((int)uVar8 < iVar4)) {
        plVar1 = *(longlong **)(uVar9 + *(longlong *)(param_1 + 0x910));
        if (plVar1 != (longlong *)0x0) {
          uVar3 = uVar2;
          if (((*(int *)(uVar9 + 0x38 + *(longlong *)(param_1 + 0x910)) != -1) &&
              (uVar3 = 0, *(char *)(param_1 + 0x4d4) == '\0')) &&
             (uVar3 = 0, *(char *)(param_1 + 0x9b0) != '\f')) {
            uVar3 = uVar2;
          }
          (**(code **)(*plVar1 + 0x310))(plVar1,uVar3);
          iVar4 = *(int *)(param_1 + 0x918);
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 0x40;
    } while ((int)uVar7 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x928);
  uVar5 = uVar6;
  uVar8 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar4) {
    do {
      if ((-1 < (longlong)uVar5) && ((int)uVar8 < iVar4)) {
        plVar1 = *(longlong **)(uVar9 + *(longlong *)(param_1 + 0x920));
        if (plVar1 != (longlong *)0x0) {
          uVar3 = uVar2;
          if (((*(int *)(uVar9 + 0x38 + *(longlong *)(param_1 + 0x920)) != -1) &&
              (uVar3 = 0, *(char *)(param_1 + 0x4d4) == '\0')) &&
             (uVar3 = 0, *(char *)(param_1 + 0x9b0) != '\f')) {
            uVar3 = uVar2;
          }
          (**(code **)(*plVar1 + 0x310))(plVar1,uVar3);
          iVar4 = *(int *)(param_1 + 0x928);
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 0x40;
    } while ((int)uVar7 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x938);
  uVar5 = uVar6;
  uVar8 = uVar6;
  if (0 < iVar4) {
    do {
      if ((-1 < (longlong)uVar5) && ((int)uVar6 < iVar4)) {
        plVar1 = *(longlong **)(uVar8 + *(longlong *)(param_1 + 0x930));
        if (plVar1 != (longlong *)0x0) {
          uVar3 = uVar2;
          if (((*(int *)(uVar8 + 0x38 + *(longlong *)(param_1 + 0x930)) != -1) &&
              (uVar3 = 0, *(char *)(param_1 + 0x4d4) == '\0')) &&
             (uVar3 = 0, *(char *)(param_1 + 0x9b0) != '\f')) {
            uVar3 = uVar2;
          }
          (**(code **)(*plVar1 + 0x310))(plVar1,uVar3);
          iVar4 = *(int *)(param_1 + 0x938);
        }
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
      uVar8 = uVar8 + 0x40;
    } while ((int)uVar7 < iVar4);
  }
  return;
}



// FUNCTION 140b762d0 FUN_140b762d0 body=443 status=ok
// SIG undefined FUN_140b762d0(void)

void FUN_140b762d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  
  if ((*(longlong *)(param_1 + 0x8f0) != 0) && (*(char *)(param_1 + 0x581) == '\x01')) {
    FUN_140b76f20();
    lVar1 = *(longlong *)(param_1 + 0x8f0);
    bVar2 = false;
    plVar8 = *(longlong **)(lVar1 + 0x198);
    plVar9 = plVar8 + *(int *)(lVar1 + 0x1a0);
    for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x920);
        lVar5 = (longlong)*(int *)(param_1 + 0x928) * 0x40 + lVar3;
        for (; lVar3 != lVar5; lVar3 = lVar3 + 0x40) {
          if (*(longlong *)(lVar3 + 8) == lVar6) goto LAB_140b76375;
        }
      }
      FUN_140b57460(param_1,lVar6,1,0xffffffff);
      bVar2 = true;
LAB_140b76375:
    }
    plVar9 = *(longlong **)(param_1 + 0x920);
    plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x928) * 8;
    for (; plVar9 != plVar8; plVar9 = plVar9 + 8) {
      iVar7 = 0;
      lVar6 = 0;
      if (0 < *(int *)(lVar1 + 0x1a0)) {
        plVar4 = *(longlong **)(lVar1 + 0x198);
        do {
          if (plVar9[1] == *plVar4) {
            *(int *)((longlong)plVar9 + 0x3c) = iVar7;
            goto LAB_140b7640c;
          }
          iVar7 = iVar7 + 1;
          lVar6 = lVar6 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar6 < *(int *)(lVar1 + 0x1a0));
      }
      if ((plVar9[1] != 0) && (*(char *)((longlong)plVar9 + 0x34) == '\0')) {
        plVar4 = (longlong *)*plVar9;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x3a0))(plVar4,0x3f000000);
        }
        *(undefined1 *)((longlong)plVar9 + 0x34) = 1;
      }
LAB_140b7640c:
    }
    if (bVar2) {
      FUN_140b70260(param_1,1);
      local_res8[0] = 0;
      FUN_140b49740(*(undefined8 *)(param_1 + 0x920),(longlong)*(int *)(param_1 + 0x928),0,
                    local_res8);
    }
    FUN_140b6c5e0(param_1);
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x9f8) = *(undefined4 *)(param_1 + 0x978);
      *(undefined1 *)(param_1 + 0x9f4) = 0;
    }
  }
  return;
}



// FUNCTION 140b76490 FUN_140b76490 body=150 status=ok
// SIG undefined FUN_140b76490(void)

void FUN_140b76490(longlong param_1,undefined4 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468698a0) {
    _Init_thread_header(&DAT_1468698a0);
    if (DAT_1468698a0 == -1) {
      FName::FName(&DAT_146869898,L"p_DigistructProgress",1);
      _Init_thread_footer(&DAT_1468698a0);
    }
  }
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FUN_142378260(*(longlong *)(param_1 + 0x8f8),DAT_146869898,param_2);
  }
  return;
}



// FUNCTION 140b76530 FUN_140b76530 body=1030 status=ok
// SIG undefined FUN_140b76530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b76530(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_res10;
  ulonglong uVar22;
  longlong local_78;
  uint local_70;
  longlong local_68;
  uint local_60;
  undefined2 *local_58;
  longlong lStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  
  if ((((param_2 == 0) || (*(longlong *)(param_1 + 0x6e0) == 0)) ||
      (*(char *)(param_1 + 0x4d4) == '\0')) ||
     (((cVar7 = FUN_140b603d0(param_1,*(undefined4 *)(param_3 + 0x28),
                              *(undefined1 *)(param_1 + 0x581)), cVar7 == '\0' ||
       (*(char *)(param_2 + 0x34) != '\0')) || ((byte)(*(char *)(param_2 + 0x35) - 3U) < 2)))) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
    if ((*(longlong *)(param_2 + 0x10) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x208), lVar2 != 0)) {
      bVar16 = *(char *)(lVar2 + 0x228) != '\0';
    }
  }
  if ((bVar16 != false) && (*(longlong *)(param_3 + 0x10) == 0)) {
    plVar11 = (longlong *)FUN_1409bff40(param_1);
    FUN_14260f940(plVar11,*(undefined8 *)(param_1 + 0x6e0));
    FUN_14234b150(plVar11);
    FUN_142397000(plVar11,0,1,0);
    local_70 = *(uint *)(param_1 + 0x700);
    local_78 = CONCAT44(local_70,local_70);
    local_60 = local_70;
    (**(code **)(*plVar11 + 0x3f8))(plVar11,&local_78);
    FUN_142398d80(plVar11,*(undefined4 *)(param_1 + 0x6e8));
    FString::PrintfImpl(&local_58,L"Tray_%02d_RightSocket",*(int *)(param_3 + 0x2c) + 1);
    puVar15 = &DAT_143f3eda8;
    if ((int)lStack_50 != 0) {
      puVar15 = local_58;
    }
    FName::FName(&local_res10,puVar15,1);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_142382f60(plVar11,*(undefined8 *)(param_1 + 0x578),&DAT_146532184,local_res10);
    local_68 = *(longlong *)(param_1 + 0x704);
    pfVar1 = (float *)(plVar11 + 0x50);
    local_60 = *(undefined4 *)(param_1 + 0x70c);
    if (((*(float *)(plVar11 + 0x3f) != *pfVar1) ||
        (*(float *)((longlong)plVar11 + 0x1fc) != *(float *)((longlong)plVar11 + 0x284))) ||
       (*(float *)(plVar11 + 0x40) != *(float *)(plVar11 + 0x51))) {
      local_78 = *(longlong *)*(undefined1 (*) [12])(plVar11 + 0x3f);
      auVar17._12_4_ = 0;
      auVar17._0_12_ = *(undefined1 (*) [12])(plVar11 + 0x3f);
      fVar3 = (float)DAT_146869310;
      fVar4 = DAT_146869310._4_4_;
      fVar5 = DAT_146869310._8_4_;
      auVar17 = divps(auVar17,_DAT_146869310);
      fVar19 = (float)local_78 - (float)(int)auVar17._0_4_ * fVar3;
      fVar20 = (float)((ulonglong)local_78 >> 0x20) - (float)(int)auVar17._4_4_ * fVar4;
      fVar21 = *(float *)(plVar11 + 0x40) - (float)(int)auVar17._8_4_ * fVar5;
      fVar19 = (float)(((uint)(fVar19 + fVar3) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                      (uint)(fVar19 + fVar3));
      fVar20 = (float)(((uint)(fVar20 + fVar4) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                      (uint)(fVar20 + fVar4));
      fVar21 = (float)(((uint)(fVar21 + fVar5) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                      (uint)(fVar21 + fVar5));
      local_70 = ((uint)(fVar21 - fVar5) ^ (uint)fVar21) & -(uint)(fRam0000000146869308 < fVar21) ^
                 (uint)fVar21;
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar20 - fVar4) ^ (uint)fVar20) & -(uint)(fRam0000000146869304 < fVar20)
                    ^ (uint)fVar20,
                    ((uint)(fVar19 - fVar3) ^ (uint)fVar19) & -(uint)(_DAT_146869300 < fVar19) ^
                    (uint)fVar19);
      *(uint *)(plVar11 + 0x51) = local_70;
      plVar12 = (longlong *)FRotator::Quaternion(pfVar1,&local_48);
      lVar2 = plVar12[1];
      plVar11[0x4e] = *plVar12;
      plVar11[0x4f] = lVar2;
    }
    local_58 = (undefined2 *)plVar11[0x4e];
    lStack_50 = plVar11[0x4f];
    uVar22 = 0;
    uVar8 = FUN_142397be0(plVar11,&local_68,&local_58,0,0,0);
    lVar2 = *(longlong *)(param_1 + 0x168);
    uVar10 = DAT_1468b5da8;
    lVar6 = DAT_1468b5da0;
    if (lVar2 != 0) {
      local_48 = *(float *)(lVar2 + 0x210);
      fStack_44 = *(float *)(lVar2 + 0x214);
      fStack_40 = *(float *)(lVar2 + 0x218);
      fStack_3c = *(float *)(lVar2 + 0x21c);
      auVar18._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_44);
      auVar18._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_48);
      auVar18._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_40);
      auVar18._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_3c);
      iVar9 = movmskps(uVar8,auVar18);
      if (iVar9 != 0) {
        *(float *)(lVar2 + 0x250) = local_48;
        *(float *)(lVar2 + 0x254) = fStack_44;
        *(float *)(lVar2 + 600) = fStack_40;
        *(float *)(lVar2 + 0x25c) = fStack_3c;
        puVar13 = (undefined8 *)FQuat::Rotator(&local_48,&local_58);
        *(undefined8 *)(lVar2 + 0x260) = *puVar13;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar13 + 1);
      }
      uVar10 = *(undefined4 *)(lVar2 + 0x268);
      lVar6 = *(longlong *)(lVar2 + 0x260);
    }
    local_78 = lVar6;
    local_70 = uVar10;
    local_68 = lVar6;
    local_60 = uVar10;
    uVar14 = FRotator::Quaternion(&local_78,local_38);
    FUN_142399b10(plVar11,uVar14,0,0,uVar22 & 0xffffffffffffff00);
    FUN_140ae39d0(param_1,plVar11);
    *(longlong **)(param_3 + 0x10) = plVar11;
  }
  plVar11 = *(longlong **)(param_3 + 0x10);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x290))(plVar11,bVar16,0);
    FUN_142397540(*(undefined8 *)(param_3 + 0x10),bVar16 ^ 1,1);
    if ((bVar16 != false) && (param_2 != 0)) {
      if (*(longlong *)(param_2 + 0x10) != 0) {
        FSceneViewport::GetMouseY();
      }
      FUN_14260f0c0(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_1 + 0x6f0));
    }
  }
  return;
}



// FUNCTION 140b76940 FUN_140b76940 body=172 status=ok
// SIG undefined FUN_140b76940(void)

void FUN_140b76940(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x918)) {
    do {
      FUN_140b769f0(param_1,iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x918));
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    do {
      FUN_140b769f0(param_1,iVar1,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x928));
  }
  if (0 < *(int *)(param_1 + 0x938)) {
    do {
      FUN_140b769f0(param_1,iVar2,2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x938));
  }
  FUN_140b6e740(param_1);
  FUN_140b6ed80(param_1);
  FUN_140b6e2b0(param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x518,0);
  return;
}



// FUNCTION 140b769f0 FUN_140b769f0 body=992 status=ok
// SIG undefined FUN_140b769f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b769f0(longlong param_1,int param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined8 local_a8 [2];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_3 == '\x01') {
    lVar6 = 0x920;
  }
  else {
    lVar6 = 0x910;
    if (param_3 == '\x02') {
      lVar6 = 0x930;
    }
  }
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 8 + lVar6))) &&
     (((plVar10 = (longlong *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + lVar6)),
       (byte)(*(char *)((longlong)plVar10 + 0x35) - 3U) < 2 ||
       (*(char *)((longlong)plVar10 + 0x34) != '\0')) ||
      (((*plVar10 != 0 && (plVar10[1] != 0)) && (plVar10[2] != 0)))))) {
    uVar5 = FUN_140b565e0(param_1,param_2,param_3);
    *(undefined4 *)(plVar10 + 7) = uVar5;
    FUN_140b76dd0(param_1,param_2,param_3);
    if ((((int)plVar10[7] != -1) && (*plVar10 != 0)) &&
       (plVar7 = (longlong *)FUN_142ffd5a0(), plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x418))(plVar7,&DAT_14653218c);
      FString::PrintfImpl(&local_b8,L"Tray_%02d_Socket",(int)plVar10[7] + 1);
      puVar9 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar9 = local_b8;
      }
      FName::FName(local_a8,puVar9,1);
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_68 = plVar10[2];
      if (local_68 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(local_68 + 0x208);
      }
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x1a8) == '\0') {
          local_88 = local_a8[0];
          local_80 = *(undefined1 *)(param_1 + 0x548);
          local_48 = 0x1000100;
          local_70 = (undefined8 *)(param_1 + 0x6a0) != &local_7c;
          if ((bool)local_70) {
            local_7c = *(undefined8 *)(param_1 + 0x6a0);
            local_74 = *(undefined4 *)(param_1 + 0x6a8);
          }
          puVar8 = (undefined8 *)(lVar6 + 0x18c);
          if (*(char *)(lVar6 + 0x188) == '\0') {
            puVar8 = &DAT_1468b5da0;
          }
          local_60 = *puVar8;
          local_58 = *(undefined4 *)(puVar8 + 1);
          if (*(char *)(lVar6 + 0x198) == '\0') {
            puVar8 = (undefined8 *)&DAT_1468b5d90;
          }
          else {
            puVar8 = (undefined8 *)(lVar6 + 0x19c);
          }
          local_54 = *puVar8;
          local_4c = *(undefined4 *)(puVar8 + 1);
          FUN_142fe6850(plVar7,*(undefined8 *)(param_1 + 0x578),&local_88);
        }
        else {
          FUN_142382f60(plVar7,*(undefined8 *)(param_1 + 0x578),&DAT_146532184,local_a8[0]);
          lStack_c0._0_4_ = *(undefined4 *)(lVar6 + 0x1b4);
          local_c8 = *(longlong *)(lVar6 + 0x1ac);
          (**(code **)(*plVar7 + 0x3f8))(plVar7,&local_c8);
          if (*(char *)(lVar6 + 0x188) != '\0') {
            local_c8 = *(longlong *)(lVar6 + 0x18c);
            lStack_c0._0_4_ = *(undefined4 *)(lVar6 + 0x194);
            local_d8 = CONCAT71(local_d8._1_7_,1);
            FUN_142398470(plVar7,&local_c8,0,0);
          }
          if (*(char *)(lVar6 + 0x198) != '\0') {
            local_b8 = *(undefined2 **)(lVar6 + 0x19c);
            pfVar1 = (float *)(plVar7 + 0x50);
            local_b0 = *(undefined4 *)(lVar6 + 0x1a4);
            if (((*(float *)(plVar7 + 0x3f) != *pfVar1) ||
                (*(float *)((longlong)plVar7 + 0x1fc) != *(float *)((longlong)plVar7 + 0x284))) ||
               (*(float *)(plVar7 + 0x40) != *(float *)(plVar7 + 0x51))) {
              local_c8 = *(longlong *)*(undefined1 (*) [12])(plVar7 + 0x3f);
              auVar11._12_4_ = 0;
              auVar11._0_12_ = *(undefined1 (*) [12])(plVar7 + 0x3f);
              fVar2 = (float)DAT_146869310;
              fVar3 = DAT_146869310._4_4_;
              fVar4 = DAT_146869310._8_4_;
              auVar11 = divps(auVar11,_DAT_146869310);
              fVar13 = (float)local_c8 - (float)(int)auVar11._0_4_ * fVar2;
              fVar14 = (float)((ulonglong)local_c8 >> 0x20) - (float)(int)auVar11._4_4_ * fVar3;
              fVar15 = *(float *)(plVar7 + 0x40) - (float)(int)auVar11._8_4_ * fVar4;
              fVar13 = (float)(((uint)(fVar13 + fVar2) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                              (uint)(fVar13 + fVar2));
              fVar14 = (float)(((uint)(fVar14 + fVar3) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                              (uint)(fVar14 + fVar3));
              fVar15 = (float)(((uint)(fVar15 + fVar4) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                              (uint)(fVar15 + fVar4));
              uVar12 = ((uint)(fVar15 - fVar4) ^ (uint)fVar15) &
                       -(uint)(fRam0000000146869308 < fVar15) ^ (uint)fVar15;
              lStack_c0 = CONCAT44(lStack_c0._4_4_,uVar12);
              *(ulonglong *)pfVar1 =
                   CONCAT44(((uint)(fVar14 - fVar3) ^ (uint)fVar14) &
                            -(uint)(fRam0000000146869304 < fVar14) ^ (uint)fVar14,
                            ((uint)(fVar13 - fVar2) ^ (uint)fVar13) &
                            -(uint)(_DAT_146869300 < fVar13) ^ (uint)fVar13);
              *(uint *)(plVar7 + 0x51) = uVar12;
              plVar10 = (longlong *)FRotator::Quaternion(pfVar1,local_98);
              lVar6 = plVar10[1];
              plVar7[0x4e] = *plVar10;
              plVar7[0x4f] = lVar6;
            }
            local_c8 = plVar7[0x4e];
            lStack_c0 = plVar7[0x4f];
            local_d0 = 1;
            local_d8 = 0;
            FUN_142397be0(plVar7,&local_b8,&local_c8,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b76dd0 FUN_140b76dd0 body=136 status=ok
// SIG undefined FUN_140b76dd0(void)

void FUN_140b76dd0(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  
  if (param_3 == '\x01') {
    lVar2 = 0x920;
  }
  else {
    lVar2 = 0x910;
    if (param_3 == '\x02') {
      lVar2 = 0x930;
    }
  }
  if ((-1 < param_2) && (param_2 < (int)((longlong *)(lVar2 + param_1))[1])) {
    plVar3 = (longlong *)((longlong)param_2 * 0x40 + *(longlong *)(lVar2 + param_1));
    plVar1 = (longlong *)*plVar3;
    if (plVar1 != (longlong *)0x0) {
      if ((int)plVar3[7] == -1) {
                    /* WARNING: Could not recover jumptable at 0x000140b76e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x310))(plVar1,1);
        return;
      }
      uVar4 = 0;
      if (*(char *)(param_1 + 0x4d4) == '\0') {
        uVar4 = 0;
        if (*(char *)(param_1 + 0x9b0) != '\f') {
          uVar4 = 1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000140b76e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x310))(plVar1,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 140b76e60 FUN_140b76e60 body=180 status=ok
// SIG undefined FUN_140b76e60(void)

void FUN_140b76e60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140ae8760();
  puVar1 = *(undefined8 **)(param_1 + 0x910);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x918) * 8;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 8) {
    FUN_140ae38b0(param_1,*puVar1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x920);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x928) * 8;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 8) {
    FUN_140ae38b0(param_1,*puVar1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x930);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x938) * 8;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 8) {
    FUN_140ae38b0(param_1,*puVar1);
  }
  return;
}



// FUNCTION 140b76f20 FUN_140b76f20 body=293 status=ok
// SIG undefined FUN_140b76f20(void)

void FUN_140b76f20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x581) == '\x01') {
    lVar2 = 0x920;
  }
  else {
    lVar2 = 0x910;
    if (*(char *)(param_1 + 0x581) == '\x02') {
      lVar2 = 0x930;
    }
  }
  iVar6 = *(int *)(lVar2 + 8 + param_1);
  lVar3 = (longlong)iVar6;
  plVar1 = (longlong *)(lVar2 + param_1);
  if (iVar6 != 0) {
    iVar8 = 0;
    lVar2 = 0;
    bVar5 = 1 < (byte)(*(char *)(*plVar1 + 0x35) - 3U);
    iVar6 = 0;
    do {
      lVar2 = lVar2 + 1;
      iVar7 = iVar6 + 1;
      if (lVar2 < lVar3) {
        pcVar4 = (char *)(*plVar1 + 0x35 + lVar2 * 0x40);
        do {
          if (bVar5 != 1 < (byte)(*pcVar4 - 3U)) break;
          iVar7 = iVar7 + 1;
          lVar2 = lVar2 + 1;
          pcVar4 = pcVar4 + 0x40;
        } while (lVar2 < lVar3);
      }
      if (bVar5 != false) {
        if (iVar8 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x40 + *plVar1),
                     (void *)((longlong)iVar6 * 0x40 + *plVar1),(longlong)(iVar7 - iVar6) << 6);
        }
        iVar8 = iVar8 + (iVar7 - iVar6);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar6 = iVar7;
    } while (lVar2 < lVar3);
    *(int *)(plVar1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 140b77050 FUN_140b77050 body=941 status=ok
// SIG undefined FUN_140b77050(void)

void FUN_140b77050(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  if (param_1 == 0) {
LAB_140b770e1:
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (lVar2 = *(longlong *)(param_1 + 0x848), lVar2 == 0)) goto LAB_140b770e1;
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
    if (!bVar1) goto LAB_140b770e1;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar5 = DAT_146b33f38 + 0xa0;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0xa8)) && (*(longlong *)(lVar3 + 0xb0) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0xa8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar5);
      if (lVar4 != 0) goto LAB_140b77176;
    }
  }
  else {
LAB_140b77176:
    lVar3 = FUN_1413bd170();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b771af;
  }
  lVar4 = 0;
LAB_140b771af:
  if ((lVar2 != 0) && (lVar4 != 0)) {
    puVar7 = *(undefined8 **)(lVar4 + 0x1f8);
    puVar6 = puVar7 + (longlong)*(int *)(lVar4 + 0x200) * 4;
    for (; puVar7 != puVar6; puVar7 = puVar7 + 4) {
      uStack_100 = 0;
      local_108 = lVar2;
      FUN_142ca2f00(*puVar7,&local_108,0);
      uStack_f0 = 0;
      local_f8 = lVar2;
      FUN_142ca2f00(puVar7[1],&local_f8);
      uStack_e0 = 0;
      local_e8 = lVar2;
      FUN_142ca2f00(puVar7[2],&local_e8);
      uStack_d0 = 0;
      local_d8 = lVar2;
      FUN_142ca2f00(puVar7[3],&local_d8);
    }
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_142ca2f00(*(undefined8 *)(lVar4 + 0x208),&local_c8,0x3f800000);
  }
  return;
}



// FUNCTION 140b77400 _Destroy_if_node body=13 status=ok
// SIG undefined _Destroy_if_node(void)

void std::
     _Tree<std::_Tmap_traits<int,ChromaSDK::AnimationBase_*,std::less<int>,std::allocator<std::pair<int_const_,ChromaSDK::AnimationBase_*>_>,0>_>
     ::_Destroy_if_node(undefined8 param_1,undefined8 param_2)

{
  FMemory::operator_delete(param_2,0x30);
  return;
}



// FUNCTION 140b77410 _Erase body=85 status=ok
// SIG undefined _Erase(void)

void std::
     _Tree<std::_Tmap_traits<OpenMesh::VectorT<float,3>,OpenMesh::VertexHandle,OpenMesh::IO::CmpVec,std::allocator<std::pair<OpenMesh::VectorT<float,3>_const_,OpenMesh::VertexHandle>_>,0>_>
     ::_Erase(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    _Erase(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FMemory::operator_delete(param_2,0x30);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 140b77480 operator<FBodyInstance_const_*,TMap<FBodyInstance_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_const_*,int,0>_>_>_TTuple<FBodyInstance_const_*,TMap<FBodyInstance_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_const_*,int,0>_>_> body=262 status=ok
// SIG undefined operator<FBodyInstance_const_*,TMap<FBodyInstance_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_const_*,int,0>_>_>_TTuple<FBodyInstance_const_*,TMap<FBodyInstance_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_const_*,int,0>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<FBodyInstance_const_*_const_&>::
operator<FBodyInstance_const_*,TMap<FBodyInstance_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_const_*,int,0>_>_>_TTuple<FBodyInstance_const_*,TMap<FBodyInstance_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_const_*,int,0>_>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 8,&local_40,4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  param_2[9] = lVar1;
  *(undefined4 *)(param_2 + 10) = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 140b77590 Append<FDefaultSetAllocator> body=560 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
     ::Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Reserve();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_140b7767d;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140b7767d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140b77743;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
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
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140b77743:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = *(longlong *)CONCAT44(uStack_74,local_78) + (longlong)(int)uStack_5c * 0x18;
    lStack_90 = local_98 + 8;
    FUN_140b782b0(param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 140b777c0 FUN_140b777c0 body=414 status=ok
// SIG undefined FUN_140b777c0(void)

int * FUN_140b777c0(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar11 = false;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *param_2 = local_38[0];
  *(undefined4 *)local_30 = uVar2;
  *(undefined4 *)((longlong)local_30 + 4) = uVar3;
  *(undefined4 *)(local_30 + 1) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    if (iVar10 != 0) {
      lVar1 = *local_30;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar1) goto LAB_140b7788c;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_140b7788c:
    bVar11 = iVar9 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar9;
      goto LAB_140b77936;
    }
  }
  cVar6 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    uVar8 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_140b77936:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140b77960 FUN_140b77960 body=569 status=ok
// SIG undefined FUN_140b77960(void)

int * FUN_140b77960(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  plVar8 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
  lVar2 = *(longlong *)*param_3;
  plVar8[1] = 0;
  *plVar8 = lVar2;
  *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar2) goto LAB_140b77abf;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140b77abf:
    bVar10 = iVar4 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),plVar8,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar4;
      goto LAB_140b77b70;
    }
  }
  cVar3 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    uVar7 = (int)((ulonglong)*plVar8 >> 0x20) + (int)*plVar8 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar8 + 0x14) = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar8 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_140b77b70:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 140b77ba0 FUN_140b77ba0 body=687 status=ok
// SIG undefined FUN_140b77ba0(void)

int * FUN_140b77ba0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  void *_Dst;
  uint uVar12;
  int iVar13;
  bool local_res8;
  
  uVar10 = 0xffffffff;
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)iVar13 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar13 * 0x60 + *param_1);
  TKeyInitializer<FBodyInstance_const_*_const_&>::
  operator<FBodyInstance_const_*,TMap<FBodyInstance_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_const_*,int,0>_>_>_TTuple<FBodyInstance_const_*,TMap<FBodyInstance_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_const_*,int,0>_>_>
            (param_3,plVar11);
  *(undefined4 *)(plVar11 + 0xb) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar13 != 1) {
    lVar2 = *plVar11;
    iVar8 = iVar9;
    if (iVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar8 = iVar5;
          if (*(longlong *)((longlong)iVar5 * 0x60 + *param_1) == lVar2) break;
          iVar5 = *(int *)((longlong)iVar5 * 0x60 + 0x58 + *param_1);
          iVar8 = iVar9;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x58);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar9;
      }
      puVar6 = (undefined4 *)((longlong)iVar9 * 0x60 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140b77e2d;
    }
  }
  cVar4 = TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar4 == '\0') {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x5c) = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_140b77e2d:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140b77e50 Emplace<TPairInitializer<FString_&&,FVariantData_&&>_> body=400 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&&,FVariantData_&&>_>(void)

int * TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FVariantData_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  uVar3 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  FVariantData::FVariantData(local_30 + 2,uVar3);
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8,local_30);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0x30 + *param_1);
      FVariantData::Empty(plVar7 + 2);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar7,local_30,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140b77fbd;
    }
  }
  cVar4 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0x2c) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 5) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_140b77fbd:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140b77fe0 FUN_140b77fe0 body=713 status=ok
// SIG undefined FUN_140b77fe0(void)

int * FUN_140b77fe0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte *_Src;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  
  iVar15 = 1;
  iVar18 = -1;
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
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar14;
  lVar9 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  bVar19 = false;
  puVar17 = (uint *)((longlong)plVar10 + lVar9);
  *puVar17 = *puVar17 | 1 << ((byte)iVar14 & 0x1f);
  puVar3 = (undefined4 *)param_3[1];
  lVar1 = (longlong)iVar14 * 0x28;
  _Src = (byte *)(*param_1 + lVar1);
  bVar2 = *(byte *)*param_3;
  *_Src = bVar2;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *(undefined4 *)(_Src + 8) = *puVar3;
  *(undefined4 *)(_Src + 0xc) = uVar5;
  *(undefined4 *)(_Src + 0x10) = uVar6;
  *(undefined4 *)(_Src + 0x14) = uVar7;
  *(undefined8 *)(_Src + 0x18) = *(undefined8 *)(puVar3 + 4);
  _Src[0x20] = 0xff;
  _Src[0x21] = 0xff;
  _Src[0x22] = 0xff;
  _Src[0x23] = 0xff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar13 = iVar18;
    if (uVar16 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (ulonglong)bVar2) * 4)
      ;
      if (iVar12 != -1) {
        do {
          iVar13 = iVar12;
          if (*(byte *)(*param_1 + (longlong)iVar12 * 0x28) == bVar2) break;
          iVar12 = *(int *)(*param_1 + 0x20 + (longlong)iVar12 * 0x28);
          iVar13 = iVar18;
        } while (iVar12 != -1);
      }
    }
    bVar19 = iVar13 != -1;
    if (bVar19) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar13 * 0x28),_Src,0x20);
      bVar2 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar14;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar10 + lVar9);
      *puVar17 = *puVar17 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140b78284;
    }
  }
  if (3 < uVar16) {
    uVar8 = (uVar16 >> 1) + 8;
    iVar18 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    iVar15 = 0x20;
    cVar11 = '\0';
    if (uVar8 != 0) {
      iVar15 = 0x1f - iVar18;
    }
    uVar8 = (uVar16 >> 1) + 7;
    iVar18 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar11 = '\x1f' - (char)iVar18;
    }
    iVar15 = 1 << (~(byte)((iVar15 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    uVar16 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x24) = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x20) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar16) * 4) = iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140b78284:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 140b782b0 FUN_140b782b0 body=420 status=ok
// SIG undefined FUN_140b782b0(void)

int * FUN_140b782b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  plVar3 = (longlong *)param_3[1];
  lVar1 = *(longlong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = lVar1;
  local_30[1] = *plVar3;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar1) goto LAB_140b7837d;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140b7837d:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_140b7842c;
    }
  }
  cVar2 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140b7842c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140b78460 Emplace<TPairInitializer<FString_const_&,FVariantData_&&>_> body=382 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,FVariantData_&&>_>(void)

int * TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FVariantData_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  FVariantData::FVariantData(local_30 + 2,uVar3);
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0x30 + *param_1);
      FVariantData::Empty(plVar7 + 2);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar7,local_30,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140b785bb;
    }
  }
  cVar4 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0x2c) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 5) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_140b785bb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140b785e0 FUN_140b785e0 body=107 status=ok
// SIG undefined FUN_140b785e0(void)

longlong FUN_140b785e0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = FUN_14143c410();
  lVar2 = FUN_140bb9c50(param_1,local_res10);
  if (lVar2 != 0) {
    lVar3 = FUN_14143c410();
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



// FUNCTION 140b78650 FUN_140b78650 body=384 status=ok
// SIG undefined FUN_140b78650(void)

void FUN_140b78650(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar12;
  ulonglong uVar11;
  
  uVar4 = (param_2 + -2) / 2;
  if (-1 < (int)uVar4) {
    iVar7 = uVar4 * 2 + 1;
    do {
      uVar6 = (ulonglong)uVar4;
      iVar5 = iVar7;
      while (iVar5 < param_2) {
        iVar5 = (int)uVar6;
        uVar10 = iVar5 * 2;
        uVar9 = uVar10 + 1;
        if ((int)(uVar10 + 2) < param_2) {
          cVar3 = FUN_140b7b4f0(param_4,param_1[(longlong)(int)uVar10 + 2],param_1[(int)uVar9]);
          if (cVar3 != '\0') {
            uVar9 = uVar10;
          }
          uVar9 = uVar9 + 1;
        }
        uVar11 = (ulonglong)uVar9;
        puVar12 = param_1 + (int)uVar9;
        puVar1 = param_1 + iVar5;
        cVar3 = FUN_140b7b4f0(param_4,param_1[iVar5],param_1[(int)uVar9]);
        if (cVar3 == '\0') break;
        uVar2 = *puVar1;
        *puVar1 = *puVar12;
        *puVar12 = uVar2;
        uVar6 = uVar11 & 0xffffffff;
        iVar5 = (int)uVar11 * 2 + 1;
      }
      iVar7 = iVar7 + -2;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar6 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar2;
      if (1 < param_2) {
        do {
          iVar7 = (int)uVar6;
          uVar4 = iVar7 * 2;
          uVar10 = uVar4 + 1;
          if ((int)(uVar4 + 2) < param_2) {
            cVar3 = FUN_140b7b4f0(param_4,param_1[(longlong)(int)uVar4 + 2],param_1[(int)uVar10]);
            if (cVar3 != '\0') {
              uVar10 = uVar4;
            }
            uVar10 = uVar10 + 1;
          }
          uVar11 = (ulonglong)uVar10;
          puVar12 = param_1 + (int)uVar10;
          puVar1 = param_1 + iVar7;
          cVar3 = FUN_140b7b4f0(param_4,param_1[iVar7],param_1[(int)uVar10]);
          if (cVar3 == '\0') break;
          uVar2 = *puVar1;
          *puVar1 = *puVar12;
          uVar6 = uVar11 & 0xffffffff;
          *puVar12 = uVar2;
        } while ((int)uVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 140b787d0 FUN_140b787d0 body=384 status=ok
// SIG undefined FUN_140b787d0(void)

void FUN_140b787d0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar12;
  ulonglong uVar11;
  
  uVar4 = (param_2 + -2) / 2;
  if (-1 < (int)uVar4) {
    iVar7 = uVar4 * 2 + 1;
    do {
      uVar6 = (ulonglong)uVar4;
      iVar5 = iVar7;
      while (iVar5 < param_2) {
        iVar5 = (int)uVar6;
        uVar10 = iVar5 * 2;
        uVar9 = uVar10 + 1;
        if ((int)(uVar10 + 2) < param_2) {
          cVar3 = FUN_140b7b0c0(param_4,param_1[(longlong)(int)uVar10 + 2],param_1[(int)uVar9]);
          if (cVar3 != '\0') {
            uVar9 = uVar10;
          }
          uVar9 = uVar9 + 1;
        }
        uVar11 = (ulonglong)uVar9;
        puVar12 = param_1 + (int)uVar9;
        puVar1 = param_1 + iVar5;
        cVar3 = FUN_140b7b0c0(param_4,param_1[iVar5],param_1[(int)uVar9]);
        if (cVar3 == '\0') break;
        uVar2 = *puVar1;
        *puVar1 = *puVar12;
        *puVar12 = uVar2;
        uVar6 = uVar11 & 0xffffffff;
        iVar5 = (int)uVar11 * 2 + 1;
      }
      iVar7 = iVar7 + -2;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar6 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar2;
      if (1 < param_2) {
        do {
          iVar7 = (int)uVar6;
          uVar4 = iVar7 * 2;
          uVar10 = uVar4 + 1;
          if ((int)(uVar4 + 2) < param_2) {
            cVar3 = FUN_140b7b0c0(param_4,param_1[(longlong)(int)uVar4 + 2],param_1[(int)uVar10]);
            if (cVar3 != '\0') {
              uVar10 = uVar4;
            }
            uVar10 = uVar10 + 1;
          }
          uVar11 = (ulonglong)uVar10;
          puVar12 = param_1 + (int)uVar10;
          puVar1 = param_1 + iVar7;
          cVar3 = FUN_140b7b0c0(param_4,param_1[iVar7],param_1[(int)uVar10]);
          if (cVar3 == '\0') break;
          uVar2 = *puVar1;
          *puVar1 = *puVar12;
          uVar6 = uVar11 & 0xffffffff;
          *puVar12 = uVar2;
        } while ((int)uVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 140b78950 IntroSortInternal<unsigned_int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<unsigned_int>_>_> body=818 status=ok
// SIG undefined IntroSortInternal<unsigned_int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<unsigned_int>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<unsigned_int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<unsigned_int>_>_>
               (longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 4;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar9 = &local_328;
    do {
      puVar7 = (uint *)*plVar9;
      puVar14 = (uint *)plVar9[1];
      local_338 = (int)plVar9[2];
      lVar11 = ((longlong)puVar14 - (longlong)puVar7 >> 2) + 1;
      puVar10 = puVar7;
      if (local_338 != 0) {
LAB_140b78a10:
        if (8 < lVar11) {
          if (lVar11 < 0) {
            lVar11 = lVar11 + 1;
          }
          uVar1 = puVar10[lVar11 >> 1];
          puVar10[lVar11 >> 1] = *puVar10;
          puVar12 = puVar14 + 1;
          *puVar10 = uVar1;
          puVar7 = puVar10;
LAB_140b78a40:
          puVar7 = puVar7 + 1;
          if (puVar7 <= puVar14) goto code_r0x000140b78a49;
          goto LAB_140b78a50;
        }
        for (; puVar12 = puVar10, puVar7 = puVar10, puVar10 < puVar14; puVar14 = puVar14 + -1) {
          while (puVar13 = puVar12, puVar7 = puVar7 + 1, puVar7 <= puVar14) {
            puVar12 = puVar7;
            if (*puVar7 <= *puVar13) {
              puVar12 = puVar13;
            }
          }
          uVar1 = *puVar13;
          *puVar13 = *puVar14;
          *puVar14 = uVar1;
        }
        goto LAB_140b78bfa;
      }
LAB_140b78afe:
      iVar15 = (int)lVar11;
      iVar4 = (iVar15 + -2) / 2;
      if (-1 < iVar4) {
        iVar5 = iVar4 * 2 + 1;
        iVar3 = iVar5;
        iVar8 = iVar4;
joined_r0x000140b78b18:
        do {
          if (iVar5 < iVar15) {
            iVar5 = iVar4 * 2;
            iVar6 = iVar5 + 1;
            if (iVar5 + 2 < iVar15) {
              if (puVar7[(longlong)iVar5 + 2] < puVar7[iVar6]) {
                iVar6 = iVar5;
              }
              iVar6 = iVar6 + 1;
            }
            uVar1 = puVar7[iVar4];
            if (uVar1 < puVar7[iVar6]) {
              puVar7[iVar4] = puVar7[iVar6];
              puVar7[iVar6] = uVar1;
              iVar5 = iVar6 * 2 + 1;
              iVar4 = iVar6;
              goto joined_r0x000140b78b18;
            }
          }
          iVar5 = iVar3 + -2;
          iVar4 = iVar8 + -1;
          iVar3 = iVar5;
          iVar8 = iVar4;
        } while (-1 < iVar4);
      }
      iVar15 = iVar15 + -1;
      lVar11 = (longlong)iVar15;
      if (0 < iVar15) {
        do {
          uVar1 = *puVar7;
          iVar4 = 0;
          *puVar7 = puVar7[lVar11];
          puVar7[lVar11] = uVar1;
          if (1 < iVar15) {
            do {
              iVar3 = iVar4 * 2;
              iVar5 = iVar3 + 1;
              if (iVar3 + 2 < iVar15) {
                if (puVar7[(longlong)iVar3 + 2] < puVar7[iVar5]) {
                  iVar5 = iVar3;
                }
                iVar5 = iVar5 + 1;
              }
              uVar1 = puVar7[iVar4];
              if (puVar7[iVar5] <= uVar1) break;
              puVar7[iVar4] = puVar7[iVar5];
              puVar7[iVar5] = uVar1;
              iVar4 = iVar5;
            } while (iVar5 * 2 + 1 < iVar15);
          }
          iVar15 = iVar15 + -1;
          lVar11 = lVar11 + -1;
        } while (0 < lVar11);
      }
LAB_140b78bfa:
      plVar9 = plVar9 + -3;
    } while (&local_328 <= plVar9);
  }
  return;
code_r0x000140b78a49:
  if (*puVar7 <= *puVar10) goto LAB_140b78a40;
LAB_140b78a50:
  do {
    puVar13 = puVar12;
    uVar1 = puVar13[-1];
    puVar12 = puVar13 + -1;
    if (puVar12 <= puVar10) break;
  } while (*puVar10 <= uVar1);
  if (puVar7 <= puVar12) {
    uVar2 = *puVar7;
    *puVar7 = uVar1;
    *puVar12 = uVar2;
    goto LAB_140b78a40;
  }
  uVar2 = *puVar10;
  local_338 = local_338 + -1;
  *puVar10 = uVar1;
  *puVar12 = uVar2;
  if ((longlong)((longlong)puVar12 + (-4 - (longlong)puVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar14 - (longlong)puVar7 & 0xfffffffffffffffcU)) {
    if (puVar7 < puVar14) {
      *plVar9 = (longlong)puVar7;
      plVar9[1] = (longlong)puVar14;
      *(int *)(plVar9 + 2) = local_338;
      plVar9 = plVar9 + 3;
    }
    if (puVar12 <= puVar10 + 1) goto LAB_140b78bfa;
    puVar14 = puVar13 + -2;
    puVar7 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar12) {
      *plVar9 = (longlong)puVar10;
      plVar9[1] = (longlong)(puVar13 + -2);
      *(int *)(plVar9 + 2) = local_338;
      plVar9 = plVar9 + 3;
    }
    if (puVar14 <= puVar7) goto LAB_140b78bfa;
  }
  lVar11 = ((longlong)puVar14 - (longlong)puVar7 >> 2) + 1;
  puVar10 = puVar7;
  if (local_338 == 0) goto LAB_140b78afe;
  goto LAB_140b78a10;
}



// FUNCTION 140b78c90 FUN_140b78c90 body=631 status=ok
// SIG undefined FUN_140b78c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b78c90(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_328 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar10 = &local_338;
    do {
      puVar6 = (undefined8 *)*plVar10;
      puVar5 = (undefined8 *)plVar10[1];
      local_348 = plVar10[2];
      lVar3 = ((longlong)puVar5 - (longlong)puVar6 >> 3) + 1;
      iVar4 = (int)local_348;
      if ((int)local_348 != 0) {
LAB_140b78d60:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar5 + 1;
          uVar1 = puVar6[lVar3 >> 1];
          puVar6[lVar3 >> 1] = *puVar6;
          *puVar6 = uVar1;
          puVar7 = puVar6;
LAB_140b78d90:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar5) goto code_r0x000140b78d99;
          goto LAB_140b78db0;
        }
        puVar7 = puVar6;
        puVar9 = puVar6;
        puVar8 = puVar6;
        if (puVar6 < puVar5) {
          do {
            while (puVar8 = puVar8 + 1, puVar8 <= puVar5) {
              cVar2 = FUN_140b7b4f0(param_4,*puVar7,*puVar8);
              if (cVar2 != '\0') {
                puVar7 = puVar8;
              }
            }
            uVar1 = *puVar7;
            *puVar7 = *puVar5;
            *puVar5 = uVar1;
            puVar5 = puVar5 + -1;
            puVar7 = puVar9;
            puVar8 = puVar6;
          } while (puVar9 < puVar5);
        }
        goto LAB_140b78e71;
      }
LAB_140b78e62:
      FUN_140b78650(puVar6,lVar3,param_3,param_4);
LAB_140b78e71:
      plVar10 = plVar10 + -3;
    } while (&local_338 <= plVar10);
  }
  return;
code_r0x000140b78d99:
  cVar2 = FUN_140b7b4f0(param_4,*puVar7,*puVar6);
  if (cVar2 == '\0') goto LAB_140b78d90;
LAB_140b78db0:
  do {
    puVar8 = puVar8 + -1;
    if (puVar8 <= puVar7) break;
    cVar2 = FUN_140b7b4f0(param_4,*puVar8,*puVar7);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar8) {
    uVar1 = *puVar6;
    *puVar6 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_140b78d90;
  }
  uVar1 = *puVar7;
  iVar4 = iVar4 + -1;
  *puVar7 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar5 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar5) {
      *plVar10 = (longlong)puVar6;
      plVar10[1] = (longlong)puVar5;
      *(int *)(plVar10 + 2) = iVar4;
      plVar10 = plVar10 + 3;
    }
    if (puVar8 <= puVar7 + 1) goto LAB_140b78e71;
    puVar5 = puVar8 + -1;
    puVar6 = puVar7;
  }
  else {
    if (puVar7 + 1 < puVar8) {
      *plVar10 = (longlong)puVar7;
      plVar10[1] = (longlong)(puVar8 + -1);
      *(int *)(plVar10 + 2) = iVar4;
      plVar10 = plVar10 + 3;
    }
    if (puVar5 <= puVar6) goto LAB_140b78e71;
  }
  lVar3 = ((longlong)puVar5 - (longlong)puVar6 >> 3) + 1;
  if (iVar4 == 0) goto LAB_140b78e62;
  goto LAB_140b78d60;
}



// FUNCTION 140b78f10 FUN_140b78f10 body=631 status=ok
// SIG undefined FUN_140b78f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b78f10(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_328 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar10 = &local_338;
    do {
      puVar6 = (undefined8 *)*plVar10;
      puVar5 = (undefined8 *)plVar10[1];
      local_348 = plVar10[2];
      lVar3 = ((longlong)puVar5 - (longlong)puVar6 >> 3) + 1;
      iVar4 = (int)local_348;
      if ((int)local_348 != 0) {
LAB_140b78fe0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar5 + 1;
          uVar1 = puVar6[lVar3 >> 1];
          puVar6[lVar3 >> 1] = *puVar6;
          *puVar6 = uVar1;
          puVar7 = puVar6;
LAB_140b79010:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar5) goto code_r0x000140b79019;
          goto LAB_140b79030;
        }
        puVar7 = puVar6;
        puVar9 = puVar6;
        puVar8 = puVar6;
        if (puVar6 < puVar5) {
          do {
            while (puVar8 = puVar8 + 1, puVar8 <= puVar5) {
              cVar2 = FUN_140b7b0c0(param_4,*puVar7,*puVar8);
              if (cVar2 != '\0') {
                puVar7 = puVar8;
              }
            }
            uVar1 = *puVar7;
            *puVar7 = *puVar5;
            *puVar5 = uVar1;
            puVar5 = puVar5 + -1;
            puVar7 = puVar9;
            puVar8 = puVar6;
          } while (puVar9 < puVar5);
        }
        goto LAB_140b790f1;
      }
LAB_140b790e2:
      FUN_140b787d0(puVar6,lVar3,param_3,param_4);
LAB_140b790f1:
      plVar10 = plVar10 + -3;
    } while (&local_338 <= plVar10);
  }
  return;
code_r0x000140b79019:
  cVar2 = FUN_140b7b0c0(param_4,*puVar7,*puVar6);
  if (cVar2 == '\0') goto LAB_140b79010;
LAB_140b79030:
  do {
    puVar8 = puVar8 + -1;
    if (puVar8 <= puVar7) break;
    cVar2 = FUN_140b7b0c0(param_4,*puVar8,*puVar7);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar8) {
    uVar1 = *puVar6;
    *puVar6 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_140b79010;
  }
  uVar1 = *puVar7;
  iVar4 = iVar4 + -1;
  *puVar7 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar5 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar5) {
      *plVar10 = (longlong)puVar6;
      plVar10[1] = (longlong)puVar5;
      *(int *)(plVar10 + 2) = iVar4;
      plVar10 = plVar10 + 3;
    }
    if (puVar8 <= puVar7 + 1) goto LAB_140b790f1;
    puVar5 = puVar8 + -1;
    puVar6 = puVar7;
  }
  else {
    if (puVar7 + 1 < puVar8) {
      *plVar10 = (longlong)puVar7;
      plVar10[1] = (longlong)(puVar8 + -1);
      *(int *)(plVar10 + 2) = iVar4;
      plVar10 = plVar10 + 3;
    }
    if (puVar5 <= puVar6) goto LAB_140b790f1;
  }
  lVar3 = ((longlong)puVar5 - (longlong)puVar6 >> 3) + 1;
  if (iVar4 == 0) goto LAB_140b790e2;
  goto LAB_140b78fe0;
}



// FUNCTION 140b79190 FUN_140b79190 body=959 status=ok
// SIG undefined FUN_140b79190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b79190(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar5 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar5 >> 3) + 1;
      plVar8 = plVar5;
      if (local_338 != 0) {
LAB_140b79260:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          lVar1 = plVar8[lVar9 >> 1];
          plVar8[lVar9 >> 1] = *plVar8;
          plVar10 = plVar13 + 1;
          *plVar8 = lVar1;
          plVar5 = plVar8;
LAB_140b79290:
          plVar5 = plVar5 + 1;
          if (plVar5 <= plVar13) goto code_r0x000140b79299;
          goto LAB_140b792b0;
        }
        for (; plVar10 = plVar8, plVar5 = plVar8, plVar8 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar11 = plVar10, plVar5 = plVar5 + 1, plVar5 <= plVar13) {
            plVar10 = plVar5;
            if (*(uint *)(*plVar5 + 0xa0) <= *(uint *)(*plVar11 + 0xa0)) {
              plVar10 = plVar11;
            }
          }
          lVar9 = *plVar11;
          *plVar11 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_140b794a4;
      }
LAB_140b7936b:
      iVar6 = (int)lVar9;
      iVar3 = (iVar6 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar7 = iVar3;
joined_r0x000140b79388:
        do {
          if (iVar4 < iVar6) {
            iVar4 = iVar3 * 2;
            iVar12 = iVar4 + 1;
            if (iVar4 + 2 < iVar6) {
              if (*(uint *)(plVar5[(longlong)iVar4 + 2] + 0xa0) < *(uint *)(plVar5[iVar12] + 0xa0))
              {
                iVar12 = iVar4;
              }
              iVar12 = iVar12 + 1;
            }
            lVar9 = plVar5[iVar3];
            if (*(uint *)(lVar9 + 0xa0) < *(uint *)(plVar5[iVar12] + 0xa0)) {
              iVar4 = iVar12 * 2 + 1;
              plVar5[iVar3] = plVar5[iVar12];
              plVar5[iVar12] = lVar9;
              iVar3 = iVar12;
              goto joined_r0x000140b79388;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar7 + -1;
          iVar2 = iVar4;
          iVar7 = iVar3;
        } while (-1 < iVar3);
      }
      iVar6 = iVar6 + -1;
      lVar9 = (longlong)iVar6;
      if (0 < iVar6) {
        do {
          iVar3 = 0;
          lVar1 = *plVar5;
          *plVar5 = plVar5[lVar9];
          plVar5[lVar9] = lVar1;
          if (1 < iVar6) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar6) {
                if (*(uint *)(plVar5[(longlong)iVar2 + 2] + 0xa0) < *(uint *)(plVar5[iVar4] + 0xa0))
                {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar5[iVar3];
              if (*(uint *)(plVar5[iVar4] + 0xa0) <= *(uint *)(lVar1 + 0xa0)) break;
              plVar5[iVar3] = plVar5[iVar4];
              plVar5[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar6);
          }
          iVar6 = iVar6 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_140b794a4:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x000140b79299:
  if (*(uint *)(*plVar5 + 0xa0) <= *(uint *)(*plVar8 + 0xa0)) goto LAB_140b79290;
LAB_140b792b0:
  do {
    plVar11 = plVar10;
    lVar9 = plVar11[-1];
    plVar10 = plVar11 + -1;
    if (plVar10 <= plVar8) break;
  } while (*(uint *)(*plVar8 + 0xa0) <= *(uint *)(lVar9 + 0xa0));
  if (plVar5 <= plVar10) {
    lVar1 = *plVar5;
    *plVar5 = lVar9;
    *plVar10 = lVar1;
    goto LAB_140b79290;
  }
  lVar1 = *plVar8;
  *plVar8 = lVar9;
  *plVar10 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar10 + (-8 - (longlong)plVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar5 & 0xfffffffffffffff8U)) {
    if (plVar5 < plVar13) {
      *plVar14 = (longlong)plVar5;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar10 <= plVar8 + 1) goto LAB_140b794a4;
    plVar13 = plVar11 + -2;
    plVar5 = plVar8;
  }
  else {
    if (plVar8 + 1 < plVar10) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)(plVar11 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar5) goto LAB_140b794a4;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar5 >> 3) + 1;
  plVar8 = plVar5;
  if (local_338 == 0) goto LAB_140b7936b;
  goto LAB_140b79260;
}



// FUNCTION 140b79550 FUN_140b79550 body=419 status=ok
// SIG undefined FUN_140b79550(void)

void FUN_140b79550(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_28;
  int local_24;
  longlong local_20;
  
  FWeakObjectPtr::operator=(&local_28,0);
  uVar8 = 0;
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_2);
  local_20 = param_4;
  if ((param_4 != 0) && (lVar3 = FWeakObjectPtr::Get(&local_28), lVar3 != 0)) {
    UObject::FindFunction(lVar3,local_20);
  }
  piVar5 = (int *)*param_1;
  lVar3 = param_1[1];
  for (piVar6 = piVar5; piVar6 != piVar5 + (longlong)(int)lVar3 * 4; piVar6 = piVar6 + 4) {
    if ((((*piVar6 == local_28) && (piVar6[1] == local_24)) ||
        ((cVar2 = FWeakObjectPtr::IsValid(piVar6), cVar2 == '\0' &&
         (cVar2 = FWeakObjectPtr::IsValid(&local_28), cVar2 == '\0')))) &&
       (*(longlong *)(piVar6 + 2) == local_20)) {
      if ((int)((longlong)piVar6 - (longlong)piVar5 >> 4) != -1) goto LAB_140b79657;
      break;
    }
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  piVar5 = (int *)((longlong)iVar1 * 0x10 + *param_1);
  *piVar5 = local_28;
  piVar5[1] = local_24;
  *(longlong *)(piVar5 + 2) = local_20;
LAB_140b79657:
  iVar1 = (int)param_1[1];
  uVar9 = uVar8;
  if (0 < iVar1) {
    do {
      iVar7 = (int)uVar8;
      if (*(longlong *)(*param_1 + uVar9 + 8) == 0) {
LAB_140b7968d:
        iVar4 = (iVar1 - iVar7) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x10 + *param_1),
                     (void *)((longlong)(iVar1 - iVar4) * 0x10 + *param_1),(longlong)iVar4 << 4);
          iVar1 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar1 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
      }
      else {
        lVar3 = FWeakObjectPtr::Get(*param_1 + uVar9,1);
        if (lVar3 == 0) {
          iVar1 = (int)param_1[1];
          goto LAB_140b7968d;
        }
        uVar8 = (ulonglong)(iVar7 + 1);
        uVar9 = uVar9 + 0x10;
      }
      iVar1 = (int)param_1[1];
    } while ((int)uVar8 < iVar1);
  }
  return;
}



// FUNCTION 140b79700 FUN_140b79700 body=63 status=ok
// SIG undefined FUN_140b79700(void)

undefined8 * FUN_140b79700(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14243ca00();
  *param_1 = &PTR__scalar_deleting_destructor__1442e74f0;
  param_1[0xa9] = 0;
  uVar1 = APVPGameMode::GetPrivateStaticClass();
  param_1[0x90] = uVar1;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffe;
  return param_1;
}



// FUNCTION 140b79740 FUN_140b79740 body=236 status=ok
// SIG undefined FUN_140b79740(void)

undefined8 * FUN_140b79740(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TestLeaderboard",1);
  *param_1 = *puVar2;
  iVar1 = *(int *)(param_1 + 3);
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[2]);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"TestColumnInt",1);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = 1;
  }
  iVar1 = *(int *)(param_1 + 3);
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[2]);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"TestColumnFloat",1);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = 7;
  }
  return param_1;
}



// FUNCTION 140b79830 FUN_140b79830 body=2983 status=ok
// SIG undefined FUN_140b79830(void)

undefined8 * FUN_140b79830(undefined8 *param_1)

{
  undefined8 local_res8;
  
  FUN_142d7a850();
  *(undefined4 *)(param_1 + 0x44) = 0x3dcccccd;
  *param_1 = &PTR__scalar_deleting_destructor__1442e6b40;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0x19;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0x19;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x79) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x7a) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x7b) = 0x3f8ccccd;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x7d) = 0x3f666666;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x7e) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x7f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x80) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x81) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x82) = 0x45000000;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x86) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x47435000;
  *(undefined4 *)(param_1 + 0x89) = 0x3dcccccd;
  *(undefined2 *)((longlong)param_1 + 0x44c) = 0x200;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x97) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 10;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4f4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x9d,0);
  }
  if ((undefined2 *)param_1[0x9d] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x9d] = 0;
  }
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xab) = 0x40000000;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  FUN_142741540(param_1 + 0xc2);
  *(undefined4 *)(param_1 + 0x182) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xc14) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x183) = 1;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc44) = 0;
  param_1[0x18a] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if ((*(int *)((longlong)param_1 + 0xc64) < 0) && (*(int *)((longlong)param_1 + 0xc64) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x18b,0);
  }
  if ((undefined2 *)param_1[0x18b] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x18b] = 0;
  }
  *(undefined4 *)(param_1 + 0x189) = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc6c) = 0;
  param_1[399] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x191) = 0;
  if ((*(int *)((longlong)param_1 + 0xc8c) < 0) && (*(int *)((longlong)param_1 + 0xc8c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 400,0);
  }
  if ((undefined2 *)param_1[400] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[400] = 0;
  }
  *(undefined4 *)(param_1 + 0x18e) = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  *(undefined4 *)(param_1 + 0x192) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc94) = 0;
  param_1[0x194] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x196) = 0;
  if ((*(int *)((longlong)param_1 + 0xcb4) < 0) && (*(int *)((longlong)param_1 + 0xcb4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x195,0);
  }
  if ((undefined2 *)param_1[0x195] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x195] = 0;
  }
  *(undefined4 *)(param_1 + 0x193) = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  *(undefined4 *)(param_1 + 0x197) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcbc) = 0;
  param_1[0x199] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x19b) = 0;
  if ((*(int *)((longlong)param_1 + 0xcdc) < 0) && (*(int *)((longlong)param_1 + 0xcdc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x19a,0);
  }
  if ((undefined2 *)param_1[0x19a] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x19a] = 0;
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  param_1[0x19c] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  *(undefined4 *)(param_1 + 0x19d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcec) = 0;
  param_1[0x19f] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1a1) = 0;
  if ((*(int *)((longlong)param_1 + 0xd0c) < 0) && (*(int *)((longlong)param_1 + 0xd0c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a0,0);
  }
  if ((undefined2 *)param_1[0x1a0] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1a0] = 0;
  }
  *(undefined4 *)(param_1 + 0x19e) = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd14) = 0;
  param_1[0x1a4] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1a6) = 0;
  if ((*(int *)((longlong)param_1 + 0xd34) < 0) && (*(int *)((longlong)param_1 + 0xd34) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a5,0);
  }
  if ((undefined2 *)param_1[0x1a5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1a5] = 0;
  }
  *(undefined4 *)(param_1 + 0x1a3) = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  *(undefined4 *)(param_1 + 0x1a7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd3c) = 0;
  param_1[0x1a9] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1ab) = 0;
  if ((*(int *)((longlong)param_1 + 0xd5c) < 0) && (*(int *)((longlong)param_1 + 0xd5c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1aa,0);
  }
  if ((undefined2 *)param_1[0x1aa] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1aa] = 0;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd64) = 0;
  param_1[0x1ae] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if ((*(int *)((longlong)param_1 + 0xd84) < 0) && (*(int *)((longlong)param_1 + 0xd84) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1af,0);
  }
  if ((undefined2 *)param_1[0x1af] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1af] = 0;
  }
  *(undefined4 *)(param_1 + 0x1ad) = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(undefined4 *)(param_1 + 0x1b1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd8c) = 0;
  param_1[0x1b3] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1b5) = 0;
  if ((*(int *)((longlong)param_1 + 0xdac) < 0) && (*(int *)((longlong)param_1 + 0xdac) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1b4,0);
  }
  if ((undefined2 *)param_1[0x1b4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1b4] = 0;
  }
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1bd) = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0x3f800000;
  param_1[0x1c4] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe34) = 0;
  param_1[0x1c8] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1ca) = 0;
  if ((*(int *)((longlong)param_1 + 0xe54) < 0) && (*(int *)((longlong)param_1 + 0xe54) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1c9,0);
  }
  if ((undefined2 *)param_1[0x1c9] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1c9] = 0;
  }
  *(undefined4 *)(param_1 + 0x1c7) = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe64) = 0;
  param_1[0x1ce] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if ((*(int *)((longlong)param_1 + 0xe84) < 0) && (*(int *)((longlong)param_1 + 0xe84) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1cf,0);
  }
  if ((undefined2 *)param_1[0x1cf] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1cf] = 0;
  }
  *(undefined4 *)(param_1 + 0x1cd) = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  *(undefined4 *)(param_1 + 0x1d1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe8c) = 0;
  param_1[0x1d3] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 0;
  if ((*(int *)((longlong)param_1 + 0xeac) < 0) && (*(int *)((longlong)param_1 + 0xeac) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1d4,0);
  }
  if ((undefined2 *)param_1[0x1d4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1d4] = 0;
  }
  *(undefined4 *)(param_1 + 0x1d2) = 0;
  *(undefined1 *)(param_1 + 0x1d6) = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  *(undefined4 *)(param_1 + 0x1d9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0;
  param_1[0x1db] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x1dd) = 0;
  if ((*(int *)((longlong)param_1 + 0xeec) < 0) && (*(int *)((longlong)param_1 + 0xeec) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1dc,0);
  }
  if ((undefined2 *)param_1[0x1dc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1dc] = 0;
  }
  *(undefined4 *)(param_1 + 0x1da) = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xef4) = 0;
  FSoftObjectPath::Reset();
  *(undefined4 *)(param_1 + 0x1df) = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  *(undefined4 *)(param_1 + 0x1e3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf1c) = 0;
  FSoftObjectPath::Reset();
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  FUN_140a9f200(param_1 + 0x1e8);
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x217,0,0);
  *(undefined4 *)(param_1 + 0x21b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10dc) = 0;
  param_1[0x21d] = 0;
  *(undefined4 *)(param_1 + 0x21e) = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x45) = 0x3dcccccd;
  param_1[0x55] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x75) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x76) = 4;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x77) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x88) = 0x40800000;
  *(undefined4 *)(param_1 + 0x98) = 0x447a0000;
  FName::FName(&local_res8,L"*Color_Primary1",1);
  param_1[0xb9] = local_res8;
  FName::FName(&local_res8,L"*Color_Secondary1",1);
  param_1[0xba] = local_res8;
  FName::FName(&local_res8,L"*Color_Tertiary1",1);
  param_1[0xbb] = local_res8;
  *(undefined4 *)((longlong)param_1 + 0xc1c) = 0x44fa0000;
  *(undefined1 *)((longlong)param_1 + 0x434) = 1;
  *(undefined4 *)(param_1 + 0x87) = 0x44960000;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x32;
  return param_1;
}



// FUNCTION 140b7a3e0 FUN_140b7a3e0 body=89 status=ok
// SIG undefined FUN_140b7a3e0(void)

undefined8 * FUN_140b7a3e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__1442e6e78;
  param_1[5] = &PTR_LAB_1441ecb20;
  *(undefined4 *)(param_1 + 0x2f) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x30) = 0x40600000;
  return param_1;
}



// FUNCTION 140b7a440 FUN_140b7a440 body=33 status=ok
// SIG undefined FUN_140b7a440(void)

undefined8 * FUN_140b7a440(undefined8 *param_1)

{
  FUN_142d7a550();
  *param_1 = &PTR_FUN_1442e7270;
  return param_1;
}



// FUNCTION 140b7a470 FUN_140b7a470 body=229 status=ok
// SIG undefined FUN_140b7a470(void)

void FUN_140b7a470(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar7 = (longlong *)*param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar8 = plVar7 + 0xd;
    do {
      *(undefined4 *)(plVar8 + 1) = 0;
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar8 + -8);
      plVar4 = (longlong *)plVar8[-10];
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0xf;
      plVar8 = plVar8 + 0xf;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
    return;
  }
  return;
}



// FUNCTION 140b7a560 FUN_140b7a560 body=173 status=ok
// SIG undefined FUN_140b7a560(void)

void FUN_140b7a560(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      plVar4 = (longlong *)plVar7[7];
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
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar7);
  return;
}



// FUNCTION 140b7a610 ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=396 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_140b7a6d1;
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
LAB_140b7a6d1:
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
      FVariantData::Empty(*param_1 + ((longlong)iStack_1c * 5 + 1) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140b7a7a0 ~FPathFindingQuery body=156 status=ok
// SIG undefined ~FPathFindingQuery(void)

void FPathFindingQuery::~FPathFindingQuery(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
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
  plVar4 = *(longlong **)(param_1 + 0x28);
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



// FUNCTION 140b7a840 FUN_140b7a840 body=58 status=ok
// SIG undefined FUN_140b7a840(void)

void FUN_140b7a840(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_1409f5880(param_1 + 8);
  return;
}



// FUNCTION 140b7a880 FUN_140b7a880 body=917 status=ok
// SIG undefined FUN_140b7a880(void)

void FUN_140b7a880(longlong param_1)

{
  FUN_1409f57b0(param_1 + 0x1138);
  if (*(longlong *)(param_1 + 0x1128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10f8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x10f0) = 0;
  if (*(longlong *)(param_1 + 0x10e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x10a8);
  if (*(longlong *)(param_1 + 0x1098) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1088) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1078) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1068) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1058) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1048) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1038) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1028) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1010) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1000) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xfe8);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xfd0);
  if (*(longlong *)(param_1 + 0xfb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xee0) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0xeb8);
  if (*(longlong *)(param_1 + 0xea0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xda0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xcd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xca8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbe8) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x598);
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 600);
  FUN_140b7ac20(param_1);
  return;
}



// FUNCTION 140b7ac20 FUN_140b7ac20 body=189 status=ok
// SIG undefined FUN_140b7ac20(void)

void FUN_140b7ac20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x118);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140b7ace0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140b7ae3b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_140b7ae3b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_140b777c0(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 140b7aee0 FUN_140b7aee0 body=324 status=ok
// SIG undefined FUN_140b7aee0(void)

undefined4 * FUN_140b7aee0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  if (puVar1 != (undefined8 *)(param_2 + 8)) {
    iVar2 = param_2[10];
    pvVar3 = *(void **)(param_2 + 8);
    param_1[10] = iVar2;
    if ((iVar2 == 0) && (param_1[0xb] == 0)) {
      param_1[0xb] = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0xc);
  if (puVar1 != (undefined8 *)(param_2 + 0xc)) {
    iVar2 = param_2[0xe];
    pvVar3 = *(void **)(param_2 + 0xc);
    param_1[0xe] = iVar2;
    if ((iVar2 == 0) && (param_1[0xf] == 0)) {
      param_1[0xf] = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0x10,param_2 + 0x10)
  ;
  puVar1 = (undefined8 *)(param_1 + 0x14);
  if (puVar1 != (undefined8 *)(param_2 + 0x14)) {
    iVar2 = param_2[0x16];
    pvVar3 = *(void **)(param_2 + 0x14);
    param_1[0x16] = iVar2;
    if ((iVar2 == 0) && (param_1[0x17] == 0)) {
      param_1[0x17] = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  return param_1;
}



// FUNCTION 140b7b030 FUN_140b7b030 body=143 status=ok
// SIG undefined FUN_140b7b030(void)

undefined1 * FUN_140b7b030(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_2 + 0x18);
  *param_1 = *param_2;
  plVar2 = (longlong *)(param_1 + 0x18);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 140b7b0c0 FUN_140b7b0c0 body=306 status=ok
// SIG undefined FUN_140b7b0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140b7b0c0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  float local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x168);
  if (lVar1 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(float *)(lVar1 + 0x228);
  }
  pfVar2 = (float *)*param_1;
  fVar5 = (float)local_28 - *pfVar2;
  fVar8 = (float)((ulonglong)local_28 >> 0x20) - pfVar2[1];
  lVar1 = *(longlong *)(param_2 + 0x168);
  fVar3 = local_20 - pfVar2[2];
  if (lVar1 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(float *)(lVar1 + 0x228);
  }
  fVar7 = (float)((ulonglong)local_28 >> 0x20) - pfVar2[1];
  fVar6 = (float)local_28 - *pfVar2;
  fVar4 = local_20 - pfVar2[2];
  return CONCAT31((int3)((uint)local_20 >> 8),
                  fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3 <
                  fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4);
}



// FUNCTION 140b7b200 FUN_140b7b200 body=151 status=ok
// SIG undefined FUN_140b7b200(void)

void FUN_140b7b200(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  longlong *local_18;
  undefined1 local_10;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_30 = 0;
    local_18 = (longlong *)0x0;
    local_28 = 0;
    uStack_20 = 0;
    local_10 = 0;
    local_38 = param_3;
    FUN_140e53440(param_2,&local_38);
    plVar5 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
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



// FUNCTION 140b7b2a0 FUN_140b7b2a0 body=582 status=ok
// SIG undefined FUN_140b7b2a0(void)

void FUN_140b7b2a0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  float fVar12;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x848) != 0)) {
    fVar12 = *(float *)param_1[5];
    if (*(char *)param_1[4] != '\0') {
      iVar4 = rand();
      fVar12 = (float)iVar4 * 3.051851e-05 * fVar12;
    }
    plVar6 = (longlong *)*param_1;
    uVar7 = param_1[2];
    cVar1 = *(char *)param_1[3];
    cVar3 = FUN_140b839f0(plVar6);
    if (((cVar3 != '\0') && (lVar5 = (**(code **)(*plVar6 + 0x148))(plVar6), lVar5 != 0)) &&
       (plVar6 = (longlong *)FUN_140b7d660(plVar6,uVar7,param_2), plVar6 != (longlong *)0x0)) {
      uVar7 = FUN_14301f8f0();
      lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x208), lVar8 != 0)) {
        if ((cVar1 == '\0') || (fVar12 <= 0.0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
        }
        local_68 = 0;
        local_60 = 0;
        local_5c = 0;
        local_54 = 0;
        local_50 = 0;
        local_48 = 0;
        if (*(longlong *)(lVar8 + 0x160) != 0) {
          lVar9 = FUN_143025260();
          lVar10 = *(longlong *)(lVar8 + 0x160);
          for (lVar2 = lVar10; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar9) goto LAB_140b7b421;
          }
        }
        lVar10 = 0;
LAB_140b7b421:
        lVar5 = FUN_142ff1380(lVar5,lVar10,1,plVar6,*(undefined8 *)(lVar8 + 0x1d8),0,&local_50,
                              &local_5c,&local_68,uVar11,fVar12);
        FUN_140b8ce60(lVar5,param_2);
        if (lVar5 != 0) {
          plVar6 = (longlong *)param_1[1];
          iVar4 = (int)plVar6[1];
          *(int *)(plVar6 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar6 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar4);
          }
          *(longlong *)(*plVar6 + (longlong)iVar4 * 8) = lVar5;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b7b4f0 FUN_140b7b4f0 body=303 status=ok
// SIG undefined FUN_140b7b4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140b7b4f0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  float local_20;
  
  lVar1 = *(longlong *)(param_2 + 0x168);
  if (lVar1 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(float *)(lVar1 + 0x228);
  }
  pfVar2 = (float *)*param_1;
  fVar5 = (float)local_28 - *pfVar2;
  fVar8 = (float)((ulonglong)local_28 >> 0x20) - pfVar2[1];
  lVar1 = *(longlong *)(param_3 + 0x168);
  fVar3 = local_20 - pfVar2[2];
  if (lVar1 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(float *)(lVar1 + 0x228);
  }
  fVar7 = (float)((ulonglong)local_28 >> 0x20) - pfVar2[1];
  fVar6 = (float)local_28 - *pfVar2;
  fVar4 = local_20 - pfVar2[2];
  return CONCAT31((int3)((uint)local_20 >> 8),
                  fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3 <
                  fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4);
}



// FUNCTION 140b7b620 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCameraAnim::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::Free();
  }
  FUN_140ac7a60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x550);
  }
  return param_1;
}



// FUNCTION 140b7b670 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FOnlineStats::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_SetFloatStat_1442e7ef0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140b7b6e0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FIntegerLeaderboardWrite::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_SetFloatStat_1442e7ef0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 140b7b750 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
GSC::AI::FOnlineHumanCombatSatisfier::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140b7a880();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1150);
  }
  return param_1;
}



// FUNCTION 140b7b790 FUN_140b7b790 body=134 status=ok
// SIG undefined FUN_140b7b790(void)

void FUN_140b7b790(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
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
    if ((bVar1) && (lVar2 = FUN_140b785e0(lVar2), lVar2 != 0)) {
      FUN_140c32600(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140b7b820 FUN_140b7b820 body=13 status=ok
// SIG undefined FUN_140b7b820(void)

void FUN_140b7b820(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 140b7b830 FUN_140b7b830 body=50 status=ok
// SIG undefined FUN_140b7b830(void)

void FUN_140b7b830(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  if ((param_1 != 0) && (local_res18[0] = param_3, lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140c683f0(lVar1,param_2,local_res18);
  }
  return;
}



// FUNCTION 140b7b870 FUN_140b7b870 body=42 status=ok
// SIG undefined FUN_140b7b870(void)

void FUN_140b7b870(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  if ((param_1 != 0) && (local_res10[0] = param_2, lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140ccb310(lVar1,local_res10);
  }
  return;
}



// FUNCTION 140b7b8a0 FUN_140b7b8a0 body=787 status=ok
// SIG undefined FUN_140b7b8a0(void)

void FUN_140b7b8a0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined8 local_res10;
  int local_res18 [2];
  undefined8 local_res20;
  longlong *local_70;
  longlong *local_68;
  int local_60;
  
  if (param_2 != 0) {
    plVar7 = param_1 + 6;
    *(undefined1 *)(param_1 + 5) = 1;
    TSet<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Empty(plVar7,0);
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar4 == 0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = *(float *)(lVar4 + 0x790);
    }
    plVar11 = *(longlong **)(param_2 + 0x40);
    uVar1 = *(uint *)(param_2 + 0x3c);
    plVar5 = plVar11 + (longlong)*(int *)(param_2 + 0x48) * 3;
    if (plVar11 != plVar5) {
      local_res10 = 0;
      local_68 = plVar5;
      do {
        if (*plVar11 != 0) {
          local_70 = plVar11;
          FUN_140b77ba0(plVar7,&local_res10,&local_70,0);
          lVar4 = (longlong)(int)local_res10 * 0x60 + *plVar7;
          plVar8 = (longlong *)plVar11[1];
          plVar12 = plVar8 + (longlong)(int)plVar11[2] * 2;
          if (plVar8 != plVar12) {
            local_res20 = 0;
            do {
              if ((*plVar8 != 0) && (uVar2 = *(uint *)(plVar8 + 1), uVar1 < uVar2)) {
                local_70 = plVar8;
                FUN_140b77960(lVar4 + 8,local_res18,&local_70);
                lVar6 = *(longlong *)(lVar4 + 8);
                *(undefined1 *)(lVar6 + 0xc + (longlong)local_res18[0] * 0x18) = 1;
                *(float *)(lVar6 + 8 + (longlong)local_res18[0] * 0x18) =
                     (float)(uVar2 - uVar1) + fVar13;
              }
              plVar8 = plVar8 + 2;
              plVar5 = local_68;
            } while (plVar8 != plVar12);
          }
        }
        plVar11 = plVar11 + 3;
      } while (plVar11 != plVar5);
    }
    iVar10 = (int)param_1[0x11];
    lVar4 = param_1[0x10];
    local_68 = (longlong *)0x0;
    local_60 = iVar10;
    if (iVar10 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_68,iVar10,0);
      lVar4 = lVar4 - (longlong)local_68;
      plVar7 = local_68 + 1;
      do {
        plVar7[-1] = 0;
        *plVar7 = 0;
        lVar6 = *(longlong *)(lVar4 + -8 + (longlong)plVar7);
        plVar7[-1] = lVar6;
        if ((lVar6 != 0) ||
           (plVar5 = (longlong *)0x0, *(longlong *)(lVar4 + -8 + (longlong)plVar7) != 0)) {
          plVar5 = *(longlong **)(lVar4 + (longlong)plVar7);
        }
        *plVar7 = (longlong)plVar5;
        plVar7 = plVar7 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    plVar5 = local_68;
    plVar11 = local_68 + (longlong)local_60 * 2;
    for (plVar7 = local_68; plVar7 != plVar11; plVar7 = plVar7 + 2) {
      lVar4 = *plVar7;
      if ((lVar4 != 0) && (plVar7[1] != 0)) {
        lVar6 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar6 = AActor::GetLevel(lVar4);
          if ((lVar6 == 0) || (lVar6 = UObjectBaseUtility::GetOutermost(lVar6), lVar6 == 0)) {
            local_res10 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar6 + 0x18);
          }
          lVar6 = FUN_140b82320(param_1,uVar9);
          if ((lVar6 != 0) &&
             (lVar4 = FUN_140b803b0(lVar6,*(undefined8 *)(lVar4 + 0x18)), lVar4 != 0)) {
            plVar8 = (longlong *)0x0;
            if (*plVar7 != 0) {
              plVar8 = (longlong *)plVar7[1];
            }
            (**(code **)(*plVar8 + 0x18))(plVar8,lVar4);
          }
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
  }
  return;
}



// FUNCTION 140b7bbc0 FUN_140b7bbc0 body=1068 status=ok
// SIG undefined FUN_140b7bbc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_140b7bbc0(longlong *param_1,float param_2,float param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong **pplVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_128;
  uint local_120;
  uint local_11c;
  float local_118;
  float local_114;
  float local_110;
  longlong *local_108;
  uint local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  float local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  
  puVar11 = (undefined1 *)register0x00000020;
  if (param_1 != (longlong *)0x0) {
    lVar7 = (**(code **)(*param_1 + 0x148))();
    puVar11 = (undefined1 *)0x0;
    if (lVar7 != 0) {
      plVar16 = (longlong *)0x0;
      iVar15 = 0;
      local_128 = (longlong *)0x0;
      local_11c = 0;
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x148))(param_1);
      plVar14 = plVar16;
      iVar12 = iVar15;
      if ((plVar8 != (longlong *)0x0) &&
         (lVar7 = (**(code **)(*plVar8 + 0x148))(plVar8), plVar14 = (longlong *)0x0, iVar12 = 0,
         lVar7 != 0)) {
        UWorld::GetPlayerControllerIterator(lVar7,&local_108);
        plVar8 = plVar16;
        plVar13 = plVar16;
        plVar14 = plVar16;
        while( true ) {
          iVar12 = (int)plVar8;
          if (((int)local_100 < 0) || ((int)local_108[1] <= (int)local_100)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if (!bVar17) break;
          lVar7 = FWeakObjectPtr::Get();
          if (lVar7 != 0) {
            lVar9 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            if ((bVar17) && (lVar7 = *(longlong *)(lVar7 + 0x488), lVar7 != 0)) {
              local_120 = iVar12 + 1;
              if ((int)plVar13 < (int)local_120) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,plVar8)
                ;
                plVar13 = (longlong *)(ulonglong)local_11c;
                plVar14 = local_128;
              }
              plVar8 = (longlong *)(ulonglong)local_120;
              plVar14[iVar12] = lVar7;
            }
          }
          local_100 = local_100 + 1;
        }
      }
      for (plVar8 = plVar14; plVar8 != plVar14 + iVar12; plVar8 = plVar8 + 1) {
        plVar13 = (longlong *)*plVar8;
        if (plVar13 == (longlong *)0x0) {
          plVar16 = (longlong *)(ulonglong)((int)plVar16 + 1);
        }
        else {
          (**(code **)(*plVar13 + 0x648))(plVar13,&local_118,&local_b0);
          lVar7 = plVar13[0x2d];
          if (lVar7 == 0) {
            local_108 = _DAT_1468b5d90;
            pplVar10 = &local_108;
            local_100 = DAT_1468b5d98;
          }
          else {
            pplVar10 = (longlong **)&local_f8;
            local_f8 = *(undefined4 *)(lVar7 + 0x220);
            local_f0 = *(undefined4 *)(lVar7 + 0x228);
            uStack_f4 = *(undefined4 *)(lVar7 + 0x224);
          }
          plVar13 = *pplVar10;
          local_e4 = *(float *)(pplVar10 + 1);
          lVar7 = param_1[0x2d];
          local_ec = plVar13;
          plVar13 = local_ec;
          local_ec._4_4_ = (float)((ulonglong)plVar13 >> 0x20);
          local_118 = SUB84(plVar13,0);
          local_114 = local_ec._4_4_;
          local_110 = local_e4;
          if (lVar7 == 0) {
            local_128 = _DAT_1468b5d90;
            pplVar10 = &local_128;
            local_120 = DAT_1468b5d98;
          }
          else {
            pplVar10 = (longlong **)&local_e0;
            local_e0 = *(undefined4 *)(lVar7 + 0x220);
            local_d8 = *(undefined4 *)(lVar7 + 0x228);
            uStack_dc = *(undefined4 *)(lVar7 + 0x224);
          }
          plVar1 = *pplVar10;
          local_c8 = *(float *)(pplVar10 + 1);
          local_c0 = SUB84(plVar1,0) - SUB84(plVar13,0);
          local_d0._4_4_ = (float)((ulonglong)plVar1 >> 0x20);
          fVar6 = local_d0._4_4_;
          local_bc = local_d0._4_4_ - local_ec._4_4_;
          local_b8 = local_c8 - local_e4;
          local_ec = plVar13;
          local_d0 = plVar1;
          FVector::Rotation(&local_c0,&local_a0);
          fVar23 = SUB84(plVar1,0) - local_118;
          fVar2 = (float)DAT_1468699d0;
          fVar3 = DAT_1468699d0._4_4_;
          fVar4 = DAT_1468699d0._8_4_;
          fVar5 = DAT_1468699d0._12_4_;
          auVar18._4_4_ = local_ac - local_9c;
          auVar18._0_4_ = local_b0 - local_a0;
          auVar18._8_4_ = local_a8 - local_98;
          auVar18._12_4_ = 0;
          auVar18 = divps(auVar18,_DAT_1468699d0);
          fVar19 = (local_b0 - local_a0) - (float)(int)auVar18._0_4_ * fVar2;
          fVar20 = (local_ac - local_9c) - (float)(int)auVar18._4_4_ * fVar3;
          fVar21 = (local_a8 - local_98) - (float)(int)auVar18._8_4_ * fVar4;
          fVar22 = 0.0 - (float)(int)auVar18._12_4_ * fVar5;
          local_88 = (float)(((uint)(fVar19 + fVar2) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                            (uint)(fVar19 + fVar2));
          fStack_84 = (float)(((uint)(fVar20 + fVar3) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                             (uint)(fVar20 + fVar3));
          fVar19 = (float)(((uint)(fVar21 + fVar4) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                          (uint)(fVar21 + fVar4));
          fVar20 = (float)(((uint)(fVar22 + fVar5) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                          (uint)(fVar22 + fVar5));
          local_88 = (float)(((uint)(local_88 - fVar2) ^ (uint)local_88) &
                             -(uint)(_DAT_1468699c0 < local_88) ^ (uint)local_88);
          fStack_84 = (float)(((uint)(fStack_84 - fVar3) ^ (uint)fStack_84) &
                              -(uint)(fRam00000001468699c4 < fStack_84) ^ (uint)fStack_84);
          uStack_80 = ((uint)(fVar19 - fVar4) ^ (uint)fVar19) &
                      -(uint)(fRam00000001468699c8 < fVar19) ^ (uint)fVar19;
          uStack_7c = ((uint)(fVar20 - fVar5) ^ (uint)fVar20) &
                      -(uint)(fRam00000001468699cc < fVar20) ^ (uint)fVar20;
          if (((param_3 < ABS(local_88)) || (param_3 < ABS(fStack_84))) ||
             (param_2 < SQRT((fVar6 - local_114) * (fVar6 - local_114) + fVar23 * fVar23))) {
            bVar17 = false;
            goto LAB_140b7bf72;
          }
        }
        iVar15 = (int)plVar16;
      }
      bVar17 = iVar15 != iVar12;
LAB_140b7bf72:
      if (plVar14 != (longlong *)0x0) {
        FMemory::Free(plVar14);
      }
      puVar11 = (undefined1 *)(ulonglong)bVar17;
    }
  }
  return puVar11;
}



// FUNCTION 140b7bff0 FUN_140b7bff0 body=8 status=ok
// SIG undefined FUN_140b7bff0(void)

undefined1 FUN_140b7bff0(void)

{
  return DAT_1468699b6;
}



// FUNCTION 140b7c000 FUN_140b7c000 body=57 status=ok
// SIG undefined FUN_140b7c000(void)

ulonglong FUN_140b7c000(longlong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  
  if (0 < *(int *)(param_1 + 0xec0)) {
    in_RAX = *(ulonglong *)(param_1 + 0xeb8);
    uVar1 = in_RAX + (longlong)*(int *)(param_1 + 0xec0) * 0x18;
    for (; in_RAX != uVar1; in_RAX = in_RAX + 0x18) {
      if (0 < *(int *)(in_RAX + 0x10)) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b7c040 FUN_140b7c040 body=654 status=ok
// SIG undefined FUN_140b7c040(void)

void FUN_140b7c040(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_48;
  undefined8 local_40;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar5 = 0;
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x168);
  }
  else {
    uVar3 = FUN_14222b250(param_2,param_3,0);
  }
  cVar2 = '\0';
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar8 != 0) {
    uVar4 = FUN_142e64ca0();
    lVar5 = AGameStateBase::OnRep_GameModeClass(param_2,uVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_142e64ca0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_142d359e0(lVar5,*(undefined8 *)(lVar8 + 0x230));
        goto LAB_140b7c13a;
      }
    }
    lVar5 = 0;
  }
LAB_140b7c13a:
  FUN_142382f60(param_1,uVar3,&DAT_146af29ec,param_3);
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    FUN_14234b150(param_1);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_14238b380(param_1,1,&local_48);
    plVar9 = local_48 + (int)local_40;
    if (local_48 != plVar9) {
      plVar10 = local_48;
      do {
        lVar6 = *plVar10;
        if (lVar6 != 0) {
          if ((*(byte *)(lVar6 + 0xb8) & 1) == 0) {
            FUN_14234b150(lVar6);
          }
          if ((lVar5 != 0) && (cVar2 != '\0')) {
            uVar3 = *(undefined8 *)(lVar8 + 0x230);
            lVar7 = FUN_1429f11d0();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) {
              lVar6 = 0;
            }
            FUN_142d33ce0(lVar5,lVar6,uVar3);
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
    if ((lVar5 != 0) && (cVar2 != '\0')) {
      uVar3 = *(undefined8 *)(lVar8 + 0x230);
      lVar8 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        param_1 = 0;
      }
      FUN_142d33ce0(lVar5,param_1,uVar3);
      uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9,1);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140b7c2d0 FUN_140b7c2d0 body=169 status=ok
// SIG undefined FUN_140b7c2d0(void)

void FUN_140b7c2d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    lVar2 = FUN_1429d7ab0();
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
      param_2 = *(longlong *)(param_1 + 0x488);
      if (param_2 != 0) {
        lVar2 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_140b7c364;
      }
      param_2 = 0;
    }
  }
LAB_140b7c364:
  FUN_140a2d370(param_2,param_1);
  return;
}



// FUNCTION 140b7c380 FUN_140b7c380 body=191 status=ok
// SIG undefined FUN_140b7c380(void)

void FUN_140b7c380(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  code *local_18;
  ulonglong uStack_10;
  
  FUN_142330a70();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_140b85040;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ULowGravHoveringComponent::OnHit",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    FUN_140b79550(lVar1 + 0x280,param_1,&local_18,local_res8);
  }
  FUN_14288e3d0(param_1 + 0x30,0);
  return;
}



// FUNCTION 140b7c440 FUN_140b7c440 body=131 status=ok
// SIG undefined FUN_140b7c440(void)

void FUN_140b7c440(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_142302da0(local_18,&local_18,&local_28);
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  if (lVar1 != 0) {
    local_18 = *param_3;
    local_10 = *(undefined4 *)(param_3 + 1);
    FUN_142920470(local_18,&local_18,1);
  }
  return;
}



// FUNCTION 140b7c4d0 FUN_140b7c4d0 body=803 status=ok
// SIG undefined FUN_140b7c4d0(void)

ulonglong FUN_140b7c4d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5,float param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong *in_RAX;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  longlong local_188;
  longlong *local_180;
  int local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150 [4];
  float local_14c;
  longlong local_130;
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    in_RAX = (longlong *)
             TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
             ResizeTo(param_1,0);
  }
  if (param_2 == (longlong *)0x0) goto LAB_140b7c7c4;
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
  if (plVar4 != (longlong *)0x0) {
    param_2 = plVar4;
  }
  lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
  if (((lVar5 == 0) || (lVar5 = (**(code **)(*param_2 + 0x148))(param_2), lVar5 == 0)) ||
     (lVar5 = *(longlong *)(lVar5 + 0x138), lVar5 == 0)) {
LAB_140b7c599:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140b7c599;
  }
  uVar7 = (**(code **)(*param_2 + 0x148))(param_2);
  plVar4 = (longlong *)FUN_142f9cfb0(uVar7,0);
  in_RAX = plVar4;
  if ((lVar5 != 0) && (plVar4 != (longlong *)0x0)) {
    in_RAX = (longlong *)(**(code **)(*param_2 + 0x668))(param_2);
    plVar8 = param_2;
    if (in_RAX != (longlong *)0x0) {
      plVar8 = in_RAX;
    }
    if (plVar8 != (longlong *)0x0) {
      uVar7 = UNavAgentInterface::GetPrivateStaticClass();
      plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar8,uVar7);
      in_RAX = (longlong *)0x0;
      if (plVar8 != (longlong *)0x0) {
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
        FNavAgentProperties::FNavAgentProperties(local_150,uVar7);
        if (0.0 < param_6) {
          local_14c = param_6;
        }
        FUN_142f9dda0(plVar4,local_198,param_3,param_5,param_2);
        FUN_142f9dda0(plVar4,local_1a8,param_4,param_5,param_2);
        puVar12 = local_1a8;
        local_170 = 0;
        uStack_168 = 0;
        local_160 = 0;
        uStack_158 = 0;
        FUN_142b80bd0(local_118,param_2,plVar4,local_198,puVar12,&local_160,&local_170);
        uVar7 = FUN_142b80820(local_98,local_118);
        FUN_142b8c9f0(lVar5,&local_188,local_150,uVar7,(ulonglong)puVar12 & 0xffffffff00000000);
        if ((local_178 == 3) && (local_188 != 0)) {
          puVar9 = *(undefined8 **)(local_188 + 0x28);
          puVar10 = puVar9 + (longlong)*(int *)(local_188 + 0x30) * 4;
          for (; puVar9 != puVar10; puVar9 = puVar9 + 4) {
            iVar3 = TArray<FVector,FDefaultAllocator>::Find(param_1,puVar9);
            if (iVar3 == -1) {
              iVar3 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar3 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
              }
              lVar5 = *param_1;
              *(undefined8 *)(lVar5 + (longlong)iVar3 * 0xc) = *puVar9;
              *(undefined4 *)(lVar5 + 8 + (longlong)iVar3 * 0xc) = *(undefined4 *)(puVar9 + 1);
            }
          }
          uVar11 = 1;
        }
        else {
          uVar11 = 0;
        }
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_180 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_180)(local_180);
            LOCK();
            piVar1 = (int *)((longlong)local_180 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_180 + 8))(local_180,1);
            }
          }
        }
        FPathFindingQuery::~FPathFindingQuery(local_118);
        if (local_130 == 0) {
          return uVar11;
        }
        FMemory::Free();
        return uVar11;
      }
    }
  }
LAB_140b7c7c4:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b7c800 FUN_140b7c800 body=220 status=ok
// SIG undefined FUN_140b7c800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140b7c800(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 local_2c;
  undefined4 local_24;
  
  if (param_2 == (longlong *)0x0) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
    if (plVar2 != (longlong *)0x0) {
      param_2 = plVar2;
    }
    lVar1 = param_2[0x2d];
    local_2c = _DAT_1468b5d90;
    local_24 = DAT_1468b5d98;
    if (lVar1 != 0) {
      local_2c = *(undefined8 *)(lVar1 + 0x220);
      local_24 = *(undefined4 *)(lVar1 + 0x228);
    }
    uVar3 = FUN_140b7c4d0(param_1,param_2,&local_2c,param_3,param_4,param_5,local_2c,local_24);
  }
  return uVar3;
}



// FUNCTION 140b7c8e0 FUN_140b7c8e0 body=531 status=ok
// SIG undefined FUN_140b7c8e0(void)

void FUN_140b7c8e0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18;
  uint uStackX_1c;
  undefined8 local_res20;
  longlong local_50;
  longlong *local_48;
  longlong local_40 [2];
  
  plVar7 = *(longlong **)(param_1 + 0x80);
  plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x88) * 2;
  if (plVar7 != plVar9) {
    lVar10 = 0;
    do {
      lVar8 = *plVar7;
      if (lVar8 == 0) {
LAB_140b7c95e:
        lVar8 = lVar10;
      }
      else {
        lVar3 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140b7c95e;
      }
      if ((*plVar7 == 0) || (plVar4 = (longlong *)plVar7[1], plVar4 == (longlong *)0x0)) {
LAB_140b7ca83:
        lVar3 = lVar10;
        if (((lVar8 != 0) && (lVar6 = AActor::GetLevel(lVar8), lVar6 != 0)) &&
           (lVar6 = UObjectBaseUtility::GetOutermost(lVar6), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar6 + 0x18);
        }
        lVar3 = FUN_140b82320(param_1,lVar3);
        if (lVar3 != 0) {
          local_48 = *(longlong **)(lVar8 + 0x18);
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::Remove(lVar3);
        }
      }
      else {
        local_res18 = 0;
        uStackX_1c = uStackX_1c & 0xffffff00;
        cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_res18);
        if (cVar2 == '\0') goto LAB_140b7ca83;
        if (lVar8 != 0) {
          lVar3 = AActor::GetLevel(lVar8);
          if ((lVar3 == 0) || (lVar3 = UObjectBaseUtility::GetOutermost(lVar3), lVar3 == 0)) {
            local_res20 = 0;
            local_50 = lVar10;
          }
          else {
            local_50 = *(longlong *)(lVar3 + 0x18);
          }
          plVar4 = (longlong *)FUN_140b82320(param_1);
          if (plVar4 == (longlong *)0x0) {
            local_48 = &local_50;
            FUN_140b77ba0(param_1 + 0x30,local_res8,&local_48,0);
            plVar4 = (longlong *)
                     (*(longlong *)(param_1 + 0x30) + (longlong)local_res8[0] * 0x60 + 8);
          }
          local_40[0] = *(longlong *)(lVar8 + 0x18);
          puVar5 = (undefined8 *)FUN_140b803b0(plVar4);
          if (puVar5 == (undefined8 *)0x0) {
            local_48 = local_40;
            FUN_140b77960(plVar4,local_res10,&local_48);
            puVar5 = (undefined8 *)(*plVar4 + ((longlong)local_res10[0] * 3 + 1) * 8);
          }
          *puVar5 = CONCAT44(uStackX_1c,local_res18);
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar9);
  }
  return;
}



// FUNCTION 140b7cb10 FUN_140b7cb10 body=60 status=ok
// SIG undefined FUN_140b7cb10(void)

void FUN_140b7cb10(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x148))();
  }
  lVar2 = FUN_140b5b830(uVar1);
  if (lVar2 != 0) {
    FUN_140b55600(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 140b7cb50 FUN_140b7cb50 body=90 status=ok
// SIG undefined FUN_140b7cb50(void)

void FUN_140b7cb50(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_1 + 0x128) == '\x03')) {
      FUN_14145d770(param_1);
    }
  }
  return;
}



// FUNCTION 140b7cbb0 FUN_140b7cbb0 body=546 status=ok
// SIG undefined FUN_140b7cbb0(void)

void FUN_140b7cbb0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  longlong *local_58;
  int local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  FUN_140b82810(param_1,&local_48);
  plVar3 = plStack_40;
  if (local_48 == 0) goto LAB_140b7cd97;
  FUN_140b82b80(param_1,&local_38);
  plVar6 = local_38;
  plVar3 = plStack_40;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x360))(local_38,param_1 + 0x1a0);
    local_58 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_50 = 3;
    local_58 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1442e7fd8;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_140b84540;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1442e8020;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x388))(plVar6,local_res10,&local_58);
    *(undefined8 *)(param_1 + 0x1a8) = *puVar5;
    if (local_50 == 0) {
LAB_140b7ccd3:
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
    }
    else if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x28))(local_58,0);
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
      }
      local_50 = 0;
      goto LAB_140b7ccd3;
    }
    plVar3 = plStack_40;
    local_28 = local_48;
    plStack_20 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      plVar6 = local_38;
    }
    (**(code **)(*plVar6 + 0x380))(plVar6,&local_28);
    plVar6 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = plStack_40;
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar3 = plStack_40;
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
          plVar3 = plStack_40;
        }
      }
    }
  }
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar3 = plStack_40;
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar3 = plStack_40;
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
        plVar3 = plStack_40;
      }
    }
  }
LAB_140b7cd97:
  plVar6 = plStack_40;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar3 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140b7cde0 ComputeViewProjectionMatrix body=691 status=ok
// SIG undefined ComputeViewProjectionMatrix(void)

float * FSceneViewProjectionData::ComputeViewProjectionMatrix(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  
  fVar37 = -param_1[1];
  fVar29 = param_1[4];
  fVar30 = param_1[5];
  fVar31 = param_1[6];
  fVar32 = param_1[7];
  fVar38 = -param_1[2];
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar5 = param_1[0xc];
  fVar6 = param_1[0xd];
  fVar7 = param_1[0xe];
  fVar8 = param_1[0xf];
  fVar9 = param_1[0x10];
  fVar10 = param_1[0x11];
  fVar11 = param_1[0x12];
  fVar12 = param_1[0x13];
  fVar43 = -*param_1;
  fVar44 = fVar29 * 1.0 + fVar1 * 0.0 + fVar5 * 0.0 + fVar9 * 0.0;
  fVar45 = fVar30 * 1.0 + fVar2 * 0.0 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar46 = fVar31 * 1.0 + fVar3 * 0.0 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar47 = fVar32 * 1.0 + fVar4 * 0.0 + fVar8 * 0.0 + fVar12 * 0.0;
  fVar39 = fVar29 * 0.0 + fVar1 * 1.0 + fVar5 * 0.0 + fVar9 * 0.0;
  fVar40 = fVar30 * 0.0 + fVar2 * 1.0 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar41 = fVar31 * 0.0 + fVar3 * 1.0 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar42 = fVar32 * 0.0 + fVar4 * 1.0 + fVar8 * 0.0 + fVar12 * 0.0;
  fVar33 = fVar29 * 0.0 + fVar1 * 0.0 + fVar5 * 1.0 + fVar9 * 0.0;
  fVar34 = fVar30 * 0.0 + fVar2 * 0.0 + fVar6 * 1.0 + fVar10 * 0.0;
  fVar35 = fVar31 * 0.0 + fVar3 * 0.0 + fVar7 * 1.0 + fVar11 * 0.0;
  fVar36 = fVar32 * 0.0 + fVar4 * 0.0 + fVar8 * 1.0 + fVar12 * 0.0;
  fVar13 = param_1[0x18];
  fVar14 = param_1[0x19];
  fVar15 = param_1[0x1a];
  fVar16 = param_1[0x1b];
  fVar17 = param_1[0x1c];
  fVar18 = param_1[0x1d];
  fVar19 = param_1[0x1e];
  fVar20 = param_1[0x1f];
  fVar21 = param_1[0x20];
  fVar22 = param_1[0x21];
  fVar23 = param_1[0x22];
  fVar24 = param_1[0x23];
  fVar25 = param_1[0x14];
  fVar26 = param_1[0x15];
  fVar27 = param_1[0x16];
  fVar28 = param_1[0x17];
  fVar29 = fVar43 * fVar29 + fVar37 * fVar1 + fVar38 * fVar5 + fVar9 * 1.0;
  fVar30 = fVar43 * fVar30 + fVar37 * fVar2 + fVar38 * fVar6 + fVar10 * 1.0;
  fVar31 = fVar43 * fVar31 + fVar37 * fVar3 + fVar38 * fVar7 + fVar11 * 1.0;
  fVar32 = fVar43 * fVar32 + fVar37 * fVar4 + fVar38 * fVar8 + fVar12 * 1.0;
  param_2[4] = fVar39 * fVar25 + fVar40 * fVar13 + fVar41 * fVar17 + fVar42 * fVar21;
  param_2[5] = fVar39 * fVar26 + fVar40 * fVar14 + fVar41 * fVar18 + fVar42 * fVar22;
  param_2[6] = fVar39 * fVar27 + fVar40 * fVar15 + fVar41 * fVar19 + fVar42 * fVar23;
  param_2[7] = fVar39 * fVar28 + fVar40 * fVar16 + fVar41 * fVar20 + fVar42 * fVar24;
  param_2[8] = fVar33 * fVar25 + fVar34 * fVar13 + fVar35 * fVar17 + fVar36 * fVar21;
  param_2[9] = fVar33 * fVar26 + fVar34 * fVar14 + fVar35 * fVar18 + fVar36 * fVar22;
  param_2[10] = fVar33 * fVar27 + fVar34 * fVar15 + fVar35 * fVar19 + fVar36 * fVar23;
  param_2[0xb] = fVar33 * fVar28 + fVar34 * fVar16 + fVar35 * fVar20 + fVar36 * fVar24;
  param_2[0xc] = fVar29 * fVar25 + fVar30 * fVar13 + fVar31 * fVar17 + fVar32 * fVar21;
  param_2[0xd] = fVar29 * fVar26 + fVar30 * fVar14 + fVar31 * fVar18 + fVar32 * fVar22;
  param_2[0xe] = fVar29 * fVar27 + fVar30 * fVar15 + fVar31 * fVar19 + fVar32 * fVar23;
  param_2[0xf] = fVar29 * fVar28 + fVar30 * fVar16 + fVar31 * fVar20 + fVar32 * fVar24;
  *param_2 = fVar44 * fVar25 + fVar45 * fVar13 + fVar46 * fVar17 + fVar47 * fVar21;
  param_2[1] = fVar44 * fVar26 + fVar45 * fVar14 + fVar46 * fVar18 + fVar47 * fVar22;
  param_2[2] = fVar44 * fVar27 + fVar45 * fVar15 + fVar46 * fVar19 + fVar47 * fVar23;
  param_2[3] = fVar44 * fVar28 + fVar45 * fVar16 + fVar46 * fVar20 + fVar47 * fVar24;
  return param_2;
}



// FUNCTION 140b7d0a0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140b7d150 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140b7d200 FUN_140b7d200 body=70 status=ok
// SIG undefined FUN_140b7d200(void)

void FUN_140b7d200(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1442e7fc0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    return;
  }
  return;
}



// FUNCTION 140b7d250 FUN_140b7d250 body=66 status=ok
// SIG undefined FUN_140b7d250(void)

void FUN_140b7d250(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1442e8698;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_1442e86e0;
  }
  return;
}



// FUNCTION 140b7d2a0 FUN_140b7d2a0 body=78 status=ok
// SIG undefined FUN_140b7d2a0(void)

void FUN_140b7d2a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e8188;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e81d0;
  }
  return;
}



// FUNCTION 140b7d2f0 FUN_140b7d2f0 body=78 status=ok
// SIG undefined FUN_140b7d2f0(void)

void FUN_140b7d2f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e8218;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e8260;
  }
  return;
}



// FUNCTION 140b7d340 FUN_140b7d340 body=78 status=ok
// SIG undefined FUN_140b7d340(void)

void FUN_140b7d340(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e82a8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e82f0;
  }
  return;
}



// FUNCTION 140b7d390 FUN_140b7d390 body=78 status=ok
// SIG undefined FUN_140b7d390(void)

void FUN_140b7d390(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e8068;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e80b0;
  }
  return;
}



// FUNCTION 140b7d3e0 FUN_140b7d3e0 body=78 status=ok
// SIG undefined FUN_140b7d3e0(void)

void FUN_140b7d3e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e84e8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e8530;
  }
  return;
}



// FUNCTION 140b7d430 FUN_140b7d430 body=78 status=ok
// SIG undefined FUN_140b7d430(void)

void FUN_140b7d430(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e7fd8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e8020;
  }
  return;
}



// FUNCTION 140b7d480 FUN_140b7d480 body=78 status=ok
// SIG undefined FUN_140b7d480(void)

void FUN_140b7d480(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e83c8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e8410;
  }
  return;
}



// FUNCTION 140b7d4d0 FUN_140b7d4d0 body=78 status=ok
// SIG undefined FUN_140b7d4d0(void)

void FUN_140b7d4d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e8458;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e84a0;
  }
  return;
}



// FUNCTION 140b7d520 FUN_140b7d520 body=78 status=ok
// SIG undefined FUN_140b7d520(void)

void FUN_140b7d520(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e8338;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e8380;
  }
  return;
}



// FUNCTION 140b7d570 FUN_140b7d570 body=78 status=ok
// SIG undefined FUN_140b7d570(void)

void FUN_140b7d570(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e80f8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e8140;
  }
  return;
}



// FUNCTION 140b7d5c0 FUN_140b7d5c0 body=78 status=ok
// SIG undefined FUN_140b7d5c0(void)

void FUN_140b7d5c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e8608;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e8650;
  }
  return;
}



// FUNCTION 140b7d610 FUN_140b7d610 body=78 status=ok
// SIG undefined FUN_140b7d610(void)

void FUN_140b7d610(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442e8578;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1442e85c0;
  }
  return;
}



// FUNCTION 140b7d660 FUN_140b7d660 body=659 status=ok
// SIG undefined FUN_140b7d660(void)

undefined8 FUN_140b7d660(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  int local_a8 [8];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  
  cVar1 = FUN_140b839f0();
  if (((cVar1 != '\0') && (param_3 != 0)) &&
     (plVar6 = (longlong *)FUN_140cffa10(param_3), plVar6 != (longlong *)0x0)) {
    FUN_140a4f390(local_a8,param_2);
    lVar7 = FUN_140b825a0(param_1);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x6c1) == '\0')) {
      lVar7 = FUN_140b825a0(param_1);
      if (lVar7 == 0) {
        local_a8[0] = 1;
      }
      else {
        iVar10 = *param_2;
        iVar2 = FUN_140cb6860(lVar7);
        iVar3 = (**(code **)(*plVar6 + 0x408))(plVar6);
        plVar6 = *(longlong **)(param_2 + 8);
        iVar3 = iVar3 + (iVar10 - iVar2);
        uVar9 = 0;
        iVar10 = 1;
        iVar2 = 0x48;
        uVar11 = (longlong)param_2[10] & 0x1fffffffffffffff;
        if (plVar6 + param_2[10] < plVar6) {
          uVar11 = uVar9;
        }
        if (uVar11 != 0) {
          do {
            lVar7 = *plVar6;
            iVar5 = iVar2;
            if (lVar7 != 0) {
              fVar12 = (float)FUN_142c98860(lVar7 + 0x70,param_1);
              fVar13 = (float)FUN_142c98860(lVar7 + 0xa8,param_1);
              iVar5 = (int)fVar12;
              if ((int)fVar12 <= iVar10) {
                iVar5 = iVar10;
              }
              iVar10 = iVar5;
              iVar5 = (int)fVar13;
              if (iVar2 <= (int)fVar13) {
                iVar5 = iVar2;
              }
            }
            iVar2 = iVar5;
            plVar6 = plVar6 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar11);
        }
        iVar5 = iVar2;
        if (*(longlong *)(param_2 + 6) != 0) {
          iVar4 = FUN_142ffcb70(*(longlong *)(param_2 + 6),param_1);
          iVar5 = FUN_142ffca90(*(undefined8 *)(param_2 + 6),param_1);
          if (iVar4 <= iVar10) {
            iVar4 = iVar10;
          }
          iVar10 = iVar4;
          if (iVar2 <= iVar5) {
            iVar5 = iVar2;
          }
        }
        local_a8[0] = iVar10;
        if ((iVar10 <= iVar3) && (local_a8[0] = iVar5, iVar3 < iVar5)) {
          local_a8[0] = iVar3;
        }
      }
    }
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar7 != 0) && (cVar1 = FUN_143003610(local_a8), cVar1 != '\0')) {
      uVar8 = FUN_143019ed0(lVar7,local_a8,1,0);
      FUN_140b8ce10(uVar8,param_3);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      return uVar8;
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 140b7d900 FUN_140b7d900 body=439 status=ok
// SIG undefined FUN_140b7d900(void)

undefined8
FUN_140b7d900(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,float param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  cVar2 = FUN_140b839f0();
  if (((cVar2 != '\0') && (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) &&
     (plVar4 = (longlong *)FUN_140b7d660(param_1,param_2,param_3), plVar4 != (longlong *)0x0)) {
    uVar5 = FUN_14301f8f0();
    lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x208), lVar6 != 0)) {
      if ((param_4 == '\0') || (param_5 <= 0.0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      local_58 = 0;
      local_50 = 0;
      local_4c = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      if (*(longlong *)(lVar6 + 0x160) != 0) {
        lVar7 = FUN_143025260();
        lVar8 = *(longlong *)(lVar6 + 0x160);
        for (lVar1 = lVar8; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar7) goto LAB_140b7da28;
        }
      }
      lVar8 = 0;
LAB_140b7da28:
      uVar5 = FUN_142ff1380(lVar3,lVar8,1,plVar4,*(undefined8 *)(lVar6 + 0x1d8),0,&local_40,
                            &local_4c,&local_58,uVar9,param_5);
      FUN_140b8ce60(uVar5,param_3);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 140b7dac0 FUN_140b7dac0 body=244 status=ok
// SIG undefined FUN_140b7dac0(void)

longlong FUN_140b7dac0(longlong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if ((param_1 == 0) ||
     ((lVar2 = FWeakObjectPtr::Get(param_2 + 4), *param_2 != '\0' && (lVar2 == 0)))) {
    lVar3 = 0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
    cVar1 = FUN_143001780(local_78,param_2 + 0x10);
    if ((cVar1 == '\0') || (cVar1 = FUN_143003610(local_78), cVar1 == '\0')) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_143019ed0(param_1,local_78,1,param_2[1]);
      if ((lVar3 != 0) && (*param_2 != '\0')) {
        FUN_140b8ce10(lVar3,lVar2);
      }
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return lVar3;
}



// FUNCTION 140b7dbc0 FUN_140b7dbc0 body=708 status=ok
// SIG undefined FUN_140b7dbc0(void)

longlong FUN_140b7dbc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = FWeakObjectPtr::Get(param_2 + 0xc);
  if ((*(char *)(param_2 + 8) == '\0') || (lVar4 != 0)) {
    _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
    cVar3 = FUN_143001780(local_88,param_2 + 0x18);
    if ((cVar3 == '\0') || (cVar3 = FUN_143003610(local_88), cVar3 == '\0')) {
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      goto LAB_140b7dc63;
    }
    plVar7 = (longlong *)FUN_143019ed0(param_1,local_88,1,*(undefined1 *)(param_2 + 9));
    if ((plVar7 != (longlong *)0x0) && (*(char *)(param_2 + 8) != '\0')) {
      FUN_140b8ce10(plVar7,lVar4);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_140b7dc65;
    uVar8 = FUN_14301f8f0();
    lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x208);
      goto LAB_140b7dc69;
    }
  }
  else {
LAB_140b7dc63:
    plVar7 = (longlong *)0x0;
LAB_140b7dc65:
    lVar4 = 0;
  }
  lVar6 = 0;
LAB_140b7dc69:
  if (((plVar7 == (longlong *)0x0) || (lVar4 == 0)) || (lVar6 == 0)) {
    return 0;
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (*(longlong *)(lVar6 + 0x160) != 0) {
    lVar5 = FUN_143025260();
    lVar4 = *(longlong *)(lVar6 + 0x160);
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar5) goto LAB_140b7dcf0;
    }
  }
  lVar4 = 0;
LAB_140b7dcf0:
  lVar4 = FUN_142ff1380(param_1,lVar4,1,plVar7,*(undefined8 *)(lVar6 + 0x1d8),0,&local_a0,&local_ac,
                        &local_b8,0,0);
  if (lVar4 != 0) {
    lVar6 = AGExplodingRockProjectile::GetPrivateStaticClass();
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
      lVar6 = FWeakObjectPtr::Get(param_2 + 0xc);
      if (lVar6 == 0) {
        return lVar4;
      }
      if (*(char *)(param_2 + 8) != '\0') {
        FUN_140b8ce60(lVar4,lVar6);
        return lVar4;
      }
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 140b7de90 FUN_140b7de90 body=503 status=ok
// SIG undefined FUN_140b7de90(void)

undefined8 *
FUN_140b7de90(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  lVar4 = param_2;
  if (param_3 != 0) {
    lVar4 = param_3;
  }
  FUN_1417846f0(lVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142a232e0();
  uVar5 = 0;
  plVar2 = (longlong *)FUN_1417985e0(uVar1,lVar4,0,0,0,0,0,0,0);
  if (plVar2 != (longlong *)0x0) {
    *(byte *)((longlong)plVar2 + 0xba) = *(byte *)((longlong)plVar2 + 0xba) | 1;
    *(byte *)((longlong)plVar2 + 0xb9) = *(byte *)((longlong)plVar2 + 0xb9) & 0xfb;
    (**(code **)(*plVar2 + 0x500))(plVar2,2);
    (**(code **)(*plVar2 + 0x928))(plVar2,param_4);
    (**(code **)(*plVar2 + 0x640))(plVar2,param_5);
    FUN_142398770(plVar2,param_6,0,0,uVar5 & 0xffffff00);
    if (param_3 != 0) {
      FUN_142382f60(plVar2,param_3,&DAT_146af29ec,0);
    }
    FUN_142ddb8d0(plVar2,param_2,1,0);
  }
  FUN_1417846f0(lVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar5 = 0;
  plVar3 = (longlong *)FUN_1417985e0(uVar1,lVar4,0,0,0,0,0,0,0);
  if (plVar3 != (longlong *)0x0) {
    *(byte *)((longlong)plVar3 + 0xba) = *(byte *)((longlong)plVar3 + 0xba) | 1;
    *(byte *)((longlong)plVar3 + 0xb9) = *(byte *)((longlong)plVar3 + 0xb9) & 0xfb;
    (**(code **)(*plVar3 + 0x500))(plVar3,2);
    FUN_142398770(plVar3,param_7,0,0,uVar5 & 0xffffff00);
    if (param_3 != 0) {
      FUN_142382f60(plVar3,param_3,&DAT_146af29ec,0);
    }
  }
  *param_1 = plVar2;
  param_1[1] = plVar3;
  return param_1;
}



// FUNCTION 140b7e090 FUN_140b7e090 body=208 status=ok
// SIG undefined FUN_140b7e090(void)

longlong * FUN_140b7e090(longlong param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar1 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    plVar2 = (longlong *)FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
    if (plVar2 != (longlong *)0x0) {
      *(byte *)((longlong)plVar2 + 0xba) = *(byte *)((longlong)plVar2 + 0xba) | 1;
      *(byte *)((longlong)plVar2 + 0xb9) = *(byte *)((longlong)plVar2 + 0xb9) & 0xfb;
      (**(code **)(*plVar2 + 0x500))(plVar2,2);
      *(undefined4 *)((longlong)plVar2 + 0x2d4) = param_4;
      *(undefined1 *)(plVar2 + 0x5a) = param_2;
      *(undefined1 *)((longlong)plVar2 + 0x2d1) = param_3;
    }
  }
  return plVar2;
}



// FUNCTION 140b7e160 FUN_140b7e160 body=134 status=ok
// SIG undefined FUN_140b7e160(void)

void FUN_140b7e160(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
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
    if ((bVar1) && (lVar2 = FUN_140b785e0(lVar2), lVar2 != 0)) {
      FUN_140c3c4b0(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140b7e1f0 FUN_140b7e1f0 body=11 status=ok
// SIG undefined FUN_140b7e1f0(void)

void FUN_140b7e1f0(undefined8 param_1,long param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage(param_2);
  return;
}



// FUNCTION 140b7e200 FUN_140b7e200 body=887 status=ok
// SIG undefined FUN_140b7e200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b7e200(longlong *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [16];
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
LAB_140b7e272:
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = *(longlong *)(lVar4 + 400);
    if (lVar4 == 0) goto LAB_140b7e272;
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140b7e272;
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = UWorld::GetWorldSettings(lVar5,0,1);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 0x658);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = UTextureRenderTargetCube::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if ((param_2 < 0) || (*(int *)(lVar5 + 0xc0) <= param_2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (longlong)param_2 * 8);
  if (lVar5 == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_3;
  }
  uVar7 = FName::FName(local_res20,puVar11,1);
  plVar8 = (longlong *)FUN_140bbb0e0(lVar4,uVar7);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  uVar7 = (**(code **)(*plVar8 + 400))(plVar8,local_28);
  uVar9 = thunk_FUN_1422ca050();
  UAssetManager::GetPrimaryAssetHandle(uVar9,&local_38,uVar7,0,0);
  if (local_38 != 0) {
    if ((*(char *)(local_38 + 0x10) == '\0') && (*(char *)(local_38 + 0x12) == '\0')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) || (*(char *)(local_38 + 0x10) != '\0')) {
      FUN_140b7b200(local_res8,lVar5,plVar8);
      goto LAB_140b7e4f6;
    }
  }
  local_48 = 0;
  local_40 = 0;
  puVar10 = (undefined8 *)operator_new(0x28,&local_48);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_1442e8698;
    puVar10[2] = lVar5;
    puVar10[3] = plVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar10[4] = uVar7;
    *puVar10 = &PTR_GetPoolName_1442e86e0;
  }
  uVar7 = thunk_FUN_1422ca050();
  FUN_1409f97d0(uVar7,&local_58,plVar8,&local_48);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686a040) && (_Init_thread_header(&DAT_14686a040), DAT_14686a040 == -1))
  {
    atexit((_func_5014 *)&LAB_143e4c080);
    _Init_thread_footer(&DAT_14686a040);
  }
  iVar2 = DAT_14686a038;
  lVar4 = (longlong)DAT_14686a038;
  DAT_14686a038 = DAT_14686a038 + 1;
  if (DAT_14686a03c < DAT_14686a038) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_14686a030,iVar2);
  }
  puVar10 = (undefined8 *)(lVar4 * 0x10 + _DAT_14686a030);
  *puVar10 = local_58;
  puVar10[1] = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
LAB_140b7e4f6:
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
  return;
}



// FUNCTION 140b7e580 FUN_140b7e580 body=251 status=ok
// SIG undefined FUN_140b7e580(void)

void FUN_140b7e580(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  uVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = FUN_140d3a420(uVar4);
  if (lVar5 != 0) {
    FUN_140b82810(param_1,&local_28);
    plVar6 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar5);
      plVar3 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_10 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = plStack_20;
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = plStack_20;
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
            plVar6 = plStack_20;
          }
        }
      }
    }
    plVar3 = plStack_20;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b7e680 DestroyObject body=62 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FOnlineLeaderboardRead,SharedPointerInternals::DefaultDeleter<FOnlineLeaderboardRead>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140b7a470(lVar1 + 0x20);
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x38);
    return;
  }
  return;
}



// FUNCTION 140b7e6c0 FUN_140b7e6c0 body=242 status=ok
// SIG undefined FUN_140b7e6c0(void)

void FUN_140b7e6c0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_1 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    uVar7 = 0;
    uVar4 = uVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(uVar4 + 8) & 0x30000000) == 0) {
      local_18 = (longlong *)0x0;
      local_10 = 0;
      FUN_14238b380(param_1,1,&local_18);
      (**(code **)(*param_1 + 0x3b0))(param_1,0);
      uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
      if (local_18 + (int)local_10 < local_18) {
        uVar4 = uVar7;
      }
      plVar6 = local_18;
      if (uVar4 != 0) {
        do {
          plVar2 = (longlong *)*plVar6;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
          }
          plVar6 = plVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar4);
      }
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
    }
  }
  return;
}



// FUNCTION 140b7e7c0 FUN_140b7e7c0 body=570 status=ok
// SIG undefined FUN_140b7e7c0(void)

void FUN_140b7e7c0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *local_28;
  undefined8 local_20;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  plVar9 = (longlong *)0x0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  plVar5 = plVar9;
  if ((param_1[0x23] != 0) && (plVar5 = (longlong *)0x0, lVar2 != 0)) {
    uVar4 = FUN_142e64ca0();
    plVar5 = (longlong *)AGameStateBase::OnRep_GameModeClass(param_1[0x23],uVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = FUN_142e64ca0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar4 = *(undefined8 *)(lVar2 + 0x230);
        lVar6 = FUN_1429f11d0();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar7 = param_1;
        if (!bVar3) {
          plVar7 = plVar9;
        }
        FUN_142d363c0(plVar5,plVar7,uVar4);
        lVar6 = param_1[0x23];
        if (lVar6 != 0) {
          uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
          plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x18))(plVar7,0);
          }
        }
        goto LAB_140b7e8ee;
      }
    }
    plVar5 = (longlong *)0x0;
  }
LAB_140b7e8ee:
  (**(code **)(*param_1 + 0x418))(param_1,&DAT_14653218c);
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    FUN_142359580(param_1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_14238b380(param_1,1,&local_28);
    puVar1 = local_28 + (int)local_20;
    for (puVar8 = local_28; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      plVar7 = (longlong *)*puVar8;
      if (plVar7 != (longlong *)0x0) {
        if ((*(byte *)(plVar7 + 0x17) & 1) != 0) {
          FUN_142359580(plVar7);
        }
        if (plVar5 != (longlong *)0x0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x230);
          lVar6 = FUN_1429f11d0();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            plVar7 = plVar9;
          }
          FUN_142d363c0(plVar5,plVar7,uVar4);
        }
      }
    }
    if (local_28 != (undefined8 *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 140b7ea00 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
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



// FUNCTION 140b7ea80 Empty body=236 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = (longlong)local_1c * 0x60 + *local_38;
      *(undefined4 *)(lVar2 + 0x50) = 0;
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2 + 8);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  return;
}



// FUNCTION 140b7eb70 FUN_140b7eb70 body=1032 status=ok
// SIG undefined FUN_140b7eb70(void)

void FUN_140b7eb70(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined8 local_res20;
  longlong *local_e8;
  int local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_78 [2];
  longlong *local_68;
  longlong local_60;
  
  plVar10 = (longlong *)0x0;
  local_res20 = 0;
  plVar5 = (longlong *)FUN_1404b0000(&local_res20);
  bVar12 = plVar5 != (longlong *)0x0;
  if (bVar12) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x40))(plVar5,local_88);
    plVar5 = (longlong *)*puVar6;
  }
  else {
    puVar6 = &local_d8;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    plVar5 = plVar10;
  }
  plVar11 = (longlong *)puVar6[1];
  puVar6[1] = 0;
  local_b8 = plVar11;
  *puVar6 = 0;
  if ((bVar12) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_80 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar9 = plStack_d0;
  if ((!bVar12) && (plStack_d0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_d0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar7 + 400) != 0) {
      puVar8 = (ulonglong *)UListView::OnItemSelectionChanged();
      puVar6 = (undefined8 *)*puVar8;
      local_c0 = (longlong *)((longlong)(int)puVar8[1] & 0x1fffffffffffffff);
      if (puVar6 + (int)puVar8[1] < puVar6) {
        local_c0 = plVar10;
      }
      if (local_c0 != (longlong *)0x0) {
        do {
          lVar7 = FUN_142547b50(*puVar6,local_78);
          plVar11 = *(longlong **)(lVar7 + 0x10);
          lVar7 = *(longlong *)(lVar7 + 8);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          local_78[0] = &PTR_FUN_143f740c8;
          if (local_60 != 0) {
            FMemory::Free();
          }
          plVar9 = local_68;
          local_78[0] = &PTR_FUN_143f73d18;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_68 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_68)(local_68);
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
          if (lVar7 != 0) {
            if (param_2 == '\0') {
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
              }
              local_a0 = lVar7;
              local_98 = plVar11;
              (**(code **)(*plVar5 + 0x38))(plVar5,&local_a0);
              plVar9 = local_98;
            }
            else {
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
              }
              local_b0 = lVar7;
              local_a8 = plVar11;
              (**(code **)(*plVar5 + 0x30))(plVar5,&local_b0);
              plVar9 = local_a8;
            }
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar9 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar11 + 1;
            lVar7 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          puVar6 = puVar6 + 1;
          plVar10 = (longlong *)((longlong)plVar10 + 1);
          plVar11 = local_b8;
        } while (plVar10 != local_c0);
      }
    }
    if (param_2 == '\0') {
      (**(code **)(*plVar5 + 0x70))(plVar5,param_1 + 0x24);
    }
    else {
      local_e8 = (longlong *)0x0;
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_e0 = 3;
      local_e8 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_1442e8068;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        plVar10[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar10[4] = lVar7;
        *plVar10 = (longlong)&PTR_FUN_1442e80b0;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x68))(plVar5,local_90,&local_e8);
      param_1[0x24] = *plVar5;
      if (local_e0 != 0) {
        if (local_e8 == (longlong *)0x0) goto LAB_140b7ef12;
        (**(code **)(*local_e8 + 0x28))(local_e8,0);
        if (local_e8 != (longlong *)0x0) {
          local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
        }
        local_e0 = 0;
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free(local_e8);
      }
    }
  }
LAB_140b7ef12:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar11 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 140b7ef80 FUN_140b7ef80 body=389 status=ok
// SIG undefined FUN_140b7ef80(void)

void FUN_140b7ef80(longlong *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x688))();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x668))(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b7f01a;
  }
  lVar3 = 0;
LAB_140b7f01a:
  lVar4 = FUN_14148cad0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (lVar3 != 0) {
      FUN_140a02dd0(lVar3,param_2,param_3,param_4,0);
      return;
    }
    lVar3 = FUN_1412286a0(param_2,param_3);
  }
  else {
    lVar4 = FUN_1414d8e60();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    if (lVar3 != 0) {
      FUN_140a029b0(lVar3,param_2,param_4,0);
      return;
    }
    lVar3 = *(longlong *)(param_2 + 0x4d8);
  }
  if (lVar3 != 0) {
    FUN_142ce1dc0(lVar3,lVar2,param_4);
  }
  return;
}



// FUNCTION 140b7f130 FUN_140b7f130 body=80 status=ok
// SIG undefined FUN_140b7f130(void)

void FUN_140b7f130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f17d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b7f180 Execute body=80 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UMatchmaker,TTypeWrapper<void>___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f1cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b7f1d0 FUN_140b7f1d0 body=80 status=ok
// SIG undefined FUN_140b7f1d0(void)

void FUN_140b7f1d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f21d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b7f220 Execute body=66 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,TTypeWrapper<void>___cdecl(FUniqueNetId_const_&,bool)>
     ::Execute(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f25f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140b7f270 FUN_140b7f270 body=82 status=ok
// SIG undefined FUN_140b7f270(void)

void FUN_140b7f270(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f2bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b7f2d0 Execute body=46 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy,TTypeWrapper<void>___cdecl(enum_EInAppPurchaseState::Type)>
     ::Execute(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f2fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140b7f300 Execute body=62 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AMenuGameMode,TTypeWrapper<void>___cdecl(int,ULocalPlayer_*___ptr64)>
     ::Execute(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140b7f340 FUN_140b7f340 body=78 status=ok
// SIG undefined FUN_140b7f340(void)

void FUN_140b7f340(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f38b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b7f390 Execute body=78 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,USocialUser,TTypeWrapper<void>___cdecl(int,FUniqueNetId_const_&,FString_const_&,FOnlineError_const_&)>
     ::Execute(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b7f3e0 FUN_140b7f3e0 body=62 status=ok
// SIG undefined FUN_140b7f3e0(void)

void FUN_140b7f3e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f41b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140b7f420 Execute body=67 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UPlayerAnim,TTypeWrapper<void>___cdecl(unsigned_char,enum_EStatsAppliedMode)>
     ::Execute(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140b7f470 Execute body=65 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,ULoadProfileSaveCallbackProxy,TTypeWrapper<void>___cdecl(enum_EPersistenceLoadResult,USaveGame_*)>
     ::Execute(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b7f4ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140b7f4c0 FUN_140b7f4c0 body=31 status=ok
// SIG undefined FUN_140b7f4c0(void)

undefined1 FUN_140b7f4c0(longlong param_1)

{
  FUN_140b7b200(param_1 + 8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140b7f4e0 FUN_140b7f4e0 body=109 status=ok
// SIG undefined FUN_140b7f4e0(void)

undefined1 FUN_140b7f4e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f550 ExecuteIfSafe body=119 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UMatchmaker,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4,param_5);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f5d0 FUN_140b7f5d0 body=129 status=ok
// SIG undefined FUN_140b7f5d0(void)

undefined1
FUN_140b7f5d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

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



// FUNCTION 140b7f660 ExecuteIfSafe body=93 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f6c0 FUN_140b7f6c0 body=111 status=ok
// SIG undefined FUN_140b7f6c0(void)

undefined1 FUN_140b7f6c0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f730 ExecuteIfSafe body=89 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy,void___cdecl(enum_EInAppPurchaseState::Type)>
::ExecuteIfSafe(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 140b7f790 ExecuteIfSafe body=89 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,AMenuGameMode,void___cdecl(int,ULocalPlayer_*___ptr64)>::
ExecuteIfSafe(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f7f0 FUN_140b7f7f0 body=109 status=ok
// SIG undefined FUN_140b7f7f0(void)

undefined1 FUN_140b7f7f0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f860 ExecuteIfSafe body=119 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,USocialUser,void___cdecl(int,FUniqueNetId_const_&,FString_const_&,FOnlineError_const_&)>
::ExecuteIfSafe(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4,param_5);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f8e0 FUN_140b7f8e0 body=89 status=ok
// SIG undefined FUN_140b7f8e0(void)

undefined1 FUN_140b7f8e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f940 ExecuteIfSafe body=94 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UPlayerAnim,void___cdecl(unsigned_char,enum_EStatsAppliedMode)>
::ExecuteIfSafe(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140b7f9a0 ExecuteIfSafe body=92 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,ULoadProfileSaveCallbackProxy,void___cdecl(enum_EPersistenceLoadResult,USaveGame_*)>
::ExecuteIfSafe(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}


