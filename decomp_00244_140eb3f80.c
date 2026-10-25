// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140eb3f80 FUN_140eb3f80 body=175 status=ok
// SIG undefined FUN_140eb3f80(void)

void FUN_140eb3f80(longlong param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_118 [272];
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
  if (cVar3 != '\0') {
    if ((param_2 < 0) || (*(int *)(param_1 + 0xf0) <= param_2)) {
      *(undefined1 *)(param_3 + 0x5a) = 1;
    }
    else {
      uVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xe8) + (longlong)param_2 * 8);
      uVar2 = FWeakObjectPtr::Get(param_1 + 0xdc);
      uVar2 = FUN_140e971d0(uVar2);
      uVar2 = FUN_140ee5e20(uVar2);
      uVar1 = FUN_1411e38c0(local_118,uVar1,uVar2);
      FUN_140e9ca30(param_3,uVar1);
      FUN_140e9c360(local_118);
    }
  }
  return;
}



// FUNCTION 140eb4030 FUN_140eb4030 body=324 status=ok
// SIG undefined FUN_140eb4030(void)

void FUN_140eb4030(longlong param_1,undefined8 param_2,longlong param_3)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if (param_3 != DAT_146875028) {
    return;
  }
  _Src = *(void **)(param_1 + 0x760);
  local_10 = *(int *)(param_1 + 0x768);
  lVar5 = (longlong)local_10;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar5 << 3);
  }
  *(undefined4 *)(param_1 + 0x768) = 0;
  if (*(int *)(param_1 + 0x76c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x760,0);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140eb4110;
  }
  lVar5 = 0;
LAB_140eb4110:
  uVar4 = FUN_140eac060(param_1);
  FUN_140ee6270(lVar5,uVar4,&local_18);
  *(undefined4 *)(param_1 + 0x748) = 0x1010101;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x71c);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x71c);
    FUN_140e58380(lVar5 + 0x26f0);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140eb4180 FUN_140eb4180 body=25 status=ok
// SIG undefined FUN_140eb4180(void)

void FUN_140eb4180(longlong *param_1,char param_2)

{
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140eb4189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x578))(param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140eb4192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,0);
  return;
}



// FUNCTION 140eb41c0 FUN_140eb41c0 body=40 status=ok
// SIG undefined FUN_140eb41c0(void)

void FUN_140eb41c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x1f8);
  if (*plVar1 != 0) {
    FUN_142f06340(param_1,plVar1);
    *plVar1 = 0;
  }
  return;
}



// FUNCTION 140eb41f0 FUN_140eb41f0 body=279 status=ok
// SIG undefined FUN_140eb41f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eb41f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ea5220;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140eb4310 FUN_140eb4310 body=625 status=ok
// SIG undefined FUN_140eb4310(void)

void FUN_140eb4310(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_58 [64];
  
  if ((*(float *)(param_1 + 0x38) == *(float *)(param_1 + 0x18)) && (param_3 == '\0')) {
    return;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_140ec8200();
  FUN_140ec88a0(param_1,param_2);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x68) != '\0') {
    plVar1 = (longlong *)(param_2 + 0xd8);
    plVar9 = (longlong *)*plVar1;
    plVar2 = plVar9 + (longlong)*(int *)(param_2 + 0xe0) * 5;
    for (; (plVar11 = (longlong *)0x0, plVar9 != plVar2 &&
           ((*plVar9 != *(longlong *)(param_1 + 0x10) ||
            (plVar11 = plVar9, *(char *)((longlong)plVar9 + 0x1c) != '\x02')))); plVar9 = plVar9 + 5
        ) {
    }
    if (((*(float *)(param_1 + 0x18) <= 0.0) || (*(longlong *)(param_2 + 0xb0) == 0)) ||
       (cVar7 = FUN_140eb29f0(), cVar7 == '\0')) {
      if (plVar11 != (longlong *)0x0) {
        *(undefined2 *)((longlong)plVar11 + 0x24) = 0x100;
      }
    }
    else {
      if (plVar11 == (longlong *)0x0) {
        iVar4 = *(int *)(param_2 + 0xe0);
        lVar10 = (longlong)iVar4;
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        *(int *)(param_2 + 0xe0) = iVar4 + 1;
        if (*(int *)(param_2 + 0xe4) < iVar4 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
        }
        lVar8 = *plVar1;
        *(undefined8 *)(lVar8 + lVar10 * 0x28) = uVar5;
        *(undefined8 *)(lVar8 + 8 + lVar10 * 0x28) = 0;
        *(undefined8 *)(lVar8 + 0x10 + lVar10 * 0x28) = 0;
        lVar6 = *(longlong *)(lVar8 + lVar10 * 0x28);
        *(undefined4 *)(lVar8 + 0x18 + lVar10 * 0x28) = 0;
        *(undefined1 *)(lVar8 + 0x1c + lVar10 * 0x28) = 2;
        *(undefined4 *)(lVar8 + 0x20 + lVar10 * 0x28) = 0;
        *(undefined2 *)(lVar8 + 0x24 + lVar10 * 0x28) = 0;
        *(undefined4 *)(lVar8 + 0x18 + lVar10 * 0x28) = *(undefined4 *)(lVar6 + 0x74);
        *(undefined8 *)(lVar8 + 0x10 + lVar10 * 0x28) = *(undefined8 *)(lVar6 + 0x78);
        plVar11 = (longlong *)(*plVar1 + lVar10 * 0x28);
      }
      *(undefined2 *)((longlong)plVar11 + 0x24) = 0x101;
      FUN_140e7ae90(*(undefined8 *)(param_2 + 0xb0));
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar10 + 0xc0) == '\0') goto LAB_140eb455f;
  fVar3 = *(float *)(param_1 + 0x18);
  cVar7 = FUN_14059ee90(param_1 + 0x20);
  if (fVar3 <= 0.0) {
    if (cVar7 == '\0') goto LAB_140eb455f;
    if (((*(longlong *)(param_2 + 0xb0) == 0) ||
        (lVar8 = FUN_14059b7e0(*(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x118),1), lVar8 == 0
        )) || (lVar10 = *(longlong *)(lVar10 + 0xd8), lVar10 == 0)) {
      FUN_1405ac8f0(param_1 + 0x20,0,4);
      goto LAB_140eb455f;
    }
  }
  else {
    if (((cVar7 != '\0') || (*(longlong *)(lVar10 + 0xd0) == 0)) ||
       ((*(longlong *)(param_2 + 0xb0) == 0 ||
        (lVar8 = FUN_14059b7e0(*(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x118),1), lVar8 == 0
        )))) goto LAB_140eb455f;
    lVar10 = *(longlong *)(lVar10 + 0xd0);
  }
  lVar10 = FUN_1405a3150(lVar8,local_58,lVar10,0);
  FUN_1405913a0(param_1 + 0x20,lVar10);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar10 + 0x10);
  FUN_140591060(local_58);
LAB_140eb455f:
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 140eb4590 FUN_140eb4590 body=394 status=ok
// SIG undefined FUN_140eb4590(void)

void FUN_140eb4590(longlong param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xdc);
    if (param_2 != -1) {
      lVar6 = *plVar3;
      local_38 = 0;
      local_30 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
      (**(code **)(lVar6 + 0x4e8))(plVar3,*puVar4,&local_38);
    }
    if ((((int)plVar3[0xe8] == 0) && (param_1 == plVar3[0xf8])) && (param_2 != -1)) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_142ed36d0(plVar3,&local_28,0);
    }
    if (param_1 != 0) {
      plVar5 = (longlong *)FUN_141039030(param_1 + 0x28,param_2);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = FUN_141488730();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar6 = (**(code **)(*plVar5 + 0x340))(plVar5);
          if (*(char *)(lVar6 + 0x54) != '\0') {
            (**(code **)(*plVar5 + 0x378))(plVar5);
            uVar7 = FUN_140e971d0(plVar3);
            lVar6 = FUN_140ee5e20(uVar7);
            if (lVar6 != 0) {
              lVar8 = (**(code **)(*plVar5 + 0x340))(plVar5);
              if (*(int *)(lVar8 + 0xd8) != -1) {
                lVar8 = (**(code **)(*plVar5 + 0x340))(plVar5);
                FUN_143015ae0(lVar6,lVar8 + 0xd8,0,1);
              }
            }
          }
        }
      }
    }
    *(undefined1 *)((longlong)plVar3 + 0x744) = 1;
    LOCK();
    *(undefined4 *)(plVar3 + 0xb1) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140eb4720 FUN_140eb4720 body=46 status=ok
// SIG undefined FUN_140eb4720(void)

void FUN_140eb4720(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0xdc);
    *(undefined1 *)(lVar1 + 0x744) = 1;
  }
  return;
}



// FUNCTION 140eb4750 FUN_140eb4750 body=1442 status=ok
// SIG undefined FUN_140eb4750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eb4750(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined7 uVar8;
  undefined1 auStack_208 [32];
  longlong **local_1e8;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
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
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_88[0] = &LAB_140ea5240;
  FUN_1420849a0(param_1,local_d8,local_88);
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
  FUN_14208c4f0(param_1,local_d8);
  *(undefined4 *)(param_1 + 0x122) = 0;
  FUN_140ebd8e0(param_1);
  FUN_140eb0fe0(param_1);
  FUN_140ebbdd0(param_1);
  FUN_140ec6d60(param_1);
  FUN_140f089d0(param_1 + 0xeb);
  uVar8 = (undefined7)((ulonglong)param_4 >> 8);
  FUN_140f0b090(param_1 + 0xeb,0,1);
  (**(code **)(*param_1 + 0x540))(param_1);
  local_1c8 = 0;
  local_1c0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L"reroll_Title",0x1a);
  local_1e8 = &local_1d8;
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  local_158 = 0;
  plVar4 = (longlong *)FUN_140ac4770(param_1,&local_1c8,0,CONCAT71(uVar8,6));
  plVar7 = local_1d8;
  for (iVar6 = (int)local_1d0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = *plVar4;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_138,L"REROLL?",L"GFxAnointmentRerollMenu",L"RerollTitleText");
    (**(code **)(lVar2 + 0x2b0))(plVar4,uVar5,1,0);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_130 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  local_1a8 = 0;
  local_1a0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"questionText",0x1a);
  local_1e8 = &local_1b8;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  local_150 = 0;
  plVar4 = (longlong *)FUN_140ac4770(param_1,&local_1a8,0,6);
  plVar7 = local_1b8;
  for (iVar6 = (int)local_1b0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = *plVar4;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_120,
                       L"Would you like to spend Eridium to Reroll the Anointment on the placed piece of gear?"
                       ,L"GFxAnointmentRerollMenu",L"RerollQuestionText");
    (**(code **)(lVar2 + 0x2b0))(plVar4,uVar5,1,0);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_118 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
  }
  local_188 = 0;
  local_180 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
  FGenericPlatformString::Memcpy(local_188,L"itemSelect_Title",0x22);
  local_1e8 = &local_198;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  local_148 = 0;
  plVar4 = (longlong *)FUN_140ac4770(param_1,&local_188,0,6);
  plVar7 = local_198;
  for (iVar6 = (int)local_190; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = *plVar4;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_108,L"Item Select",L"GFxAnointmentRerollMenu",L"ItemSelectTitleText");
    (**(code **)(lVar2 + 0x2b0))(plVar4,uVar5,1,0);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_100 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  local_168 = 0;
  local_160 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"backpackText",0x1a);
  local_1e8 = &local_178;
  local_178 = (longlong *)0x0;
  local_170 = 0;
  local_140 = 0;
  plVar4 = (longlong *)FUN_140ac4770(param_1,&local_168,0,6);
  plVar7 = local_178;
  for (iVar6 = (int)local_170; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = *plVar4;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f0,L"Select an item to Reroll Anointments.",L"GFxAnointmentRerollMenu",
                       L"SelectItemText");
    (**(code **)(lVar2 + 0x2b0))(plVar4,uVar5,1,0);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_e8 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
  }
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 140eb4d00 FUN_140eb4d00 body=4528 status=ok
// SIG undefined FUN_140eb4d00(void)

void FUN_140eb4d00(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int *piVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  int *piVar18;
  wchar_t *pwVar19;
  bool bVar20;
  longlong local_res8;
  wchar_t *local_res10;
  undefined8 local_d8;
  wchar_t *pwStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  wchar_t *local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_142ec1f90();
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  pwVar19 = (wchar_t *)0x0;
  uVar7 = 0;
  if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x148), lVar8 != 0)) {
    lVar9 = FUN_14131fc50();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (bVar20) {
      lVar8 = FUN_140ad4e20(lVar8);
      if (lVar8 != 0) {
        uVar7 = *(undefined4 *)(lVar8 + 0x1a8);
      }
      *(undefined4 *)(param_1 + 0x10b) = uVar7;
    }
  }
  pwVar10 = (wchar_t *)FWeakObjectPtr::Get((longlong)param_1 + 0x5d4);
  if (pwVar10 == (wchar_t *)0x0) {
LAB_140eb4dde:
    pwVar10 = pwVar19;
  }
  else {
    lVar8 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (!bVar20) goto LAB_140eb4dde;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  uVar11 = GetTransientPackage();
  FUN_1417846f0(uVar11,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar12 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
  lVar8 = FUN_1417985e0(uVar12,uVar11,0,0,0,0,0,0,0);
  param_1[0xf8] = lVar8;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0xd8) = 0;
    FWeakObjectPtr::operator=(lVar8 + 0xdc,param_1);
    local_78 = 0x80;
    uStack_70 = 0x100000001;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_c0 = (wchar_t *)0x0;
    local_b8 = 0;
    local_b0 = (wchar_t *)0x0;
    local_a8 = 0;
    local_a0 = (wchar_t *)0x0;
    local_98 = 0;
    local_90 = 0;
    local_88 = (undefined *)0x0;
    local_80 = 0;
    local_68 = 0;
    FWeakObjectPtr::operator=(&local_c8,param_1[0xf7]);
    if (local_c0 != L"scrollingList") {
      uVar16 = local_b8._4_4_;
      local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
      pwVar14 = pwVar19;
      if (uVar16 != 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c0,0xe);
        pwVar14 = (wchar_t *)(local_b8 & 0xffffffff);
        uVar16 = local_b8._4_4_;
      }
      iVar6 = (int)pwVar14 + 0xe;
      local_b8 = CONCAT44(local_b8._4_4_,iVar6);
      if ((int)uVar16 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0);
      }
      builtin_wcsncpy(local_c0,L"scrollingList",0xe);
    }
    if (local_b0 != L"scrollBar") {
      uVar16 = local_a8._4_4_;
      local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
      pwVar14 = pwVar19;
      if (uVar16 != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b0,10);
        pwVar14 = (wchar_t *)(local_a8 & 0xffffffff);
        uVar16 = local_a8._4_4_;
      }
      iVar6 = (int)pwVar14 + 10;
      local_a8 = CONCAT44(local_a8._4_4_,iVar6);
      if ((int)uVar16 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      builtin_wcsncpy(local_b0,L"scrollBar",10);
    }
    if (local_a0 != L"slot") {
      uVar16 = local_98._4_4_;
      local_98 = (ulonglong)local_98._4_4_ << 0x20;
      pwVar14 = pwVar19;
      if (uVar16 != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0,5);
        pwVar14 = (wchar_t *)(local_98 & 0xffffffff);
        uVar16 = local_98._4_4_;
      }
      iVar6 = (int)pwVar14 + 5;
      local_98 = CONCAT44(local_98._4_4_,iVar6);
      if ((int)uVar16 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
      }
      builtin_wcsncpy(local_a0,L"slot",5);
    }
    local_90 = FUN_141488730();
    if (local_88 != &DAT_1445ccf3c) {
      uVar16 = local_80._4_4_;
      local_80 = (ulonglong)local_80._4_4_ << 0x20;
      pwVar14 = pwVar19;
      iVar6 = 0;
      if (uVar16 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
        pwVar14 = (wchar_t *)(local_80 & 0xffffffff);
        iVar6 = local_80._4_4_;
      }
      if (iVar6 < (int)pwVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
      }
    }
    cVar5 = FUN_142ebe120(param_1);
    uStack_70 = CONCAT44(uStack_70._4_4_,1);
    uVar16 = 6;
    if (cVar5 != '\0') {
      uVar16 = 3;
    }
    local_78 = (ulonglong)uVar16;
    cVar5 = FUN_142ebe120(param_1);
    local_68 = 0;
    local_64 = 0x43880000;
    uVar7 = 5;
    if (cVar5 != '\0') {
      uVar7 = 2;
    }
    local_60 = 0x430e0ccd;
    uStack_70 = CONCAT44(uVar7,(undefined4)uStack_70);
    FUN_1411e9f30(param_1[0xf8],&local_c8);
    UOnCausedDamage::SetTriggerOnZeroDamage(param_1[0xf8],(int)param_1[0xe8] == 0);
    if (local_88 != (undefined *)0x0) {
      FMemory::Free();
    }
    if (local_a0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_b0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_c0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  uVar11 = GetTransientPackage();
  FUN_1417846f0(uVar11,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar12 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
  lVar8 = FUN_1417985e0(uVar12,uVar11,0,0,0,0,0,0,0);
  param_1[0xfd] = lVar8;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0xd8) = 1;
    FWeakObjectPtr::operator=(lVar8 + 0xdc,param_1);
    local_78 = 0x80;
    uStack_70 = 0x100000001;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_c0 = (wchar_t *)0x0;
    local_b8 = 0;
    local_b0 = (wchar_t *)0x0;
    local_a8 = 0;
    local_a0 = (wchar_t *)0x0;
    local_98 = 0;
    local_90 = 0;
    local_88 = (undefined *)0x0;
    local_80 = 0;
    local_68 = 0;
    FWeakObjectPtr::operator=(&local_c8,param_1[0xfc]);
    if (local_c0 != L"scrollingList") {
      uVar16 = local_b8._4_4_;
      local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
      pwVar14 = pwVar19;
      if (uVar16 != 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c0,0xe);
        pwVar14 = (wchar_t *)(local_b8 & 0xffffffff);
        uVar16 = local_b8._4_4_;
      }
      iVar6 = (int)pwVar14 + 0xe;
      local_b8 = CONCAT44(local_b8._4_4_,iVar6);
      if ((int)uVar16 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0);
      }
      builtin_wcsncpy(local_c0,L"scrollingList",0xe);
    }
    if (local_b0 != L"scrollBar") {
      uVar16 = local_a8._4_4_;
      local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
      pwVar14 = pwVar19;
      if (uVar16 != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b0,10);
        pwVar14 = (wchar_t *)(local_a8 & 0xffffffff);
        uVar16 = local_a8._4_4_;
      }
      iVar6 = (int)pwVar14 + 10;
      local_a8 = CONCAT44(local_a8._4_4_,iVar6);
      if ((int)uVar16 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      builtin_wcsncpy(local_b0,L"scrollBar",10);
    }
    if (local_a0 != L"entry") {
      uVar16 = local_98._4_4_;
      local_98 = (ulonglong)local_98._4_4_ << 0x20;
      pwVar14 = pwVar19;
      if (uVar16 != 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0,6);
        pwVar14 = (wchar_t *)(local_98 & 0xffffffff);
        uVar16 = local_98._4_4_;
      }
      iVar6 = (int)pwVar14 + 6;
      local_98 = CONCAT44(local_98._4_4_,iVar6);
      if ((int)uVar16 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
      }
      builtin_wcsncpy(local_a0,L"entry",6);
    }
    local_90 = FUN_141488730();
    if (local_88 != &DAT_1445ccf84) {
      uVar16 = local_80._4_4_;
      local_80 = (ulonglong)local_80._4_4_ << 0x20;
      pwVar14 = pwVar19;
      iVar6 = 0;
      if (uVar16 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
        pwVar14 = (wchar_t *)(local_80 & 0xffffffff);
        iVar6 = local_80._4_4_;
      }
      if (iVar6 < (int)pwVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
      }
    }
    cVar5 = FUN_142ebe120(param_1);
    uStack_70 = CONCAT44(uStack_70._4_4_,2);
    uVar16 = 10;
    if (cVar5 != '\0') {
      uVar16 = 6;
    }
    local_78 = (ulonglong)uVar16;
    cVar5 = FUN_142ebe120(param_1);
    local_68 = 1;
    local_64 = 0x43880000;
    local_60 = 0x430e0ccd;
    uVar7 = 8;
    if (cVar5 != '\0') {
      uVar7 = 4;
    }
    uStack_70 = CONCAT44(uVar7,(undefined4)uStack_70);
    FUN_1411e9f30(param_1[0xfd],&local_c8);
    UOnCausedDamage::SetTriggerOnZeroDamage(param_1[0xfd],(int)param_1[0xe8] == 1);
    if (local_88 != (undefined *)0x0) {
      FMemory::Free();
    }
    if (local_a0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_b0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_c0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (param_1[0x10a] != 0) {
    pwVar13 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemCardReady",L"::");
    pwVar14 = pwVar19;
    while (pwVar4 = pwVar13, pwVar4 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar14 = pwVar4;
    }
    FName::FName(&local_res10,pwVar14 + 2,1);
    pwVar14 = local_res10;
    lVar8 = param_1[0x10a];
    FWeakObjectPtr::operator=(lVar8 + 0x198,param_1);
    *(wchar_t **)(lVar8 + 0x1a0) = pwVar14;
    local_res8 = 0;
    if ((pwVar14 != (wchar_t *)0x0) && (lVar9 = FWeakObjectPtr::Get(lVar8 + 0x198), lVar9 != 0)) {
      UObject::FindFunction(lVar9,*(undefined8 *)(lVar8 + 0x1a0));
    }
    FUN_140f70290(param_1[0x10a],param_1[0xdc]);
  }
  if (param_1[0xf9] != 0) {
    pwVar13 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMakeOfferButtonClicked",L"::");
    pwVar14 = pwVar19;
    while (pwVar4 = pwVar13, pwVar4 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar14 = pwVar4;
    }
    FName::FName(&local_res10,pwVar14 + 2,1);
    pwVar14 = local_res10;
    lVar8 = param_1[0xf9];
    FWeakObjectPtr::operator=(lVar8 + 0x1b0,param_1);
    *(wchar_t **)(lVar8 + 0x1b8) = pwVar14;
    local_res8 = 0;
    if ((pwVar14 != (wchar_t *)0x0) && (lVar9 = FWeakObjectPtr::Get(lVar8 + 0x1b0), lVar9 != 0)) {
      UObject::FindFunction(lVar9,*(undefined8 *)(lVar8 + 0x1b8));
    }
    pwVar13 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMakeOfferButtonUnhovered",L"::");
    pwVar14 = pwVar19;
    while (pwVar4 = pwVar13, pwVar4 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar14 = pwVar4;
    }
    FName::FName(&local_res10,pwVar14 + 2,1);
    pwVar14 = local_res10;
    lVar8 = param_1[0xf9];
    FWeakObjectPtr::operator=(lVar8 + 0x220,param_1);
    *(wchar_t **)(lVar8 + 0x228) = pwVar14;
    local_res8 = 0;
    if ((pwVar14 != (wchar_t *)0x0) && (lVar9 = FWeakObjectPtr::Get(lVar8 + 0x220), lVar9 != 0)) {
      UObject::FindFunction(lVar9,*(undefined8 *)(lVar8 + 0x228));
    }
  }
  FUN_140ea4ad0(param_1);
  FUN_140ebdb90(param_1,0);
  lVar8 = param_1[0xf8];
  if (lVar8 != 0) {
    if ((int)param_1[0xed] < 1) {
      FUN_1411f9bb0(lVar8,0xffffffff,0);
      pcVar2 = (code *)param_1[0xf9];
      pwStack_d0 = pwVar19;
      local_d8 = pcVar2;
      if (pcVar2 != (code *)0x0) {
        uVar11 = UBlendableInterface::GetPrivateStaticClass();
        pwStack_d0 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(pcVar2,uVar11);
      }
      FUN_142ed36d0(param_1,&local_d8,0);
    }
    else {
      FUN_1411f9bb0(lVar8,0,1);
    }
  }
  if (param_1[0xfd] != 0) {
    FUN_1411f9bb0(param_1[0xfd],0xffffffff,0);
  }
  uVar11 = GetTransientPackage();
  FUN_1417846f0(uVar11,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar12 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  lVar8 = FUN_1417985e0(uVar12,uVar11,0,0,0,0,0,0,0);
  plVar1 = param_1 + 0xef;
  if (*plVar1 == 0) {
    if (lVar8 != 0) {
      pwVar13 = (wchar_t *)operator_new();
      pwVar14 = pwVar19;
      if (pwVar13 != (wchar_t *)0x0) {
        FGCObject::FGCObject();
        *(longlong *)(pwVar13 + 8) = lVar8;
        *(undefined ***)pwVar13 = &PTR__scalar_deleting_destructor__1440f8f50;
        pwVar14 = pwVar13;
      }
      if (plVar1 == &local_res8) {
        if (pwVar14 != (wchar_t *)0x0) {
          puVar15 = *(undefined8 **)pwVar14;
          goto LAB_140eb5696;
        }
      }
      else {
        pwVar13 = (wchar_t *)*plVar1;
        *plVar1 = (longlong)pwVar14;
        if (pwVar13 != (wchar_t *)0x0) {
          puVar15 = *(undefined8 **)pwVar13;
          pwVar14 = pwVar13;
LAB_140eb5696:
          (*(code *)*puVar15)(pwVar14,1);
        }
      }
    }
  }
  else {
    *(longlong *)(*plVar1 + 0x10) = lVar8;
  }
  lVar8 = *plVar1;
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x10) == 0)) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  if ((bVar20) && (pwVar10 != (wchar_t *)0x0)) {
    local_48 = *(undefined8 *)(pwVar10 + 0x5c4);
    uStack_50 = *(undefined8 *)(pwVar10 + 0x5c0);
    local_58 = CONCAT44(0x1f,(int)*(undefined8 *)(pwVar10 + 0x5bc));
    pwVar10 = pwVar19;
    if (lVar8 != 0) {
      pwVar10 = *(wchar_t **)(lVar8 + 0x10);
    }
    FUN_1411f9620(pwVar10,&local_58);
    pwVar10 = pwVar19;
    if (*plVar1 != 0) {
      pwVar10 = *(wchar_t **)(*plVar1 + 0x10);
    }
    uVar7 = FUN_142eb7a90(param_1);
    *(undefined4 *)(pwVar10 + 0x6c) = uVar7;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnGearUpThumbnailLoaded",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    pwVar10 = pwVar19;
    if (*plVar1 != 0) {
      pwVar10 = *(wchar_t **)(*plVar1 + 0x10);
    }
    pwVar14 = pwVar10 + 0x74;
    FWeakObjectPtr::operator=(&local_d8,0);
    pwStack_d0 = (wchar_t *)0x0;
    FWeakObjectPtr::operator=(&local_d8,param_1);
    pwStack_d0 = local_res10;
    local_res8 = 0;
    if ((local_res10 != (wchar_t *)0x0) && (lVar8 = FWeakObjectPtr::Get(&local_d8), lVar8 != 0)) {
      UObject::FindFunction(lVar8,pwStack_d0);
    }
    piVar3 = *(int **)pwVar14;
    iVar6 = *(int *)(pwVar10 + 0x78);
    for (piVar18 = piVar3; piVar18 != piVar3 + (longlong)iVar6 * 4; piVar18 = piVar18 + 4) {
      if (((*piVar18 == (int)local_d8) &&
          (local_d8._4_4_ = (int)((ulonglong)local_d8 >> 0x20),
          bVar20 = piVar18[1] == local_d8._4_4_, bVar20)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar18), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_d8), cVar5 == '\0')))) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if ((bVar20) && (*(wchar_t **)(piVar18 + 2) == pwStack_d0)) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if (bVar20) {
        if ((int)((longlong)piVar18 - (longlong)piVar3 >> 4) != -1) goto LAB_140eb5875;
        break;
      }
    }
    iVar6 = *(int *)(pwVar10 + 0x78);
    *(int *)(pwVar10 + 0x78) = iVar6 + 1;
    if (*(int *)(pwVar10 + 0x7a) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar14,iVar6);
    }
    puVar17 = (undefined4 *)((longlong)iVar6 * 0x10 + *(longlong *)pwVar14);
    *puVar17 = (int)local_d8;
    puVar17[1] = local_d8._4_4_;
    *(wchar_t **)(puVar17 + 2) = pwStack_d0;
LAB_140eb5875:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar14);
  }
  pwVar10 = (wchar_t *)FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (pwVar10 == (wchar_t *)0x0) {
LAB_140eb58c3:
    pwVar10 = pwVar19;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (!bVar20) goto LAB_140eb58c3;
  }
  lVar8 = FUN_140ee5e20(pwVar10);
  if (lVar8 != 0) {
    pwStack_d0 = (wchar_t *)((ulonglong)pwStack_d0 & 0xffffffff00000000);
    local_d8 = Z_Construct_UClass_URedoutGameInstance_Statics::NewProp_bShowEmptyScreen_SetBit;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryQuantityChanged",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar8 + 0x318,param_1,&local_d8,local_res8);
    pwStack_d0 = (wchar_t *)((ulonglong)pwStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140eb6fc0;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemAdded",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar8 + 0x2d8,param_1,&local_d8,local_res8);
    pwStack_d0 = (wchar_t *)((ulonglong)pwStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140eb6fc0;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemRemoved",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar8 + 0x2e8,param_1,&local_d8,local_res8);
    pwStack_d0 = (wchar_t *)((ulonglong)pwStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140eb6fc0;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemUpdated",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar8 + 0x2f8,param_1,&local_d8,local_res8);
  }
  pwVar10 = (wchar_t *)FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (pwVar10 == (wchar_t *)0x0) {
LAB_140eb5b18:
    pwVar10 = pwVar19;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (!bVar20) goto LAB_140eb5b18;
  }
  lVar8 = FUN_140ee5fe0(pwVar10);
  if (lVar8 != 0) {
    pwStack_d0 = (wchar_t *)((ulonglong)pwStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140ebb4f0;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTargetInventoryQuantityChanged",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar8 + 0x318,param_1,&local_d8,local_res8);
    pwStack_d0 = (wchar_t *)((ulonglong)pwStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140ebb4f0;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTargetInventoryItemAdded",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar8 + 0x2d8,param_1,&local_d8,local_res8);
    pwStack_d0 = (wchar_t *)((ulonglong)pwStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140ebb4f0;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTargetInventoryItemRemoved",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar8 + 0x2e8,param_1,&local_d8,local_res8);
    pwStack_d0 = (wchar_t *)((ulonglong)pwStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140ebb4f0;
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTargetInventoryItemUpdated",L"::");
    pwVar10 = pwVar19;
    while (pwVar13 = pwVar14, pwVar13 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar10 = pwVar13;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(lVar8 + 0x2f8,param_1,&local_d8,local_res8);
  }
  *(undefined2 *)((longlong)param_1 + 0x746) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x749) = 1;
  *(undefined1 *)((longlong)param_1 + 0x74d) = 1;
  pwVar10 = (wchar_t *)FWeakObjectPtr::Get((longlong)param_1 + 0x594);
  if (pwVar10 == (wchar_t *)0x0) {
LAB_140eb5d83:
    pwVar10 = pwVar19;
  }
  else {
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (!bVar20) goto LAB_140eb5d83;
  }
  if (pwVar10 != (wchar_t *)0x0) {
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (bVar20) goto LAB_140eb5dc4;
  }
  pwVar10 = pwVar19;
LAB_140eb5dc4:
  lVar8 = (longlong)param_1 + 0x71c;
  FWeakObjectPtr::operator=(lVar8,pwVar10);
  cVar5 = FWeakObjectPtr::IsValid(lVar8);
  if (cVar5 != '\0') {
    uVar11 = FWeakObjectPtr::Get(lVar8);
    FUN_140e36a90(uVar11,param_1 + 0xe6,0);
    uVar11 = FWeakObjectPtr::Get(lVar8);
    FUN_140e36a80(uVar11,param_1[0xe7]);
  }
  if (((char)param_1[0xe3] != '\0') && (cVar5 = FWeakObjectPtr::IsValid(lVar8), cVar5 != '\0')) {
    local_res8 = 0;
    uVar11 = FWeakObjectPtr::Get(lVar8);
    FUN_140e1df50(uVar11,0,0,0,1);
  }
  *(int *)(param_1 + 0xf0) = (int)param_1[0xdd];
  *(undefined1 *)((longlong)param_1 + 0x745) = 1;
  FUN_142ecd4d0(param_1);
  lVar8 = *param_1;
  local_d8 = (code *)0x0;
  pwStack_d0 = (wchar_t *)0x0;
  puVar15 = (undefined8 *)FName::FName(&local_res8,&DAT_1445d5874,1);
  (**(code **)(lVar8 + 0x4e8))(param_1,*puVar15,&local_d8);
  return;
}



// FUNCTION 140eb5eb0 FUN_140eb5eb0 body=725 status=ok
// SIG undefined FUN_140eb5eb0(void)

void FUN_140eb5eb0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res8;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x71c);
  lVar7 = 0;
  if (cVar2 != '\0') {
    local_res8 = 0;
    uVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x71c);
    FUN_140e3c160(uVar3,0,0,1);
  }
  lVar5 = *param_1;
  local_68 = 0;
  local_60 = 0;
  puVar4 = (undefined8 *)FName::FName(&local_res8,"Close",1);
  (**(code **)(lVar5 + 0x4e8))(param_1,*puVar4,&local_68);
  lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140eb5f81;
  }
  lVar5 = lVar7;
LAB_140eb5f81:
  lVar5 = FUN_140ee5e20(lVar5);
  if (lVar5 != 0) {
    FUN_1407665e0(lVar5 + 0x318,param_1);
    FUN_1407665e0(lVar5 + 0x2d8,param_1);
    FUN_1407665e0(lVar5 + 0x2e8,param_1);
    FUN_1407665e0(lVar5 + 0x2f8,param_1);
  }
  lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar5 != 0) {
    FUN_14145f370();
  }
  lVar5 = FUN_140ee5fe0();
  if (lVar5 != 0) {
    FUN_1407665e0(lVar5 + 0x318,param_1);
    FUN_1407665e0(lVar5 + 0x2d8,param_1);
    FUN_1407665e0(lVar5 + 0x2e8,param_1);
    FUN_1407665e0(lVar5 + 0x2f8,param_1);
  }
  lVar5 = param_1[0xef];
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x10) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar6 = lVar7;
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x10);
    }
    FUN_1411eff10(lVar6);
    local_28 = 0;
    local_18 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f3f130;
    }
    local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
    lVar5 = lVar7;
    if (param_1[0xef] != 0) {
      lVar5 = *(longlong *)(param_1[0xef] + 0x10);
    }
    FUN_1411f67c0(lVar5,local_58);
    lVar5 = lVar7;
    if (param_1[0xef] != 0) {
      lVar5 = *(longlong *)(param_1[0xef] + 0x10);
    }
    FUN_1407665e0(lVar5 + 0xe8,param_1);
    if (param_1[0xef] != 0) {
      lVar7 = *(longlong *)(param_1[0xef] + 0x10);
    }
    FUN_1411f8450(lVar7);
    if (param_1[0xef] != 0) {
      *(undefined8 *)(param_1[0xef] + 0x10) = 0;
    }
  }
  if (param_1[0xf8] != 0) {
    FUN_1411d8e00();
    param_1[0xf8] = 0;
  }
  if (param_1[0xfd] != 0) {
    FUN_1411d8e00();
    param_1[0xfd] = 0;
  }
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 140eb61a0 FUN_140eb61a0 body=347 status=ok
// SIG undefined FUN_140eb61a0(void)

void FUN_140eb61a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec45d0();
  *(undefined1 *)(param_1 + 0x670) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_142088ee0(*(longlong *)(param_1 + 0x38),1);
    local_38[1] = 0x20;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"RequestAsyncLoad SingleDelegate",0x40);
    FUN_1422ca050();
    local_38[2] = 0;
    local_20 = 0;
    puVar4 = (undefined8 *)operator_new(0x28,local_38 + 2);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar4 + 1,param_1);
      puVar4[2] = FUN_140ea5e70;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[4] = uVar5;
      *puVar4 = &PTR_FUN_143f4d1b8;
    }
    lVar6 = FUN_1422ca050();
    FStreamableManager::RequestAsyncLoad
              (lVar6 + 0x178,local_18,param_1 + 0x640,local_38 + 2,0,0,0,local_38);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140eb6300 FUN_140eb6300 body=1927 status=ok
// SIG undefined FUN_140eb6300(void)

void FUN_140eb6300(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  longlong *local_138;
  int local_130;
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
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  FUN_142ef9e70();
  puVar3 = (undefined8 *)FUN_142085870(param_1,local_c8,L"alert");
  *(undefined8 *)(param_1 + 0x170) = *puVar3;
  plVar5 = (longlong *)puVar3[1];
  plVar7 = *(longlong **)(param_1 + 0x178);
  if (plVar5 != plVar7) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x178);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    *(longlong **)(param_1 + 0x178) = plVar5;
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_c0 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x178);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar5[1];
    bVar9 = iVar8 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar8 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar5 != (longlong *)0x0) {
          lVar6 = *(longlong *)(param_1 + 0x170);
          if (lVar6 != 0) {
            uVar4 = FUN_1420392d0(lVar6,local_b8,L"warningTitle");
            FUN_142ede260(param_1 + 0x180,uVar4);
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_b0 + 1;
              lVar2 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar2 == 1) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar1 = (int *)((longlong)local_b0 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*local_b0 + 8))(local_b0,1);
                }
              }
            }
            uVar4 = FUN_1420392d0(lVar6,local_a8,L"warningDescription");
            FUN_142ede260(param_1 + 0x198,uVar4);
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_a0 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar1 = (int *)((longlong)local_a0 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*local_a0 + 8))(local_a0,1);
                }
              }
            }
          }
          LOCK();
          plVar7 = plVar5 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar5[1];
      bVar9 = iVar8 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = FUN_142085870(param_1,local_98,L"gearTitle");
  FUN_142ede260(param_1 + 0x1b0,uVar4);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_90 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  uVar4 = FUN_142085870(param_1,local_88,L"playerStorageText");
  FUN_142ede260(param_1 + 0x1c8,uVar4);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  local_118 = 0;
  local_110 = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"gearDescriptionText.gridArea",0x3a);
  local_128 = (longlong *)0x0;
  local_120 = 0;
  FUN_140e98b90(param_1,param_1 + 0x1e0,&local_118,0,6,&local_128);
  plVar5 = local_128;
  for (iVar8 = (int)local_120; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_f8 = 0;
  local_f0 = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"gearDescriptionText.gearDescription",0x48);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  FUN_140e99270(param_1,param_1 + 0x1e8,&local_f8,0,6,&local_108);
  plVar5 = local_108;
  for (iVar8 = (int)local_100; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_d0 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"gearDescriptionText.scrollBar",0x3c);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  FUN_140e98f00(param_1,param_1 + 0x1f0,&local_d8,0,6,&local_e8);
  plVar5 = local_e8;
  for (iVar8 = (int)local_e0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (((*(longlong *)(param_1 + 0x1e0) != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) &&
     (*(longlong *)(param_1 + 0x1f0) != 0)) {
    FUN_142f0f790(*(longlong *)(param_1 + 0x1f0),1);
    FUN_142f118f0(*(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1f0),
                  *(undefined8 *)(param_1 + 0x1e0));
  }
  if ((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_1 + 400) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 400) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_78,L"WARNING",L"GFxGearUpExtractionMenu",L"AlertWarningText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x180,uVar4,1,0);
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
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1a0) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1a8) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      uVar4 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x198,uVar4,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1b8) != 0) && (*(longlong *)(param_1 + 0x1c0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_60,L"GEAR EXTRACTOR",L"GFxGearUpExtractionMenu",
                         L"GearExtractorTitleText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1b0,uVar4,1,0);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_58 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1d0) != 0) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      uVar4 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1c8,uVar4,1,0);
    }
  }
  if (*(longlong **)(param_1 + 0x1e8) != (longlong *)0x0) {
    lVar6 = **(longlong **)(param_1 + 0x1e8);
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar6 + 0x2b0))(*(undefined8 *)(param_1 + 0x1e8),uVar4,1,0);
  }
  local_138 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_130 = 3;
  local_138 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_140eb7ab0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f4d2d8;
  }
  FUN_142ee1c00(param_1,PTR_s_rollOver_14629d268,param_1 + 0x1f8,&local_138);
  if (local_130 != 0) {
    if (local_138 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_138 + 0x28))(local_138,0);
    if (local_138 != (longlong *)0x0) {
      local_138 = (longlong *)FMemory::Realloc(local_138,0,0);
    }
    local_130 = 0;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  return;
}



// FUNCTION 140eb6a90 FUN_140eb6a90 body=34 status=ok
// SIG undefined FUN_140eb6a90(void)

void FUN_140eb6a90(longlong *param_1)

{
  FUN_142ec45d0();
                    /* WARNING: Could not recover jumptable at 0x000140eb6aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,0);
  return;
}



// FUNCTION 140eb6ac0 FUN_140eb6ac0 body=102 status=ok
// SIG undefined FUN_140eb6ac0(void)

bool FUN_140eb6ac0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140eb07c0(param_1 + -0x4d8);
  if (cVar1 != '\0') {
    return true;
  }
  cVar1 = FUN_142ec6030(param_1,param_2);
  return cVar1 != '\0';
}



// FUNCTION 140eb6b30 FUN_140eb6b30 body=1163 status=ok
// SIG undefined FUN_140eb6b30(void)

char FUN_140eb6b30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  
  iVar4 = *(int *)(param_1 + 0x268);
  if (((iVar4 == 1) && (*(char *)((longlong)param_2 + 0xc) == '\0')) && (DAT_146b3e2b8 == *param_2))
  {
    *(undefined4 *)(param_1 + 0x298) = 0xffffffff;
    FUN_140ec3580(param_1 + -0x4d8,0);
    FUN_142ebe410(param_1 + -0x4d8);
    FUN_140eb0420(param_1 + 0x238,param_2);
    lVar7 = *(longlong *)(param_1 + -0x4d8);
    local_58 = 0;
    local_50 = 0;
    puVar5 = (undefined8 *)FName::FName(local_res18,"Cancel",1);
    (**(code **)(lVar7 + 0x4e8))(param_1 + -0x4d8,*puVar5,&local_58);
    return '\x01';
  }
  if (*param_2 == DAT_1468718b8) {
    if ((iVar4 == 0) && (*(char *)((longlong)param_2 + 0xc) == '\0')) {
      if (*(longlong *)(param_1 + 0x2e8) != 0) {
        iVar4 = FUN_1411e2310();
        if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x290))) {
          FWeakObjectPtr::operator=(&local_res8,0);
          puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x288) + (longlong)iVar4 * 8);
          *puVar2 = local_res8;
          puVar2[1] = local_resc;
          *(undefined1 *)(param_1 + 0x270) = 1;
          LOCK();
          *(undefined4 *)(param_1 + 0xb0) = 1;
          UNLOCK();
          *(undefined1 *)(param_1 + 0x273) = 1;
          *(undefined1 *)(param_1 + 0x271) = 1;
        }
      }
      FUN_142ebe410(param_1 + -0x4d8);
    }
    FUN_140eb0420(param_1 + 0x238,param_2);
    return '\x01';
  }
  if ((iVar4 == 0) && (*(longlong *)(param_1 + 0x2f0) != 0)) {
    lVar7 = param_1 + -0x4d8;
    lVar6 = FUN_142eb65a0(lVar7);
    if (((lVar6 == *(longlong *)(param_1 + 0x2f0)) &&
        (((*(longlong *)(param_1 + 0x2e8) != 0 && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
         (DAT_146871858 == *param_2)))) && (0 < *(int *)(param_1 + 0x290))) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_142ed36d0(lVar7,&local_38,0);
      FUN_1411f9bc0(*(undefined8 *)(param_1 + 0x2e8),1,0);
      FUN_142ebe410(lVar7);
      FUN_140eb0420(param_1 + 0x238,param_2);
      return '\x01';
    }
  }
  plVar1 = (longlong *)(param_1 + -0x4d8);
  lVar7 = FUN_142eb65a0(plVar1);
  if ((((lVar7 == 0) && (*(int *)(param_1 + 0x268) == 0)) &&
      ((0 < *(int *)(param_1 + 0x290) &&
       ((*(longlong *)(param_1 + 0x2e8) != 0 &&
        (cVar3 = FUN_1411e7870(*(longlong *)(param_1 + 0x2e8),param_2), cVar3 != '\0')))))) ||
     ((*(int *)(param_1 + 0x268) == 1 &&
      ((*(longlong *)(param_1 + 0x310) != 0 &&
       (cVar3 = FUN_1411e7870(*(longlong *)(param_1 + 0x310),param_2), cVar3 != '\0'))))))
  goto LAB_140eb6e92;
  if ((*(int *)(param_1 + 0x268) == 0) && (*(longlong *)(param_1 + 0x2f0) != 0)) {
    lVar7 = *(longlong *)(param_1 + 0x2f0);
    lVar6 = FUN_142eb65a0(plVar1);
    if ((((lVar6 != lVar7) &&
         (cVar3 = (**(code **)(*(longlong *)(lVar7 + 0x170) + 0x40))(), cVar3 != '\0')) &&
        (*(longlong *)(param_1 + 0x2e8) != 0)) &&
       ((*(char *)((longlong)param_2 + 0xc) == '\0' && (DAT_146871860 == *param_2)))) {
      FUN_1411f9bb0(*(longlong *)(param_1 + 0x2e8),0xffffffff,0);
      uVar8 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (local_28,*(undefined8 *)(param_1 + 0x2f0));
      FUN_142ed36d0(plVar1,uVar8,0);
      lVar7 = *plVar1;
      local_48 = 0;
      local_40 = 0;
      puVar5 = (undefined8 *)FName::FName(local_res20,"Navigate",1);
      (**(code **)(lVar7 + 0x4e8))(plVar1,*puVar5,&local_48);
      goto LAB_140eb6e92;
    }
  }
  if ((*(int *)(param_1 + 0x268) == 1) && (*(char *)((longlong)param_2 + 0xc) == '\0')) {
    if (DAT_1468718f8 == *param_2) {
      iVar4 = *(int *)(param_1 + 0x220);
      if (iVar4 != 0) {
        *(undefined2 *)(param_1 + 0x26f) = 0x101;
        *(int *)(param_1 + 0x2ac) = (*(int *)(param_1 + 0x2ac) + -1 + iVar4) % iVar4;
      }
      goto LAB_140eb6e92;
    }
    if (DAT_1468718f0 == *param_2) {
      iVar4 = *(int *)(param_1 + 0x220);
      if (iVar4 != 0) {
        *(undefined2 *)(param_1 + 0x26f) = 0x101;
        *(int *)(param_1 + 0x2ac) = (*(int *)(param_1 + 0x2ac) + 1 + iVar4) % iVar4;
      }
      goto LAB_140eb6e92;
    }
  }
  if (((*(longlong *)(param_1 + 0x2c8) == 0) ||
      (((*param_2 != DAT_146871a00 && (*param_2 != DAT_1468719f8)) ||
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x1f0), lVar7 == 0)))) ||
     (plVar9 = (longlong *)(lVar7 + 0x170), cVar3 = (**(code **)(*plVar9 + 0x20))(plVar9,param_2),
     cVar3 == '\0')) {
    cVar3 = FUN_142ec6030(param_1,param_2);
    if (cVar3 != '\0') {
      FUN_140eb0420(param_1 + 0x238,param_2);
    }
    return cVar3;
  }
LAB_140eb6e92:
  FUN_142ebe410(plVar1);
  FUN_140eb0420(param_1 + 0x238,param_2);
  return '\x01';
}



// FUNCTION 140eb6fc0 FUN_140eb6fc0 body=8 status=ok
// SIG undefined FUN_140eb6fc0(void)

void FUN_140eb6fc0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x748) = 1;
  return;
}



// FUNCTION 140eb6fd0 NewProp_bShowEmptyScreen_SetBit body=8 status=ok
// SIG undefined NewProp_bShowEmptyScreen_SetBit(void)

void Z_Construct_UClass_URedoutGameInstance_Statics::NewProp_bShowEmptyScreen_SetBit
               (longlong param_1)

{
  *(undefined1 *)(param_1 + 0x746) = 1;
  return;
}



// FUNCTION 140eb6fe0 FUN_140eb6fe0 body=163 status=ok
// SIG undefined FUN_140eb6fe0(void)

ulonglong FUN_140eb6fe0(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x740) == 0) goto LAB_140eb705d;
  lVar5 = *(longlong *)(param_1 + 0x430);
  if (lVar5 == 0) {
LAB_140eb703a:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140eb703a;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x2b0))();
  FWeakObjectPtr::operator=(lVar3 + 0x18,lVar5);
LAB_140eb705d:
  uVar4 = *(ulonglong *)(param_1 + 0x740);
  if ((uVar4 != 0) && (*(char *)(uVar4 + 0x1a8) != '\0')) {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x8f4);
    *(uint *)(param_1 + 0x8f4) = 1;
    uVar4 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 140eb70a0 FUN_140eb70a0 body=78 status=ok
// SIG undefined FUN_140eb70a0(void)

void FUN_140eb70a0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xdc);
    FUN_140eb0150(uVar1,param_1,param_2);
  }
  return;
}



// FUNCTION 140eb70f0 FUN_140eb70f0 body=96 status=ok
// SIG undefined FUN_140eb70f0(void)

void FUN_140eb70f0(void)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = ULevelStreaming::GetWorld();
  lVar3 = FUN_142f429c0(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_141484230();
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
      FUN_140c2b400(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140eb7150 thunk_FUN_140eb09a0 body=5 status=ok
// SIG undefined thunk_FUN_140eb09a0(void)

void thunk_FUN_140eb09a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lStackX_18;
  undefined1 auStackX_20 [8];
  undefined1 auStack_68 [8];
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  longlong *plStack_30;
  
  FText::FText(auStack_38);
  cVar6 = FUN_140eb26a0(param_1,auStack_38);
  if (cVar6 == '\0') {
    FWeakObjectPtr::operator=(auStack_48,0);
    uStack_40 = 0;
    uVar10 = FUN_140e971d0(param_1);
    FUN_1410f3960(uVar10,param_1 + 0xd9,auStack_38,auStack_48,0,0,0);
    cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x71c);
    if (cVar6 != '\0') {
      lVar9 = FWeakObjectPtr::Get((longlong)param_1 + 0x71c);
      FUN_140e58580(lVar9 + 0x26f0);
    }
  }
  else {
    lVar9 = *param_1;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar7 = (undefined8 *)FName::FName(auStackX_20,"Confirm",1);
    (**(code **)(lVar9 + 0x4e8))(param_1,*puVar7,&uStack_58);
    FWeakObjectPtr::operator=(auStack_68,0);
    lStack_60 = 0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnConfirmExtraction",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&lStackX_18,pwVar5 + 2,1);
    FWeakObjectPtr::operator=(auStack_68,param_1);
    lStack_60 = lStackX_18;
    if ((lStackX_18 != 0) && (lVar9 = FWeakObjectPtr::Get(auStack_68), lVar9 != 0)) {
      UObject::FindFunction(lVar9,lStack_60);
    }
    uVar10 = FUN_140e971d0(param_1);
    FUN_1410f47a0(uVar10,param_1 + 0xd9,param_1 + 0xd6,auStack_68,0,0,0,0,0);
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140eb7160 FUN_140eb7160 body=31 status=ok
// SIG undefined FUN_140eb7160(void)

void FUN_140eb7160(void)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ed36d0(0,&local_18,0);
  return;
}



// FUNCTION 140eb7180 FUN_140eb7180 body=293 status=ok
// SIG undefined FUN_140eb7180(void)

void FUN_140eb7180(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_142ec75f0();
  lVar1 = param_1 + -0x4d8;
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    uStack_70 = uStack_70 & 0xffff0000;
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77c18;
      puVar2[1] = lVar1;
      *(uint *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_140ea51f0;
    FUN_14204c280(local_68);
  }
  if (*(char *)(param_1 + 0x1a9) != '\0') {
    uStack_70 = CONCAT22(uStack_70._2_2_,1);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77c18;
      puVar2[1] = lVar1;
      *(uint *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_140ea51f0;
    FUN_14204c280(local_68);
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    uStack_70 = CONCAT22(uStack_70._2_2_,2);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77c18;
      puVar2[1] = lVar1;
      *(uint *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_140ea51f0;
    FUN_14204c280(local_68);
  }
  return;
}



// FUNCTION 140eb72b0 FUN_140eb72b0 body=242 status=ok
// SIG undefined FUN_140eb72b0(void)

void FUN_140eb72b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_140eb7180();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar2 != 0) {
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
      FUN_1407665e0(lVar2 + 0x1c50,param_1 + -0x4d8);
    }
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x260) + 0xe8,param_1 + -0x4d8);
    local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_28 = 0;
    local_18 = 0;
    FUN_1411f67c0(*(undefined8 *)(param_1 + 0x260),local_58);
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  FUN_140ee38f0(param_1 + 0x280);
  FUN_140eb7180(param_1);
  return;
}



// FUNCTION 140eb73b0 FUN_140eb73b0 body=295 status=ok
// SIG undefined FUN_140eb73b0(void)

void FUN_140eb73b0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_142ec85a0();
  lVar1 = param_1 + -0x4d8;
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    uStack_70 = CONCAT22(uStack_70._2_2_,0x100);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77c18;
      puVar2[1] = lVar1;
      *(undefined4 *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_140ea51f0;
    FUN_14204c280(local_68);
  }
  if (*(char *)(param_1 + 0x1a9) != '\0') {
    uStack_70 = CONCAT22(uStack_70._2_2_,0x101);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77c18;
      puVar2[1] = lVar1;
      *(undefined4 *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_140ea51f0;
    FUN_14204c280(local_68);
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    uStack_70 = CONCAT22(uStack_70._2_2_,0x102);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77c18;
      puVar2[1] = lVar1;
      *(undefined4 *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_140ea51f0;
    FUN_14204c280(local_68);
  }
  return;
}



// FUNCTION 140eb74e0 FUN_140eb74e0 body=97 status=ok
// SIG undefined FUN_140eb74e0(void)

void FUN_140eb74e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar2 != 0) {
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
      FUN_14145ff60(lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 140eb7550 FUN_140eb7550 body=366 status=ok
// SIG undefined FUN_140eb7550(void)

void FUN_140eb7550(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_128 [288];
  
  FUN_142ec8c70();
  LOCK();
  iVar2 = *(int *)(param_1 + 0x420);
  *(int *)(param_1 + 0x420) = 0;
  UNLOCK();
  if (iVar2 != 0) {
    FUN_140ebbdd0(param_1 + -0x4d8);
  }
  FUN_140f0dc50(param_1 + 0x280,param_2);
  LOCK();
  iVar2 = *(int *)(param_1 + 0x418);
  *(int *)(param_1 + 0x418) = 0;
  UNLOCK();
  if (iVar2 != 0) {
    FUN_140f0a4b0(param_1 + 0x280);
  }
  LOCK();
  iVar2 = *(int *)(param_1 + 0x41c);
  *(int *)(param_1 + 0x41c) = 0;
  UNLOCK();
  if (iVar2 != 0) {
    iVar2 = FUN_140ee6b70(param_1 + 0x280);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 600))) {
      iVar2 = FUN_140ee6b70(param_1 + 0x280);
      lVar3 = FUN_140e9a4f0(local_128,(longlong)iVar2 * 0x110 + *(longlong *)(param_1 + 0x250));
      plVar6 = *(longlong **)(param_1 + 0x268);
      cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0xdc);
      if (cVar1 == '\0') {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
        (**(code **)(*plVar6 + 0x20))(plVar6,1);
      }
      else {
        plVar4 = (longlong *)FWeakObjectPtr::Get(lVar3 + 0xdc);
        uVar5 = FUN_14301f8f0();
        uVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
        plVar4 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
        (**(code **)(*plVar4 + 0x18))(plVar4,0);
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
        (**(code **)(*plVar6 + 8))(plVar6,uVar5,0,0);
      }
      FUN_140e9c360(lVar3);
    }
  }
  return;
}



// FUNCTION 140eb76c0 FUN_140eb76c0 body=1000 status=ok
// SIG undefined FUN_140eb76c0(void)

void FUN_140eb76c0(longlong param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FUN_142ec8c70();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x244);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x244);
    FUN_140e5d420(lVar5 + 0x26f0,param_1 + 0x24c);
  }
  *(undefined4 *)(param_1 + 0x24c) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x250) = DAT_1468b5d88._4_4_;
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_1411fd940(*(longlong *)(param_1 + 0x2e8),param_2);
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1411fd940(*(longlong *)(param_1 + 0x310),param_2);
  }
  lVar5 = 0;
  if (*(char *)(param_1 + 0x26c) == '\0') goto LAB_140eb7824;
  *(undefined1 *)(param_1 + 0x26c) = 0;
  if (*(longlong *)(param_1 + 0x378) == 0) goto LAB_140eb7824;
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0x378) + 0x1b0);
  lVar8 = lVar5;
  if (*(int *)(param_1 + 0x268) == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2e8);
LAB_140eb77a2:
    if (lVar10 != 0) {
      iVar4 = *(int *)(lVar10 + 0x84);
      if (((-1 < iVar4) && (iVar4 < *(int *)(lVar10 + 0xf0))) &&
         (plVar6 = (longlong *)
                   FWeakObjectPtr::Get(*(longlong *)(lVar10 + 0xe8) + (longlong)iVar4 * 8),
         plVar6 != (longlong *)0x0)) {
        uVar7 = FUN_14301f8f0();
        lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      }
    }
  }
  else if (*(int *)(param_1 + 0x268) == 1) {
    lVar10 = *(longlong *)(param_1 + 0x310);
    goto LAB_140eb77a2;
  }
  (**(code **)(*plVar12 + 0x20))(plVar12,1);
  if (lVar8 != 0) {
    (**(code **)(*plVar12 + 8))(plVar12,lVar8,0,0);
    (**(code **)(*plVar12 + 0x18))(plVar12,0);
  }
LAB_140eb7824:
  fVar14 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = fVar14;
  lVar8 = *(longlong *)(param_1 + 0x2a0);
  uVar3 = 0;
  if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) && (fVar14 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    lVar10 = lVar5;
    if (lVar8 != 0) {
      lVar10 = *(longlong *)(lVar8 + 0x10);
    }
    FUN_1411fd550(lVar10,param_2);
  }
  lVar8 = param_1 + -0x4d8;
  if (((*(char *)(param_1 + 0x26d) != '\0') &&
      (lVar10 = *(longlong *)(param_1 + 0x2a0), lVar10 != 0)) &&
     ((*(longlong *)(lVar10 + 0x10) != 0 &&
      ((*(undefined1 *)(param_1 + 0x26d) = 0, lVar10 != 0 && (*(longlong *)(lVar10 + 0x10) != 0)))))
     ) {
    local_48 = 0;
    local_38 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = lVar8;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_78[0] = &LAB_140ea52c0;
    if (*(longlong *)(param_1 + 0x2a0) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x10);
    }
    FUN_1411f67c0(lVar5,local_78);
  }
  if ((*(char *)(param_1 + 0x26e) != '\0') && (*(longlong *)(param_1 + 0x370) != 0)) {
    *(undefined1 *)(param_1 + 0x26e) = 0;
    lVar5 = FUN_140e97290(lVar8);
    if (lVar5 != 0) {
      uVar7 = FUN_140e971d0(lVar8);
      lVar10 = FUN_140ee5e20(uVar7);
      if (lVar10 != 0) {
        uVar3 = FUN_142ff7c90(lVar10,*(undefined8 *)(lVar5 + 0xc08));
      }
      FUN_140f0abd0(*(undefined8 *)(param_1 + 0x370),*(undefined8 *)(lVar5 + 0xc08),uVar3,1);
    }
  }
  FUN_140ea61c0(lVar8);
  if (*(char *)(param_1 + 0x270) != '\0') {
    *(undefined1 *)(param_1 + 0x270) = 0;
    FUN_140ea4ad0(lVar8);
    FUN_140ebdb90(lVar8,1);
  }
  FUN_140ea6770(lVar8);
  if (*(char *)(param_1 + 0x273) != '\0') {
    *(undefined1 *)(param_1 + 0x273) = 0;
    cVar2 = FUN_140eb26a0(lVar8,0);
    if (cVar2 != *(char *)(param_1 + 0x274)) {
      *(char *)(param_1 + 0x274) = cVar2;
      plVar12 = *(longlong **)(param_1 + 0x2d8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar12[1];
        bVar13 = iVar4 == 0;
        if (bVar13) {
          *(int *)(plVar12 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar4 == (int)plVar12[1];
          if (bVar13) {
            *(int *)(plVar12 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar13) {
            if (plVar12 != (longlong *)0x0) {
              if (*(longlong *)(param_1 + 0x2d0) != 0) {
                pwVar11 = L"default";
                if (*(char *)(param_1 + 0x274) != '\0') {
                  pwVar11 = L"readyTrade";
                }
                FUN_14203e030(*(longlong *)(param_1 + 0x2d0),pwVar11);
              }
              LOCK();
              plVar6 = plVar12 + 1;
              lVar5 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
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
            break;
          }
          LOCK();
          iVar4 = (int)plVar12[1];
          bVar13 = iVar4 == 0;
          if (bVar13) {
            *(int *)(plVar12 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x275) != '\0') {
    *(undefined1 *)(param_1 + 0x275) = 0;
    if ((*(longlong *)(param_1 + 0x2c8) != 0) &&
       (plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + 0x1e8), plVar12 != (longlong *)0x0
       )) {
      (**(code **)(*plVar12 + 0x2b0))(plVar12,param_1 + 0x1c0,1,0);
    }
  }
  return;
}



// FUNCTION 140eb7ab0 FUN_140eb7ab0 body=234 status=ok
// SIG undefined FUN_140eb7ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eb7ab0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_140ea5230;
  FUN_14208c300(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140eb7bb0 FUN_140eb7bb0 body=495 status=ok
// SIG undefined FUN_140eb7bb0(void)

void FUN_140eb7bb0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  plVar4 = (longlong *)(param_1 + 200);
  uVar5 = 0;
  plVar3 = (longlong *)*plVar4;
  uVar7 = (ulonglong)*(int *)(param_1 + 0xd0);
  plVar2 = plVar3 + uVar7 * 3;
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 != 0) {
        FUN_14260b180();
      }
      *plVar3 = 0;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0xd0);
  }
  if ((int)uVar7 != 0) {
    plVar2 = (longlong *)(*plVar4 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar4,0);
  }
  plVar2 = *(longlong **)(param_1 + 0xd8);
  plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0xe0) * 5;
  for (; plVar2 != plVar4; plVar2 = plVar2 + 5) {
    if (*(char *)((longlong)plVar2 + 0x1c) == '\x01') {
      plVar3 = *(longlong **)(param_1 + 0x168);
      uVar7 = (longlong)*(int *)(param_1 + 0x170) & 0x1fffffffffffffff;
      if (plVar3 + *(int *)(param_1 + 0x170) < plVar3) {
        uVar7 = uVar5;
      }
      uVar8 = uVar5;
      if (uVar7 != 0) {
        do {
          if (*plVar3 != 0) {
            FUN_140ea5a50(*plVar3,plVar2 + 2);
          }
          plVar3 = plVar3 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
    }
    else if ((*(char *)((longlong)plVar2 + 0x1c) == '\x02') &&
            (lVar1 = FUN_140eae840(param_1), lVar1 != 0)) {
      if (*plVar2 == 0) {
        FUN_142d9dd60(lVar1,0,0,1);
      }
      else {
        FUN_142d9dd60(lVar1,*(undefined8 *)(*plVar2 + 0x80),0,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xd8,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x168);
  uVar7 = (longlong)*(int *)(param_1 + 0x170) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x170) < plVar4) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      if (*plVar4 != 0) {
        FUN_140ea5a50(*plVar4,param_1 + 0xf0);
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  return;
}



// FUNCTION 140eb7da0 FUN_140eb7da0 body=1753 status=ok
// SIG undefined FUN_140eb7da0(void)

void FUN_140eb7da0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  code *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  code *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  code *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  
  FUN_142dd3e10(param_1,&DAT_146871b18);
  iVar5 = FUN_14233f450(param_1);
  pwVar13 = (wchar_t *)0x0;
  if ((iVar5 == 3) && (FUN_140eb2f20(param_1 + 0x4e0), *(char *)(param_1 + 0x4a9) != '\0')) {
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    FUN_142dd9a90(param_1,&local_128);
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    FUN_140ebec70(param_1);
  }
  if ((*(char *)(param_1 + 0x450) != '\0') && (iVar5 = FUN_14233f450(param_1), iVar5 == 3)) {
    if (*(char *)(param_1 + 0x460) != '\x02') {
      *(undefined1 *)(param_1 + 0x460) = 2;
      if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x458) + 0x260))();
      }
      lVar6 = *(longlong *)(param_1 + 0x120);
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      iVar5 = FUN_1428cf800(lVar6);
      if (iVar5 != 1) {
        if (*(char *)(param_1 + 0x678) == '\x02') {
          *(undefined4 *)(param_1 + 0x690) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x688) = 0xbf800000;
        }
        *(undefined1 *)(param_1 + 0x678) = *(undefined1 *)(param_1 + 0x460);
        FUN_140e7ae90(param_1);
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x118);
    if ((lVar6 != 0) && (lVar7 = FUN_140eae6d0(param_1,lVar6), lVar7 != 0)) {
      uVar8 = UUserObjectListEntry::GetPrivateStaticClass();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar8);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_c8);
        cVar4 = FUN_142d52a00(&local_c8);
        if (cVar4 != '\0') {
          uVar8 = FUN_142d52a20(&local_c8);
          lVar6 = FArchive::operator<<(uVar8);
          lVar6 = FUN_142d62990(lVar7,*(undefined8 *)(*(longlong *)(lVar6 + 8) + 0x30));
          if (lVar6 != 0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakStatusEffectManagerComponent::OnShieldNowFull",L"::");
            pwVar3 = pwVar13;
            while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_res10,pwVar3 + 2,1);
            TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x28,param_1,local_res10);
            pwVar10 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakStatusEffectManagerComponent::OnShieldNowNotFull",L"::");
            pwVar3 = pwVar13;
            while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_res18,pwVar3 + 2,1);
            TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x38,param_1,local_res18);
            pwVar10 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakStatusEffectManagerComponent::OnShieldNowDepleted",L"::");
            pwVar3 = pwVar13;
            while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_res20,pwVar3 + 2,1);
            TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 8,param_1,local_res20);
            pwVar10 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakStatusEffectManagerComponent::OnShieldNowNotDepleted",L"::")
            ;
            pwVar3 = pwVar13;
            while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_138,pwVar3 + 2,1);
            TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x18,param_1,local_138);
          }
        }
      }
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar6 = DAT_146b33f38;
      lVar12 = DAT_146b33f38 + 0x60;
      lVar11 = FWeakObjectPtr::Get(lVar12);
      if (lVar11 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if (DAT_1464b56f4 == *(int *)(lVar6 + 0x68)) {
          return;
        }
        if (*(longlong *)(lVar6 + 0x70) == 0) {
          return;
        }
        lVar11 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar12,lVar11);
        if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar6 + 0x68) = DAT_1464b56f4;
        }
        lVar11 = FWeakObjectPtr::Get(lVar12);
        if (lVar11 == 0) {
          return;
        }
      }
      lVar6 = FUN_142e778a0();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar6 = *(longlong *)(lVar11 + 0x30);
        lVar11 = (longlong)*(int *)(lVar11 + 0x38) * 0x40 + lVar6;
        for (; lVar6 != lVar11; lVar6 = lVar6 + 0x40) {
          if (((*(longlong *)(lVar6 + 8) != 0) &&
              (*(longlong *)(*(longlong *)(lVar6 + 8) + 0x30) != 0)) &&
             (lVar12 = FUN_142d62990(lVar7), lVar12 != 0)) {
            local_138 = FUN_140eb9620;
            uStack_130 = 0;
            lStack_80 = (ulonglong)uStack_12c << 0x20;
            local_88 = FUN_140eb9620;
            pwVar10 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakStatusEffectManagerComponent::OnResourceNowNotFilled",L"::")
            ;
            pwVar3 = pwVar13;
            while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_e8,pwVar3 + 2,1);
            FUN_1407260e0(lVar12 + 0x38,param_1,&local_88,local_e8);
            uStack_a0 = 0;
            local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
            lStack_70 = (ulonglong)uStack_9c << 0x20;
            local_78 = AK::MemoryMgr::StartProfileThreadUsage;
            pwVar10 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakStatusEffectManagerComponent::OnResourceNowFilled",L"::");
            pwVar3 = pwVar13;
            while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_e0,pwVar3 + 2,1);
            FUN_1407260e0(lVar12 + 0x28,param_1,&local_78,local_e0);
            uStack_90 = 0;
            local_98 = FUN_140eb92a0;
            lStack_60 = (ulonglong)uStack_8c << 0x20;
            local_68 = FUN_140eb92a0;
            pwVar10 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakStatusEffectManagerComponent::OnResourceNowDepleted",L"::");
            pwVar3 = pwVar13;
            while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_d8,pwVar3 + 2,1);
            FUN_1407260e0(lVar12 + 8,param_1,&local_68,local_d8);
            uStack_c0 = 0;
            local_c8 = FUN_140eb9340;
            lStack_50 = (ulonglong)uStack_bc << 0x20;
            local_58 = FUN_140eb9340;
            pwVar10 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakStatusEffectManagerComponent::OnResourceNowNotDepleted",
                                 L"::");
            pwVar3 = pwVar13;
            while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_d0,pwVar3 + 2,1);
            FUN_1407260e0(lVar12 + 0x18,param_1,&local_58,local_d0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140eb8480 FUN_140eb8480 body=47 status=ok
// SIG undefined FUN_140eb8480(void)

void FUN_140eb8480(longlong param_1)

{
  int iVar1;
  
  FUN_142ddf630(param_1,&DAT_146871b18);
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    *(undefined1 *)(param_1 + 0x668) = 0;
  }
  return;
}



// FUNCTION 140eb84c0 FUN_140eb84c0 body=1672 status=ok
// SIG undefined FUN_140eb84c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140eb84c0(longlong param_1,longlong *param_2)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  undefined1 auStack_128 [32];
  float local_108;
  undefined8 local_f8;
  float local_f0;
  longlong local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  ulonglong local_70;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_e8 = param_2[0xb];
  lVar10 = 0;
  lVar9 = param_2[0x56];
  if (lVar9 == 0) {
LAB_140eb854c:
    lVar9 = lVar10;
  }
  else {
    lVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140eb854c;
  }
  lVar5 = param_2[9];
  cVar3 = FUN_140ea52e0(param_1);
  if (cVar3 != '\0') {
    lVar12 = *(longlong *)(param_1 + 0x4c0);
    lVar15 = (longlong)*(int *)(param_1 + 0x4c8) * 0xf0 + lVar12;
    for (; lVar13 = lVar10, lVar12 != lVar15; lVar12 = lVar12 + 0xf0) {
      lVar14 = lVar10;
      if (*(longlong *)(lVar12 + 0x18) != 0) {
        lVar6 = FUN_142e49950();
        for (lVar13 = *(longlong *)(lVar12 + 0x18); lVar13 != 0;
            lVar13 = *(longlong *)(lVar13 + 0x30)) {
          if (lVar13 == lVar6) {
            lVar14 = *(longlong *)(lVar12 + 0x18);
            break;
          }
        }
      }
      lVar6 = lVar10;
      if (local_e8 != 0) {
        lVar7 = FUN_142e49950();
        for (lVar13 = local_e8; (lVar6 = lVar10, lVar13 != 0 && (lVar6 = local_e8, lVar13 != lVar7))
            ; lVar13 = *(longlong *)(lVar13 + 0x30)) {
        }
      }
      lVar13 = lVar12;
      if (lVar14 == lVar6) break;
    }
    if ((((lVar9 != 0) && (lVar13 != 0)) && (cVar3 = FUN_142d52a00(lVar13 + 0x40), cVar3 != '\0'))
       && ((cVar3 = FUN_1407c3030(lVar13 + 0x58), cVar3 == '\0' &&
           (fVar16 = (float)FUN_142d1b990(lVar9), 0.0 < fVar16)))) {
      fVar17 = (float)(**(code **)(*param_2 + 0x18))(param_2,0);
      lVar12 = param_2[8];
      if (lVar12 == 0) {
LAB_140eb86d2:
        lVar12 = lVar10;
      }
      else {
        lVar15 = UEnvQueryTest_Cover::StaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140eb86d2;
      }
      if (*(char *)((longlong)param_2 + 0x50c) == '\0') {
        if ((lVar12 == 0) ||
           (lVar10 = FUN_140a8bb50(lVar12,local_88), *(char *)(lVar10 + 4) == '\0')) {
          fVar36 = fVar17 * *(float *)(lVar13 + 0x30);
        }
        else if (*(char *)(lVar12 + 0x1d0) == '\0') {
          pfVar11 = (float *)FUN_140a8bb50(lVar12,local_78);
          fVar36 = *pfVar11;
        }
        else {
          pfVar11 = (float *)FUN_140a8bb50(lVar12,local_80);
          fVar36 = fVar17 * *pfVar11;
        }
      }
      else {
        fVar36 = *(float *)(param_2 + 0xa1);
        if ((char)param_2[0xa2] != '\0') {
          fVar36 = fVar17 * fVar36;
        }
      }
      fVar17 = fVar36 * *(float *)(param_2 + 0xa4) * *(float *)(lVar9 + 0x708);
      if (param_2[0x55] != 0) {
        fVar17 = fVar17 * *(float *)(param_2[0x55] + 0x25c);
      }
      uVar8 = FUN_142d19800(param_2);
      local_108 = fVar17 / fVar16;
      FUN_140e9fc80(param_1,lVar5,uVar8,local_e8);
    }
  }
  if (*(char *)(param_1 + 0x450) == '\0') {
    return;
  }
  if (*(float *)((longlong)param_2 + 0x1dc) <= 0.0) {
    return;
  }
  if (*(char *)(param_1 + 0x460) == '\x02') {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_1);
  }
  if (*(float *)(lVar9 + 0x790) < *(float *)(param_1 + 0x470)) {
    return;
  }
  local_d8 = *(float *)(param_2 + 0x23);
  lVar9 = param_2[0x22];
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar10 == 0) {
    pfVar11 = (float *)&DAT_1468b5b70;
  }
  else {
    pfVar11 = (float *)(lVar10 + 0x210);
  }
  local_98 = *(undefined1 (*) [16])(pfVar11 + 8);
  fVar16 = local_98._0_4_;
  fVar17 = local_98._4_4_;
  fVar36 = local_98._8_4_;
  fVar1 = local_98._12_4_;
  local_a8 = pfVar11[4];
  fStack_a4 = pfVar11[5];
  fStack_a0 = pfVar11[6];
  fStack_9c = pfVar11[7];
  local_b8 = *pfVar11;
  fStack_b4 = pfVar11[1];
  fStack_b0 = pfVar11[2];
  fStack_ac = pfVar11[3];
  local_e0._4_4_ = (float)((ulonglong)lVar9 >> 0x20);
  local_e0._0_4_ = (float)lVar9;
  fVar32 = local_b8 * _DAT_1468717f0;
  fVar33 = fStack_b4 * fRam00000001468717f4;
  fVar34 = fStack_b0 * fRam00000001468717f8;
  fVar35 = fStack_ac * fRam00000001468717fc;
  fVar28 = (float)((uint)((float)local_e0 - local_a8) & _DAT_1468716f0);
  fVar29 = (float)((uint)(local_e0._4_4_ - fStack_a4) & uRam00000001468716f4);
  fVar30 = (float)((uint)(local_d8 - fStack_a0) & uRam00000001468716f8);
  fVar31 = (float)((uint)(0.0 - fStack_9c) & uRam00000001468716fc);
  fVar18 = fVar30 * fVar33 - fVar29 * fVar34;
  fVar22 = fVar28 * fVar34 - fVar30 * fVar32;
  fVar24 = fVar29 * fVar32 - fVar28 * fVar33;
  fVar26 = fVar31 * fVar35 - fVar31 * fVar35;
  fVar18 = fVar18 + fVar18;
  fVar22 = fVar22 + fVar22;
  fVar24 = fVar24 + fVar24;
  fVar26 = fVar26 + fVar26;
  auVar20._0_4_ = fVar22 * fVar34;
  auVar20._4_4_ = fVar24 * fVar32;
  auVar20._8_4_ = fVar18 * fVar33;
  auVar20._12_4_ = fVar26 * fVar35;
  auVar21 = rcpps(auVar20,local_98);
  fVar19 = auVar21._0_4_;
  fVar23 = auVar21._4_4_;
  fVar25 = auVar21._8_4_;
  fVar27 = auVar21._12_4_;
  fVar19 = (fVar19 + fVar19) - fVar16 * fVar19 * fVar19;
  fVar23 = (fVar23 + fVar23) - fVar17 * fVar23 * fVar23;
  fVar25 = (fVar25 + fVar25) - fVar36 * fVar25 * fVar25;
  fVar27 = (fVar27 + fVar27) - fVar1 * fVar27 * fVar27;
  fVar19 = (fVar19 + fVar19) - fVar16 * fVar19 * fVar19;
  fVar23 = (fVar23 + fVar23) - fVar17 * fVar23 * fVar23;
  fVar25 = (fVar25 + fVar25) - fVar36 * fVar25 * fVar25;
  fVar27 = (fVar27 + fVar27) - fVar1 * fVar27 * fVar27;
  local_c8 = (float)((uint)fVar19 &
                     -(uint)((float)((uint)fVar16 & _DAT_146871770) <= _DAT_1468717e0) ^
                    (uint)fVar19) * ((fVar24 * fVar33 - auVar20._0_4_) + fVar18 * fVar35 + fVar28);
  fStack_c4 = (float)((uint)fVar23 &
                      -(uint)((float)((uint)fVar17 & uRam0000000146871774) <= fRam00000001468717e4)
                     ^ (uint)fVar23) *
              ((fVar18 * fVar34 - auVar20._4_4_) + fVar22 * fVar35 + fVar29);
  local_f0 = (float)((uint)fVar25 &
                     -(uint)((float)((uint)fVar36 & uRam0000000146871778) <= fRam00000001468717e8) ^
                    (uint)fVar25) * ((fVar22 * fVar32 - auVar20._8_4_) + fVar24 * fVar35 + fVar30);
  fStack_bc = (float)((uint)fVar27 &
                      -(uint)((float)((uint)fVar1 & uRam000000014687177c) <= fRam00000001468717ec) ^
                     (uint)fVar27) * ((fVar26 * fVar35 - auVar20._12_4_) + fVar26 * fVar35 + fVar31)
  ;
  local_f8 = CONCAT44(fStack_c4,local_c8);
  if (((local_c8 == *(float *)(param_1 + 0x464)) && (fStack_c4 == *(float *)(param_1 + 0x468))) &&
     (local_f0 == *(float *)(param_1 + 0x46c))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_e0 = lVar9;
  fStack_c0 = local_f0;
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x464) = local_f8;
    *(float *)(param_1 + 0x46c) = local_f0;
    if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x458) + 0x260))();
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_1);
  }
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(lVar9 + 0x790);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar9 = DAT_146b33f38;
  lVar5 = DAT_146b33f38 + 0x30;
  lVar10 = FWeakObjectPtr::Get(lVar5);
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar9 + 0x38)) ||
       (local_f8 = 0, *(longlong *)(lVar9 + 0x40) == 0)) goto LAB_140eb8ad1;
    lVar10 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar10);
    if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar9 + 0x38) = DAT_1464b56f4;
    }
    lVar10 = FWeakObjectPtr::Get(lVar5);
    if (lVar10 == 0) goto LAB_140eb8ad1;
  }
  lVar9 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar9 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(float *)(param_1 + 0x470) = *(float *)(lVar10 + 0x72c) + *(float *)(param_1 + 0x470);
    }
  }
LAB_140eb8ad1:
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_1);
  }
  iVar4 = FUN_1428cf800(lVar9);
  if (iVar4 != 1) {
    FUN_140eb0ec0(param_1 + 0x670,param_1 + 0x464);
    FUN_140e7ae90(param_1);
  }
  return;
}



// FUNCTION 140eb8b50 FUN_140eb8b50 body=12 status=ok
// SIG undefined FUN_140eb8b50(void)

void FUN_140eb8b50(longlong param_1)

{
  FUN_140eb2f20(param_1 + 0x4e0);
  return;
}



// FUNCTION 140eb8b60 FUN_140eb8b60 body=479 status=ok
// SIG undefined FUN_140eb8b60(void)

void FUN_140eb8b60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [272];
  
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar3 == 0) {
LAB_140eb8bc7:
    lVar3 = 0;
  }
  else {
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
    if (!bVar1) goto LAB_140eb8bc7;
  }
  lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x594);
  if (lVar4 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140eb8c11;
  }
  lVar4 = 0;
LAB_140eb8c11:
  lVar4 = (**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))();
  if ((lVar3 != 0) && (lVar4 != 0)) {
    FUN_14145d5a0(lVar3);
    FUN_1411e38c0(local_118,param_3,lVar4);
    iVar2 = FUN_140ee6b70(param_1 + 0xeb);
    FUN_140e9cc60((longlong)iVar2 * 0x110 + param_1[0xe5],local_118);
    (**(code **)(*(longlong *)param_1[0xea] + 0x330))((longlong *)param_1[0xea],local_118);
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x8f4) = 1;
    UNLOCK();
    FUN_140ec7420(param_1,0);
    FUN_140e9c360(local_118);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146871e38) {
    _Init_thread_header(&DAT_146871e38);
    if (DAT_146871e38 == -1) {
      FName::FName(&DAT_146871e30,&DAT_1445cb9f0,1);
      _Init_thread_footer(&DAT_146871e38);
    }
  }
  local_128 = 0;
  local_120 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146871e30,&local_128);
  return;
}



// FUNCTION 140eb8d40 FUN_140eb8d40 body=100 status=ok
// SIG undefined FUN_140eb8d40(void)

void FUN_140eb8d40(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(undefined1 *)(param_1 + 0x478) = 0;
    *(undefined1 *)(param_2 + 0x200) = 0;
    if (*(longlong *)(param_1 + 0x470) != 0) {
      FUN_142398ec0(*(longlong *)(param_1 + 0x470),0,1);
    }
    *(undefined1 *)(param_1 + 0x47c) = 0;
    FUN_1414d6780(param_1);
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_1414d62d0(*(longlong *)(param_1 + 0x458),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140eb8db0 FUN_140eb8db0 body=99 status=ok
// SIG undefined FUN_140eb8db0(void)

void FUN_140eb8db0(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if (*(longlong *)(param_1 + 0x460) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x460) + 0x200) = 0;
      *(undefined1 *)(param_1 + 0x47c) = 1;
      *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x1fc);
    }
    FUN_1414d67c0();
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_1414d6310(*(longlong *)(param_1 + 0x458),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140eb8e20 FUN_140eb8e20 body=27 status=ok
// SIG undefined FUN_140eb8e20(void)

void FUN_140eb8e20(undefined8 param_1)

{
  FUN_142343b00();
  FUN_140ec9050(param_1);
  return;
}



// FUNCTION 140eb8e40 FUN_140eb8e40 body=537 status=ok
// SIG undefined FUN_140eb8e40(void)

void FUN_140eb8e40(longlong *param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((char)param_1[0x25] == '\x03') {
    return;
  }
  lVar3 = param_1[0x8c];
  if (lVar3 == 0) {
    return;
  }
  cVar2 = *(char *)((longlong)param_1 + 0x47c);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x8f) = 0;
    *(undefined1 *)(lVar3 + 0x200) = 0;
    lVar3 = param_1[0x8e];
    if (lVar3 == 0) goto LAB_140eb9021;
    uVar4 = 0;
  }
  else {
    if (cVar2 == '\x01') {
      *(undefined1 *)(param_1 + 0x8f) = 1;
      FUN_140ec37c0(lVar3,*(float *)((longlong)param_1 + 0x484) / *(float *)(lVar3 + 0x1f0));
      *(undefined1 *)(param_1[0x8c] + 0x200) = 0;
    }
    else if (cVar2 == '\x02') {
      *(undefined1 *)(param_1 + 0x8f) = 1;
      fVar6 = *(float *)((longlong)param_1 + 0x484) / *(float *)(lVar3 + 0x1f0);
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar3 + 0x148) != 0) {
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        fVar1 = *(float *)(param_1[0x8c] + 0x1f0);
        fVar5 = (float)(**(code **)(**(longlong **)(lVar3 + 0x148) + 0x6f0))();
        fVar6 = fVar6 + ((fVar5 - *(float *)(param_1 + 0x91)) * *(float *)(param_1 + 0x90)) / fVar1;
        if (0.0 <= fVar6) {
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
        }
        else {
          fVar6 = 0.0;
        }
      }
      FUN_140ec37c0(param_1[0x8c],fVar6);
      *(int *)(param_1[0x8c] + 0x1c0) = (int)param_1[0x90];
      *(int *)(param_1[0x8c] + 0x1cc) = (int)param_1[0x90];
      lVar3 = param_1[0x8c];
      if (*(char *)(lVar3 + 0x202) != '\0') {
        *(undefined1 *)(lVar3 + 0x201) = 0;
      }
      *(undefined1 *)(lVar3 + 0x202) = 0;
      if (*(longlong *)(param_1[0x8c] + 0x1e8) != 0) {
        *(undefined1 *)(param_1[0x8c] + 0x200) = 1;
      }
    }
    else {
      if (cVar2 != '\x03') goto LAB_140eb9021;
      *(undefined1 *)(param_1 + 0x8f) = 1;
    }
    lVar3 = param_1[0x8e];
    if (lVar3 == 0) goto LAB_140eb9021;
    uVar4 = 1;
  }
  FUN_142398ec0(lVar3,uVar4,1);
LAB_140eb9021:
  if (0.0 <= *(float *)((longlong)param_1 + 0x48c)) {
    FUN_140ec37c0(param_1[0x8c],
                  *(float *)((longlong)param_1 + 0x48c) / *(float *)(param_1[0x8c] + 0x1f0));
    *(undefined4 *)((longlong)param_1 + 0x48c) = 0xbf800000;
  }
  return;
}



// FUNCTION 140eb9060 FUN_140eb9060 body=126 status=ok
// SIG undefined FUN_140eb9060(void)

void FUN_140eb9060(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar1 = *(byte *)(param_1 + 0x3ac) >> 4;
  bVar3 = *(byte *)(param_1 + 0x3ac) & 0xf;
  if (*(byte *)(param_1 + 0x3af) != bVar1) {
    *(byte *)(param_1 + 0x3af) = bVar1;
    TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x310);
  }
  bVar1 = *(byte *)(param_1 + 0x3ae);
  if (bVar1 == bVar3) {
    return;
  }
  if (bVar3 == 2) {
    if (bVar1 != 0) goto LAB_140eb90c7;
    uVar2 = 1;
  }
  else {
    if ((bVar3 != 0) || (1 < (byte)(bVar1 - 1))) goto LAB_140eb90c7;
    uVar2 = 3;
  }
  FUN_140ea5c70(param_1,uVar2);
LAB_140eb90c7:
  FUN_140ea5c70(param_1,bVar3);
  return;
}



// FUNCTION 140eb90e0 FUN_140eb90e0 body=36 status=ok
// SIG undefined FUN_140eb90e0(void)

void FUN_140eb90e0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x358))(param_1,1);
  *(undefined4 *)(param_1 + 0x43) = 0;
  return;
}



// FUNCTION 140eb9110 FUN_140eb9110 body=305 status=ok
// SIG undefined FUN_140eb9110(void)

void FUN_140eb9110(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  bVar2 = false;
  if ((((*(float *)(param_1 + 0x464) != 0.0) || (*(float *)(param_1 + 0x468) != 0.0)) ||
      (*(float *)(param_1 + 0x46c) != 0.0)) &&
     (((*(float *)(param_1 + 0x464) != *(float *)(param_2 + 0xc) ||
       (*(float *)(param_2 + 0x10) != *(float *)(param_1 + 0x468))) ||
      (*(float *)(param_2 + 0x14) != *(float *)(param_1 + 0x46c))))) {
    *(undefined8 *)(param_1 + 0x67c) = *(undefined8 *)(param_1 + 0x464);
    *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_1 + 0x46c);
    if (*(char *)(param_1 + 0x678) != '\x02') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x670) + 0x148))();
      *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(lVar3 + 0x790);
      if (*(char *)(param_1 + 0x678) == '\x02') {
        *(undefined4 *)(param_1 + 0x690) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x688) = 0xbf800000;
      }
      *(undefined1 *)(param_1 + 0x678) = 1;
    }
    bVar2 = true;
  }
  cVar1 = *(char *)(param_1 + 0x460);
  if (cVar1 != *(char *)(param_2 + 8)) {
    if (cVar1 == '\x02') {
      *(undefined8 *)(param_1 + 0x67c) = *(undefined8 *)(param_1 + 0x464);
      *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_1 + 0x46c);
    }
    if (*(char *)(param_1 + 0x678) == '\x02') {
      *(undefined4 *)(param_1 + 0x690) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x688) = 0xbf800000;
    }
    *(char *)(param_1 + 0x678) = cVar1;
    if (*(char *)(param_1 + 0x460) != '\0') goto LAB_140eb922e;
  }
  if (!bVar2) {
    return;
  }
LAB_140eb922e:
  FUN_140e7ae90(param_1);
  return;
}



// FUNCTION 140eb92a0 FUN_140eb92a0 body=154 status=ok
// SIG undefined FUN_140eb92a0(void)

void FUN_140eb92a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 0x4c0);
  pcVar3 = pcVar2 + (longlong)*(int *)(param_1 + 0x4c8) * 0xf0;
  while( true ) {
    if (pcVar2 == pcVar3) {
      return;
    }
    cVar1 = FUN_142d529c0(param_2,pcVar2 + 0x40);
    if (cVar1 != '\0') break;
    pcVar2 = pcVar2 + 0xf0;
  }
  if (pcVar2 == (char *)0x0) {
    return;
  }
  if (*pcVar2 == '\0') {
    FUN_140eaa0c0(param_1,0,0);
  }
  FUN_142dafbc0(pcVar2 + 0x58,&DAT_146871b20);
  return;
}



// FUNCTION 140eb9340 FUN_140eb9340 body=734 status=ok
// SIG undefined FUN_140eb9340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eb9340(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  pcVar7 = *(char **)(param_1 + 0x4c0);
  pcVar6 = pcVar7 + (longlong)*(int *)(param_1 + 0x4c8) * 0xf0;
  while( true ) {
    if (pcVar7 == pcVar6) {
      return;
    }
    cVar2 = FUN_142d529c0(param_2,pcVar7 + 0x40);
    if (cVar2 != '\0') break;
    pcVar7 = pcVar7 + 0xf0;
  }
  if (pcVar7 == (char *)0x0) {
    return;
  }
  if (*pcVar7 == '\0') {
    if (((*(char *)(param_1 + 0x3af) != '\x01') && ((byte)(*(char *)(param_1 + 0x3ae) - 1U) < 2)) &&
       (cVar2 = FUN_142dd3210(param_1,&DAT_146871b18), cVar2 == '\0')) {
      FUN_140ec3890(param_1);
    }
    uVar3 = FUN_142d52a20(param_2);
    lVar4 = FArchive::operator<<(uVar3);
    uVar1 = *(undefined4 *)(lVar4 + 0x20);
    uVar3 = FUN_142d52a20(param_2);
    uVar3 = FArchive::operator<<(uVar3);
    FUN_142d6f560(uVar3,uVar1,1);
  }
  if (*(longlong *)(pcVar7 + 0x10) == 0) {
    FUN_142dbb5d0(pcVar7 + 0x58,&DAT_146871b20);
    return;
  }
  local_e8 = *(undefined8 *)(param_1 + 0x118);
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_d8 = (code *)local_e8;
  fVar9 = (float)FUN_142ca2f00(*(longlong *)(pcVar7 + 0x10),&local_d8,0);
  lVar4 = DAT_146871b20;
  if (fVar9 <= 0.0) {
    FUN_142dbb5d0(pcVar7 + 0x58,&DAT_146871b20);
    return;
  }
  cVar2 = *pcVar7;
  local_d8 = FUN_140ec6cb0;
  local_e8 = 0;
  uStack_d0 = 0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x40,0);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_1445ee748;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_d8;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_d8._4_4_;
    *(undefined4 *)(plVar5 + 3) = uStack_d0;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_cc;
    *(char *)(plVar5 + 4) = cVar2;
    plVar5[5] = lVar4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar5[6] = lVar4;
    *plVar5 = (longlong)&PTR_FUN_1445ee790;
  }
  uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
  local_c8 = 0;
  local_c0 = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_c8);
  }
  FWeakObjectPtr::operator=(local_b8,0);
  local_f0 = 0xbf800000;
  local_f8 = 0;
  local_b0 = 0;
  local_78 = (longlong *)0x0;
  local_68 = 0;
  local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar3,&local_e8,&local_c8,fVar9);
  if (local_68 != 0) {
    plVar8 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar8 = local_78;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar5 + 0x28))(plVar5,0);
  lVar4 = FMemory::Realloc(plVar5,0,0);
  if (lVar4 == 0) {
    return;
  }
  FMemory::Free(lVar4);
  return;
}



// FUNCTION 140eb9620 FUN_140eb9620 body=128 status=ok
// SIG undefined FUN_140eb9620(void)

void FUN_140eb9620(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x4c0);
  lVar3 = (longlong)*(int *)(param_1 + 0x4c8) * 0xf0 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return;
    }
    cVar1 = FUN_142d529c0(lVar2 + 0x40,param_2);
    if (cVar1 != '\0') break;
    lVar2 = lVar2 + 0xf0;
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_140e7ae90(param_1);
  return;
}



// FUNCTION 140eb96a0 FUN_140eb96a0 body=160 status=ok
// SIG undefined FUN_140eb96a0(void)

undefined4 FUN_140eb96a0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_140ee71c0(param_1 + 0x758);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x378))(plVar2);
    lVar3 = FUN_140e97230(param_1);
    lVar3 = (**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x18))();
    if ((lVar3 != 0) &&
       (lVar4 = (**(code **)(*plVar2 + 0x340))(plVar2), *(int *)(lVar4 + 0xd8) != -1)) {
      lVar4 = (**(code **)(*plVar2 + 0x340))(plVar2);
      FUN_143015ae0(lVar3,lVar4 + 0xd8,0,1);
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x8f4);
  *(undefined4 *)(param_1 + 0x8f4) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140eb9740 FUN_140eb9740 body=149 status=ok
// SIG undefined FUN_140eb9740(void)

void FUN_140eb9740(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x450) != '\0') && (*(char *)(param_1 + 0x460) != '\x02')) {
    *(undefined1 *)(param_1 + 0x460) = 2;
    if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x458) + 0x260))();
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    iVar1 = FUN_1428cf800(lVar2);
    if (iVar1 != 1) {
      if (*(char *)(param_1 + 0x678) == '\x02') {
        *(undefined4 *)(param_1 + 0x690) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x688) = 0xbf800000;
      }
      *(undefined1 *)(param_1 + 0x678) = *(undefined1 *)(param_1 + 0x460);
      FUN_140e7ae90(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140eb97e0 FUN_140eb97e0 body=271 status=ok
// SIG undefined FUN_140eb97e0(void)

void FUN_140eb97e0(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x450) != '\0') && (*(char *)(param_1 + 0x460) != '\0')) {
    *(undefined1 *)(param_1 + 0x460) = 0;
    if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x458) + 0x260))();
    }
    fVar1 = DAT_1468b5d98;
    if (((DAT_1468b5d90 != *(float *)(param_1 + 0x464)) ||
        (DAT_1468b5d94 != *(float *)(param_1 + 0x468))) ||
       (DAT_1468b5d98 != *(float *)(param_1 + 0x46c))) {
      *(ulonglong *)(param_1 + 0x464) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *(float *)(param_1 + 0x46c) = fVar1;
      if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x458) + 0x260))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    iVar2 = FUN_1428cf800(lVar3);
    if (iVar2 != 1) {
      if (*(char *)(param_1 + 0x678) == '\x02') {
        *(undefined4 *)(param_1 + 0x690) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x688) = 0xbf800000;
      }
      *(undefined1 *)(param_1 + 0x678) = *(undefined1 *)(param_1 + 0x460);
      FUN_140e7ae90(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140eb98f0 FUN_140eb98f0 body=162 status=ok
// SIG undefined FUN_140eb98f0(void)

void FUN_140eb98f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x450) != '\0') && (*(char *)(param_1 + 0x460) == '\x02')) {
    if (*(char *)(param_1 + 0x460) != '\x01') {
      *(undefined1 *)(param_1 + 0x460) = 1;
      if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x458) + 0x260))();
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    iVar1 = FUN_1428cf800(lVar2);
    if (iVar1 != 1) {
      if (*(char *)(param_1 + 0x678) == '\x02') {
        *(undefined4 *)(param_1 + 0x690) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x688) = 0xbf800000;
      }
      *(undefined1 *)(param_1 + 0x678) = *(undefined1 *)(param_1 + 0x460);
      FUN_140e7ae90(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140eb99a0 FUN_140eb99a0 body=162 status=ok
// SIG undefined FUN_140eb99a0(void)

void FUN_140eb99a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x450) != '\0') && (*(char *)(param_1 + 0x460) == '\0')) {
    if (*(char *)(param_1 + 0x460) != '\x01') {
      *(undefined1 *)(param_1 + 0x460) = 1;
      if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x458) + 0x260))();
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    iVar1 = FUN_1428cf800(lVar2);
    if (iVar1 != 1) {
      if (*(char *)(param_1 + 0x678) == '\x02') {
        *(undefined4 *)(param_1 + 0x690) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x688) = 0xbf800000;
      }
      *(undefined1 *)(param_1 + 0x678) = *(undefined1 *)(param_1 + 0x460);
      FUN_140e7ae90(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140eb9a50 FUN_140eb9a50 body=3437 status=ok
// SIG undefined FUN_140eb9a50(void)

void FUN_140eb9a50(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  longlong local_res18;
  longlong local_res20;
  ulonglong in_stack_fffffffffffffd68;
  longlong **pplVar16;
  int local_268;
  int local_264;
  longlong local_260;
  int local_258;
  int local_254;
  longlong local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  FUN_142ecbc80();
  pwVar14 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_228 = 0;
    local_220 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    FGenericPlatformString::Memcpy(local_228,L"backpackWrapper.backpack",0x32);
    puVar1 = (undefined8 *)(param_1 + 0x6d8);
    local_238 = (longlong *)0x0;
    local_230 = 0;
    local_c8 = 0;
    cVar4 = FUN_140e98b90(*(undefined8 *)(param_1 + 0x600),puVar1,&local_228,0,6,&local_238);
    plVar15 = local_238;
    for (iVar13 = (int)local_230; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free(local_238);
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      local_208 = 0;
      local_200 = 0x23;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
      FGenericPlatformString::Memcpy(local_208,L"backpackHeader.sortButtonLeft.hint",0x46);
      local_218 = (longlong *)0x0;
      local_210 = 0;
      local_c0 = 0;
      FUN_140e98630(*puVar1,param_1 + 0x698,&local_208,0,6,&local_218);
      plVar15 = local_218;
      for (iVar13 = (int)local_210; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_218 != (longlong *)0x0) {
        FMemory::Free(local_218);
      }
      if (local_208 != 0) {
        FMemory::Free();
      }
      local_1e8 = 0;
      local_1e0 = 0x24;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
      FGenericPlatformString::Memcpy(local_1e8,L"backpackHeader.sortButtonRight.hint",0x48);
      local_1f8 = (longlong *)0x0;
      local_1f0 = 0;
      local_b8 = 0;
      FUN_140e98630(*puVar1,param_1 + 0x6a0,&local_1e8,0,6,&local_1f8);
      plVar15 = local_1f8;
      for (iVar13 = (int)local_1f0; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_1f8 != (longlong *)0x0) {
        FMemory::Free(local_1f8);
      }
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      uVar5 = FUN_142085870(*puVar1,local_a0,L"backpackHeader.headerText");
      FUN_142ede260(param_1 + 0x6e0,uVar5);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_98 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar11 = (int *)((longlong)local_98 + 0xc);
          iVar13 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      uVar5 = FUN_142085870(*puVar1,local_90,L"backpackHeader.filterText");
      FUN_142ede260(param_1 + 0x6f8,uVar5);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_88 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar11 = (int *)((longlong)local_88 + 0xc);
          iVar13 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      uVar5 = FUN_142085870(*puVar1,local_80,L"backpackHeader.sortText");
      FUN_142ede260(param_1 + 0x710,uVar5);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_78 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar11 = (int *)((longlong)local_78 + 0xc);
          iVar13 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
    local_248 = 0;
    local_240 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
    FGenericPlatformString::Memcpy(local_248,L"buttonPromptWrapper.hint",0x32);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    local_b0 = 0;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x600),param_1 + 0x6b0,&local_248,0,6,&local_1d8);
    plVar15 = local_1d8;
    for (iVar13 = (int)local_1d0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    if (local_248 != 0) {
      FMemory::Free();
    }
    local_1b8 = 0;
    local_1b0 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"buttonPromptWrapper.hint2",0x34);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    local_a8 = 0;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x600),param_1 + 0x6a8,&local_1b8,0,6,&local_1c8);
    plVar15 = local_1c8;
    for (iVar13 = (int)local_1c0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    local_198 = 0;
    local_190 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"playerEridiumCounter",0x2a);
    pplVar16 = &local_1a8;
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_70 = 0;
    uVar5 = FUN_140e96c90(param_1,&local_198,0,6,pplVar16);
    *(undefined8 *)(param_1 + 0x6b8) = uVar5;
    plVar15 = local_1a8;
    for (iVar13 = (int)local_1a0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      FUN_140f0b470(*(longlong *)(param_1 + 0x6b8),0x43a78000);
    }
    local_178 = 0;
    local_170 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"eridiumCellCounter",0x26);
    in_stack_fffffffffffffd68 = CONCAT71((int7)((ulonglong)pplVar16 >> 8),6);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    local_e0 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x600),param_1 + 0x748,&local_178,0,
                  in_stack_fffffffffffffd68,&local_188);
    plVar15 = local_188;
    for (iVar13 = (int)local_180; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
  }
  pwVar6 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x58c);
  pwVar9 = pwVar14;
  if (pwVar6 != (wchar_t *)0x0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnReRolledInventoryActorReady",L"::");
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar9 = pwVar3;
      }
      FName::FName(&local_res18,pwVar9 + 2,1);
      pwVar9 = pwVar6 + 0xe28;
      FWeakObjectPtr::operator=(&local_258,0);
      local_250 = 0;
      FWeakObjectPtr::operator=(&local_258,param_1);
      local_250 = local_res18;
      if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_258), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_250);
      }
      piVar11 = *(int **)pwVar9;
      iVar13 = *(int *)(pwVar6 + 0xe2c);
      for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar13 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == local_258) && (piVar12[1] == local_254)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar12), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_258), cVar4 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar12 + 2) == local_250)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140eba1fc;
          break;
        }
      }
      iVar13 = *(int *)(pwVar6 + 0xe2c);
      *(int *)(pwVar6 + 0xe2c) = iVar13 + 1;
      if (*(int *)(pwVar6 + 0xe2e) < iVar13 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar9,iVar13);
      }
      piVar11 = (int *)((longlong)iVar13 * 0x10 + *(longlong *)pwVar9);
      *piVar11 = local_258;
      piVar11[1] = local_254;
      *(longlong *)(piVar11 + 2) = local_250;
LAB_140eba1fc:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar9);
      pwVar9 = pwVar6;
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  uVar5 = FUN_1417985e0(uVar5,param_1,0,0,in_stack_fffffffffffffd68 & 0xffffffff00000000,0,0,0,0);
  *(undefined8 *)(param_1 + 0x738) = uVar5;
  if ((pwVar9 != (wchar_t *)0x0) &&
     (pwVar9 = (wchar_t *)(**(code **)(*(longlong *)(pwVar9 + 0x4c0) + 0x10))(),
     pwVar9 != (wchar_t *)0x0)) {
    lVar7 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140eba2a9;
  }
  pwVar9 = pwVar14;
LAB_140eba2a9:
  if ((*(longlong *)(param_1 + 0x738) != 0) && (pwVar9 != (wchar_t *)0x0)) {
    local_68 = *(undefined4 *)(pwVar9 + 0x5bc);
    uStack_64 = *(undefined4 *)(pwVar9 + 0x5be);
    uStack_60 = *(undefined4 *)(pwVar9 + 0x5c0);
    uStack_5c = *(undefined4 *)(pwVar9 + 0x5c2);
    local_58 = *(undefined8 *)(pwVar9 + 0x5c4);
    FUN_1411f9620(*(longlong *)(param_1 + 0x738),&local_68);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
    while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar14 = pwVar6;
    }
    FName::FName(&local_res20,pwVar14 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x738);
    plVar15 = (longlong *)(lVar7 + 0xe8);
    FWeakObjectPtr::operator=(&local_268,0);
    local_260 = 0;
    FWeakObjectPtr::operator=(&local_268,param_1);
    local_260 = local_res20;
    if ((local_res20 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_268), lVar10 != 0)) {
      UObject::FindFunction(lVar10,local_260);
    }
    piVar11 = (int *)*plVar15;
    iVar13 = *(int *)(lVar7 + 0xf0);
    for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar13 * 4; piVar12 = piVar12 + 4) {
      if (((*piVar12 == local_268) && (piVar12[1] == local_264)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar12), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_268), cVar4 == '\0')))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (*(longlong *)(piVar12 + 2) == local_260)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140eba450;
        break;
      }
    }
    iVar13 = *(int *)(lVar7 + 0xf0);
    *(int *)(lVar7 + 0xf0) = iVar13 + 1;
    if (*(int *)(lVar7 + 0xf4) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar13);
    }
    piVar11 = (int *)((longlong)iVar13 * 0x10 + *plVar15);
    *piVar11 = local_268;
    piVar11[1] = local_264;
    *(longlong *)(piVar11 + 2) = local_260;
LAB_140eba450:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
  }
  local_168 = 0;
  local_160 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"lookBackpack",0x1a);
  FUN_142088910(*(undefined8 *)(param_1 + 0x600),&local_168);
  if (local_168 != 0) {
    FMemory::Free();
  }
  FUN_140ec7420(param_1,1);
  local_148 = 0;
  local_140 = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"playerEridiumCounter.insufficientFunds",0x4e);
  local_158 = (longlong *)0x0;
  local_150 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_148,0,6,&local_158);
  *(undefined8 *)(param_1 + 0x6d0) = uVar5;
  plVar15 = local_158;
  for (iVar13 = (int)local_150; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    local_128 = 0;
    local_120 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"innerText",0x14);
    local_138 = (longlong *)0x0;
    local_130 = 0;
    local_d8 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x6d0),param_1 + 0x6c0,&local_128,0,6,&local_138);
    plVar15 = local_138;
    for (iVar13 = (int)local_130; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    local_108 = 0;
    local_100 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"innerTextShadow",0x20);
    local_118 = (longlong *)0x0;
    local_110 = 0;
    local_d0 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x6d0),param_1 + 0x6c8,&local_108,0,6,&local_118);
    plVar15 = local_118;
    for (iVar13 = (int)local_110; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_f8,L"Insufficient Funds!",L"GFxAnointmentRerollMenu",L"VendingInsufficientFunds")
  ;
  plVar15 = *(longlong **)(param_1 + 0x6c0);
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x2b0))(plVar15,local_f8,1,0);
  }
  plVar15 = *(longlong **)(param_1 + 0x6c8);
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x2b0))(plVar15,local_f8,1,0);
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_f0 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar11 = (int *)((longlong)local_f0 + 0xc);
      iVar13 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return;
}



// FUNCTION 140eba7c0 FUN_140eba7c0 body=3375 status=ok
// SIG undefined FUN_140eba7c0(void)

void FUN_140eba7c0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  
  FUN_142ecbc80();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_b0,L"countdownMC");
  param_1[0xf1] = *plVar4;
  plVar4 = (longlong *)plVar4[1];
  plVar8 = (longlong *)param_1[0xf2];
  if (plVar4 != plVar8) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xf2];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0xf2] = (longlong)plVar4;
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a8 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  plVar4 = (longlong *)param_1[0xf2];
  uVar7 = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar4[1];
    bVar10 = iVar9 == 0;
    if (bVar10) {
      *(int *)(plVar4 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar9 == (int)plVar4[1];
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar4 != (longlong *)0x0) {
          lVar2 = param_1[0xf1];
          if (lVar2 != 0) {
            local_1e8 = 0;
            local_1e0 = 0x17;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
            FGenericPlatformString::Memcpy(local_1e8,L"hintWrapper.cancelHint",0x2e);
            local_1f8 = (longlong *)0x0;
            local_1f0 = 0;
            FUN_140e98440(lVar2,param_1 + 0xf3,&local_1e8,0,6,&local_1f8);
            plVar8 = local_1f8;
            for (iVar9 = (int)local_1f0; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (local_1f8 != (longlong *)0x0) {
              FMemory::Free(local_1f8);
            }
            if (local_1e8 != 0) {
              FMemory::Free();
            }
            lVar2 = param_1[0xf3];
            if (lVar2 != 0) {
              local_110 = 0;
              local_118 = lVar2;
              uVar6 = UBlendableInterface::GetPrivateStaticClass();
              local_110 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
              puVar5 = (undefined8 *)FName::FName(local_res18,"CancelAction",1);
              FUN_142ecff00(param_1,&local_118,*puVar5);
            }
          }
          LOCK();
          plVar8 = plVar4 + 1;
          lVar2 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
        break;
      }
      LOCK();
      iVar9 = (int)plVar4[1];
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(plVar4 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  local_1c8 = 0;
  local_1c0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L"infoPanel",0x14);
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  local_res20 = 0;
  FUN_140e97a00(param_1,param_1 + 0xf4,&local_1c8,0,6,&local_1d8);
  plVar4 = local_1d8;
  for (iVar9 = (int)local_1d0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_a0,L"offeringPanelMC");
  param_1[0xf5] = *plVar4;
  plVar4 = (longlong *)plVar4[1];
  plVar8 = (longlong *)param_1[0xf6];
  if (plVar4 != plVar8) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xf6];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0xf6] = (longlong)plVar4;
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_98 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  plVar4 = (longlong *)param_1[0xf6];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar4[1];
    bVar10 = iVar9 == 0;
    if (bVar10) {
      *(int *)(plVar4 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar9 == (int)plVar4[1];
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar4 != (longlong *)0x0) {
          lVar2 = param_1[0xf5];
          if (lVar2 != 0) {
            local_1a8 = 0;
            local_1a0 = 9;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
            FGenericPlatformString::Memcpy(local_1a8,L"gearList",0x12);
            local_1b8 = (longlong *)0x0;
            local_1b0 = 0;
            local_50 = 0;
            FUN_140e989a0(lVar2,param_1 + 0xf7,&local_1a8,0,6,&local_1b8);
            plVar8 = local_1b8;
            for (iVar9 = (int)local_1b0; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (local_1b8 != (longlong *)0x0) {
              FMemory::Free(local_1b8);
            }
            if (local_1a8 != 0) {
              FMemory::Free();
            }
            local_188 = 0;
            local_180 = 0xe;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
            FGenericPlatformString::Memcpy(local_188,L"tradeButtonMC",0x1c);
            local_198 = (longlong *)0x0;
            local_190 = 0;
            local_c0 = 0;
            FUN_140e98250(lVar2,param_1 + 0xf9,&local_188,0,6,&local_198);
            plVar8 = local_198;
            for (iVar9 = (int)local_190; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (local_198 != (longlong *)0x0) {
              FMemory::Free(local_198);
            }
            if (local_188 != 0) {
              FMemory::Free();
            }
          }
          LOCK();
          plVar8 = plVar4 + 1;
          lVar2 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
        break;
      }
      LOCK();
      iVar9 = (int)plVar4[1];
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(plVar4 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_90,L"backpack");
  param_1[0xfa] = *plVar4;
  plVar4 = (longlong *)plVar4[1];
  plVar8 = (longlong *)param_1[0xfb];
  if (plVar4 != plVar8) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xfb];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0xfb] = (longlong)plVar4;
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  plVar4 = (longlong *)param_1[0xfb];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar4[1];
    bVar10 = iVar9 == 0;
    if (bVar10) {
      *(int *)(plVar4 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar9 == (int)plVar4[1];
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar4 != (longlong *)0x0) {
          lVar2 = param_1[0xfa];
          if (lVar2 != 0) {
            local_168 = 0;
            local_160 = 0xd;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
            FGenericPlatformString::Memcpy(local_168,L"backpackGrid",0x1a);
            local_178 = (longlong *)0x0;
            local_170 = 0;
            local_c8 = 0;
            FUN_140e989a0(lVar2,param_1 + 0xfc,&local_168,0,6,&local_178);
            plVar8 = local_178;
            for (iVar9 = (int)local_170; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (local_178 != (longlong *)0x0) {
              FMemory::Free(local_178);
            }
            if (local_168 != 0) {
              FMemory::Free();
            }
            uVar6 = FUN_1420392d0(lVar2,local_80,L"backpackHeader.headerText");
            FUN_142ede260(param_1 + 0xfe,uVar6);
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_78 + 1;
              lVar3 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar1 = (int *)((longlong)local_78 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_78 + 8))(local_78,1);
                }
              }
            }
            if ((param_1[0xff] != 0) && (param_1[0x100] != 0)) {
              piVar1 = (int *)(param_1[0x100] + 8);
              LOCK();
              iVar9 = *piVar1;
              if (iVar9 == 0) {
                *piVar1 = 0;
                iVar9 = 0;
              }
              UNLOCK();
              if (0 < iVar9) {
                uVar6 = FUN_1404b03b0();
                UMistDebugEntityScreen::InspectEntity(param_1 + 0xfe,uVar6,1,0);
              }
            }
            uVar6 = FUN_1420392d0(lVar2,local_70,L"backpackHeader.filterText");
            FUN_142ede260(param_1 + 0x101,uVar6);
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_68 + 1;
              lVar3 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar1 = (int *)((longlong)local_68 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_68 + 8))(local_68,1);
                }
              }
            }
            if ((param_1[0x102] != 0) && (param_1[0x103] != 0)) {
              piVar1 = (int *)(param_1[0x103] + 8);
              LOCK();
              iVar9 = *piVar1;
              if (iVar9 == 0) {
                *piVar1 = 0;
                iVar9 = 0;
              }
              UNLOCK();
              if (0 < iVar9) {
                uVar6 = FUN_1404b03b0();
                UMistDebugEntityScreen::InspectEntity(param_1 + 0x101,uVar6,1,0);
              }
            }
            uVar6 = FUN_1420392d0(lVar2,local_60,L"backpackHeader.sortText");
            FUN_142ede260(param_1 + 0x104,uVar6);
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_58 + 1;
              lVar3 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar1 = (int *)((longlong)local_58 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_58 + 8))(local_58,1);
                }
              }
            }
            if ((param_1[0x105] != 0) && (param_1[0x106] != 0)) {
              piVar1 = (int *)(param_1[0x106] + 8);
              LOCK();
              iVar9 = *piVar1;
              if (iVar9 == 0) {
                *piVar1 = 0;
                iVar9 = 0;
              }
              UNLOCK();
              if (0 < iVar9) {
                uVar6 = FUN_1404b03b0();
                UMistDebugEntityScreen::InspectEntity(param_1 + 0x104,uVar6,1,0);
              }
            }
            local_258 = 0;
            local_250 = 0x25;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
            FGenericPlatformString::Memcpy(local_258,L"backpackHeader.backpackPrevHint.hint",0x4a);
            local_158 = (longlong *)0x0;
            local_150 = 0;
            local_d0 = 0;
            FUN_140e98440(lVar2,param_1 + 0x107,&local_258,0,6,&local_158);
            plVar8 = local_158;
            for (iVar9 = (int)local_150; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (local_158 != (longlong *)0x0) {
              FMemory::Free(local_158);
            }
            if (local_258 != 0) {
              FMemory::Free();
            }
            lVar3 = param_1[0x107];
            if (lVar3 != 0) {
              local_100 = 0;
              local_108 = lVar3;
              uVar6 = UBlendableInterface::GetPrivateStaticClass();
              local_100 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar6);
              FUN_142ecff00(param_1,&local_108,DAT_1468718f8);
            }
            local_218 = 0;
            local_210 = 0x25;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
            FGenericPlatformString::Memcpy(local_218,L"backpackHeader.backpackNextHint.hint",0x4a);
            local_208 = (longlong *)0x0;
            local_200 = 0;
            local_d8 = 0;
            FUN_140e98440(lVar2,param_1 + 0x108,&local_218,0,6,&local_208);
            plVar8 = local_208;
            for (iVar9 = (int)local_200; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (local_208 != (longlong *)0x0) {
              FMemory::Free(local_208);
            }
            if (local_218 != 0) {
              FMemory::Free();
            }
            lVar3 = param_1[0x108];
            if (lVar3 != 0) {
              local_f0 = 0;
              local_f8 = lVar3;
              uVar6 = UBlendableInterface::GetPrivateStaticClass();
              local_f0 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar6);
              FUN_142ecff00(param_1,&local_f8,DAT_1468718f0);
            }
            local_238 = 0;
            local_230 = 9;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
            FGenericPlatformString::Memcpy(local_238,L"currency",0x12);
            local_228 = (longlong *)0x0;
            local_220 = 0;
            local_b8 = 0;
            FUN_140e97810(lVar2,param_1 + 0x109,&local_238,0,6,&local_228);
            plVar8 = local_228;
            for (iVar9 = (int)local_220; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (local_228 != (longlong *)0x0) {
              FMemory::Free(local_228);
            }
            if (local_238 != 0) {
              FMemory::Free();
            }
          }
          LOCK();
          plVar8 = plVar4 + 1;
          lVar2 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
        break;
      }
      LOCK();
      iVar9 = (int)plVar4[1];
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(plVar4 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  if (param_1[0xf9] != 0) {
    FUN_142ed3af0(param_1[0xf9],&DAT_146871bd0,0);
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    FWeakObjectPtr::operator=(&local_138,0);
    FWeakObjectPtr::operator=(&local_130,0);
    FWeakObjectPtr::operator=(&local_128,0);
    FWeakObjectPtr::operator=(&local_120,0);
    lVar2 = param_1[0xf9];
    local_e8 = lVar2;
    if (lVar2 != 0) {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      uVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar7);
    }
    local_e0 = uVar7;
    FUN_142ecfd10(param_1,&local_e8,&local_138);
  }
  local_148 = 0;
  local_140 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"itemCard.itemCardLoader",0x30);
  local_248 = (longlong *)0x0;
  local_240 = 0;
  FUN_140e97c70(param_1,param_1 + 0x10a,&local_148,0,6,&local_248);
  plVar4 = local_248;
  for (iVar9 = (int)local_240; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_248 != (longlong *)0x0) {
    FMemory::Free(local_248);
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ebb4f0 FUN_140ebb4f0 body=8 status=ok
// SIG undefined FUN_140ebb4f0(void)

void FUN_140ebb4f0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x749) = 1;
  return;
}



// FUNCTION 140ebb510 FUN_140ebb510 body=58 status=ok
// SIG undefined FUN_140ebb510(void)

void FUN_140ebb510(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0xdc);
    *(undefined4 *)(lVar2 + 0x780) = *(undefined4 *)(lVar2 + 0x6e8);
    *(undefined1 *)(lVar2 + 0x745) = 1;
  }
  return;
}



// FUNCTION 140ebb550 FUN_140ebb550 body=612 status=ok
// SIG undefined FUN_140ebb550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ebb550(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined4 *local_2d0;
  undefined8 local_2c8;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined1 local_2a8 [16];
  undefined8 *local_298;
  undefined8 **ppuStack_290;
  undefined8 local_278;
  longlong local_270;
  undefined8 *local_260 [3];
  undefined1 local_248 [24];
  undefined1 local_230 [520];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  lVar2 = FUN_1407c74b0(lVar2);
  if (lVar2 != 0) {
    FUN_1407c0b50(lVar2,local_2a8,param_1);
    FUN_1407e0180(local_2a8,&local_298);
    FUN_1407e0240(local_2a8,local_260);
    cVar1 = FUN_1407be9c0(&local_298,local_260);
    if (cVar1 == '\0') {
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(&local_2b8,param_1);
      FUN_1407e01c0(&local_2b8,local_2a8);
      FUN_1407e0280(&local_2b8,&local_298);
      cVar1 = FUN_1407bea50(local_2a8,&local_298);
      while (cVar1 != '\0') {
        lVar3 = FUN_1407beb30(local_2a8);
        if (lVar3 != param_1) {
          FUN_1407c0b50(lVar2,&local_278,lVar3);
          FUN_1407e0180(&local_278,local_260);
          FUN_1407e0240(&local_278,local_248);
          cVar1 = FUN_1407be9c0(local_260,local_248);
          if (cVar1 != '\0') {
            ppuVar4 = local_260;
            goto LAB_140ebb69f;
          }
        }
        FUN_1407beb60(local_2a8);
        cVar1 = FUN_1407bea50(local_2a8,&local_298);
      }
    }
    else {
      ppuVar4 = &local_298;
LAB_140ebb69f:
      lVar2 = FUN_1407beb00(ppuVar4);
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x120);
        if (lVar3 == 0) {
          lVar3 = FUN_1423407b0(param_1);
        }
        lVar3 = FUN_140a05e30(lVar3);
        if (lVar3 != 0) {
          local_278 = *(undefined8 *)(lVar3 + 200);
          local_298 = &local_278;
          ppuStack_290 = local_260;
          local_2b8 = 0;
          local_270 = lVar2;
          FUN_1405e1200(local_230,&local_298);
          lVar2 = *(longlong *)(param_1 + 0x120);
          local_2b4 = 0xffffffff;
          local_2b0 = 0;
          if (lVar2 == 0) {
            lVar2 = FUN_1423407b0(param_1);
          }
          local_2d0 = &local_2b8;
          local_2c8 = 0;
          local_2d8 = 0;
          FUN_1405f8040(local_2a8,lVar2,*(undefined8 *)(lVar3 + 0x68),local_230);
          if (local_28 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ebb7c0 FUN_140ebb7c0 body=468 status=ok
// SIG undefined FUN_140ebb7c0(void)

void FUN_140ebb7c0(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  lVar6 = *(longlong *)(param_1 + 0x118);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x128) == '\x03')) {
    local_res10 = *(undefined8 *)(param_1 + 0x1c8);
    uVar2 = AActor::GetWorldTimerManager(lVar6);
    uVar3 = FTimerManager::FindTimer(uVar2,&local_res10,local_res8);
    FUN_142880730(uVar2,uVar3,local_res8[0]);
    local_res10 = *(undefined8 *)(param_1 + 0x1d0);
    uVar2 = AActor::GetWorldTimerManager(lVar6);
    uVar3 = FTimerManager::FindTimer(uVar2,&local_res10,local_res8);
    FUN_142880730(uVar2,uVar3,local_res8[0]);
    puVar5 = *(undefined8 **)(param_1 + 0x1b0);
    puVar10 = puVar5 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
    if (puVar5 != puVar10) {
      plVar11 = (longlong *)0x0;
      do {
        local_30 = *(int *)(puVar5 + 1);
        lVar6 = (longlong)local_30;
        _Src = (void *)*puVar5;
        local_38 = (longlong *)0x0;
        if (local_30 == 0) {
          local_2c = 0;
          plVar4 = plVar11;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_38,local_30,0);
          plVar4 = local_38;
          _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar6 << 3);
        }
        plVar9 = (longlong *)
                 ((ulonglong)((longlong)(plVar4 + local_30) + (7 - (longlong)plVar4)) >> 3);
        if (plVar4 + local_30 < plVar4) {
          plVar9 = plVar11;
        }
        plVar7 = plVar11;
        plVar8 = plVar4;
        if (plVar9 != (longlong *)0x0) {
          do {
            lVar6 = *plVar8;
            if ((((lVar6 != 0) && (*(char *)(lVar6 + 0x128) == '\x03')) &&
                (lVar1 = *(longlong *)(lVar6 + 0x460), lVar1 != 0)) &&
               ((*(char *)(lVar6 + 0x478) != '\0' && (*(char *)(lVar1 + 0x200) != '\0')))) {
              *(undefined1 *)(lVar1 + 0x200) = 0;
              *(undefined1 *)(lVar6 + 0x47c) = 1;
              *(undefined4 *)(lVar6 + 0x484) = *(undefined4 *)(*(longlong *)(lVar6 + 0x460) + 0x1fc)
              ;
            }
            plVar8 = plVar8 + 1;
            plVar7 = (longlong *)((longlong)plVar7 + 1);
          } while (plVar7 != plVar9);
        }
        if (plVar4 != (longlong *)0x0) {
          FMemory::Free(plVar4);
        }
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar10);
    }
  }
  return;
}



// FUNCTION 140ebb9a0 FUN_140ebb9a0 body=65 status=ok
// SIG undefined FUN_140ebb9a0(void)

void FUN_140ebb9a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0xc);
    FUN_140e58380(lVar1 + 0x26f0);
    return;
  }
  return;
}



// FUNCTION 140ebb9e0 FUN_140ebb9e0 body=130 status=ok
// SIG undefined FUN_140ebb9e0(void)

void FUN_140ebb9e0(longlong param_1,float param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined8 *)(param_1 + 0x5d0) = param_4;
  *(undefined8 *)(param_1 + 0x5d8) = param_5;
  *(undefined1 *)(param_1 + 0x5f4) = 0;
  *(undefined4 *)(param_1 + 0x5e4) = uVar1;
  *(undefined4 *)(param_1 + 0x5e8) = uVar2;
  *(undefined4 *)(param_1 + 0x5ec) = uVar3;
  *(undefined4 *)(param_1 + 0x5f0) = uVar4;
  *(float *)(param_1 + 0x5e0) = param_2;
  if (0.0 < param_2) {
    FUN_140ebde40(param_1 + 0x638,param_1 + 0x4e0);
    FUN_140ebdd80(param_1 + 0x5d0,param_1 + 0x648);
    FUN_140e7ae90(*(undefined8 *)(param_1 + 0x590));
  }
  return;
}



// FUNCTION 140ebba70 FUN_140ebba70 body=65 status=ok
// SIG undefined FUN_140ebba70(void)

void FUN_140ebba70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0xc);
    FUN_140e58580(lVar1 + 0x26f0);
    return;
  }
  return;
}



// FUNCTION 140ebbab0 FUN_140ebbab0 body=59 status=ok
// SIG undefined FUN_140ebbab0(void)

void FUN_140ebbab0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xc);
    FUN_140e2fee0(uVar1,*param_2);
  }
  return;
}



// FUNCTION 140ebbaf0 FUN_140ebbaf0 body=282 status=ok
// SIG undefined FUN_140ebbaf0(void)

void FUN_140ebbaf0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_28 [16];
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined1 *)*param_2;
    lVar6 = *(longlong *)(puVar3 + 8);
    lVar1 = lVar6 + (longlong)*(int *)(puVar3 + 0x10) * 0x28;
    for (; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
      lVar4 = FWeakObjectPtr::Get(lVar6);
      if (lVar4 == param_3) {
        if (lVar6 != 0) {
          return;
        }
        break;
      }
    }
    iVar2 = *(int *)(puVar3 + 0x10);
    *(int *)(puVar3 + 0x10) = iVar2 + 1;
    if (*(int *)(puVar3 + 0x14) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(puVar3 + 8,iVar2);
    }
    lVar6 = *(longlong *)(puVar3 + 8);
    lVar1 = (longlong)iVar2 * 0x28;
    *(undefined8 *)(lVar1 + lVar6) = 0;
    *(undefined8 *)(lVar1 + 8 + lVar6) = 0;
    *(undefined8 *)(lVar1 + 0x10 + lVar6) = 0;
    *(undefined8 *)(lVar1 + 0x18 + lVar6) = 0;
    *(undefined8 *)(lVar1 + 0x20 + lVar6) = 0;
    *puVar3 = 0;
    FWeakObjectPtr::operator=(*(longlong *)(puVar3 + 8) + lVar1,param_3);
    FUN_1407bc590(local_28,param_2,0);
    lVar6 = *(longlong *)(puVar3 + 8);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2e8))
                      (*(longlong **)(param_1 + 0x30),local_28);
    *(undefined8 *)(lVar1 + 8 + lVar6) = uVar5;
  }
  return;
}



// FUNCTION 140ebbc10 FUN_140ebbc10 body=435 status=ok
// SIG undefined FUN_140ebbc10(void)

void FUN_140ebbc10(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *local_38;
  uint local_30;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *param_2;
    puVar10 = (undefined4 *)0x0;
    if (0 < *(int *)(lVar2 + 0x10)) {
      plVar1 = (longlong *)(lVar2 + 8);
      puVar7 = puVar10;
      do {
        iVar9 = (int)puVar7;
        lVar5 = *plVar1 + (longlong)iVar9 * 0x28;
        lVar4 = FWeakObjectPtr::Get(lVar5);
        if (lVar4 == param_3) {
          local_30 = *(uint *)(lVar5 + 0x20);
          lVar4 = (longlong)(int)local_30;
          _Src = *(void **)(lVar5 + 0x18);
          local_38 = (undefined4 *)0x0;
          if (local_30 != 0) {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_38,local_30,0);
            puVar10 = local_38;
            _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar4 << 3);
            if (0 < (int)local_30) {
              uVar8 = (ulonglong)local_30;
              puVar7 = puVar10;
              do {
                lVar5 = FUN_1407c78f0(param_2,*puVar7);
                if (lVar5 != 0) {
                  FUN_142227350(lVar5,0,1);
                }
                puVar7 = puVar7 + 2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
          lVar5 = (longlong)iVar9 * 0x28;
          FUN_1407bc590(&local_38,param_2,*(undefined8 *)(*(longlong *)(*param_2 + 8) + 8 + lVar5));
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2f0))
                    (*(longlong **)(param_1 + 0x30),&local_38);
          if (*(longlong *)(lVar5 + 0x18 + *plVar1) != 0) {
            FMemory::Free();
          }
          iVar6 = *(int *)(lVar2 + 0x10);
          iVar3 = (iVar6 - iVar9) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar9 * 0x28),
                       (void *)(*plVar1 + (longlong)(iVar9 + 1) * 0x28),(longlong)iVar3 * 0x28);
            iVar6 = *(int *)(lVar2 + 0x10);
          }
          *(int *)(lVar2 + 0x10) = iVar6 + -1;
          TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar1);
          if (puVar10 == (undefined4 *)0x0) {
            return;
          }
          FMemory::Free(puVar10);
          return;
        }
        puVar7 = (undefined4 *)(ulonglong)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < *(int *)(lVar2 + 0x10));
    }
  }
  return;
}



// FUNCTION 140ebbdd0 FUN_140ebbdd0 body=1531 status=ok
// SIG undefined FUN_140ebbdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ebbdd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined1 local_1f8 [8];
  void *local_1f0;
  ulonglong local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined4 *local_1c8;
  undefined1 *puStack_1c0;
  longlong local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198;
  undefined1 *local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  longlong *plStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined4 local_c0 [4];
  undefined1 local_b0 [8];
  longlong *local_a8;
  char local_98;
  undefined1 local_90 [8];
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar6 == 0) {
LAB_140ebbe4c:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140ebbe4c;
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar7 != 0) {
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140ebbe98;
  }
  lVar7 = 0;
LAB_140ebbe98:
  lVar7 = (**(code **)(*(longlong *)(lVar7 + 0xd80) + 0x18))();
  if ((lVar6 != 0) && (lVar7 != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x900);
    FText::FText(local_1b0,lVar8);
    local_198 = *(undefined1 *)(lVar8 + 0x18);
    iVar5 = *(int *)(param_1 + 0x910);
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x908) <= iVar5)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar8 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x900);
      FText::operator=(local_1b0,lVar8);
      local_198 = *(undefined1 *)(lVar8 + 0x18);
    }
    FUN_140ebe6a0(param_1 + 0x728,0);
    plStack_180 = &local_1b8;
    local_188 = &LAB_140ea51d0;
    local_168 = 0x40ea51d0;
    uStack_164 = 1;
    local_1b8 = lVar6;
    plStack_160 = plStack_180;
    FUN_1411f4a30(param_1 + 0x728,lVar7,0,&local_168);
    local_1f8[0] = local_198;
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    if (&local_1f0 != (void **)(param_1 + 0x940)) {
      uVar3 = *(uint *)(param_1 + 0x948);
      _Src = *(void **)(param_1 + 0x940);
      local_1e8 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_1f0,uVar3,0);
        _guard_xfg_dispatch_icall_nop(local_1f0,_Src,(longlong)(int)uVar3 * 0x18);
      }
    }
    local_58 = (longlong *)0x0;
    local_88[0] = FRollingHash::GetWindowSize;
    local_48 = 0;
    FUN_1411fc8c0(param_1 + 0x728,local_1f8,0,local_88);
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
    local_208 = 0;
    FUN_140f04ef0(param_1 + 0x758,param_1 + 0x728,1,*(undefined4 *)(param_1 + 0x730));
    LOCK();
    *(undefined4 *)(param_1 + 0x8f0) = 1;
    UNLOCK();
    if ((*(longlong *)(param_1 + 0x718) != 0) && (*(longlong *)(param_1 + 0x720) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x720) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        lVar6 = FText::FText(local_d8,local_1b0);
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_118,L"SORT BY: {0}",L"GFxAnointmentRerollMenu",L"FormattedSortText"
                          );
        puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar9);
        local_c0[0] = 4;
        FText::FText(local_b0,lVar6);
        local_178 = *puVar10;
        local_1c8 = local_c0;
        puStack_1c0 = local_90;
        local_170 = puVar10[1];
        local_98 = '\x01';
        if (local_170 != 0) {
          LOCK();
          *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
          UNLOCK();
        }
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_1c8);
        uVar9 = FText::Format(local_130,&local_178,uVar9);
        FText::FText(local_148,uVar9);
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_128 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
        if ((local_98 != '\0') && (local_98 = '\0', local_a8 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_a8 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar1 = (int *)((longlong)local_a8 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_a8 + 8))(local_a8,1);
            }
          }
        }
        plVar11 = (longlong *)puVar10[1];
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar11 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = *(longlong **)(lVar6 + 8);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar11 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x710,local_148,1,0);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_140 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_110 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x700) != 0) && (*(longlong *)(param_1 + 0x708) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x708) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_100,L"Anointed Items",L"GFxAnointmentRerollMenu",
                           L"AnointedItemsText");
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x6f8,uVar9,1,0);
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_f8 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)local_f8 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
      }
    }
    if (local_1f0 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1a8 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ebc3d0 FUN_140ebc3d0 body=595 status=ok
// SIG undefined FUN_140ebc3d0(void)

void FUN_140ebc3d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    if (*(longlong *)(param_1 + 0x750) == 0) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Place Item",L"GFxAnointmentRerollMenu",L"SelectRerollItemText");
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar5,1);
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
                        (local_20,L"Close",L"GFxAnointmentRerollMenu",L"BackOut");
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5,1);
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
      uVar5 = FUN_1404b03b0();
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468718f8,uVar5,1);
      uVar5 = FUN_1404b03b0();
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468718f0,uVar5,1);
    }
    else {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_68,&DAT_1445cba50,L"GFxAnointmentRerollMenu",L"AcceptRerollText");
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar5,1);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_50,&DAT_1445cbaa8,L"GFxAnointmentRerollMenu",L"DenyRerollText");
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5,1);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140ebc630 FUN_140ebc630 body=482 status=ok
// SIG undefined FUN_140ebc630(void)

void FUN_140ebc630(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(int *)(param_1 + 0x740) == 1) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Back",L"GFxGearUpExtractionMenu",L"BackOutText");
    FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar7,0);
    plVar1 = local_50;
  }
  else {
    if (*(int *)(param_1 + 0x740) != 0) goto LAB_140ebc7ba;
    if ((((*(longlong *)(param_1 + 0x7c0) != 0) && (iVar6 = FUN_1411e2310(), -1 < iVar6)) &&
        (iVar6 < *(int *)(param_1 + 0x768))) &&
       (cVar5 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0x760) + (longlong)iVar6 * 8),
       cVar5 != '\0')) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Remove Item",L"GFxGearUpExtractionMenu",L"RemoveOfferingText");
      FUN_142eb01d0(param_1,&DAT_1468718b8,uVar7,0);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar3 = (int *)((longlong)local_38 + 0xc);
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Close",L"GFxGearUpExtractionMenu",L"CloseMenuText");
    FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar7,0);
    plVar1 = local_20;
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
LAB_140ebc7ba:
  if (*(int *)(param_1 + 0x740) == 1) {
    uVar7 = FUN_1404b03b0();
    FUN_142eb01d0(param_1,&DAT_1468718f8,uVar7,1);
    uVar7 = FUN_1404b03b0();
    FUN_142eb01d0(param_1,&DAT_1468718f0,uVar7,1);
    return;
  }
  return;
}



// FUNCTION 140ebc820 PostLoad body=50 status=ok
// SIG undefined PostLoad(void)

void UVectorFieldStatic::PostLoad(undefined8 param_1)

{
  char cVar1;
  
  FUN_1417931d0();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_140ea3b90(param_1);
    return;
  }
  return;
}



// FUNCTION 140ebc860 FUN_140ebc860 body=44 status=ok
// SIG undefined FUN_140ebc860(void)

void FUN_140ebc860(longlong param_1)

{
  FUN_1407d4f70();
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FUN_1407daab0(*(longlong *)(param_1 + 0x488),0);
    return;
  }
  return;
}



// FUNCTION 140ebc890 FUN_140ebc890 body=27 status=ok
// SIG undefined FUN_140ebc890(void)

void FUN_140ebc890(undefined8 param_1)

{
  thunk_FUN_14254bfa0();
  FUN_140eb1d00(param_1);
  return;
}



// FUNCTION 140ebc8b0 FUN_140ebc8b0 body=129 status=ok
// SIG undefined FUN_140ebc8b0(void)

void FUN_140ebc8b0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = *(char *)(param_1 + 0x38) != '\0';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  bVar2 = *(char *)(param_1 + 0x70) != '\0';
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  bVar3 = *(char *)(param_1 + 0x98) != '\0';
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 200) != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined1 *)(param_1 + 200) = 0;
    UObjectBaseUtility::MarkPackageDirty();
    UObject::PostLoad(param_1);
    return;
  }
  if (bVar3 || (bVar2 || bVar1)) {
    UObjectBaseUtility::MarkPackageDirty();
  }
  UObject::PostLoad(param_1);
  return;
}



// FUNCTION 140ebc940 FUN_140ebc940 body=552 status=ok
// SIG undefined FUN_140ebc940(void)

void FUN_140ebc940(longlong param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_38 [32];
  
  puVar1 = (undefined4 *)(param_1 + 0xb0);
  lVar3 = FWeakObjectPtr::Get(puVar1);
  lVar8 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0xb8)) || (*(longlong *)(param_1 + 0xc0) == 0))
    goto LAB_140ebcb53;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(puVar1,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(puVar1);
    if (lVar3 == 0) goto LAB_140ebcb53;
  }
  lVar4 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar4 = FUN_1428dfc70();
    do {
      if (lVar3 == lVar4) {
        lVar4 = FUN_1405ec200(puVar1);
        lVar3 = lVar8;
        if (lVar4 == 0) goto LAB_140ebca91;
        lVar5 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140ebca91;
        lVar6 = FUN_1428dfc70();
        lVar5 = lVar4;
        goto LAB_140ebca80;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_140ebcb53:
  FUN_1407d52f0(param_1);
  return;
  while (lVar5 = *(longlong *)(lVar5 + 0x30), lVar3 = lVar8, lVar5 != 0) {
LAB_140ebca80:
    lVar3 = lVar4;
    if (lVar5 == lVar6) break;
  }
LAB_140ebca91:
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x204)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1f8,0);
    }
    if (*(undefined2 **)(param_1 + 0x1f8) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x1f8) = 0;
    }
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  else {
    uVar7 = FSoftObjectPath::FSoftObjectPath(local_38,lVar3);
    FSoftObjectPath::operator=(param_1 + 0x1f0,uVar7);
    FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x1e0),lVar3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x1e8) = DAT_1464b56f4;
  }
  *puVar1 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xd4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 200,0);
  }
  if (*(undefined2 **)(param_1 + 200) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 200) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  goto LAB_140ebcb53;
}



// FUNCTION 140ebcb70 FUN_140ebcb70 body=639 status=ok
// SIG undefined FUN_140ebcb70(void)

void FUN_140ebcb70(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_38 [32];
  
  puVar1 = (undefined4 *)(param_1 + 0xb0);
  lVar5 = FWeakObjectPtr::Get(puVar1);
  lVar10 = 0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0xb8)) || (*(longlong *)(param_1 + 0xc0) == 0))
    goto LAB_140ebcd7e;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(puVar1,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(puVar1);
    if (lVar5 == 0) goto LAB_140ebcd7e;
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar6 = FUN_1428dfc70();
    do {
      if (lVar5 == lVar6) {
        lVar6 = FUN_1405ec200(puVar1);
        lVar5 = lVar10;
        if (lVar6 == 0) goto LAB_140ebccc1;
        lVar7 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140ebccc1;
        lVar8 = FUN_1428dfc70();
        lVar7 = lVar6;
        goto LAB_140ebccb0;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
LAB_140ebcd7e:
  FUN_1407d52f0(param_1);
  cVar4 = FUN_1430032a0(param_1 + 0x218);
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0x212) = 1;
    iVar2 = *(int *)(param_1 + 0x240);
    *(int *)(param_1 + 0x240) = iVar2 + 1;
    if (*(int *)(param_1 + 0x244) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x238,iVar2);
    }
    Metasound::TVertexInterfaceGroup<Metasound::FEnvironmentVertex>::
    TVertexInterfaceGroup<Metasound::FEnvironmentVertex>
              ((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x238),param_1 + 0x218);
  }
  return;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar5 = lVar10, lVar7 != 0) {
LAB_140ebccb0:
    lVar5 = lVar6;
    if (lVar7 == lVar8) break;
  }
LAB_140ebccc1:
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x204)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1f8,0);
    }
    if (*(undefined2 **)(param_1 + 0x1f8) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x1f8) = 0;
    }
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  else {
    uVar9 = FSoftObjectPath::FSoftObjectPath(local_38,lVar5);
    FSoftObjectPath::operator=(param_1 + 0x1f0,uVar9);
    FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x1e0),lVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x1e8) = DAT_1464b56f4;
  }
  *puVar1 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xd4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 200,0);
  }
  if (*(undefined2 **)(param_1 + 200) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 200) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  goto LAB_140ebcd7e;
}



// FUNCTION 140ebcdf0 FUN_140ebcdf0 body=603 status=ok
// SIG undefined FUN_140ebcdf0(void)

void FUN_140ebcdf0(longlong param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_38 [32];
  
  puVar1 = (undefined4 *)(param_1 + 0xb0);
  lVar3 = FWeakObjectPtr::Get(puVar1);
  lVar8 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0xb8)) || (*(longlong *)(param_1 + 0xc0) == 0))
    goto LAB_140ebd013;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(puVar1,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(puVar1);
    if (lVar3 == 0) goto LAB_140ebd013;
  }
  lVar4 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar4 = FUN_1428dfc70();
    do {
      if (lVar3 == lVar4) {
        lVar4 = FUN_1405ec200(puVar1);
        lVar3 = lVar8;
        if (lVar4 == 0) goto LAB_140ebcf51;
        lVar5 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140ebcf51;
        lVar6 = FUN_1428dfc70();
        lVar5 = lVar4;
        goto LAB_140ebcf40;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_140ebd013:
  FUN_1407d52f0(param_1);
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    return;
  }
  FUN_1407da260(*(longlong *)(param_1 + 0x1e0),1);
  return;
  while (lVar5 = *(longlong *)(lVar5 + 0x30), lVar3 = lVar8, lVar5 != 0) {
LAB_140ebcf40:
    lVar3 = lVar4;
    if (lVar5 == lVar6) break;
  }
LAB_140ebcf51:
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x208) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x20c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x200,0);
    }
    if (*(undefined2 **)(param_1 + 0x200) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x200) = 0;
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  else {
    uVar7 = FSoftObjectPath::FSoftObjectPath(local_38,lVar3);
    FSoftObjectPath::operator=(param_1 + 0x1f8,uVar7);
    FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x1e8),lVar3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x1f0) = DAT_1464b56f4;
  }
  *puVar1 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xd4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 200,0);
  }
  if (*(undefined2 **)(param_1 + 200) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 200) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  goto LAB_140ebd013;
}



// FUNCTION 140ebd050 FUN_140ebd050 body=428 status=ok
// SIG undefined FUN_140ebd050(void)

void FUN_140ebd050(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = param_1 + 0x16;
  lVar3 = FWeakObjectPtr::Get(plVar1);
  lVar7 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x17]) || (param_1[0x18] == 0)) goto LAB_140ebd1d3;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar1,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x17) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(plVar1);
    if (lVar3 == 0) goto LAB_140ebd1d3;
  }
  lVar4 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar4 = FUN_1428dfc70();
    do {
      if (lVar3 == lVar4) {
        lVar4 = FUN_1405ec200(plVar1);
        lVar3 = lVar7;
        if (lVar4 == 0) goto LAB_140ebd194;
        lVar5 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140ebd194;
        lVar6 = FUN_1428dfc70();
        lVar5 = lVar4;
        goto LAB_140ebd183;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_140ebd1d3:
  FUN_1407d52f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140ebd1f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1);
  return;
  while (lVar5 = *(longlong *)(lVar5 + 0x30), lVar3 = lVar7, lVar5 != 0) {
LAB_140ebd183:
    lVar3 = lVar4;
    if (lVar5 == lVar6) break;
  }
LAB_140ebd194:
  param_1[0x3e] = lVar3;
  *(undefined4 *)plVar1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x19,0);
  }
  if ((undefined2 *)param_1[0x19] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x19] = 0;
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  goto LAB_140ebd1d3;
}



// FUNCTION 140ebd200 FUN_140ebd200 body=44 status=ok
// SIG undefined FUN_140ebd200(void)

void FUN_140ebd200(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_140ea3b90(param_1);
  }
  FUN_140ebd050(param_1);
  return;
}



// FUNCTION 140ebd230 FUN_140ebd230 body=8 status=ok
// SIG undefined FUN_140ebd230(void)

void FUN_140ebd230(undefined8 param_1,undefined8 param_2)

{
  FUN_140eb4310(param_1,param_2,0);
  return;
}



// FUNCTION 140ebd240 FUN_140ebd240 body=550 status=ok
// SIG undefined FUN_140ebd240(void)

void FUN_140ebd240(longlong param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_res8;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x564,0,0);
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicleSpawnPoint::PostSpawnIntro",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x564);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar5 + 0xc0,param_1,local_res8);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicleSpawnPoint::PostSpawnIntro",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x564);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar5 + 0xd0,param_1,local_res8);
  }
  if (param_2 != (longlong *)0x0) {
    lVar5 = *(longlong *)(param_1 + 0x4f8);
    if (lVar5 != 0) {
      if (*(char *)(param_1 + 0x504) == '\0') {
        lVar5 = FUN_14072e0d0(param_2,lVar5,0,0,*(undefined4 *)(param_1 + 0x500),0,0,0,0,
                              *(undefined8 *)(param_1 + 0x508));
        if (lVar5 != 0) {
          FUN_142b7b2b0(lVar5);
        }
      }
      else {
        FUN_1406f6f40(param_2,lVar5,*(undefined4 *)(param_1 + 0x500));
      }
      if (*(char *)(param_1 + 0x560) == '\0') {
        FUN_140ea00c0(param_1,param_2);
      }
    }
    if (*(longlong *)(param_1 + 0x510) != 0) {
      lVar6 = USafeZone::GetPrivateStaticClass();
      lVar5 = *(longlong *)(param_1 + 0x510);
      lVar9 = lVar5;
      if (lVar5 != 0) {
        while (lVar9 != lVar6) {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          if (lVar9 == 0) {
            return;
          }
        }
        if ((lVar5 != 0) &&
           (plVar7 = (longlong *)(**(code **)(*param_2 + 0x668))(param_2), plVar7 != (longlong *)0x0
           )) {
          uVar8 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
          lVar5 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
          if (lVar5 != 0) {
            FUN_140a12560(lVar5,*(undefined8 *)(param_1 + 0x510));
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ebd470 FUN_140ebd470 body=684 status=ok
// SIG undefined FUN_140ebd470(void)

void FUN_140ebd470(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  lVar2 = FUN_1407c93d0(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
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
      FUN_141225c00(lVar2,local_48);
      *(float *)(lVar2 + 0xd8c) = local_40 * 2.0;
      FRotator::RotateVector((undefined8 *)(param_2 + 0x18),&local_58,local_48);
      local_20 = local_50 + *(float *)(param_2 + 0x14);
      local_30 = *(undefined4 *)(param_2 + 0x20);
      local_38 = *(undefined8 *)(param_2 + 0x18);
      local_28 = CONCAT44(local_54 + *(float *)(param_2 + 0x10),local_58 + *(float *)(param_2 + 0xc)
                         );
      local_10 = local_20;
      FUN_14223ca30(lVar2,&local_28,&local_38,0,0,1);
      FUN_141240150(lVar2,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
      if ((*(char *)(param_1 + 0x208) != '\0') ||
         (lVar3 = FUN_140589b80(param_1), *(char *)(lVar3 + 4) == '\x02')) {
        *(undefined1 *)(lVar2 + 0xebd) = 0;
      }
      if (*(char *)(param_1 + 0x209) != '\0') {
        *(undefined1 *)(lVar2 + 0xebe) = 1;
      }
      *(undefined1 *)(lVar2 + 0x95a) = *(undefined1 *)(param_1 + 0x1e1);
      if (*(char *)(param_1 + 0x1e2) != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146871c30) &&
           (_Init_thread_header(&DAT_146871c30), DAT_146871c30 == -1)) {
          FName::FName(&DAT_146871c28,L"USpawnFactory_OakVehicle::bCannotWorldTravel",1);
          _Init_thread_footer(&DAT_146871c30);
        }
        FUN_14122f440(lVar2,DAT_146871c28);
      }
      bVar5 = *(byte *)(param_1 + 0x1e0);
      bVar6 = bVar5;
      if ((*(longlong *)(param_2 + 0x48) != 0) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x118), lVar3 != 0)) {
        lVar4 = ASoundManager::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (bVar5 = bVar5 | *(byte *)(lVar3 + 0x4d8), bVar6 = bVar5,
           *(char *)(lVar3 + 0x4d9) != '\0')) {
          FUN_1412184a0(lVar2,&DAT_1468770b8);
          bVar6 = bVar5 | 1;
        }
      }
      if (bVar6 != 0) {
        FUN_14123f1e0(lVar2,&DAT_1468770b0,1);
      }
      if (bVar5 != 0) {
        *(byte *)(lVar2 + 0x959) = bVar5;
      }
    }
  }
  return;
}



// FUNCTION 140ebd720 FUN_140ebd720 body=70 status=ok
// SIG undefined FUN_140ebd720(void)

void FUN_140ebd720(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140ebd470();
  lVar2 = *(longlong *)(param_1 + 0x218);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x220) * 0x18;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    *(undefined4 *)(lVar2 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 140ebd770 FUN_140ebd770 body=276 status=ok
// SIG undefined FUN_140ebd770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ebd770(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ea5210;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_142ecfea0(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ebd890 FUN_140ebd890 body=25 status=ok
// SIG undefined FUN_140ebd890(void)

void FUN_140ebd890(longlong param_1,undefined8 param_2)

{
  if (*(float *)(param_1 + 0x18) != 0.0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_140eb4310(0,param_2,0);
    return;
  }
  return;
}



// FUNCTION 140ebd8b0 FUN_140ebd8b0 body=44 status=ok
// SIG undefined FUN_140ebd8b0(void)

void FUN_140ebd8b0(longlong param_1)

{
  FUN_1422396f0();
  if (*(longlong *)(param_1 + 0x460) != 0) {
    *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x1fc);
  }
  return;
}



// FUNCTION 140ebd8e0 FUN_140ebd8e0 body=674 status=ok
// SIG undefined FUN_140ebd8e0(void)

void FUN_140ebd8e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_10;
  
  lVar8 = *(longlong *)(param_1 + 0x930);
  lVar7 = (longlong)*(int *)(param_1 + 0x938) * 0x20 + lVar8;
  for (; lVar8 != lVar7; lVar8 = lVar8 + 0x20) {
    iVar4 = *(int *)(param_1 + 0x908);
    *(int *)(param_1 + 0x908) = iVar4 + 1;
    if (*(int *)(param_1 + 0x90c) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x900,iVar4);
    }
    lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x900);
    FText::FText(lVar6,lVar8);
    *(undefined1 *)(lVar6 + 0x18) = *(undefined1 *)(lVar8 + 0x18);
  }
  uVar5 = FUN_1404b03b0();
  FText::FText(local_28,uVar5);
  local_10 = 0;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,L"RARITY",L"GFxAnointmentRerollMenu",L"FilterRarity");
  FText::operator=(local_28,uVar5);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar3 = (longlong *)(param_1 + 0x900);
  local_10 = 4;
  iVar4 = *(int *)(param_1 + 0x908);
  *(int *)(param_1 + 0x908) = iVar4 + 1;
  if (*(int *)(param_1 + 0x90c) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar3,iVar4);
  }
  lVar8 = (longlong)iVar4 * 0x20 + *plVar3;
  FText::FText(lVar8,local_28);
  *(undefined1 *)(lVar8 + 0x18) = local_10;
  if (*(int *)(param_1 + 0x908) == 0) {
    uVar5 = FUN_1404b03b0();
    FText::FText(local_48,uVar5);
    local_30 = 0;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_60,L"Designer Fix Me: No Filter Found",L"GFxAnointmentRerollMenu",
                       L"NoFiltersText");
    FText::operator=(local_48,uVar5);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0x908);
    local_30 = 0;
    *(int *)(param_1 + 0x908) = iVar4 + 1;
    if (*(int *)(param_1 + 0x90c) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar3,iVar4);
    }
    lVar8 = (longlong)iVar4 * 0x20 + *plVar3;
    FText::FText(lVar8,local_48);
    *(undefined1 *)(lVar8 + 0x18) = local_30;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 140ebdb90 FUN_140ebdb90 body=193 status=ok
// SIG undefined FUN_140ebdb90(void)

void FUN_140ebdb90(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FUN_140ebdc60();
  }
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FUN_140ebdc60(*(longlong *)(param_1 + 0x7e8),param_2);
  }
  if ((*(char *)(param_1 + 0x74a) != '\0') &&
     (*(undefined1 *)(param_1 + 0x74a) = 0, *(longlong *)(param_1 + 0x7c0) != 0)) {
    if (*(int *)(param_1 + 0x768) < 1) {
      uVar1 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (&local_18,*(undefined8 *)(param_1 + 0x7c8));
      FUN_142ed36d0(param_1,uVar1,0);
    }
    else {
      local_18 = 0;
      uStack_10 = 0;
      FUN_142ed36d0(param_1,&local_18,0);
      FUN_1411f9bb0(*(undefined8 *)(param_1 + 0x7c0),0,1);
    }
  }
  *(undefined1 *)(param_1 + 0x74b) = 1;
  *(undefined1 *)(param_1 + 0x744) = 1;
  return;
}



// FUNCTION 140ebdc60 FUN_140ebdc60 body=287 status=ok
// SIG undefined FUN_140ebdc60(void)

void FUN_140ebdc60(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0xd8) == 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if (*(int *)(param_1 + 0xf4) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xe8,0);
      }
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0xdc);
      TArray<FName,FDefaultAllocator>::operator=(param_1 + 0xe8,lVar2 + 0x760);
    }
  }
  else {
    if (*(int *)(param_1 + 0xd8) != 1) goto LAB_140ebdd3d;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xe8,0);
    }
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
    if (cVar1 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_1 + 0xdc);
      FUN_140eae570(uVar3,param_1 + 0xe8);
    }
  }
  FUN_142ecd960(param_1 + 0x28,*(undefined4 *)(param_1 + 0xf0),param_2);
LAB_140ebdd3d:
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xf0) + -1;
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0xd1) = 1;
    FUN_142edaa10(param_1 + 0x28,0);
    *(undefined1 *)(param_1 + 0xd1) = 0;
  }
  return;
}



// FUNCTION 140ebdd80 FUN_140ebdd80 body=185 status=ok
// SIG undefined FUN_140ebdd80(void)

void FUN_140ebdd80(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  uVar3 = 0;
  plVar2 = (longlong *)*param_2;
  uVar4 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar2 + (int)param_2[1] < plVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        if (*(float *)(param_1 + 0x10) <= 0.0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0x3f800000;
        }
        FUN_140ebff60(lVar1,param_1,uVar5);
        FUN_140ec0010(lVar1,param_1 + 8,param_1 + 0x14);
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 140ebde40 FUN_140ebde40 body=643 status=ok
// SIG undefined FUN_140ebde40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ebde40(char *param_1,longlong param_2)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_58 [5];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if ((((0 < *(int *)(param_2 + 0xe0)) || (0.0 < *(float *)(param_2 + 0x100))) ||
      (*(char *)(param_2 + 0x114) != '\0')) ||
     ((*(char *)(param_2 + 0x198) != '\0' || (0.0 < *(float *)(param_2 + 0x1b0))))) {
    local_58[4] = *(longlong *)(param_1 + 8);
    if ((*param_1 == '\0') && (*(longlong *)(local_58[4] + 0x118) != 0)) {
      local_30 = *(undefined8 *)(*(longlong *)(local_58[4] + 0x118) + 0x168);
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      FUN_140eafdd0(local_58);
      FUN_140e9f690(param_1,local_58);
      *param_1 = '\x01';
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_58[2] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else if ((*param_1 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x118) != 0)) {
    uVar1 = 0;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    if ((*(int *)(param_1 + 0x1c) < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146871d68) {
      _Init_thread_header(&DAT_146871d68);
      if (DAT_146871d68 == -1) {
        DAT_146871d58 = (undefined8 *)0x0;
        DAT_146871d60 = *(int *)(param_1 + 0x28);
        lVar3 = (longlong)DAT_146871d60;
        _Src = *(void **)(param_1 + 0x20);
        if (DAT_146871d60 == 0) {
          _DAT_146871d64 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&DAT_146871d58,DAT_146871d60,0);
          _guard_xfg_dispatch_icall_nop(DAT_146871d58,_Src,lVar3 << 3);
        }
        atexit((_func_5014 *)&LAB_143e58b30);
        _Init_thread_footer(&DAT_146871d68);
      }
    }
    uVar4 = (ulonglong)((longlong)(DAT_146871d58 + DAT_146871d60) + (7 - (longlong)DAT_146871d58))
            >> 3;
    if (DAT_146871d58 + DAT_146871d60 < DAT_146871d58) {
      uVar4 = uVar1;
    }
    puVar2 = DAT_146871d58;
    if (uVar4 != 0) {
      do {
        FUN_140ebe1e0(param_1,*puVar2);
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar1 != uVar4);
    }
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
    }
    *param_1 = '\0';
    return;
  }
  return;
}



// FUNCTION 140ebe0d0 FUN_140ebe0d0 body=271 status=ok
// SIG undefined FUN_140ebe0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ebe0d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ea5200;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ebe1e0 FUN_140ebe1e0 body=315 status=ok
// SIG undefined FUN_140ebe1e0(void)

void FUN_140ebe1e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    lVar2 = (longlong)*(int *)(param_1 + 0x28);
    plVar1 = plVar3;
    if (plVar3 != plVar3 + lVar2) {
      while (*plVar1 != param_2) {
        plVar1 = plVar1 + 1;
        if (plVar1 == plVar3 + lVar2) {
          return;
        }
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        iVar7 = 0;
        bVar8 = *plVar3 != param_2;
        lVar4 = 0;
        iVar5 = 0;
        do {
          lVar4 = lVar4 + 1;
          iVar6 = iVar5 + 1;
          if (lVar4 < lVar2) {
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar4 * 8);
            do {
              if (bVar8 != (*plVar3 != param_2)) break;
              iVar6 = iVar6 + 1;
              lVar4 = lVar4 + 1;
              plVar3 = plVar3 + 1;
            } while (lVar4 < lVar2);
          }
          if (bVar8 != false) {
            if (iVar7 != iVar5) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 8),
                         (void *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 8),
                         (longlong)(iVar6 - iVar5) << 3);
            }
            iVar7 = iVar7 + (iVar6 - iVar5);
          }
          bVar8 = (bool)(bVar8 ^ 1);
          iVar5 = iVar6;
        } while (lVar4 < lVar2);
        *(int *)(param_1 + 0x28) = iVar7;
      }
      FUN_140483870(param_2 + 0x3b0,*(undefined8 *)(param_1 + 8));
      FUN_140483870(param_2 + 0x3c8,*(undefined8 *)(param_1 + 8));
    }
  }
  return;
}



// FUNCTION 140ebe320 FUN_140ebe320 body=495 status=ok
// SIG undefined FUN_140ebe320(void)

void FUN_140ebe320(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  ulonglong local_res20;
  
  uVar13 = 0;
  plVar5 = *(longlong **)(param_2 + 0x40);
  local_res20 = 0;
  uVar10 = (longlong)*(int *)(param_2 + 0x48) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_2 + 0x48) < plVar5) {
    uVar10 = uVar13;
  }
  if (uVar10 != 0) {
    do {
      lVar1 = *plVar5;
      if ((lVar1 != 0) &&
         (lVar2 = (longlong)*(int *)(param_1 + 0x18), *(int *)(param_1 + 0x18) != 0)) {
        bVar14 = **(longlong **)(param_1 + 0x10) != lVar1;
        uVar6 = uVar13;
        uVar9 = uVar13;
        uVar12 = uVar13;
        do {
          iVar8 = (int)uVar9;
          uVar6 = uVar6 + 1;
          uVar9 = (ulonglong)(iVar8 + 1);
          if ((longlong)uVar6 < lVar2) {
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
            do {
              if (bVar14 != (*plVar3 != lVar1)) break;
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar6 = uVar6 + 1;
              plVar3 = plVar3 + 1;
            } while ((longlong)uVar6 < lVar2);
          }
          iVar7 = (int)uVar9 - iVar8;
          if (bVar14 != false) {
            iVar11 = (int)uVar12;
            if (iVar11 != iVar8) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar11 * 8),
                         (void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar8 * 8),
                         (longlong)iVar7 << 3);
            }
            uVar12 = (ulonglong)(uint)(iVar11 + iVar7);
          }
          bVar14 = (bool)(bVar14 ^ 1);
        } while ((longlong)uVar6 < lVar2);
        *(int *)(param_1 + 0x18) = (int)uVar12;
      }
      plVar5 = plVar5 + 1;
      local_res20 = local_res20 + 1;
    } while (local_res20 != uVar10);
  }
  plVar5 = *(longlong **)(param_2 + 0x30);
  uVar10 = (longlong)*(int *)(param_2 + 0x38) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_2 + 0x38) < plVar5) {
    uVar10 = uVar13;
  }
  if (uVar10 != 0) {
    do {
      if (*plVar5 != 0) {
        plVar4 = *(longlong **)(param_1 + 0x10);
        plVar3 = plVar4 + *(int *)(param_1 + 0x18);
        for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
          if ((*plVar4 != 0) && (*(longlong *)(*plVar4 + 0x118) == *plVar5)) goto LAB_140ebe4fa;
        }
        FUN_140ebe1e0(param_1);
      }
LAB_140ebe4fa:
      plVar5 = plVar5 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar10);
  }
  return;
}



// FUNCTION 140ebe510 FUN_140ebe510 body=387 status=ok
// SIG undefined FUN_140ebe510(void)

void FUN_140ebe510(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48 [8];
  
  FUN_140ebec70();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar4 = DAT_146b33f38 + 0x60;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0x68)) {
      return;
    }
    if (*(longlong *)(lVar3 + 0x70) == 0) {
      return;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x68) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return;
    }
  }
  lVar3 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    FUN_1421d3220(local_48 + 4,lVar2 + 0x90);
    FUN_142dd9a90(param_1,local_48);
    if (local_48[6] != 0) {
      FMemory::Free();
    }
    if (local_48[4] != 0) {
      FMemory::Free();
    }
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ebe6a0 FUN_140ebe6a0 body=569 status=ok
// SIG undefined FUN_140ebe6a0(void)

void FUN_140ebe6a0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar6 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x40);
      do {
        if (plVar7[8] != 0) {
          FMemory::Free();
        }
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
        plVar3 = (longlong *)plVar7[-3];
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
        plVar3 = (longlong *)plVar7[-7];
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
        plVar7 = plVar7 + 0x22;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x40);
      do {
        if (plVar7[8] != 0) {
          FMemory::Free();
        }
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
        plVar3 = (longlong *)plVar7[-3];
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
        plVar3 = (longlong *)plVar7[-7];
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
        plVar7 = plVar7 + 0x22;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140ebe8e0 Clear body=11 status=ok
// SIG undefined Clear(void)

void FRootMotionMovementParams::Clear(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 140ebe8f0 FUN_140ebe8f0 body=62 status=ok
// SIG undefined FUN_140ebe8f0(void)

void FUN_140ebe8f0(longlong param_1)

{
  longlong local_res8 [4];
  
  if (*(char *)(param_1 + 0x4a8) != '\0') {
    if (*(char *)(param_1 + 0x4a9) != '\0') {
      FUN_140ebf6f0(param_1,0);
    }
    local_res8[0] = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x4b0,local_res8);
  }
  return;
}



// FUNCTION 140ebe930 FUN_140ebe930 body=716 status=ok
// SIG undefined FUN_140ebe930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ebe930(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 local_res8 [2];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined4 uStack_94;
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((char)param_1[0x95] == '\0') {
    return;
  }
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) {
    return;
  }
  bVar10 = false;
  UWorld::GetPlayerControllerIterator(lVar7,&local_58);
  do {
    if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (!bVar10) {
        return;
      }
      (**(code **)(*param_1 + 0x720))(param_1);
      return;
    }
    lVar7 = FWeakObjectPtr::Get();
    if ((lVar7 != 0) && (plVar2 = *(longlong **)(lVar7 + 0x488), plVar2 != (longlong *)0x0)) {
      bVar10 = true;
      (**(code **)(*plVar2 + 0x578))(plVar2,local_res8,local_res10);
      lVar7 = plVar2[0x2d];
      if (lVar7 == 0) {
        local_74 = DAT_1468b5d98;
        puVar9 = &local_7c;
        local_7c = _DAT_1468b5d90;
      }
      else {
        local_38 = *(undefined4 *)(lVar7 + 0x220);
        uStack_34 = *(undefined4 *)(lVar7 + 0x224);
        uStack_30 = *(undefined4 *)(lVar7 + 0x228);
        uStack_2c = *(undefined4 *)(lVar7 + 0x22c);
        puVar9 = (undefined8 *)&local_88;
        local_88 = local_38;
        local_80 = uStack_30;
        uStack_84 = uStack_34;
      }
      local_68 = *puVar9;
      local_60 = *(undefined4 *)(puVar9 + 1);
      cVar5 = FUN_1428ca150(param_1,&local_68,local_res8[0],0);
      if (cVar5 != '\0') {
        lVar7 = FUN_1413ffe00();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((bVar10) && (plVar8 = (longlong *)plVar2[0x550], plVar8 != (longlong *)0x0)) {
          LOCK();
          iVar6 = (int)plVar8[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar8 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (!bVar10) {
            LOCK();
            bVar10 = iVar6 == (int)plVar8[1];
            if (bVar10) {
              *(int *)(plVar8 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar10) {
              lVar7 = plVar2[0x54f];
              LOCK();
              plVar2 = plVar8 + 1;
              lVar4 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              local_48 = lVar7;
              if ((int)lVar4 == 1) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
              lVar4 = local_48;
              if (lVar7 == 0) {
                return;
              }
              if (*(char *)(local_48 + 0x30) != '\0') {
                return;
              }
              FWeakObjectPtr::operator=(local_res20,param_1);
              plVar2 = (longlong *)(lVar4 + 0x58);
              plVar8 = (longlong *)FMemory::Realloc(0,0x20);
              if (plVar8 == (longlong *)0x0) {
                return;
              }
              uStack_94 = local_res20._4_4_;
              *plVar8 = (longlong)&PTR_GetPoolName_1445ee7d8;
              *(int *)(plVar8 + 1) = local_res20._0_4_;
              *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_94;
              lVar7 = FDelegateHandle::GenerateNewID();
              plVar8[3] = lVar7;
              *plVar8 = (longlong)&PTR_GetPoolName_1445ee820;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
              (**(code **)(*plVar8 + 0x20))(plVar8,local_90);
              iVar6 = *(int *)(lVar4 + 0x60);
              *(int *)(lVar4 + 0x60) = iVar6 + 1;
              if (*(int *)(lVar4 + 100) < iVar6 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar6);
              }
              puVar9 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar2);
              *puVar9 = plVar8;
              *(undefined4 *)(puVar9 + 1) = 2;
              return;
            }
            LOCK();
            iVar6 = (int)plVar8[1];
            bVar10 = iVar6 == 0;
            if (bVar10) {
              *(int *)(plVar8 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        return;
      }
    }
    local_50 = local_50 + 1;
  } while( true );
}



// FUNCTION 140ebec00 FUN_140ebec00 body=102 status=ok
// SIG undefined FUN_140ebec00(void)

void FUN_140ebec00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(byte *)(param_1 + 0x6b4) = *(byte *)(param_1 + 0x6b4) & 0xf7;
  plVar1 = (longlong *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6b0) = 0xffffffff;
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
  return;
}



// FUNCTION 140ebec70 FUN_140ebec70 body=146 status=ok
// SIG undefined FUN_140ebec70(void)

void FUN_140ebec70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x4c0);
  lVar4 = (longlong)*(int *)(param_1 + 0x4c8) * 0xf0 + lVar3;
  if (lVar3 != lVar4) {
    lVar5 = lVar3 + 0x40;
    do {
      cVar1 = FUN_142d52a00(lVar5);
      if (cVar1 != '\0') {
        uVar2 = FUN_142d52a20(lVar5);
        uVar2 = FArchive::operator<<(uVar2);
        FUN_142d6c750(uVar2,0x3f800000,0x3f800000);
      }
      lVar3 = lVar3 + 0xf0;
      lVar5 = lVar5 + 0xf0;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 140ebed10 FUN_140ebed10 body=27 status=ok
// SIG undefined FUN_140ebed10(void)

void FUN_140ebed10(longlong param_1)

{
  FUN_1407d8050();
  *(undefined1 *)(param_1 + 0x9c0) = 0;
  return;
}



// FUNCTION 140ebed30 FUN_140ebed30 body=64 status=ok
// SIG undefined FUN_140ebed30(void)

void FUN_140ebed30(longlong param_1)

{
  undefined1 uVar1;
  
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    uVar1 = FUN_142c48f90(*(longlong *)(param_1 + 0x1c0),param_1,0);
    FUN_140ea86c0(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 140ebed70 FUN_140ebed70 body=161 status=ok
// SIG undefined FUN_140ebed70(void)

void FUN_140ebed70(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x80);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
    pvVar1 = *(void **)((longlong)param_1 + 0x80);
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
        *(void **)((longlong)param_1 + 0x80) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
  return;
}



// FUNCTION 140ebee20 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x8c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 << 5,0);
    uVar2 = uVar3 >> 5 & 0xffffffff;
    if ((int)(uVar3 >> 5) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = (int)uVar2;
  FUN_140ebed70(param_1,param_2,uVar2,0x20);
  return;
}



// FUNCTION 140ebeeb0 ResizeShrink body=156 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
          ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x68) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x68,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x4ec4ec4ec4ec4ec5) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x68);
      }
      goto LAB_140ebef1e;
    }
    if (iVar4 == 0) goto LAB_140ebef1e;
  }
  iVar4 = iVar5;
LAB_140ebef1e:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x68,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140ebef50 FUN_140ebef50 body=110 status=ok
// SIG undefined FUN_140ebef50(void)

void FUN_140ebef50(longlong param_1,uint param_2)

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
  if (iVar1 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar1;
    FUN_140ebed70(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x20);
  }
  return;
}



// FUNCTION 140ebefc0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 400,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 400,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140ebf050 FUN_140ebf050 body=115 status=ok
// SIG undefined FUN_140ebf050(void)

ulonglong FUN_140ebf050(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413f82e0();
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
      return (ulonglong)*(byte *)(param_2 + 0x21fd);
    }
  }
  uVar3 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar3;
}



// FUNCTION 140ebf0d0 FUN_140ebf0d0 body=598 status=ok
// SIG undefined FUN_140ebf0d0(void)

void FUN_140ebf0d0(longlong param_1)

{
  void *_Src;
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 local_res8;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x128) == '\x03')) {
    local_res8 = *(undefined8 *)(param_1 + 0x1c8);
    lVar3 = AActor::GetWorldTimerManager(lVar4);
    uVar2 = FTimerManager::FindTimerInList(lVar3,lVar3 + 0x20,&local_res8);
    FUN_142880ca0(lVar3,uVar2);
    local_res8 = *(undefined8 *)(param_1 + 0x1d0);
    lVar4 = AActor::GetWorldTimerManager(lVar4);
    uVar2 = FTimerManager::FindTimerInList(lVar4,lVar4 + 0x20,&local_res8);
    FUN_142880ca0(lVar4,uVar2);
    puVar11 = *(undefined8 **)(param_1 + 0x1b0);
    puVar8 = puVar11 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
    if (puVar11 != puVar8) {
      plVar9 = (longlong *)0x0;
      do {
        local_30 = *(int *)(puVar11 + 1);
        lVar4 = (longlong)local_30;
        _Src = (void *)*puVar11;
        local_38 = (longlong *)0x0;
        if (local_30 == 0) {
          local_2c = 0;
          plVar10 = plVar9;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_38,local_30,0);
          plVar10 = local_38;
          _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar4 << 3);
        }
        plVar5 = (longlong *)
                 ((ulonglong)((longlong)(plVar10 + local_30) + (7 - (longlong)plVar10)) >> 3);
        if (plVar10 + local_30 < plVar10) {
          plVar5 = plVar9;
        }
        plVar6 = plVar10;
        plVar7 = plVar9;
        if (plVar5 != (longlong *)0x0) {
          do {
            plVar1 = (longlong *)*plVar6;
            if ((((plVar1 != (longlong *)0x0) && ((char)plVar1[0x25] == '\x03')) &&
                (lVar4 = plVar1[0x8c], lVar4 != 0)) &&
               (((char)plVar1[0x8f] != '\0' && (*(char *)(lVar4 + 0x200) == '\0')))) {
              if (*(longlong *)(lVar4 + 0x1e8) != 0) {
                *(undefined1 *)(lVar4 + 0x200) = 1;
              }
              *(char *)((longlong)plVar1 + 0x47c) =
                   (*(char *)(plVar1[0x8c] + 0x202) != '\0') + '\x02';
              *(undefined4 *)(plVar1 + 0x90) = *(undefined4 *)(plVar1[0x8c] + 0x1c0);
              *(undefined4 *)((longlong)plVar1 + 0x484) = *(undefined4 *)(plVar1[0x8c] + 0x1fc);
              lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
              if (*(longlong *)(lVar4 + 0x148) != 0) {
                lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
                uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x148) + 0x6f0))();
                *(undefined4 *)(plVar1 + 0x91) = uVar2;
              }
            }
            plVar6 = plVar6 + 1;
            plVar7 = (longlong *)((longlong)plVar7 + 1);
          } while (plVar7 != plVar5);
        }
        if (plVar10 != (longlong *)0x0) {
          FMemory::Free(plVar10);
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar8);
    }
  }
  return;
}



// FUNCTION 140ebf330 FUN_140ebf330 body=201 status=ok
// SIG undefined FUN_140ebf330(void)

void FUN_140ebf330(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (((((char)param_1[0x25] == '\x03') && (lVar1 = param_1[0x8c], lVar1 != 0)) &&
      ((char)param_1[0x8f] != '\0')) && (*(char *)(lVar1 + 0x200) == '\0')) {
    if (*(longlong *)(lVar1 + 0x1e8) != 0) {
      *(undefined1 *)(lVar1 + 0x200) = 1;
      lVar1 = param_1[0x8c];
    }
    *(char *)((longlong)param_1 + 0x47c) = (*(char *)(lVar1 + 0x202) != '\0') + '\x02';
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1[0x8c] + 0x1c0);
    *(undefined4 *)((longlong)param_1 + 0x484) = *(undefined4 *)(param_1[0x8c] + 0x1fc);
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 0x148) != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x148) + 0x6f0))();
      *(undefined4 *)(param_1 + 0x91) = uVar2;
    }
  }
  return;
}



// FUNCTION 140ebf400 FUN_140ebf400 body=523 status=ok
// SIG undefined FUN_140ebf400(void)

void FUN_140ebf400(longlong param_1)

{
  char cVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03') {
    *(bool *)(param_1 + 0x1c0) = *(char *)(param_1 + 0x1c0) == '\0';
    puVar9 = *(undefined8 **)(param_1 + 0x1b0);
    puVar8 = puVar9 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
    for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
      plVar3 = (longlong *)0x0;
      local_30 = *(int *)(puVar9 + 1);
      lVar4 = (longlong)local_30;
      _Src = (void *)*puVar9;
      local_38 = (longlong *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
        plVar3 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar4 << 3);
      }
      uVar6 = 0;
      uVar5 = (ulonglong)((longlong)(plVar3 + local_30) + (7 - (longlong)plVar3)) >> 3;
      if (plVar3 + local_30 < plVar3) {
        uVar5 = uVar6;
      }
      plVar7 = plVar3;
      if (uVar5 != 0) {
        do {
          plVar2 = (longlong *)*plVar7;
          if ((((plVar2 != (longlong *)0x0) && ((char)plVar2[0x25] == '\x03')) &&
              (lVar4 = plVar2[0x8c], lVar4 != 0)) &&
             (cVar1 = *(char *)(param_1 + 0x1c0), cVar1 != *(char *)(lVar4 + 0x202))) {
            *(undefined1 *)(lVar4 + 0x201) = 0;
            *(char *)(lVar4 + 0x202) = cVar1;
            if (((char)plVar2[0x8f] != '\0') && (*(char *)(plVar2[0x8c] + 0x200) != '\0')) {
              *(char *)((longlong)plVar2 + 0x47c) =
                   (*(char *)(plVar2[0x8c] + 0x202) != '\0') + '\x02';
              *(undefined4 *)(plVar2 + 0x90) = *(undefined4 *)(plVar2[0x8c] + 0x1c0);
              *(undefined4 *)((longlong)plVar2 + 0x484) = *(undefined4 *)(plVar2[0x8c] + 0x1fc);
              lVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
              if (*(longlong *)(lVar4 + 0x148) != 0) {
                lVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
                uVar10 = (**(code **)(**(longlong **)(lVar4 + 0x148) + 0x6f0))();
                *(undefined4 *)(plVar2 + 0x91) = uVar10;
              }
            }
          }
          plVar7 = plVar7 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar5);
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 140ebf610 FUN_140ebf610 body=27 status=ok
// SIG undefined FUN_140ebf610(void)

void FUN_140ebf610(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[1]) {
    *(char *)(param_1 + 1) = param_2;
    if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140ebf623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x260))();
      return;
    }
  }
  return;
}



// FUNCTION 140ebf630 SetTarget body=8 status=ok
// SIG undefined SetTarget(void)

void UNewbieHelperWidget::SetTarget(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x210) = param_2;
  return;
}



// FUNCTION 140ebf640 FUN_140ebf640 body=22 status=ok
// SIG undefined FUN_140ebf640(void)

void FUN_140ebf640(longlong param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x202);
  *(char *)(param_1 + 0x202) = param_2;
  if (param_2 != cVar1) {
    *(undefined1 *)(param_1 + 0x201) = 0;
  }
  return;
}



// FUNCTION 140ebf660 FUN_140ebf660 body=135 status=ok
// SIG undefined FUN_140ebf660(void)

void FUN_140ebf660(int *param_1,float param_2,longlong param_3)

{
  int iVar1;
  
  if (param_2 != (float)param_1[6]) {
    param_1[6] = (int)param_2;
    FUN_140eb4310(param_1,param_3,0);
    if (*param_1 == -1) {
      *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
      *param_1 = *(int *)(param_3 + 0x50);
      iVar1 = *(int *)(param_3 + 0x50);
      if (iVar1 == -1) {
        iVar1 = 0;
      }
      *(int *)(param_3 + 0x50) = iVar1;
    }
    param_1[1] = param_1[1] + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_3);
    *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + 1;
    if (*(int *)(param_3 + 0x54) == -1) {
      *(undefined4 *)(param_3 + 0x54) = 0;
    }
    *(undefined8 *)(param_3 + 0xa8) = 0xffffffffffffffff;
    if (*(longlong **)(param_3 + 0xb0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_3 + 0xb0) + 0x260))();
    }
  }
  return;
}



// FUNCTION 140ebf6f0 FUN_140ebf6f0 body=835 status=ok
// SIG undefined FUN_140ebf6f0(void)

void FUN_140ebf6f0(longlong *param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  if (((char)param_1[0x25] == '\x03') && ((char)param_1[0x95] != param_2)) {
    plVar8 = param_1 + 0x92;
    if (param_2 == '\0') {
      FUN_140ec6d20();
    }
    else {
      param_1[0x94] = (longlong)param_1;
      param_1[0x93] = (longlong)&DAT_146871b70;
      *plVar8 = (longlong)DAT_146871b70;
      DAT_146871b70 = plVar8;
      if (*plVar8 != 0) {
        *(longlong **)(*plVar8 + 8) = plVar8;
      }
    }
    *(char *)(param_1 + 0x95) = param_2;
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      lVar7 = *(longlong *)(lVar3 + 0x140);
      if (lVar7 != 0) {
        lVar4 = FUN_141425c60();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar8 = (longlong *)(lVar7 + 0x580);
          if ((char)param_1[0x95] == '\0') {
            FUN_140483870(plVar8,param_1);
          }
          else {
            plVar5 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar5 != (longlong *)0x0) {
              *plVar5 = (longlong)&PTR_FUN_143f4d290;
              FWeakObjectPtr::operator=(plVar5 + 1,param_1);
              plVar5[2] = (longlong)&LAB_140eb7ba0;
              lVar4 = FDelegateHandle::GenerateNewID();
              plVar5[4] = lVar4;
              *plVar5 = (longlong)&PTR_FUN_143f4d2d8;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
              (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
              iVar1 = *(int *)(lVar7 + 0x588);
              *(int *)(lVar7 + 0x588) = iVar1 + 1;
              if (*(int *)(lVar7 + 0x58c) < iVar1 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
              }
              puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
              *puVar6 = plVar5;
              *(undefined4 *)(puVar6 + 1) = 3;
            }
          }
        }
      }
      lVar7 = UWorld::GetGameState<APVPGameState>(lVar3);
      if (lVar7 != 0) {
        plVar8 = (longlong *)(lVar7 + 0x5e0);
        if ((char)param_1[0x95] == '\0') {
          FUN_140483870(plVar8,param_1);
        }
        else {
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_1442e7fd8;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            plVar5[2] = (longlong)&LAB_140eb7ba0;
            lVar4 = FDelegateHandle::GenerateNewID();
            plVar5[4] = lVar4;
            *plVar5 = (longlong)&PTR_FUN_1442e8020;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
            (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
            iVar1 = *(int *)(lVar7 + 0x5e8);
            *(int *)(lVar7 + 0x5e8) = iVar1 + 1;
            if (*(int *)(lVar7 + 0x5ec) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
            }
            puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
            *puVar6 = plVar5;
            *(undefined4 *)(puVar6 + 1) = 3;
          }
        }
      }
      lVar3 = FUN_142f429c0(lVar3);
      if (lVar3 != 0) {
        plVar8 = (longlong *)(lVar3 + 0x500);
        if ((char)param_1[0x95] == '\0') {
          FUN_140483870(plVar8,param_1);
        }
        else {
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_143f4d290;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            plVar5[2] = (longlong)&LAB_140eb7ba0;
            lVar7 = FDelegateHandle::GenerateNewID();
            plVar5[4] = lVar7;
            *plVar5 = (longlong)&PTR_FUN_143f4d2d8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
            (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
            iVar1 = *(int *)(lVar3 + 0x508);
            *(int *)(lVar3 + 0x508) = iVar1 + 1;
            if (*(int *)(lVar3 + 0x50c) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
            }
            puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
            *puVar6 = plVar5;
            *(undefined4 *)(puVar6 + 1) = 3;
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ebfa40 FUN_140ebfa40 body=16 status=ok
// SIG undefined FUN_140ebfa40(void)

void FUN_140ebfa40(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x214) = param_2;
  *(undefined1 *)(param_1 + 0x206) = 1;
  return;
}



// FUNCTION 140ebfa50 FUN_140ebfa50 body=47 status=ok
// SIG undefined FUN_140ebfa50(void)

void FUN_140ebfa50(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x205) = param_5;
  *(undefined1 *)(param_1 + 0x203) = param_3;
  *(undefined1 *)(param_1 + 0x204) = param_4;
  *(undefined8 *)(param_1 + 0x208) = *param_2;
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 140ebfa80 FUN_140ebfa80 body=79 status=ok
// SIG undefined FUN_140ebfa80(void)

void FUN_140ebfa80(longlong *param_1,char param_2)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 0x3ae) != param_2) {
    *(char *)((longlong)param_1 + 0x3ae) = param_2;
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      *(byte *)((longlong)param_1 + 0x3ac) =
           *(char *)((longlong)param_1 + 0x3af) << 4 | *(byte *)((longlong)param_1 + 0x3ae);
                    /* WARNING: Could not recover jumptable at 0x000140ebfac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140ebfad0 FUN_140ebfad0 body=1054 status=ok
// SIG undefined FUN_140ebfad0(void)

void FUN_140ebfad0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res20 [8];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_3 + 0x38) == 0) {
    return;
  }
  plVar10 = *(longlong **)(*(longlong *)(param_3 + 0x38) + 0x118);
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  uVar4 = FUN_142dfdf30();
  plVar5 = (longlong *)(**(code **)(*plVar10 + 0x628))(plVar10,uVar4);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  lVar6 = 0;
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    lVar6 = FUN_1414ba0d0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar6 = 0;
    if (bVar1) {
      lVar6 = UMaterial::GetRenderProxy(plVar5);
    }
  }
  uVar3 = (**(code **)(*plVar5 + 0x400))(plVar5);
  bVar1 = false;
  lVar7 = FUN_1414ba0d0();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (plVar8 = (longlong *)(**(code **)(param_2[0x118] + 0x30))(), plVar8 != (longlong *)0x0)) {
      plVar9 = (longlong *)FGameplayTag::RequestGameplayTag(local_res20,DAT_146871b08,1);
      lVar7 = *plVar9;
      if (lVar7 != 0) {
        plVar11 = (longlong *)*plVar8;
        plVar9 = plVar11 + (int)plVar8[1];
        for (; plVar11 != plVar9; plVar11 = plVar11 + 1) {
          if (*plVar11 == lVar7) goto LAB_140ebfcb0;
        }
      }
      plVar9 = (longlong *)
               FGameplayTag::RequestGameplayTag
                         (local_res20,DAT_146871b10,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
      if (*plVar9 != 0) {
        plVar11 = (longlong *)*plVar8;
        plVar8 = plVar11 + (int)plVar8[1];
        for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
          if (*plVar11 == *plVar9) goto LAB_140ebfcb0;
        }
      }
    }
  }
LAB_140ebfcec:
  uVar4 = FUN_142dfdf30();
  plVar10 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar4);
  if (plVar10 != (longlong *)0x0) {
    if (lVar6 != 0) {
      lVar7 = FUN_1414ba0d0();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar10[0x3d] = lVar6;
      }
    }
    (**(code **)(*plVar10 + 0x3f8))(plVar10,uVar3);
    if (bVar1) {
      lVar7 = ALevelScriptActor::GetPrivateStaticClass();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140a0d670(plVar10);
      }
    }
  }
  plVar5 = (longlong *)param_2[0x2b];
  plVar10 = plVar5 + (int)param_2[0x2c];
  for (; plVar5 != plVar10; plVar5 = plVar5 + 1) {
    plVar8 = (longlong *)*plVar5;
    if (plVar8 != (longlong *)0x0) {
      lVar7 = FUN_1429d7ab0();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar4 = FUN_142dfdf30();
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
        if (plVar8 != (longlong *)0x0) {
          if (lVar6 != 0) {
            lVar7 = FUN_1414ba0d0();
            if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              plVar8[0x3d] = lVar6;
            }
          }
          (**(code **)(*plVar8 + 0x3f8))(plVar8,uVar3);
          if (bVar1) {
            lVar7 = ALevelScriptActor::GetPrivateStaticClass();
            if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_140a0d670(plVar8);
            }
          }
        }
      }
    }
  }
  return;
LAB_140ebfcb0:
  uVar4 = (**(code **)(*plVar10 + 0x148))(plVar10);
  lVar7 = FUN_140e7e6f0(uVar4);
  if (lVar7 != 0) {
    uVar4 = UMaterial::GetRenderProxy(plVar5);
    uVar3 = FUN_140e818f0(lVar7,uVar4,1);
    bVar1 = true;
  }
  goto LAB_140ebfcec;
}



// FUNCTION 140ebfef0 FUN_140ebfef0 body=47 status=ok
// SIG undefined FUN_140ebfef0(void)

void FUN_140ebfef0(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_142df36d0(*param_2);
    FUN_142df2ca0(*(undefined8 *)(param_1 + 0x20),uVar1);
    return;
  }
  return;
}



// FUNCTION 140ebff20 FUN_140ebff20 body=59 status=ok
// SIG undefined FUN_140ebff20(void)

void FUN_140ebff20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xc);
    FUN_140e36a80(uVar1,*param_2);
  }
  return;
}



// FUNCTION 140ebff60 FUN_140ebff60 body=165 status=ok
// SIG undefined FUN_140ebff60(void)

void FUN_140ebff60(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*param_2 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x908))();
    iVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    if (0 < iVar1) {
      do {
        lVar3 = (**(code **)(*param_1 + 0x5a8))(param_1,iVar4,0,0);
        if (lVar3 != 0) {
          FUN_1425a2750(lVar3,*param_2,param_3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return;
}



// FUNCTION 140ec0010 FUN_140ec0010 body=177 status=ok
// SIG undefined FUN_140ec0010(void)

void FUN_140ec0010(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*param_2 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x908))();
    iVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    if (0 < iVar1) {
      do {
        lVar3 = (**(code **)(*param_1 + 0x5a8))(param_1,iVar4,0,0);
        if (lVar3 != 0) {
          FUN_1425a2be0(lVar3,*param_2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return;
}



// FUNCTION 140ec00d0 FUN_140ec00d0 body=239 status=ok
// SIG undefined FUN_140ec00d0(void)

void FUN_140ec00d0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  plVar1 = plVar6 + *(int *)(param_1 + 0x18);
  if (plVar6 != plVar1) {
    do {
      plVar2 = (longlong *)*plVar6;
      if ((plVar2 != (longlong *)0x0) && (*param_2 != 0)) {
        iVar3 = (**(code **)(*plVar2 + 0x908))(plVar2);
        iVar4 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
        if (iVar3 <= iVar4) {
          iVar3 = iVar4;
        }
        iVar4 = 0;
        if (0 < iVar3) {
          do {
            lVar5 = (**(code **)(*plVar2 + 0x5a8))(plVar2,iVar4,0,0);
            if (lVar5 != 0) {
              FUN_1425a2750(lVar5,*param_2,param_3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}



// FUNCTION 140ec01c0 FUN_140ec01c0 body=265 status=ok
// SIG undefined FUN_140ec01c0(void)

void FUN_140ec01c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  plVar1 = plVar7 + *(int *)(param_1 + 0x18);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    plVar2 = (longlong *)*plVar7;
    if ((plVar2 != (longlong *)0x0) && (*param_2 != 0)) {
      iVar3 = (**(code **)(*plVar2 + 0x908))(plVar2);
      iVar4 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      iVar6 = 0;
      if (iVar3 <= iVar4) {
        iVar3 = iVar4;
      }
      if (0 < iVar3) {
        do {
          lVar5 = (**(code **)(*plVar2 + 0x5a8))(plVar2,iVar6,0,0);
          if (lVar5 != 0) {
            FUN_1425a2be0(lVar5,*param_2);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
    }
  }
  return;
}



// FUNCTION 140ec02d0 FUN_140ec02d0 body=77 status=ok
// SIG undefined FUN_140ec02d0(void)

void FUN_140ec02d0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xc);
    FUN_140e36a90(uVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 140ec0320 FUN_140ec0320 body=154 status=ok
// SIG undefined FUN_140ec0320(void)

void FUN_140ec0320(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x340);
    plVar5 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x348);
    lVar6 = (longlong)iVar3;
    plVar2 = plVar5 + lVar6 * 2;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 2) {
      if (plVar5[1] == 0) goto LAB_140ec03a2;
    }
    *(int *)(param_1 + 0x348) = iVar3 + 1;
    if (*(int *)(param_1 + 0x34c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar4 = (undefined8 *)(lVar6 * 0x10 + *plVar1);
    *puVar4 = 0;
    puVar4[1] = 0;
    plVar5 = (longlong *)(*plVar1 + lVar6 * 0x10);
LAB_140ec03a2:
    *plVar5 = param_2;
  }
  return;
}



// FUNCTION 140ec03c0 FUN_140ec03c0 body=27 status=ok
// SIG undefined FUN_140ec03c0(void)

void FUN_140ec03c0(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 9)) {
    *(char *)((longlong)param_1 + 9) = param_2;
    if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140ec03d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x260))();
      return;
    }
  }
  return;
}



// FUNCTION 140ec03e0 FUN_140ec03e0 body=46 status=ok
// SIG undefined FUN_140ec03e0(void)

void FUN_140ec03e0(char *param_1,char param_2)

{
  *param_1 = param_2;
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 4) = DAT_14629d250;
  }
  else if (param_2 == '\x02') {
    *(undefined4 *)(param_1 + 4) = DAT_14629d254;
    return;
  }
  return;
}



// FUNCTION 140ec0410 FUN_140ec0410 body=12 status=ok
// SIG undefined FUN_140ec0410(void)

void FUN_140ec0410(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1e8) = param_2;
  FUN_140ec9050();
  return;
}



// FUNCTION 140ec0420 FUN_140ec0420 body=17 status=ok
// SIG undefined FUN_140ec0420(void)

void FUN_140ec0420(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d0) = param_2;
  *(undefined4 *)(param_1 + 0x208) = param_2;
  return;
}



// FUNCTION 140ec0440 FUN_140ec0440 body=661 status=ok
// SIG undefined FUN_140ec0440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ec0440(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  longlong local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [24];
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(longlong *)(param_1 + 0x1d0) != 0) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c8,L"Bank Space: {0}/{1}",L"GFxGearUpExtractionMenu",
                         L"BankSpaceFormat");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_b0,uVar7);
      local_98[0] = 0;
      local_128 = local_98;
      local_70 = 0;
      puStack_120 = local_38;
      local_118 = *puVar8;
      local_110 = puVar8[1];
      local_68 = 0;
      local_40 = 0;
      if (local_110 != 0) {
        LOCK();
        *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
        UNLOCK();
      }
      local_90 = (longlong)param_2;
      local_60 = (longlong)param_3;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_128);
      uVar7 = FText::Format(local_e0,&local_118,uVar7);
      FText::FText(local_f8,uVar7);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_d8 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_108);
      lVar10 = 2;
      pcVar9 = &stack0xfffffffffffffff0;
      do {
        lVar10 = lVar10 + -1;
        pcVar2 = pcVar9 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar4 = *(longlong **)(pcVar9 + -0x40);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        pcVar9 = pcVar2;
      } while (lVar10 != 0);
      plVar4 = (longlong *)puVar8[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_c0 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1c8,local_f8,1,0);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_f0 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140ec06e0 FUN_140ec06e0 body=30 status=ok
// SIG undefined FUN_140ec06e0(void)

void FUN_140ec06e0(longlong *param_1,float param_2)

{
  if (param_2 != *(float *)((longlong)param_1 + 0xc)) {
    *(float *)((longlong)param_1 + 0xc) = param_2;
    if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140ec06f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x260))();
      return;
    }
  }
  return;
}



// FUNCTION 140ec0700 FUN_140ec0700 body=30 status=ok
// SIG undefined FUN_140ec0700(void)

void FUN_140ec0700(longlong *param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 2)) {
    *(float *)(param_1 + 2) = param_2;
    if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140ec0716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x260))();
      return;
    }
  }
  return;
}



// FUNCTION 140ec0720 FUN_140ec0720 body=201 status=ok
// SIG undefined FUN_140ec0720(void)

void FUN_140ec0720(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((((char)param_1[0x25] == '\x03') && (lVar1 = param_1[0x8c], lVar1 != 0)) &&
     (param_2 != *(char *)(lVar1 + 0x202))) {
    *(undefined1 *)(lVar1 + 0x201) = 0;
    *(char *)(lVar1 + 0x202) = param_2;
    if (((char)param_1[0x8f] != '\0') && (*(char *)(param_1[0x8c] + 0x200) != '\0')) {
      *(char *)((longlong)param_1 + 0x47c) = (*(char *)(param_1[0x8c] + 0x202) != '\0') + '\x02';
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1[0x8c] + 0x1c0);
      *(undefined4 *)((longlong)param_1 + 0x484) = *(undefined4 *)(param_1[0x8c] + 0x1fc);
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 0x148) != 0) {
        lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
        uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x148) + 0x6f0))();
        *(undefined4 *)(param_1 + 0x91) = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 140ec07f0 FUN_140ec07f0 body=245 status=ok
// SIG undefined FUN_140ec07f0(void)

void FUN_140ec07f0(longlong param_1,char param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong local_28;
  ulonglong local_20;
  
  pwVar5 = L"space";
  if (param_2 != '\0') {
    pwVar5 = L"full";
  }
  local_20 = 0;
  local_28 = 0;
  if (*pwVar5 != L'\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pwVar5[lVar4] != L'\0');
    uVar3 = (int)lVar4 + 1;
    local_20 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,pwVar5,(longlong)(int)uVar3 * 2);
  }
  FUN_142088cf0(param_1,&local_28);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (((param_2 != '\0') && (*(longlong *)(param_1 + 0x1a0) != 0)) &&
     (*(longlong *)(param_1 + 0x1a8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1a8) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x198,param_3,1,0);
    }
  }
  return;
}



// FUNCTION 140ec08f0 FUN_140ec08f0 body=835 status=ok
// SIG undefined FUN_140ec08f0(void)

void FUN_140ec08f0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  char param_5,char param_6,undefined4 param_7,float param_8)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_res8;
  
  if ((param_1[0x8c] != 0) && (param_2 != 0)) {
    pwVar5 = (wchar_t *)0x0;
    if (*(char *)((longlong)param_1 + 0x479) == '\0') {
      param_1[0x8b] = param_2;
      param_1[0x8d] = param_3;
      *(longlong *)(param_1[0x8c] + 0x1e8) = param_3;
      FUN_140ec9050();
      pwVar2 = _guard_xfg_dispatch_icall_nop(L"&ATransporterCrane::OnReachedEnd",L"::");
      pwVar3 = pwVar5;
      while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
        pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar3 = pwVar1;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
      ::__Internal_AddDynamic<ANuker1BasicLMProjectile>
                (param_1[0x8c] + 0x178,param_1,FUN_140eb8d40,local_res8);
    }
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&ATransporterCrane::OnReachedPickupPoint",L"::");
    pwVar3 = pwVar5;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0x8c] + 0x188,param_1,local_res8);
    if (param_6 != '\0') {
      *(undefined4 *)(param_1[0x8c] + 0x1a8) = param_7;
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ATransporterCrane::OnReachedPickupPoint",L"::");
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
      ::__Internal_AddDynamic<ANuker1BasicLMProjectile>
                (param_1[0x8c] + 0x188,param_1,FUN_140eb8db0,local_res8);
    }
    if (0.0 <= param_8) {
      if (1.0 <= param_8) {
        param_8 = 1.0;
      }
    }
    else {
      param_8 = 0.0;
    }
    fVar7 = param_8;
    if (param_5 != '\0') {
      fVar7 = 1.0 - param_8;
    }
    FUN_140ec37c0(param_1[0x8c],fVar7);
    if (param_1[0x8e] != 0) {
      FUN_142398ec0(param_1[0x8e],1);
    }
    lVar4 = param_1[0x8c];
    if (param_5 != *(char *)(lVar4 + 0x202)) {
      *(undefined1 *)(lVar4 + 0x201) = 0;
    }
    *(char *)(lVar4 + 0x202) = param_5;
    *(undefined4 *)(param_1[0x8c] + 0x1c0) = param_4;
    *(undefined4 *)(param_1[0x8c] + 0x1cc) = param_4;
    if (*(longlong *)(param_1[0x8c] + 0x1e8) != 0) {
      *(undefined1 *)(param_1[0x8c] + 0x200) = 1;
    }
    *(undefined1 *)(param_1 + 0x8f) = 1;
    if (param_5 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x47c) = 2;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x47c) = 3;
      param_8 = 1.0 - param_8;
    }
    *(float *)((longlong)param_1 + 0x484) = param_8 * *(float *)(param_1[0x8c] + 0x1f0);
    *(undefined4 *)(param_1 + 0x90) = param_4;
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar4 + 0x148) != 0) {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x148) + 0x6f0))();
      *(undefined4 *)(param_1 + 0x91) = uVar6;
    }
    FUN_1414d5ea0(param_1);
    FUN_1414d6290(param_1[0x8b],param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x479) = 1;
  return;
}



// FUNCTION 140ec0c40 FUN_140ec0c40 body=571 status=ok
// SIG undefined FUN_140ec0c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ec0c40(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
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
  
  if (param_2 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
    local_c8 = *(undefined4 *)(param_1 + 0x1d8);
    local_d0 = CONCAT31(local_d0._1_3_,*(undefined1 *)(param_1 + 0x1dc));
    local_d8 = *(undefined1 *)(param_1 + 0x1c0);
    local_c0 = param_3;
    FUN_140ec08f0(param_2,param_1,*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 400));
    if ((*(char *)(param_1 + 0x1dc) != '\0') &&
       (*(undefined1 *)(param_1 + 0x1dc) = 0, *(longlong *)(param_1 + 0x118) != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18c);
      uStack_b0 = 0;
      local_b8 = &LAB_140eb41a0;
      uVar2 = AActor::GetWorldTimerManager();
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
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,param_1 + 0x1d0,&local_a8,uVar1);
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
  }
  return;
}



// FUNCTION 140ec0e80 FUN_140ec0e80 body=207 status=ok
// SIG undefined FUN_140ec0e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ec0e80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (*(longlong *)(param_1 + 0x210) == 0) {
    return;
  }
  FUN_140ec8f40(param_1,0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  local_1c = _DAT_1468b5d90;
  local_14 = DAT_1468b5d98;
  if (lVar1 != 0) {
    local_1c = *(undefined8 *)(lVar1 + 0x220);
    local_14 = *(undefined4 *)(lVar1 + 0x228);
  }
  uVar2 = FUN_1423ac1f0(*(undefined8 *)(param_1 + 0x210),&local_1c,param_3,param_4,local_1c,local_14
                       );
  uVar2 = FUN_1423ae500(*(undefined8 *)(param_1 + 0x210),uVar2);
  *(undefined4 *)(param_1 + 0x1d0) = uVar2;
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  FUN_140ea5710(param_1,*(undefined8 *)(param_1 + 0x118));
  return;
}



// FUNCTION 140ec0f50 FUN_140ec0f50 body=424 status=ok
// SIG undefined FUN_140ec0f50(void)

void FUN_140ec0f50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (((*(longlong *)(param_1 + 0xb0) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x118) != 0)) &&
     (*(int *)(param_1 + 0x128) != 0)) {
    plVar5 = *(longlong **)(param_1 + 0x140);
    uVar7 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x418))(plVar5,&DAT_146532190);
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    plVar4 = *(longlong **)(param_1 + 0x120);
    plVar5 = plVar4 + *(int *)(param_1 + 0x128);
    for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        lVar3 = UMultiLineEditableTextBox::GetPrivateStaticClass();
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
          FUN_143111ce0(lVar1,param_2,param_3);
        }
      }
    }
    plVar5 = *(longlong **)(param_1 + 0x130);
    uVar6 = (longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_1 + 0x138) < plVar5) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      do {
        plVar4 = (longlong *)*plVar5;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x3b0))(plVar4,0);
        }
        plVar5 = plVar5 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar6);
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 300)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x120,0);
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x13c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x130,0);
    }
    *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xfe;
  }
  return;
}



// FUNCTION 140ec1100 FUN_140ec1100 body=133 status=ok
// SIG undefined FUN_140ec1100(void)

void FUN_140ec1100(longlong param_1,undefined8 *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  if ((param_4 != '\0') && (iVar1 = FUN_14233f450(), iVar1 != 3)) {
    return;
  }
  if (*(char *)(param_1 + 0x3ae) != '\0') {
    if (param_4 == '\0') {
      FUN_140ec0f50(param_1 + 0x4e0,param_2,param_3);
    }
    else {
      local_28 = *param_2;
      local_20 = *(undefined4 *)(param_2 + 1);
      FUN_14147cdc0(param_1,&local_28);
    }
  }
  return;
}



// FUNCTION 140ec1190 FUN_140ec1190 body=140 status=ok
// SIG undefined FUN_140ec1190(void)

bool FUN_140ec1190(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  lVar1 = ULevelStreaming::GetWorld();
  if (lVar1 != 0) {
    uVar2 = ULevelStreaming::GetWorld(param_1);
    lVar1 = UWorld::GetGameState<APVPGameState>(uVar2);
    if ((lVar1 != 0) &&
       (pcVar3 = (char *)FUN_140cb7100(lVar1), *pcVar3 == *(char *)(param_1 + 0x141))) {
      if (*(char *)(param_1 + 0x140) != '\0') {
        return pcVar3[1] == *(char *)(param_1 + 0x140);
      }
      pcVar4 = *(char **)(param_1 + 0x148);
      pcVar5 = pcVar4 + *(int *)(param_1 + 0x150);
      if (pcVar4 != pcVar5) {
        do {
          if (*pcVar4 == pcVar3[1]) {
            return false;
          }
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != pcVar5);
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 140ec1220 FUN_140ec1220 body=61 status=ok
// SIG undefined FUN_140ec1220(void)

undefined4 FUN_140ec1220(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  lVar1 = ULevelStreaming::GetWorld();
  if (lVar1 != 0) {
    uVar2 = ULevelStreaming::GetWorld(param_1);
    iVar3 = FUN_1428cf800(uVar2);
    if (iVar3 == 3) {
      return 1;
    }
  }
  uVar4 = thunk_FUN_142550ca0(param_1);
  return uVar4;
}



// FUNCTION 140ec1260 FUN_140ec1260 body=79 status=ok
// SIG undefined FUN_140ec1260(void)

void FUN_140ec1260(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) != '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0xc);
      FUN_140e1df50(uVar2,0,0,0,1);
    }
  }
  return;
}



// FUNCTION 140ec12b0 FUN_140ec12b0 body=69 status=ok
// SIG undefined FUN_140ec12b0(void)

void FUN_140ec12b0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x118) != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    FUN_140ec9050();
    FUN_140ec37c0(param_1,*(float *)(param_1 + 0x1fc) / *(float *)(param_1 + 0x1f0));
    return;
  }
  return;
}



// FUNCTION 140ec1300 FUN_140ec1300 body=500 status=ok
// SIG undefined FUN_140ec1300(void)

void FUN_140ec1300(longlong *param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_1407c93d0(param_2);
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x340))(param_1,param_2);
    FUN_1407da830(param_1,param_2,0);
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return;
      }
      FUN_140eb16b0(param_1,plVar2);
      FUN_140eb18e0(param_1,plVar2,param_2 + 8);
      if (plVar2 != (longlong *)0x0) {
        if (param_1[0x4a] != 0) {
          uVar3 = FUN_142e79d90();
          lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
          if (lVar4 != 0) {
            FUN_142ddc6a0(lVar4,param_1[0x4a]);
          }
        }
        if (param_1[0x4b] != 0) {
          uVar3 = FUN_142e79d90();
          lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
          if (lVar4 != 0) {
            FUN_142df2ca0(lVar4,param_1[0x4b]);
          }
        }
        if (param_1[0x4c] != 0) {
          uVar3 = FUN_142e5c1e0();
          lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
          if (lVar4 != 0) {
            FUN_142cac740(lVar4,param_1[0x4c]);
          }
        }
        if (param_1[0x4d] != 0) {
          uVar3 = FUN_140604cc0();
          lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
          if (lVar4 != 0) {
            FUN_1405f14d0(lVar4,param_1[0x4d]);
          }
        }
        if ((((int)param_1[0x50] != 0) || ((int)param_1[0x52] != 0)) || ((int)param_1[0x54] != 0)) {
          uVar3 = FUN_142e27720();
          lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
          if (lVar4 != 0) {
            FUN_142c65d60(lVar4,param_1 + 0x4f,param_1 + 0x51,param_1 + 0x53,(char)param_1[0x4e]);
          }
        }
      }
      FUN_1407da830(param_1,param_2,1);
      FUN_1407c5c70(param_2);
      return;
    }
    (**(code **)(*param_1 + 0x348))(param_1,param_2);
  }
  <lambda_a8cc8296dde5d0c9e0a57530f5774840>::<lambda_invoker_cdecl>(param_2);
  return;
}



// FUNCTION 140ec1500 FUN_140ec1500 body=571 status=ok
// SIG undefined FUN_140ec1500(void)

void FUN_140ec1500(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;
  code *local_38;
  undefined8 **ppuStack_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  lVar4 = 0;
  if (*(longlong *)(param_2 + 0x50) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x208);
    if (plVar5 == (longlong *)0x0) goto LAB_140ec171a;
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*plVar5 + 0x280))(plVar5,&local_18);
    plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x118);
    if (plVar5 != (longlong *)0x0) {
      uVar2 = FUN_142dfdf30();
      uVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if (uVar3 != 0) {
        local_58 = &local_28;
        ppuStack_30 = &local_58;
        local_28 = 0;
        local_38 = FUN_140ea5180;
        local_20 = 0;
        local_50 = uVar3;
        local_48 = plVar5;
        FUN_142ff36a0(&local_18,plVar5,&local_38);
        if (0 < (int)local_20) {
          local_58 = (longlong *)0x0;
          local_50 = local_50 & 0xffffffff00000000;
          local_38 = (code *)0x0;
          ppuStack_30 = (undefined8 **)((ulonglong)ppuStack_30 & 0xffffffff00000000);
          lVar4 = FUN_143018960(local_28,*(undefined8 *)(param_2 + 0x28),param_2 + 0xc,&local_38,
                                &local_58,0,0);
        }
        if ((int)local_20 != 0) {
          plVar5 = (longlong *)(local_28 + 0x38);
          iVar6 = (int)local_20;
          do {
            if (plVar5[2] != 0) {
              FMemory::Free();
            }
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar5 + -3);
            plVar5 = plVar5 + 0xc;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (local_28 != 0) {
          FMemory::Free();
        }
      }
    }
    if ((int)local_10 != 0) {
      plVar5 = (longlong *)(local_18 + 0x78);
      iVar6 = (int)local_10;
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 0x11;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    lVar1 = FUN_140b7dbc0(*(undefined8 *)(param_2 + 0x28),*(longlong *)(param_2 + 0x50) + 0x10);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x6ba) = 1;
      local_38 = *(code **)(param_2 + 0x18);
      local_58 = *(longlong **)(param_2 + 0xc);
      ppuStack_30 = (undefined8 **)CONCAT44(ppuStack_30._4_4_,*(undefined4 *)(param_2 + 0x20));
      local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_2 + 0x14));
      FUN_14223ca30(lVar1,&local_58,&local_38,0,0,1);
      lVar4 = lVar1;
    }
  }
  FUN_1407da760(param_2,lVar4);
LAB_140ec171a:
  FUN_1407c5c70(param_2);
  return;
}



// FUNCTION 140ec1740 FUN_140ec1740 body=368 status=ok
// SIG undefined FUN_140ec1740(void)

void FUN_140ec1740(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(param_2 + 0x128) == 1) {
    FUN_1407dade0();
    cVar2 = FUN_1407cd260(param_2);
    if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x1e0) != 0)) {
      FUN_1407c0890(param_2);
      return;
    }
  }
  else {
    plVar3 = (longlong *)FUN_1407c8b50(param_2,1);
    cVar2 = (**(code **)(*plVar3 + 800))(plVar3);
    if (cVar2 != '\0') {
      FUN_1407dc2b0(param_2,1);
      cVar2 = FUN_1407cd260(param_2);
      if (cVar2 != '\0') {
        FUN_1407dc2b0(param_2,1);
        cVar2 = FUN_1407cd260(param_2);
        if (cVar2 != '\0') {
          lVar4 = FUN_1407c93d0(param_2);
          if (lVar4 != 0) {
            lVar5 = FUN_1414d8e60();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) && (*(longlong *)(lVar4 + 0x4d8) != 0)) {
              plVar3 = (longlong *)FUN_1407c7500(param_2,1);
              if (plVar3 != (longlong *)0x0) {
                lVar5 = (**(code **)(*plVar3 + 0x668))(plVar3);
                if (lVar5 != 0) {
                  lVar6 = FUN_1413e48b0();
                  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    FUN_140a029b0(lVar5,lVar4,1);
                  }
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



// FUNCTION 140ec18b0 FUN_140ec18b0 body=654 status=ok
// SIG undefined FUN_140ec18b0(void)

void FUN_140ec18b0(longlong *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong local_38;
  int local_30;
  ulonglong uVar13;
  
  uVar13 = 0;
  iVar12 = 0;
  iVar4 = *param_2 / 100;
  iVar3 = iVar4 + -1;
  *param_2 = *param_2 % 100;
  if (iVar3 == -1) {
    FUN_140ec24a0(param_1,param_2);
    (**(code **)(*param_1 + 0x368))(param_1,param_2);
    lVar5 = FUN_1407c93d0(param_2);
    iVar9 = iVar12;
    if (lVar5 != 0) {
      lVar6 = FUN_14148cad0();
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
        iVar3 = (**(code **)(*param_1 + 0x358))(param_1);
        iVar4 = UProceduralMeshComponent::GetNumMaterials(lVar5);
        if (iVar4 <= iVar3) {
          iVar3 = iVar4;
        }
        (**(code **)(*param_1 + 0x360))(param_1,&local_38,iVar3);
        uVar10 = uVar13;
        uVar11 = uVar13;
        if (0 < iVar3) {
          do {
            if (local_30 <= (int)uVar11) break;
            uVar7 = uVar13;
            if (((*(char *)(local_38 + uVar10) != '\0') &&
                (lVar6 = FUN_1412286a0(lVar5,uVar11), lVar6 != 0)) &&
               (uVar7 = 0, *(char *)(lVar6 + 0x6b9) == '\0')) {
              uVar7 = (**(code **)(*param_1 + 0x350))(param_1,uVar11,*(undefined8 *)(param_2 + 0xe))
              ;
            }
            uVar8 = FUN_140589b80(param_1);
            FUN_1407c0940(param_2,uVar7,uVar8);
            uVar11 = (ulonglong)((int)uVar11 + 1);
            uVar10 = uVar10 + 1;
          } while ((longlong)uVar10 < (longlong)iVar3);
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
      }
    }
    goto LAB_140ec1aa5;
  }
  FUN_1407dc2b0(param_2,iVar4);
  cVar2 = FUN_1407cd260(param_2);
  iVar9 = iVar3;
  if (cVar2 == '\0') goto LAB_140ec1aa5;
  uVar10 = FUN_1407c93d0(param_2);
  if (uVar10 == 0) {
LAB_140ec1a7d:
    uVar10 = uVar13;
  }
  else {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ec1a7d;
  }
  lVar5 = FUN_1407c7500(param_2,iVar4);
  iVar9 = iVar4;
  if ((uVar10 != 0) && (lVar5 != 0)) {
    FUN_14120d720(uVar10,lVar5,iVar3);
  }
LAB_140ec1aa5:
  iVar3 = param_2[0x4a];
  cVar2 = FUN_1407cd260(param_2);
  if ((cVar2 == '\0') || (iVar9 < iVar3 + -1)) {
    cVar2 = FUN_1407cd260(param_2);
    if (cVar2 == '\0') {
      iVar12 = *param_2;
    }
    *param_2 = (iVar9 + 1) * 100 + iVar12;
  }
  else {
    lVar5 = FUN_1407c93d0(param_2);
    if (lVar5 != 0) {
      lVar6 = FUN_14148cad0();
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
        FUN_141241530(lVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ec1b40 FUN_140ec1b40 body=630 status=ok
// SIG undefined FUN_140ec1b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ec1b40(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [48];
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar6 = *(longlong *)(param_1 + 0x178);
  iVar8 = 0;
  iVar11 = 0;
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x180)) {
    lVar9 = 0;
    do {
      iVar12 = iVar12 + *(int *)(lVar6 + 8 + lVar9);
      iVar2 = rand();
      lVar6 = *(longlong *)(param_1 + 0x178);
      lVar9 = lVar9 + 0x10;
      iVar1 = iVar11;
      if ((float)*(int *)(lVar6 + -8 + lVar9) <= (float)iVar2 * (float)iVar12 * 3.051851e-05) {
        iVar1 = iVar8;
      }
      iVar8 = iVar1;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x180));
  }
  lVar9 = (longlong)iVar8 * 0x10;
  if (*(longlong *)(lVar9 + lVar6) == 0) {
    return;
  }
  lVar3 = AMapFog::GetPrivateStaticClass();
  lVar4 = *(longlong *)(lVar9 + lVar6);
  while( true ) {
    if (lVar4 == 0) {
      return;
    }
    if (lVar4 == lVar3) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  if (*(longlong *)(lVar9 + lVar6) == 0) {
    return;
  }
  plVar7 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x1b0));
  plVar10 = plVar7 + *(int *)(lVar9 + 8 + *(longlong *)(param_1 + 0x1b0));
  for (; plVar7 != plVar10; plVar7 = plVar7 + 1) {
    lVar6 = *plVar7;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x478) == '\0')) goto LAB_140ec1d80;
  }
  FUN_1423aeff0(*(undefined8 *)(param_1 + 0x1a8),&local_b8,0,1);
  lVar6 = *(longlong *)(param_1 + 0x178);
  local_58 = _DAT_1468716e0 & _DAT_1468716f0;
  uStack_54 = uRam00000001468716e4 & uRam00000001468716f4;
  uStack_50 = uRam00000001468716e8 & uRam00000001468716f8;
  uStack_4c = uRam00000001468716ec & uRam00000001468716fc;
  local_68._4_4_ = local_b4;
  local_68._0_4_ = local_b8;
  local_68._8_4_ = local_b0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = uRam00000001468716ec;
  local_68._12_4_ = 0;
  if (*(longlong *)(lVar9 + lVar6) != 0) {
    lVar3 = AMapFog::GetPrivateStaticClass();
    lVar6 = *(longlong *)(lVar9 + lVar6);
    for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar3) goto LAB_140ec1d17;
    }
  }
  lVar6 = 0;
LAB_140ec1d17:
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  uVar5 = FActorSpawnParameters::FActorSpawnParameters(local_a8);
  lVar6 = FUN_142550d00(lVar4,lVar6,&local_78,uVar5);
  if (lVar6 != 0) {
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar9);
    iVar8 = (int)plVar10[1];
    *(int *)(plVar10 + 1) = iVar8 + 1;
    if (*(int *)((longlong)plVar10 + 0xc) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar8);
    }
    *(longlong *)(*plVar10 + (longlong)iVar8 * 8) = lVar6;
LAB_140ec1d80:
    FUN_140ec0c40(param_1,lVar6);
  }
  return;
}



// FUNCTION 140ec1dc0 FUN_140ec1dc0 body=413 status=ok
// SIG undefined FUN_140ec1dc0(void)

undefined8
FUN_140ec1dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,longlong *param_7)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [12];
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong local_68;
  uint local_60;
  uint uStack_5c;
  
  uVar13 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_5c = 0;
  pauVar11 = (undefined1 (*) [12])*param_7;
  pauVar1 = pauVar11 + (int)param_7[1];
  uVar14 = uVar13;
  uVar15 = uVar13;
  uVar7 = DAT_1464aa790;
  uVar8 = DAT_1464aa788._4_4_;
  uVar9 = (undefined4)DAT_1464aa788;
  for (; DAT_1464aa788._0_4_ = uVar9, DAT_1464aa788._4_4_ = uVar8, DAT_1464aa790 = uVar7,
      pauVar11 != pauVar1; pauVar11 = pauVar11 + 1) {
    auVar5 = *pauVar11;
    uVar10 = *param_6;
    uVar6 = param_6[1];
    lVar12 = (longlong)(int)uVar14;
    local_60 = (int)uVar14 + 1;
    if ((int)uVar15 < (int)local_60) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_68,uVar14);
      uVar15 = (ulonglong)uStack_5c;
      uVar13 = local_68;
    }
    uVar14 = (ulonglong)local_60;
    puVar2 = (undefined8 *)(uVar13 + lVar12 * 0x30);
    *puVar2 = uVar10;
    puVar2[1] = uVar6;
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auVar5;
    *(undefined1 (*) [16])(uVar13 + 0x10 + lVar12 * 0x30) = auVar3;
    auVar4._4_4_ = uVar8;
    auVar4._0_4_ = uVar9;
    auVar4._8_4_ = uVar7;
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(uVar13 + 0x20 + lVar12 * 0x30) = auVar4;
    uVar7 = DAT_1464aa790;
    uVar8 = DAT_1464aa788._4_4_;
    uVar9 = (undefined4)DAT_1464aa788;
  }
  uVar10 = FUN_140ec1f60(param_1,param_2,param_3,param_4,param_5,param_6,&local_68);
  if (uVar13 != 0) {
    FMemory::Free(uVar13);
  }
  return uVar10;
}



// FUNCTION 140ec1f60 FUN_140ec1f60 body=1330 status=ok
// SIG undefined FUN_140ec1f60(void)

longlong FUN_140ec1f60(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      longlong param_5,undefined8 param_6,longlong *param_7)

{
  undefined4 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong in_stack_fffffffffffffef8;
  ulonglong in_stack_ffffffffffffff00;
  uint in_stack_ffffffffffffff08;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_40;
  ushort local_3e;
  
  if (((param_1 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_1 + 0x148))(), lVar4 == 0)) ||
     (param_4 == 0)) {
    return 0;
  }
  plVar6 = *(longlong **)(param_4 + 0x30);
  if ((param_5 != 0) && (plVar6 != (longlong *)0x0)) {
    uVar5 = GetTransientPackage();
    in_stack_ffffffffffffff08 = 0xff800000;
    in_stack_fffffffffffffef8 = 0;
    plVar6 = (longlong *)
             FUN_1417987a0(plVar6,uVar5,0,0xefffffff,0,
                           in_stack_ffffffffffffff00 & 0xffffffff00000000,0xff800000);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x300))(plVar6,param_5);
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_68);
  local_3e = local_3e | 4;
  local_40 = 1;
  local_58 = param_2;
  uVar5 = FUN_14147d9d0();
  lVar4 = FUN_142550d00(lVar4,uVar5,param_6,local_68);
  if (lVar4 == 0) {
    return 0;
  }
  lVar7 = UCableComponent::GetAttachedActor(lVar4);
  local_c8 = lVar7;
  if (lVar7 != 0) {
    FUN_1407daaa0(lVar7,plVar6);
    FUN_1407da880(lVar7,param_4 + 0x38);
    plVar6 = (longlong *)(lVar7 + 0x908);
    if (plVar6 != (longlong *)(param_4 + 0x40)) {
      iVar12 = *(int *)(lVar7 + 0x910);
      if (iVar12 != 0) {
        plVar11 = (longlong *)(*plVar6 + 0x20);
        do {
          if (plVar11[2] != 0) {
            FMemory::Free();
          }
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          if (plVar11[-2] != 0) {
            FMemory::Free();
          }
          if (plVar11[-4] != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 0x2b;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      iVar12 = *(int *)(param_4 + 0x48);
      lVar8 = *(longlong *)(param_4 + 0x40);
      *(int *)(lVar7 + 0x910) = iVar12;
      if ((iVar12 == 0) && (*(int *)(lVar7 + 0x914) == 0)) {
        *(undefined4 *)(lVar7 + 0x914) = 0;
      }
      else {
        FUN_1407e7d30(plVar6,iVar12);
        if (iVar12 != 0) {
          lVar8 = lVar8 - *plVar6;
          lVar9 = *plVar6 + 0x3c;
          do {
            *(undefined8 *)(lVar9 + -0x3c) = 0;
            *(undefined8 *)(lVar9 + -0x34) = 0;
            *(undefined8 *)(lVar9 + -0x2c) = 0;
            *(undefined8 *)(lVar9 + -0x24) = 0;
            FGameplayTagContainer::operator=(lVar9 + -0x3c,lVar9 + -0x3c + lVar8);
            *(undefined8 *)(lVar9 + -0x1c) = 0;
            *(undefined8 *)(lVar9 + -0x14) = 0;
            *(undefined8 *)(lVar9 + -0xc) = 0;
            *(undefined8 *)(lVar9 + -4) = 0;
            FGameplayTagContainer::operator=(lVar9 + -0x1c,lVar9 + -0x1c + lVar8);
            *(undefined1 *)(lVar9 + 4) = *(undefined1 *)(lVar8 + 4 + lVar9);
            FUN_142de2b80(lVar9 + 0xc,lVar9 + 0xc + lVar8);
            *(undefined1 *)(lVar9 + 0x8c) = *(undefined1 *)(lVar8 + 0x8c + lVar9);
            FUN_142de2b80(lVar9 + 0x94,lVar9 + 0x94 + lVar8);
            *(undefined1 *)(lVar9 + 0x114) = *(undefined1 *)(lVar8 + 0x114 + lVar9);
            *(undefined1 *)(lVar9 + 0x115) = *(undefined1 *)(lVar8 + 0x115 + lVar9);
            lVar9 = lVar9 + 0x158;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
      }
    }
  }
  plVar6 = (longlong *)0x0;
  FUN_14222b9f0(lVar4,param_6,0,0);
  if (param_3 != 0) {
    plVar6 = *(longlong **)(param_3 + 0x118);
  }
  if (plVar6 != (longlong *)0x0) {
    uVar5 = FUN_1414ba0d0();
    lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar5);
    if ((lVar8 != 0) && (lVar9 = AIndianaUI::GetArmorComponent(lVar4), lVar9 != 0)) {
      lVar10 = FUN_1414ba0d0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = UMaterial::GetRenderProxy(lVar8);
        *(undefined8 *)(lVar9 + 0x1e8) = uVar5;
      }
    }
  }
  local_d8 = 0;
  iVar12 = (int)param_7[1];
  if (0x1f < (int)param_7[1]) {
    iVar12 = 0x20;
  }
  local_d0 = 0;
  lVar8 = (longlong)iVar12;
  local_a8 = param_4;
  local_a0 = plVar6;
  local_98 = lVar7;
  if (0 < iVar12) {
    lVar7 = 0;
    do {
      FUN_1417846f0(lVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar5 = FUN_141477600();
      in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffff00;
      in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
      lVar9 = FUN_1417985e0(uVar5,lVar4,0,0,in_stack_fffffffffffffef8,0,in_stack_ffffffffffffff08,0,
                            0);
      if (lVar9 != 0) {
        in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffffffffff00;
        puVar1 = (undefined4 *)(lVar7 + *param_7);
        local_78 = *puVar1;
        uStack_74 = puVar1[1];
        uStack_70 = puVar1[2];
        uStack_6c = puVar1[3];
        FUN_142399b10(lVar9,&local_78,0,0,in_stack_fffffffffffffef8);
        in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffffffffff00;
        puVar1 = (undefined4 *)(lVar7 + 0x10 + *param_7);
        local_b8 = *puVar1;
        uStack_b4 = puVar1[1];
        local_b0 = puVar1[2];
        local_88 = local_b0;
        FUN_1423990b0(lVar9,&local_b8,0,0,in_stack_fffffffffffffef8);
        FUN_140e9d2f0(&local_a8,lVar9);
        FUN_14234b150(lVar9);
        uVar3 = local_d0;
        lVar10 = (longlong)(int)local_d0;
        iVar12 = (int)local_d0 + 1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar12);
        if (local_d0._4_4_ < iVar12) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_d8,uVar3 & 0xffffffff);
        }
        *(longlong *)(local_d8 + lVar10 * 8) = lVar9;
      }
      lVar7 = lVar7 + 0x30;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    if (0 < (int)local_d0) {
      if (local_c8 != 0) {
        FUN_1407da9b0(local_c8,&local_d8);
      }
      goto LAB_140ec2442;
    }
  }
  lVar7 = FUN_1407caf40(lVar4);
  if (lVar7 == 0) {
LAB_140ec2434:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_141477600();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140ec2434;
  }
  FUN_140e9d2f0(&local_a8,lVar7);
LAB_140ec2442:
  if (local_d8 != 0) {
    FMemory::Free();
  }
  return lVar4;
}



// FUNCTION 140ec24a0 FUN_140ec24a0 body=1233 status=ok
// SIG undefined FUN_140ec24a0(void)

void FUN_140ec24a0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_148;
  undefined8 local_140;
  longlong local_138 [2];
  undefined4 local_128 [2];
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  int local_100;
  int local_fc;
  longlong local_f8;
  longlong local_e8;
  longlong local_d8;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_48 [16];
  
  local_138[0] = param_2;
  lVar5 = (**(code **)(*param_1 + 0x378))();
  lVar10 = param_2;
  if (lVar5 == 0) {
    FUN_1407c51d0(param_1,param_2);
    FUN_1407c5000(param_1,param_2);
    uVar6 = FUN_1407c93d0(param_2);
    FUN_140ebfad0(param_1,uVar6,param_2 + 8);
    goto LAB_140ec28da;
  }
  plVar7 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
  lVar5 = plVar7[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar5 = plVar7[0x1f];
    if (lVar5 == 0) goto LAB_140ec28da;
  }
  if ((*(longlong *)(param_2 + 0x40) == 0) ||
     (lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x118), lVar9 == 0)) {
LAB_140ec259b:
    lVar9 = FUN_140e7e6f0(*(undefined8 *)(param_2 + 0x28));
    if (lVar9 == 0) {
      uVar4 = 1;
    }
    else {
      uVar6 = FUN_140e80650(lVar9,param_2 + 0xc,0);
      uVar4 = FUN_140e818f0(lVar9,uVar6,1,0);
    }
  }
  else {
    lVar8 = FUN_14147d9d0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (plVar7 = (longlong *)FUN_140e81890(lVar9), plVar7 == (longlong *)0x0))
    goto LAB_140ec259b;
    uVar4 = (**(code **)(*plVar7 + 0x400))(plVar7);
  }
  _guard_xfg_dispatch_icall_nop(local_128,0,0x68);
  local_128[0] = uVar4;
  local_110 = FUN_141796df0(lVar5 + 0x40);
  puVar12 = (undefined8 *)0x0;
  if (local_110 == 0) {
LAB_140ec2637:
    local_110 = 0;
  }
  else {
    lVar5 = FUN_14302d420();
    if ((*(int *)(*(longlong *)(local_110 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_110 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ec2637;
  }
  local_118 = (**(code **)(*param_1 + 0x378))(param_1);
  if (local_118 == 0) {
    local_120 = 0;
  }
  else {
    local_120 = FUN_14057ade0(local_118);
  }
  cVar3 = FUN_143003610(local_128);
  if (cVar3 == '\0') {
    FUN_1407c5c70(param_2);
    if (local_d8 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (local_108 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  local_a8 = local_120;
  local_a0 = local_118;
  local_98 = local_110;
  local_90 = local_128[0];
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 1;
  uVar6 = (**(code **)(*param_1 + 0x2d0))(param_1);
  plVar7 = (longlong *)FUN_14301a2a0(*(undefined8 *)(param_2 + 0x28),&local_a8,&DAT_1468b5b70,uVar6)
  ;
  local_b8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    local_b0 = plVar7[0x23];
    puVar11 = &local_88;
    if ((int)local_80 == 0) {
      puVar11 = puVar12;
    }
    local_148 = (undefined8 *)0x0;
    local_140 = 0;
    FUN_142d7dfb0(local_a0,local_b0,local_128[0],&local_148,puVar11);
    puVar11 = (undefined8 *)
              ((ulonglong)((longlong)(local_148 + (int)local_140) + (7 - (longlong)local_148)) >> 3)
    ;
    if (local_148 + (int)local_140 < local_148) {
      puVar11 = puVar12;
    }
    puVar13 = local_148;
    if (puVar11 != (undefined8 *)0x0) {
      do {
        iVar2 = local_100;
        lVar10 = (longlong)local_100;
        uVar6 = *puVar13;
        local_100 = local_100 + 1;
        if (local_fc < local_100) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_108,iVar2);
        }
        puVar12 = (undefined8 *)((longlong)puVar12 + 1);
        *(undefined8 *)(local_108 + lVar10 * 8) = uVar6;
        lVar10 = local_138[0];
        puVar13 = puVar13 + 1;
        plVar7 = local_b8;
      } while (puVar12 != puVar11);
    }
    if (local_148 != (undefined8 *)0x0) {
      FMemory::Free(local_148);
    }
    (**(code **)(*plVar7 + 0x468))(plVar7,local_128,0,1);
    lVar5 = local_b0;
    UGameplayStatics::FinishSpawningActor(local_b0,&DAT_1468b5b70);
    FUN_1407c3900(param_1,local_48,param_2 + 8);
    FUN_14223c850(lVar5,local_48,0,0,1);
    FUN_1407da760(lVar10,lVar5);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_88);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
LAB_140ec28da:
  lVar10 = FUN_1407c93d0(lVar10);
  if (lVar10 != 0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_1[0x42] != 0) {
        *(longlong *)(lVar10 + 0x978) = param_1[0x42];
      }
      lVar5 = FUN_1407c74b0(*(undefined8 *)(param_2 + 0x28));
      if ((lVar5 != 0) && (*(longlong *)(param_2 + 0x40) != 0)) {
        uVar6 = FUN_1407cb6f0(*(longlong *)(param_2 + 0x40),local_138);
        FUN_1407daa60(lVar5,lVar10,uVar6);
      }
    }
  }
  return;
}



// FUNCTION 140ec2980 FUN_140ec2980 body=696 status=ok
// SIG undefined FUN_140ec2980(void)

void FUN_140ec2980(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uStack_84;
  
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 == 0) {
    return;
  }
  lVar13 = UUGJournalKey::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
      != lVar13 + 0x88)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar13 = DAT_146b33f38;
  lVar18 = DAT_146b33f38 + 0x60;
  lVar14 = FWeakObjectPtr::Get(lVar18);
  if (lVar14 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar13 + 0x68)) {
      return;
    }
    if (*(longlong *)(lVar13 + 0x70) == 0) {
      return;
    }
    lVar14 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar18,lVar14);
    if ((lVar14 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar13 + 0x68) = DAT_1464b56f4;
    }
    lVar14 = FWeakObjectPtr::Get(lVar18);
    if (lVar14 == 0) {
      return;
    }
  }
  lVar13 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
      != lVar13 + 0x88)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  plVar16 = *(longlong **)(lVar14 + 0x70);
  plVar19 = plVar16 + (longlong)*(int *)(lVar14 + 0x78) * 0xc;
  while( true ) {
    if (plVar16 == plVar19) {
      return;
    }
    lVar13 = *plVar16;
    if (lVar13 == lVar2) break;
    plVar16 = plVar16 + 0xc;
  }
  if (plVar16 == (longlong *)0x0) {
    return;
  }
  if (lVar13 == 0) {
    return;
  }
  plVar19 = (longlong *)(param_1 + 0x4d0);
  iVar1 = *(int *)(param_1 + 0x4d8);
  plVar15 = (longlong *)*plVar19;
  plVar20 = plVar15 + (longlong)iVar1 * 0xd;
  while( true ) {
    if (plVar15 == plVar20) {
      lVar2 = *plVar16;
      lVar13 = plVar16[1];
      uStack_84 = uStack_84 & 0xffffff00;
      lVar14 = plVar16[2];
      lVar18 = plVar16[3];
      lVar4 = plVar16[4];
      lVar5 = plVar16[5];
      lVar6 = plVar16[6];
      lVar7 = plVar16[7];
      lVar8 = plVar16[8];
      lVar9 = plVar16[9];
      lVar10 = plVar16[10];
      lVar11 = plVar16[0xb];
      *(int *)(param_1 + 0x4d8) = iVar1 + 1;
      if (*(int *)(param_1 + 0x4dc) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar19,iVar1);
      }
      lVar3 = *plVar19;
      lVar17 = (longlong)iVar1 * 0x68;
      *(longlong *)(lVar17 + lVar3) = lVar2;
      ((longlong *)(lVar17 + lVar3))[1] = lVar13;
      plVar16 = (longlong *)(lVar17 + 0x10 + lVar3);
      *plVar16 = lVar14;
      plVar16[1] = lVar18;
      plVar16 = (longlong *)(lVar17 + 0x20 + lVar3);
      *plVar16 = lVar4;
      plVar16[1] = lVar5;
      plVar16 = (longlong *)(lVar17 + 0x30 + lVar3);
      *plVar16 = lVar6;
      plVar16[1] = lVar7;
      plVar16 = (longlong *)(lVar17 + 0x40 + lVar3);
      *plVar16 = lVar8;
      plVar16[1] = lVar9;
      plVar16 = (longlong *)(lVar17 + 0x50 + lVar3);
      *plVar16 = lVar10;
      plVar16[1] = lVar11;
      *(ulonglong *)(lVar17 + 0x60 + lVar3) = (ulonglong)uStack_84 << 0x20;
      return;
    }
    if (*plVar15 == lVar13) break;
    plVar15 = plVar15 + 0xd;
  }
  return;
}



// FUNCTION 140ec2c40 FUN_140ec2c40 body=658 status=ok
// SIG undefined FUN_140ec2c40(void)

void FUN_140ec2c40(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong local_res18;
  longlong local_res20;
  
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 != 0) {
    lVar3 = UUGJournalKey::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res18 = lVar4;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x4b0,&local_res18);
      FUN_140e7ae90(param_1);
    }
  }
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 != 0) {
    lVar3 = UUGJournalKey::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res20 = lVar4;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar4 = DAT_146b33f38;
      lVar9 = DAT_146b33f38 + 0x60;
      lVar3 = FWeakObjectPtr::Get(lVar9);
      uVar8 = 0;
      if (lVar3 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if (DAT_1464b56f4 == *(int *)(lVar4 + 0x68)) {
          return;
        }
        if (*(longlong *)(lVar4 + 0x70) == 0) {
          return;
        }
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar9,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar4 + 0x68) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar9);
        if (lVar3 == 0) {
          return;
        }
      }
      lVar4 = FUN_142e778a0();
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
        plVar7 = *(longlong **)(lVar3 + 0x70);
        plVar12 = plVar7 + (longlong)*(int *)(lVar3 + 0x78) * 0xc;
        if (plVar7 != plVar12) {
          while (*plVar7 != local_res20) {
            plVar7 = plVar7 + 0xc;
            if (plVar7 == plVar12) {
              return;
            }
          }
          if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x4d8))) {
            plVar12 = *(longlong **)(param_1 + 0x4d0);
            plVar5 = plVar12;
            uVar11 = uVar8;
            while (iVar10 = (int)uVar11, *plVar5 != *plVar7) {
              uVar11 = (ulonglong)(iVar10 + 1);
              uVar8 = uVar8 + 1;
              plVar5 = plVar5 + 0xd;
              if ((longlong)*(int *)(param_1 + 0x4d8) <= (longlong)uVar8) {
                return;
              }
            }
            if ((*(byte *)(param_1 + 0x6b4) & 0x10) != 0) {
              *(undefined1 *)((longlong)iVar10 * 0x68 + 100 + (longlong)plVar12) = 1;
              return;
            }
            iVar6 = *(int *)(param_1 + 0x4d8);
            iVar2 = (iVar6 - iVar10) + -1;
            if (iVar2 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar12 + (longlong)iVar10 * 0xd,plVar12 + (longlong)(iVar10 + 1) * 0xd,
                         (longlong)iVar2 * 0x68);
              iVar6 = *(int *)(param_1 + 0x4d8);
            }
            *(int *)(param_1 + 0x4d8) = iVar6 + -1;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
            ResizeShrink(param_1 + 0x4d0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec2ee0 FUN_140ec2ee0 body=23 status=ok
// SIG undefined FUN_140ec2ee0(void)

undefined1 FUN_140ec2ee0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    *(undefined1 *)(param_1 + 0x200) = 1;
    return 1;
  }
  return 0;
}



// FUNCTION 140ec2f00 FUN_140ec2f00 body=347 status=ok
// SIG undefined FUN_140ec2f00(void)

void FUN_140ec2f00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined1 *)(param_1 + 0x670) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_142088ee0(*(longlong *)(param_1 + 0x38),1);
    local_38[1] = 0x20;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"RequestAsyncLoad SingleDelegate",0x40);
    FUN_1422ca050();
    local_38[2] = 0;
    local_20 = 0;
    puVar4 = (undefined8 *)operator_new(0x28,local_38 + 2);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar4 + 1,param_1);
      puVar4[2] = FUN_140ea5e70;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[4] = uVar5;
      *puVar4 = &PTR_FUN_143f4d1b8;
    }
    lVar6 = FUN_1422ca050();
    FStreamableManager::RequestAsyncLoad(lVar6 + 0x178,local_18,param_2,local_38 + 2,0,0,0,local_38)
    ;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ec3060 FUN_140ec3060 body=257 status=ok
// SIG undefined FUN_140ec3060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ec3060(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_1 != (longlong *)0x0) {
    for (puVar4 = (undefined8 *)FUN_1407cf0d0(DAT_146871b70); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)FUN_1407cf0d0(*puVar4)) {
      lVar1 = param_1[0x2d];
      uVar2 = puVar4[2];
      if (lVar1 == 0) {
        puVar5 = &local_3c;
        local_3c = _DAT_1468b5d90;
        local_34 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined4 *)(lVar1 + 0x220);
        uStack_44 = *(undefined4 *)(lVar1 + 0x224);
        local_40 = *(undefined4 *)(lVar1 + 0x228);
        puVar5 = (undefined8 *)&local_48;
      }
      (**(code **)(*param_1 + 0x578))(param_1,local_res8,local_res10);
      local_28 = *puVar5;
      local_20 = *(undefined4 *)(puVar5 + 1);
      cVar3 = FUN_1428ca150(uVar2,&local_28,local_res8[0],0);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140ec3170 FUN_140ec3170 body=320 status=ok
// SIG undefined FUN_140ec3170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ec3170(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined1 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  puVar7 = (undefined1 *)0x0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  puVar3 = (undefined8 *)FUN_1407cf0d0(DAT_146871b70);
  puVar6 = puVar7;
  puVar5 = puVar7;
  puVar4 = puVar7;
  iVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    while( true ) {
      uVar1 = puVar3[2];
      iVar2 = (int)puVar6 + 1;
      local_30 = CONCAT44(local_30._4_4_,iVar2);
      if ((int)puVar4 < iVar2) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_58,puVar6);
        puVar5 = local_38;
      }
      puVar4 = local_58;
      if (puVar5 != (undefined1 *)0x0) {
        puVar4 = puVar5;
      }
      *(undefined8 *)(puVar4 + (longlong)(int)puVar6 * 8) = uVar1;
      puVar3 = (undefined8 *)FUN_1407cf0d0(*puVar3);
      puVar6 = local_38;
      iVar2 = (int)local_30;
      if (puVar3 == (undefined8 *)0x0) break;
      puVar6 = (undefined1 *)(local_30 & 0xffffffff);
      puVar5 = local_38;
      puVar4 = (undefined1 *)(local_30 >> 0x20);
    }
  }
  puVar5 = local_58;
  if (puVar6 != (undefined1 *)0x0) {
    puVar5 = puVar7;
  }
  puVar3 = (undefined8 *)((ulonglong)puVar5 | (ulonglong)puVar6);
  puVar5 = (undefined1 *)((longlong)iVar2 & 0x1fffffffffffffff);
  if (puVar3 + iVar2 < puVar3) {
    puVar5 = puVar7;
  }
  if (puVar5 != (undefined1 *)0x0) {
    do {
      FUN_140ebe930(*puVar3);
      puVar7 = puVar7 + 1;
      puVar3 = puVar3 + 1;
      puVar6 = local_38;
    } while (puVar7 != puVar5);
  }
  if (puVar6 != (undefined1 *)0x0) {
    FMemory::Free(puVar6);
  }
  return;
}



// FUNCTION 140ec32b0 FUN_140ec32b0 body=10 status=ok
// SIG undefined FUN_140ec32b0(void)

undefined1 FUN_140ec32b0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x200) = 0;
  return 1;
}



// FUNCTION 140ec32c0 FUN_140ec32c0 body=62 status=ok
// SIG undefined FUN_140ec32c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ec32c0(longlong *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
  (**(code **)(*param_1 + 0x470))();
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 140ec3360 FUN_140ec3360 body=543 status=ok
// SIG undefined FUN_140ec3360(void)

void FUN_140ec3360(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_158 [3];
  longlong *plStack_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_118 [220];
  undefined1 local_3c [52];
  
  param_1[0xea] = param_2;
  FUN_140f08820(param_1 + 0xeb,0);
  lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar9 = (**(code **)(*(longlong *)param_1[0xea] + 0x340))();
      FUN_140e9a4f0(local_118,uVar9);
      lVar8 = FWeakObjectPtr::Get(local_3c);
      if (lVar8 != 0) {
        FUN_141461050(lVar7,lVar8);
        if (param_1[0xe9] != 0) {
          uVar6 = FUN_140cfc570(lVar7,lVar8);
          local_158[2] = 0;
          plStack_140 = (longlong *)0x0;
          lVar7 = *(longlong *)param_1[0xe9];
          uVar9 = FText::AsNumber(local_138,uVar6,0,local_158 + 2);
          (**(code **)(lVar7 + 0x2b0))(param_1[0xe9],uVar9,1,0);
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_130 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
          plVar1 = plStack_140;
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_140 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_140)(plStack_140);
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
      }
      FUN_140e9c360(local_118);
    }
  }
  local_158[1] = 7;
  local_158[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
  FGenericPlatformString::Memcpy(local_158[0],L"fadeIn",0xe);
  FUN_142088910(param_1[0xc0],local_158);
  if (local_158[0] != 0) {
    FMemory::Free();
  }
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000140ec3578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x540))(param_1);
  return;
}



// FUNCTION 140ec3580 FUN_140ec3580 body=356 status=ok
// SIG undefined FUN_140ec3580(void)

void FUN_140ec3580(longlong param_1,int param_2)

{
  longlong local_28 [4];
  
  if (param_2 != *(int *)(param_1 + 0x740)) {
    *(int *)(param_1 + 0x740) = param_2;
    if (param_2 == 0) {
      if (*(longlong *)(param_1 + 0x600) != 0) {
        local_28[3] = 0x13;
        local_28[2] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
        FGenericPlatformString::Memcpy(local_28[2],L"focusOfferingPanel",0x26);
        FUN_142088910(*(undefined8 *)(param_1 + 0x600),local_28 + 2);
        if (local_28[2] != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong *)(param_1 + 0x7e8) != 0) {
        FUN_1411f9bb0(*(longlong *)(param_1 + 0x7e8),0xffffffff,0);
      }
    }
    else if (param_2 == 1) {
      if (*(longlong *)(param_1 + 0x600) != 0) {
        local_28[1] = 0xe;
        local_28[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],L"focusBackpack",0x1c);
        FUN_142088910(*(undefined8 *)(param_1 + 0x600),local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong *)(param_1 + 0x7e8) != 0) {
        FUN_1411f93d0(*(longlong *)(param_1 + 0x7e8),1);
      }
    }
    if (*(longlong *)(param_1 + 0x7c0) != 0) {
      UOnCausedDamage::SetTriggerOnZeroDamage
                (*(longlong *)(param_1 + 0x7c0),*(int *)(param_1 + 0x740) == 0);
    }
    if (*(longlong *)(param_1 + 0x7e8) != 0) {
      UOnCausedDamage::SetTriggerOnZeroDamage
                (*(longlong *)(param_1 + 0x7e8),*(int *)(param_1 + 0x740) == 1);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    *(undefined1 *)(param_1 + 0x74d) = 1;
  }
  return;
}



// FUNCTION 140ec36f0 FUN_140ec36f0 body=74 status=ok
// SIG undefined FUN_140ec36f0(void)

void FUN_140ec36f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  if ((*(longlong *)(param_1 + 0x1c0) != param_2) &&
     (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) {
    *(longlong *)(param_1 + 0x1c0) = param_2;
    *(undefined8 *)(param_1 + 0x1c8) = param_3;
    FUN_140ec8f40(param_1,1);
    FUN_140ec0e80(param_1);
    return;
  }
  return;
}



// FUNCTION 140ec3740 FUN_140ec3740 body=121 status=ok
// SIG undefined FUN_140ec3740(void)

void FUN_140ec3740(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x1c0) != param_2) &&
     (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) {
    *(longlong *)(param_1 + 0x1c0) = param_2;
    *(undefined8 *)(param_1 + 0x1c8) = param_3;
    FUN_140ec8f40(param_1,1);
    FUN_140ec0e80(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0x240);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x518))(plVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 140ec37c0 FUN_140ec37c0 body=197 status=ok
// SIG undefined FUN_140ec37c0(void)

void FUN_140ec37c0(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    param_2 = param_2 * *(float *)(param_1 + 0x1f0);
    *(float *)(param_1 + 0x1fc) = param_2;
    FUN_1423aee90(*(longlong *)(param_1 + 0x1e8),&local_38,param_2,1);
    FUN_140eae790(param_1,&local_48,*(undefined4 *)(param_1 + 0x1fc));
    local_28 = local_48;
    local_20 = local_40;
    local_18 = local_38;
    local_10 = local_30;
    FUN_14223ca30(lVar1,&local_18,&local_28,0,0,0);
    *(undefined1 *)(param_1 + 0x201) = 1;
  }
  return;
}



// FUNCTION 140ec3890 FUN_140ec3890 body=835 status=ok
// SIG undefined FUN_140ec3890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ec3890(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
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
  iVar2 = FUN_14233f450();
  if (((iVar2 == 3) && (*(char *)((longlong)param_1 + 0x3af) != '\x01')) &&
     ((byte)(*(char *)((longlong)param_1 + 0x3ae) - 1U) < 2)) {
    if (*(char *)((longlong)param_1 + 0x3ae) != '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x3ae) = 3;
      iVar2 = FUN_14233f450(param_1);
      if (iVar2 == 3) {
        *(byte *)((longlong)param_1 + 0x3ac) =
             *(char *)((longlong)param_1 + 0x3af) << 4 | *(byte *)((longlong)param_1 + 0x3ae);
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
    if (param_1[0xd3] != 0) {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      FUN_142880530(uVar5,param_1 + 0xd3);
      param_1[0xd3] = 0;
    }
    if (param_1[0xd4] != 0) {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      FUN_142880530(uVar5,param_1 + 0xd4);
      param_1[0xd4] = 0;
    }
    FUN_140ebec00(param_1);
    FUN_140ea37f0(param_1 + 0x9c);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x5e,0);
    fVar1 = *(float *)(param_1 + 0xc6);
    if (fVar1 <= 0.0) {
      FUN_140ec3e40(param_1);
    }
    else {
      local_b8 = FUN_140ec3e40;
      lVar3 = param_1[0x24];
      uStack_b0 = 0;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
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
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar5,param_1 + 0xd3,&local_a8,fVar1);
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
      FUN_140e7ae90(param_1);
    }
  }
  return;
}



// FUNCTION 140ec3be0 FUN_140ec3be0 body=596 status=ok
// SIG undefined FUN_140ec3be0(void)

void FUN_140ec3be0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  plVar6 = plVar8;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x118);
  }
  if ((plVar6 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    plVar7 = *(longlong **)(param_1 + 0x140);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x418))(plVar7,&DAT_146532190);
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    FUN_140eaa550(param_1,0);
    if ((*(byte *)(param_1 + 0x148) & 2) != 0) {
      *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xfd;
      lVar3 = FUN_1413f82e0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((char)plVar6[600] != '\0')) {
        *(undefined1 *)(plVar6 + 600) = 0;
      }
    }
    FUN_142d8f7b0(plVar6,DAT_146871b50);
    FUN_142d8f800(plVar6,DAT_146871b50);
    FUN_142d6e0b0(plVar6,DAT_146871b50);
    uVar4 = UScrollBox::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x868) = 0;
    }
    plVar7 = *(longlong **)(param_1 + 0x120);
    plVar6 = plVar7 + *(int *)(param_1 + 0x128);
    for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
      plVar1 = (longlong *)*plVar7;
      if (plVar1 != (longlong *)0x0) {
        lVar3 = plVar1[0x32];
        if (lVar3 != 0) {
          lVar5 = FUN_1412e05a0();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            *(undefined1 *)(lVar3 + 0x318) = 0;
          }
        }
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
      }
    }
    plVar6 = *(longlong **)(param_1 + 0x130);
    plVar7 = (longlong *)((longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff);
    if (plVar6 + *(int *)(param_1 + 0x138) < plVar6) {
      plVar7 = plVar8;
    }
    if (plVar7 != (longlong *)0x0) {
      do {
        plVar1 = (longlong *)*plVar6;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        }
        plVar6 = plVar6 + 1;
        plVar8 = (longlong *)((longlong)plVar8 + 1);
      } while (plVar8 != plVar7);
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 300)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x120,0);
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x13c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x130,0);
    }
    *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xfe;
  }
  return;
}



// FUNCTION 140ec3e40 FUN_140ec3e40 body=421 status=ok
// SIG undefined FUN_140ec3e40(void)

void FUN_140ec3e40(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_res8;
  
  if (*(char *)((longlong)param_1 + 0x3ae) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x3ae) = 0;
    iVar4 = FUN_14233f450();
    if (iVar4 == 3) {
      *(byte *)((longlong)param_1 + 0x3ac) =
           *(char *)((longlong)param_1 + 0x3af) << 4 | *(byte *)((longlong)param_1 + 0x3ae);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x3ad) & 0x10) != 0) {
    *(byte *)((longlong)param_1 + 0x3ad) = *(byte *)((longlong)param_1 + 0x3ad) & 0xef;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  lVar7 = param_1[0x23];
  if (lVar7 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::ApplyFreezeFallDamage",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar7 + 0x5a0,param_1,local_res8);
    }
  }
  if (param_1[0xd4] != 0) {
    lVar7 = param_1[0x24];
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar7 + 400) == 0) {
      uVar8 = *(undefined8 *)(lVar7 + 0x3f8);
    }
    else {
      uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
    }
    FUN_142880530(uVar8,param_1 + 0xd4);
    param_1[0xd4] = 0;
  }
  FUN_140ebec00(param_1);
  FUN_142d8f260(param_1[0x23],DAT_146871b50);
  FUN_140ec3be0(param_1 + 0x9c);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x60,0);
  return;
}



// FUNCTION 140ec3ff0 FUN_140ec3ff0 body=98 status=ok
// SIG undefined FUN_140ec3ff0(void)

void FUN_140ec3ff0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0xc);
    FUN_140e5d420(lVar1 + 0x26f0,param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x14) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x18) = DAT_1468b5d88._4_4_;
  return;
}



// FUNCTION 140ec4060 FUN_140ec4060 body=1425 status=ok
// SIG undefined FUN_140ec4060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ec4060(longlong *param_1,float param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
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
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [96];
  
  if (((char)param_1[1] != '\0') || (0.0 < *(float *)(param_1 + 4))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (!bVar10) {
    return;
  }
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar9 = DAT_146b33f38 + 0x30;
  lVar4 = FWeakObjectPtr::Get(lVar9);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar5 + 0x38)) {
      return;
    }
    if (*(longlong *)(lVar5 + 0x40) == 0) {
      return;
    }
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0x38) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar9);
    if (lVar4 == 0) {
      return;
    }
  }
  lVar5 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    return;
  }
  lVar5 = FUN_1414150f0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    return;
  }
  cVar2 = (char)param_1[1];
  bVar10 = cVar2 != '\0';
  if (cVar2 == '\x02') {
    fVar18 = *(float *)(param_1 + 4);
    if (1.0 <= fVar18) goto LAB_140ec4345;
  }
  else {
    fVar18 = *(float *)(param_1 + 4);
    if (fVar18 <= 0.0) goto LAB_140ec4345;
  }
  fVar17 = 1.0 / *(float *)(lVar4 + 0x738);
  if (cVar2 != '\x02') {
    fVar17 = -fVar17;
    lVar5 = *(longlong *)(*param_1 + 0x168);
    if (lVar5 == 0) {
      local_b8 = DAT_1468b5d98;
      puVar6 = &local_c0;
      local_c0 = _DAT_1468b5d90;
    }
    else {
      puVar6 = (undefined8 *)&local_e0;
      local_e0 = *(undefined4 *)(lVar5 + 0x220);
      local_d8 = *(undefined4 *)(lVar5 + 0x228);
      uStack_dc = *(undefined4 *)(lVar5 + 0x224);
    }
    local_b4 = *puVar6;
    local_ac = *(undefined4 *)(puVar6 + 1);
    FLinearColor::FLinearColor(local_a8,&local_b4);
    FUN_140ec01c0(param_3,&DAT_146871b28,local_a8);
    fVar18 = *(float *)(param_1 + 4);
    bVar10 = false;
  }
  fVar18 = fVar17 * param_2 + fVar18;
  *(float *)(param_1 + 4) = fVar18;
  if (0.0 <= fVar18) {
    if (1.0 <= fVar18) {
      fVar18 = 1.0;
    }
  }
  else {
    fVar18 = 0.0;
  }
  *(float *)(param_1 + 4) = fVar18;
  if (*(longlong *)(lVar4 + 0x740) != 0) {
    fVar18 = (float)UCurveFloat::GetFloatValue();
  }
  FUN_140ec00d0(param_3,&DAT_146871b40,fVar18);
  uVar11 = (undefined4)param_1[4];
  if (*(longlong *)(lVar4 + 0x748) != 0) {
    uVar11 = UCurveFloat::GetFloatValue();
  }
  FUN_140ec00d0(param_3,&DAT_146871b48,uVar11);
LAB_140ec4345:
  fVar18 = *(float *)(param_1 + 3);
  if (0.0 < fVar18) {
    if (((*(float *)((longlong)param_1 + 0xc) == 0.0) && (*(float *)(param_1 + 2) == 0.0)) &&
       (*(float *)((longlong)param_1 + 0x14) == 0.0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      lVar5 = *(longlong *)(*param_1 + 0x168);
      if (lVar5 == 0) {
        local_d0 = 0.0;
        local_cc = 0.0;
        local_c8 = 0.0;
        fVar17 = (float)(_DAT_1468716e0 & _DAT_1468716f0);
        fVar15 = (float)(uRam00000001468716e4 & uRam00000001468716f4);
        fVar16 = (float)(uRam00000001468716e8 & uRam00000001468716f8);
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar18 = 0.0;
        fVar21 = fRam00000001468716ec;
      }
      else {
        local_d0 = *(float *)(lVar5 + 0x220);
        local_cc = *(float *)(lVar5 + 0x224);
        local_c8 = *(float *)(lVar5 + 0x228);
        fVar17 = *(float *)(lVar5 + 0x230);
        fVar15 = *(float *)(lVar5 + 0x234);
        fVar16 = *(float *)(lVar5 + 0x238);
        fVar19 = *(float *)(lVar5 + 0x210);
        fVar20 = *(float *)(lVar5 + 0x214);
        fVar18 = *(float *)(lVar5 + 0x218);
        fVar21 = *(float *)(lVar5 + 0x21c);
      }
      fVar17 = *(float *)((longlong)param_1 + 0xc) * fVar17;
      fVar15 = *(float *)(param_1 + 2) * fVar15;
      fVar16 = *(float *)((longlong)param_1 + 0x14) * fVar16;
      fVar12 = fVar16 * fVar20 - fVar15 * fVar18;
      fVar13 = fVar17 * fVar18 - fVar16 * fVar19;
      fVar14 = fVar15 * fVar19 - fVar17 * fVar20;
      fVar12 = fVar12 + fVar12;
      fVar13 = fVar13 + fVar13;
      fVar14 = fVar14 + fVar14;
      local_d0 = (fVar14 * fVar20 - fVar13 * fVar18) + fVar21 * fVar12 + fVar17 + local_d0;
      local_cc = (fVar12 * fVar18 - fVar14 * fVar19) + fVar21 * fVar13 + fVar15 + local_cc;
      local_c8 = (fVar13 * fVar19 - fVar12 * fVar20) + fVar21 * fVar14 + fVar16 + local_c8;
      FLinearColor::FLinearColor(local_98,&local_d0);
      FUN_140ec01c0(param_3,&DAT_146871b28,local_98);
      fVar18 = *(float *)(param_1 + 3);
    }
    fVar18 = *(float *)(lVar3 + 0x790) - fVar18;
    fVar17 = fVar18 / *(float *)(lVar4 + 0x728);
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    if (*(longlong *)(lVar4 + 0x730) != 0) {
      fVar17 = (float)UCurveFloat::GetFloatValue(*(longlong *)(lVar4 + 0x730),fVar17);
    }
    FUN_140ec00d0(param_3,&DAT_146871b38,fVar17);
    if (*(float *)(lVar4 + 0x728) <= fVar18) {
      *(undefined4 *)(param_1 + 3) = 0xbf800000;
    }
  }
  if ((char)param_1[1] == '\0') {
    FUN_140ec00d0(param_3,&DAT_146871b30,0);
    FUN_140ec00d0(param_3,&DAT_146871b40,0);
    FUN_140ec00d0(param_3,&DAT_146871b48,0x3f800000);
  }
  else if ((bVar10) && (lVar3 = *param_1, lVar3 != 0)) {
    uVar7 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar7);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,local_88);
      cVar2 = FUN_142d52a00(local_88);
      if (cVar2 != '\0') {
        uVar7 = FUN_142d52a20(local_88);
        uVar7 = FArchive::operator<<(uVar7);
        fVar18 = (float)FUN_142d5fea0(uVar7);
        if (1e-08 < ABS(fVar18 - *(float *)((longlong)param_1 + 0x1c))) {
          FUN_140ec00d0(param_3,&DAT_146871b30,1.0 - fVar18);
          *(float *)((longlong)param_1 + 0x1c) = fVar18;
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec4600 FUN_140ec4600 body=113 status=ok
// SIG undefined FUN_140ec4600(void)

void FUN_140ec4600(longlong param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  
  FUN_142ddecc0();
  bVar1 = *(byte *)(param_1 + 0x6b4);
  if ((bVar1 & 0x20) != 0) {
    FUN_140eb3610(param_1 + 0x4e0);
    bVar1 = *(byte *)(param_1 + 0x6b4);
  }
  *(byte *)(param_1 + 0x6b4) = bVar1 & 0xdf;
  if (param_3 != 3) {
    FUN_140ec4e70(param_1,param_2);
    FUN_140ec5a40(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140ec4680 FUN_140ec4680 body=982 status=ok
// SIG undefined FUN_140ec4680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ec4680(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar11;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  FUN_142357eb0();
  lVar6 = *(longlong *)(param_1 + 0x118);
  if (lVar6 != 0) {
    if (*(char *)(param_1 + 0x200) == '\0') {
      lVar6 = *(longlong *)(lVar6 + 0x168);
      if (lVar6 == 0) {
        return;
      }
      *(undefined8 *)(lVar6 + 0x240) = _DAT_1468b5d90;
      fVar8 = DAT_1468b5d98;
    }
    else {
      if (*(char *)(param_1 + 0x1c4) == '\0') {
        fVar8 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1f8),
                                        *(undefined4 *)(param_1 + 0x1c0),param_2);
      }
      else {
        if (0.0 <= *(float *)(param_1 + 0x1cc)) {
          uVar3 = *(undefined4 *)(param_1 + 0x1c0);
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0x1c8);
        }
        fVar7 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1f8),uVar3,param_2,
                                        -*(float *)(param_1 + 0x1cc));
        fVar8 = *(float *)(param_1 + 0x1c8);
        if (*(float *)(param_1 + 0x1c8) <= fVar7) {
          fVar8 = fVar7;
        }
        *(float *)(param_1 + 0x1f8) = fVar7;
      }
      *(float *)(param_1 + 0x1f8) = fVar8;
      if (*(char *)(param_1 + 0x201) == '\0') {
        FUN_140ec8b10(param_1,&local_78,&local_68,param_2);
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x118);
        if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
          fVar8 = *(float *)(param_1 + 0x1fc);
          fVar9 = (float)FUN_140eadcb0(param_1,param_2 * *(float *)(param_1 + 0x1f8),1);
          fVar7 = *(float *)(param_1 + 0x1fc);
          if (*(float *)(param_1 + 0x1fc) == fVar8) {
            *(float *)(param_1 + 0x1fc) = fVar9;
            fVar7 = fVar9;
          }
          puVar5 = (undefined8 *)FUN_1423aee90(*(undefined8 *)(param_1 + 0x1e8),&local_48,fVar7,1);
          local_78 = *puVar5;
          local_70 = *(float *)(puVar5 + 1);
          uVar3 = FUN_140eae790(param_1,&local_38,*(undefined4 *)(param_1 + 0x1fc));
          lVar1 = *(longlong *)(lVar1 + 0x168);
          if (lVar1 == 0) {
            uVar3 = (undefined4)DAT_1468b5da0;
            uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
            fStack_50 = (float)DAT_1468b5da8;
          }
          else {
            fVar8 = *(float *)(lVar1 + 0x210);
            local_58 = *(undefined8 *)(lVar1 + 0x210);
            fStack_50 = *(float *)(lVar1 + 0x218);
            fStack_4c = *(float *)(lVar1 + 0x21c);
            auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
            auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar8);
            auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_50);
            auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_4c);
            iVar4 = movmskps(uVar3,auVar2);
            if (iVar4 != 0) {
              *(float *)(lVar1 + 0x250) = fVar8;
              *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
              *(float *)(lVar1 + 600) = fStack_50;
              *(float *)(lVar1 + 0x25c) = fStack_4c;
              puVar5 = (undefined8 *)FQuat::Rotator(&local_58,&local_48);
              *(undefined8 *)(lVar1 + 0x260) = *puVar5;
              *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
            }
            uVar3 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
            uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
            fStack_50 = (float)*(undefined4 *)(lVar1 + 0x268);
          }
          local_58 = CONCAT44(uVar10,uVar3);
          local_48 = local_58;
          local_40 = fStack_50;
          puVar5 = (undefined8 *)
                   FUN_140ea5040(param_1,&local_48,&local_58,&local_38,CONCAT44(uVar11,param_2));
          local_68 = *puVar5;
          local_60 = *(undefined4 *)(puVar5 + 1);
        }
      }
      lVar1 = *(longlong *)(lVar6 + 0x168);
      if (lVar1 == 0) {
        local_48 = _DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined8 *)(lVar1 + 0x220);
        local_40 = *(float *)(lVar1 + 0x228);
      }
      local_58 = local_48;
      fStack_50 = local_40;
      if (*(char *)(param_1 + 0x203) != '\0') {
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x208));
      }
      if (*(char *)(param_1 + 0x204) != '\0') {
        local_68 = CONCAT44(*(undefined4 *)(param_1 + 0x20c),(undefined4)local_68);
      }
      if (*(char *)(param_1 + 0x205) != '\0') {
        local_60 = *(undefined4 *)(param_1 + 0x210);
      }
      if ((*(char *)(param_1 + 0x201) != '\0') && (*(char *)(param_1 + 0x206) != '\0')) {
        local_70 = *(float *)(param_1 + 0x214);
      }
      local_48 = local_68;
      local_40 = (float)local_60;
      local_38 = local_78;
      local_30 = local_70;
      FUN_14223ca30(lVar6,&local_38,&local_48,0,0,0);
      lVar6 = *(longlong *)(lVar6 + 0x168);
      if (lVar6 == 0) {
        return;
      }
      param_2 = 1.0 / param_2;
      *(ulonglong *)(lVar6 + 0x240) =
           CONCAT44((local_78._4_4_ - local_58._4_4_) * param_2,
                    ((float)local_78 - (float)local_58) * param_2);
      fVar8 = (local_70 - fStack_50) * param_2;
    }
    *(float *)(lVar6 + 0x248) = fVar8;
  }
  return;
}



// FUNCTION 140ec4a60 FUN_140ec4a60 body=848 status=ok
// SIG undefined FUN_140ec4a60(void)

void FUN_140ec4a60(longlong *param_1,float param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [12];
  undefined4 local_cc;
  
  FUN_14237ac80();
  if (((param_1[0x2f] != 0) &&
      (cVar4 = (**(code **)(*param_1 + 0x438))(param_1,param_2), cVar4 == '\0')) &&
     (lVar2 = param_1[0x23], lVar2 != 0)) {
    lVar7 = 0;
    cVar4 = (**(code **)(*(longlong *)param_1[0x2f] + 0x400))();
    if (cVar4 == '\0') {
      iVar6 = *(int *)(lVar2 + 0xc);
      if (iVar6 < (int)DAT_1469e91c4) {
        uVar10 = iVar6 >> 0x1f & 0xffff;
        uVar5 = iVar6 + uVar10;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
      }
      if ((((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) && (param_1[0x42] != 0)) &&
         (fVar11 = (float)FUN_1423b1370(), 0.0 < fVar11)) {
        if ((*(float *)((longlong)param_1 + 0x1ec) <= *(float *)(param_1 + 0x40)) ||
           (*(float *)(param_1 + 0x40) <= -*(float *)((longlong)param_1 + 0x1ec))) {
          *(undefined4 *)(param_1 + 0x43) = 0;
        }
        else {
          *(float *)(param_1 + 0x43) = param_2 + *(float *)(param_1 + 0x43);
        }
        if (*(longlong *)(lVar2 + 0x168) == 0) {
          local_100 = (float)DAT_1464aa7b0;
          puVar8 = &local_108;
          local_108 = DAT_1464aa7a8;
        }
        else {
          puVar8 = (undefined8 *)FUN_142369f10();
        }
        uVar9 = *puVar8;
        local_100 = *(float *)(puVar8 + 1);
        fVar11 = (float)FUN_140ea5fd0(param_1,param_2);
        lVar7 = param_1[0x2f];
        local_100 = local_100 * fVar11;
        *(float *)(param_1 + 0x40) = fVar11;
        *(ulonglong *)((longlong)param_1 + 0x18c) =
             CONCAT44((float)((ulonglong)uVar9 >> 0x20) * fVar11,(float)uVar9 * fVar11);
        *(float *)((longlong)param_1 + 0x194) = local_100;
        local_e8 = *(float *)(lVar7 + 0x210);
        fStack_e4 = *(float *)(lVar7 + 0x214);
        fStack_e0 = *(float *)(lVar7 + 0x218);
        fStack_dc = *(float *)(lVar7 + 0x21c);
        auVar3._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_e4);
        auVar3._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_e8);
        auVar3._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_e0);
        auVar3._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_dc);
        iVar6 = movmskps(local_100,auVar3);
        local_108 = uVar9;
        if (iVar6 != 0) {
          *(float *)(lVar7 + 0x250) = local_e8;
          *(float *)(lVar7 + 0x254) = fStack_e4;
          *(float *)(lVar7 + 600) = fStack_e0;
          *(float *)(lVar7 + 0x25c) = fStack_dc;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_e8);
          *(undefined8 *)(lVar7 + 0x260) = *puVar8;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        local_f8 = *(undefined8 *)(lVar7 + 0x260);
        local_f0 = *(undefined4 *)(lVar7 + 0x268);
        _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
        bVar1 = *(byte *)(param_1 + 0x3e);
        local_cc = 0x3f800000;
        uVar9 = FRotator::Quaternion(&local_f8,&local_e8);
        cVar4 = FUN_1423755e0(param_1,(longlong)param_1 + 0x18c,uVar9,~bVar1 & 1,local_d8,0);
        if (cVar4 == '\0') {
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
        else {
          *(float *)(param_1 + 0x41) =
               param_2 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x41);
          FUN_140ea5710(param_1,lVar2);
        }
        (**(code **)(*param_1 + 0x470))(param_1);
        if ((*(float *)(param_1 + 0x3d) < *(float *)(param_1 + 0x43) ||
             *(float *)(param_1 + 0x3d) == *(float *)(param_1 + 0x43)) &&
           (*(float *)((longlong)param_1 + 0x204) == 0.0)) {
          (**(code **)(*param_1 + 0x358))(param_1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec4db0 FUN_140ec4db0 body=188 status=ok
// SIG undefined FUN_140ec4db0(void)

void FUN_140ec4db0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  
  if ((((*(longlong *)(param_1 + 0x238) != 0) || (*(longlong *)(param_1 + 0x240) != 0)) &&
      (cVar1 = FUN_140eb2830(), cVar1 == '\0')) &&
     (cVar1 = FUN_140eb27c0(param_1,param_2), cVar1 == '\0')) {
    return;
  }
  FUN_140ec4a60(param_1,param_2,param_3,param_4);
  if ((*(longlong *)(param_1 + 0x240) != 0) &&
     (cVar1 = FUN_140eb2830(param_1,param_2), cVar1 != '\0')) {
    FUN_140ec8aa0(*(undefined8 *)(param_1 + 0x240));
  }
  if ((*(longlong *)(param_1 + 0x238) != 0) &&
     (cVar1 = FUN_140eb27c0(param_1,param_2), cVar1 != '\0')) {
    FUN_140ec8a30(*(undefined8 *)(param_1 + 0x238));
  }
  return;
}



// FUNCTION 140ec4e70 FUN_140ec4e70 body=2283 status=ok
// SIG undefined FUN_140ec4e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ec4e70(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  byte bVar12;
  float *pfVar13;
  undefined1 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_428 [32];
  longlong *local_408;
  undefined1 local_3f8 [8];
  longlong local_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  int local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  float local_3b8;
  float local_3b0;
  float local_3ac;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 local_358 [16];
  float local_348 [32];
  float *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  undefined1 local_28c [28];
  longlong local_270;
  int local_268;
  int local_264;
  undefined1 local_1bc;
  float local_1b0;
  undefined1 local_1ac;
  undefined1 local_19c;
  undefined1 local_18c;
  undefined1 local_17c;
  undefined1 local_16c;
  undefined1 local_15c;
  float local_158;
  char local_154;
  undefined1 local_144;
  undefined1 local_13c;
  longlong local_120;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  *(byte *)(param_1 + 0x6b4) = *(byte *)(param_1 + 0x6b4) | 0x10;
  bVar12 = *(byte *)(param_1 + 0x6b4);
  local_3d8 = *(int *)(param_1 + 0x4d8) + -1;
  if (-1 < local_3d8) {
    plVar15 = (longlong *)(param_1 + 0x4d0);
    lVar20 = (longlong)local_3d8;
    uVar14 = local_3f8[0];
    local_3e0 = param_1;
    do {
      lVar9 = 0;
      puVar18 = (undefined8 *)(lVar20 * 0x68 + *plVar15);
      fVar22 = param_2 + *(float *)(puVar18 + 0xc);
      *(float *)(puVar18 + 0xc) = fVar22;
      local_3d0 = lVar20;
      if (*(float *)(puVar18 + 0xb) <= fVar22 && fVar22 != *(float *)(puVar18 + 0xb)) {
        plVar15 = (longlong *)puVar18[1];
        if ((plVar15 != (longlong *)0x0) && (lVar9 = plVar15[0x1f], lVar9 == 0)) {
          local_3c8 = lVar9;
          (**(code **)(*plVar15 + 0x368))(plVar15);
          lVar9 = plVar15[0x1f];
        }
        local_3c8 = lVar9;
        lVar8 = FUN_142dcec90(param_1,*puVar18);
        if (((lVar9 != 0) && (lVar8 != 0)) && (0 < *(int *)(lVar8 + 0x40))) {
          FUN_142d0a300(&local_2b8);
          FWeakObjectPtr::operator=(local_28c,*(undefined8 *)(param_1 + 0x118));
          FWeakObjectPtr::operator=(&local_3c0,*(undefined8 *)(param_1 + 0x118));
          iVar6 = local_268;
          lVar20 = (longlong)local_268;
          local_268 = local_268 + 1;
          if (local_264 < local_268) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_270,iVar6);
          }
          *(undefined4 *)(local_270 + lVar20 * 8) = local_3c0;
          *(undefined4 *)(local_270 + 4 + lVar20 * 8) = local_3bc;
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
          if (lVar20 == 0) {
LAB_140ec50b2:
            FUN_14222da00(*(undefined8 *)(param_1 + 0x118),1,local_358,&local_3b0);
            fVar22 = local_3b0;
            if (local_3b0 <= local_3ac) {
              fVar22 = local_3ac;
            }
          }
          else {
            lVar9 = FUN_142912e90();
            if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
            if (!bVar21) goto LAB_140ec50b2;
            uVar24 = *(uint *)(lVar20 + 0x230) & _DAT_146871770;
            uVar25 = *(uint *)(lVar20 + 0x234) & uRam0000000146871774;
            uVar26 = *(uint *)(lVar20 + 0x238) & uRam0000000146871778;
            uVar27 = *(uint *)(lVar20 + 0x23c) & uRam000000014687177c;
            auVar29._4_4_ = uVar25;
            auVar29._0_4_ = uVar24;
            auVar29._8_4_ = uVar26;
            auVar29._12_4_ = uVar27;
            auVar30._4_4_ = uVar26;
            auVar30._0_4_ = uVar25;
            auVar30._8_4_ = uVar24;
            auVar30._12_4_ = uVar27;
            auVar30 = minps(auVar29,auVar30);
            auVar5._4_4_ = uVar24;
            auVar5._0_4_ = uVar26;
            auVar5._8_4_ = uVar25;
            auVar5._12_4_ = uVar27;
            auVar30 = minps(auVar30,auVar5);
            local_3b8 = auVar30._0_4_;
            fVar22 = local_3b8 * *(float *)(lVar20 + 0x714);
          }
          iVar6 = *(int *)(lVar8 + 0x40);
          lVar20 = (longlong)iVar6;
          lVar9 = 0;
          local_2c8 = (float *)0x0;
          local_2c0 = 0;
          if (0 < iVar6) {
            FUN_140ebef50(local_348,iVar6);
            do {
              fVar28 = 1.0;
              lVar3 = *(longlong *)(lVar8 + 0x38);
              if (puVar18[10] != 0) {
                uVar4 = *(undefined8 *)(lVar9 + 0x28 + lVar3);
                uStack_390 = 0;
                local_398._0_4_ = (undefined4)uVar4;
                local_398._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                local_378 = (undefined4)local_398;
                uStack_374 = local_398._4_4_;
                uStack_370 = 0;
                uStack_36c = 0;
                local_398 = uVar4;
                fVar28 = (float)FUN_142ca2f00(puVar18[10],&local_378,0x3f800000);
              }
              fVar23 = (float)FUN_142c98860(puVar18 + 2,*(undefined8 *)(lVar9 + 0x28 + lVar3));
              uVar16 = local_2c0;
              pfVar10 = local_348;
              if (local_2c8 != (float *)0x0) {
                pfVar10 = local_2c8;
              }
              lVar19 = (longlong)(int)local_2c0;
              pfVar13 = pfVar10 + lVar19 * 8;
              for (; pfVar10 != pfVar13; pfVar10 = pfVar10 + 8) {
                if (((ABS(*pfVar10 - (fVar23 + fVar22)) <= 1.0) &&
                    (ABS(pfVar10[2] - fVar28) <= 1e-08)) &&
                   (*(longlong *)(pfVar10 + 6) == *(longlong *)(lVar9 + 0x38 + lVar3))) {
                  pfVar10[1] = *(float *)(lVar9 + 0x1b0 + lVar3) + pfVar10[1];
                  goto LAB_140ec5296;
                }
              }
              iVar6 = (int)local_2c0 + 1;
              local_2c0 = CONCAT44(local_2c0._4_4_,iVar6);
              if (local_2c0._4_4_ < iVar6) {
                TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (local_348,uVar16 & 0xffffffff);
              }
              lVar17 = lVar19 * 0x20;
              pfVar10 = local_348;
              if (local_2c8 != (float *)0x0) {
                pfVar10 = local_2c8;
              }
              pfVar10[lVar19 * 8] = fVar23 + fVar22;
              pfVar10 = local_348;
              if (local_2c8 != (float *)0x0) {
                pfVar10 = local_2c8;
              }
              pfVar10[lVar19 * 8 + 1] = *(float *)(lVar9 + 0x1b0 + lVar3);
              *(float *)(((ulonglong)(local_2c8 != (float *)0x0) - 1 & (ulonglong)local_348 |
                         (ulonglong)local_2c8) + 8 + lVar17) = fVar28;
              *(undefined8 *)
               (((longlong)(int)-(uint)(local_2c8 == (float *)0x0) & (ulonglong)local_348 |
                (ulonglong)local_2c8) + 0x10 + lVar17) = *(undefined8 *)(lVar9 + 0x28 + lVar3);
              *(undefined8 *)
               (((longlong)(int)-(uint)(local_2c8 == (float *)0x0) & (ulonglong)local_348 |
                (ulonglong)local_2c8) + 0x18 + lVar17) = *(undefined8 *)(lVar9 + 0x38 + lVar3);
LAB_140ec5296:
              lVar9 = lVar9 + 0x1c0;
              lVar20 = lVar20 + -1;
              param_1 = local_3e0;
              uVar14 = local_3f8[0];
            } while (lVar20 != 0);
          }
          uVar16 = 0;
          if (1 < (int)local_2c0) {
            pfVar10 = local_348;
            if (local_2c8 != (float *)0x0) {
              pfVar10 = local_2c8;
            }
            AlgoImpl::
            IntroSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_>
                      (pfVar10,(longlong)(int)local_2c0,uVar14,local_3f8);
          }
          local_3f0 = 0;
          fVar22 = -1.0;
          local_3e8 = 0;
          fVar28 = 1.0;
          if (puVar18[9] != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x118);
            uStack_380 = 0;
            local_388._0_4_ = (undefined4)uVar4;
            local_388._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            local_368 = (undefined4)local_388;
            uStack_364 = local_388._4_4_;
            uStack_360 = 0;
            uStack_35c = 0;
            local_388 = uVar4;
            fVar28 = (float)FUN_142ca2f00(puVar18[9],&local_368,0x3f800000);
            uVar16 = local_3e8 & 0xffffffff;
          }
          lVar20 = local_3c8;
          pfVar10 = local_348;
          if (local_2c8 != (float *)0x0) {
            pfVar10 = local_2c8;
          }
          pfVar13 = pfVar10 + (longlong)(int)local_2c0 * 8;
          lVar9 = local_3f0;
          for (; pfVar10 != pfVar13; pfVar10 = pfVar10 + 8) {
            fVar23 = *pfVar10;
            if (1e-08 < ABS(fVar22 - fVar23)) {
              if (pfVar10 != &local_158) {
                local_158 = fVar23;
                if (local_154 != '\0') {
                  local_154 = 0;
                  local_158 = *pfVar10;
                }
                local_154 = '\x01';
              }
              if ((longlong)local_3e8 < 0) {
                if ((int)uVar16 != 0) {
                  plVar15 = (longlong *)(lVar9 + 0xe8);
                  do {
                    if (*plVar15 != 0) {
                      FMemory::Free();
                    }
                    plVar15 = plVar15 + 0x32;
                    uVar24 = (int)uVar16 - 1;
                    uVar16 = (ulonglong)uVar24;
                  } while (uVar24 != 0);
                }
                bVar21 = local_3e8._4_4_ != 0;
                local_3e8 = (ulonglong)local_3e8._4_4_ << 0x20;
                if (bVar21) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>
                  ::ResizeTo(&local_3f0,0);
                }
              }
              else {
                if ((int)uVar16 != 0) {
                  plVar15 = (longlong *)(lVar9 + 0xe8);
                  do {
                    if (*plVar15 != 0) {
                      FMemory::Free();
                    }
                    plVar15 = plVar15 + 0x32;
                    uVar24 = (int)uVar16 - 1;
                    uVar16 = (ulonglong)uVar24;
                  } while (uVar24 != 0);
                }
                local_3e8 = local_3e8 & 0xffffffff00000000;
              }
              param_1 = local_3e0;
              lVar9 = *(longlong *)(local_3e0 + 0x120);
              if (lVar9 == 0) {
                lVar9 = FUN_1423407b0(local_3e0);
              }
              local_408 = &local_3f0;
              FUN_142d21340(lVar20,0,lVar9,&local_2b8);
              uVar16 = local_3e8 & 0xffffffff;
              lVar9 = local_3f0;
              fVar22 = fVar23;
            }
            if (0 < (int)uVar16) {
              lVar9 = *(longlong *)(param_1 + 0x120);
              local_1ac = 1;
              local_1b0 = fVar28 * pfVar10[1] * pfVar10[2] * *(float *)(puVar18 + 0xc);
              if (lVar9 == 0) {
                lVar9 = FUN_1423407b0(param_1);
              }
              local_408 = &local_2b8;
              FUN_142d12020(lVar20,*(undefined8 *)(pfVar10 + 4),lVar9,&local_3f0);
              uVar16 = local_3e8 & 0xffffffff;
              lVar9 = local_3f0;
            }
            if (*(char *)((longlong)puVar18 + 100) != '\0') break;
          }
          if ((int)uVar16 != 0) {
            plVar15 = (longlong *)(lVar9 + 0xe8);
            do {
              if (*plVar15 != 0) {
                FMemory::Free();
              }
              plVar15 = plVar15 + 0x32;
              uVar24 = (int)uVar16 - 1;
              uVar16 = (ulonglong)uVar24;
              lVar9 = local_3f0;
            } while (uVar24 != 0);
          }
          if (lVar9 != 0) {
            FMemory::Free();
          }
          if (local_2c8 != (float *)0x0) {
            FMemory::Free(local_2c8);
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
          if (local_120 != 0) {
            FMemory::Free();
          }
          local_13c = 0;
          local_144 = 0;
          local_154 = '\0';
          local_15c = 0;
          local_16c = 0;
          local_17c = 0;
          local_18c = 0;
          local_19c = 0;
          local_1ac = 0;
          local_1bc = 0;
          if (local_270 != 0) {
            FMemory::Free();
          }
          plVar15 = local_2b0;
          param_1 = local_3e0;
          lVar20 = local_3d0;
          if (local_2b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_2b0 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_2b0)(local_2b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              param_1 = local_3e0;
              lVar20 = local_3d0;
              if (iVar6 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
                param_1 = local_3e0;
                lVar20 = local_3d0;
              }
            }
          }
        }
        plVar15 = (longlong *)(param_1 + 0x4d0);
        *(float *)(puVar18 + 0xc) = *(float *)(puVar18 + 0xc) - *(float *)(puVar18 + 0xb);
      }
      iVar6 = local_3d8;
      if (*(char *)((longlong)puVar18 + 100) != '\0') {
        iVar11 = (int)plVar15[1];
        iVar7 = (iVar11 - local_3d8) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)local_3d8 * 0x68 + *plVar15),
                     (void *)((longlong)(local_3d8 + 1) * 0x68 + *plVar15),(longlong)iVar7 * 0x68);
          iVar11 = (int)plVar15[1];
        }
        *(int *)(plVar15 + 1) = iVar11 + -1;
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
        ResizeShrink(plVar15);
      }
      local_3d8 = iVar6 + -1;
      lVar20 = lVar20 + -1;
    } while (-1 < local_3d8);
    bVar12 = *(byte *)(param_1 + 0x6b4);
  }
  *(byte *)(param_1 + 0x6b4) = bVar12 & 0xef;
  return;
}



// FUNCTION 140ec5760 FUN_140ec5760 body=724 status=ok
// SIG undefined FUN_140ec5760(void)

void FUN_140ec5760(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  undefined4 uVar15;
  
  FUN_140ebde40(param_1 + 0x158,param_1);
  iVar7 = *(int *)(param_1 + 0xe0) + -1;
  if (-1 < iVar7) {
    plVar6 = (longlong *)(param_1 + 0xd8);
    lVar11 = (longlong)iVar7 * 0x28;
    lVar9 = (longlong)*(int *)(param_1 + 0xe0) * 0x28;
    lVar12 = lVar11;
    do {
      plVar1 = (longlong *)(lVar12 + *plVar6);
      if (*(char *)(lVar12 + 0x25 + *plVar6) == '\0') {
        cVar2 = *(char *)((longlong)plVar1 + 0x24);
        fVar14 = *(float *)(plVar1 + 4);
        if (cVar2 == '\0') {
          if (fVar14 == 0.0) goto LAB_140ec5808;
LAB_140ec5819:
          if (cVar2 == '\0') {
            bVar13 = fVar14 == 0.0;
          }
          else {
            bVar13 = fVar14 == *(float *)(plVar1 + 3);
          }
          if (!bVar13) goto LAB_140ec5828;
          goto LAB_140ec5837;
        }
        if (fVar14 != *(float *)(plVar1 + 3)) goto LAB_140ec5819;
LAB_140ec5808:
        if ((cVar2 == '\0') && (fVar14 == 0.0)) goto LAB_140ec5819;
      }
      else {
LAB_140ec5828:
        FUN_140ec5ca0(plVar1,param_2,param_1);
LAB_140ec5837:
        if ((*(char *)((longlong)plVar1 + 0x24) == '\0') && (*(float *)(plVar1 + 4) == 0.0)) {
          if (*(char *)((longlong)plVar1 + 0x1c) == '\x01') {
            FUN_140ea5b90(plVar1,param_1 + 0x168);
          }
          else if ((*(char *)((longlong)plVar1 + 0x1c) == '\x02') &&
                  (lVar4 = FUN_140eae840(param_1), lVar4 != 0)) {
            if (*plVar1 == 0) {
              FUN_142d9dd60(lVar4,0,0,1);
            }
            else {
              FUN_142d9dd60(lVar4,*(undefined8 *)(*plVar1 + 0x80),0,1);
            }
          }
          iVar5 = *(int *)(param_1 + 0xe0);
          iVar3 = (iVar5 - iVar7) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar6 + lVar11),(void *)(lVar9 + *plVar6),(longlong)iVar3 * 0x28);
            iVar5 = *(int *)(param_1 + 0xe0);
          }
          *(int *)(param_1 + 0xe0) = iVar5 + -1;
          TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar6);
        }
      }
      lVar9 = lVar9 + -0x28;
      lVar11 = lVar11 + -0x28;
      lVar12 = lVar12 + -0x28;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  uVar8 = 0;
  fVar14 = *(float *)(param_1 + 0x100);
  if (((0.0 < fVar14) || (*(char *)(param_1 + 0x114) != '\0')) &&
     ((0.0 < fVar14 || (*(char *)(param_1 + 0x114) != '\0')))) {
    if (fVar14 <= 0.0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0x3f800000;
    }
    plVar6 = *(longlong **)(param_1 + 0x168);
    uVar10 = (longlong)*(int *)(param_1 + 0x170) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(param_1 + 0x170) < plVar6) {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      do {
        if (*plVar6 != 0) {
          FUN_140ebff60(*plVar6,param_1 + 0xf0,uVar15);
        }
        plVar6 = plVar6 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar10);
      fVar14 = *(float *)(param_1 + 0x100);
    }
    if (fVar14 <= 0.0) {
      *(undefined1 *)(param_1 + 0x114) = 0;
    }
    else {
      *(float *)(param_1 + 0x100) = fVar14 - param_2;
      if (fVar14 - param_2 <= 0.0) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined1 *)(param_1 + 0x114) = 1;
      }
    }
  }
  if ((*(char *)(param_1 + 0x198) != '\0') || (0.0 < *(float *)(param_1 + 0x1b0))) {
    FUN_140ec4060(param_1 + 400,param_2,param_1 + 0x158);
  }
  FUN_140ebde40(param_1 + 0x158,param_1);
  return;
}



// FUNCTION 140ec5a40 FUN_140ec5a40 body=602 status=ok
// SIG undefined FUN_140ec5a40(void)

void FUN_140ec5a40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  
  iVar5 = FUN_14233f450();
  if (iVar5 == 3) {
    plVar9 = *(longlong **)(param_1 + 0x4b0);
    plVar1 = plVar9 + *(int *)(param_1 + 0x4b8);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar11 = *plVar9;
      lVar12 = 0;
      if (lVar11 != 0) {
        lVar12 = *(longlong *)(lVar11 + 0x90);
      }
      if (lVar12 != 0) {
        if (*(int *)(lVar11 + 0x98) == 0) {
          FUN_140eac190(param_1);
        }
        else {
          if (*(int *)(lVar11 + 0x98) != 1) goto LAB_140ec5af7;
          FUN_142dcec90(param_1);
        }
        FUN_140ec7510(param_1 + 0x4e0);
      }
LAB_140ec5af7:
    }
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x4bc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4b0,0);
    }
    lVar11 = *(longlong *)(param_1 + 0x4c0);
    lVar12 = (longlong)*(int *)(param_1 + 0x4c8) * 0xf0 + lVar11;
    if (lVar11 != lVar12) {
      lVar10 = lVar11 + 0x40;
      do {
        cVar4 = FUN_142d52a00(lVar10);
        if ((cVar4 != '\0') && (lVar2 = *(longlong *)(lVar10 + -8), lVar2 != 0)) {
          uVar7 = FUN_142d52a20(lVar10);
          uVar7 = FArchive::operator<<(uVar7);
          fVar13 = (float)FUN_142d5fea0(uVar7);
          FUN_140ec7510(param_1 + 0x4e0,1.0 - fVar13,lVar2);
        }
        lVar11 = lVar11 + 0xf0;
        lVar10 = lVar10 + 0xf0;
      } while (lVar11 != lVar12);
    }
  }
  iVar5 = *(int *)(param_1 + 0x5b0) + -1;
  if (-1 < iVar5) {
    plVar1 = (longlong *)(param_1 + 0x5a8);
    lVar12 = (longlong)iVar5 * 0x18;
    lVar10 = (longlong)*(int *)(param_1 + 0x5b0) * 0x18;
    lVar11 = lVar12;
    do {
      lVar2 = *plVar1;
      lVar3 = *(longlong *)(lVar12 + lVar2);
      if (lVar3 == 0) {
LAB_140ec5c0f:
        *(undefined8 *)(lVar12 + lVar2) = 0;
        if (*(longlong *)(lVar11 + 8 + *plVar1) != 0) {
          FMemory::Free();
        }
        iVar8 = *(int *)(param_1 + 0x5b0);
        iVar6 = (iVar8 - iVar5) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar11),(void *)(lVar10 + *plVar1),(longlong)iVar6 * 0x18);
          iVar8 = *(int *)(param_1 + 0x5b0);
        }
        *(int *)(param_1 + 0x5b0) = iVar8 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      else if ((*(byte *)(lVar3 + 0x718) & 1) != 0) {
        if (lVar3 != 0) {
          FUN_14260b180();
        }
        goto LAB_140ec5c0f;
      }
      lVar10 = lVar10 + -0x18;
      lVar11 = lVar11 + -0x18;
      lVar12 = lVar12 + -0x18;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  FUN_140ec5760(param_1 + 0x4e0);
  return;
}



// FUNCTION 140ec5ca0 FUN_140ec5ca0 body=507 status=ok
// SIG undefined FUN_140ec5ca0(void)

void FUN_140ec5ca0(longlong *param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined8 local_68;
  undefined1 local_60;
  byte local_5f;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  cVar2 = *(char *)((longlong)param_1 + 0x24);
  fVar7 = *(float *)(param_1 + 4);
  if (*(char *)((longlong)param_1 + 0x25) == '\0') {
    if (cVar2 == '\0') {
      if (fVar7 == 0.0) goto LAB_140ec5e59;
      cVar2 = '\0';
    }
    else if (fVar7 == *(float *)(param_1 + 3)) goto LAB_140ec5e59;
  }
  if (*(float *)(param_1 + 3) <= 0.0) {
    if (cVar2 == '\0') {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = fVar7 / *(float *)(param_1 + 3);
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    uVar5 = 0;
    plVar4 = *(longlong **)(param_3 + 0x168);
    uVar6 = (longlong)*(int *)(param_3 + 0x170) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_3 + 0x170) < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        if (*plVar4 != 0) {
          FUN_140ebff60(*plVar4,param_1 + 2,fVar7);
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  else if (*(char *)((longlong)param_1 + 0x1c) == '\x02') {
    if (((param_1[1] == 0) && (lVar3 = FUN_140eae840(param_3), lVar3 != 0)) &&
       (lVar1 = *param_1, lVar1 != 0)) {
      local_5f = local_5f & 0xfe;
      local_5c = 0x41800000;
      local_58 = 0x41100000;
      local_60 = 0x4e;
      local_50 = 4;
      local_48 = 0;
      local_40 = 0;
      local_68 = *(undefined8 *)(lVar1 + 0x80);
      local_54 = *(undefined4 *)(lVar1 + 0x88);
      lVar3 = FUN_142db7ff0(lVar3,&local_68);
      param_1[1] = lVar3;
    }
    if (param_1[1] != 0) {
      FUN_14260f0c0(param_1[1],param_1[2],fVar7);
    }
  }
LAB_140ec5e59:
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  if (*(char *)((longlong)param_1 + 0x24) == '\0') {
    param_2 = *(float *)(param_1 + 4) - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
  }
  else {
    param_2 = *(float *)(param_1 + 4) + param_2;
    if (*(float *)(param_1 + 3) <= param_2) {
      param_2 = *(float *)(param_1 + 3);
    }
  }
  *(float *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 140ec5ea0 FUN_140ec5ea0 body=63 status=ok
// SIG undefined FUN_140ec5ea0(void)

undefined1 FUN_140ec5ea0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x240) == 0) {
    return 0;
  }
  if ((ABS(*(float *)(*(longlong *)(param_1 + 0x240) + 0x1d8)) <= 1e-08) &&
     (cVar1 = FUN_140ec5ea0(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140ec5ee0 FUN_140ec5ee0 body=168 status=ok
// SIG undefined FUN_140ec5ee0(void)

void FUN_140ec5ee0(longlong param_1)

{
  longlong local_48 [8];
  
  FUN_140eb2f20(param_1 + 0x4e0);
  if (*(char *)(param_1 + 0x4a9) != '\0') {
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    FUN_142dd9a90(param_1,local_48);
    if (local_48[6] != 0) {
      FMemory::Free();
    }
    if (local_48[4] != 0) {
      FMemory::Free();
    }
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    FUN_140ebec70(param_1);
    return;
  }
  return;
}



// FUNCTION 140ec5f90 FUN_140ec5f90 body=794 status=ok
// SIG undefined FUN_140ec5f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140ec5f90(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,uint param_7,undefined1 param_8)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_2f8 [32];
  uint local_2d8;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  longlong local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 local_268 [32];
  undefined1 local_248 [56];
  undefined8 local_210;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  longlong local_a8;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_80;
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_2c8 = param_5;
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_141477fa0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if ((lVar3 != 0) && (param_4 != 0)) {
      uVar2 = UScrollBox::GetPrivateStaticClass();
      local_2c0 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar2);
      if ((local_2c0 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
        lVar9 = param_3[0x1f];
        if (lVar9 == 0) {
          (**(code **)(*param_3 + 0x368))(param_3);
          lVar9 = param_3[0x1f];
          if (lVar9 == 0) goto LAB_140ec626f;
        }
        if ((*(longlong *)(lVar9 + 0x100) != 0) || (*(char *)(lVar9 + 0x131) != '\0')) {
          FAudioDeviceHandle::FAudioDeviceHandle(&local_280);
          lVar4 = thunk_FUN_142d54de0();
          if (lVar4 != 0) {
            local_2d8 = local_2d8 & 0xffffff00;
            FUN_140a7aa40(local_248,param_2,param_4,0);
            local_98 = 0x49742400;
            local_90 = param_6;
            local_210 = local_2c8;
            local_94 = 1;
            local_8c = 1;
            FUN_140a8f060(lVar4,local_248);
            if (*(longlong *)(lVar9 + 0x100) == 0) {
              plVar6 = (longlong *)FUN_1414193b0();
              plVar7 = param_3;
              do {
                plVar8 = param_3;
                if (plVar7 == plVar6) break;
                plVar7 = (longlong *)plVar7[6];
                plVar8 = (longlong *)0x0;
              } while (plVar7 != (longlong *)0x0);
              uVar2 = FUN_142d19800(lVar4);
              local_2d8 = param_7;
              FUN_140e9fc80(lVar3,*(undefined8 *)(lVar4 + 0x48),uVar2,plVar8);
            }
            else {
              local_2a0 = 1;
              local_2b8 = 0;
              local_2b0 = 0xffffffff;
              uStack_2a8 = 0xffffffff;
              local_29c = 0;
              local_298 = 0;
              local_288 = 0;
              local_290 = param_4;
              FWeakObjectPtr::operator=(&local_2b0,param_4);
              local_2a0 = param_8;
              local_2b8 = *(undefined8 *)(lVar9 + 0x100);
              local_298 = *(undefined8 *)(lVar4 + 0x48);
              cVar1 = (**(code **)(*local_2c0 + 0x440))(local_2c0,&local_2b8,lVar4);
              if (cVar1 != '\0') {
                puVar5 = (undefined8 *)FUN_142dc49a0(lVar3,local_268,&local_2b8);
                local_280 = *puVar5;
                uStack_278 = puVar5[1];
                local_270 = puVar5[2];
              }
            }
            FUN_142d266f0(lVar4);
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
              plVar7 = local_f8;
              if (local_d8 != (longlong *)0x0) {
                plVar7 = local_d8;
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7,0);
              }
            }
            if (local_d8 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
          *param_1 = local_280;
          param_1[1] = uStack_278;
          goto LAB_140ec6281;
        }
      }
    }
  }
LAB_140ec626f:
  uVar2 = uRam00000001466ad830;
  *param_1 = _DAT_1466ad828;
  param_1[1] = uVar2;
  local_270 = DAT_1466ad838;
LAB_140ec6281:
  param_1[2] = local_270;
  return param_1;
}



// FUNCTION 140ec62b0 FUN_140ec62b0 body=113 status=ok
// SIG undefined FUN_140ec62b0(void)

void FUN_140ec62b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong local_18;
  longlong local_10;
  
  if (param_3 != 0) {
    lVar2 = FUN_14148cad0();
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
      local_18 = param_1;
      local_10 = param_3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x4c8,&local_18);
    }
  }
  return;
}



// FUNCTION 140ec6330 FUN_140ec6330 body=774 status=ok
// SIG undefined FUN_140ec6330(void)

void FUN_140ec6330(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float fVar14;
  undefined1 local_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined4 local_1c4;
  byte local_1c0;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined4 local_f4;
  byte local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  puVar12 = *(undefined8 **)(param_1 + 0x9e0);
  lVar10 = *(longlong *)(param_1 + 0x9d8);
  puVar11 = puVar12 + (longlong)*(int *)(param_1 + 0x9e8) * 2;
  for (; puVar12 != puVar11; puVar12 = puVar12 + 2) {
    cVar5 = FUN_142c48f90(*puVar12,param_2,0);
    if (cVar5 != '\0') {
      lVar10 = puVar12[1];
      break;
    }
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (lVar10 == 0) {
    return;
  }
  lVar6 = FUN_1413d5810();
  lVar8 = lVar10;
  while (lVar8 != lVar6) {
    lVar8 = *(longlong *)(lVar8 + 0x30);
    if (lVar8 == 0) {
      return;
    }
  }
  uVar7 = FUN_142e27720();
  lVar8 = (**(code **)(*param_2 + 0x628))(param_2,uVar7);
  if (lVar8 == 0) {
    return;
  }
  FUN_142c62180(local_1f8);
  fVar14 = (float)FUN_140eaf1d0(param_1,lVar8);
  if (0.0 < fVar14) {
    FUN_142c62590(&local_50,&DAT_146b2fcb8,fVar14);
    iVar4 = local_1d0;
    lVar6 = (longlong)local_1d0;
    local_1d0 = local_1d0 + 1;
    if (local_1cc < local_1d0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_1d8,iVar4);
    }
    lVar6 = lVar6 * 0x38;
    *(undefined8 *)(lVar6 + (longlong)local_1d8) = local_50;
    ((undefined8 *)(lVar6 + (longlong)local_1d8))[1] = uStack_48;
    puVar12 = (undefined8 *)(lVar6 + 0x10 + (longlong)local_1d8);
    *puVar12 = local_40;
    puVar12[1] = uStack_38;
    puVar3 = (undefined4 *)(lVar6 + 0x20 + (longlong)local_1d8);
    *puVar3 = local_30;
    puVar3[1] = uStack_2c;
    puVar3[2] = uStack_28;
    puVar3[3] = uStack_24;
    *(undefined8 *)(lVar6 + 0x30 + (longlong)local_1d8) = local_20;
  }
  lVar6 = (longlong)local_1d0;
  local_128 = &PTR_FUN_143ff6170;
  local_120 = local_1f0;
  local_118 = local_1e8;
  local_110 = local_1e0;
  local_108 = (void *)0x0;
  local_100 = local_1d0;
  if (local_1d0 == 0) {
    local_fc = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_108,local_1d0,0);
    _guard_xfg_dispatch_icall_nop(local_108,local_1d8,lVar6 * 0x38);
  }
  local_f8 = local_1c8;
  local_f7 = local_1c7;
  local_f4 = local_1c4;
  local_f0 = local_f0 ^ (local_f0 ^ local_1c0) & 7;
  FUN_1405e0d90(local_e8,local_1b8);
  FUN_1405e0d90(local_d0,local_1a0);
  FUN_1405e0d90(local_b8,local_188);
  FUN_1405e0d90(local_a0,local_170);
  local_88 = local_158;
  local_84 = local_154;
  local_80 = local_150;
  local_78 = local_148;
  local_70 = local_140;
  local_7c = local_14c;
  local_68 = local_138;
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 0xc) = *(int *)(local_138 + 0xc) + 1;
    UNLOCK();
  }
  lVar9 = FUN_1413d5810();
  lVar6 = lVar10;
  do {
    lVar13 = lVar10;
    if (lVar6 == lVar9) break;
    lVar6 = *(longlong *)(lVar6 + 0x30);
    lVar13 = 0;
  } while (lVar6 != 0);
  FUN_142c7bb40(lVar8,local_60,lVar13,&local_128,0);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FUN_142c63c50(local_1f8);
  return;
}



// FUNCTION 140ec6640 FUN_140ec6640 body=1365 status=ok
// SIG undefined FUN_140ec6640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ec6640(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  float local_d8 [2];
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (1 < (byte)(*(char *)(param_1 + 0x3ae) - 1U)) {
    if (*(longlong *)(param_1 + 0x6a8) == 0) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar10 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    FUN_142880530(uVar10,param_1 + 0x6a8);
    *(undefined8 *)(param_1 + 0x6a8) = 0;
    return;
  }
  plVar9 = *(longlong **)(param_1 + 0x118);
  bVar3 = true;
  if (plVar9 != (longlong *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (bVar2 = bVar3,
       *(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
       lVar6 + 0x88)) {
      bVar2 = false;
    }
    if (bVar2) {
      local_b0 = FUN_141403c70();
      plVar7 = (longlong *)(**(code **)(*plVar9 + 0x628))(plVar9,local_b0);
      if (plVar7 != (longlong *)0x0) {
        cVar4 = UKeyLabel::GetDisplayNameVisibility_Implementation(plVar9);
        if (cVar4 != '\0') {
          return;
        }
        cVar4 = (**(code **)(*plVar7 + 0x570))(plVar7);
        if ((cVar4 != '\0') ||
           ((cVar4 = (**(code **)(*plVar7 + 0x558))(plVar7), cVar4 != '\0' &&
            (*(float *)((longlong)plVar7 + 0x194) != 0.0)))) {
LAB_140ec693b:
          if (*(longlong *)(param_1 + 0x6a8) != 0) {
            return;
          }
          uStack_c8 = 0;
          local_d0 = FUN_140ec6640;
          lVar6 = *(longlong *)(param_1 + 0x120);
          if (lVar6 == 0) {
            lVar6 = FUN_1423407b0(param_1);
          }
          if (*(longlong *)(lVar6 + 400) == 0) {
            uVar10 = *(undefined8 *)(lVar6 + 0x3f8);
          }
          else {
            uVar10 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
          }
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar9 + 1,param_1);
            *(undefined4 *)(plVar9 + 2) = (undefined4)local_d0;
            *(undefined4 *)((longlong)plVar9 + 0x14) = local_d0._4_4_;
            *(undefined4 *)(plVar9 + 3) = uStack_c8;
            *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_c4;
            lVar6 = FDelegateHandle::GenerateNewID();
            plVar9[5] = lVar6;
            *plVar9 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_98 = 0;
          local_90 = 0;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x30))(plVar9,&local_98);
          }
          FWeakObjectPtr::operator=(local_88,0);
          local_e0 = 0xbf800000;
          local_e8 = 1;
          local_80 = 0;
          local_48 = (longlong *)0x0;
          local_38 = 0;
          local_78 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar10,param_1 + 0x6a8,&local_98,0x3d4ccccd);
          if (local_38 != 0) {
            plVar7 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar7 = local_48;
            }
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x10))(plVar7,0);
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
          if (plVar9 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar6 = FMemory::Realloc(plVar9,0,0);
          if (lVar6 == 0) {
            return;
          }
          FMemory::Free(lVar6);
          return;
        }
        lVar6 = plVar7[0x2ef];
        if (lVar6 != 0) {
          lVar8 = AUGFlyingMageAIController::StaticClass();
          lVar6 = *(longlong *)(lVar6 + 0x10);
          if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
              lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) goto LAB_140ec693b;
        }
        plVar9 = *(longlong **)(param_1 + 0x118);
        local_a8 = FUN_142e27720();
        lVar6 = (**(code **)(*plVar9 + 0x628))(plVar9,local_a8);
        if (lVar6 == 0) {
          if (((0.0001 < ABS(*(float *)((longlong)plVar7 + 0x18c))) ||
              (0.0001 < ABS(*(float *)(plVar7 + 0x32)))) ||
             (0.0001 < ABS(*(float *)((longlong)plVar7 + 0x194)))) goto LAB_140ec693b;
        }
        else {
          local_a0 = FUN_1407ae2c0();
          FUN_142c6e2c0(lVar6,&local_d0,local_a0);
          if (local_d0 != (code *)0x0) {
            lVar6 = *(longlong *)((longlong)local_d0 + 8);
            lVar8 = FAnimNode_DragonSpineSolver::StaticStruct();
            for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
              if (lVar6 == lVar8) {
                bVar2 = true;
                goto LAB_140ec6847;
              }
            }
            bVar2 = false;
LAB_140ec6847:
            lVar6 = 0;
            if (bVar2) {
              lVar6 = (longlong)local_d0;
            }
            if (lVar6 != 0) {
              cVar4 = FUN_1406ef930();
              bVar3 = true;
              if (cVar4 != '\0') {
                bVar3 = false;
              }
            }
          }
          plVar9 = (longlong *)CONCAT44(uStack_c4,uStack_c8);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar9 + 1;
            lVar6 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          if (!bVar3) goto LAB_140ec693b;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x6b4) = *(byte *)(param_1 + 0x6b4) | 8;
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar10 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    FUN_142880530(uVar10,param_1 + 0x6a8);
    *(undefined8 *)(param_1 + 0x6a8) = 0;
  }
  if ((*(byte *)(param_1 + 0x3ad) & 2) != 0) {
    iVar5 = *(int *)(param_1 + 0x6b0);
    lVar6 = param_1 + 0x4e0;
    if (iVar5 == -1) {
      lVar8 = param_1 + 0x398;
      if (*(int *)(param_1 + 0x3a0) < 1) {
        lVar8 = 0;
      }
      iVar5 = FUN_140ea9280(lVar6,lVar8,local_d8);
      *(int *)(param_1 + 0x6b0) = iVar5;
      if (iVar5 == -1) goto LAB_140ec6b51;
    }
    cVar4 = FUN_140ea95c0(lVar6,iVar5,local_c0,local_d8);
    if ((cVar4 != '\0') &&
       (*(float *)(param_1 + 0x38c) <= local_d8[0] && local_d8[0] != *(float *)(param_1 + 0x38c))) {
      local_e0 = *(undefined4 *)(param_1 + 0x390);
      local_e8 = 1;
      FUN_140ea40c0(lVar6,*(undefined4 *)(param_1 + 0x6b0),local_c0);
    }
  }
LAB_140ec6b51:
  if ((*(byte *)(param_1 + 0x3ad) & 4) != 0) {
    FUN_140ea6b70(param_1 + 0x4e0);
  }
  return;
}



// FUNCTION 140ec6ba0 FUN_140ec6ba0 body=12 status=ok
// SIG undefined FUN_140ec6ba0(void)

void FUN_140ec6ba0(longlong param_1)

{
  *(byte *)(param_1 + 0x6b4) = *(byte *)(param_1 + 0x6b4) & 0xfe;
  FUN_140ec77a0();
  return;
}



// FUNCTION 140ec6bb0 AddToBuildPartList body=31 status=ok
// SIG undefined AddToBuildPartList(void)

void ARawbotsBuildModePawn::AddToBuildPartList(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dbb5d0(param_1 + 0x3b8,local_res10);
  return;
}



// FUNCTION 140ec6bd0 FUN_140ec6bd0 body=219 status=ok
// SIG undefined FUN_140ec6bd0(void)

void FUN_140ec6bd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res18;
  
  lVar4 = *(longlong *)(param_1 + 0x4c0);
  lVar5 = (longlong)*(int *)(param_1 + 0x4c8) * 0xf0 + lVar4;
  local_res18 = param_3;
  if (lVar4 == lVar5) {
    return;
  }
  do {
    if (*(longlong *)(lVar4 + 0x18) != 0) {
      lVar2 = FUN_142e49950();
      lVar6 = *(longlong *)(lVar4 + 0x18);
      for (lVar1 = lVar6; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar2) goto LAB_140ec6c38;
      }
    }
    lVar6 = 0;
LAB_140ec6c38:
    if (param_2 != 0) {
      lVar2 = FUN_142e49950();
      for (lVar1 = param_2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        lVar3 = param_2;
        if (lVar1 == lVar2) goto LAB_140ec6c60;
      }
    }
    lVar3 = 0;
LAB_140ec6c60:
    if (lVar6 == lVar3) {
      if (lVar4 == 0) {
        return;
      }
      FUN_142dbb5d0(lVar4 + 0x58,&local_res18);
      return;
    }
    lVar4 = lVar4 + 0xf0;
    if (lVar4 == lVar5) {
      return;
    }
  } while( true );
}



// FUNCTION 140ec6cb0 FUN_140ec6cb0 body=78 status=ok
// SIG undefined FUN_140ec6cb0(void)

void FUN_140ec6cb0(longlong param_1,char param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 local_res18 [2];
  
  pcVar1 = *(char **)(param_1 + 0x4c0);
  pcVar2 = pcVar1 + (longlong)*(int *)(param_1 + 0x4c8) * 0xf0;
  if (pcVar1 != pcVar2) {
    while (*pcVar1 != param_2) {
      pcVar1 = pcVar1 + 0xf0;
      if (pcVar1 == pcVar2) {
        return;
      }
    }
    local_res18[0] = param_3;
    FUN_142dbb5d0(pcVar1 + 0x58,local_res18);
  }
  return;
}



// FUNCTION 140ec6d00 FUN_140ec6d00 body=31 status=ok
// SIG undefined FUN_140ec6d00(void)

void FUN_140ec6d00(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dbb5d0(param_1 + 0x6c0,local_res10);
  return;
}



// FUNCTION 140ec6d20 FUN_140ec6d20 body=62 status=ok
// SIG undefined FUN_140ec6d20(void)

void FUN_140ec6d20(longlong *param_1)

{
  if (param_1[2] != 0) {
    if (*param_1 == 0) {
      *(longlong *)param_1[1] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    *(longlong *)param_1[1] = *param_1;
    *(longlong *)(*param_1 + 8) = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 140ec6d60 FUN_140ec6d60 body=1717 status=ok
// SIG undefined FUN_140ec6d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ec6d60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  undefined1 auStack_2a8 [32];
  undefined4 *local_288;
  ulonglong *puStack_280;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 local_260;
  undefined4 *local_258;
  longlong *plStack_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208;
  undefined8 local_200;
  longlong *plStack_1f8;
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
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0 [2];
  longlong local_c8;
  longlong *local_b8;
  char local_a8;
  ulonglong local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  puVar16 = local_1a8;
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_278 = 0;
  lVar11 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar11 != 0) {
    lVar12 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar11 = (**(code **)(*(longlong *)(lVar11 + 0xd80) + 0x18))(), lVar11 != 0)) {
      iVar9 = ASwitchActor::GetSelectedOption(lVar11);
      iVar10 = FUN_142b47070(lVar11);
      local_260 = 0;
      local_270 = DAT_1464aa6c0;
      uStack_26c = DAT_1464aa6c4;
      uStack_268 = DAT_1464aa6c8;
      uStack_264 = DAT_1464aa6cc;
      local_258 = (undefined4 *)0x0;
      plStack_250 = (longlong *)0x0;
      lVar11 = FUN_140e97290(param_1);
      if (lVar11 != 0) {
        puVar13 = (undefined4 *)FUN_1411e0f50(lVar11,local_100,iVar9,iVar10);
        local_208 = 0;
        local_218 = *puVar13;
        uStack_214 = puVar13[1];
        uStack_210 = puVar13[2];
        uStack_20c = puVar13[3];
        local_200 = 0;
        plStack_1f8 = (longlong *)0x0;
        FUN_140692440(&local_270,&local_218);
        plVar17 = plStack_1f8;
        if (plStack_1f8 != (longlong *)0x0) {
          LOCK();
          plVar4 = plStack_1f8 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_1f8)(plStack_1f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_1f8 + 8))(plStack_1f8,1);
            }
          }
        }
      }
      if (iVar10 < 1) {
        bVar8 = false;
        bVar7 = false;
        bVar6 = true;
        bVar5 = true;
        uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_130,L"{0}/Unlimited",L"GFxAnointmentRerollMenu",
                            L"HeaderInfiniteFormat");
        puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_e0,uVar14);
        local_d0[0] = 0;
        local_288 = local_d0;
        local_a8 = '\0';
        puStack_280 = &local_a0;
        local_238 = *puVar15;
        local_230 = puVar15[1];
        if (local_230 != 0) {
          LOCK();
          *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
          UNLOCK();
        }
        local_c8 = (longlong)iVar9;
        local_1c8 = local_288;
        uStack_1c0 = puStack_280;
        uVar14 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
        uVar14 = FText::Format(local_148,&local_238,uVar14);
        FText::FText(puVar16,uVar14);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_140 + 1;
          lVar11 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8);
        if ((local_a8 != '\0') && (local_a8 = '\0', local_b8 != (longlong *)0x0)) {
          LOCK();
          plVar17 = local_b8 + 1;
          lVar11 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)local_b8 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_b8 + 8))(local_b8,1);
            }
          }
        }
        plVar17 = (longlong *)puVar15[1];
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar17 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
      }
      else {
        bVar8 = true;
        bVar7 = true;
        bVar6 = false;
        bVar5 = false;
        uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_118,L"BACKPACK {0}/{1}",L"GFxAnointmentRerollMenu",
                            L"HeaderCountsFormat");
        puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar14);
        local_98[0] = 0;
        local_70 = 0;
        local_248 = *puVar15;
        local_68 = 0;
        local_40 = 0;
        local_288 = local_98;
        puStack_280 = local_38;
        local_240 = puVar15[1];
        if (local_240 != 0) {
          LOCK();
          *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
          UNLOCK();
        }
        local_90 = (longlong)iVar9;
        local_60 = (longlong)iVar10;
        local_1e8 = local_288;
        uStack_1e0 = puStack_280;
        uVar14 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
        uVar14 = FText::Format(local_160,&local_248,uVar14);
        FText::FText(local_190,uVar14);
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_158 + 1;
          lVar11 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar1 = (int *)((longlong)local_158 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_158 + 8))(local_158,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8);
        lVar11 = 2;
        plVar17 = (longlong *)&stack0xffffffffffffffe0;
        do {
          lVar11 = lVar11 + -1;
          if ((char)plVar17[-4] != '\0') {
            *(undefined1 *)(plVar17 + -4) = 0;
            plVar4 = (longlong *)plVar17[-6];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              lVar12 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
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
          }
          plVar17 = plVar17 + -6;
        } while (lVar11 != 0);
        plVar17 = (longlong *)puVar15[1];
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar17 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        puVar16 = local_190;
      }
      FText::FText(local_178,puVar16);
      if ((bVar5) && (local_1a0 != (longlong *)0x0)) {
        LOCK();
        plVar17 = local_1a0 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)local_1a0 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      if ((bVar6) && (local_128 != (longlong *)0x0)) {
        LOCK();
        plVar17 = local_128 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      if ((bVar7) && (local_188 != (longlong *)0x0)) {
        LOCK();
        plVar17 = local_188 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar1 = (int *)((longlong)local_188 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_188 + 8))(local_188,1);
          }
        }
      }
      if ((bVar8) && (local_110 != (longlong *)0x0)) {
        LOCK();
        plVar17 = local_110 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x6e8) != 0) && (*(longlong *)(param_1 + 0x6f0) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x6f0) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x6e0,local_178,1,0);
          local_228 = local_270;
          uStack_224 = uStack_26c;
          uStack_220 = uStack_268;
          uStack_21c = uStack_264;
          if (local_258 != (undefined4 *)0x0) {
            local_228 = *local_258;
            uStack_224 = local_258[1];
            uStack_220 = local_258[2];
            uStack_21c = local_258[3];
          }
          FUN_142f0bf30(param_1 + 0x6e0,&local_228,1);
        }
      }
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_170 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_170 + 8))(local_170,1);
          }
        }
      }
      plVar17 = plStack_250;
      if (plStack_250 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_250 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_250)(plStack_250);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plStack_250 + 8))(plStack_250,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec7420 FUN_140ec7420 body=231 status=ok
// SIG undefined FUN_140ec7420(void)

void FUN_140ec7420(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x6b8) == 0) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x90);
  if (lVar6 != 0) {
    lVar3 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ec74a4;
  }
  lVar6 = 0;
LAB_140ec74a4:
  lVar3 = FUN_140e97230(param_1);
  if ((lVar6 != 0) && (lVar3 != 0)) {
    puVar4 = (undefined8 *)FUN_1411e2300(lVar6);
    uVar5 = (**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x18))();
    uVar2 = FUN_142ff7c90(uVar5,*puVar4);
    FUN_140f0abd0(*(undefined8 *)(param_1 + 0x6b8),*puVar4,uVar2,param_2);
  }
  return;
}



// FUNCTION 140ec7510 FUN_140ec7510 body=655 status=ok
// SIG undefined FUN_140ec7510(void)

void FUN_140ec7510(longlong param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  int local_res20;
  
  if ((param_3 != 0) && (*(char *)(param_1 + 0x188) == '\0')) {
    plVar1 = (longlong *)(param_1 + 0xb8);
    lVar6 = *plVar1;
    lVar10 = (longlong)*(int *)(param_1 + 0xc0) * 0x40;
    lVar4 = lVar10 + lVar6;
    for (; lVar6 != lVar4; lVar6 = lVar6 + 0x40) {
      if (*(longlong *)(lVar6 + 0x10) == param_3) goto LAB_140ec760d;
    }
    if (0.0 < param_2) {
      iVar3 = *(int *)(param_1 + 0xc0) + 1;
      *(int *)(param_1 + 0xc0) = iVar3;
      if (*(int *)(param_1 + 0xc4) < iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1);
      }
      lVar4 = *plVar1;
      *(undefined8 *)(lVar10 + lVar4) = 0xffffffffffffffff;
      *(undefined4 *)(lVar10 + 8 + lVar4) = 0xffffffff;
      *(longlong *)(lVar10 + 0x10 + lVar4) = param_3;
      *(undefined4 *)(lVar10 + 0x18 + lVar4) = 0;
      FUN_140590080(lVar4 + 0x20 + lVar10);
      pbVar2 = (byte *)(lVar10 + 0x3c + lVar4);
      *pbVar2 = *pbVar2 & 0xfc;
      *(undefined4 *)(lVar10 + 0x38 + lVar4) = 0;
      lVar6 = *plVar1 + lVar10;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      if (*(int *)(param_1 + 0x54) == -1) {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
LAB_140ec760d:
      if ((lVar6 != 0) && (FUN_140ebf660(lVar6,param_2,param_1), (*(byte *)(lVar6 + 0x3c) & 2) != 0)
         ) {
        iVar3 = *(int *)(param_1 + 0xc0);
        lVar4 = (longlong)iVar3;
        if (iVar3 != 0) {
          bVar11 = *(longlong *)(*plVar1 + 0x10) != param_3;
          local_res20 = 0;
          lVar6 = 0;
          iVar7 = 0;
          do {
            lVar6 = lVar6 + 1;
            iVar8 = iVar7 + 1;
            if (lVar6 < lVar4) {
              plVar5 = (longlong *)(*plVar1 + 0x10 + lVar6 * 0x40);
              do {
                if (bVar11 != (*plVar5 != param_3)) break;
                iVar8 = iVar8 + 1;
                lVar6 = lVar6 + 1;
                plVar5 = plVar5 + 8;
              } while (lVar6 < lVar4);
            }
            iVar9 = iVar8 - iVar7;
            if (bVar11 == false) {
              if (iVar9 != 0) {
                lVar10 = (longlong)iVar7 * 0x40 + 0x20 + *plVar1;
                do {
                  FUN_140591060(lVar10);
                  lVar10 = lVar10 + 0x40;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
            }
            else {
              if (local_res20 != iVar7) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)local_res20 * 0x40 + *plVar1),
                           (void *)((longlong)iVar7 * 0x40 + *plVar1),(longlong)iVar9 << 6);
              }
              local_res20 = local_res20 + iVar9;
            }
            bVar11 = (bool)(bVar11 ^ 1);
            iVar7 = iVar8;
          } while (lVar6 < lVar4);
          *(int *)(param_1 + 0xc0) = local_res20;
          if (0 < iVar3 - local_res20) {
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                      (param_1);
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
            if (*(int *)(param_1 + 0x54) == -1) {
              *(undefined4 *)(param_1 + 0x54) = 0;
            }
            *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec77a0 FUN_140ec77a0 body=1976 status=ok
// SIG undefined FUN_140ec77a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ec77a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  char *pcVar13;
  char *pcVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_110;
  float local_108 [2];
  longlong local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((((*(byte *)((longlong)param_1 + 0x3ad) & 0x10) != 0) || (iVar7 = FUN_14233f450(), iVar7 != 3)
      ) || (1 < (byte)(*(char *)((longlong)param_1 + 0x3ae) - 1U))) {
    if (param_1[0xd4] == 0) {
      return;
    }
    lVar10 = param_1[0x24];
    if (lVar10 == 0) {
      lVar10 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar10 + 400) == 0) {
      uVar11 = *(undefined8 *)(lVar10 + 0x3f8);
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar10 + 400) + 0x90);
    }
    FUN_142880530(uVar11,param_1 + 0xd4);
    param_1[0xd4] = 0;
    return;
  }
  cVar5 = FUN_1407c3030(param_1 + 0x77);
  plVar12 = (longlong *)param_1[0x23];
  local_e0 = FUN_141403c70();
  plVar8 = (longlong *)(**(code **)(*plVar12 + 0x628))(plVar12,local_e0);
  plVar12 = (longlong *)(ulonglong)(cVar5 == '\0');
  if (((cVar5 == '\0') && (plVar8 != (longlong *)0x0)) &&
     (plVar12 = (longlong *)0x1, (*(byte *)(plVar8 + 0x32d) & 1) != 0)) {
    plVar12 = (longlong *)0x0;
  }
  *(undefined4 *)(param_1 + 0xd6) = 0xffffffff;
  bVar16 = SUB81(plVar12,0);
  if (bVar16 == false) goto LAB_140ec7d1b;
  plVar12 = (longlong *)param_1[0x23];
  local_d8 = FUN_142e27720();
  local_100 = (**(code **)(*plVar12 + 0x628))(plVar12,local_d8);
  if ((local_100 != 0) && (lVar10 = param_1[0x23], lVar10 != 0)) {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (cVar5 = UKeyLabel::GetDisplayNameVisibility_Implementation(lVar10), cVar5 == '\0')) {
      FName::FName(&local_e8,L"FullBody",1);
      bVar4 = false;
      if ((plVar8 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar8 + 0x558))(plVar8), cVar5 == '\0')) {
        local_d0 = UIntUserSetting::GetPrivateStaticClass();
        lVar10 = local_100;
        cVar5 = FUN_142c736c0(local_100,local_d0);
        if (cVar5 == '\0') {
          FUN_142c6e430(lVar10,&local_f8,local_e8);
          if (local_f8 != (code *)0x0) {
            lVar10 = *(longlong *)((longlong)local_f8 + 0x10);
            if (lVar10 != 0) {
              lVar9 = UTextBlock::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                bVar6 = *(byte *)((longlong)param_1 + 0x6b4);
                if ((bVar6 & 2) != 0) {
                  *(byte *)((longlong)param_1 + 0x6b4) = bVar6 & 0xfd;
                  local_c8 = FUN_1412eaf70();
                  cVar5 = FUN_142c72c50(local_f8,1,local_c8);
                  bVar6 = cVar5 << 2 | *(byte *)((longlong)param_1 + 0x6b4) & 0xfb;
                  *(byte *)((longlong)param_1 + 0x6b4) = bVar6;
                }
                if ((*(char *)(lVar10 + 0x1e7) != '\0') && ((bVar6 & 4) == 0)) {
                  bVar4 = true;
                  goto LAB_140ec7a1c;
                }
              }
            }
            bVar4 = false;
          }
LAB_140ec7a1c:
          plVar12 = (longlong *)CONCAT44(uStack_ec,uStack_f0);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          if (!bVar4) goto LAB_140ec7b59;
        }
      }
      local_108[0] = 0.0;
      plVar12 = param_1 + 0x73;
      if ((int)param_1[0x74] < 1) {
        plVar12 = (longlong *)0x0;
      }
      iVar7 = FUN_140ea9280(param_1 + 0x9c,plVar12,local_108);
      if (iVar7 != -1) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar10 = DAT_146b33f38;
        lVar15 = DAT_146b33f38 + 0x60;
        lVar9 = FWeakObjectPtr::Get(lVar15);
        if (lVar9 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar10 + 0x68)) &&
             (local_100 = 0, *(longlong *)(lVar10 + 0x70) != 0)) {
            lVar9 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar15,lVar9);
            if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar10 + 0x68) = DAT_1464b56f4;
            }
            lVar10 = FWeakObjectPtr::Get(lVar15);
            if (lVar10 != 0) goto LAB_140ec7b10;
          }
        }
        else {
LAB_140ec7b10:
          FUN_142e778a0();
        }
        fVar3 = *(float *)((longlong)param_1 + 0x38c);
        fVar17 = fVar3;
        if ((((*(byte *)((longlong)param_1 + 0x3ad) & 2) != 0) && (param_1[0xbf] != 0)) &&
           (fVar17 = *(float *)(param_1[0xbf] + 0xa0), fVar17 <= fVar3)) {
          fVar17 = fVar3;
        }
        bVar16 = local_108[0] <= fVar17;
        *(int *)(param_1 + 0xd6) = iVar7;
      }
    }
  }
LAB_140ec7b59:
  if (bVar16 != false) {
    if (param_1[0xd4] != 0) {
      lVar10 = param_1[0x24];
      if (lVar10 == 0) {
        lVar10 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar10 + 400) == 0) {
        uVar11 = *(undefined8 *)(lVar10 + 0x3f8);
      }
      else {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar10 + 400) + 0x90);
      }
      FUN_142880530(uVar11,param_1 + 0xd4);
      param_1[0xd4] = 0;
    }
    if (*(char *)((longlong)param_1 + 0x3af) == '\0') {
      pcVar13 = (char *)param_1[0x98];
      local_118 = 0;
      pcVar14 = pcVar13 + (longlong)(int)param_1[0x99] * 0xf0;
      for (; pcVar13 != pcVar14; pcVar13 = pcVar13 + 0xf0) {
        if (*pcVar13 == '\0') {
          if (pcVar13 != (char *)0x0) {
            pcVar13 = pcVar13 + 0x40;
            cVar5 = FUN_142d52a00(pcVar13);
            if (cVar5 != '\0') {
              uVar11 = FUN_142d52a20(pcVar13);
              lVar10 = FArchive::operator<<(uVar11);
              FUN_14246fd70(lVar10 + 0x94,0);
              uVar11 = FUN_142d52a20(pcVar13);
              uVar11 = FArchive::operator<<(uVar11);
              FUN_142d6d6c0(uVar11);
            }
          }
          break;
        }
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x3ad) & 0x10) == 0) {
      *(byte *)((longlong)param_1 + 0x3ad) = *(byte *)((longlong)param_1 + 0x3ad) | 0x10;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    if ((plVar8 != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*plVar8 + 0x570))(plVar8), cVar5 != '\0')) {
      (**(code **)(*plVar8 + 0x5a0))(plVar8,3);
      if (*(float *)((longlong)plVar8 + 0x194) == 0.0) {
        *(float *)((longlong)plVar8 + 0x194) = *(float *)((longlong)plVar8 + 0x194) - 1.0;
      }
    }
    FUN_142d8e990(param_1[0x23],DAT_146871b50,0);
    FUN_140eaa550(param_1 + 0x9c,1);
    if ((*(byte *)((longlong)param_1 + 0x6b4) & 8) != 0) {
      return;
    }
    if (param_1[0xd5] != 0) {
      return;
    }
    FUN_140ec6640(param_1);
    return;
  }
LAB_140ec7d1b:
  if (param_1[0xd4] == 0) {
    if (*(char *)((longlong)param_1 + 0x3af) == '\0') {
      pcVar13 = (char *)param_1[0x98];
      local_110 = 0;
      pcVar14 = pcVar13 + (longlong)(int)param_1[0x99] * 0xf0;
      for (; pcVar13 != pcVar14; pcVar13 = pcVar13 + 0xf0) {
        if (*pcVar13 == '\0') {
          if (pcVar13 != (char *)0x0) {
            cVar5 = FUN_142d52a00(pcVar13 + 0x40);
            if (cVar5 != '\0') {
              uVar11 = FUN_142d52a20(pcVar13 + 0x40);
              lVar10 = FArchive::operator<<(uVar11);
              FUN_14246fd70(lVar10 + 0x94,1);
            }
          }
          break;
        }
      }
    }
    uStack_f0 = 0;
    local_f8 = FUN_140ec77a0;
    lVar10 = param_1[0x24];
    if (lVar10 == 0) {
      lVar10 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar10 + 400) == 0) {
      uVar11 = *(undefined8 *)(lVar10 + 0x3f8);
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar10 + 400) + 0x90);
    }
    plVar12 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar12 + 1,param_1);
      *(undefined4 *)(plVar12 + 2) = (undefined4)local_f8;
      *(undefined4 *)((longlong)plVar12 + 0x14) = local_f8._4_4_;
      *(undefined4 *)(plVar12 + 3) = uStack_f0;
      *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_ec;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar12[5] = lVar10;
      *plVar12 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_b8 = 0;
    local_b0 = 0;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x30))(plVar12,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_120 = 0xbf800000;
    local_128 = 1;
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar11,param_1 + 0xd4,&local_b8,0x3d4ccccd);
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
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      lVar10 = FMemory::Realloc(plVar12,0,0);
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
  }
  return;
}



// FUNCTION 140ec7f60 FUN_140ec7f60 body=659 status=ok
// SIG undefined FUN_140ec7f60(void)

void FUN_140ec7f60(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar8 = FUN_1413f82e0();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if ((char)plVar2[0x25] != '\x03') {
    return;
  }
  cVar7 = (**(code **)(*plVar2 + 0x950))(plVar2);
  if (cVar7 != '\0') {
    return;
  }
  plVar3 = (longlong *)plVar2[0x120];
  if (plVar3 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar3 + 0x558))(plVar3);
    if ((cVar7 != '\0') || (cVar7 = (**(code **)(*plVar3 + 0x570))(plVar3), cVar7 != '\0'))
    goto LAB_140ec8070;
    lVar8 = plVar3[0x2ef];
    if (lVar8 != 0) {
      lVar9 = AUGFlyingMageAIController::StaticClass();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140ec8070;
    }
  }
  lVar8 = plVar2[0x124];
  if (lVar8 == 0) {
    return;
  }
  uVar10 = UIntUserSetting::GetPrivateStaticClass();
  cVar7 = FUN_142c736c0(lVar8,uVar10);
  if (cVar7 == '\0') {
    return;
  }
LAB_140ec8070:
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::ApplyFreezeFallDamage",L"::");
  pwVar6 = (wchar_t *)0x0;
  while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar6 = pwVar5;
  }
  FName::FName(&local_res10,pwVar6 + 2,1);
  plVar3 = plVar2 + 0xb4;
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_20);
  }
  piVar12 = (int *)*plVar3;
  lVar8 = plVar2[0xb5];
  piVar13 = piVar12;
  do {
    if (piVar13 == piVar12 + (longlong)(int)lVar8 * 4) {
LAB_140ec81a1:
      iVar1 = (int)plVar2[0xb5];
      *(int *)(plVar2 + 0xb5) = iVar1 + 1;
      if (*(int *)((longlong)plVar2 + 0x5ac) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
      }
      piVar12 = (int *)((longlong)iVar1 * 0x10 + *plVar3);
      *piVar12 = local_28;
      piVar12[1] = local_24;
      *(longlong *)(piVar12 + 2) = local_20;
LAB_140ec81da:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar3);
      return;
    }
    if (((*piVar13 == local_28) && (piVar13[1] == local_24)) ||
       ((cVar7 = FWeakObjectPtr::IsValid(piVar13), cVar7 == '\0' &&
        (cVar7 = FWeakObjectPtr::IsValid(&local_28), cVar7 == '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(longlong *)(piVar13 + 2) == local_20)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140ec81da;
      goto LAB_140ec81a1;
    }
    piVar13 = piVar13 + 4;
  } while( true );
}



// FUNCTION 140ec8200 FUN_140ec8200 body=501 status=ok
// SIG undefined FUN_140ec8200(void)

void FUN_140ec8200(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  bVar4 = *(byte *)(param_1 + 0x3c) & 1;
  if (*(float *)(param_1 + 0x18) <= 0.0) {
    if (bVar4 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x90) != '\0')) {
        plVar9 = *(longlong **)(param_2 + 0xd8);
        plVar1 = plVar9 + (longlong)*(int *)(param_2 + 0xe0) * 5;
        if (plVar9 != plVar1) {
          while ((*plVar9 != lVar2 || (*(char *)((longlong)plVar9 + 0x1c) != '\x01'))) {
            plVar9 = plVar9 + 5;
            if (plVar9 == plVar1) {
              *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe | 2;
              return;
            }
          }
          *(undefined2 *)((longlong)plVar9 + 0x24) = 0x100;
        }
      }
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe | 2;
    }
  }
  else if (bVar4 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x30) != '\0') {
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          plVar9 = *(longlong **)(param_2 + 200);
          plVar1 = plVar9 + (longlong)*(int *)(param_2 + 0xd0) * 3;
          for (; plVar9 != plVar1; plVar9 = plVar9 + 3) {
            if ((*plVar9 != 0) && (*(longlong *)(*plVar9 + 0x6f0) == *(longlong *)(lVar2 + 0x50)))
            goto LAB_140ec828a;
          }
        }
        FUN_140ea6dd0(param_2);
      }
LAB_140ec828a:
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (*(char *)(lVar2 + 0x90) != '\0') {
        plVar1 = (longlong *)(param_2 + 0xd8);
        plVar6 = (longlong *)*plVar1;
        lVar8 = (longlong)*(int *)(param_2 + 0xe0);
        plVar9 = plVar6 + lVar8 * 5;
        for (; (plVar7 = (longlong *)0x0, plVar6 != plVar9 &&
               ((*plVar6 != lVar2 || (plVar7 = plVar6, *(char *)((longlong)plVar6 + 0x1c) != '\x01')
                ))); plVar6 = plVar6 + 5) {
        }
        if (plVar7 == (longlong *)0x0) {
          iVar5 = *(int *)(param_2 + 0xe0) + 1;
          *(int *)(param_2 + 0xe0) = iVar5;
          if (*(int *)(param_2 + 0xe4) < iVar5) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1);
          }
          lVar3 = *plVar1;
          *(longlong *)(lVar3 + lVar8 * 0x28) = lVar2;
          *(undefined8 *)(lVar3 + 8 + lVar8 * 0x28) = 0;
          *(undefined8 *)(lVar3 + 0x10 + lVar8 * 0x28) = 0;
          lVar2 = *(longlong *)(lVar3 + lVar8 * 0x28);
          *(undefined4 *)(lVar3 + 0x18 + lVar8 * 0x28) = 0;
          *(undefined1 *)(lVar3 + 0x1c + lVar8 * 0x28) = 1;
          *(undefined4 *)(lVar3 + 0x20 + lVar8 * 0x28) = 0;
          *(undefined2 *)(lVar3 + 0x24 + lVar8 * 0x28) = 0;
          *(undefined4 *)(lVar3 + 0x18 + lVar8 * 0x28) = *(undefined4 *)(lVar2 + 0xa8);
          *(undefined8 *)(lVar3 + 0x10 + lVar8 * 0x28) = *(undefined8 *)(lVar2 + 0xa0);
          plVar7 = (longlong *)(*plVar1 + lVar8 * 0x28);
        }
        *(undefined2 *)((longlong)plVar7 + 0x24) = 0x101;
        FUN_140e7ae90(*(undefined8 *)(param_2 + 0xb0));
      }
    }
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfd | 1;
    return;
  }
  return;
}



// FUNCTION 140ec8400 FUN_140ec8400 body=416 status=ok
// SIG undefined FUN_140ec8400(void)

void FUN_140ec8400(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  longlong *plVar12;
  float fVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (cVar6 == '\0') {
    cVar10 = '\x01';
  }
  else {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
    fVar13 = *(float *)(param_1 + 0xc) - *(float *)(lVar8 + 0x7b0);
    *(float *)(param_1 + 0xc) = fVar13;
    if (fVar13 <= 0.0) {
      lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
      plVar12 = *(longlong **)(lVar8 + 0x88);
      plVar1 = plVar12 + *(int *)(lVar8 + 0x90);
      for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
        plVar3 = (longlong *)*plVar12;
        if (plVar3 != (longlong *)0x0) {
          lVar8 = USoundNodeEnveloper::StaticClass();
          bVar5 = true;
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar5 = false;
          }
          if (((bVar5) && (*(char *)((longlong)plVar3 + 0x141) == *(char *)(param_1 + 8))) &&
             (((char)plVar3[0x28] == '\0' || ((char)plVar3[0x28] == *(char *)(param_1 + 9))))) {
            if ((plVar3[0x24] == 0) || ((*(byte *)(plVar3[0x24] + 0x204) & 0x10) == 0)) {
              cVar6 = (**(code **)(*plVar3 + 0x280))(plVar3);
              cVar10 = cVar11;
              if (cVar6 == '\0') {
                cVar11 = '\x01';
                cVar10 = '\x01';
              }
            }
            else {
              cVar11 = '\x01';
              cVar10 = '\x01';
            }
          }
        }
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(char *)(param_2 + 0x70) = cVar10;
  if (cVar10 != '\0') {
    lVar8 = (longlong)*(int *)(param_2 + 0x68);
    iVar7 = *(int *)(param_2 + 0x68) + 1;
    *(int *)(param_2 + 0x68) = iVar7;
    if (*(int *)(param_2 + 0x6c) < iVar7) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2);
    }
    lVar9 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar9 = param_2;
    }
    *(undefined8 *)(lVar9 + lVar8 * 0x18) = uVar4;
    *(undefined4 *)(lVar9 + 8 + lVar8 * 0x18) = uVar2;
    *(undefined4 *)(lVar9 + 0xc + lVar8 * 0x18) = local_res8;
    *(undefined4 *)(lVar9 + 0x10 + lVar8 * 0x18) = local_resc;
  }
  return;
}



// FUNCTION 140ec85a0 FUN_140ec85a0 body=761 status=ok
// SIG undefined FUN_140ec85a0(void)

void FUN_140ec85a0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_38;
  int local_30;
  
  if (*(longlong *)(param_1 + 0x280) != 0) {
    plVar6 = (longlong *)(param_1 + 0x228);
    lVar4 = *plVar6;
    iVar8 = *(int *)(param_1 + 0x230);
    lVar11 = 0;
    local_38 = 0;
    iVar7 = 0;
    local_30 = iVar8;
    if (iVar8 != 0) {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(&local_38,iVar8,0);
      lVar11 = local_38;
      lVar12 = local_38 - lVar4;
      do {
        FUN_140e9a010(lVar12 + lVar4,lVar4);
        lVar4 = lVar4 + 0x28;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar7 = *(int *)(param_1 + 0x230);
    }
    iVar8 = local_30;
    if (iVar7 != 0) {
      plVar5 = (longlong *)(*plVar6 + 0x18);
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 5;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x230) = 0;
    iVar7 = 0;
    if (*(int *)(param_1 + 0x234) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (plVar6,0);
      iVar7 = *(int *)(param_1 + 0x230);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x280) + 0x48) + -1;
    bVar9 = (byte)iVar2;
    if (0xfe < iVar2) {
      bVar9 = 0xff;
    }
    *(uint *)(param_1 + 0x230) = iVar7 + (uint)bVar9;
    if (*(int *)(param_1 + 0x234) < (int)(iVar7 + (uint)bVar9)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar6 + (longlong)iVar7 * 0x28),0,(ulonglong)bVar9 * 0x28);
    uVar10 = 0;
    if (0 < *(int *)(param_1 + 0x230)) {
      do {
        bVar9 = (char)uVar10 + 1;
        *(undefined8 *)(uVar10 * 0x28 + *plVar6) = *(undefined8 *)(param_1 + 0x280);
        *(undefined1 *)(uVar10 * 0x28 + 8 + *plVar6) =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x40) + 8 + uVar10 * 0x10);
        uVar10 = (ulonglong)bVar9;
      } while ((int)(uint)bVar9 < *(int *)(param_1 + 0x230));
    }
    uVar10 = 0;
    if (0 < iVar8) {
      do {
        iVar2 = 0;
        lVar4 = 0;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x280) + 0x48);
        if (0 < iVar7) {
          lVar12 = lVar11 + uVar10 * 0x28;
          puVar3 = (ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x40) + 8);
          do {
            if (*puVar3 == (ulonglong)*(byte *)(lVar12 + 8)) {
              if ((-1 < lVar4) && (iVar2 < *(int *)(param_1 + 0x230))) {
                lVar4 = lVar4 * 0x28;
                pbVar1 = (byte *)(*plVar6 + 0x14 + lVar4);
                *pbVar1 = *pbVar1 | *(byte *)(lVar12 + 0x14);
                if ((*(char *)(lVar12 + 9) != '\0') && (*(char *)(lVar4 + 9 + *plVar6) == '\0')) {
                  *(undefined1 *)(lVar4 + 9 + *plVar6) = 1;
                  *(undefined1 *)(lVar4 + 10 + *plVar6) = *(undefined1 *)(lVar12 + 10);
                  *(undefined8 *)(lVar4 + 0xc + *plVar6) = *(undefined8 *)(lVar12 + 0xc);
                }
                iVar7 = *(int *)(lVar12 + 0x20);
                lVar4 = *plVar6 + lVar4;
                if (iVar7 != 0) {
                  iVar2 = *(int *)(lVar4 + 0x20);
                  if (*(int *)(lVar4 + 0x24) < iVar2 + iVar7) {
                    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(lVar4 + 0x18);
                    iVar2 = *(int *)(lVar4 + 0x20);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar2 * 0x40 + *(longlong *)(lVar4 + 0x18)),
                             *(void **)(lVar12 + 0x18),(longlong)iVar7 << 6);
                  *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + iVar7;
                }
              }
              break;
            }
            iVar2 = iVar2 + 1;
            lVar4 = lVar4 + 1;
            puVar3 = puVar3 + 2;
          } while (lVar4 < iVar7);
        }
        bVar9 = (char)uVar10 + 1;
        uVar10 = (ulonglong)bVar9;
      } while ((int)(uint)bVar9 < iVar8);
    }
    if (iVar8 != 0) {
      plVar6 = (longlong *)(lVar11 + 0x18);
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 5;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  }
  return;
}



// FUNCTION 140ec88a0 FUN_140ec88a0 body=389 status=ok
// SIG undefined FUN_140ec88a0(void)

void FUN_140ec88a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  float fVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar3 + 0x30) != '\0') {
    plVar6 = (longlong *)0x0;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      plVar5 = *(longlong **)(param_2 + 200);
      plVar1 = plVar5 + (longlong)*(int *)(param_2 + 0xd0) * 3;
      for (; (plVar6 = (longlong *)0x0, plVar5 != plVar1 &&
             ((*plVar5 == 0 ||
              (plVar6 = plVar5, *(longlong *)(*plVar5 + 0x6f0) != *(longlong *)(lVar3 + 0x50)))));
          plVar5 = plVar5 + 3) {
      }
    }
    if (plVar6 != (longlong *)0x0) {
      if (((*(longlong *)(param_2 + 0xb0) == 0) ||
          (*(char *)(*(longlong *)(param_2 + 0xb0) + 0x4a8) == '\0')) ||
         (cVar4 = FUN_140eb29f0(), cVar4 != '\0')) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = *(float *)(param_1 + 0x18);
      }
      if (*plVar6 != 0) {
        if (fVar8 <= 0.0) {
          FUN_14260f0c0(*plVar6,*(undefined8 *)(lVar3 + 0x48),0);
          FUN_140ea8e20(plVar6,lVar3 + 0x38);
        }
        else {
          if (*(longlong *)(lVar3 + 0x40) != 0) {
            plVar5 = (longlong *)plVar6[1];
            plVar1 = plVar5 + (int)plVar6[2];
            for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
              if (*plVar5 == *(longlong *)(lVar3 + 0x40)) goto LAB_140ec89dd;
            }
            puVar7 = *(undefined8 **)(lVar3 + 0x58);
            puVar2 = puVar7 + *(int *)(lVar3 + 0x60);
            for (; puVar7 != puVar2; puVar7 = puVar7 + 1) {
              (**(code **)(*(longlong *)*plVar6 + 0x958))((longlong *)*plVar6,*puVar7,1);
            }
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar6 + 1,lVar3 + 0x40);
          }
LAB_140ec89dd:
          FUN_14260f0c0(*plVar6,*(undefined8 *)(lVar3 + 0x48),fVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec8a30 FUN_140ec8a30 body=98 status=ok
// SIG undefined FUN_140ec8a30(void)

void FUN_140ec8a30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x240);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    *(float *)(param_1 + 0x208) =
         *(float *)(lVar1 + 0x230) + *(float *)(lVar1 + 0x208) + *(float *)(param_1 + 0x234);
    FUN_140ea5710(param_1,*(undefined8 *)(param_1 + 0x118));
    param_1 = *(longlong *)(param_1 + 0x238);
    if (param_1 == 0) break;
    lVar1 = *(longlong *)(param_1 + 0x240);
  }
  return;
}



// FUNCTION 140ec8aa0 FUN_140ec8aa0 body=98 status=ok
// SIG undefined FUN_140ec8aa0(void)

void FUN_140ec8aa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x238);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    *(float *)(param_1 + 0x208) =
         (*(float *)(lVar1 + 0x208) - *(float *)(lVar1 + 0x234)) - *(float *)(param_1 + 0x230);
    FUN_140ea5710(param_1,*(undefined8 *)(param_1 + 0x118));
    param_1 = *(longlong *)(param_1 + 0x240);
    if (param_1 == 0) break;
    lVar1 = *(longlong *)(param_1 + 0x238);
  }
  return;
}



// FUNCTION 140ec8b10 FUN_140ec8b10 body=1060 status=ok
// SIG undefined FUN_140ec8b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ec8b10(longlong param_1,float *param_2,undefined8 *param_3,float param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    fVar8 = *(float *)(param_1 + 0x1d8);
    if (*(char *)(param_1 + 0x202) != '\0') {
      fVar8 = -fVar8;
    }
    fVar8 = fVar8 + *(float *)(param_1 + 0x1fc);
    if ((fVar8 < 0.0) && (*(char *)(param_1 + 500) != '\0')) {
      fVar8 = fVar8 + *(float *)(param_1 + 0x1f0);
    }
    fVar15 = *(float *)(param_1 + 0x1f0);
    if ((fVar15 < fVar8) && (*(char *)(param_1 + 500) != '\0')) {
      fVar8 = fVar8 - fVar15;
    }
    if (0.0 <= fVar8) {
      if (fVar8 <= fVar15) {
        fVar15 = fVar8;
      }
    }
    else {
      fVar15 = 0.0;
    }
    FUN_1423aee90(*(longlong *)(param_1 + 0x1e8),&local_98,fVar15,1);
    FUN_140eae790(param_1,&local_a8,fVar15);
    lVar3 = *(longlong *)(lVar2 + 0x168);
    if (lVar3 == 0) {
      fStack_80 = (float)DAT_1468b5d98;
      puVar6 = &local_88;
      local_88 = _DAT_1468b5d90;
    }
    else {
      puVar6 = &local_b8;
      local_b0 = (float)*(undefined4 *)(lVar3 + 0x228);
      local_b8 = *(undefined8 *)(lVar3 + 0x220);
    }
    uVar1 = *puVar6;
    local_b0 = *(float *)(puVar6 + 1);
    fStack_80 = local_90 - local_b0;
    local_b8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_88 = CONCAT44(local_94 - local_b8._4_4_,local_98 - (float)uVar1);
    local_b8 = uVar1;
    FVector::Rotation(&local_88,&local_78);
    fVar8 = (float)DAT_1468716b0;
    fVar15 = DAT_1468716b0._4_4_;
    fVar4 = DAT_1468716b0._8_4_;
    auVar10._4_4_ = local_a4 - local_74;
    auVar10._0_4_ = local_a8 - local_78;
    auVar10._8_4_ = local_a0 - local_70;
    auVar10._12_4_ = 0;
    auVar10 = divps(auVar10,_DAT_1468716b0);
    fVar12 = (local_a8 - local_78) - (float)(int)auVar10._0_4_ * fVar8;
    fVar13 = (local_a4 - local_74) - (float)(int)auVar10._4_4_ * fVar15;
    fVar14 = (local_a0 - local_70) - (float)(int)auVar10._8_4_ * fVar4;
    fVar12 = (float)(((uint)(fVar12 + fVar8) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar12 + fVar8));
    fVar13 = (float)(((uint)(fVar13 + fVar15) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar13 + fVar15));
    fVar14 = (float)(((uint)(fVar14 + fVar4) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                    (uint)(fVar14 + fVar4));
    local_60 = local_70 +
               (float)(((uint)(fVar14 - fVar4) ^ (uint)fVar14) &
                       -(uint)(fRam00000001468716a8 < fVar14) ^ (uint)fVar14) * 0.5;
    *param_3 = CONCAT44(local_74 +
                        (float)(((uint)(fVar13 - fVar15) ^ (uint)fVar13) &
                                -(uint)(fRam00000001468716a4 < fVar13) ^ (uint)fVar13) * 0.5,
                        local_78 +
                        (float)(((uint)(fVar12 - fVar8) ^ (uint)fVar12) &
                                -(uint)(_DAT_1468716a0 < fVar12) ^ (uint)fVar12) * 0.5);
    *(float *)(param_3 + 1) = local_60;
    lVar2 = *(longlong *)(lVar2 + 0x168);
    fStack_80 = (float)DAT_1468b5da8;
    local_88 = DAT_1468b5da0;
    if (lVar2 != 0) {
      fVar8 = *(float *)(lVar2 + 0x210);
      local_88 = *(undefined8 *)(lVar2 + 0x210);
      fStack_80 = *(float *)(lVar2 + 0x218);
      fStack_7c = *(float *)(lVar2 + 0x21c);
      auVar11._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != *(float *)(lVar2 + 0x214));
      auVar11._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != fVar8);
      auVar11._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_80);
      auVar11._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_7c);
      iVar5 = movmskps(local_60,auVar11);
      if (iVar5 != 0) {
        *(float *)(lVar2 + 0x250) = fVar8;
        *(float *)(lVar2 + 0x254) = *(float *)(lVar2 + 0x214);
        *(float *)(lVar2 + 600) = fStack_80;
        *(float *)(lVar2 + 0x25c) = fStack_7c;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_88,&local_68);
        *(undefined8 *)(lVar2 + 0x260) = *puVar6;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      fStack_80 = (float)*(undefined4 *)(lVar2 + 0x268);
      local_88 = *(undefined8 *)(lVar2 + 0x260);
    }
    local_68 = local_88;
    local_60 = fStack_80;
    puVar6 = (undefined8 *)FUN_140ea5040(param_1,&local_88,&local_68,param_3,param_4);
    *param_3 = *puVar6;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar6 + 1);
    param_4 = param_4 * *(float *)(param_1 + 0x1f8);
    pfVar7 = (float *)FRotator::Vector(param_3,&local_68);
    local_60 = param_4 * pfVar7[2] + local_b0;
    *(ulonglong *)param_2 =
         CONCAT44(param_4 * pfVar7[1] + local_b8._4_4_,param_4 * *pfVar7 + (float)uVar1);
    param_2[2] = local_60;
    uVar9 = FUN_1423ac1f0(*(undefined8 *)(param_1 + 0x1e8),param_2);
    uVar9 = FUN_1423ae500(*(undefined8 *)(param_1 + 0x1e8),uVar9);
    *(undefined4 *)(param_1 + 0x1fc) = uVar9;
    if (ABS(*(float *)((longlong)param_3 + 4) - local_a4) < *(float *)(param_1 + 0x1e0)) {
      FUN_1423aee90(*(undefined8 *)(param_1 + 0x1e8),&local_68,uVar9,1);
      if ((param_2[1] - local_68._4_4_) * (param_2[1] - local_68._4_4_) +
          (*param_2 - (float)local_68) * (*param_2 - (float)local_68) <
          *(float *)(param_1 + 0x1dc) * *(float *)(param_1 + 0x1dc)) {
        *(undefined1 *)(param_1 + 0x201) = 1;
      }
    }
  }
  return;
}



// FUNCTION 140ec8f40 FUN_140ec8f40 body=257 status=ok
// SIG undefined FUN_140ec8f40(void)

void FUN_140ec8f40(longlong param_1,char param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  else {
    uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
    AActor::GetComponentsByClass(*(undefined8 *)(param_1 + 0x1c0),&local_18,uVar2);
    if (local_18 != local_18 + local_10) {
      plVar5 = local_18;
      do {
        lVar4 = *plVar5;
        if (*(longlong *)(lVar4 + 0x18) == *(longlong *)(param_1 + 0x1c8)) {
          lVar3 = UGNewsMenuItem::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            lVar4 = 0;
          }
          *(longlong *)(param_1 + 0x210) = lVar4;
          break;
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != local_18 + local_10);
    }
    if (param_2 != '\0') {
      FUN_140ea5710(param_1,*(undefined8 *)(param_1 + 0x118));
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 140ec9050 FUN_140ec9050 body=251 status=ok
// SIG undefined FUN_140ec9050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ec9050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0x201) = 0;
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    uVar3 = FUN_1423b1370();
    *(undefined4 *)(param_1 + 0x1f0) = uVar3;
    lVar1 = *(longlong *)(lVar1 + 0x168);
    local_1c = _DAT_1468b5d90;
    local_14 = DAT_1468b5d98;
    if (lVar1 != 0) {
      local_1c = *(undefined8 *)(lVar1 + 0x220);
      local_14 = *(undefined4 *)(lVar1 + 0x228);
    }
    uVar3 = FUN_1423ac1f0(*(undefined8 *)(param_1 + 0x1e8),&local_1c,param_3,param_4,local_1c,
                          local_14);
    uVar3 = FUN_1423ae500(*(undefined8 *)(param_1 + 0x1e8),uVar3);
    *(undefined4 *)(param_1 + 0x1fc) = uVar3;
    uVar2 = UIndianaGameUserSettings::GetShowEnemyHealthBars(*(undefined8 *)(param_1 + 0x1e8));
    *(undefined1 *)(param_1 + 500) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  return;
}



// FUNCTION 140ec9150 FUN_140ec9150 body=484 status=ok
// SIG undefined FUN_140ec9150(void)

void FUN_140ec9150(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_res18;
  undefined4 *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *param_2;
    iVar9 = *(int *)(lVar2 + 0x10) + -1;
    if (-1 < iVar9) {
      lVar12 = (longlong)iVar9 * 0x28;
      local_res18 = (longlong)*(int *)(lVar2 + 0x10) * 0x28;
      lVar13 = lVar12;
      do {
        lVar7 = *(longlong *)(lVar2 + 8) + lVar12;
        cVar3 = FWeakObjectPtr::IsValid(lVar7);
        if ((cVar3 == '\0') || (lVar5 = FWeakObjectPtr::Get(lVar7), lVar5 == 0)) {
          uVar1 = *(uint *)(lVar7 + 0x20);
          puVar10 = (undefined4 *)0x0;
          _Src = *(void **)(lVar7 + 0x18);
          local_58 = (undefined4 *)0x0;
          local_50 = uVar1;
          if (uVar1 == 0) {
            local_4c = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,uVar1,0)
            ;
            puVar10 = local_58;
            _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)(int)uVar1 << 3);
          }
          uVar11 = (ulonglong)local_50;
          puVar8 = puVar10;
          if (0 < (int)local_50) {
            do {
              lVar7 = FUN_1407c78f0(param_2,*puVar8);
              if (lVar7 != 0) {
                FUN_142227350(lVar7,0,1);
              }
              uVar11 = uVar11 - 1;
              puVar8 = puVar8 + 2;
            } while (uVar11 != 0);
          }
          FUN_1407bc590(local_48,param_2);
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2f0))
                    (*(longlong **)(param_1 + 0x30),local_48);
          if (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x18 + lVar13) != 0) {
            FMemory::Free();
          }
          iVar6 = *(int *)(lVar2 + 0x10);
          iVar4 = (iVar6 - iVar9) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar2 + 8) + lVar13),
                       (void *)(local_res18 + *(longlong *)(lVar2 + 8)),(longlong)iVar4 * 0x28);
            iVar6 = *(int *)(lVar2 + 0x10);
          }
          *(int *)(lVar2 + 0x10) = iVar6 + -1;
          TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(lVar2 + 8);
          if (puVar10 != (undefined4 *)0x0) {
            FMemory::Free(puVar10);
          }
        }
        local_res18 = local_res18 + -0x28;
        lVar13 = lVar13 + -0x28;
        lVar12 = lVar12 + -0x28;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return;
}



// FUNCTION 140ec9340 FUN_140ec9340 body=348 status=ok
// SIG undefined FUN_140ec9340(void)

void FUN_140ec9340(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_3 == '\0') && (param_2 != 0)) {
    lVar2 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = FUN_141227800(param_2), lVar2 != 0)) {
      lVar3 = FUN_1413e48b0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x748), lVar2 != 0)) {
        lVar4 = FUN_141442a00();
        lVar3 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_1409f8370(lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),2),
                        *(undefined4 *)(param_1 + 0x488),*(undefined1 *)(param_1 + 0x490),
                        *(undefined1 *)(param_1 + 0x491),*(undefined1 *)(param_1 + 0x492),
                        *(undefined1 *)(param_1 + 0x493),*(undefined4 *)(param_1 + 0x48c),
                        *(undefined4 *)(param_1 + 0x494),0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec94c0 FUN_140ec94c0 body=146 status=ok
// SIG undefined FUN_140ec94c0(void)

void FUN_140ec94c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x790);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x788) != 0) {
          FUN_142056670(*(longlong *)(param_1 + 0x788),0);
        }
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
    }
  }
  return;
}



// FUNCTION 140ec9560 FUN_140ec9560 body=83 status=ok
// SIG undefined FUN_140ec9560(void)

undefined8 * FUN_140ec9560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77b70;
    puVar1[1] = *param_2;
  }
  *param_1 = &LAB_140ee0760;
  return param_1;
}



// FUNCTION 140ec95c0 FUN_140ec95c0 body=83 status=ok
// SIG undefined FUN_140ec95c0(void)

undefined8 * FUN_140ec95c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77b70;
    puVar1[1] = *param_2;
  }
  *param_1 = &LAB_140ee0860;
  return param_1;
}



// FUNCTION 140ec9620 FUN_140ec9620 body=986 status=ok
// SIG undefined FUN_140ec9620(void)

longlong FUN_140ec9620(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  ulonglong local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar8 = 0;
  cVar7 = FUN_142091120(param_1,param_3);
  if (cVar7 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ec96cf:
      puVar11 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar13 = *piVar1;
      if (iVar13 == 0) {
        *piVar1 = 0;
        iVar13 = 0;
      }
      UNLOCK();
      if (iVar13 < 1) goto LAB_140ec96cf;
      local_88 = *(longlong **)(param_1 + 0x30);
      bVar6 = true;
      bVar5 = false;
      local_90 = 0;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        uVar2 = *(uint *)(local_88 + 1);
        bVar14 = uVar2 == 0;
        if (bVar14) {
          *(uint *)(local_88 + 1) = 0;
        }
        else {
          uVar8 = (ulonglong)uVar2;
        }
        UNLOCK();
        while (!bVar14) {
          iVar13 = (int)uVar8;
          LOCK();
          bVar14 = iVar13 == (int)local_88[1];
          if (bVar14) {
            *(int *)(local_88 + 1) = iVar13 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar8 = *(ulonglong *)(param_1 + 0x28);
            puVar11 = &local_90;
            local_90 = uVar8;
            goto LAB_140ec96e4;
          }
          uVar8 = 0;
          LOCK();
          uVar2 = *(uint *)(local_88 + 1);
          bVar14 = uVar2 == 0;
          if (bVar14) {
            *(uint *)(local_88 + 1) = 0;
          }
          else {
            uVar8 = (ulonglong)uVar2;
          }
          UNLOCK();
        }
        local_88 = (longlong *)0x0;
      }
      uVar8 = 0;
      puVar11 = &local_90;
    }
LAB_140ec96e4:
    local_80 = uVar8;
    plVar3 = (longlong *)puVar11[1];
    puVar11[1] = 0;
    plVar4 = plStack_58;
    local_78 = plVar3;
    *puVar11 = 0;
    if ((bVar5) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_58 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar3 = local_88;
    if ((bVar6) && (local_88 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    bVar6 = true;
    bVar5 = false;
    puVar11 = &local_80;
    uVar8 = local_80;
  }
  else {
    puVar11 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  plVar3 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  plVar4 = plStack_48;
  *puVar11 = 0;
  if ((bVar5) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_48 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar4 = local_78;
  if ((bVar6) && (local_78 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_78 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (uVar8 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    return 0;
  }
  if (param_4 != 0) {
    lVar9 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar9) goto LAB_140ec986d;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = FUN_141335770();
LAB_140ec986d:
  plVar4 = *(longlong **)(uVar8 + 0x80);
  local_40 = *(undefined8 *)(uVar8 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  lVar10 = FUN_14202a0e0(local_40,param_4,param_1,param_2,param_3,6,&local_70);
  if (lVar10 != 0) {
    lVar9 = FUN_141335770();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140ec98fa;
  }
  lVar10 = 0;
LAB_140ec98fa:
  plVar12 = local_70;
  for (iVar13 = (int)local_68; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar4 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return lVar10;
}



// FUNCTION 140ec9a00 FUN_140ec9a00 body=478 status=ok
// SIG undefined FUN_140ec9a00(void)

/* WARNING: Removing unreachable block (ram,0x000140ec9bd5) */
/* WARNING: Removing unreachable block (ram,0x000140ec9b5e) */

longlong FUN_140ec9a00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
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
          lVar6 = UMovieScene3DTransformSection::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = UMovieScene3DTransformSection::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = UMovieScene3DTransformSection::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 140ec9be0 FUN_140ec9be0 body=205 status=ok
// SIG undefined FUN_140ec9be0(void)

longlong FUN_140ec9be0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x5e8);
  if (lVar2 == 0) {
    return 0;
  }
  plVar7 = *(longlong **)(lVar2 + 0x510);
  plVar1 = plVar7 + *(int *)(lVar2 + 0x518);
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    uVar5 = UInputKeySelector::GetPrivateStaticClass();
    cVar4 = FUN_142eb4a30(lVar2,uVar5);
    if (cVar4 != '\0') break;
    plVar7 = plVar7 + 1;
  }
  if (lVar2 == 0) {
    return 0;
  }
  lVar6 = UInputKeySelector::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 140ec9cb0 FUN_140ec9cb0 body=917 status=ok
// SIG undefined FUN_140ec9cb0(void)

longlong FUN_140ec9cb0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ec9d5f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ec9d5f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ec9d74;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ec9d74:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ec9efd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_141328ce0();
LAB_140ec9efd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_141328ce0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ec9f7a;
  }
  lVar12 = 0;
LAB_140ec9f7a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140eca050 FUN_140eca050 body=917 status=ok
// SIG undefined FUN_140eca050(void)

longlong FUN_140eca050(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140eca0ff:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140eca0ff;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140eca114;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140eca114:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140eca29d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UUGGameViewportClient::StaticClass();
LAB_140eca29d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UUGGameViewportClient::StaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140eca31a;
  }
  lVar12 = 0;
LAB_140eca31a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140eca3f0 FUN_140eca3f0 body=666 status=ok
// SIG undefined FUN_140eca3f0(void)

longlong FUN_140eca3f0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140eca556;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UXGameInstance::GetPrivateStaticClass();
LAB_140eca556:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140eca5c9;
  }
  lVar7 = 0;
LAB_140eca5c9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return lVar7;
}



// FUNCTION 140eca690 FUN_140eca690 body=917 status=ok
// SIG undefined FUN_140eca690(void)

longlong FUN_140eca690(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140eca73f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140eca73f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140eca754;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140eca754:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140eca8dd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1413875f0();
LAB_140eca8dd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1413875f0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140eca95a;
  }
  lVar12 = 0;
LAB_140eca95a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140ecaa30 FUN_140ecaa30 body=666 status=ok
// SIG undefined FUN_140ecaa30(void)

longlong FUN_140ecaa30(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140ecab96;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_1413976e0();
LAB_140ecab96:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_1413976e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140ecac09;
  }
  lVar7 = 0;
LAB_140ecac09:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return lVar7;
}



// FUNCTION 140ecacd0 FUN_140ecacd0 body=917 status=ok
// SIG undefined FUN_140ecacd0(void)

longlong FUN_140ecacd0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ecad7f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ecad7f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ecad94;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ecad94:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ecaf1d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1413a0e00();
LAB_140ecaf1d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1413a0e00();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ecaf9a;
  }
  lVar12 = 0;
LAB_140ecaf9a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140ecb070 FUN_140ecb070 body=917 status=ok
// SIG undefined FUN_140ecb070(void)

longlong FUN_140ecb070(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ecb11f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ecb11f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ecb134;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ecb134:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ecb2bd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_142f1e6c0();
LAB_140ecb2bd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_142f1e6c0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ecb33a;
  }
  lVar12 = 0;
LAB_140ecb33a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140ecb410 FUN_140ecb410 body=666 status=ok
// SIG undefined FUN_140ecb410(void)

longlong FUN_140ecb410(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140ecb576;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_140ecb576:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140ecb5e9;
  }
  lVar7 = 0;
LAB_140ecb5e9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return lVar7;
}



// FUNCTION 140ecb6b0 FUN_140ecb6b0 body=917 status=ok
// SIG undefined FUN_140ecb6b0(void)

longlong FUN_140ecb6b0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ecb75f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ecb75f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ecb774;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ecb774:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ecb8fd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_140ecb8fd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ecb97a;
  }
  lVar12 = 0;
LAB_140ecb97a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140ecba50 FUN_140ecba50 body=917 status=ok
// SIG undefined FUN_140ecba50(void)

longlong FUN_140ecba50(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ecbaff:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ecbaff;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ecbb14;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ecbb14:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ecbc9d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = AGameModeTitleScene::GetPrivateStaticClass();
LAB_140ecbc9d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = AGameModeTitleScene::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ecbd1a;
  }
  lVar12 = 0;
LAB_140ecbd1a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140ecbdf0 FUN_140ecbdf0 body=917 status=ok
// SIG undefined FUN_140ecbdf0(void)

longlong FUN_140ecbdf0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ecbe9f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ecbe9f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ecbeb4;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ecbeb4:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ecc03d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UPlatformGameInstance::StaticClass();
LAB_140ecc03d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ecc0ba;
  }
  lVar12 = 0;
LAB_140ecc0ba:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140ecc190 FUN_140ecc190 body=666 status=ok
// SIG undefined FUN_140ecc190(void)

longlong FUN_140ecc190(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140ecc2f6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_140ecc2f6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140ecc369;
  }
  lVar7 = 0;
LAB_140ecc369:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return lVar7;
}



// FUNCTION 140ecc430 FUN_140ecc430 body=917 status=ok
// SIG undefined FUN_140ecc430(void)

longlong FUN_140ecc430(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ecc4df:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ecc4df;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ecc4f4;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ecc4f4:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ecc67d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_140ecc67d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ecc6fa;
  }
  lVar12 = 0;
LAB_140ecc6fa:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140ecc7d0 FUN_140ecc7d0 body=917 status=ok
// SIG undefined FUN_140ecc7d0(void)

longlong FUN_140ecc7d0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ecc87f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ecc87f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ecc894;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ecc894:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ecca1d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UAnimSharingStateInstance::GetPrivateStaticClass();
LAB_140ecca1d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UAnimSharingStateInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ecca9a;
  }
  lVar12 = 0;
LAB_140ecca9a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return lVar12;
}



// FUNCTION 140eccb70 FUN_140eccb70 body=109 status=ok
// SIG undefined FUN_140eccb70(void)

longlong FUN_140eccb70(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 400);
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140eccbe0 FUN_140eccbe0 body=93 status=ok
// SIG undefined FUN_140eccbe0(void)

longlong FUN_140eccbe0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar2 != 0) {
    lVar3 = FUN_14142a560();
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



// FUNCTION 140eccc40 FUN_140eccc40 body=93 status=ok
// SIG undefined FUN_140eccc40(void)

longlong FUN_140eccc40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar2 != 0) {
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140eccca0 FUN_140eccca0 body=116 status=ok
// SIG undefined FUN_140eccca0(void)

longlong FUN_140eccca0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5d8);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
    lVar3 = *(longlong *)(lVar3 + 0x848);
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
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140eccd20 FUN_140eccd20 body=116 status=ok
// SIG undefined FUN_140eccd20(void)

longlong FUN_140eccd20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5d8);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
    lVar3 = *(longlong *)(lVar3 + 0x848);
    if (lVar3 != 0) {
      lVar4 = FUN_1413ffe00();
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
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140eccda0 FUN_140eccda0 body=1639 status=ok
// SIG undefined FUN_140eccda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eccda0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  
  iVar26 = (param_2 + -2) / 2;
  if (-1 < iVar26) {
    iVar28 = iVar26 * 2 + 1;
    iVar2 = iVar28;
    iVar29 = iVar26;
joined_r0x000140eccde6:
    do {
      if (iVar28 < param_2) {
        iVar28 = iVar26 * 2;
        iVar27 = iVar28 + 1;
        if (iVar28 + 2 < param_2) {
          if (*(int *)((longlong)iVar27 * 0xb8 + 0xb4 + (longlong)param_1) <
              *(int *)((longlong)iVar28 * 0xb8 + 0x224 + (longlong)param_1)) {
            iVar27 = iVar28;
          }
          iVar27 = iVar27 + 1;
        }
        puVar30 = param_1 + (longlong)iVar27 * 0x17;
        puVar31 = param_1 + (longlong)iVar26 * 0x17;
        if (*(int *)((longlong)puVar30 + 0xb4) < *(int *)((longlong)puVar31 + 0xb4)) {
          if (puVar31 != puVar30) {
            uVar3 = *puVar31;
            uVar4 = puVar31[1];
            uVar1 = puVar31[0x16];
            uVar5 = puVar31[2];
            uVar6 = puVar31[3];
            uVar7 = puVar31[4];
            uVar8 = puVar31[5];
            uVar9 = puVar31[6];
            uVar10 = puVar31[7];
            uVar11 = puVar31[8];
            uVar12 = puVar31[9];
            uVar13 = puVar31[10];
            uVar14 = puVar31[0xb];
            uVar15 = puVar31[0xc];
            uVar16 = puVar31[0xd];
            uVar17 = puVar31[0xe];
            uVar18 = puVar31[0xf];
            uVar19 = puVar31[0x10];
            uVar20 = puVar31[0x11];
            uVar21 = puVar31[0x12];
            uVar22 = puVar31[0x13];
            uVar23 = puVar31[0x14];
            uVar24 = puVar31[0x15];
            uVar25 = puVar30[1];
            *puVar31 = *puVar30;
            puVar31[1] = uVar25;
            uVar25 = puVar30[3];
            puVar31[2] = puVar30[2];
            puVar31[3] = uVar25;
            uVar25 = puVar30[5];
            puVar31[4] = puVar30[4];
            puVar31[5] = uVar25;
            uVar25 = puVar30[7];
            puVar31[6] = puVar30[6];
            puVar31[7] = uVar25;
            uVar25 = puVar30[9];
            puVar31[8] = puVar30[8];
            puVar31[9] = uVar25;
            uVar25 = puVar30[0xb];
            puVar31[10] = puVar30[10];
            puVar31[0xb] = uVar25;
            uVar25 = puVar30[0xd];
            puVar31[0xc] = puVar30[0xc];
            puVar31[0xd] = uVar25;
            uVar25 = puVar30[0xf];
            puVar31[0xe] = puVar30[0xe];
            puVar31[0xf] = uVar25;
            uVar25 = puVar30[0x11];
            puVar31[0x10] = puVar30[0x10];
            puVar31[0x11] = uVar25;
            uVar25 = puVar30[0x13];
            puVar31[0x12] = puVar30[0x12];
            puVar31[0x13] = uVar25;
            uVar25 = puVar30[0x15];
            puVar31[0x14] = puVar30[0x14];
            puVar31[0x15] = uVar25;
            puVar31[0x16] = puVar30[0x16];
            *puVar30 = uVar3;
            puVar30[1] = uVar4;
            puVar30[2] = uVar5;
            puVar30[3] = uVar6;
            puVar30[4] = uVar7;
            puVar30[5] = uVar8;
            puVar30[6] = uVar9;
            puVar30[7] = uVar10;
            puVar30[8] = uVar11;
            puVar30[9] = uVar12;
            puVar30[10] = uVar13;
            puVar30[0xb] = uVar14;
            puVar30[0xc] = uVar15;
            puVar30[0xd] = uVar16;
            puVar30[0xe] = uVar17;
            puVar30[0xf] = uVar18;
            puVar30[0x10] = uVar19;
            puVar30[0x11] = uVar20;
            puVar30[0x12] = uVar21;
            puVar30[0x13] = uVar22;
            puVar30[0x14] = uVar23;
            puVar30[0x15] = uVar24;
            puVar30[0x16] = uVar1;
          }
          iVar28 = iVar27 * 2 + 1;
          iVar26 = iVar27;
          goto joined_r0x000140eccde6;
        }
      }
      iVar28 = iVar2 + -2;
      iVar26 = iVar29 + -1;
      iVar2 = iVar28;
      iVar29 = iVar26;
    } while (-1 < iVar26);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar30 = param_1 + (longlong)param_2 * 0x17;
    do {
      if (param_1 != puVar30) {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar1 = param_1[0x16];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar17 = param_1[0xe];
        uVar18 = param_1[0xf];
        uVar19 = param_1[0x10];
        uVar20 = param_1[0x11];
        uVar21 = param_1[0x12];
        uVar22 = param_1[0x13];
        uVar23 = param_1[0x14];
        uVar24 = param_1[0x15];
        uVar25 = puVar30[1];
        *param_1 = *puVar30;
        param_1[1] = uVar25;
        uVar25 = puVar30[3];
        param_1[2] = puVar30[2];
        param_1[3] = uVar25;
        uVar25 = puVar30[5];
        param_1[4] = puVar30[4];
        param_1[5] = uVar25;
        uVar25 = puVar30[7];
        param_1[6] = puVar30[6];
        param_1[7] = uVar25;
        uVar25 = puVar30[9];
        param_1[8] = puVar30[8];
        param_1[9] = uVar25;
        uVar25 = puVar30[0xb];
        param_1[10] = puVar30[10];
        param_1[0xb] = uVar25;
        uVar25 = puVar30[0xd];
        param_1[0xc] = puVar30[0xc];
        param_1[0xd] = uVar25;
        uVar25 = puVar30[0xf];
        param_1[0xe] = puVar30[0xe];
        param_1[0xf] = uVar25;
        uVar25 = puVar30[0x11];
        param_1[0x10] = puVar30[0x10];
        param_1[0x11] = uVar25;
        uVar25 = puVar30[0x13];
        param_1[0x12] = puVar30[0x12];
        param_1[0x13] = uVar25;
        uVar25 = puVar30[0x15];
        param_1[0x14] = puVar30[0x14];
        param_1[0x15] = uVar25;
        param_1[0x16] = puVar30[0x16];
        *puVar30 = uVar3;
        puVar30[1] = uVar4;
        puVar30[2] = uVar5;
        puVar30[3] = uVar6;
        puVar30[4] = uVar7;
        puVar30[5] = uVar8;
        puVar30[6] = uVar9;
        puVar30[7] = uVar10;
        puVar30[8] = uVar11;
        puVar30[9] = uVar12;
        puVar30[10] = uVar13;
        puVar30[0xb] = uVar14;
        puVar30[0xc] = uVar15;
        puVar30[0xd] = uVar16;
        puVar30[0xe] = uVar17;
        puVar30[0xf] = uVar18;
        puVar30[0x10] = uVar19;
        puVar30[0x11] = uVar20;
        puVar30[0x12] = uVar21;
        puVar30[0x13] = uVar22;
        puVar30[0x14] = uVar23;
        puVar30[0x15] = uVar24;
        puVar30[0x16] = uVar1;
      }
      iVar26 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar26 * 2;
          iVar28 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if (*(int *)((longlong)iVar28 * 0xb8 + 0xb4 + (longlong)param_1) <
                *(int *)((longlong)iVar2 * 0xb8 + 0x224 + (longlong)param_1)) {
              iVar28 = iVar2;
            }
            iVar28 = iVar28 + 1;
          }
          puVar31 = param_1 + (longlong)iVar28 * 0x17;
          puVar32 = param_1 + (longlong)iVar26 * 0x17;
          if (*(int *)((longlong)puVar32 + 0xb4) <= *(int *)((longlong)puVar31 + 0xb4)) break;
          if (puVar32 != puVar31) {
            uVar3 = *puVar32;
            uVar4 = puVar32[1];
            uVar1 = puVar32[0x16];
            uVar5 = puVar32[2];
            uVar6 = puVar32[3];
            uVar7 = puVar32[4];
            uVar8 = puVar32[5];
            uVar9 = puVar32[6];
            uVar10 = puVar32[7];
            uVar11 = puVar32[8];
            uVar12 = puVar32[9];
            uVar13 = puVar32[10];
            uVar14 = puVar32[0xb];
            uVar15 = puVar32[0xc];
            uVar16 = puVar32[0xd];
            uVar17 = puVar32[0xe];
            uVar18 = puVar32[0xf];
            uVar19 = puVar32[0x10];
            uVar20 = puVar32[0x11];
            uVar21 = puVar32[0x12];
            uVar22 = puVar32[0x13];
            uVar23 = puVar32[0x14];
            uVar24 = puVar32[0x15];
            uVar25 = puVar31[1];
            *puVar32 = *puVar31;
            puVar32[1] = uVar25;
            uVar25 = puVar31[3];
            puVar32[2] = puVar31[2];
            puVar32[3] = uVar25;
            uVar25 = puVar31[5];
            puVar32[4] = puVar31[4];
            puVar32[5] = uVar25;
            uVar25 = puVar31[7];
            puVar32[6] = puVar31[6];
            puVar32[7] = uVar25;
            uVar25 = puVar31[9];
            puVar32[8] = puVar31[8];
            puVar32[9] = uVar25;
            uVar25 = puVar31[0xb];
            puVar32[10] = puVar31[10];
            puVar32[0xb] = uVar25;
            uVar25 = puVar31[0xd];
            puVar32[0xc] = puVar31[0xc];
            puVar32[0xd] = uVar25;
            uVar25 = puVar31[0xf];
            puVar32[0xe] = puVar31[0xe];
            puVar32[0xf] = uVar25;
            uVar25 = puVar31[0x11];
            puVar32[0x10] = puVar31[0x10];
            puVar32[0x11] = uVar25;
            uVar25 = puVar31[0x13];
            puVar32[0x12] = puVar31[0x12];
            puVar32[0x13] = uVar25;
            uVar25 = puVar31[0x15];
            puVar32[0x14] = puVar31[0x14];
            puVar32[0x15] = uVar25;
            puVar32[0x16] = puVar31[0x16];
            *puVar31 = uVar3;
            puVar31[1] = uVar4;
            puVar31[2] = uVar5;
            puVar31[3] = uVar6;
            puVar31[4] = uVar7;
            puVar31[5] = uVar8;
            puVar31[6] = uVar9;
            puVar31[7] = uVar10;
            puVar31[8] = uVar11;
            puVar31[9] = uVar12;
            puVar31[10] = uVar13;
            puVar31[0xb] = uVar14;
            puVar31[0xc] = uVar15;
            puVar31[0xd] = uVar16;
            puVar31[0xe] = uVar17;
            puVar31[0xf] = uVar18;
            puVar31[0x10] = uVar19;
            puVar31[0x11] = uVar20;
            puVar31[0x12] = uVar21;
            puVar31[0x13] = uVar22;
            puVar31[0x14] = uVar23;
            puVar31[0x15] = uVar24;
            puVar31[0x16] = uVar1;
          }
          iVar26 = iVar28;
        } while (iVar28 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar30 = puVar30 + -0x17;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140ecd410 FUN_140ecd410 body=143 status=ok
// SIG undefined FUN_140ecd410(void)

longlong FUN_140ecd410(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = FUN_14132e850();
  lVar3 = FUN_142ebcee0(param_1,param_2,uVar2,param_3);
  if (lVar3 != 0) {
    lVar4 = FUN_14132e850();
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
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140ecd4a0 FUN_140ecd4a0 body=2377 status=ok
// SIG undefined FUN_140ecd4a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ecd4a0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_658 [48];
  longlong local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_658;
    fVar15 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0xb8 + param_2 * 0xb8;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_328 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar14 = &local_338;
    do {
      puVar13 = (undefined8 *)*plVar14;
      puVar8 = (undefined8 *)plVar14[1];
      lVar2 = plVar14[2];
      local_628._0_4_ = (int)lVar2;
      lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar8 - (longlong)puVar13),8)
              + ((longlong)puVar8 - (longlong)puVar13);
      lVar6 = ((lVar6 >> 7) + 1) - (lVar6 >> 0x3f);
      puVar12 = puVar13;
      if ((int)local_628 != 0) {
LAB_140ecd5a0:
        if (8 < lVar6) {
          puVar13 = puVar12 + (lVar6 / 2) * 0x17;
          if (puVar13 != puVar12) {
            local_620 = *puVar13;
            uStack_618 = puVar13[1];
            local_570 = puVar13[0x16];
            local_610 = puVar13[2];
            uStack_608 = puVar13[3];
            local_600 = puVar13[4];
            uStack_5f8 = puVar13[5];
            local_5f0 = puVar13[6];
            uStack_5e8 = puVar13[7];
            local_5e0 = puVar13[8];
            uStack_5d8 = puVar13[9];
            local_5d0 = puVar13[10];
            uStack_5c8 = puVar13[0xb];
            local_5c0 = puVar13[0xc];
            uStack_5b8 = puVar13[0xd];
            local_5b0 = puVar13[0xe];
            uStack_5a8 = puVar13[0xf];
            local_5a0 = puVar13[0x10];
            uStack_598 = puVar13[0x11];
            local_590 = puVar13[0x12];
            uStack_588 = puVar13[0x13];
            uVar3 = puVar13[0x14];
            uVar4 = puVar13[0x15];
            uVar5 = puVar12[1];
            *puVar13 = *puVar12;
            puVar13[1] = uVar5;
            uVar5 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar5;
            uVar5 = puVar12[5];
            puVar13[4] = puVar12[4];
            puVar13[5] = uVar5;
            uVar5 = puVar12[7];
            puVar13[6] = puVar12[6];
            puVar13[7] = uVar5;
            uVar5 = puVar12[9];
            puVar13[8] = puVar12[8];
            puVar13[9] = uVar5;
            uVar5 = puVar12[0xb];
            puVar13[10] = puVar12[10];
            puVar13[0xb] = uVar5;
            uVar5 = puVar12[0xd];
            puVar13[0xc] = puVar12[0xc];
            puVar13[0xd] = uVar5;
            uVar5 = puVar12[0xf];
            puVar13[0xe] = puVar12[0xe];
            puVar13[0xf] = uVar5;
            uVar5 = puVar12[0x11];
            puVar13[0x10] = puVar12[0x10];
            puVar13[0x11] = uVar5;
            uVar5 = puVar12[0x13];
            puVar13[0x12] = puVar12[0x12];
            puVar13[0x13] = uVar5;
            uVar5 = puVar12[0x15];
            puVar13[0x14] = puVar12[0x14];
            puVar13[0x15] = uVar5;
            puVar13[0x16] = puVar12[0x16];
            *puVar12 = local_620;
            puVar12[1] = uStack_618;
            puVar12[2] = local_610;
            puVar12[3] = uStack_608;
            puVar12[4] = local_600;
            puVar12[5] = uStack_5f8;
            puVar12[6] = local_5f0;
            puVar12[7] = uStack_5e8;
            puVar12[8] = local_5e0;
            puVar12[9] = uStack_5d8;
            puVar12[10] = local_5d0;
            puVar12[0xb] = uStack_5c8;
            puVar12[0xc] = local_5c0;
            puVar12[0xd] = uStack_5b8;
            puVar12[0xe] = local_5b0;
            puVar12[0xf] = uStack_5a8;
            puVar12[0x10] = local_5a0;
            puVar12[0x11] = uStack_598;
            local_580._0_4_ = (undefined4)uVar3;
            local_580._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_578._0_4_ = (undefined4)uVar4;
            uStack_578._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            puVar12[0x12] = local_590;
            puVar12[0x13] = uStack_588;
            *(undefined4 *)(puVar12 + 0x14) = (undefined4)local_580;
            *(undefined4 *)((longlong)puVar12 + 0xa4) = local_580._4_4_;
            *(undefined4 *)(puVar12 + 0x15) = (undefined4)uStack_578;
            *(undefined4 *)((longlong)puVar12 + 0xac) = uStack_578._4_4_;
            puVar12[0x16] = local_570;
            local_580 = uVar3;
            uStack_578 = uVar4;
          }
          puVar10 = puVar8 + 0x17;
          puVar13 = puVar12;
LAB_140ecd754:
          puVar9 = puVar13;
          puVar13 = puVar9 + 0x17;
          if (puVar13 <= puVar8) goto code_r0x000140ecd760;
          goto LAB_140ecd770;
        }
        for (; puVar13 = puVar12, puVar10 = puVar12, puVar12 < puVar8; puVar8 = puVar8 + -0x17) {
          while (puVar9 = puVar13, puVar13 = puVar10 + 0x17, puVar13 <= puVar8) {
            piVar1 = (int *)((longlong)puVar10 + 0x16c);
            puVar10 = puVar13;
            if (*(int *)((longlong)puVar9 + 0xb4) <= *piVar1) {
              puVar13 = puVar9;
            }
          }
          if (puVar9 != puVar8) {
            local_3f8 = *puVar9;
            uStack_3f0 = puVar9[1];
            local_348 = puVar9[0x16];
            local_3e8 = puVar9[2];
            uStack_3e0 = puVar9[3];
            local_3d8 = puVar9[4];
            uStack_3d0 = puVar9[5];
            local_3c8 = puVar9[6];
            uStack_3c0 = puVar9[7];
            local_3b8 = puVar9[8];
            uStack_3b0 = puVar9[9];
            local_3a8 = puVar9[10];
            uStack_3a0 = puVar9[0xb];
            local_398 = puVar9[0xc];
            uStack_390 = puVar9[0xd];
            local_388 = puVar9[0xe];
            uStack_380 = puVar9[0xf];
            local_378 = puVar9[0x10];
            uStack_370 = puVar9[0x11];
            local_368 = puVar9[0x12];
            uStack_360 = puVar9[0x13];
            local_358 = puVar9[0x14];
            uStack_350 = puVar9[0x15];
            uVar3 = puVar8[1];
            *puVar9 = *puVar8;
            puVar9[1] = uVar3;
            uVar3 = puVar8[3];
            puVar9[2] = puVar8[2];
            puVar9[3] = uVar3;
            uVar3 = puVar8[5];
            puVar9[4] = puVar8[4];
            puVar9[5] = uVar3;
            uVar3 = puVar8[7];
            puVar9[6] = puVar8[6];
            puVar9[7] = uVar3;
            uVar3 = puVar8[9];
            puVar9[8] = puVar8[8];
            puVar9[9] = uVar3;
            uVar3 = puVar8[0xb];
            puVar9[10] = puVar8[10];
            puVar9[0xb] = uVar3;
            uVar3 = puVar8[0xd];
            puVar9[0xc] = puVar8[0xc];
            puVar9[0xd] = uVar3;
            uVar3 = puVar8[0xf];
            puVar9[0xe] = puVar8[0xe];
            puVar9[0xf] = uVar3;
            uVar3 = puVar8[0x11];
            puVar9[0x10] = puVar8[0x10];
            puVar9[0x11] = uVar3;
            uVar3 = puVar8[0x13];
            puVar9[0x12] = puVar8[0x12];
            puVar9[0x13] = uVar3;
            uVar3 = puVar8[0x15];
            puVar9[0x14] = puVar8[0x14];
            puVar9[0x15] = uVar3;
            puVar9[0x16] = puVar8[0x16];
            *puVar8 = local_3f8;
            puVar8[1] = uStack_3f0;
            puVar8[2] = local_3e8;
            puVar8[3] = uStack_3e0;
            puVar8[4] = local_3d8;
            puVar8[5] = uStack_3d0;
            puVar8[6] = local_3c8;
            puVar8[7] = uStack_3c0;
            puVar8[8] = local_3b8;
            puVar8[9] = uStack_3b0;
            puVar8[10] = local_3a8;
            puVar8[0xb] = uStack_3a0;
            puVar8[0xc] = local_398;
            puVar8[0xd] = uStack_390;
            puVar8[0xe] = local_388;
            puVar8[0xf] = uStack_380;
            puVar8[0x10] = local_378;
            puVar8[0x11] = uStack_370;
            puVar8[0x12] = local_368;
            puVar8[0x13] = uStack_360;
            puVar8[0x14] = local_358;
            puVar8[0x15] = uStack_350;
            puVar8[0x16] = local_348;
          }
        }
        goto LAB_140ecdbb4;
      }
LAB_140ecdba5:
      local_628 = lVar2;
      FUN_140eccda0(puVar13,lVar6,param_3,param_4);
LAB_140ecdbb4:
      plVar14 = plVar14 + -3;
    } while (&local_338 <= plVar14);
  }
  return;
code_r0x000140ecd760:
  if (*(int *)((longlong)puVar12 + 0xb4) <= *(int *)((longlong)puVar9 + 0x16c)) goto LAB_140ecd754;
LAB_140ecd770:
  do {
    puVar11 = puVar10;
    puVar10 = puVar11 + -0x17;
    if (puVar10 <= puVar12) break;
  } while (*(int *)((longlong)puVar11 + -4) <= *(int *)((longlong)puVar12 + 0xb4));
  if (puVar13 <= puVar10) {
    if (puVar13 != puVar10) {
      local_568 = *puVar13;
      uStack_560 = puVar9[0x18];
      local_4b8 = puVar9[0x2d];
      local_558 = puVar9[0x19];
      uStack_550 = puVar9[0x1a];
      local_548 = puVar9[0x1b];
      uStack_540 = puVar9[0x1c];
      local_538 = puVar9[0x1d];
      uStack_530 = puVar9[0x1e];
      local_528 = puVar9[0x1f];
      uStack_520 = puVar9[0x20];
      local_518 = puVar9[0x21];
      uStack_510 = puVar9[0x22];
      local_508 = puVar9[0x23];
      uStack_500 = puVar9[0x24];
      local_4f8 = puVar9[0x25];
      uStack_4f0 = puVar9[0x26];
      local_4e8 = puVar9[0x27];
      uStack_4e0 = puVar9[0x28];
      local_4d8 = puVar9[0x29];
      uStack_4d0 = puVar9[0x2a];
      uVar3 = puVar9[0x2b];
      uVar4 = puVar9[0x2c];
      uVar5 = puVar11[-0x16];
      *puVar13 = *puVar10;
      puVar9[0x18] = uVar5;
      uVar5 = puVar11[-0x14];
      puVar9[0x19] = puVar11[-0x15];
      puVar9[0x1a] = uVar5;
      uVar5 = puVar11[-0x12];
      puVar9[0x1b] = puVar11[-0x13];
      puVar9[0x1c] = uVar5;
      uVar5 = puVar11[-0x10];
      puVar9[0x1d] = puVar11[-0x11];
      puVar9[0x1e] = uVar5;
      uVar5 = puVar11[-0xe];
      puVar9[0x1f] = puVar11[-0xf];
      puVar9[0x20] = uVar5;
      uVar5 = puVar11[-0xc];
      puVar9[0x21] = puVar11[-0xd];
      puVar9[0x22] = uVar5;
      uVar5 = puVar11[-10];
      puVar9[0x23] = puVar11[-0xb];
      puVar9[0x24] = uVar5;
      uVar5 = puVar11[-8];
      puVar9[0x25] = puVar11[-9];
      puVar9[0x26] = uVar5;
      uVar5 = puVar11[-6];
      puVar9[0x27] = puVar11[-7];
      puVar9[0x28] = uVar5;
      uVar5 = puVar11[-4];
      puVar9[0x29] = puVar11[-5];
      puVar9[0x2a] = uVar5;
      uVar5 = puVar11[-2];
      puVar9[0x2b] = puVar11[-3];
      puVar9[0x2c] = uVar5;
      puVar9[0x2d] = puVar11[-1];
      *puVar10 = local_568;
      puVar11[-0x16] = uStack_560;
      puVar11[-0x15] = local_558;
      puVar11[-0x14] = uStack_550;
      puVar11[-0x13] = local_548;
      puVar11[-0x12] = uStack_540;
      puVar11[-0x11] = local_538;
      puVar11[-0x10] = uStack_530;
      puVar11[-0xf] = local_528;
      puVar11[-0xe] = uStack_520;
      puVar11[-0xd] = local_518;
      puVar11[-0xc] = uStack_510;
      puVar11[-0xb] = local_508;
      puVar11[-10] = uStack_500;
      puVar11[-9] = local_4f8;
      puVar11[-8] = uStack_4f0;
      puVar11[-7] = local_4e8;
      puVar11[-6] = uStack_4e0;
      local_4c8._0_4_ = (undefined4)uVar3;
      local_4c8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_4c0._0_4_ = (undefined4)uVar4;
      uStack_4c0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar11[-5] = local_4d8;
      puVar11[-4] = uStack_4d0;
      *(undefined4 *)(puVar11 + -3) = (undefined4)local_4c8;
      *(undefined4 *)((longlong)puVar11 + -0x14) = local_4c8._4_4_;
      *(undefined4 *)(puVar11 + -2) = (undefined4)uStack_4c0;
      *(undefined4 *)((longlong)puVar11 + -0xc) = uStack_4c0._4_4_;
      puVar11[-1] = local_4b8;
      local_4c8 = uVar3;
      uStack_4c0 = uVar4;
    }
    goto LAB_140ecd754;
  }
  if (puVar12 != puVar10) {
    local_4b0 = *puVar12;
    uStack_4a8 = puVar12[1];
    local_400 = puVar12[0x16];
    local_4a0 = puVar12[2];
    uStack_498 = puVar12[3];
    local_490 = puVar12[4];
    uStack_488 = puVar12[5];
    local_480 = puVar12[6];
    uStack_478 = puVar12[7];
    local_470 = puVar12[8];
    uStack_468 = puVar12[9];
    local_460 = puVar12[10];
    uStack_458 = puVar12[0xb];
    local_450 = puVar12[0xc];
    uStack_448 = puVar12[0xd];
    local_440 = puVar12[0xe];
    uStack_438 = puVar12[0xf];
    local_430 = puVar12[0x10];
    uStack_428 = puVar12[0x11];
    local_420 = puVar12[0x12];
    uStack_418 = puVar12[0x13];
    uVar3 = puVar12[0x14];
    uVar4 = puVar12[0x15];
    uVar5 = puVar11[-0x16];
    *puVar12 = *puVar10;
    puVar12[1] = uVar5;
    uVar5 = puVar11[-0x14];
    puVar12[2] = puVar11[-0x15];
    puVar12[3] = uVar5;
    uVar5 = puVar11[-0x12];
    puVar12[4] = puVar11[-0x13];
    puVar12[5] = uVar5;
    uVar5 = puVar11[-0x10];
    puVar12[6] = puVar11[-0x11];
    puVar12[7] = uVar5;
    uVar5 = puVar11[-0xe];
    puVar12[8] = puVar11[-0xf];
    puVar12[9] = uVar5;
    uVar5 = puVar11[-0xc];
    puVar12[10] = puVar11[-0xd];
    puVar12[0xb] = uVar5;
    uVar5 = puVar11[-10];
    puVar12[0xc] = puVar11[-0xb];
    puVar12[0xd] = uVar5;
    uVar5 = puVar11[-8];
    puVar12[0xe] = puVar11[-9];
    puVar12[0xf] = uVar5;
    uVar5 = puVar11[-6];
    puVar12[0x10] = puVar11[-7];
    puVar12[0x11] = uVar5;
    uVar5 = puVar11[-4];
    puVar12[0x12] = puVar11[-5];
    puVar12[0x13] = uVar5;
    uVar5 = puVar11[-2];
    puVar12[0x14] = puVar11[-3];
    puVar12[0x15] = uVar5;
    puVar12[0x16] = puVar11[-1];
    *puVar10 = local_4b0;
    puVar11[-0x16] = uStack_4a8;
    puVar11[-0x15] = local_4a0;
    puVar11[-0x14] = uStack_498;
    puVar11[-0x13] = local_490;
    puVar11[-0x12] = uStack_488;
    puVar11[-0x11] = local_480;
    puVar11[-0x10] = uStack_478;
    puVar11[-0xf] = local_470;
    puVar11[-0xe] = uStack_468;
    puVar11[-0xd] = local_460;
    puVar11[-0xc] = uStack_458;
    puVar11[-0xb] = local_450;
    puVar11[-10] = uStack_448;
    puVar11[-9] = local_440;
    puVar11[-8] = uStack_438;
    puVar11[-7] = local_430;
    puVar11[-6] = uStack_428;
    local_410._0_4_ = (undefined4)uVar3;
    local_410._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_408._0_4_ = (undefined4)uVar4;
    uStack_408._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    puVar11[-5] = local_420;
    puVar11[-4] = uStack_418;
    *(undefined4 *)(puVar11 + -3) = (undefined4)local_410;
    *(undefined4 *)((longlong)puVar11 + -0x14) = local_410._4_4_;
    *(undefined4 *)(puVar11 + -2) = (undefined4)uStack_408;
    *(undefined4 *)((longlong)puVar11 + -0xc) = uStack_408._4_4_;
    puVar11[-1] = local_400;
    local_410 = uVar3;
    uStack_408 = uVar4;
  }
  local_628._0_4_ = (int)local_628 + -1;
  lVar6 = (longlong)puVar10 + (-0xb8 - (longlong)puVar12);
  lVar6 = lVar6 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar6),8);
  lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar8 - (longlong)puVar13),8) +
          ((longlong)puVar8 - (longlong)puVar13);
  if ((lVar6 >> 7) - (lVar6 >> 0x3f) < (lVar7 >> 7) - (lVar7 >> 0x3f)) {
    if (puVar13 < puVar8) {
      *plVar14 = (longlong)puVar13;
      plVar14[1] = (longlong)puVar8;
      *(int *)(plVar14 + 2) = (int)local_628;
      plVar14 = plVar14 + 3;
    }
    if (puVar10 <= puVar12 + 0x17) goto LAB_140ecdbb4;
    puVar8 = puVar11 + -0x2e;
    puVar13 = puVar12;
  }
  else {
    if (puVar12 + 0x17 < puVar10) {
      *plVar14 = (longlong)puVar12;
      plVar14[1] = (longlong)(puVar11 + -0x2e);
      *(int *)(plVar14 + 2) = (int)local_628;
      plVar14 = plVar14 + 3;
    }
    if (puVar8 <= puVar13) goto LAB_140ecdbb4;
  }
  lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar8 - (longlong)puVar13),8) +
          ((longlong)puVar8 - (longlong)puVar13);
  lVar6 = ((lVar6 >> 7) + 1) - (lVar6 >> 0x3f);
  puVar12 = puVar13;
  if ((int)local_628 == 0) goto LAB_140ecdba5;
  goto LAB_140ecd5a0;
}



// FUNCTION 140ecddf0 IsA<UUniformGridSlot> body=69 status=ok
// SIG undefined IsA<UUniformGridSlot>(void)

ulonglong UObjectBaseUtility::IsA<UUniformGridSlot>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1414d02a0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140ecde40 FUN_140ecde40 body=1064 status=ok
// SIG undefined FUN_140ecde40(void)

ulonglong FUN_140ecde40(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 local_124;
  ulonglong local_120;
  longlong *plStack_118;
  undefined8 local_110;
  longlong local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  
  uVar13 = 0;
  local_128 = param_5;
  local_124 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ecdee8:
    puVar11 = &local_120;
    local_120 = 0;
    plStack_118 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    uVar10 = uVar13;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_140ecdee8;
    local_130 = *(longlong **)(param_1 + 0x30);
    bVar5 = true;
    bVar4 = false;
    local_138 = 0;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      uVar3 = *(uint *)(local_130 + 1);
      bVar15 = uVar3 == 0;
      if (bVar15) {
        *(uint *)(local_130 + 1) = 0;
        uVar10 = uVar13;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
      while (!bVar15) {
        iVar6 = (int)uVar10;
        LOCK();
        bVar15 = iVar6 == (int)local_130[1];
        if (bVar15) {
          *(int *)(local_130 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar15) {
          local_138 = *(ulonglong *)(param_1 + 0x28);
          puVar11 = &local_138;
          uVar10 = local_138;
          goto LAB_140ecdeff;
        }
        uVar10 = 0;
        LOCK();
        uVar3 = *(uint *)(local_130 + 1);
        bVar15 = uVar3 == 0;
        if (bVar15) {
          *(uint *)(local_130 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
      }
      local_130 = (longlong *)0x0;
    }
    puVar11 = &local_138;
    uVar10 = 0;
  }
LAB_140ecdeff:
  plVar14 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  plVar12 = plStack_118;
  *puVar11 = 0;
  local_110 = param_2;
  local_108 = param_3;
  if ((bVar4) && (plStack_118 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_118 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_118)(plStack_118);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_118 + 8))(plStack_118,1);
      }
    }
  }
  plVar12 = local_130;
  if ((bVar5) && (local_130 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_130 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar14 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    if (*(int *)(param_3 + 0x40) != 0) {
      plVar14 = *(longlong **)(param_3 + 0x30);
      if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
        plVar14 = (longlong *)(param_3 + 0x10);
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
      }
    }
    if (*(longlong *)(param_3 + 0x30) != 0) {
      FMemory::Free();
    }
    return 0;
  }
  if (param_4 != 0) {
    lVar7 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar8 = param_4;
    do {
      if (lVar8 == lVar7) goto LAB_140ecdfeb;
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
  param_4 = UPlatformGameInstance::StaticClass();
LAB_140ecdfeb:
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  plVar12 = *(longlong **)(uVar10 + 0x80);
  local_e8 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  lVar8 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,param_3);
  local_148 = (undefined4)uVar10;
  uStack_144 = (undefined4)(uVar10 >> 0x20);
  uStack_140 = SUB84(plVar14,0);
  uStack_13c = (undefined4)((ulonglong)plVar14 >> 0x20);
  local_f8 = local_148;
  uStack_f4 = uStack_144;
  uStack_f0 = uStack_140;
  uStack_ec = uStack_13c;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  uVar9 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,lVar8);
  uVar10 = FUN_142047e80(local_e8,param_4,local_110,&local_f8,uVar9,local_128);
  if (uVar10 != 0) {
    lVar7 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140ece0b2;
  }
  uVar10 = uVar13;
LAB_140ece0b2:
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar14 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (*(int *)(lVar8 + 0x40) != 0) {
    plVar12 = *(longlong **)(lVar8 + 0x30);
    if (*(longlong **)(lVar8 + 0x30) == (longlong *)0x0) {
      plVar12 = (longlong *)(lVar8 + 0x10);
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (*(longlong *)(lVar8 + 0x30) != 0) {
    FMemory::Free();
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar14 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  lVar8 = local_108;
  if (*(int *)(local_108 + 0x40) != 0) {
    plVar14 = *(longlong **)(local_108 + 0x30);
    if (*(longlong **)(local_108 + 0x30) == (longlong *)0x0) {
      plVar14 = (longlong *)(local_108 + 0x10);
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (*(longlong *)(lVar8 + 0x30) != 0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 140ece270 NewObject<USoundAtomCue> body=89 status=ok
// SIG undefined NewObject<USoundAtomCue>(void)

void NewObject<USoundAtomCue>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142f1c650();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140ece2d0 FUN_140ece2d0 body=617 status=ok
// SIG undefined FUN_140ece2d0(void)

bool FUN_140ece2d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140ece4e4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140ece427;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141334660();
LAB_140ece427:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140ece49b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141334660();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ece49b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140ece4e4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return *param_2 != 0;
}



// FUNCTION 140ece540 FUN_140ece540 body=617 status=ok
// SIG undefined FUN_140ece540(void)

bool FUN_140ece540(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140ece754;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140ece697;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UMobBaseAnim::GetPrivateStaticClass();
LAB_140ece697:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140ece70b:
    lVar9 = 0;
  }
  else {
    lVar10 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ece70b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140ece754:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return *param_2 != 0;
}



// FUNCTION 140ece7b0 FUN_140ece7b0 body=617 status=ok
// SIG undefined FUN_140ece7b0(void)

bool FUN_140ece7b0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140ece9c4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140ece907;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_140ece907:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140ece97b:
    lVar9 = 0;
  }
  else {
    lVar10 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ece97b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140ece9c4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return *param_2 != 0;
}



// FUNCTION 140ecea20 FUN_140ecea20 body=617 status=ok
// SIG undefined FUN_140ecea20(void)

bool FUN_140ecea20(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140ecec34;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140eceb77;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413356b0();
LAB_140eceb77:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140ecebeb:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_1413356b0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ecebeb;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140ecec34:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return *param_2 != 0;
}



// FUNCTION 140ecec90 FUN_140ecec90 body=879 status=ok
// SIG undefined FUN_140ecec90(void)

bool FUN_140ecec90(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140eced4f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140eced4f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140eced64;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140eced64:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140ecef9f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140eceeed;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413356b0();
LAB_140eceeed:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140ecef66:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413356b0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140ecef66;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140ecef9f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140ecf000 FUN_140ecf000 body=617 status=ok
// SIG undefined FUN_140ecf000(void)

bool FUN_140ecf000(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140ecf214;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140ecf157;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_142f20520();
LAB_140ecf157:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140ecf1cb:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_142f20520();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ecf1cb;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140ecf214:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return *param_2 != 0;
}



// FUNCTION 140ecf270 FUN_140ecf270 body=617 status=ok
// SIG undefined FUN_140ecf270(void)

bool FUN_140ecf270(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140ecf484;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140ecf3c7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UPlatformGameInstance::StaticClass();
LAB_140ecf3c7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140ecf43b:
    lVar9 = 0;
  }
  else {
    lVar10 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ecf43b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140ecf484:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return *param_2 != 0;
}



// FUNCTION 140ecf4e0 FUN_140ecf4e0 body=617 status=ok
// SIG undefined FUN_140ecf4e0(void)

bool FUN_140ecf4e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140ecf6f4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140ecf637;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UAnimSharingStateInstance::GetPrivateStaticClass();
LAB_140ecf637:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140ecf6ab:
    lVar9 = 0;
  }
  else {
    lVar10 = UAnimSharingStateInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ecf6ab;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140ecf6f4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return *param_2 != 0;
}



// FUNCTION 140ecf750 FUN_140ecf750 body=617 status=ok
// SIG undefined FUN_140ecf750(void)

bool FUN_140ecf750(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140ecf964;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140ecf8a7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141470640();
LAB_140ecf8a7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140ecf91b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141470640();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ecf91b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140ecf964:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return *param_2 != 0;
}



// FUNCTION 140ecf9c0 FUN_140ecf9c0 body=891 status=ok
// SIG undefined FUN_140ecf9c0(void)

int FUN_140ecf9c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  int local_res20;
  
  iVar4 = (int)param_1[1];
  lVar12 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  local_res20 = 0;
  cVar5 = FUN_140ed6de0(param_2);
  bVar19 = cVar5 == '\0';
  lVar15 = 0;
  iVar16 = 0;
  do {
    iVar17 = iVar16 + 1;
    lVar15 = lVar15 + 1;
    if (lVar15 < lVar12) {
      lVar18 = lVar15 * 0xb8;
      do {
        lVar3 = lVar18 + *param_1;
        if (*(char *)(lVar3 + 0xb0) == '\0') {
          plVar10 = *(longlong **)*param_2;
          plVar14 = plVar10 + (int)((longlong *)*param_2)[1];
          for (; plVar10 != plVar14; plVar10 = plVar10 + 1) {
            if (*plVar10 != 0) {
              lVar7 = FUN_142dfdfe0();
              lVar13 = *plVar10;
              for (lVar9 = lVar13; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
                if (lVar9 == lVar7) goto LAB_140ecfad0;
              }
            }
            lVar13 = 0;
LAB_140ecfad0:
            if (*(longlong *)(lVar3 + 0xa8) != 0) {
              lVar8 = FUN_142dfdfe0();
              lVar9 = *(longlong *)(lVar3 + 0xa8);
              for (lVar7 = lVar9; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
                if (lVar7 == lVar8) goto LAB_140ecfb00;
              }
            }
            lVar9 = 0;
LAB_140ecfb00:
            if (lVar13 == lVar9) {
              bVar6 = false;
              goto LAB_140ecfb1c;
            }
          }
        }
        bVar6 = true;
LAB_140ecfb1c:
        if (bVar19 != bVar6) break;
        iVar17 = iVar17 + 1;
        lVar15 = lVar15 + 1;
        lVar18 = lVar18 + 0xb8;
      } while (lVar15 < lVar12);
    }
    iVar11 = iVar17 - iVar16;
    if (bVar19 == false) {
      if (iVar11 != 0) {
        plVar14 = (longlong *)((longlong)iVar16 * 0xb8 + 0x70 + *param_1);
        do {
          if (plVar14[2] != 0) {
            FMemory::Free();
          }
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          plVar10 = (longlong *)plVar14[-3];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            lVar18 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar16 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10);
              }
            }
          }
          plVar10 = (longlong *)plVar14[-6];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            lVar18 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar16 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10);
              }
            }
          }
          plVar10 = (longlong *)plVar14[-10];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            lVar18 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar16 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10);
              }
            }
          }
          plVar10 = (longlong *)plVar14[-0xd];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            lVar18 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar16 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10);
              }
            }
          }
          plVar14 = plVar14 + 0x17;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    else {
      if (local_res20 != iVar16) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_res20 * 0xb8 + *param_1),
                   (void *)((longlong)iVar16 * 0xb8 + *param_1),(longlong)iVar11 * 0xb8);
      }
      local_res20 = local_res20 + iVar11;
    }
    bVar19 = (bool)(bVar19 ^ 1);
    iVar16 = iVar17;
    if (lVar12 <= lVar15) {
      *(int *)(param_1 + 1) = local_res20;
      return iVar4 - local_res20;
    }
  } while( true );
}



// FUNCTION 140ecfd40 FUN_140ecfd40 body=260 status=ok
// SIG undefined FUN_140ecfd40(void)

longlong FUN_140ecfd40(longlong param_1,longlong param_2)

{
  FText::FText();
  FText::FText(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FText::FText(param_1 + 0x38,param_2 + 0x38);
  FText::FText(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  FString::FString(param_1 + 0x70,param_2 + 0x70);
  FString::FString(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
  *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa1) = *(undefined1 *)(param_2 + 0xa1);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  return param_1;
}



// FUNCTION 140ecfe50 FUN_140ecfe50 body=775 status=ok
// SIG undefined FUN_140ecfe50(void)

longlong FUN_140ecfe50(longlong param_1,char param_2,int param_3,int param_4,char param_5,
                      longlong param_6,longlong param_7,char param_8)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1,uVar2);
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0x18,uVar2);
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0x38,uVar2);
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0x50,uVar2);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (param_6 != 0) {
    lVar4 = 0;
    if (param_7 != 0) {
      lVar3 = FUN_142dfdfe0();
      lVar5 = param_7;
      do {
        lVar4 = param_7;
        if (lVar5 == lVar3) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar4 = 0;
      } while (lVar5 != 0);
    }
    lVar4 = FUN_142dcdc10(param_6,lVar4);
    if (lVar4 != 0) {
      *(longlong *)(param_1 + 0xa8) = param_7;
      FText::operator=(param_1,lVar4 + 0x40);
      if (param_8 == '\0') {
        FText::operator=(param_1 + 0x38,lVar4 + 0x70);
        if (*(wchar_t **)(param_1 + 0x70) != L"challenge") {
          *(undefined4 *)(param_1 + 0x78) = 0;
          if (*(int *)(param_1 + 0x7c) != 10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x70,10);
            iVar6 = *(int *)(param_1 + 0x78);
          }
          *(int *)(param_1 + 0x78) = iVar6 + 10;
          if (*(int *)(param_1 + 0x7c) < iVar6 + 10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar6);
          }
          builtin_wcsncpy(*(wchar_t **)(param_1 + 0x70),L"challenge",10);
        }
        if (param_3 < 0) {
          param_3 = FUN_142dcdd00(lVar4);
        }
        if (param_4 < 0) {
          if (param_2 == '\0') {
            param_4 = FUN_142dce050(lVar4);
          }
          else {
            param_4 = FUN_142dce290();
          }
        }
        if ((param_5 == '\0') && (*(char *)(lVar4 + 0x98) != '\0')) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        if (param_3 < 0) {
          param_3 = FUN_142dcdd00(lVar4);
        }
        param_4 = FUN_142dce290(lVar4);
        if (*(int *)(lVar4 + 0xa8) != 0) {
          iVar1 = *(int *)(*(longlong *)(lVar4 + 0xa0) + 0x10);
          if (0 < iVar1) {
            param_4 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0xa0) + 8) + -8 +
                              (longlong)iVar1 * 8);
          }
        }
        lVar5 = 0x70;
        if (param_4 != param_3) {
          lVar5 = 0x58;
        }
        FText::operator=(param_1 + 0x38,lVar5 + lVar4);
        if (*(wchar_t **)(param_1 + 0x70) != L"challenge") {
          *(undefined4 *)(param_1 + 0x78) = 0;
          if (*(int *)(param_1 + 0x7c) != 10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x70,10);
            iVar6 = *(int *)(param_1 + 0x78);
          }
          *(int *)(param_1 + 0x78) = iVar6 + 10;
          if (*(int *)(param_1 + 0x7c) < iVar6 + 10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar6);
          }
          builtin_wcsncpy(*(wchar_t **)(param_1 + 0x70),L"challenge",10);
        }
        if ((param_5 == '\0') && (*(char *)(lVar4 + 0x98) != '\0')) {
          uVar2 = 0;
          param_2 = param_4 == param_3;
        }
        else {
          param_2 = param_4 == param_3;
          uVar2 = 1;
        }
      }
      FUN_140f081e0(param_1,param_2,uVar2,param_3,param_4);
    }
  }
  return param_1;
}



// FUNCTION 140ed0160 FUN_140ed0160 body=212 status=ok
// SIG undefined FUN_140ed0160(void)

undefined8 * FUN_140ed0160(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar1 << 2);
  }
  *(byte *)(param_1 + 4) =
       *(byte *)(param_1 + 4) ^ (*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1;
  *(byte *)(param_1 + 4) =
       *(byte *)(param_1 + 4) ^ (*(byte *)(param_2 + 4) ^ *(byte *)(param_1 + 4)) & 2;
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  param_1[0xb] = param_2[0xb];
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  param_1[0xe] = param_2[0xe];
  return param_1;
}



// FUNCTION 140ed0240 FUN_140ed0240 body=297 status=ok
// SIG undefined FUN_140ed0240(void)

longlong FUN_140ed0240(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x20,uVar1);
  FText::FText(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x1000000;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x8c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x80,0);
  }
  if (*(undefined2 **)(param_1 + 0x80) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_142fde510(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xd8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 1;
  return param_1;
}


