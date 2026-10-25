// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141146340 FUN_141146340 body=166 status=ok
// SIG undefined FUN_141146340(void)

void FUN_141146340(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) && (*(longlong *)(*param_1 + 0x7e8) != 0)) {
      FUN_142088910(*(longlong *)(*param_1 + 0x7e8),param_1 + 3);
      return;
    }
  }
  return;
}



// FUNCTION 1411463f0 FUN_1411463f0 body=297 status=ok
// SIG undefined FUN_1411463f0(void)

void FUN_1411463f0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
      if (lVar4 != 0) {
        lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
        lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
        if (lVar4 != 0) {
          uVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
          (**(code **)(*(longlong *)(lVar5 + 0x1b0) + 8))(lVar5 + 0x1b0,uVar6,0,0);
          lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001411464f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(lVar4 + 0x1b0) + 0x18))((longlong *)(lVar4 + 0x1b0),0);
          return;
        }
        (**(code **)(*(longlong *)(lVar5 + 0x1b0) + 0x20))(lVar5 + 0x1b0,1);
      }
    }
  }
  return;
}



// FUNCTION 141146520 FUN_141146520 body=301 status=ok
// SIG undefined FUN_141146520(void)

void FUN_141146520(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14114657c;
  }
  lVar7 = 0;
LAB_14114657c:
  plVar4 = *(longlong **)(*param_1 + 0x798);
  lVar8 = *(longlong *)(*param_1 + 0x790);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar7 != 0) && (lVar8 != 0)) {
    local_28 = (undefined4)lVar8;
    uStack_24 = (undefined4)((ulonglong)lVar8 >> 0x20);
    uStack_20 = SUB84(plVar4,0);
    uStack_1c = (undefined4)((ulonglong)plVar4 >> 0x20);
    local_18 = local_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_140bc97d0(lVar7,&local_18);
    plVar5 = (longlong *)CONCAT44(uStack_c,uStack_10);
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
  }
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
  return;
}



// FUNCTION 141146650 FUN_141146650 body=714 status=ok
// SIG undefined FUN_141146650(void)

void FUN_141146650(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1411466c0;
  }
  lVar7 = lVar11;
LAB_1411466c0:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140be8540(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 141146920 FUN_141146920 body=807 status=ok
// SIG undefined FUN_141146920(void)

longlong FUN_141146920(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  longlong *local_78;
  int local_70;
  longlong local_68 [2];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((param_2 == 0) || (*(longlong *)(*param_1 + 0x80) == 0)) {
    return 0;
  }
  local_68[0] = 0;
  local_68[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"SpinnerListItem",0x20);
  uVar9 = *(undefined8 *)(*param_1 + 0x80);
  uVar5 = UMobBaseAnim::GetPrivateStaticClass();
  lVar6 = FUN_142ebcee0(uVar9,local_68,uVar5,0);
  if (lVar6 != 0) {
    lVar7 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1411469fb;
  }
  lVar6 = 0;
LAB_1411469fb:
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (lVar6 != 0) {
    local_78 = (longlong *)0x0;
    local_70 = 0;
    lVar7 = *param_1;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_58 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      if (((local_70 != 0) && (local_78 != (longlong *)0x0)) &&
         ((**(code **)(*local_78 + 0x28))(local_78,0), local_78 != (longlong *)0x0)) {
        local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
      }
    }
    else {
      FUN_140f168d0(plVar8,lVar7,param_5);
      (**(code **)(*plVar8 + 0x30))(plVar8,&local_78);
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      local_58 = (longlong *)FMemory::Realloc(plVar8,0,0);
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
    }
    uVar9 = FUN_1410cc2a0(param_2,local_48);
    FUN_142ebcaa0(lVar6,uVar9,param_3,param_4,&local_78);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    *(undefined8 *)(lVar6 + 0x318) = *(undefined8 *)(*param_1 + 0x60);
    *(undefined8 *)(lVar6 + 0x1a0) = *(undefined8 *)(*param_1 + 0x48);
    *(undefined1 *)(lVar6 + 0x198) = 1;
    FUN_142ed2a90(lVar6,param_2);
    lVar7 = *(longlong *)(lVar6 + 0x170);
    uVar4 = FUN_141191180(*param_1,param_2);
    (**(code **)(lVar7 + 0x38))(lVar6 + 0x170,uVar4);
    FUN_142ed2e40(lVar6,*(undefined1 *)(param_2 + 0xa0));
    if (*(longlong *)(lVar6 + 0x248) != 0) {
      uVar10 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar6 + 0x248),uVar10,L"left");
    }
    lVar7 = *(longlong *)(lVar6 + 800);
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x300) != 0)) {
      uVar10 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar7 + 0x300),uVar10,L"center");
    }
    if (local_70 != 0) {
      if (local_78 == (longlong *)0x0) {
        return lVar6;
      }
      (**(code **)(*local_78 + 0x28))(local_78,0);
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
      }
      local_70 = 0;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
  }
  return lVar6;
}



// FUNCTION 141146c50 FUN_141146c50 body=2413 status=ok
// SIG undefined FUN_141146c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141146c50(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  char *pcVar18;
  undefined1 auStack_338 [32];
  undefined1 local_318 [4];
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  longlong local_308;
  longlong local_300;
  longlong local_2f8 [2];
  undefined4 *local_2e8;
  ulonglong *puStack_2e0;
  undefined8 *local_2d8;
  undefined8 local_2d0;
  longlong *plStack_2c8;
  undefined8 local_2c0;
  longlong *plStack_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong *plStack_288;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined4 *local_248;
  ulonglong *puStack_240;
  undefined1 local_238 [16];
  undefined4 *local_228;
  undefined4 *puStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined4 local_f8 [4];
  undefined1 local_e8 [24];
  undefined1 local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  char local_70 [8];
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_310 = (undefined4)param_1[1];
  local_30c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_318);
  FUN_14172a400(local_318);
  cVar6 = FWeakObjectPtr::IsValid(&local_310);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_310);
    uVar17 = 0;
    iVar4 = *(int *)(lVar8 + 0xc);
    uVar9 = uVar17;
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar16 = iVar4 >> 0x1f & 0xffff;
      uVar7 = iVar4 + uVar16;
      uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar16) * 0x18;
    }
    if (((((*(uint *)(uVar9 + 8) & 0x30000000) == 0) &&
         (lVar8 = FUN_1416f8720((int)param_1[2]), lVar8 != 0)) &&
        (lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14)), lVar8 != 0)) &&
       ((lVar8 = FUN_1416f8720((int)param_1[3]), lVar8 != 0 &&
        (lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x1c)), lVar8 != 0)))) {
      local_314 = 0;
      cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x1270);
      uVar9 = uVar17;
      if (cVar6 != '\0') {
        uVar10 = FWeakObjectPtr::Get(*param_1 + 0x1270);
        uVar7 = ASwitchActor::GetSelectedOption(uVar10);
        uVar9 = (ulonglong)uVar7;
        uVar10 = FWeakObjectPtr::Get(*param_1 + 0x1270);
        uVar7 = FUN_142b47070(uVar10);
        uVar17 = (ulonglong)uVar7;
        uVar10 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x1c));
        uVar11 = FWeakObjectPtr::Get(*param_1 + 0x1270);
        local_314 = FUN_142ff7c90(uVar11,uVar10);
      }
      local_2d0 = 0;
      plStack_2c8 = (longlong *)0x0;
      FText::AsNumber(local_268,uVar9,0,&local_2d0);
      plVar12 = plStack_2c8;
      if (plStack_2c8 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_2c8 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_2c8)(plStack_2c8);
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
      local_2c0 = 0;
      plStack_2b8 = (longlong *)0x0;
      FText::AsNumber(local_280,uVar17,0,&local_2c0);
      plVar12 = plStack_2b8;
      if (plStack_2b8 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_2b8 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_2b8)(plStack_2b8);
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
      local_2f8[0] = 0;
      local_2f8[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2f8,0);
      FGenericPlatformString::Memcpy(local_2f8[0],L"{0}/{1}",0x10);
      plVar12 = (longlong *)FUN_1416f8720((int)param_1[2]);
      lVar8 = FText::FText(local_158,local_280);
      local_300 = lVar8;
      lVar13 = FText::FText(local_140,local_268);
      local_308 = lVar13;
      uVar10 = FText::FromString(local_1c0,local_2f8);
      puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_178,uVar10);
      local_f8[0] = 4;
      local_2d8 = puVar14;
      FText::FText(local_e8,lVar13);
      local_d0 = 1;
      local_c8 = 4;
      FText::FText(local_b8,lVar8);
      local_2e8 = local_f8;
      local_a0 = 1;
      puStack_2e0 = (ulonglong *)local_98;
      local_2b0 = *puVar14;
      local_2a8 = puVar14[1];
      if (local_2a8 != 0) {
        LOCK();
        *(int *)(local_2a8 + 8) = *(int *)(local_2a8 + 8) + 1;
        UNLOCK();
      }
      local_228 = local_2e8;
      puStack_220 = (undefined4 *)puStack_2e0;
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_218,&local_228);
      uVar10 = FText::Format(local_1d8,&local_2b0,uVar10);
      FText::FText(local_208,uVar10);
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1d0 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_1d0)(local_1d0);
          LOCK();
          piVar1 = (int *)((longlong)local_1d0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1d0 + 8))(local_1d0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_218);
      lVar13 = 2;
      lVar8 = 2;
      pcVar18 = local_70;
      do {
        lVar8 = lVar8 + -1;
        pcVar2 = pcVar18 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar18 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar15 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
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
        }
        pcVar18 = pcVar2;
      } while (lVar8 != 0);
      plVar5 = (longlong *)local_2d8[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
      plVar5 = *(longlong **)(local_308 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
      plVar5 = *(longlong **)(local_300 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
      (**(code **)(*plVar12 + 0x2b0))(plVar12,local_208,1,0);
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_200 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar1 = (int *)((longlong)local_200 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_200 + 8))(local_200,1);
          }
        }
      }
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_1b8 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar1 = (int *)((longlong)local_1b8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
          }
        }
      }
      if (local_2f8[0] != 0) {
        FMemory::Free();
      }
      plVar12 = (longlong *)FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
      lVar8 = FText::FText(local_128,local_280);
      local_308 = lVar8;
      lVar15 = FText::FText(local_110,local_268);
      local_300 = lVar15;
      puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_168,*param_1 + 0x1110);
      local_98[0] = 4;
      FText::FText(local_88,lVar15);
      local_70[0] = '\x01';
      local_68 = 4;
      FText::FText(local_58,lVar8);
      local_2e8 = local_98;
      local_40 = 1;
      puStack_2e0 = local_38;
      local_2a0 = *puVar14;
      local_298 = puVar14[1];
      if (local_298 != 0) {
        LOCK();
        *(int *)(local_298 + 8) = *(int *)(local_298 + 8) + 1;
        UNLOCK();
      }
      local_248 = local_2e8;
      puStack_240 = puStack_2e0;
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_238,&local_248);
      uVar10 = FText::Format(local_1a8,&local_2a0,uVar10);
      FText::FText(local_1f0,uVar10);
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1a0 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)local_1a0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_238);
      pcVar18 = &stack0xfffffffffffffff0;
      do {
        lVar13 = lVar13 + -1;
        pcVar2 = pcVar18 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar18 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
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
        }
        pcVar18 = pcVar2;
      } while (lVar13 != 0);
      plVar5 = (longlong *)puVar14[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
      plVar5 = *(longlong **)(local_300 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
      plVar5 = *(longlong **)(local_308 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
      (**(code **)(*plVar12 + 0x2b0))(plVar12,local_1f0,1,0);
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_1e8 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)local_1e8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1e8 + 8))(local_1e8,1);
          }
        }
      }
      local_290 = 0;
      plStack_288 = (longlong *)0x0;
      plVar12 = (longlong *)FUN_1416f8720((int)param_1[3]);
      lVar8 = *plVar12;
      uVar10 = FText::AsNumber(local_190,local_314,0,&local_290);
      (**(code **)(lVar8 + 0x2b0))(plVar12,uVar10,1,0);
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_188 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar1 = (int *)((longlong)local_188 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_188 + 8))(local_188,1);
          }
        }
      }
      plVar12 = plStack_288;
      if (plStack_288 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_288 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_288)(plStack_288);
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
      if (local_278 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_278 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_278)(local_278);
          LOCK();
          piVar1 = (int *)((longlong)local_278 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_278 + 8))(local_278,1);
          }
        }
      }
      if (local_260 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_260 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_260)(local_260);
          LOCK();
          piVar1 = (int *)((longlong)local_260 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_260 + 8))(local_260,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411475c0 FUN_1411475c0 body=157 status=ok
// SIG undefined FUN_1411475c0(void)

void FUN_1411475c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  cVar1 = FUN_14059ee90(*param_1 + 0xe8);
  if ((cVar1 == '\0') || ((*(byte *)(param_1[1] + 0x60) & 1) != 0)) {
    lVar2 = FUN_14059b7e0(*(undefined8 *)(*param_1 + 0x68),1);
    if (lVar2 != 0) {
      lVar3 = FUN_1405a3150(lVar2,local_28,param_1[1],0);
      lVar2 = *param_1;
      FUN_1405913a0(lVar2 + 0xe8,lVar3);
      *(undefined4 *)(lVar2 + 0xf8) = *(undefined4 *)(lVar3 + 0x10);
      FUN_140591060(local_28);
      *(longlong *)(*param_1 + 0x100) = param_1[2];
    }
  }
  return;
}



// FUNCTION 141147660 FUN_141147660 body=714 status=ok
// SIG undefined FUN_141147660(void)

void FUN_141147660(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1411476d0;
  }
  lVar7 = lVar11;
LAB_1411476d0:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140bf3290(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 141147930 FUN_141147930 body=428 status=ok
// SIG undefined FUN_141147930(void)

void FUN_141147930(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  local_30 = 0x13;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"selected_player_id",0x26);
  (**(code **)*param_3)(param_3,&local_38,param_1);
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_30 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"local_user_id",0x1c);
  (**(code **)*param_3)(param_3,&local_38,param_1 + 2);
  if (local_38 != 0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)*param_1;
  plVar1 = (longlong *)FName::FName(local_res8,L"SPARK",1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_res18);
  pwVar5 = L"first_party";
  local_38 = 0;
  if (*plVar2 == *plVar1) {
    pwVar5 = L"shift";
  }
  local_30 = 0;
  if (*pwVar5 != L'\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pwVar5[lVar4] != L'\0');
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,pwVar5,(longlong)(int)uVar3 * 2);
  }
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"join_type",0x14);
  (**(code **)(*param_3 + 8))(param_3,local_28,&local_38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141147ae0 FUN_141147ae0 body=708 status=ok
// SIG undefined FUN_141147ae0(void)

void FUN_141147ae0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar11 = 0;
  local_res8[0] = 0;
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar7 + 0xc);
    lVar7 = lVar11;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar10 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      lVar7 = FUN_140f141d0(*param_1);
      bVar12 = lVar7 == 0;
      if (bVar12) {
        plVar8 = &local_68;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)FUN_142dcf3a0(lVar7,local_38);
        lVar11 = *plVar8;
      }
      plVar4 = (longlong *)plVar8[1];
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8 = plStack_60;
      if ((bVar12) && (plStack_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      if ((!bVar12) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar8 = local_30 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0xb28);
      if ((cVar5 != '\0') && (lVar11 != 0)) {
        lVar7 = *(longlong *)(*param_1 + 0x1238);
        if (lVar7 != 0) {
          local_40 = *(longlong **)(*param_1 + 0x1240);
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_58 = lVar11;
          local_50 = plVar4;
          local_48 = lVar7;
          uVar9 = FWeakObjectPtr::Get(*param_1 + 0xb28);
          FUN_140bf76e0(uVar9,&local_58,&local_48);
          plVar8 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_50)(local_50);
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
          plVar8 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_40)(local_40);
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
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        lVar11 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
    }
  }
  return;
}



// FUNCTION 141147db0 FUN_141147db0 body=1600 status=ok
// SIG undefined FUN_141147db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141147db0(undefined1 *param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  char cVar12;
  bool bVar13;
  char cVar14;
  undefined4 uVar15;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  longlong **local_1b0;
  int local_1a8;
  int local_1a4;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  int local_188;
  int local_184;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  longlong local_d8;
  undefined **local_d0 [2];
  undefined1 local_c0 [16];
  char local_b0;
  int local_a8;
  undefined1 local_a4;
  undefined **local_a0 [2];
  undefined1 local_90 [16];
  char local_80;
  int local_78;
  longlong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_184 = param_5;
  local_188 = param_3;
  uVar5 = FUN_1404b03b0();
  FText::FText(local_120,uVar5);
  if ((*(char *)(param_2 + 4) != '\0') && (param_3 != -1)) {
    local_1b8 = 0xbf800000;
    uVar5 = FUN_142ee98f0(local_108,param_2[2] + (longlong)param_3 * 0x18,
                          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x68),2);
    FText::operator=(local_120,uVar5);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_100 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar10 = (int *)((longlong)local_100 + 0xc);
        iVar1 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  uVar5 = FUN_1404b03b0();
  FText::FText(local_138,uVar5);
  if ((param_5 != -1) && (*(char *)(param_4 + 4) != '\0')) {
    local_1b8 = 0xbf800000;
    uVar5 = FUN_142ee98f0(local_f0,param_4[2] + (longlong)param_5 * 0x18,
                          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x68),2);
    FText::operator=(local_138,uVar5);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_e8 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar10 = (int *)((longlong)local_e8 + 0xc);
        iVar1 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
  }
  bVar13 = *(char *)(param_2 + 4) != '\0';
  lVar7 = *(longlong *)(param_1 + 8);
  local_b0 = 0;
  local_d8 = **(longlong **)(param_1 + 0x10);
  if (bVar13) {
    FUN_140675d60(local_d0,param_2);
  }
  local_a4 = *param_1;
  local_80 = 0;
  cVar14 = *(char *)(param_4 + 4) != '\0';
  local_b0 = bVar13;
  local_a8 = param_3;
  if ((bool)cVar14) {
    FUN_140675d60(local_a0,param_4);
  }
  local_78 = param_5;
  local_198 = (longlong *)0x0;
  local_80 = cVar14;
  local_70 = lVar7;
  plVar6 = (longlong *)FMemory::Realloc(0,0x90,0);
  local_190 = 9;
  local_198 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_1446d0370;
    plVar6[1] = local_d8;
    *(undefined1 *)(plVar6 + 6) = 0;
    cVar12 = cVar14;
    if (local_b0 != '\0') {
      FUN_140675d60(plVar6 + 2,local_d0);
      *(undefined1 *)(plVar6 + 6) = 1;
      cVar12 = local_80;
    }
    *(int *)(plVar6 + 7) = local_a8;
    *(undefined1 *)((longlong)plVar6 + 0x3c) = local_a4;
    *(undefined1 *)(plVar6 + 0xc) = 0;
    cVar14 = '\0';
    if (cVar12 != '\0') {
      FUN_140675d60(plVar6 + 8,local_a0);
      *(undefined1 *)(plVar6 + 0xc) = 1;
      cVar14 = local_80;
    }
    *(int *)(plVar6 + 0xd) = local_78;
    plVar6[0xe] = local_70;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[0x10] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_1446d03b8;
  }
  local_1b0 = &local_198;
  local_1b8 = CONCAT31(local_1b8._1_3_,*param_1);
  lVar7 = FUN_1411b8620(*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x10),local_120,
                        local_138);
  local_180 = lVar7;
  if (local_190 != 0) {
    if (local_198 == (longlong *)0x0) goto LAB_1411480ab;
    (**(code **)(*local_198 + 0x28))(local_198,0);
    if (local_198 != (longlong *)0x0) {
      local_198 = (longlong *)FMemory::Realloc(local_198,0,0);
    }
    local_190 = 0;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
LAB_1411480ab:
  if (cVar14 != '\0') {
    local_80 = '\0';
    local_a0[0] = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(local_90);
    local_a0[0] = &PTR_FUN_1440385e0;
  }
  if (local_b0 != '\0') {
    local_b0 = '\0';
    local_d0[0] = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(local_c0);
  }
  if (lVar7 != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxControllerOptions::OnChangedColumnFocus",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_170,pwVar4 + 2,1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    plVar6 = (longlong *)(lVar7 + 0x318);
    FWeakObjectPtr::operator=(&local_1a8,0);
    local_1a0 = 0;
    FWeakObjectPtr::operator=(&local_1a8,uVar5);
    local_1a0 = local_170;
    local_178 = 0;
    if ((local_170 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_1a8), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_1a0);
    }
    piVar10 = (int *)*plVar6;
    iVar1 = *(int *)(lVar7 + 800);
    for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
      if ((((*piVar11 == local_1a8) && (piVar11[1] == local_1a4)) ||
          ((cVar14 = FWeakObjectPtr::IsValid(piVar11), cVar14 == '\0' &&
           (cVar14 = FWeakObjectPtr::IsValid(&local_1a8), cVar14 == '\0')))) &&
         (*(longlong *)(piVar11 + 2) == local_1a0)) {
        if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_141148246;
        break;
      }
    }
    iVar1 = *(int *)(lVar7 + 800);
    *(int *)(lVar7 + 800) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x324) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    piVar10 = (int *)((longlong)iVar1 * 0x10 + *plVar6);
    *piVar10 = local_1a8;
    piVar10[1] = local_1a4;
    *(longlong *)(piVar10 + 2) = local_1a0;
LAB_141148246:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
    lVar7 = local_180;
    if ((*(char *)(param_2 + 4) != '\0') && (lVar9 = (longlong)local_188, local_188 != -1)) {
      lVar2 = param_2[2];
      local_168 = *(undefined8 *)(lVar2 + lVar9 * 0x18);
      local_160 = *(undefined8 *)(lVar2 + 8 + lVar9 * 0x18);
      local_158 = *(longlong *)(lVar2 + 0x10 + lVar9 * 0x18);
      if (local_158 != 0) {
        LOCK();
        *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
        UNLOCK();
      }
      FUN_142ed2eb0(local_180,&local_168,0);
    }
    if ((*(char *)(param_4 + 4) != '\0') && (lVar9 = (longlong)local_184, local_184 != -1)) {
      lVar2 = param_4[2];
      local_150 = *(undefined8 *)(lVar2 + lVar9 * 0x18);
      local_148 = *(undefined8 *)(lVar2 + 8 + lVar9 * 0x18);
      local_140 = *(longlong *)(lVar2 + 0x10 + lVar9 * 0x18);
      if (local_140 != 0) {
        LOCK();
        *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
        UNLOCK();
      }
      FUN_142ed2eb0(lVar7,&local_150,1);
    }
    uVar15 = FUN_14119e040();
    FUN_142ed36f0(lVar7,uVar15,L"left");
  }
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_130 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar10 = (int *)((longlong)local_130 + 0xc);
      iVar1 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_118 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar10 = (int *)((longlong)local_118 + 0xc);
      iVar1 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  if (*(char *)(param_2 + 4) != '\0') {
    *(undefined1 *)(param_2 + 4) = 0;
    *param_2 = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_2 + 2);
    *param_2 = &PTR_FUN_1440385e0;
  }
  if (*(char *)(param_4 + 4) != '\0') {
    *(undefined1 *)(param_4 + 4) = 0;
    *param_4 = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_4 + 2);
    *param_4 = &PTR_FUN_1440385e0;
  }
  return;
}



// FUNCTION 1411483f0 FUN_1411483f0 body=714 status=ok
// SIG undefined FUN_1411483f0(void)

void FUN_1411483f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_141148460;
  }
  lVar7 = lVar11;
LAB_141148460:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140bcd520(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 1411486c0 FUN_1411486c0 body=917 status=ok
// SIG undefined FUN_1411486c0(void)

void FUN_1411486c0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_c8;
  longlong local_b8;
  longlong local_b0 [2];
  longlong local_a0 [2];
  undefined1 local_90 [40];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0xe50) == '\x01') {
    if (*(longlong **)(lVar4 + 0xb60) != (longlong *)0x0) {
      iVar7 = (**(code **)(**(longlong **)(lVar4 + 0xb60) + 0x2d8))();
      iVar8 = FUN_142eed990(*(undefined8 *)(*param_1 + 0xb60));
      iVar11 = 0;
      if (0 < iVar8) {
        do {
          FUN_142eed030(*(undefined8 *)(*param_1 + 0xb60),local_b0,iVar11 + iVar7);
          lVar4 = local_b0[0];
          if (local_b0[0] != 0) {
            lVar9 = FUN_14133af30();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (*(longlong *)(*param_1 + 0xe28) != 0)) {
              lVar9 = FUN_1411530f0(lVar4);
              local_110 = 0;
              local_108 = 0;
              local_128 = 0xffffffff;
              local_124 = 0;
              local_118 = 0;
              if (lVar9 == 0) {
                local_118 = 0;
              }
              else {
                uVar10 = FSoftObjectPath::FSoftObjectPath(local_68,lVar9);
                FSoftObjectPath::operator=(&local_118,uVar10);
                FWeakObjectPtr::operator=(&local_128,lVar9);
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_124 = CONCAT44(DAT_1464b56f4,(undefined4)local_124);
              }
              FUN_1411e23f0(*(undefined8 *)(*param_1 + 0xe28),&local_d8,&local_128);
              if (local_110 != 0) {
                FMemory::Free();
              }
              FUN_141173e70(lVar4,&local_d8);
              if (local_b8 != 0) {
                LOCK();
                piVar1 = (int *)(local_b8 + 0x48);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  FGraphEvent::Recycle();
                }
              }
              plVar6 = local_c8;
              if (local_c8 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_c8 + 1;
                lVar4 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*local_c8)(local_c8);
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
              FUN_1416f8340(local_d4);
              FUN_1416f8340(local_d8);
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar8);
      }
    }
  }
  else if (((byte)(*(char *)(lVar4 + 0xe50) - 2U) < 3) &&
          (*(longlong **)(lVar4 + 0xb90) != (longlong *)0x0)) {
    iVar7 = (**(code **)(**(longlong **)(lVar4 + 0xb90) + 0x2d8))();
    iVar8 = FUN_142eed990(*(undefined8 *)(*param_1 + 0xb90));
    iVar11 = 0;
    if (0 < iVar8) {
      do {
        FUN_142eed030(*(undefined8 *)(*param_1 + 0xb90),local_a0,iVar11 + iVar7);
        lVar4 = local_a0[0];
        if (local_a0[0] != 0) {
          lVar9 = FUN_14133b140();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (*(longlong *)(*param_1 + 0xe28) != 0)) {
            lVar9 = FUN_141152fc0(lVar4);
            local_e8 = 0;
            local_e0 = 0;
            local_100 = 0xffffffff;
            local_fc = 0;
            local_f0 = 0;
            if (lVar9 == 0) {
              local_f0 = 0;
            }
            else {
              uVar10 = FSoftObjectPath::FSoftObjectPath(local_50,lVar9);
              FSoftObjectPath::operator=(&local_f0,uVar10);
              FWeakObjectPtr::operator=(&local_100,lVar9);
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_fc = CONCAT44(DAT_1464b56f4,(undefined4)local_fc);
            }
            FUN_1411e23f0(*(undefined8 *)(*param_1 + 0xe28),local_90,&local_100);
            if (local_e8 != 0) {
              FMemory::Free();
            }
            FUN_141173d70(lVar4,local_90);
            FUN_140ddef50(local_90);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar8);
    }
  }
  return;
}



// FUNCTION 141148a60 FUN_141148a60 body=1167 status=ok
// SIG undefined FUN_141148a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141148a60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108 [3];
  longlong *plStack_f0;
  longlong *local_e0;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar9 = (longlong *)0x0;
  local_c8 = 0;
  plVar4 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141148ae6;
  }
  plVar4 = plVar9;
LAB_141148ae6:
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x828);
  if (lVar6 == 0) {
    lVar6 = FUN_140f141d0(lVar5);
    lVar5 = *param_1;
  }
  local_118 = *(longlong *)(lVar5 + 0x790);
  plStack_110 = *(longlong **)(lVar5 + 0x798);
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  bVar10 = lVar6 == 0;
  if (bVar10) {
    plVar7 = local_108 + 2;
    local_108[2] = 0;
    plStack_f0 = (longlong *)0x0;
    local_128 = plVar9;
  }
  else {
    plVar7 = (longlong *)FUN_142dcf3a0(lVar6,local_98);
    local_128 = (longlong *)*plVar7;
  }
  uStack_120 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_f0;
  if (bVar10) {
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_f0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
        }
      }
    }
  }
  if ((!bVar10) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_90 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (((plVar4 != (longlong *)0x0) && (local_128 != (longlong *)0x0)) && (local_118 != 0)) {
    local_a8 = local_118;
    plStack_a0 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    local_b8 = (undefined4)local_128;
    uStack_b4 = local_128._4_4_;
    uStack_b0 = (undefined4)uStack_120;
    uStack_ac = uStack_120._4_4_;
    if (uStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
      UNLOCK();
    }
    FUN_140bcaeb0(plVar4,&local_b8,&local_a8);
    plVar4 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    plVar4 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_a0 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
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
  plVar4 = uStack_120;
  local_e0 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  local_d0 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_1446d0358;
    puVar8[1] = local_118;
    puVar8[2] = plStack_110;
    puVar8[3] = local_128;
    puVar8[4] = uStack_120;
    local_e0 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    plVar4 = plVar9;
  }
  local_108[0] = 0;
  local_88[0] = &LAB_14114b9e0;
  local_108[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"send_join",0x14);
  FUN_141170d80(*param_1,local_108,local_88);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
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
  plVar9 = local_d0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar4 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  plVar4 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_e0 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  plVar4 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_120 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_120 + 8))(uStack_120,1);
      }
    }
  }
  plVar4 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_110 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
  return;
}



// FUNCTION 141148ef0 FUN_141148ef0 body=284 status=ok
// SIG undefined FUN_141148ef0(void)

void FUN_141148ef0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      lVar5 = FUN_140f9aee0(*param_1);
      if (lVar5 != 0) {
        cVar3 = FUN_140bca8a0(lVar5);
        if (cVar3 != '\0') {
          uVar2 = *param_1;
          local_28 = 0;
          local_18 = 0;
          puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_48);
          if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = uVar2;
            *puVar6 = &PTR_FUN_143f77b70;
          }
          local_58[0] = &LAB_14114b7f0;
          FUN_142edaae0(*param_1,local_58);
          return;
        }
      }
    }
  }
  FUN_142eb3990(*param_1);
  return;
}



// FUNCTION 141149010 FUN_141149010 body=714 status=ok
// SIG undefined FUN_141149010(void)

void FUN_141149010(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_141149080;
  }
  lVar7 = lVar11;
LAB_141149080:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140ba2740(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 1411492e0 FUN_1411492e0 body=539 status=ok
// SIG undefined FUN_1411492e0(void)

void FUN_1411492e0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar9;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
       (lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar4 != 0)) {
      lVar5 = FUN_140e971d0(*param_1);
      if (lVar5 != 0) {
        lVar6 = FUN_140cff230(lVar5);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0x180) = *(undefined1 *)(*param_1 + 0x86a);
          *(undefined1 *)(lVar6 + 0x28) = 1;
        }
        FUN_140d12e10(lVar5);
        FUN_140d12080(lVar5);
        lVar6 = FUN_140f9aee0(*param_1);
        if (lVar6 != 0) {
          cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x874);
          if ((cVar2 == '\0') || (cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x86c), cVar2 == '\0'))
          {
            if ((*(char *)(*param_1 + 0x87c) == '\0') ||
               (cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x86c), cVar2 == '\0')) {
              FUN_140befde0(lVar6);
            }
            else {
              if (DAT_146b33f38 == 0) {
                FUN_142d7ebe0();
              }
              lVar7 = *(longlong *)(DAT_146b33f38 + 0x58);
              if (lVar7 != 0) {
                uVar8 = FWeakObjectPtr::Get(*param_1 + 0x86c);
                FUN_140bef5c0(lVar6,lVar5,lVar7 + 0xf40,uVar8);
              }
            }
          }
          else {
            lVar7 = FWeakObjectPtr::Get(*param_1 + 0x874);
            if (lVar7 != 0) {
              uVar8 = FWeakObjectPtr::Get(*param_1 + 0x86c);
              FUN_140bef5c0(lVar6,lVar5,lVar7 + 0x220,uVar8);
            }
          }
        }
      }
      lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
      if (lVar4 != 0) {
        FUN_140cd09a0(lVar4,*(undefined1 *)(*param_1 + 0x86b));
      }
    }
  }
  return;
}



// FUNCTION 141149500 FUN_141149500 body=731 status=ok
// SIG undefined FUN_141149500(void)

void FUN_141149500(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_48 [4];
  undefined1 local_28 [16];
  
  local_48[1] = 10;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48[0],10,"mail_type",10,0x3f);
  (**(code **)(*param_3 + 0x18))(param_3,local_48,5);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  lVar3 = FUN_1416f8720(*param_1);
  if (lVar3 != 0) {
    local_48[0] = 0;
    local_48[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_48[0],10,"player_id",10,0x3f);
    (**(code **)*param_3)(param_3,local_48,param_1 + 2);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    local_48[0] = 0;
    local_48[1] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_48[0],0x16,"player_character_guid",0x16,0x3f);
    uVar4 = FUN_1416f8720(*param_1);
    uVar4 = FUN_140cfc220(uVar4,local_28);
    FUN_141682af0(uVar4,local_48 + 2,0);
    (**(code **)(*param_3 + 8))(param_3,local_48,local_48 + 2);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  local_48[0] = 0;
  local_48[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48[0],0x11,"entitlement_guid",0x11,0x3f);
  FUN_141682af0(param_1 + 6,local_48 + 2,0);
  (**(code **)(*param_3 + 8))(param_3,local_48,local_48 + 2);
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x2e) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e) + 0x20))();
    if (cVar2 != '\0') {
      local_48[0] = 0;
      local_48[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_48[0],0x11,"source_player_id",0x11,0x3f);
      (**(code **)*param_3)(param_3,local_48,param_1 + 0x2e);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar5 = (longlong *)FDateTime::UtcNow(local_res8);
  local_48[0] = 0;
  local_48[1] = 0x24;
  lVar3 = *plVar5;
  lVar1 = *(longlong *)(param_1 + 0x28);
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_48[0],0x24,"elapsed_time_before_read_in_seconds",0x24,0x3f);
  (**(code **)(*param_3 + 0x28))(param_3,local_48,(longlong)((double)(lVar3 - lVar1) * 1e-07));
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411497e0 FUN_1411497e0 body=1577 status=ok
// SIG undefined FUN_1411497e0(void)

void FUN_1411497e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  char local_res8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar8 = *param_1;
  plVar20 = (longlong *)0x0;
  if ((int)param_1[1] == 6) {
    iVar17 = *(int *)(lVar8 + 0x818);
    if (iVar17 == 0) {
      uVar6 = 0;
    }
    else if (iVar17 == 3) {
      uVar6 = 3;
    }
    else if (iVar17 == 4) {
      uVar6 = 4;
    }
    else if (iVar17 == 5) {
      uVar6 = 5;
    }
    else {
      uVar6 = 6;
    }
    *(undefined4 *)(param_1 + 1) = uVar6;
  }
  local_res8 = *(char *)(lVar8 + 0x838);
  *(undefined1 *)(lVar8 + 0x838) = 0;
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x898) != *(int *)(lVar8 + 0x8c4)) {
    lVar9 = *(longlong *)(lVar8 + 0x8d0);
    if (*(longlong *)(lVar8 + 0x8d0) == 0) {
      lVar9 = lVar8 + 0x8c8;
    }
    iVar17 = *(int *)(lVar9 + ((longlong)*(int *)(lVar8 + 0x8d8) - 1U & (longlong)(int)param_1[1]) *
                              4);
    if (iVar17 != -1) {
      do {
        piVar14 = (int *)((longlong)iVar17 * 0x20 + *(longlong *)(lVar8 + 0x890));
        if (*piVar14 == (int)param_1[1]) {
          if ((iVar17 != -1) && (plVar21 = (longlong *)(piVar14 + 2), piVar14 != (int *)0x0))
          goto LAB_1411498ca;
          break;
        }
        iVar17 = piVar14[6];
      } while (iVar17 != -1);
    }
  }
  plVar21 = plVar20;
LAB_1411498ca:
  lVar8 = FWeakObjectPtr::Get(lVar8 + 0x5cc);
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
    if ((bVar4) && (plVar21 != (longlong *)0x0)) {
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                (*param_1 + 0x930,0);
      lVar9 = *param_1;
      uVar10 = FUN_140bb7440(lVar8);
      FUN_140d80c90(uVar10,lVar9 + 0x930);
      lVar9 = *param_1;
      iVar17 = (int)param_1[1];
      if (*(int *)(lVar9 + 0x8e8) != *(int *)(lVar9 + 0x914)) {
        lVar11 = *(longlong *)(lVar9 + 0x920);
        if (*(longlong *)(lVar9 + 0x920) == 0) {
          lVar11 = lVar9 + 0x918;
        }
        iVar7 = *(int *)(lVar11 + ((longlong)*(int *)(lVar9 + 0x928) - 1U & (longlong)iVar17) * 4);
        if (iVar7 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar7 * 0x20 + *(longlong *)(lVar9 + 0x8e0));
            if ((int)*plVar15 == iVar17) {
              if (iVar7 != -1) goto LAB_1411499d1;
              break;
            }
            iVar7 = (int)plVar15[3];
          } while (iVar7 != -1);
        }
      }
      plVar15 = plVar20;
LAB_1411499d1:
      plVar1 = plVar15 + 1;
      if (*(int *)(lVar9 + 0x848) != *(int *)(lVar9 + 0x874)) {
        lVar11 = *(longlong *)(lVar9 + 0x880);
        if (*(longlong *)(lVar9 + 0x880) == 0) {
          lVar11 = lVar9 + 0x878;
        }
        iVar7 = *(int *)(lVar11 + ((longlong)*(int *)(lVar9 + 0x888) - 1U & (longlong)iVar17) * 4);
        if (iVar7 != -1) {
          do {
            plVar18 = (longlong *)((longlong)iVar7 * 0x20 + *(longlong *)(lVar9 + 0x840));
            if ((int)*plVar18 == iVar17) {
              if (iVar7 != -1) goto LAB_141149a41;
              break;
            }
            iVar7 = (int)plVar18[3];
          } while (iVar7 != -1);
        }
      }
      plVar18 = plVar20;
LAB_141149a41:
      plVar19 = plVar18 + 1;
      FUN_1411352a0(lVar8,plVar21);
      if ((int)plVar21[1] == (int)plVar15[2]) {
        if (0 < (int)plVar21[1]) {
          lVar8 = 0;
          do {
            plVar3 = *(longlong **)(lVar8 + *plVar21);
            puVar12 = (undefined8 *)
                      (**(code **)(**(longlong **)(lVar8 + *plVar1) + 8))
                                (*(longlong **)(lVar8 + *plVar1),local_88);
            puVar12 = (undefined8 *)*puVar12;
            puVar13 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,&local_98);
            cVar5 = (**(code **)*puVar12)(puVar12,*puVar13);
            plVar3 = (longlong *)CONCAT44(uStack_8c,uStack_90);
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar3 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar14 = (int *)((longlong)plVar3 + 0xc);
                iVar17 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar17 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar3 = local_80;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_80 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar14 = (int *)((longlong)plVar3 + 0xc);
                iVar17 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar17 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            if (cVar5 == '\0') goto LAB_141149b54;
            uVar16 = (int)plVar20 + 1;
            plVar20 = (longlong *)(ulonglong)uVar16;
            lVar8 = lVar8 + 0x10;
          } while ((int)uVar16 < (int)plVar21[1]);
        }
        if (local_res8 == '\0') {
          return;
        }
      }
      else {
LAB_141149b54:
        local_res8 = '\x01';
      }
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(plVar1,plVar21);
      iVar17 = (int)plVar18[2];
      if (iVar17 != 0) {
        plVar20 = (longlong *)(*plVar19 + 8);
        do {
          plVar21 = (longlong *)*plVar20;
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar21 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar14 = (int *)((longlong)plVar21 + 0xc);
              iVar7 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar21 + 8))(plVar21,1);
              }
            }
          }
          plVar20 = plVar20 + 3;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      *(int *)(plVar18 + 2) = 0;
      if (*(int *)((longlong)plVar18 + 0x14) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar19,0);
      }
      if (((int)param_1[1] == 0) && (cVar5 = FUN_141176520(*param_1), cVar5 == '\0')) {
        iVar17 = (int)plVar18[2];
        lVar8 = (longlong)iVar17;
        *(int *)(plVar18 + 2) = iVar17 + 1;
        if (*(int *)((longlong)plVar18 + 0x14) < iVar17 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar19,iVar17);
        }
        lVar9 = *plVar19;
        *(undefined8 *)(lVar9 + lVar8 * 0x18) = 0;
        *(undefined8 *)(lVar9 + 8 + lVar8 * 0x18) = 0;
        *(undefined4 *)(lVar9 + 0x10 + lVar8 * 0x18) = 2;
        iVar17 = (int)plVar18[2];
        lVar8 = (longlong)iVar17;
        *(int *)(plVar18 + 2) = iVar17 + 1;
        if (*(int *)((longlong)plVar18 + 0x14) < iVar17 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar19,iVar17);
        }
        lVar9 = *plVar19;
        *(undefined8 *)(lVar9 + lVar8 * 0x18) = 0;
        *(undefined8 *)(lVar9 + 8 + lVar8 * 0x18) = 0;
        *(undefined4 *)(lVar9 + 0x10 + lVar8 * 0x18) = 3;
      }
      puVar12 = (undefined8 *)*plVar1;
      puVar13 = puVar12 + (longlong)(int)plVar15[2] * 2;
      for (; puVar12 != puVar13; puVar12 = puVar12 + 2) {
        lVar8 = puVar12[1];
        uVar10 = *puVar12;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        iVar17 = (int)plVar18[2];
        lVar9 = (longlong)iVar17;
        *(int *)(plVar18 + 2) = iVar17 + 1;
        if (*(int *)((longlong)plVar18 + 0x14) < iVar17 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar19,iVar17);
        }
        lVar11 = *plVar19;
        *(undefined8 *)(lVar11 + lVar9 * 0x18) = uVar10;
        *(longlong *)(lVar11 + 8 + lVar9 * 0x18) = lVar8;
        *(undefined4 *)(lVar11 + 0x10 + lVar9 * 0x18) = 1;
      }
      lVar8 = plVar18[2];
      iVar17 = 0;
      if ((int)lVar8 != 0) {
        lVar9 = *param_1;
        cVar5 = FUN_142ebdd70(lVar9);
        if (cVar5 == '\0') {
          iVar17 = *(int *)(lVar9 + 0x68c);
        }
        else {
          iVar17 = *(int *)(lVar9 + 0x690);
        }
        iVar17 = ((int)lVar8 + -1) / iVar17;
      }
      *(int *)(*param_1 + 0x814) = iVar17;
      *(undefined4 *)(*param_1 + 0x810) = 0;
      lVar8 = *param_1;
      if ((*(int *)(lVar8 + 0x820) != -1) && (*(int *)(lVar8 + 0x824) != -1)) {
        cVar5 = FUN_142ebdd70(lVar8);
        if (cVar5 == '\0') {
          iVar17 = *(int *)(lVar8 + 0x68c);
        }
        else {
          iVar17 = *(int *)(lVar8 + 0x690);
        }
        lVar8 = *param_1;
        iVar17 = *(int *)(lVar8 + 0x824) * iVar17 + *(int *)(lVar8 + 0x820);
        if ((iVar17 < 0) || ((int)plVar18[2] <= iVar17)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(int *)(lVar8 + 0x810) = *(int *)(lVar8 + 0x824);
        }
        else {
          *(undefined4 *)(lVar8 + 0x824) = 0xffffffff;
          *(undefined4 *)(*param_1 + 0x820) = 0xffffffff;
        }
      }
      FUN_141179dd0(*param_1);
    }
  }
  if (local_res8 != '\0') {
    local_98 = *param_1;
    uStack_90 = (undefined4)param_1[1];
    local_48 = 0;
    local_38 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar12 + 1) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar12 + 0xc) = local_98._4_4_;
      *(undefined4 *)(puVar12 + 2) = uStack_90;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_8c;
    }
    local_78[0] = FUN_14114b680;
    FUN_14208c4f0(*param_1,local_78);
  }
  return;
}



// FUNCTION 141149e10 FUN_141149e10 body=714 status=ok
// SIG undefined FUN_141149e10(void)

void FUN_141149e10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_141149e80;
  }
  lVar7 = lVar11;
LAB_141149e80:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140bf76e0(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 14114a0e0 FUN_14114a0e0 body=227 status=ok
// SIG undefined FUN_14114a0e0(void)

void FUN_14114a0e0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[5];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x2c);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_141172b20(*param_1);
      uVar5 = FUN_140bb74b0(param_1[6]);
      FUN_141170f70(*param_1,uVar5,param_1 + 1);
      iVar1 = *(int *)(*param_1 + 0x818);
      if ((iVar1 == 0) || (iVar1 - 3U < 3)) {
        FUN_14116d520(*param_1,6);
        FUN_141172620(*param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14114a1d0 FUN_14114a1d0 body=714 status=ok
// SIG undefined FUN_14114a1d0(void)

void FUN_14114a1d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14114a240;
  }
  lVar7 = lVar11;
LAB_14114a240:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140bf3110(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 14114a4a0 FUN_14114a4a0 body=407 status=ok
// SIG undefined FUN_14114a4a0(void)

void FUN_14114a4a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  int local_28;
  
  lVar7 = *param_1;
  if (*(longlong *)(lVar7 + 0x318) != 0) {
    plVar5 = (longlong *)param_1[2];
    plVar6 = (longlong *)param_1[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      lVar7 = *param_1;
    }
    FString::PrintfImpl(local_98,L"PlayerProfileImage_%02d_nopack",*(undefined4 *)(lVar7 + 0x34c));
    iVar4 = *(int *)(*param_1 + 0x34c);
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 8))(plVar6,local_88);
    local_78 = *puVar8;
    local_70 = puVar8[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    local_68 = 0;
    uStack_60 = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = plVar6;
    local_50 = plVar5;
    FString::FString(local_38,local_98);
    local_28 = iVar4 + 2;
    FUN_1411f82f0(*(undefined8 *)(*param_1 + 0x318),&local_78);
    FUN_14106efa0(&local_78);
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14114a640 FUN_14114a640 body=52 status=ok
// SIG undefined FUN_14114a640(void)

undefined8 FUN_14114a640(undefined8 param_1,ulonglong param_2)

{
  FUN_141140a90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14114a680 FUN_14114a680 body=66 status=ok
// SIG undefined FUN_14114a680(void)

undefined8 * FUN_14114a680(undefined8 *param_1,ulonglong param_2)

{
  FUN_141140860(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14114a6d0 FUN_14114a6d0 body=65 status=ok
// SIG undefined FUN_14114a6d0(void)

undefined8 * FUN_14114a6d0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x24));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14114a720 FUN_14114a720 body=66 status=ok
// SIG undefined FUN_14114a720(void)

undefined8 * FUN_14114a720(undefined8 *param_1,ulonglong param_2)

{
  FUN_140537630(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14114a770 FUN_14114a770 body=143 status=ok
// SIG undefined FUN_14114a770(void)

undefined8 * FUN_14114a770(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 5);
  plVar4 = (longlong *)param_1[4];
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



// FUNCTION 14114a800 FUN_14114a800 body=77 status=ok
// SIG undefined FUN_14114a800(void)

undefined8 * FUN_14114a800(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0xd4));
  FUN_140ce29d0(param_1 + 3);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14114a850 FUN_14114a850 body=80 status=ok
// SIG undefined FUN_14114a850(void)

undefined8 * FUN_14114a850(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14114a8a0 FUN_14114a8a0 body=80 status=ok
// SIG undefined FUN_14114a8a0(void)

undefined8 * FUN_14114a8a0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14114a8f0 FUN_14114a8f0 body=89 status=ok
// SIG undefined FUN_14114a8f0(void)

undefined8 * FUN_14114a8f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x24));
  FUN_1416f8340(*(undefined4 *)(param_1 + 4));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x1c));
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14114a950 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_d8e34ae39ecb18b94489326e440868a5>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  <lambda_d8e34ae39ecb18b94489326e440868a5>::~<lambda_d8e34ae39ecb18b94489326e440868a5>(param_1 + 1)
  ;
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14114a9a0 FUN_14114a9a0 body=66 status=ok
// SIG undefined FUN_14114a9a0(void)

undefined8 * FUN_14114a9a0(undefined8 *param_1,ulonglong param_2)

{
  FUN_141140960(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14114a9f0 FUN_14114a9f0 body=143 status=ok
// SIG undefined FUN_14114a9f0(void)

undefined8 * FUN_14114a9f0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 4);
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
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14114aa80 FUN_14114aa80 body=343 status=ok
// SIG undefined FUN_14114aa80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14114aa80(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (1 < *(int *)(param_2 + 0x58)) {
    local_98[0] = 0xffffffff;
    if (*(longlong *)(param_1 + 0xb30) != 0) {
      FUN_14170c210(local_98);
    }
    FString::FString(&local_90,param_2 + 0x50);
    uVar3 = local_98[0];
    local_98[0] = 0xffffffff;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    lVar2 = local_90;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_1446d04c0;
      puVar1[1] = local_90;
      *(undefined4 *)(puVar1 + 2) = local_88;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_84;
      *(undefined4 *)(puVar1 + 3) = uVar3;
      uVar3 = 0xffffffff;
      lVar2 = 0;
    }
    local_78[0] = FUN_14114b970;
    FUN_14208c260(param_1,local_78);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar3);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
    FUN_1416f8340(local_98[0]);
  }
  return;
}



// FUNCTION 14114abe0 FUN_14114abe0 body=1535 status=ok
// SIG undefined FUN_14114abe0(void)

undefined8 FUN_14114abe0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_c8;
  undefined4 local_c4;
  int iStack_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  int iStack_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined1 local_18 [16];
  
  lVar6 = 0;
  local_60 = 0;
  local_68 = 0;
  local_78 = *(undefined4 *)(param_1 + 0x1b0);
  local_74 = *(undefined4 *)(param_1 + 0x1b4);
  local_70 = *(int *)(param_1 + 0x1b8);
  local_50 = *(undefined8 *)(param_1 + 0x1c0);
  local_58 = 0;
  FString::FString(local_48,param_1 + 0x1c8);
  FSoftObjectPath::operator=(&local_68,&local_50);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)*(int *)(param_1 + 0x214) * 0x10)
  ;
  local_88 = 0;
  local_80 = 0;
  lVar4 = (longlong)*(int *)(param_1 + 0x210) * 0x50;
  local_90 = 0;
  local_a0 = *(undefined4 *)(lVar4 + 0x18 + lVar3);
  _local_9c = CONCAT44(*(undefined4 *)(lVar4 + 0x20 + lVar3),*(undefined4 *)(lVar4 + 0x1c + lVar3));
  local_38 = *(undefined8 *)(lVar4 + 0x28 + lVar3);
  FString::FString(local_30,lVar3 + lVar4 + 0x30);
  FSoftObjectPath::operator=(&local_90,&local_38);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 0x21c) * 0x10)
  ;
  local_b0 = 0;
  local_a8 = 0;
  lVar4 = (longlong)*(int *)(param_1 + 0x218) * 0x50;
  local_b8 = 0;
  local_c8 = *(undefined4 *)(lVar4 + 0x18 + lVar3);
  _local_c4 = CONCAT44(*(undefined4 *)(lVar4 + 0x20 + lVar3),*(undefined4 *)(lVar4 + 0x1c + lVar3));
  local_20 = *(undefined8 *)(lVar4 + 0x28 + lVar3);
  FString::FString(local_18,lVar3 + lVar4 + 0x30);
  FSoftObjectPath::operator=(&local_b8,&local_20);
  lVar3 = FWeakObjectPtr::Get(&local_78);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != local_70) && (local_68 != 0)) {
      lVar3 = FUN_141796df0(&local_68);
      FWeakObjectPtr::operator=(&local_78,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_70 = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(&local_78);
      if (lVar3 != 0) goto LAB_14114adc3;
    }
  }
  else {
LAB_14114adc3:
    lVar4 = FUN_140680830();
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
      lVar3 = FWeakObjectPtr::Get(&local_a0);
      if (lVar3 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != iStack_98) && (local_90 != 0)) {
          lVar3 = FUN_141796df0(&local_90);
          FWeakObjectPtr::operator=(&local_a0,lVar3);
          if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            _local_9c = CONCAT44(DAT_1464b56f4,local_9c);
          }
          lVar3 = FWeakObjectPtr::Get(&local_a0);
          if (lVar3 != 0) goto LAB_14114ae78;
        }
      }
      else {
LAB_14114ae78:
        lVar4 = FUN_140680830();
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
          lVar3 = FWeakObjectPtr::Get(&local_c8);
          if (lVar3 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != iStack_c0) && (local_b8 != 0)) {
              lVar3 = FUN_141796df0(&local_b8);
              FWeakObjectPtr::operator=(&local_c8,lVar3);
              if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                _local_c4 = CONCAT44(DAT_1464b56f4,local_c4);
              }
              lVar3 = FWeakObjectPtr::Get(&local_c8);
              if (lVar3 != 0) goto LAB_14114af2d;
            }
          }
          else {
LAB_14114af2d:
            lVar4 = FUN_140680830();
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
              lVar3 = FWeakObjectPtr::Get(&local_78);
              if (lVar3 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != local_70) && (local_68 != 0)) {
                  lVar3 = FUN_141796df0(&local_68);
                  FWeakObjectPtr::operator=(&local_78,lVar3);
                  if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    local_70 = DAT_1464b56f4;
                  }
                  lVar3 = FWeakObjectPtr::Get(&local_78);
                  if (lVar3 != 0) goto LAB_14114afda;
                }
LAB_14114b010:
                lVar3 = lVar6;
              }
              else {
LAB_14114afda:
                lVar4 = FUN_140680830();
                if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (!bVar1) goto LAB_14114b010;
              }
              cVar2 = FUN_140677a50(lVar3);
              if (cVar2 != '\0') {
                lVar3 = FWeakObjectPtr::Get(&local_a0);
                if (lVar3 == 0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != iStack_98) && (local_90 != 0)) {
                    lVar3 = FUN_141796df0(&local_90);
                    FWeakObjectPtr::operator=(&local_a0,lVar3);
                    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      _local_9c = CONCAT44(DAT_1464b56f4,local_9c);
                    }
                    lVar3 = FWeakObjectPtr::Get(&local_a0);
                    if (lVar3 != 0) goto LAB_14114b096;
                  }
LAB_14114b0cc:
                  lVar3 = lVar6;
                }
                else {
LAB_14114b096:
                  lVar4 = FUN_140680830();
                  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (!bVar1) goto LAB_14114b0cc;
                }
                cVar2 = FUN_140677a50(lVar3);
                if (cVar2 != '\0') {
                  lVar3 = FWeakObjectPtr::Get(&local_c8);
                  if (lVar3 == 0) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    if ((DAT_1464b56f4 != iStack_c0) && (local_b8 != 0)) {
                      lVar3 = FUN_141796df0(&local_b8);
                      FWeakObjectPtr::operator=(&local_c8,lVar3);
                      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                        LOCK();
                        if (DAT_1464b56f4 == 0) {
                          DAT_1464b56f4 = 0;
                        }
                        UNLOCK();
                        _local_c4 = CONCAT44(DAT_1464b56f4,local_c4);
                      }
                      lVar3 = FWeakObjectPtr::Get(&local_c8);
                      if (lVar3 != 0) goto LAB_14114b152;
                    }
LAB_14114b188:
                    lVar3 = lVar6;
                  }
                  else {
LAB_14114b152:
                    lVar4 = FUN_140680830();
                    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) goto LAB_14114b188;
                  }
                  cVar2 = FUN_140677a50(lVar3);
                  if (cVar2 != '\0') goto LAB_14114b19b;
                }
              }
              uVar5 = 0;
              goto LAB_14114b19d;
            }
          }
        }
      }
    }
  }
LAB_14114b19b:
  uVar5 = 1;
LAB_14114b19d:
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 14114b1e0 FUN_14114b1e0 body=1006 status=ok
// SIG undefined FUN_14114b1e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14114b1e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115 [5];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  iVar4 = *(int *)(param_1 + 0xf10);
  uVar7 = FUN_1404b03b0();
  FText::FText(local_110,uVar7);
  if (0 < iVar4) {
    cVar3 = *(char *)(param_1 + 0xfec);
    if (cVar3 == '\0') {
      FUN_14113c870(*(undefined8 *)(param_1 + 0xf08),(longlong)*(int *)(param_1 + 0xf10),
                    local_115[0],local_115);
      lVar8 = param_1 + 0x1170;
    }
    else if (cVar3 == '\x01') {
      FUN_14113e4a0(*(undefined8 *)(param_1 + 0xf08),(longlong)*(int *)(param_1 + 0xf10),local_116,
                    &local_116);
      lVar8 = param_1 + 0x1188;
    }
    else if (cVar3 == '\x02') {
      FUN_14113d1c0(*(undefined8 *)(param_1 + 0xf08),(longlong)*(int *)(param_1 + 0xf10),local_117,
                    &local_117);
      lVar8 = param_1 + 0x11a0;
    }
    else {
      if (cVar3 != '\x03') goto LAB_14114b2e7;
      FUN_14113db30(*(undefined8 *)(param_1 + 0xf08),(longlong)*(int *)(param_1 + 0xf10),local_118,
                    &local_118);
      lVar8 = param_1 + 0x11b8;
    }
    FText::operator=(local_110,lVar8);
  }
LAB_14114b2e7:
  if (*(longlong *)(param_1 + 0xb58) != 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_b0,L"Sort By: {0}",L"EchoNetMailboxMenu",L"SortByText");
    lVar8 = FText::FText(local_70,local_110);
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_80,local_b0);
    local_58[0] = 4;
    FText::FText(local_48,lVar8);
    local_e8 = *puVar9;
    local_f8 = local_58;
    puStack_f0 = local_28;
    local_e0 = puVar9[1];
    local_30 = '\x01';
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_f8);
    uVar7 = FText::Format(local_98,&local_e8,uVar7);
    FText::FText(local_c8,uVar7);
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
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_d8);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar5 = (longlong *)puVar9[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar5 = *(longlong **)(lVar8 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    FText::operator=(local_110,local_c8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_c0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xb58) + 0x2b0))
              (*(longlong **)(param_1 + 0xb58),local_110,1,0);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_a8 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xb60) != 0) {
    FUN_142f0a7c0(*(longlong *)(param_1 + 0xb60),*(undefined4 *)(param_1 + 0xf10));
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_108 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  return;
}



// FUNCTION 14114b5d0 FUN_14114b5d0 body=118 status=ok
// SIG undefined FUN_14114b5d0(void)

void FUN_14114b5d0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142223710();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = *(longlong *)(lVar2 + 0x140);
  if (lVar2 != 0) {
    lVar3 = AOfflineGameMode::GetPrivateStaticClass();
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
      FUN_140c26870(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 14114b680 FUN_14114b680 body=68 status=ok
// SIG undefined FUN_14114b680(void)

void FUN_14114b680(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x718) != 0) {
    FUN_142ecffe0(*(longlong *)(lVar1 + 0x718));
    *(undefined4 *)(*(longlong *)(*param_1 + 0x718) + 0x274) = 0xffffffff;
    lVar1 = *param_1;
  }
  FUN_14116ed10(lVar1,(int)param_1[1]);
  return;
}



// FUNCTION 14114b6d0 FUN_14114b6d0 body=47 status=ok
// SIG undefined FUN_14114b6d0(void)

void FUN_14114b6d0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*param_1);
    FUN_140cfaa50(uVar2);
    return;
  }
  return;
}



// FUNCTION 14114b700 FUN_14114b700 body=32 status=ok
// SIG undefined FUN_14114b700(void)

undefined8 FUN_14114b700(undefined8 param_1,undefined8 *param_2)

{
  FUN_142dcf3a0(*param_2,param_1);
  return param_1;
}



// FUNCTION 14114b720 FUN_14114b720 body=38 status=ok
// SIG undefined FUN_14114b720(void)

void FUN_14114b720(undefined8 *param_1)

{
  FUN_141172b20(*param_1);
  FUN_1411700e0(*param_1);
  FUN_141172620(*param_1);
  return;
}



// FUNCTION 14114b850 FUN_14114b850 body=118 status=ok
// SIG undefined FUN_14114b850(void)

void FUN_14114b850(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_38 [48];
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xe50) == '\x01') {
    if ((*(longlong *)(lVar1 + 0xe30) != 0) && (*(longlong *)(lVar1 + 0xe38) != 0)) {
      FUN_141152800(lVar1,local_38);
      FUN_141179180(*param_1,local_38,1);
      FUN_140ddef50(local_38);
      return;
    }
  }
  else if ((byte)(*(char *)(lVar1 + 0xe50) - 2U) < 3) {
    FUN_140f080a0(lVar1 + 0xc88);
    return;
  }
  return;
}



// FUNCTION 14114b970 FUN_14114b970 body=55 status=ok
// SIG undefined FUN_14114b970(void)

void FUN_14114b970(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14145fce0(uVar2,param_1,0);
    return;
  }
  return;
}



// FUNCTION 14114bac0 FUN_14114bac0 body=172 status=ok
// SIG undefined FUN_14114bac0(void)

undefined8 FUN_14114bac0(longlong param_1)

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
      cVar2 = FUN_142dcfc60(lVar3);
      goto LAB_14114bb1f;
    }
  }
  cVar2 = '\0';
LAB_14114bb1f:
  if (((*(char *)(param_1 + 0x1258) == '\0') && (cVar2 == '\x03')) &&
     (((*(longlong *)(param_1 + 0xe48) != 0 && (*(char *)(param_1 + 0xe50) == '\x02')) ||
      ((*(longlong *)(param_1 + 0xe40) != 0 && (*(char *)(param_1 + 0xe50) == '\x01')))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14114bb70 FUN_14114bb70 body=191 status=ok
// SIG undefined FUN_14114bb70(void)

void FUN_14114bb70(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(param_1 + 0x7e8) != 0) {
        TBaseMulticastDelegate<void>::Remove(lVar4 + 0xc98,*(undefined8 *)(param_1 + 0x7e8));
        *(undefined8 *)(param_1 + 0x7e8) = 0;
        *(undefined4 *)(param_1 + 0x798) = 0;
        if (*(int *)(param_1 + 0x79c) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x790,0);
        }
      }
      cVar2 = FUN_140bca890(lVar4);
      if (cVar2 != '\0') {
        iVar3 = FUN_140bba5d0(lVar4);
        if (iVar3 != 4) {
          FUN_140ba8040(lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 14114bc30 FUN_14114bc30 body=75 status=ok
// SIG undefined FUN_14114bc30(void)

void FUN_14114bc30(longlong param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7c8);
  if (iVar1 < 2) {
    return;
  }
  *(int *)(param_1 + 0xfe8) = *(int *)(param_1 + 0xfe8) + (uint)param_2 * 2 + -1;
  if (iVar1 <= *(int *)(param_1 + 0xfe8)) {
    *(undefined4 *)(param_1 + 0xfe8) = 0;
    FUN_1411713a0();
    return;
  }
  if (*(int *)(param_1 + 0xfe8) < 0) {
    *(int *)(param_1 + 0xfe8) = iVar1 + -1;
  }
  FUN_1411713a0();
  return;
}



// FUNCTION 14114bc80 FUN_14114bc80 body=65 status=ok
// SIG undefined FUN_14114bc80(void)

void FUN_14114bc80(longlong param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xfec);
  if (cVar1 == '\0') {
    param_2 = param_2 ^ 1;
  }
  else {
    if (cVar1 == '\x01') {
LAB_14114bca2:
      *(byte *)(param_1 + 0xfec) = param_2 * '\x02';
      FUN_14114b1e0();
      return;
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        param_2 = param_2 ^ 1;
        goto LAB_14114bca2;
      }
      goto LAB_14114bcbc;
    }
  }
  *(byte *)(param_1 + 0xfec) = param_2 * '\x02' + '\x01';
LAB_14114bcbc:
  FUN_14114b1e0();
  return;
}



// FUNCTION 14114bcd0 FUN_14114bcd0 body=58 status=ok
// SIG undefined FUN_14114bcd0(void)

void FUN_14114bcd0(longlong param_1)

{
  longlong local_18 [3];
  
  if (*(longlong *)(param_1 + 800) != 0) {
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_142f10960(*(longlong *)(param_1 + 800),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14114bd10 FUN_14114bd10 body=421 status=ok
// SIG undefined FUN_14114bd10(void)

void FUN_14114bd10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  uint uStackX_c;
  
  bVar9 = false;
  if (*(char *)(param_1 + 0x940) != '\0') {
    *(undefined1 *)(param_1 + 0x940) = 0;
    if (*(longlong *)(param_1 + 0x718) != 0) {
      iVar10 = 0;
      iVar4 = FUN_142eb7440();
      if (0 < iVar4) {
        plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
        do {
          lVar5 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x718),iVar10);
          if (lVar5 == 0) {
LAB_14114bddd:
            lVar5 = 0;
LAB_14114bddf:
            bVar3 = false;
          }
          else {
            lVar6 = UMobBaseAnim::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_14114bddd;
            plVar8 = *(longlong **)(lVar5 + 0x330);
            bVar9 = true;
            lVar6 = *(longlong *)(lVar5 + 0x328);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            if (lVar6 == 0) goto LAB_14114bddf;
            bVar3 = true;
          }
          if ((bVar9) && (bVar9 = false, plVar8 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if ((bVar3) && (*(longlong *)(lVar5 + 0x318) != 0)) {
            FUN_1411f76d0();
          }
          iVar10 = iVar10 + 1;
          iVar4 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x718));
        } while (iVar10 < iVar4);
      }
    }
    if (*(longlong *)(param_1 + 0x780) != 0) {
      uVar7 = FUN_140f9aee0(param_1);
      FUN_1410e8d30(*(undefined8 *)(param_1 + 0x780),uVar7);
    }
    if (*(longlong *)(param_1 + 0x788) != 0) {
      uVar7 = FUN_140f9aee0(param_1);
      FUN_1410e8d30(*(undefined8 *)(param_1 + 0x788),uVar7);
      return;
    }
  }
  return;
}



// FUNCTION 14114bec0 FUN_14114bec0 body=138 status=ok
// SIG undefined FUN_14114bec0(void)

undefined8 * FUN_14114bec0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446d0490;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x24));
    FUN_14170c210((longlong)puVar1 + 0x24,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114bf50 FUN_14114bf50 body=110 status=ok
// SIG undefined FUN_14114bf50(void)

undefined8 * FUN_14114bf50(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446d04f0;
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
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114bfc0 FUN_14114bfc0 body=130 status=ok
// SIG undefined FUN_14114bfc0(void)

undefined8 * FUN_14114bfc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446d0538;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    *(undefined1 *)((longlong)puVar1 + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114c050 FUN_14114c050 body=249 status=ok
// SIG undefined FUN_14114c050(void)

undefined8 * FUN_14114c050(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_FUN_1446d0520;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[5] = 0;
  iVar5 = *(int *)(param_1 + 0x30);
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    return puVar2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 5,iVar5,0);
  puVar3 = (undefined8 *)puVar2[5];
  do {
    *puVar3 = *puVar4;
    lVar1 = puVar4[1];
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return puVar2;
}



// FUNCTION 14114c150 FUN_14114c150 body=158 status=ok
// SIG undefined FUN_14114c150(void)

undefined8 * FUN_14114c150(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446d04a8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    FUN_140ce1220(puVar1 + 3,param_1 + 0x18);
    *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)(param_1 + 0xd0);
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xd4));
    FUN_14170c210((longlong)puVar1 + 0xd4,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114c1f0 FUN_14114c1f0 body=136 status=ok
// SIG undefined FUN_14114c1f0(void)

undefined8 * FUN_14114c1f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446d0550;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114c280 FUN_14114c280 body=116 status=ok
// SIG undefined FUN_14114c280(void)

undefined8 * FUN_14114c280(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446d04c0;
    FString::FString(puVar1 + 1,param_1 + 8);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114c300 FUN_14114c300 body=208 status=ok
// SIG undefined FUN_14114c300(void)

undefined8 * FUN_14114c300(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446d04d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x1c));
    FUN_14170c210((longlong)puVar1 + 0x1c,uVar2);
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x20));
    FUN_14170c210(puVar1 + 4,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x24));
    FUN_14170c210((longlong)puVar1 + 0x24,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114c3d0 FUN_14114c3d0 body=102 status=ok
// SIG undefined FUN_14114c3d0(void)

undefined8 * FUN_14114c3d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446d0358;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114c440 FUN_14114c440 body=149 status=ok
// SIG undefined FUN_14114c440(void)

undefined8 * FUN_14114c440(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_140438ef0(0xe8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446d0340;
    *(undefined4 *)(puVar5 + 1) = 0xffffffff;
    uVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar5 + 1,uVar6);
    puVar5[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar5[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar5 + 0x24) = uVar2;
    *(undefined4 *)(puVar5 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar4;
    FUN_140ce1220(puVar5 + 6,param_1 + 0x30);
    return puVar5;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114c4e0 FUN_14114c4e0 body=240 status=ok
// SIG undefined FUN_14114c4e0(void)

undefined8 * FUN_14114c4e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446d0508;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = 0;
    iVar5 = *(int *)(param_1 + 0x28);
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    *(int *)(puVar2 + 5) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 4,iVar5,0);
      puVar3 = (undefined8 *)puVar2[4];
      do {
        *puVar3 = *puVar4;
        lVar1 = puVar4[1];
        puVar3[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14114c5d0 FUN_14114c5d0 body=106 status=ok
// SIG undefined FUN_14114c5d0(void)

void FUN_14114c5d0(longlong param_1)

{
  FUN_141192310();
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (((*(longlong *)(param_1 + 0xb8) != 0 || (*(longlong *)(param_1 + 0xc0) != 0)) ||
      (*(longlong *)(param_1 + 200) != 0)))) {
    FUN_1411790b0(param_1);
    return;
  }
  return;
}



// FUNCTION 14114c640 FUN_14114c640 body=777 status=ok
// SIG undefined FUN_14114c640(void)

void FUN_14114c640(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  
  FUN_141192310();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxAudioOptions::OnContentPanelSelectionChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_48,pwVar4 + 2,1,param_4,param_5,param_6,param_7);
    lVar7 = local_48;
    lVar2 = *(longlong *)(param_1 + 0x80);
    plVar10 = (longlong *)(lVar2 + 0x180);
    FWeakObjectPtr::operator=(&local_40,0);
    local_38 = 0;
    FWeakObjectPtr::operator=(&local_40,param_1);
    local_38 = lVar7;
    if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_40), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_38);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar2 + 0x188);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_40) && (piVar9[1] == local_3c)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_40), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_38)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_14114c7d4;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 0x188);
    *(int *)(lVar2 + 0x188) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_40;
    piVar8[1] = local_3c;
    *(longlong *)(piVar8 + 2) = local_38;
LAB_14114c7d4:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxAudioOptions::OnContentPanelItemClicked",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_48,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x80);
    plVar10 = (longlong *)(lVar2 + 0x1a8);
    FWeakObjectPtr::operator=(&local_40,0);
    local_38 = 0;
    FWeakObjectPtr::operator=(&local_40,param_1);
    local_38 = local_48;
    if ((local_48 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_40), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_38);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar2 + 0x1b0);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_40) && (piVar9[1] == local_3c)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_40), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_38)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_14114c91f;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 0x1b0);
    *(int *)(lVar2 + 0x1b0) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x1b4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_40;
    piVar8[1] = local_3c;
    *(longlong *)(piVar8 + 2) = local_38;
LAB_14114c91f:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  return;
}



// FUNCTION 14114c950 FUN_14114c950 body=477 status=ok
// SIG undefined FUN_14114c950(void)

void FUN_14114c950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
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
  
  FUN_141192310();
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (((lVar6 != 0) && (lVar1 = *(longlong *)(lVar6 + 0x778), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x1b0) != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x1b8);
    *(longlong *)(param_1 + 0xb8) = lVar1;
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x778) + 0x1e8);
    *(longlong *)(param_1 + 0xc0) = lVar6;
    if ((lVar6 != 0) && (lVar1 != 0)) {
      (**(code **)(*(longlong *)(lVar1 + 0x308) + 0x10))
                ((longlong *)(lVar1 + 0x308),0,*(undefined8 *)(param_1 + 0x68),param_4,param_5,
                 param_6,param_7);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x308);
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
      *(undefined8 *)(local_48 + lVar6 * 8) = DAT_146875820;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x308);
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
      *(undefined8 *)(local_88 + lVar6 * 8) = DAT_146875818;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x308);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_88,0);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (&local_88);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (&local_48);
    }
  }
  return;
}



// FUNCTION 14114cb30 FUN_14114cb30 body=522 status=ok
// SIG undefined FUN_14114cb30(void)

void FUN_14114cb30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
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
  
  FUN_141192310();
  FUN_14116b200(param_1,*(undefined8 *)(param_1 + 0xd0));
  FUN_14116b560(param_1,*(undefined8 *)(param_1 + 0xd8));
  FUN_14116b3b0(param_1,*(undefined8 *)(param_1 + 0xe0));
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (((lVar6 != 0) && (lVar1 = *(longlong *)(lVar6 + 0x778), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x1b0) != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x1b8);
    *(longlong *)(param_1 + 0xc0) = lVar1;
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x778) + 0x1e8);
    *(longlong *)(param_1 + 200) = lVar6;
    if ((lVar6 != 0) && (lVar1 != 0)) {
      (**(code **)(*(longlong *)(lVar1 + 0x308) + 0x10))
                ((longlong *)(lVar1 + 0x308),0,*(undefined8 *)(param_1 + 0x68),param_4,param_5,
                 param_6,param_7);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 200) + 0x308);
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
      *(undefined8 *)(local_48 + lVar6 * 8) = DAT_146875820;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x308);
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
      *(undefined8 *)(local_88 + lVar6 * 8) = DAT_146875818;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 200) + 0x308);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_88,0);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (&local_88);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (&local_48);
    }
  }
  return;
}



// FUNCTION 14114cd40 FUN_14114cd40 body=2493 status=ok
// SIG undefined FUN_14114cd40(void)

void FUN_14114cd40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 local_res20 [8];
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198 [12];
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
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
  
  local_1b0 = 0xd;
  lVar10 = 0;
  local_1b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"contentPanel",0x1a);
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  uVar5 = FUN_140ecb410(param_1,&local_1b8,0,6,&local_1c8);
  *(undefined8 *)(param_1 + 0x6a0) = uVar5;
  plVar12 = local_1c8;
  for (iVar11 = (int)local_1c0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6a0) == 0) {
    return;
  }
  cVar4 = FOutputDevice::CanBeUsedOnAnyThread();
  if (cVar4 != '\0') {
    local_1a8 = 0;
    local_1a0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,L"ButtonListItem",0x1e);
    uVar5 = *(undefined8 *)(param_1 + 0x6a0);
    uVar6 = URemnantGameInstance::GetPrivateStaticClass();
    lVar7 = FUN_142ebcee0(uVar5,&local_1a8,uVar6,0);
    if (lVar7 == 0) {
LAB_14114cebe:
      lVar7 = lVar10;
    }
    else {
      lVar8 = URemnantGameInstance::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14114cebe;
    }
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (lVar7 != 0) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_d0,L"Add Splitscreen",L"MultiplayerMenu",L"SplitscreenText");
      FUN_142ed3af0(lVar7,uVar5,0);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_c8 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      puVar9 = (undefined8 *)FName::FName(local_res20,L"OnSplitscreenClicked",1);
      FWeakObjectPtr::operator=(lVar7 + 0x1b0,param_1);
      *(undefined8 *)(lVar7 + 0x1b8) = *puVar9;
    }
  }
  local_198[0] = 0;
  local_198[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198,0);
  FGenericPlatformString::Memcpy(local_198[0],L"ButtonListItem",0x1e);
  uVar5 = *(undefined8 *)(param_1 + 0x6a0);
  local_128 = URemnantGameInstance::GetPrivateStaticClass();
  lVar7 = FUN_142ebcee0(uVar5,local_198,local_128,0);
  if (lVar7 == 0) {
LAB_14114d001:
    lVar7 = lVar10;
  }
  else {
    lVar8 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14114d001;
  }
  if (local_198[0] != 0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Roster",L"MultiplayerMenu",L"RosterText");
    FUN_142ed3af0(lVar7,uVar5,0);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_b0 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    puVar9 = (undefined8 *)FName::FName(local_120,L"OnRosterClicked",1);
    FWeakObjectPtr::operator=(lVar7 + 0x1b0,param_1);
    *(undefined8 *)(lVar7 + 0x1b8) = *puVar9;
  }
  local_198[2] = 0;
  local_198[3] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 2,0);
  FGenericPlatformString::Memcpy(local_198[2],L"ButtonListItem",0x1e);
  uVar5 = *(undefined8 *)(param_1 + 0x6a0);
  local_118 = URemnantGameInstance::GetPrivateStaticClass();
  lVar7 = FUN_142ebcee0(uVar5,local_198 + 2,local_118,0);
  if (lVar7 == 0) {
LAB_14114d141:
    lVar7 = lVar10;
  }
  else {
    lVar8 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14114d141;
  }
  if (local_198[2] != 0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Matchmaking",L"MultiplayerMenu",L"MatchmakingText");
    FUN_142ed3af0(lVar7,uVar5,0);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_98 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    puVar9 = (undefined8 *)FName::FName(local_110,L"OnMatchmakingClicked",1);
    FWeakObjectPtr::operator=(lVar7 + 0x1b0,param_1);
    *(undefined8 *)(lVar7 + 0x1b8) = *puVar9;
  }
  local_198[4] = 0;
  local_198[5] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 4,0);
  FGenericPlatformString::Memcpy(local_198[4],L"ButtonListItem",0x1e);
  uVar5 = *(undefined8 *)(param_1 + 0x6a0);
  local_108 = URemnantGameInstance::GetPrivateStaticClass();
  lVar7 = FUN_142ebcee0(uVar5,local_198 + 4,local_108,0);
  if (lVar7 == 0) {
LAB_14114d27c:
    lVar7 = lVar10;
  }
  else {
    lVar8 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14114d27c;
  }
  if (local_198[4] != 0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"SHiFT",L"MultiplayerMenu",L"ShiftText");
    FUN_142ed3af0(lVar7,uVar5,0);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_80 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    puVar9 = (undefined8 *)FName::FName(local_100,L"OnShiftClicked",1);
    FWeakObjectPtr::operator=(lVar7 + 0x1b0,param_1);
    *(undefined8 *)(lVar7 + 0x1b8) = *puVar9;
  }
  local_198[6] = 0;
  local_198[7] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 6,0);
  FGenericPlatformString::Memcpy(local_198[6],L"ButtonListItem",0x1e);
  uVar5 = *(undefined8 *)(param_1 + 0x6a0);
  local_f8 = URemnantGameInstance::GetPrivateStaticClass();
  lVar7 = FUN_142ebcee0(uVar5,local_198 + 6,local_f8,0);
  if (lVar7 == 0) {
LAB_14114d3b6:
    lVar7 = lVar10;
  }
  else {
    lVar8 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14114d3b6;
  }
  *(longlong *)(param_1 + 0x6a8) = lVar7;
  if (local_198[6] != 0) {
    FMemory::Free();
    lVar7 = *(longlong *)(param_1 + 0x6a8);
  }
  if (lVar7 != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"LAN Games",L"MultiplayerMenu",L"LANGamesText");
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x6a8),uVar5,0);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_68 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    puVar9 = (undefined8 *)FName::FName(local_f0,L"OnLANBrowserClicked",1);
    lVar7 = *(longlong *)(param_1 + 0x6a8);
    FWeakObjectPtr::operator=(lVar7 + 0x1b0,param_1);
    *(undefined8 *)(lVar7 + 0x1b8) = *puVar9;
  }
  local_198[8] = 0;
  local_198[9] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 8,0);
  FGenericPlatformString::Memcpy(local_198[8],L"ButtonListItem",0x1e);
  uVar5 = *(undefined8 *)(param_1 + 0x6a0);
  local_e8 = URemnantGameInstance::GetPrivateStaticClass();
  lVar7 = FUN_142ebcee0(uVar5,local_198 + 8,local_e8,0);
  if (lVar7 != 0) {
    lVar8 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14114d512;
  }
  lVar7 = lVar10;
LAB_14114d512:
  *(longlong *)(param_1 + 0x6b8) = lVar7;
  if (local_198[8] != 0) {
    FMemory::Free();
    lVar7 = *(longlong *)(param_1 + 0x6b8);
  }
  if (lVar7 != 0) {
    FUN_141174aa0(param_1);
    puVar9 = (undefined8 *)FName::FName(local_e0,L"OnNetworkOptionsClicked",1);
    lVar10 = *(longlong *)(param_1 + 0x6b8);
    FWeakObjectPtr::operator=(lVar10 + 0x1b0,param_1);
    *(undefined8 *)(lVar10 + 0x1b8) = *puVar9;
  }
  FUN_1404cf2e0(&local_138,0);
  if ((local_138 != (longlong *)0x0) &&
     (cVar4 = (**(code **)(*local_138 + 0x10))(local_138,9), cVar4 != '\0')) {
    local_198[10] = 0;
    local_198[0xb] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 10,0);
    FGenericPlatformString::Memcpy(local_198[10],L"ButtonListItem",0x1e);
    lVar10 = FUN_14113c510(*(undefined8 *)(param_1 + 0x6a0),local_198 + 10,0);
    if (local_198[10] != 0) {
      FMemory::Free();
    }
    if (lVar10 != 0) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,
                         L"{0}|platform(default=Manage Party,xbox=Manage Party,playstation=Manage Party)"
                         ,L"MultiplayerMenu",L"ManagePartyText");
      FUN_142ed3af0(lVar10,uVar5,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_50 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      puVar9 = (undefined8 *)FName::FName(local_d8,L"OnManagePartyClicked",1);
      FWeakObjectPtr::operator=(lVar10 + 0x1b0,param_1);
      *(undefined8 *)(lVar10 + 0x1b8) = *puVar9;
    }
  }
  plVar12 = local_130;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6a0) + 0x20a) = 2;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_130 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  return;
}



// FUNCTION 14114d700 FUN_14114d700 body=1153 status=ok
// SIG undefined FUN_14114d700(void)

void FUN_14114d700(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong local_res8 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  
  local_res8[0] = param_1;
  lVar6 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x68));
  if (lVar6 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  cVar5 = FUN_141191000(param_1,param_2);
  if (cVar5 == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x31) == '\0') {
    uVar7 = FUN_1410cc2a0(param_2,local_68);
    FUN_1411ba9b0(param_1,uVar7);
    if (local_60 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_60 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)local_60 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_60 + 8))(local_60,1);
    return;
  }
  switch(*(undefined1 *)(param_2 + 0x30)) {
  case 0xa7:
    local_b8 = 0;
    local_b0 = 0;
    FUN_140ee66e0(&local_b8);
    uVar4 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x2ee);
    uVar7 = FName::FName(local_res18,L"OnCrosshairAllyColorFrameChanged",1);
    lVar8 = FUN_141146920(local_res8,param_2,&local_b8,uVar4,uVar7);
    *(longlong *)(param_1 + 200) = lVar8;
    if (lVar8 != 0) {
      FUN_142ed2be0(lVar8,*(undefined1 *)(lVar6 + 0x2ee));
      UMovieScenePropertyTrack::AddSection(param_1,*(undefined8 *)(param_1 + 200));
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_b8);
    break;
  case 0xa8:
    local_a8 = 0;
    local_a0 = 0;
    FUN_140ee66e0(&local_a8);
    uVar4 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x2ec);
    uVar7 = FName::FName(local_res20,L"OnCrosshairNeutralColorFrameChanged",1);
    lVar8 = FUN_141146920(local_res8,param_2,&local_a8,uVar4,uVar7);
    *(longlong *)(param_1 + 0xb8) = lVar8;
    if (lVar8 != 0) {
      FUN_142ed2be0(lVar8,*(undefined1 *)(lVar6 + 0x2ec));
      UMovieScenePropertyTrack::AddSection(param_1,*(undefined8 *)(param_1 + 0xb8));
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_a8);
    break;
  case 0xa9:
    local_98 = 0;
    local_90 = 0;
    FUN_140ee66e0(&local_98);
    uVar4 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x2ed);
    uVar7 = FName::FName(local_88,L"OnCrosshairEnemyColorFrameChanged",1);
    lVar8 = FUN_141146920(local_res8,param_2,&local_98,uVar4,uVar7);
    *(longlong *)(param_1 + 0xc0) = lVar8;
    if (lVar8 != 0) {
      FUN_142ed2be0(lVar8,*(undefined1 *)(lVar6 + 0x2ed));
      UMovieScenePropertyTrack::AddSection(param_1,*(undefined8 *)(param_1 + 0xc0));
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_98);
    break;
  case 0xaa:
    FUN_1411b99c0(param_1,param_2,&LAB_141153d40,&LAB_141175500);
    break;
  case 0xab:
    FUN_1411b99c0(param_1,param_2,&LAB_141153d10,&LAB_1411754c0);
    break;
  case 0xac:
    pwVar10 = L"OnSubsAndCCTextSizeChanged";
    uVar12 = *(undefined4 *)(lVar6 + 0x1c4);
    puVar9 = local_78;
    uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x1c4);
    goto LAB_14114db2e;
  case 0xad:
    pwVar10 = L"OnSubsAndCCBackgroundOpacityChanged";
    uVar12 = *(undefined4 *)(lVar6 + 0x1c8);
    puVar9 = local_70;
    uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x1c8);
    goto LAB_14114db2e;
  case 0xae:
  case 0xaf:
    FUN_1411b99c0(param_1,param_2,FUN_141153cf0,&LAB_1411754a0);
    break;
  case 0xb0:
  case 0xb1:
    FUN_1411b99c0(param_1,param_2,&LAB_141153db0,&LAB_141175580);
    break;
  case 0xb2:
    FUN_1411b99c0(param_1,param_2,&LAB_141153de0,&LAB_1411755c0);
    break;
  case 0xb3:
    FUN_1411b99c0(param_1,param_2,UInspectableComponent::IsOccupied,&LAB_141175630);
    break;
  case 0xb4:
    FUN_1411b99c0(param_1,param_2,&LAB_141153d00,&LAB_1411754b0);
    break;
  case 0xb5:
    pwVar10 = L"OnHeadBobScaleChanged";
    uVar12 = *(undefined4 *)(lVar6 + 0x2f0);
    puVar9 = local_80;
    uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x2f0);
LAB_14114db2e:
    uVar7 = FName::FName(puVar9,pwVar10,1);
    FUN_1411b9ff0(param_1,param_2,uVar11,uVar12,uVar7);
    break;
  case 0xb6:
    FUN_1411b99c0(param_1,param_2,&LAB_1409a07c0,&LAB_141175600);
    break;
  case 0xb7:
    FUN_1411b99c0(param_1,param_2,&LAB_141153e00,&LAB_1411755f0);
    break;
  case 0xb8:
    FUN_1411b99c0(param_1,param_2,UInspectableComponent::IsInTransition,&LAB_141175590);
    break;
  default:
    FUN_141194c00(param_1,param_2);
    break;
  case 0xba:
    FUN_1411b99c0(param_1,param_2,&LAB_141153df0,&LAB_1411755d0);
  }
  return;
}



// FUNCTION 14114dbe0 FUN_14114dbe0 body=1194 status=ok
// SIG undefined FUN_14114dbe0(void)

void FUN_14114dbe0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar7 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x68));
  if (lVar7 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  cVar5 = FUN_141191000(param_1,param_2);
  if (cVar5 == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x31) == '\0') {
    uVar8 = FUN_1410cc2a0(param_2,local_40);
    FUN_1411ba9b0(param_1,uVar8);
    if (local_38 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_38 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar2 = (int *)((longlong)local_38 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_38 + 8))(local_38,1);
    return;
  }
  switch(*(undefined1 *)(param_2 + 0x30)) {
  case 5:
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x44);
    uVar8 = FName::FName(local_res8,L"OnMasterVolumeChanged",1);
    lVar9 = FUN_1411b9ed0(param_1,param_2,uVar4,uVar8);
    *(longlong *)(param_1 + 0xb8) = lVar9;
    if (lVar9 != 0) {
      FUN_142ed2b00(lVar9,*(undefined4 *)(lVar7 + 0x44));
      uVar8 = *(undefined8 *)(param_1 + 0xb8);
LAB_14114e06a:
      FSocketSubsystemSteam::AddSocket(param_1,uVar8);
    }
    break;
  case 6:
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x48);
    uVar8 = FName::FName(local_res20,L"OnMusicVolumeChanged",1);
    lVar9 = FUN_1411b9ed0(param_1,param_2,uVar4,uVar8);
    *(longlong *)(param_1 + 0xc0) = lVar9;
    if (lVar9 != 0) {
      FUN_142ed2b00(lVar9,*(undefined4 *)(lVar7 + 0x48));
      uVar8 = *(undefined8 *)(param_1 + 0xc0);
      goto LAB_14114e06a;
    }
    break;
  case 7:
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x4c);
    uVar8 = FName::FName(local_res18,L"OnSoundEffectsVolumeChanged",1);
    lVar9 = FUN_1411b9ed0(param_1,param_2,uVar4,uVar8);
    *(longlong *)(param_1 + 200) = lVar9;
    if (lVar9 != 0) {
      FUN_142ed2b00(lVar9,*(undefined4 *)(lVar7 + 0x4c));
      uVar8 = *(undefined8 *)(param_1 + 200);
      goto LAB_14114e06a;
    }
    break;
  case 8:
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x50);
    uVar8 = FName::FName(local_78,L"OnVOVolumeChanged",1);
    lVar9 = FUN_1411b9ed0(param_1,param_2,uVar4,uVar8);
    *(longlong *)(param_1 + 0xd0) = lVar9;
    if (lVar9 != 0) {
      FUN_142ed2b00(lVar9,*(undefined4 *)(lVar7 + 0x50));
      uVar8 = *(undefined8 *)(param_1 + 0xd0);
      goto LAB_14114e06a;
    }
    break;
  case 9:
    uVar6 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x68);
    uVar8 = FName::FName(local_70,L"OnSpeakerSetupChanged",1);
    lVar9 = FUN_1411ba390(param_1,param_2,uVar6,uVar8);
    if (lVar9 != 0) {
      uVar6 = *(undefined1 *)(lVar7 + 0x68);
LAB_14114dff7:
      FUN_142ed2be0(lVar9,uVar6);
      UMovieScenePropertyTrack::AddSection(param_1,lVar9);
    }
    break;
  case 10:
    FUN_1411b99c0(param_1,param_2,&LAB_141153e20,&LAB_141175620);
    break;
  case 0xb:
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x70) + 0x69);
    uVar8 = FName::FName(local_68,L"OnMuteAudioOnFocusLossChanged",1);
    lVar9 = FUN_1411ba710(param_1,param_2,cVar5 == '\0',uVar8);
    if (lVar9 != 0) {
      uVar6 = *(char *)(lVar7 + 0x69) == '\0';
      goto LAB_14114dff7;
    }
    break;
  case 0xc:
    break;
  case 0xd:
    uVar8 = FName::FName(local_50,L"OnPushToTalkChanged",1);
    uVar6 = FUN_142d84470(*(undefined8 *)(param_1 + 0x70));
    lVar9 = FUN_1411ba710(param_1,param_2,uVar6,uVar8);
    if (lVar9 != 0) {
      cVar5 = FUN_142d84470(lVar7);
      uVar6 = cVar5 != '\0';
      goto LAB_14114dff7;
    }
    break;
  case 0xe:
    cVar5 = FUN_140d19320(*(undefined8 *)(param_1 + 0x68));
    if (cVar5 != '\0') {
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x54);
      uVar8 = FName::FName(local_48,L"OnVoiceVolumeChanged",1);
      lVar9 = FUN_1411b9ed0(param_1,param_2,uVar4,uVar8);
      *(longlong *)(param_1 + 0xd8) = lVar9;
      if (lVar9 != 0) {
        FUN_142ed2b00(lVar9,*(undefined4 *)(lVar7 + 0x54));
        uVar8 = *(undefined8 *)(param_1 + 0xd8);
        goto LAB_14114e06a;
      }
    }
    break;
  case 0xf:
    if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) &&
       ((DAT_1468536c8 != 0 && (cVar5 = FUN_14059f100(), cVar5 != '\0')))) {
      *(undefined1 *)(param_1 + 0x109) = 1;
      pwVar11 = L"OnEnableWindowsSpatialChanged";
      puVar10 = local_60;
LAB_14114df70:
      uVar6 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x6a);
      uVar8 = FName::FName(puVar10,pwVar11,1);
      lVar9 = FUN_1411ba710(param_1,param_2,uVar6,uVar8);
      if (lVar9 != 0) {
        uVar6 = *(undefined1 *)(lVar7 + 0x6a);
        goto LAB_14114dff7;
      }
    }
    break;
  case 0x10:
    if ((((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) &&
       (cVar5 = FUN_14059f100(), cVar5 == '\0')) {
      *(undefined1 *)(param_1 + 0x109) = 0;
      pwVar11 = L"OnEnableWindowsSpatialChanged";
      puVar10 = local_58;
      goto LAB_14114df70;
    }
    break;
  default:
    goto switchD_14114dcb9_default;
  }
switchD_14114dcb9_default:
  return;
}



// FUNCTION 14114e0c0 FUN_14114e0c0 body=553 status=ok
// SIG undefined FUN_14114e0c0(void)

void FUN_14114e0c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  longlong *local_48;
  
  lVar5 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x68));
  if (lVar5 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  cVar4 = FUN_141191000(param_1,param_2);
  if (cVar4 == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x31) == '\0') {
    uVar6 = FUN_1410cc2a0(param_2,local_50);
    FUN_1411ba9b0(param_1,uVar6);
    if (local_48 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_48 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)local_48 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_48 + 8))(local_48,1);
    return;
  }
  switch(*(undefined1 *)(param_2 + 0x30)) {
  case 0x77:
    FUN_1411b99c0(param_1,param_2,&LAB_141153d80,&LAB_141175540);
    return;
  case 0x78:
    FUN_1411b99c0(param_1,param_2,&LAB_141153d90,&LAB_141175550);
    return;
  case 0x79:
    pwVar8 = L"OnGamepadLeftDeadZoneInnerChanged";
    uVar10 = *(undefined4 *)(lVar5 + 0xec);
    puVar7 = local_res8;
    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xec);
    break;
  case 0x7a:
    pwVar8 = L"OnGamepadLeftDeadZoneOuterChanged";
    uVar10 = *(undefined4 *)(lVar5 + 0xf0);
    puVar7 = local_res18;
    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xf0);
    break;
  case 0x7b:
    pwVar8 = L"OnGamepadMoveAxialDeadZoneScaleChanged";
    uVar10 = *(undefined4 *)(lVar5 + 0x104);
    puVar7 = local_res20;
    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x104);
    break;
  case 0x7c:
    pwVar8 = L"OnGamepadRightDeadZoneInnerChanged";
    uVar10 = *(undefined4 *)(lVar5 + 0xf4);
    puVar7 = local_68;
    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xf4);
    break;
  case 0x7d:
    pwVar8 = L"OnGamepadRightDeadZoneOuterChanged";
    uVar10 = *(undefined4 *)(lVar5 + 0xf8);
    puVar7 = local_60;
    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xf8);
    break;
  case 0x7e:
    pwVar8 = L"OnGamepadLookAxialDeadZoneScaleChanged";
    uVar10 = *(undefined4 *)(lVar5 + 0x100);
    puVar7 = local_58;
    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x100);
    break;
  default:
    goto switchD_14114e19c_default;
  }
  uVar6 = FName::FName(puVar7,pwVar8,1);
  FUN_1411b9ff0(param_1,param_2,uVar9,uVar10,uVar6);
switchD_14114e19c_default:
  return;
}



// FUNCTION 14114e310 FUN_14114e310 body=1188 status=ok
// SIG undefined FUN_14114e310(void)

void FUN_14114e310(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar5 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x68));
  if (lVar5 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  cVar4 = FUN_141191000(param_1,param_2);
  if (cVar4 == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x31) == '\0') {
    uVar6 = FUN_1410cc2a0(param_2,local_58);
    FUN_1411ba9b0(param_1,uVar6);
    if (local_50 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar7 = local_50 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    (**(code **)(*local_50 + 8))(local_50,1);
    return;
  }
  switch(*(undefined1 *)(param_2 + 0x30)) {
  case 99:
    puVar11 = &LAB_141175570;
    pcVar10 = (code *)&LAB_141153da0;
    break;
  case 100:
    puVar11 = &LAB_1411754f0;
    pcVar10 = (code *)&LAB_141153d30;
    break;
  case 0x65:
    pwVar9 = L"OnMouseScaleChanged";
    uVar12 = *(undefined4 *)(lVar5 + 0x38);
    puVar11 = local_res8;
    uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x38);
    goto LAB_14114e45d;
  case 0x66:
    pwVar9 = L"OnMouseADSScaleChanged";
    uVar12 = *(undefined4 *)(lVar5 + 0x168);
    puVar11 = local_res18;
    uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x168);
    goto LAB_14114e45d;
  case 0x67:
    pwVar9 = L"OnMouseVehicleScaleChanged";
    uVar12 = *(undefined4 *)(lVar5 + 0x16c);
    puVar11 = local_res20;
    uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x16c);
LAB_14114e45d:
    FName::FName(puVar11,pwVar9,1);
    FUN_1411574a0(param_1,uVar12);
    FUN_1411574a0(param_1,uVar13);
    FUN_1411b9ff0(param_1,param_2);
    return;
  case 0x68:
    puVar11 = &LAB_141175530;
    pcVar10 = (code *)&LAB_141153d70;
    break;
  case 0x69:
    puVar11 = &LAB_141175560;
    pcVar10 = FUN_140df9990;
    break;
  case 0x6a:
    FName::FName(local_88,L"OnGamepadHipSensitivityLevelChanged",1);
    uVar6 = FUN_1411b9ff0(param_1,param_2);
    *(undefined8 *)(param_1 + 0xf0) = uVar6;
    return;
  case 0x6b:
    FName::FName(local_80,L"OnGamepadZoomedSensitivityLevelChanged",1);
    uVar6 = FUN_1411b9ff0(param_1,param_2);
    *(undefined8 *)(param_1 + 0xf8) = uVar6;
    return;
  case 0x6c:
    FName::FName(local_78,L"OnGamepadVehicleSensitivityLevelChanged",1);
    uVar6 = FUN_1411b9ff0(param_1,param_2);
    *(undefined8 *)(param_1 + 0x100) = uVar6;
    return;
  case 0x6d:
    puVar11 = &LAB_141175520;
    pcVar10 = (code *)&LAB_141153d60;
    break;
  case 0x6e:
    puVar11 = &LAB_141175510;
    pcVar10 = (code *)&LAB_141153d50;
    break;
  case 0x6f:
    puVar11 = &LAB_1411755a0;
    pcVar10 = (code *)&LAB_141153dc0;
    break;
  case 0x70:
    puVar11 = &LAB_1411755b0;
    pcVar10 = (code *)&LAB_141153dd0;
    break;
  case 0x71:
    puVar11 = &LAB_1411754e0;
    pcVar10 = (code *)&LAB_141153d20;
    break;
  case 0x72:
    local_68 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_60 = 3;
    local_68 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      plVar7[2] = (longlong)FUN_141159dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar5;
      *plVar7 = (longlong)&PTR_FUN_143f4d2d8;
    }
    uVar6 = FUN_1411b9ae0(param_1,param_2,FUN_1406589c0,&LAB_1411754d0,&local_68);
    *(undefined8 *)(param_1 + 0xe8) = uVar6;
    if (local_60 != 0) {
      if (local_68 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_68 + 0x28))(local_68,0);
      if (local_68 != (longlong *)0x0) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
      local_60 = 0;
    }
    if (local_68 == (longlong *)0x0) {
      return;
    }
    FMemory::Free(local_68);
    return;
  case 0x73:
    puVar11 = &LAB_141175610;
    pcVar10 = (code *)&LAB_141153e10;
    break;
  case 0x74:
    puVar11 = &LAB_1411755e0;
    pcVar10 = UAnimSequence::HasRootMotion;
    break;
  case 0x75:
    uVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x34);
    uVar6 = FName::FName(local_70,L"OnGlyphModeChanged",1);
    lVar8 = FUN_1411ba390(param_1,param_2,uVar3,uVar6);
    if (lVar8 != 0) {
      FUN_142ed2be0(lVar8,*(undefined1 *)(lVar5 + 0x34));
      UMovieScenePropertyTrack::AddSection(param_1,lVar8);
    }
  default:
    goto switchD_14114e3f4_default;
  }
  FUN_1411b99c0(param_1,param_2,pcVar10,puVar11);
switchD_14114e3f4_default:
  return;
}



// FUNCTION 14114e800 FUN_14114e800 body=3365 status=ok
// SIG undefined FUN_14114e800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14114e800(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  float *pfVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_3b8 [32];
  int local_398;
  char local_388;
  longlong local_380;
  undefined1 local_378 [8];
  longlong *local_370;
  undefined8 local_360;
  undefined8 local_358;
  longlong local_350;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined8 local_330;
  undefined8 local_328;
  longlong local_320;
  undefined1 local_318 [8];
  longlong *local_310;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_260;
  undefined1 local_258 [24];
  undefined8 local_240;
  undefined8 local_238;
  longlong local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  char local_1f8 [8];
  longlong local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0 [32];
  undefined1 local_1c0;
  undefined1 local_1b8 [32];
  undefined1 local_198;
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
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined **local_b8 [2];
  longlong local_a8;
  int local_a0;
  char local_98;
  undefined **local_90 [2];
  longlong local_80;
  int local_78;
  char local_70;
  undefined **local_68 [2];
  longlong local_58;
  int local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  local_1e8 = &local_380;
  local_388 = param_4;
  local_380 = param_2;
  local_1f8[0] = param_4;
  local_1f0 = param_1;
  lVar5 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x68));
  if (lVar5 == 0) {
    return;
  }
  if (local_380 == 0) {
    return;
  }
  cVar4 = FUN_141191000(param_1);
  if (cVar4 == '\0') {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  cVar4 = *(char *)(local_380 + 0x31);
  if ((cVar4 == '\0') &&
     ((*(char *)(param_1 + 0x170) == '\0' || (*(char *)(param_1 + 0x171) != '\0')))) {
    uVar6 = FUN_1410cc2a0(local_380,local_190);
    FUN_1411ba9b0(param_1,uVar6);
    if (local_188 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_188 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_188)(local_188);
    LOCK();
    piVar2 = (int *)((longlong)local_188 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 != 1) {
      return;
    }
    (**(code **)(*local_188 + 8))(local_188,1);
    return;
  }
  if (cVar4 != '\x06') {
    if (cVar4 != '\a') {
      return;
    }
    FUN_1406799c0(param_3,local_90,*(undefined8 *)(local_380 + 0xc0));
    lVar7 = local_80;
    lVar5 = local_380;
    if (local_70 == '\0') {
      return;
    }
    lVar9 = local_80 + (longlong)local_78 * 0x28;
    if (local_80 != lVar9) {
      pfVar13 = (float *)(local_80 + 0x20);
      lVar10 = local_80;
      do {
        cVar4 = FKey::IsGamepadKey(lVar10);
        lVar3 = local_80;
        if ((((cVar4 != '\0') && (*(float *)(lVar5 + 200) == pfVar13[-2])) &&
            (*(float *)(lVar5 + 0xcc) == pfVar13[-1])) && (*(float *)(lVar5 + 0xd0) == *pfVar13)) {
          iVar8 = (int)((lVar10 - lVar7) / 0x28);
          if (iVar8 == -1) break;
          if (param_4 == '\0') {
            lVar5 = (longlong)iVar8;
            uVar6 = FUN_1410cc2a0(local_380,local_d0);
            FText::FText(local_228,uVar6);
            local_210 = *(undefined8 *)(local_80 + lVar5 * 0x28);
            local_208 = *(undefined8 *)(local_80 + 8 + lVar5 * 0x28);
            local_200 = *(longlong *)(local_80 + 0x10 + lVar5 * 0x28);
            if (local_200 != 0) {
              LOCK();
              *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
              UNLOCK();
            }
            iVar8 = *(int *)(param_1 + 0x140);
            *(int *)(param_1 + 0x140) = iVar8 + 1;
            if (*(int *)(param_1 + 0x144) < iVar8 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x138,iVar8);
            }
            lVar5 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x138);
            FText::FText(lVar5,local_228);
            *(undefined8 *)(lVar5 + 0x18) = local_210;
            *(undefined8 *)(lVar5 + 0x20) = local_208;
            *(longlong *)(lVar5 + 0x28) = local_200;
            local_200 = 0;
            local_208 = 0;
            if (local_220 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_220 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_220)(local_220);
                LOCK();
                piVar2 = (int *)((longlong)local_220 + 0xc);
                iVar8 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*local_220 + 8))(local_220,1);
                }
              }
            }
          }
          else {
            if (param_4 == '\x01') {
              lVar5 = (longlong)iVar8;
              uVar6 = FUN_1410cc2a0(local_380,local_100);
              FText::FText(local_288,uVar6);
              local_270 = *(undefined8 *)(lVar3 + lVar5 * 0x28);
              local_268 = *(undefined8 *)(lVar3 + 8 + lVar5 * 0x28);
              local_260 = *(longlong *)(lVar3 + 0x10 + lVar5 * 0x28);
              if (local_260 != 0) {
                LOCK();
                *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
                UNLOCK();
              }
              iVar8 = *(int *)(param_1 + 0x140);
              *(int *)(param_1 + 0x140) = iVar8 + 1;
              if (*(int *)(param_1 + 0x144) < iVar8 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x138,iVar8);
              }
              lVar7 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x138);
              FText::FText(lVar7,local_288);
              *(undefined8 *)(lVar7 + 0x18) = local_270;
              *(undefined8 *)(lVar7 + 0x20) = local_268;
              *(longlong *)(lVar7 + 0x28) = local_260;
              local_260 = 0;
              local_268 = 0;
              if (local_280 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_280 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_280)(local_280);
                  LOCK();
                  piVar2 = (int *)((longlong)local_280 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_280 + 8))(local_280,1);
                  }
                }
              }
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_100);
              uVar6 = FUN_1410cc2a0(local_380,local_e8);
              FText::FText(local_258,uVar6);
              local_240 = *(undefined8 *)(local_80 + lVar5 * 0x28);
              local_238 = *(undefined8 *)(local_80 + 8 + lVar5 * 0x28);
              local_230 = *(longlong *)(local_80 + 0x10 + lVar5 * 0x28);
              if (local_230 != 0) {
                LOCK();
                *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
                UNLOCK();
              }
              iVar8 = *(int *)(param_1 + 0x168);
              *(int *)(param_1 + 0x168) = iVar8 + 1;
              if (*(int *)(param_1 + 0x16c) < iVar8 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x160,iVar8);
              }
              lVar5 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x160);
              FText::FText(lVar5,local_258);
              *(undefined8 *)(lVar5 + 0x18) = local_240;
              *(undefined8 *)(lVar5 + 0x20) = local_238;
              *(longlong *)(lVar5 + 0x28) = local_230;
              local_230 = 0;
              local_238 = 0;
              FUN_1410b46c0(local_258);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_e8);
              break;
            }
            if (param_4 != '\x02') break;
            lVar5 = (longlong)iVar8;
            uVar6 = FUN_1410cc2a0(local_380,local_118);
            FText::FText(local_2b8,uVar6);
            local_2a0 = *(undefined8 *)(local_80 + lVar5 * 0x28);
            local_298 = *(undefined8 *)(local_80 + 8 + lVar5 * 0x28);
            local_290 = *(longlong *)(local_80 + 0x10 + lVar5 * 0x28);
            if (local_290 != 0) {
              LOCK();
              *(int *)(local_290 + 8) = *(int *)(local_290 + 8) + 1;
              UNLOCK();
            }
            iVar8 = *(int *)(param_1 + 0x168);
            *(int *)(param_1 + 0x168) = iVar8 + 1;
            if (*(int *)(param_1 + 0x16c) < iVar8 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x160,iVar8);
            }
            lVar5 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x160);
            FText::FText(lVar5,local_2b8);
            *(undefined8 *)(lVar5 + 0x18) = local_2a0;
            *(undefined8 *)(lVar5 + 0x20) = local_298;
            *(longlong *)(lVar5 + 0x28) = local_290;
            local_290 = 0;
            local_298 = 0;
            local_c8 = local_110;
            if (local_2b0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_2b0 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_2b0)(local_2b0);
                LOCK();
                piVar2 = (int *)((longlong)local_2b0 + 0xc);
                iVar8 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                local_c8 = local_110;
                if (iVar8 == 1) {
                  (**(code **)(*local_2b0 + 8))(local_2b0,1);
                  local_c8 = local_110;
                }
              }
            }
          }
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_c8 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar2 = (int *)((longlong)local_c8 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_c8 + 8))(local_c8,1);
              }
            }
          }
          break;
        }
        lVar10 = lVar10 + 0x28;
        pfVar13 = pfVar13 + 10;
      } while (lVar10 != lVar9);
    }
    if (local_70 == '\0') {
      return;
    }
    local_70 = 0;
    local_90[0] = &PTR__scalar_deleting_destructor__144038610;
    FUN_140676620(&local_80);
    return;
  }
  FUN_140679a20(param_3,local_b8,*(undefined8 *)(local_380 + 0xb8));
  uVar6 = 0;
  if (*(longlong *)(local_380 + 0xd8) != 0) {
    uVar6 = *(undefined8 *)(*(longlong *)(local_380 + 0xd8) + 0xb8);
  }
  FUN_140679a20(*(undefined8 *)(param_1 + 0xf0),local_68,uVar6);
  lVar5 = local_a8;
  if (local_98 != '\0') {
    lVar7 = local_a8 + (longlong)local_a0 * 0x18;
    for (lVar9 = local_a8; lVar9 != lVar7; lVar9 = lVar9 + 0x18) {
      cVar4 = FKey::IsGamepadKey(lVar9);
      if (cVar4 == '\x01') {
        lVar5 = (lVar9 - lVar5) / 6 + (lVar9 - lVar5 >> 0x3f);
        uVar12 = (lVar5 >> 2) - (lVar5 >> 0x3f);
        goto LAB_14114e9cb;
      }
    }
  }
  uVar12 = 0xffffffff;
LAB_14114e9cb:
  iVar8 = -1;
  if ((*(longlong *)(local_380 + 0xd8) != 0) && (iVar8 = -1, local_48 != '\0')) {
    param_4 = local_388;
    for (lVar5 = local_58; local_388 = param_4, lVar5 != (longlong)local_50 * 0x18 + local_58;
        lVar5 = lVar5 + 0x18) {
      cVar4 = FKey::IsGamepadKey(lVar5);
      param_4 = local_388;
      if (cVar4 == '\x01') {
        lVar5 = (lVar5 - local_58) / 6 + (lVar5 - local_58 >> 0x3f);
        iVar8 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
        goto LAB_14114ea36;
      }
    }
    iVar8 = -1;
  }
LAB_14114ea36:
  iVar11 = (int)uVar12;
  if (((*(char *)(param_1 + 0x170) == '\0') || (*(char *)(param_1 + 0x171) != '\0')) &&
     (*(char *)(local_380 + 0x30) != -0x62)) {
    local_1c0 = 0;
    bVar14 = local_48 != '\0';
    if (bVar14) {
      FUN_140675d60(local_1e0,local_68);
    }
    local_198 = 0;
    bVar15 = local_98 != '\0';
    local_1c0 = bVar14;
    if (bVar15) {
      FUN_140675d60(local_1b8,local_b8);
    }
    local_398 = iVar8;
    local_198 = bVar15;
    FUN_141147db0(local_1f8,local_1b8,uVar12 & 0xffffffff,local_1e0);
  }
  lVar5 = local_a8;
  if (iVar11 != -1) {
    if (param_4 == '\0') {
      lVar5 = (longlong)iVar11;
      uVar6 = FUN_1410cc2a0(local_380,local_130);
      FText::FText(local_2e8,uVar6);
      local_2d0 = *(undefined8 *)(local_a8 + lVar5 * 0x18);
      local_2c8 = *(undefined8 *)(local_a8 + 8 + lVar5 * 0x18);
      local_2c0 = *(longlong *)(local_a8 + 0x10 + lVar5 * 0x18);
      if (local_2c0 != 0) {
        LOCK();
        *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 0x140);
      *(int *)(param_1 + 0x140) = iVar8 + 1;
      if (*(int *)(param_1 + 0x144) < iVar8 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x138,iVar8);
      }
      lVar5 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x138);
      FText::FText(lVar5,local_2e8);
      *(undefined8 *)(lVar5 + 0x18) = local_2d0;
      *(undefined8 *)(lVar5 + 0x20) = local_2c8;
      *(longlong *)(lVar5 + 0x28) = local_2c0;
      local_2c0 = 0;
      local_2c8 = 0;
      if (local_2e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_2e0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_2e0)(local_2e0);
          LOCK();
          piVar2 = (int *)((longlong)local_2e0 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_2e0 + 8))(local_2e0,1);
          }
        }
      }
    }
    else if (param_4 == '\x01') {
      lVar7 = (longlong)iVar11;
      uVar6 = FUN_1410cc2a0(local_380,local_160);
      FText::FText(local_348,uVar6);
      local_330 = *(undefined8 *)(lVar5 + lVar7 * 0x18);
      local_328 = *(undefined8 *)(lVar5 + 8 + lVar7 * 0x18);
      local_320 = *(longlong *)(lVar5 + 0x10 + lVar7 * 0x18);
      if (local_320 != 0) {
        LOCK();
        *(int *)(local_320 + 8) = *(int *)(local_320 + 8) + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 0x140);
      *(int *)(param_1 + 0x140) = iVar8 + 1;
      if (*(int *)(param_1 + 0x144) < iVar8 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x138,iVar8);
      }
      lVar5 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x138);
      FText::FText(lVar5,local_348);
      *(undefined8 *)(lVar5 + 0x18) = local_330;
      *(undefined8 *)(lVar5 + 0x20) = local_328;
      *(longlong *)(lVar5 + 0x28) = local_320;
      local_320 = 0;
      local_328 = 0;
      if (local_340 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_340 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_340)(local_340);
          LOCK();
          piVar2 = (int *)((longlong)local_340 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_340 + 8))(local_340,1);
          }
        }
      }
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_158 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar2 = (int *)((longlong)local_158 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
          }
        }
      }
      uVar6 = FUN_1410cc2a0(local_380,local_148);
      FText::FText(local_318,uVar6);
      local_300 = *(undefined8 *)(local_a8 + lVar7 * 0x18);
      local_2f8 = *(undefined8 *)(local_a8 + 8 + lVar7 * 0x18);
      local_2f0 = *(longlong *)(local_a8 + 0x10 + lVar7 * 0x18);
      if (local_2f0 != 0) {
        LOCK();
        *(int *)(local_2f0 + 8) = *(int *)(local_2f0 + 8) + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 0x168);
      *(int *)(param_1 + 0x168) = iVar8 + 1;
      if (*(int *)(param_1 + 0x16c) < iVar8 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x160,iVar8);
      }
      lVar5 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x160);
      FText::FText(lVar5,local_318);
      *(undefined8 *)(lVar5 + 0x18) = local_300;
      *(undefined8 *)(lVar5 + 0x20) = local_2f8;
      *(longlong *)(lVar5 + 0x28) = local_2f0;
      local_2f0 = 0;
      local_2f8 = 0;
      local_128 = local_140;
      if (local_310 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_310 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_310)(local_310);
          LOCK();
          piVar2 = (int *)((longlong)local_310 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_128 = local_140;
          if (iVar8 == 1) {
            (**(code **)(*local_310 + 8))(local_310,1);
            local_128 = local_140;
          }
        }
      }
    }
    else {
      if (param_4 != '\x02') goto LAB_14114ef6d;
      lVar5 = (longlong)iVar11;
      uVar6 = FUN_1410cc2a0(local_380,local_178);
      FText::FText(local_378,uVar6);
      local_360 = *(undefined8 *)(local_a8 + lVar5 * 0x18);
      local_358 = *(undefined8 *)(local_a8 + 8 + lVar5 * 0x18);
      local_350 = *(longlong *)(local_a8 + 0x10 + lVar5 * 0x18);
      if (local_350 != 0) {
        LOCK();
        *(int *)(local_350 + 8) = *(int *)(local_350 + 8) + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 0x168);
      *(int *)(param_1 + 0x168) = iVar8 + 1;
      if (*(int *)(param_1 + 0x16c) < iVar8 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x160,iVar8);
      }
      lVar5 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x160);
      FText::FText(lVar5,local_378);
      *(undefined8 *)(lVar5 + 0x18) = local_360;
      *(undefined8 *)(lVar5 + 0x20) = local_358;
      *(longlong *)(lVar5 + 0x28) = local_350;
      local_350 = 0;
      local_358 = 0;
      local_128 = local_170;
      if (local_370 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_370 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_370)(local_370);
          LOCK();
          piVar2 = (int *)((longlong)local_370 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_128 = local_170;
          if (iVar8 == 1) {
            (**(code **)(*local_370 + 8))(local_370,1);
            local_128 = local_170;
          }
        }
      }
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_128 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
  }
LAB_14114ef6d:
  if (local_48 != '\0') {
    local_48 = '\0';
    local_68[0] = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_58);
    local_68[0] = &PTR_FUN_1440385e0;
  }
  if (local_98 != '\0') {
    local_98 = 0;
    local_b8[0] = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_a8);
  }
  return;
}



// FUNCTION 14114f530 FUN_14114f530 body=3260 status=ok
// SIG undefined FUN_14114f530(void)

void FUN_14114f530(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  int *piVar15;
  wchar_t *pwVar16;
  int iVar17;
  int iVar18;
  int local_178;
  int local_174;
  longlong local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined1 local_118 [24];
  undefined1 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined8 local_78;
  undefined2 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined1 local_40;
  undefined8 local_38;
  undefined2 local_30;
  
  pwVar16 = (wchar_t *)0x0;
  *(undefined8 *)(param_1 + 0x70) = param_5;
  *(longlong *)(param_1 + 0x78) = param_6;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  *(longlong *)(param_1 + 0xc0) = param_3;
  pwVar9 = pwVar16;
  if (param_3 != 0) {
    pwVar9 = *(wchar_t **)(param_3 + 0x178);
  }
  *(wchar_t **)(param_1 + 0x80) = pwVar9;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0x1b0) != 0)) {
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_3 + 0x1b8);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_3 + 0x1e8);
    local_158 = 0;
    local_150 = 0x28;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"contentSubMenu.secondaryHintWrapperLeft",0x50);
    local_168 = (longlong *)0x0;
    local_160 = 0;
    uVar6 = FUN_140ecba50(*(undefined8 *)(param_1 + 0xc0),&local_158,0,6,&local_168);
    *(undefined8 *)(param_1 + 0xd8) = uVar6;
    plVar11 = local_168;
    for (iVar18 = (int)local_160; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    local_138 = 0;
    local_130 = 0x29;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"contentSubMenu.secondaryHintWrapperRight",0x52);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    uVar6 = FUN_140ecba50(*(undefined8 *)(param_1 + 0xc0),&local_138,0,6,&local_148);
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    plVar11 = local_148;
    for (iVar18 = (int)local_140; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    if ((((*(longlong *)(param_1 + 0xd0) != 0) && (*(longlong *)(param_1 + 200) != 0)) &&
        (*(longlong *)(param_1 + 0xd8) != 0)) && (*(longlong *)(param_1 + 0xe0) != 0)) {
      plVar11 = (longlong *)(*(longlong *)(param_1 + 200) + 0x308);
      (**(code **)(*plVar11 + 0x10))(plVar11,0,*(undefined8 *)(param_1 + 0x68));
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0xd0) + 0x308);
      (**(code **)(*plVar11 + 0x10))(plVar11,0,*(undefined8 *)(param_1 + 0x68));
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 0x308);
      (**(code **)(*plVar11 + 0x10))(plVar11,0,*(undefined8 *)(param_1 + 0x68));
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0xe0) + 0x308);
      (**(code **)(*plVar11 + 0x10))(plVar11,0,*(undefined8 *)(param_1 + 0x68));
      local_68 = 0;
      local_60 = 0;
      uVar6 = FUN_1404b03b0();
      FText::FText(local_58,uVar6);
      uVar3 = local_60;
      lVar14 = (longlong)(int)local_60;
      local_38 = 0;
      local_30 = 1;
      local_40 = 1;
      iVar18 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar18);
      if (local_60._4_4_ < iVar18) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_68,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_68 + lVar14 * 8) = DAT_146875820;
      plVar11 = (longlong *)(*(longlong *)(param_1 + 200) + 0x308);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_68,0);
      local_a8 = 0;
      local_a0 = 0;
      uVar6 = FUN_1404b03b0();
      FText::FText(local_98,uVar6);
      uVar3 = local_a0;
      lVar14 = (longlong)(int)local_a0;
      local_78 = 0;
      local_70 = 1;
      local_80 = 1;
      iVar18 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,iVar18);
      if (local_a0._4_4_ < iVar18) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_a8,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_a8 + lVar14 * 8) = DAT_146875818;
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0xd0) + 0x308);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_a8,0);
      local_e8 = 0;
      local_e0 = 0;
      uVar6 = FUN_1404b03b0();
      FText::FText(local_d8,uVar6);
      uVar3 = local_e0;
      lVar14 = (longlong)(int)local_e0;
      local_b8 = 0;
      local_b0 = 1;
      local_c0 = 1;
      iVar18 = (int)local_e0 + 1;
      local_e0 = CONCAT44(local_e0._4_4_,iVar18);
      if (local_e0._4_4_ < iVar18) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_e8,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_e8 + lVar14 * 8) = DAT_146875830;
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 0x308);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_e8,0);
      local_128 = 0;
      local_120 = 0;
      uVar6 = FUN_1404b03b0();
      FText::FText(local_118,uVar6);
      uVar3 = local_120;
      lVar14 = (longlong)(int)local_120;
      local_f8 = 0;
      local_f0 = 1;
      local_100 = 1;
      iVar18 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,iVar18);
      if (local_120._4_4_ < iVar18) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_128,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_128 + lVar14 * 8) = DAT_146875828;
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0xe0) + 0x308);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_128,0);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (&local_128);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (&local_e8);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (&local_a8);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>();
    }
  }
  if ((*(longlong *)(param_1 + 0x68) == 0) ||
     (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x5b8), lVar14 == 0))
  goto LAB_14114ff2d;
  lVar7 = FUN_140681420();
  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (*(longlong *)(param_1 + 0x30) == 0)) goto LAB_14114ff2d;
  FUN_141156320(*(longlong *)(param_1 + 0x30) + 0x6d0);
  FUN_141156320(*(longlong *)(param_1 + 0x30) + 0x6f8);
  FUN_141156320(*(longlong *)(param_1 + 0x30) + 0x6a8);
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar8 = FWeakObjectPtr::Get();
  if (lVar8 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar7 + 0x6d8)) || (*(longlong *)(lVar7 + 0x6e0) == 0))
    goto LAB_14114ff2d;
    lVar8 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7 + 0x6d0,lVar8);
    if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar7 + 0x6d8) = DAT_1464b56f4;
    }
    lVar8 = FWeakObjectPtr::Get();
    if (lVar8 == 0) goto LAB_14114ff2d;
  }
  lVar7 = FUN_140680770();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14114ff2d;
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar8 = FWeakObjectPtr::Get();
  if (lVar8 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar7 + 0x700)) || (*(longlong *)(lVar7 + 0x708) == 0))
    goto LAB_14114ff2d;
    lVar8 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7 + 0x6f8,lVar8);
    if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar7 + 0x700) = DAT_1464b56f4;
    }
    lVar8 = FWeakObjectPtr::Get();
    if (lVar8 == 0) goto LAB_14114ff2d;
  }
  lVar7 = FUN_140680770();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14114ff2d;
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar8 = FWeakObjectPtr::Get();
  if (lVar8 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar7 + 0x6b0)) || (*(longlong *)(lVar7 + 0x6b8) == 0))
    goto LAB_14114ff2d;
    lVar8 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7 + 0x6a8,lVar8);
    if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar7 + 0x6b0) = DAT_1464b56f4;
    }
    lVar8 = FWeakObjectPtr::Get();
    if (lVar8 == 0) goto LAB_14114ff2d;
  }
  lVar7 = FUN_140680770();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14114ff2d;
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar8 = lVar7 + 0x6d0;
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(lVar8);
  if (pwVar9 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x6d8)) && (*(longlong *)(lVar7 + 0x6e0) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar8,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x6d8) = DAT_1464b56f4;
      }
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(lVar8);
      if (pwVar9 != (wchar_t *)0x0) goto LAB_14114fcf7;
    }
LAB_14114fd2d:
    pwVar9 = pwVar16;
  }
  else {
LAB_14114fcf7:
    lVar7 = FUN_140680770();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14114fd2d;
  }
  uVar6 = FUN_14067a470(lVar14,pwVar9);
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar8 = lVar7 + 0x6f8;
  *(undefined8 *)(param_1 + 0xe8) = uVar6;
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(lVar8);
  if (pwVar9 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x700)) && (*(longlong *)(lVar7 + 0x708) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar8,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x700) = DAT_1464b56f4;
      }
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(lVar8);
      if (pwVar9 != (wchar_t *)0x0) goto LAB_14114fdc1;
    }
LAB_14114fdf7:
    pwVar9 = pwVar16;
  }
  else {
LAB_14114fdc1:
    lVar7 = FUN_140680770();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14114fdf7;
  }
  uVar6 = FUN_14067a470(lVar14,pwVar9);
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar8 = lVar7 + 0x6a8;
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(lVar8);
  if (pwVar9 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x6b0)) && (*(longlong *)(lVar7 + 0x6b8) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar8,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x6b0) = DAT_1464b56f4;
      }
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(lVar8);
      if (pwVar9 != (wchar_t *)0x0) goto LAB_14114fe8b;
    }
LAB_14114fec1:
    pwVar9 = pwVar16;
  }
  else {
LAB_14114fe8b:
    lVar7 = FUN_140680770();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14114fec1;
  }
  lVar14 = FUN_14067a470(lVar14,pwVar9);
  *(longlong *)(param_1 + 0xf8) = lVar14;
  if (((lVar14 != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) &&
     (*(longlong *)(param_1 + 0xf0) != 0)) {
    cVar4 = FUN_140677a50();
    if (((cVar4 == '\0') || (cVar4 = FUN_140677a50(), cVar4 == '\0')) ||
       (cVar4 = FUN_140677a50(), cVar4 == '\0')) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    *(byte *)(param_1 + 0x170) = bVar5;
    *(byte *)(param_1 + 0x171) = bVar5 ^ 1;
  }
LAB_14114ff2d:
  lVar14 = *(longlong *)(param_1 + 0x70);
  if (lVar14 != 0) {
    iVar18 = *(int *)(lVar14 + 0x15c);
    if ((iVar18 < 0) || (*(int *)(param_1 + 0x180) <= iVar18)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      iVar18 = 0;
    }
    *(int *)(param_1 + 0x214) = iVar18;
    iVar12 = *(int *)(lVar14 + 0x164);
    if ((iVar12 < 0) || (*(int *)(param_1 + 400) <= iVar12)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      iVar12 = 0;
    }
    *(int *)(param_1 + 0x21c) = iVar12;
    if ((iVar18 < 0) || (*(int *)(param_1 + 0x180) <= iVar18)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar17 = *(int *)(lVar14 + 0x158);
      *(int *)(param_1 + 0x210) = iVar17;
      if ((iVar17 < 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x178) + 8 + (longlong)iVar18 * 0x10) <= iVar17)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        iVar17 = 0;
      }
      *(int *)(param_1 + 0x210) = iVar17;
    }
    if ((iVar12 < 0) || (*(int *)(param_1 + 400) <= iVar12)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar18 = *(int *)(lVar14 + 0x160);
      *(int *)(param_1 + 0x218) = iVar18;
      if ((iVar18 < 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x188) + 8 + (longlong)iVar12 * 0x10) <= iVar18)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        iVar18 = 0;
      }
      *(int *)(param_1 + 0x218) = iVar18;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x20a) = 1;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar16 = pwVar2;
    }
    FName::FName(&param_6,pwVar16 + 2,1);
    lVar7 = param_6;
    lVar14 = *(longlong *)(param_1 + 0x80);
    plVar11 = (longlong *)(lVar14 + 0x180);
    FWeakObjectPtr::operator=(&local_178,0);
    local_170 = 0;
    FWeakObjectPtr::operator=(&local_178,param_1);
    local_170 = lVar7;
    if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_178), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_170);
    }
    piVar13 = (int *)*plVar11;
    iVar18 = *(int *)(lVar14 + 0x188);
    for (piVar15 = piVar13; piVar15 != piVar13 + (longlong)iVar18 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_178) && (piVar15[1] == local_174)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar15), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_178), cVar4 == '\0')))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (*(longlong *)(piVar15 + 2) == local_170)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        if ((int)((longlong)piVar15 - (longlong)piVar13 >> 4) != -1) goto LAB_1411501b0;
        break;
      }
    }
    iVar18 = *(int *)(lVar14 + 0x188);
    *(int *)(lVar14 + 0x188) = iVar18 + 1;
    if (*(int *)(lVar14 + 0x18c) < iVar18 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar18);
    }
    piVar13 = (int *)((longlong)iVar18 * 0x10 + *plVar11);
    *piVar13 = local_178;
    piVar13[1] = local_174;
    *(longlong *)(piVar13 + 2) = local_170;
LAB_1411501b0:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
  }
  FUN_141171b60(param_1);
  FUN_141171a30(param_1,0);
  return;
}



// FUNCTION 1411501f0 FUN_1411501f0 body=134 status=ok
// SIG undefined FUN_1411501f0(void)

void FUN_1411501f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1446d0400;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    puVar2[10] = *(undefined8 *)(param_1 + 0x50);
    *puVar2 = &PTR_GetPoolName_1446d0448;
  }
  return;
}



// FUNCTION 141150280 FUN_141150280 body=179 status=ok
// SIG undefined FUN_141150280(void)

void FUN_141150280(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446d0370;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 6) = 0;
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_140675d60(puVar1 + 2);
      *(undefined1 *)(puVar1 + 6) = 1;
    }
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)((longlong)puVar1 + 0x3c) = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)(puVar1 + 0xc) = 0;
    if (*(char *)(param_1 + 0x60) != '\0') {
      FUN_140675d60(puVar1 + 8);
      *(undefined1 *)(puVar1 + 0xc) = 1;
    }
    *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_1 + 0x68);
    puVar1[0xe] = *(undefined8 *)(param_1 + 0x70);
    puVar1[0x10] = *(undefined8 *)(param_1 + 0x80);
    *puVar1 = &PTR_GetPoolName_1446d03b8;
  }
  return;
}



// FUNCTION 141150340 FUN_141150340 body=87 status=ok
// SIG undefined FUN_141150340(void)

void FUN_141150340(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_14114b910;
  FUN_14204c280(local_58);
  thunk_FUN_1411b6170(param_1);
  return;
}



// FUNCTION 1411503a0 FUN_1411503a0 body=139 status=ok
// SIG undefined FUN_1411503a0(void)

void FUN_1411503a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 400) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 400) + 800))();
      lVar1 = *(longlong *)(param_1 + 0xc0);
    }
    if (*(longlong **)(lVar1 + 0x198) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x198) + 800))();
      lVar1 = *(longlong *)(param_1 + 0xc0);
    }
    if (*(longlong **)(lVar1 + 0x1a0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x1a0) + 800))();
      lVar1 = *(longlong *)(param_1 + 0xc0);
    }
    if (*(longlong **)(lVar1 + 0x1a8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x1a8) + 800))();
    }
  }
  thunk_FUN_1411b6170(param_1);
  return;
}



// FUNCTION 141150430 FUN_141150430 body=411 status=ok
// SIG undefined FUN_141150430(void)

undefined8 * FUN_141150430(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 != 0) {
    lVar5 = UGNavigationHeaderItem::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(int *)(lVar7 + 0x7b0) != 0)) {
      FUN_142ebdd00(param_3);
      FUN_142ebdcf0(param_3);
      FUN_142ebdcd0(param_3);
      cVar2 = UNF_CustomizationStatics::IsWeaponType(param_3);
      cVar3 = UChaosVehicleMovementComponent::GetUseAutoGears(param_1);
      cVar4 = FUN_142ebda90();
      if (cVar3 == '\0') {
        *param_2 = 0;
        param_2[1] = 0;
        if (cVar4 == '\0') {
          pwVar8 = L"disabled";
          if (cVar2 != '\0') {
            pwVar8 = L"focusedDisabled";
          }
          if (*pwVar8 == L'\0') {
            return param_2;
          }
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (pwVar8[lVar7] != L'\0');
        }
        else {
          pwVar8 = L"checkedDisabled";
          if (cVar2 != '\0') {
            pwVar8 = L"checkedFocusedDisabled";
          }
          if (*pwVar8 == L'\0') {
            return param_2;
          }
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (pwVar8[lVar7] != L'\0');
        }
      }
      else {
        pwVar8 = L"lockedDisabled";
        if (cVar2 != '\0') {
          pwVar8 = L"lockedFocusedDisabled";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar8 == L'\0') {
          return param_2;
        }
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pwVar8[lVar7] != L'\0');
      }
      iVar6 = (int)lVar7 + 1;
      *(int *)(param_2 + 1) = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      FGenericPlatformString::Memcpy(*param_2,pwVar8,(longlong)iVar6 * 2);
      return param_2;
    }
  }
  FUN_142eb2df0(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 1411505d0 FUN_1411505d0 body=858 status=ok
// SIG undefined FUN_1411505d0(void)

undefined8 * FUN_1411505d0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  
  cVar1 = FUN_142ebdd00(param_3);
  cVar2 = FUN_142ebdcf0(param_3);
  cVar3 = FUN_142ebdcd0(param_3);
  iVar5 = *(int *)(param_1 + 0x350);
  cVar4 = UNF_CustomizationStatics::IsWeaponType(param_3);
  if (*(int *)(param_1 + 0x350) - 1U < 2) {
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        if (cVar3 == '\0') goto LAB_1411508ff;
        pwVar7 = L"focusedDownFriend";
        if (cVar4 != '\0') {
          pwVar7 = L"focusedDownFriend";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar7 == L'\0') {
          return param_2;
        }
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pwVar7[lVar6] != L'\0');
      }
      else {
        pwVar7 = L"focusedOverFriend";
        if (cVar4 != '\0') {
          pwVar7 = L"focusedOverFriend";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar7 == L'\0') {
          return param_2;
        }
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pwVar7[lVar6] != L'\0');
      }
    }
    else {
      pwVar7 = L"upFriend";
      if (cVar4 != '\0') {
        pwVar7 = L"focusedUpFriend";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar7 == L'\0') {
        return param_2;
      }
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar7[lVar6] != L'\0');
    }
  }
  else if (iVar5 - 4U < 2) {
    pwVar7 = L"disabled";
    if (cVar4 != '\0') {
      pwVar7 = L"focusedDisabled";
    }
    *param_2 = 0;
    param_2[1] = 0;
    if (*pwVar7 == L'\0') {
      return param_2;
    }
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar7[lVar6] != L'\0');
  }
  else if (*(int *)(param_1 + 0x350) == 0) {
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        if (cVar3 == '\0') goto LAB_1411508ff;
        pwVar7 = L"lockedDown";
        if (cVar4 != '\0') {
          pwVar7 = L"lockedFocusedDown";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar7 == L'\0') {
          return param_2;
        }
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pwVar7[lVar6] != L'\0');
      }
      else {
        pwVar7 = L"lockedOver";
        if (cVar4 != '\0') {
          pwVar7 = L"lockedFocusedOver";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar7 == L'\0') {
          return param_2;
        }
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pwVar7[lVar6] != L'\0');
      }
    }
    else {
      pwVar7 = L"lockedUp";
      if (cVar4 != '\0') {
        pwVar7 = L"lockedFocusedUp";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar7 == L'\0') {
        return param_2;
      }
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar7[lVar6] != L'\0');
    }
  }
  else if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if (cVar3 == '\0') {
LAB_1411508ff:
        *param_2 = 0;
        param_2[1] = 0;
        return param_2;
      }
      pwVar7 = L"down";
      if (cVar4 != '\0') {
        pwVar7 = L"focusedDown";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar7 == L'\0') {
        return param_2;
      }
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar7[lVar6] != L'\0');
    }
    else {
      pwVar7 = L"over";
      if (cVar4 != '\0') {
        pwVar7 = L"focusedOver";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar7 == L'\0') {
        return param_2;
      }
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar7[lVar6] != L'\0');
    }
  }
  else {
    pwVar7 = L"up";
    if (cVar4 != '\0') {
      pwVar7 = L"focusedUp";
    }
    *param_2 = 0;
    param_2[1] = 0;
    if (*pwVar7 == L'\0') {
      return param_2;
    }
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar7[lVar6] != L'\0');
  }
  iVar5 = (int)lVar6 + 1;
  *(int *)(param_2 + 1) = iVar5;
  if (0 < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar7,(longlong)iVar5 * 2);
  return param_2;
}



// FUNCTION 141150930 FUN_141150930 body=95 status=ok
// SIG undefined FUN_141150930(void)

void FUN_141150930(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_1410b46c0(lVar1);
    lVar1 = lVar1 + 0x30;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141150990 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
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



// FUNCTION 141150a10 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_141150ae1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_141150ae1:
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
      TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
      ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>
                ((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141150ba0 FUN_141150ba0 body=188 status=ok
// SIG undefined FUN_141150ba0(void)

void FUN_141150ba0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  for (iVar3 = *(int *)(param_1 + 0x50); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_140da9460(lVar2);
    lVar2 = lVar2 + 0x38;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x48,0);
  }
  if ((1 < *(int *)(param_1 + 8)) && (param_2 != 0)) {
    FUN_140db8690(param_2,param_1,param_1 + 0x48);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar1 = (longlong)*(int *)(param_1 + 0x50) * 0x38 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    if (*(char *)(lVar2 + 0x30) == '\0') goto LAB_141150c38;
  }
  lVar2 = 0;
LAB_141150c38:
  *(bool *)(param_1 + 0x10) = lVar2 != 0;
  return;
}



// FUNCTION 141150c70 FUN_141150c70 body=244 status=ok
// SIG undefined FUN_141150c70(void)

void FUN_141150c70(longlong param_1,longlong param_2)

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
        uVar1 = *(undefined4 *)(param_1 + 0x38);
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
      FUN_141156b40(*(undefined8 *)(param_1 + 0x70),uVar5,local_38,uVar1,uVar3);
    }
  }
  return;
}



// FUNCTION 141150d70 FUN_141150d70 body=20 status=ok
// SIG undefined FUN_141150d70(void)

undefined1 FUN_141150d70(longlong param_1)

{
  FUN_141143b30(param_1 + 8);
  return 1;
}



// FUNCTION 141150d90 FUN_141150d90 body=246 status=ok
// SIG undefined FUN_141150d90(void)

undefined8 FUN_141150d90(longlong param_1,longlong param_2)

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
      uVar1 = *(undefined4 *)(param_1 + 0x38);
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
    FUN_141156b40(*(undefined8 *)(param_1 + 0x70),uVar5,local_38,uVar1,uVar3);
    return 1;
  }
  return 1;
}



// FUNCTION 141150e90 FUN_141150e90 body=297 status=ok
// SIG undefined FUN_141150e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141150e90(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar3 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0xff4);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0xff4) = 0;
  }
  else {
    uVar3 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (uVar1 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0xff4) = 1;
    UNLOCK();
    local_78[0] = 0xffffffff;
    uVar4 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xb30) != 0) {
      FUN_14170c210(local_78);
      uVar4 = local_78[0];
    }
    local_78[0] = 0xffffffff;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8758;
      *(undefined4 *)(puVar2 + 1) = uVar4;
      uVar4 = 0xffffffff;
    }
    local_68[0] = FUN_14114b6d0;
    FUN_14208c260(param_1,local_68);
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
    FUN_1416f8340(uVar4);
    uVar3 = FUN_1416f8340(local_78[0]);
  }
  return uVar3;
}



// FUNCTION 141150fc0 FUN_141150fc0 body=209 status=ok
// SIG undefined FUN_141150fc0(void)

void FUN_141150fc0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar2 = UGNavigationHeaderItem::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14115101b;
  }
  lVar4 = 0;
LAB_14115101b:
  lVar2 = *(longlong *)(param_1 + 0x178);
  if ((lVar2 != 0) && (lVar4 != 0)) {
    local_10 = 0;
    local_18 = lVar2;
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
    FUN_142ed36d0(lVar4,&local_18,0);
    if (param_2 != -1) {
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b8))
                (*(longlong **)(param_1 + 0x178),param_2,1,0);
    }
  }
  return;
}



// FUNCTION 1411510a0 FUN_1411510a0 body=2052 status=ok
// SIG undefined FUN_1411510a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1411510a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  undefined8 *local_3c8;
  ulonglong *puStack_3c0;
  longlong local_3b8 [2];
  undefined4 *local_3a8;
  undefined8 *puStack_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  undefined1 local_380 [8];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [8];
  longlong *local_310;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [24];
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [32];
  undefined4 local_208 [4];
  undefined1 local_1f8 [24];
  undefined1 local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined1 local_198 [24];
  undefined1 local_180;
  undefined4 local_178 [4];
  undefined1 local_168 [24];
  char local_150 [8];
  undefined4 local_148;
  longlong local_140;
  undefined1 local_120;
  undefined4 local_118;
  undefined1 local_108 [24];
  undefined1 local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [24];
  char local_c0 [8];
  undefined4 local_b8;
  longlong local_b0;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_78 [24];
  undefined1 local_60;
  ulonglong local_58 [5];
  char acStack_30 [8];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar10 + 0x38) < DAT_146875c00) &&
     (_Init_thread_header(&DAT_146875c00), DAT_146875c00 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146875be8,L"Expires in: ",L"GFxEchoNetMailboxListCell",L"ExpiresIn");
    atexit(FUN_143e604c0);
    _Init_thread_footer(&DAT_146875c00);
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_146875c20) &&
     (_Init_thread_header(&DAT_146875c20), DAT_146875c20 == -1)) {
    local_3b8[0] = 0;
    local_3b8[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3b8,0);
    FGenericPlatformString::Memcpy(local_3b8[0],L"{0}{1}{2}",0x14);
    FText::FromString(&DAT_146875c08,local_3b8);
    if (local_3b8[0] != 0) {
      FMemory::Free();
    }
    atexit(FUN_143e60580);
    _Init_thread_footer(&DAT_146875c20);
  }
  FDateTime::UtcNow(&local_398);
  if (*param_3 < local_398) {
    uVar8 = FUN_1404b03b0();
    FText::FText(param_2,uVar8);
  }
  else {
    plVar9 = (longlong *)FDateTime::UtcNow(local_380);
    dVar6 = (double)(*param_3 - *plVar9);
    if (dVar6 * 1.1574074074074074e-12 < 1.0) {
      if (dVar6 * 2.7777777777777777e-11 < 1.0) {
        lVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_240,&DAT_1446ba7d4,L"GFxEchoNetMailboxListCell",
                            L"MinutesAbbreviation");
        local_3d8 = lVar10;
        lVar11 = FText::FText(local_228,&DAT_146875be8);
        plVar9 = (longlong *)FTextFormat::FTextFormat(local_2b0,&DAT_146875c08);
        local_e8[0] = 4;
        FText::FText(local_d8,lVar11);
        local_c0[0] = '\x01';
        local_b8 = 0;
        local_90 = 0;
        local_88 = 4;
        local_b0 = (longlong)(int)(dVar6 * 1.6666666666666667e-09);
        FText::FText(local_78,lVar10);
        local_3c8 = (undefined8 *)local_e8;
        local_60 = 1;
        puStack_3c0 = local_58;
        local_390 = *plVar9;
        local_388 = plVar9[1];
        if (local_388 != 0) {
          LOCK();
          *(int *)(local_388 + 8) = *(int *)(local_388 + 8) + 1;
          UNLOCK();
        }
        local_338 = local_3c8;
        uStack_330 = puStack_3c0;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_328,&local_338);
        uVar8 = FText::Format(local_2e8,&local_390,uVar8);
        FText::FText(param_2,uVar8);
        if (local_2e0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_2e0 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_2e0)(local_2e0);
            LOCK();
            piVar1 = (int *)((longlong)local_2e0 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_2e0 + 8))(local_2e0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_328);
        lVar10 = 3;
        pcVar12 = acStack_30;
        do {
          lVar10 = lVar10 + -1;
          pcVar2 = pcVar12 + -0x30;
          if (*pcVar2 != '\0') {
            *pcVar2 = '\0';
            plVar5 = *(longlong **)(pcVar12 + -0x40);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar5 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
          }
          pcVar12 = pcVar2;
        } while (lVar10 != 0);
      }
      else {
        lVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_270,&DAT_1446ba77c,L"GFxEchoNetMailboxListCell",
                            L"HoursAbbreviation");
        local_3d8 = lVar10;
        lVar11 = FText::FText(local_258,&DAT_146875be8);
        plVar9 = (longlong *)FTextFormat::FTextFormat(local_2c0,&DAT_146875c08);
        local_178[0] = 4;
        FText::FText(local_168,lVar11);
        local_150[0] = '\x01';
        local_148 = 0;
        local_120 = 0;
        local_118 = 4;
        local_140 = (longlong)(int)(dVar6 * 2.7777777777777777e-11);
        FText::FText(local_108,lVar10);
        local_3c8 = (undefined8 *)local_178;
        local_f0 = 1;
        puStack_3c0 = (ulonglong *)local_e8;
        local_3a8 = (undefined4 *)*plVar9;
        puStack_3a0 = (undefined8 *)plVar9[1];
        if (puStack_3a0 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puStack_3a0 + 1) = *(int *)(puStack_3a0 + 1) + 1;
          UNLOCK();
        }
        local_358 = local_3c8;
        uStack_350 = puStack_3c0;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_348,&local_358);
        uVar8 = FText::Format(local_300,&local_3a8,uVar8);
        FText::FText(param_2,uVar8);
        if (local_2f8 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_2f8 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_2f8)(local_2f8);
            LOCK();
            piVar1 = (int *)((longlong)local_2f8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_2f8 + 8))(local_2f8,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_348);
        lVar10 = 3;
        pcVar12 = local_c0;
        do {
          lVar10 = lVar10 + -1;
          pcVar2 = pcVar12 + -0x30;
          if (*pcVar2 != '\0') {
            *pcVar2 = '\0';
            plVar5 = *(longlong **)(pcVar12 + -0x40);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar5 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
          }
          pcVar12 = pcVar2;
        } while (lVar10 != 0);
      }
    }
    else {
      lVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_2a0,&DAT_1446ba754,L"GFxEchoNetMailboxListCell",L"DaysAbbreviation")
      ;
      local_3d8 = lVar10;
      lVar11 = FText::FText(local_288,&DAT_146875be8);
      plVar9 = (longlong *)FTextFormat::FTextFormat(local_2d0,&DAT_146875c08);
      local_208[0] = 4;
      FText::FText(local_1f8,lVar11);
      local_1e0 = 1;
      local_1d8 = 0;
      local_1b0 = 0;
      local_1a8 = 4;
      local_1d0 = (longlong)(int)(dVar6 * 1.1574074074074074e-12);
      FText::FText(local_198,lVar10);
      local_3a8 = local_208;
      local_180 = 1;
      puStack_3a0 = (undefined8 *)local_178;
      local_3c8 = (undefined8 *)*plVar9;
      puStack_3c0 = (ulonglong *)plVar9[1];
      if (puStack_3c0 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(puStack_3c0 + 1) = (int)puStack_3c0[1] + 1;
        UNLOCK();
      }
      local_378 = local_3a8;
      uStack_370 = puStack_3a0;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_368,&local_378);
      uVar8 = FText::Format(local_318,&local_3c8,uVar8);
      FText::FText(param_2,uVar8);
      if (local_310 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_310 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_310)(local_310);
          LOCK();
          piVar1 = (int *)((longlong)local_310 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_310 + 8))(local_310,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_368);
      lVar10 = 3;
      pcVar12 = local_150;
      do {
        lVar10 = lVar10 + -1;
        pcVar2 = pcVar12 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar12 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
        }
        pcVar12 = pcVar2;
      } while (lVar10 != 0);
    }
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(lVar11 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(local_3d8 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1411518b0 FUN_1411518b0 body=162 status=ok
// SIG undefined FUN_1411518b0(void)

undefined8 * FUN_1411518b0(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  
  if (param_1[0x59] != 0) {
    cVar1 = (**(code **)(*(longlong *)(param_1[0x59] + 0x170) + 0x40))();
    if ((cVar1 == '\0') && (2 < (byte)(param_4 - 4U))) {
      *param_2 = 0;
      param_2[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"disabled",0x12);
      return param_2;
    }
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141151960 FUN_141151960 body=101 status=ok
// SIG undefined FUN_141151960(void)

undefined8 FUN_141151960(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
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
      uVar4 = FUN_140bba5d0(lVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1411519d0 FUN_1411519d0 body=69 status=ok
// SIG undefined FUN_1411519d0(void)

int FUN_1411519d0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_142ebdd70();
  if (cVar1 != '\0') {
    iVar2 = FUN_142eb7a90(param_1);
    if (iVar2 == 1) {
      return *(int *)(param_1 + 0x694) + param_2;
    }
  }
  return param_2;
}



// FUNCTION 141151a20 FUN_141151a20 body=278 status=ok
// SIG undefined FUN_141151a20(void)

undefined8 * FUN_141151a20(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  uVar10 = 0;
  if (*(int *)(param_1 + 2) == 1) {
    local_20 = (longlong *)param_1[1];
    uVar10 = *param_1;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    puVar9 = &local_28;
    bVar6 = true;
    bVar5 = false;
    local_28 = uVar10;
  }
  else {
    puVar9 = &local_18;
    local_18 = 0;
    plStack_10 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  uVar4 = puVar9[1];
  puVar9[1] = 0;
  *param_2 = uVar10;
  param_2[1] = uVar4;
  *puVar9 = 0;
  plVar8 = plStack_10;
  if (bVar5) {
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_10)(plStack_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_10 + 8))(plStack_10,1);
        }
      }
    }
  }
  plVar8 = local_20;
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141151b40 FUN_141151b40 body=180 status=ok
// SIG undefined FUN_141151b40(void)

undefined8 * FUN_141151b40(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uStackX_c;
  
  plVar5 = (longlong *)0x0;
  if (*(int *)(param_1 + 2) == 1) {
    plVar5 = (longlong *)param_1[1];
    plVar6 = (longlong *)*param_1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    bVar3 = true;
    plVar7 = plVar5;
  }
  else {
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
    bVar3 = false;
    plVar6 = plVar5;
  }
  *param_2 = plVar6;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 141151c00 FUN_141151c00 body=2831 status=ok
// SIG undefined FUN_141151c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141151c00(undefined8 param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_4c8 [32];
  undefined1 local_4a8 [8];
  longlong *local_4a0;
  undefined4 *local_488;
  undefined4 *puStack_480;
  undefined4 *local_478;
  undefined4 *puStack_470;
  undefined4 *local_468;
  undefined4 *puStack_460;
  undefined4 *local_458;
  int *piStack_450;
  int *local_448;
  undefined4 *puStack_440;
  undefined4 *local_438;
  ulonglong *puStack_430;
  undefined8 local_428;
  longlong local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408 [16];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [16];
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388 [16];
  int *local_378;
  undefined4 *puStack_370;
  undefined1 local_368 [16];
  undefined4 *local_358;
  ulonglong *puStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320 [8];
  longlong *local_318;
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
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [24];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined4 local_178 [4];
  undefined1 local_168 [8];
  longlong *local_160;
  char local_150;
  undefined4 local_148 [4];
  undefined1 local_138 [8];
  longlong *local_130;
  char local_120;
  undefined4 local_118 [4];
  undefined1 local_108 [8];
  longlong *local_100;
  char local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  int local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_4a8,L"Filter By: {0}",L"EchoNetRosterMenu",L"FilterByText");
  if (param_3 == 0) {
    lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_220,L"Friends",L"EchoNetRosterMenu",L"FriendsFilterText");
    plVar6 = (longlong *)FTextFormat::FTextFormat(local_290,local_4a8);
    local_178[0] = 4;
    FText::FText(local_168,lVar5);
    local_478 = local_178;
    local_150 = '\x01';
    puStack_470 = local_148;
    local_488 = (undefined4 *)*plVar6;
    puStack_480 = (undefined4 *)plVar6[1];
    if (puStack_480 != (undefined4 *)0x0) {
      LOCK();
      puStack_480[2] = puStack_480[2] + 1;
      UNLOCK();
    }
    local_418 = local_478;
    uStack_410 = puStack_470;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_408,&local_418);
    uVar7 = FText::Format(local_2d8,&local_488,uVar7);
    FText::FText(param_2,uVar7);
    if (local_2d0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_2d0 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2d0)(local_2d0);
        LOCK();
        piVar1 = (int *)((longlong)local_2d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2d0 + 8))(local_2d0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_408);
    if (local_150 == '\0') goto LAB_141152269;
    local_150 = '\0';
    plVar9 = local_160;
  }
  else if (param_3 == 1) {
    lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_208,L"Recently Met",L"EchoNetRosterMenu",L"RecentlyMetFilterText");
    plVar6 = (longlong *)FTextFormat::FTextFormat(local_280,local_4a8);
    local_148[0] = 4;
    FText::FText(local_138,lVar5);
    local_488 = local_148;
    local_120 = '\x01';
    puStack_480 = local_118;
    local_478 = (undefined4 *)*plVar6;
    puStack_470 = (undefined4 *)plVar6[1];
    if (puStack_470 != (undefined4 *)0x0) {
      LOCK();
      puStack_470[2] = puStack_470[2] + 1;
      UNLOCK();
    }
    local_3f8 = local_488;
    uStack_3f0 = puStack_480;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_3e8,&local_3f8);
    uVar7 = FText::Format(local_2c0,&local_478,uVar7);
    FText::FText(param_2,uVar7);
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_2b8 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar1 = (int *)((longlong)local_2b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2b8 + 8))(local_2b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_3e8);
    if (local_120 == '\0') goto LAB_141152269;
    local_120 = '\0';
    plVar9 = local_130;
  }
  else if (param_3 == 2) {
    lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1f0,L"Recommended Friends",L"EchoNetRosterMenu",
                       L"RecommendedFriendsFilterText");
    plVar6 = (longlong *)FTextFormat::FTextFormat(local_270,local_4a8);
    local_118[0] = 4;
    FText::FText(local_108,lVar5);
    local_488 = local_118;
    local_f0 = '\x01';
    puStack_480 = local_e8;
    local_468 = (undefined4 *)*plVar6;
    puStack_460 = (undefined4 *)plVar6[1];
    if (puStack_460 != (undefined4 *)0x0) {
      LOCK();
      puStack_460[2] = puStack_460[2] + 1;
      UNLOCK();
    }
    local_3d8 = local_488;
    uStack_3d0 = puStack_480;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_3c8,&local_3d8);
    uVar7 = FText::Format(local_2f0,&local_468,uVar7);
    FText::FText(param_2,uVar7);
    if (local_2e8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_2e8 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2e8)(local_2e8);
        LOCK();
        piVar1 = (int *)((longlong)local_2e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2e8 + 8))(local_2e8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_3c8);
    if (local_f0 == '\0') goto LAB_141152269;
    local_f0 = '\0';
    plVar9 = local_100;
  }
  else if (param_3 == 3) {
    lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1d8,L"Blocked SHiFT Players",L"EchoNetRosterMenu",L"BlockedFilterText")
    ;
    plVar6 = (longlong *)FTextFormat::FTextFormat(local_260,local_4a8);
    local_e8[0] = 4;
    FText::FText(local_d8,lVar5);
    local_468 = local_e8;
    local_c0 = '\x01';
    puStack_460 = local_b8;
    local_458 = (undefined4 *)*plVar6;
    piStack_450 = (int *)plVar6[1];
    if (piStack_450 != (int *)0x0) {
      LOCK();
      piStack_450[2] = piStack_450[2] + 1;
      UNLOCK();
    }
    local_3b8 = local_468;
    uStack_3b0 = puStack_460;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_3a8,&local_3b8);
    uVar7 = FText::Format(local_2a8,&local_458,uVar7);
    FText::FText(param_2,uVar7);
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_2a0 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar1 = (int *)((longlong)local_2a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_3a8);
    if (local_c0 == '\0') goto LAB_141152269;
    local_c0 = '\0';
    plVar9 = local_d0;
  }
  else {
    if (param_3 != 5) {
      if (param_3 != 4) {
        lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_190,L"Friends",L"EchoNetRosterMenu",L"FriendsFilterText");
        puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_240,local_4a8);
        local_58[0] = 4;
        FText::FText(local_48,lVar5);
        local_428 = *puVar8;
        local_438 = local_58;
        puStack_430 = local_28;
        local_420 = puVar8[1];
        local_30 = '\x01';
        if (local_420 != 0) {
          LOCK();
          *(int *)(local_420 + 8) = *(int *)(local_420 + 8) + 1;
          UNLOCK();
        }
        local_358 = local_438;
        puStack_350 = puStack_430;
        uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_348,&local_358);
        uVar7 = FText::Format(local_308,&local_428,uVar7);
        FText::FText(param_2,uVar7);
        if (local_300 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_300 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_300)(local_300);
            LOCK();
            piVar1 = (int *)((longlong)local_300 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_300 + 8))(local_300,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_348);
        if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
          LOCK();
          plVar6 = local_40 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        plVar6 = (longlong *)puVar8[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar6 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        plVar6 = *(longlong **)(lVar5 + 8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar6 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_4a8);
        return param_2;
      }
      lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1a8,L"Sent Requests",L"EchoNetRosterMenu",L"PendingFilterText");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_250,local_4a8);
      local_88[0] = param_3;
      FText::FText(local_78,lVar5);
      local_448 = local_88;
      local_60 = '\x01';
      puStack_440 = local_58;
      local_438 = (undefined4 *)*puVar8;
      puStack_430 = (ulonglong *)puVar8[1];
      if (puStack_430 != (ulonglong *)0x0) {
        LOCK();
        *(int *)((longlong)puStack_430 + 8) = *(int *)((longlong)puStack_430 + 8) + 1;
        UNLOCK();
      }
      local_378 = local_448;
      puStack_370 = puStack_440;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_368,&local_378);
      uVar7 = FText::Format(local_320,&local_438,uVar7);
      FText::FText(param_2,uVar7);
      if (local_318 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_318 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_318)(local_318);
          LOCK();
          piVar1 = (int *)((longlong)local_318 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_318 + 8))(local_318,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_368);
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      plVar6 = (longlong *)puVar8[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      plVar6 = *(longlong **)(lVar5 + 8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_4a0 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar6 = local_4a0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return param_2;
      }
      (**(code **)*local_4a0)(local_4a0);
      LOCK();
      piVar1 = (int *)((longlong)local_4a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return param_2;
      }
      (**(code **)(*local_4a0 + 8))(local_4a0,1);
      return param_2;
    }
    lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c0,L"Pending Requests",L"EchoNetRosterMenu",L"PendingFilterText");
    plVar6 = (longlong *)FTextFormat::FTextFormat(local_230,local_4a8);
    local_b8[0] = 4;
    FText::FText(local_a8,lVar5);
    local_458 = local_b8;
    local_90 = '\x01';
    piStack_450 = local_88;
    local_448 = (int *)*plVar6;
    puStack_440 = (undefined4 *)plVar6[1];
    if (puStack_440 != (undefined4 *)0x0) {
      LOCK();
      *(int *)((longlong)puStack_440 + 8) = *(int *)((longlong)puStack_440 + 8) + 1;
      UNLOCK();
    }
    local_398 = local_458;
    uStack_390 = piStack_450;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_388,&local_398);
    uVar7 = FText::Format(local_338,&local_448,uVar7);
    FText::FText(param_2,uVar7);
    if (local_330 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_330 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_330)(local_330);
        LOCK();
        piVar1 = (int *)((longlong)local_330 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_330 + 8))(local_330,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_388);
    if (local_90 == '\0') goto LAB_141152269;
    local_90 = '\0';
    plVar9 = local_a0;
  }
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
LAB_141152269:
  plVar6 = (longlong *)plVar6[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar6 = *(longlong **)(lVar5 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_4a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_4a0 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_4a0)(local_4a0);
      LOCK();
      piVar1 = (int *)((longlong)local_4a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_4a0 + 8))(local_4a0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141152710 FUN_141152710 body=215 status=ok
// SIG undefined FUN_141152710(void)

ulonglong FUN_141152710(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x930);
  iVar1 = *(int *)(param_1 + 0x938);
  plVar6 = plVar2;
  while( true ) {
    if (plVar6 == plVar2 + (longlong)iVar1 * 2) {
      return 0xffffffff;
    }
    lVar3 = *plVar6;
    if (((*(longlong **)(lVar3 + 0x10) == (longlong *)0x0) ||
        (cVar5 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x20))(), cVar5 == '\0')) ||
       (cVar5 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((*(longlong **)(lVar3 + 0x10) == (longlong *)0x0) ||
         (cVar5 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x20))(), cVar5 == '\0')) &&
        (cVar5 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar5 == '\0')) ||
       ((bVar4 && (cVar5 = (**(code **)**(undefined8 **)(lVar3 + 0x10))
                                     (*(undefined8 **)(lVar3 + 0x10),*param_2), cVar5 != '\0'))))
    break;
    plVar6 = plVar6 + 2;
  }
  if (plVar6 == plVar2 + (longlong)iVar1 * 2) {
    return 0xffffffff;
  }
  return (longlong)plVar6 - (longlong)plVar2 >> 4 & 0xffffffff;
}



// FUNCTION 141152800 FUN_141152800 body=782 status=ok
// SIG undefined FUN_141152800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141152800(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_748 [40];
  undefined4 local_720;
  undefined4 local_71c;
  longlong *local_710;
  longlong local_700;
  undefined4 local_6f8;
  undefined4 local_6f4;
  longlong *local_6e8;
  longlong local_6d8;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  void *local_680;
  int local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined1 local_658 [1496];
  longlong local_80;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_748;
  FUN_1411c87b0(param_2);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d4);
  if (lVar6 != 0) {
    lVar7 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      puVar8 = (undefined8 *)FUN_1411e6870(lVar6,param_4);
      local_6c8 = *puVar8;
      uStack_6c0 = puVar8[1];
      local_6b8 = puVar8[2];
      uStack_6b0 = puVar8[3];
      local_6a8 = *(undefined4 *)(puVar8 + 4);
      uStack_6a4 = *(undefined4 *)((longlong)puVar8 + 0x24);
      uStack_6a0 = *(undefined4 *)(puVar8 + 5);
      uStack_69c = *(undefined4 *)((longlong)puVar8 + 0x2c);
      local_698 = *(undefined4 *)(puVar8 + 6);
      uStack_694 = *(undefined4 *)((longlong)puVar8 + 0x34);
      uStack_690 = *(undefined4 *)(puVar8 + 7);
      uStack_68c = *(undefined4 *)((longlong)puVar8 + 0x3c);
      local_688 = *(undefined4 *)(puVar8 + 8);
      local_680 = (void *)0x0;
      local_678 = *(int *)(puVar8 + 10);
      lVar6 = (longlong)local_678;
      _Src = (void *)puVar8[9];
      bVar4 = false;
      if (local_678 == 0) {
        local_674 = 0;
      }
      else {
        FUN_1409b7fb0(&local_680,local_678,0);
        _guard_xfg_dispatch_icall_nop(local_680,_Src,lVar6 * 0x14);
      }
      local_670 = *(undefined4 *)(puVar8 + 0xb);
      uStack_66c = *(undefined4 *)((longlong)puVar8 + 0x5c);
      uStack_668 = *(undefined4 *)(puVar8 + 0xc);
      uStack_664 = *(undefined4 *)((longlong)puVar8 + 100);
      FUN_140a25aa0(local_658,puVar8 + 0xe);
      if ((param_3 == 0) || (*(longlong *)(param_1 + 0xe20) == 0)) {
        lVar6 = FUN_1411c87b0(&local_720);
        bVar4 = true;
        bVar5 = false;
      }
      else {
        lVar6 = FUN_1411e2a40(*(longlong *)(param_1 + 0xe20),&local_6f8,param_3,&local_6c8);
        bVar5 = true;
      }
      FUN_1416ff870(param_2,lVar6);
      FUN_1416ff870(param_2 + 4,lVar6 + 4);
      puVar8 = (undefined8 *)(lVar6 + 8);
      if ((undefined8 *)(param_2 + 8) != puVar8) {
        *(undefined8 *)(param_2 + 8) = *puVar8;
        *puVar8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x10,lVar6 + 0x10);
      }
      plVar1 = (longlong *)(param_2 + 0x20);
      plVar9 = (longlong *)(lVar6 + 0x20);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
      if (plVar1 != plVar9) {
        lVar6 = *plVar1;
        *plVar1 = *plVar9;
        *plVar9 = 0;
        if (lVar6 != 0) {
          LOCK();
          piVar2 = (int *)(lVar6 + 0x48);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
      if (bVar4) {
        if (local_700 != 0) {
          LOCK();
          piVar2 = (int *)(local_700 + 0x48);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
        if (local_710 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_710 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_710)(local_710);
            LOCK();
            piVar2 = (int *)((longlong)local_710 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_710 + 8))(local_710,1);
            }
          }
        }
        FUN_1416f8340(local_71c);
        FUN_1416f8340(local_720);
      }
      if (bVar5) {
        if (local_6d8 != 0) {
          LOCK();
          piVar2 = (int *)(local_6d8 + 0x48);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
        if (local_6e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_6e8 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_6e8)(local_6e8);
            LOCK();
            piVar2 = (int *)((longlong)local_6e8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_6e8 + 8))(local_6e8,1);
            }
          }
        }
        FUN_1416f8340(local_6f4);
        FUN_1416f8340(local_6f8);
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_680 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 141152b10 FUN_141152b10 body=691 status=ok
// SIG undefined FUN_141152b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141152b10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong lStack_f0;
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FText::FText(param_2);
  iVar3 = *(int *)(param_1 + 0x7f4);
  local_50 = (longlong)iVar3;
  if (iVar3 == 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b0,L"Mayhem Mode Off",L"GFxEchoNetMatchmakingMenu",L"MayhemModeOff");
    FText::operator=(param_2,uVar6);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  else if (0 < iVar3) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Mayhem {0}",L"GFxEchoNetMatchmakingMenu",L"MayhemModeLevel");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar6);
    local_58[0] = 0;
    local_e8 = local_58;
    local_30 = '\0';
    puStack_e0 = local_28;
    local_f8 = *puVar7;
    lStack_f0 = puVar7[1];
    if (lStack_f0 != 0) {
      LOCK();
      *(int *)(lStack_f0 + 8) = *(int *)(lStack_f0 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_e8);
    uVar6 = FText::Format(local_98,&local_f8,uVar6);
    FText::FText(local_c8,uVar6);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_d8);
    if (local_30 != '\0') {
      local_30 = '\0';
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
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
    FText::operator=(param_2,local_c8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_78 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141152dd0 FUN_141152dd0 body=494 status=ok
// SIG undefined FUN_141152dd0(void)

/* WARNING: Removing unreachable block (ram,0x000141152f8d) */

ulonglong FUN_141152dd0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  
  iVar15 = 0;
  iVar10 = 0;
  iVar8 = -1;
  if (0 < *(int *)(param_1 + 0x460)) {
    lVar14 = 0;
    iVar8 = -1;
    do {
      lVar2 = *(longlong *)(param_1 + 0x458);
      lVar3 = *(longlong *)(lVar2 + 8 + lVar14);
      if ((lVar3 == 0) || (cVar6 = FUN_142c48f60(lVar3,param_1,0), iVar11 = iVar10, cVar6 != '\0'))
      {
        iVar11 = iVar10 + 1;
        if (0 < iVar11) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
        }
        puVar1 = (undefined8 *)(lVar2 + lVar14);
        uVar5 = puVar1[1];
        *(undefined8 *)((longlong)iVar10 * 0x10) = *puVar1;
        ((undefined8 *)((longlong)iVar10 * 0x10))[1] = uVar5;
        if (iVar15 == *(int *)(param_1 + 0x474)) {
          iVar8 = iVar10;
        }
      }
      iVar10 = iVar11;
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 0x10;
    } while (iVar15 < *(int *)(param_1 + 0x460));
  }
  if (iVar10 < 2) {
    if (0 < iVar10) {
LAB_141152fa3:
      uVar7 = 0;
      goto LAB_141152fa5;
    }
  }
  else {
    if ((iVar8 < 0) || (iVar10 <= iVar8)) {
      if (iVar10 < 1) goto LAB_141152fa3;
      iVar8 = rand();
      uVar9 = (uint)((float)iVar8 * 3.051851e-05 * (float)iVar10);
      uVar7 = iVar10 - 1U;
      if ((int)uVar9 <= (int)(iVar10 - 1U)) {
        uVar7 = uVar9;
      }
    }
    else if (iVar10 + -1 < 1) {
      uVar7 = (uint)(iVar8 < 1);
    }
    else {
      iVar15 = rand();
      uVar7 = (uint)((float)iVar15 * 3.051851e-05 * (float)(iVar10 + -1));
      uVar9 = iVar10 - 2U;
      if ((int)uVar7 <= (int)(iVar10 - 2U)) {
        uVar9 = uVar7;
      }
      uVar7 = uVar9 + 1;
      if ((int)uVar9 < iVar8) {
        uVar7 = uVar9;
      }
    }
    if (-1 < (int)uVar7) {
LAB_141152fa5:
      if ((int)uVar7 < iVar10) {
        lVar14 = *(longlong *)((longlong)(int)uVar7 * 0x10);
        goto LAB_141152f49;
      }
    }
  }
  lVar14 = 0;
LAB_141152f49:
  plVar4 = *(longlong **)(param_1 + 0x458);
  plVar12 = plVar4;
  do {
    if (plVar12 == plVar4 + (longlong)*(int *)(param_1 + 0x460) * 2) {
      uVar13 = 0xffffffff;
LAB_141152f88:
      return uVar13 & 0xffffffff;
    }
    if (*plVar12 == lVar14) {
      uVar13 = (longlong)plVar12 - (longlong)plVar4 >> 4;
      goto LAB_141152f88;
    }
    plVar12 = plVar12 + 2;
  } while( true );
}



// FUNCTION 141152fc0 FUN_141152fc0 body=290 status=ok
// SIG undefined FUN_141152fc0(void)

longlong FUN_141152fc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(longlong **)(param_1 + 1000) != (longlong *)0x0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 1000) + 0x10))(), lVar2 != 0)) {
    return lVar2;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x408);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x408);
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  local_30 = 0xffffffff;
  local_2c = 0;
  if (lVar2 == 0) {
    local_20 = 0;
    lVar2 = FUN_1411e5f20(&local_30);
    return lVar2;
  }
  uVar3 = FSoftObjectPath::FSoftObjectPath(local_48,lVar2);
  FSoftObjectPath::operator=(&local_20,uVar3);
  FWeakObjectPtr::operator=(&local_30,lVar2);
  LOCK();
  if (DAT_1464b56f4 == 0) {
    DAT_1464b56f4 = 0;
  }
  UNLOCK();
  local_2c = CONCAT44(DAT_1464b56f4,(undefined4)local_2c);
  lVar2 = FUN_1411e5f20(&local_30);
  return lVar2;
}



// FUNCTION 1411530f0 FUN_1411530f0 body=290 status=ok
// SIG undefined FUN_1411530f0(void)

longlong FUN_1411530f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(longlong **)(param_1 + 0x3f0) != (longlong *)0x0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x10))(), lVar2 != 0)) {
    return lVar2;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x400);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x400);
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  local_30 = 0xffffffff;
  local_2c = 0;
  if (lVar2 == 0) {
    local_20 = 0;
    lVar2 = FUN_1411e5f20(&local_30);
    return lVar2;
  }
  uVar3 = FSoftObjectPath::FSoftObjectPath(local_48,lVar2);
  FSoftObjectPath::operator=(&local_20,uVar3);
  FWeakObjectPtr::operator=(&local_30,lVar2);
  LOCK();
  if (DAT_1464b56f4 == 0) {
    DAT_1464b56f4 = 0;
  }
  UNLOCK();
  local_2c = CONCAT44(DAT_1464b56f4,(undefined4)local_2c);
  lVar2 = FUN_1411e5f20(&local_30);
  return lVar2;
}



// FUNCTION 141153220 FUN_141153220 body=1098 status=ok
// SIG undefined FUN_141153220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141153220(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_178 [32];
  longlong local_158;
  void *local_150;
  int local_148;
  undefined4 local_144;
  longlong *local_140;
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar6 = FUN_1404b03b0();
  FText::FText(local_128,uVar6);
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar7 == 0) {
LAB_1411532ab:
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
    if (!bVar4) goto LAB_1411532ab;
  }
  local_158 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (local_158 == 0) {
LAB_1411532f8:
    local_158 = 0;
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(local_158 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_158 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1411532f8;
  }
  if (lVar7 == 0) goto LAB_141153431;
  lVar7 = FUN_140cff230(lVar7);
  if (lVar7 == 0) goto LAB_141153431;
  local_148 = *(int *)(lVar7 + 0x1f0);
  lVar8 = (longlong)local_148;
  local_140 = &local_158;
  _Src = *(void **)(lVar7 + 0x1e8);
  local_150 = (void *)0x0;
  if (local_148 == 0) {
    local_144 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_148,0);
    _guard_xfg_dispatch_icall_nop(local_150,_Src,lVar8 * 2);
  }
  if (local_148 < 2) {
    uVar6 = FUN_141142a70(&local_140,local_f0);
    FText::operator=(local_128,uVar6);
    local_d0 = local_e8;
LAB_1411533ef:
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  else {
    iVar5 = FUN_140bb8f20(local_158,&local_150);
    if (iVar5 == -1) {
      uVar6 = FUN_141142a70(&local_140,local_d8);
      FText::operator=(local_128,uVar6);
      goto LAB_1411533ef;
    }
    FText::operator=(local_128,*(longlong *)(local_158 + 0x1200) + ((longlong)iVar5 * 5 + 2) * 8);
  }
  if (local_150 != (void *)0x0) {
    FMemory::Free();
  }
LAB_141153431:
  lVar7 = FText::FText(local_80,local_128);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a8,L"Region: {0}",L"GFxEchoNetMatchmakingMenu",L"RegionFormatText");
  puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar6);
  local_68[0] = 4;
  FText::FText(local_58,lVar7);
  local_138 = local_68;
  local_40 = '\x01';
  puStack_130 = local_38;
  local_110 = *puVar9;
  local_108 = puVar9[1];
  if (local_108 != 0) {
    LOCK();
    *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
    UNLOCK();
  }
  uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_100,&local_138);
  uVar6 = FText::Format(local_c0,&local_110,uVar6);
  FText::FText(param_2,uVar6);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b8 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_100);
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  plVar3 = (longlong *)puVar9[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(lVar7 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a0 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_120 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141153670 FUN_141153670 body=1657 status=ok
// SIG undefined FUN_141153670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141153670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined1 auStack_278 [32];
  undefined4 local_258 [2];
  longlong local_250 [3];
  undefined4 *local_238;
  ulonglong *puStack_230;
  undefined **local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong local_210;
  undefined8 local_208;
  longlong local_200;
  longlong local_1f8;
  undefined8 *local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *plStack_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_1a0 [16];
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  undefined1 local_108 [32];
  undefined4 local_e8 [4];
  undefined1 local_d8 [24];
  undefined1 local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [24];
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_78 [24];
  undefined1 local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_1f0 = param_4;
  uVar8 = FUN_1404b03b0();
  FText::FText(local_1e8,uVar8);
  local_258[0] = 1;
  cVar7 = FWeakObjectPtr::IsValid(param_3);
  if (cVar7 != '\0') {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x3f8) + 0x20))();
    if (cVar7 != '\0') {
      local_220 = *(undefined8 *)(param_1 + 0x3f8);
      local_218 = *(longlong **)(param_1 + 0x400);
      if (local_218 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_218 + 1) = (int)local_218[1] + 1;
        UNLOCK();
      }
      local_228 = &PTR_FUN_143f740c8;
      local_210 = 0;
      local_208 = 0;
      uVar8 = FWeakObjectPtr::Get(param_3);
      uVar8 = FUN_140bb7440(uVar8);
      plVar9 = (longlong *)FUN_140d80730(uVar8,local_1b0,&local_228);
      plVar6 = (longlong *)plVar9[1];
      lVar11 = *plVar9;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_1a8 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      local_228 = &PTR_FUN_143f740c8;
      if (local_210 != 0) {
        FMemory::Free();
      }
      plVar9 = local_218;
      local_228 = &PTR_FUN_143f73d18;
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_218 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (lVar11 == 0) {
        lVar11 = (**(code **)(*(longlong *)*param_4 + 0x38))();
        if ((*(byte *)(lVar11 + 0x10) & 4) != 0) {
          uVar8 = FWeakObjectPtr::Get(param_3);
          lVar11 = FUN_140be2190(uVar8,lVar11 + 0x18,local_258);
          if (lVar11 != 0) {
            FText::operator=(local_1e8,lVar11 + 0x90);
          }
        }
      }
      else {
        uVar5 = *(undefined4 *)(lVar11 + 0x6c);
        uVar8 = FWeakObjectPtr::Get(param_3);
        lVar10 = FUN_140bbaee0(uVar8,uVar5);
        if (lVar10 != 0) {
          FText::operator=(local_1e8,lVar10 + 0x90);
          local_258[0] = *(undefined4 *)(lVar11 + 0x40);
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_190,&DAT_1446c21f0,L"GFxEchoNetMailboxListCell",L"Level Abbreviation");
  local_250[0] = 0;
  local_250[1] = 0xc;
  local_1c0 = 0;
  plStack_1b8 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_250,0);
  FGenericPlatformString::Memcpy(local_250[0],L"{0} {1} {2}",0x18);
  lVar11 = FText::AsNumber(local_138,local_258[0],0,&local_1c0);
  local_1f8 = lVar11;
  lVar10 = FText::FText(local_120,local_190);
  local_200 = lVar10;
  lVar12 = FText::FText(local_108,local_1e8);
  uVar8 = FText::FromString(local_160,local_250);
  puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_148,uVar8);
  local_e8[0] = 4;
  FText::FText(local_d8,lVar12);
  local_c0 = 1;
  local_b8 = 4;
  FText::FText(local_a8,lVar10);
  local_90 = 1;
  local_88 = 4;
  FText::FText(local_78,lVar11);
  local_238 = local_e8;
  local_60 = 1;
  puStack_230 = local_58;
  local_1d0 = *puVar13;
  local_1c8 = puVar13[1];
  if (local_1c8 != 0) {
    LOCK();
    *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
    UNLOCK();
  }
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a0,&local_238);
  uVar8 = FText::Format(local_178,&local_1d0,uVar8);
  FText::FText(param_2,uVar8);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_170 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_1a0);
  lVar11 = 3;
  pcVar14 = &stack0xffffffffffffffd0;
  do {
    lVar11 = lVar11 + -1;
    pcVar3 = pcVar14 + -0x30;
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      plVar6 = *(longlong **)(pcVar14 + -0x40);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
    pcVar14 = pcVar3;
  } while (lVar11 != 0);
  plVar6 = (longlong *)puVar13[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar6 = *(longlong **)(lVar12 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar6 = *(longlong **)(local_200 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar6 = *(longlong **)(local_1f8 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_158 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  if (local_250[0] != 0) {
    FMemory::Free();
  }
  plVar6 = plStack_1b8;
  if (plStack_1b8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_1b8 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_1b8)(plStack_1b8);
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
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_188 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar1 = (int *)((longlong)local_188 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1e0 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar1 = (int *)((longlong)local_1e0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  plVar6 = (longlong *)local_1f0[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_2;
}



// FUNCTION 141153cf0 FUN_141153cf0 body=5 status=ok
// SIG undefined FUN_141153cf0(void)

undefined1 FUN_141153cf0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



// FUNCTION 141153e30 FUN_141153e30 body=630 status=ok
// SIG undefined FUN_141153e30(void)

void FUN_141153e30(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong local_18;
  ulonglong local_10;
  
  cVar1 = *(char *)(param_1 + 0x868);
  cVar2 = *(char *)(param_1 + 0x869);
  if (cVar2 == '\0') {
    if ((cVar1 != '\0') || (uVar3 = 3, *(char *)(param_1 + 0x87f) != '\0')) {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x869) = uVar3;
    if ((cVar1 != '\0') || (pwVar6 = L"difficulty", *(char *)(param_1 + 0x87f) != '\0')) {
      pwVar6 = L"dlcNewGame";
    }
    local_18 = 0;
    local_10 = 0;
    if (*pwVar6 != L'\0') {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pwVar6[lVar5] != L'\0');
      uVar4 = (int)lVar5 + 1;
      local_10 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar6,(longlong)(int)uVar4 * 2);
    }
    FUN_141175210(param_1,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
    FUN_1411794a0(param_1);
    return;
  }
  if (cVar2 == '\x01') {
    if ((*(char *)(param_1 + 0x87c) == '\0') && (lVar5 = FWeakObjectPtr::Get(), lVar5 == 0)) {
      *(undefined1 *)(param_1 + 0x869) = 3;
      local_18 = 0;
      local_10 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      lVar5 = 0x20;
      pwVar6 = L"characterPicked";
    }
    else {
      *(undefined1 *)(param_1 + 0x869) = 2;
      local_18 = 0;
      local_10 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      lVar5 = 0x16;
      pwVar6 = L"gamePicked";
    }
  }
  else if (cVar2 == '\x02') {
    *(undefined1 *)(param_1 + 0x869) = 3;
    local_18 = 0;
    local_10 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    lVar5 = 0x20;
    pwVar6 = L"characterPicked";
  }
  else {
    if (cVar2 == '\x03') {
      *(undefined1 *)(param_1 + 0x869) = 4;
      pwVar6 = L"difficultyPicked";
      if (cVar1 != '\0') {
        pwVar6 = L"dlcDifficultyPicked";
      }
      local_18 = 0;
      local_10 = 0;
      if (*pwVar6 == L'\0') goto LAB_141153fd2;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pwVar6[lVar5] != L'\0');
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      *(undefined1 *)(param_1 + 0x869) = 5;
      pwVar6 = L"startGame";
      if (cVar1 != '\0') {
        pwVar6 = L"dlcLootPicked";
      }
      local_18 = 0;
      local_10 = 0;
      if (*pwVar6 == L'\0') goto LAB_141153fd2;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pwVar6[lVar5] != L'\0');
    }
    local_18 = 0;
    uVar4 = (int)lVar5 + 1;
    local_10 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    lVar5 = (longlong)(int)uVar4 * 2;
  }
  FGenericPlatformString::Memcpy(local_18,pwVar6,lVar5);
LAB_141153fd2:
  FUN_141175210(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411540b0 FUN_1411540b0 body=733 status=ok
// SIG undefined FUN_1411540b0(void)

void FUN_1411540b0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  longlong local_28;
  ulonglong local_20;
  
  cVar1 = *(char *)((longlong)param_1 + 0x869);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      *(undefined1 *)((longlong)param_1 + 0x869) = 1;
      local_28 = 0;
      local_20 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"dlcCharacterBack",0x22);
      FUN_141175210(param_1,&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      local_28 = 0;
      local_20 = 0;
      lVar5 = *param_1;
      puVar2 = (undefined8 *)FName::FName(local_res8,"MainMenu_Cancel",1);
      goto LAB_141154375;
    }
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      *(undefined1 *)((longlong)param_1 + 0x869) = 3;
      if (((char)param_1[0x10d] != '\0') ||
         (pwVar6 = L"lootBack", *(char *)((longlong)param_1 + 0x87f) != '\0')) {
        pwVar6 = L"dlcLootBack";
      }
      local_28 = 0;
      local_20 = 0;
      if (*pwVar6 != L'\0') {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (pwVar6[lVar5] != L'\0');
        uVar4 = (int)lVar5 + 1;
        local_20 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,pwVar6,(longlong)(int)uVar4 * 2);
      }
      FUN_141175210(param_1,&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      local_28 = 0;
      local_20 = 0;
      lVar5 = *param_1;
      puVar2 = (undefined8 *)FName::FName(local_res8,"MainMenu_Cancel",1);
      goto LAB_141154375;
    }
    if (((char)param_1[0x10d] != '\0') || (*(char *)((longlong)param_1 + 0x87f) != '\0')) {
      lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x874);
      if ((lVar5 == 0) && (*(char *)((longlong)param_1 + 0x87c) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x869) = 1;
        local_28 = 0;
        local_20 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        FGenericPlatformString::Memcpy(local_28,L"dlcCharacterBack",0x22);
        FUN_141175210(param_1,&local_28);
        if (local_28 != 0) {
          FMemory::Free();
        }
        local_28 = 0;
        local_20 = 0;
        lVar5 = *param_1;
        puVar2 = (undefined8 *)FName::FName(local_res8,"MainMenu_Cancel",1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x869) = 2;
        local_28 = 0;
        local_20 = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        FGenericPlatformString::Memcpy(local_28,L"dlcDifficultyBack",0x24);
        FUN_141175210(param_1,&local_28);
        if (local_28 != 0) {
          FMemory::Free();
        }
        local_28 = 0;
        local_20 = 0;
        lVar5 = *param_1;
        puVar2 = (undefined8 *)FName::FName(local_res8,"MainMenu_Cancel",1);
      }
      goto LAB_141154375;
    }
  }
  FUN_142ecd3f0(param_1);
  if ((int)param_1[0xa7] < 2) {
    return;
  }
  local_28 = 0;
  local_20 = 0;
  if ((int)param_1[0xa7] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[0xa6];
  }
  lVar5 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res8,puVar3,1);
LAB_141154375:
  (**(code **)(lVar5 + 0x4e8))(param_1,*puVar2,&local_28);
  return;
}



// FUNCTION 1411543a0 FUN_1411543a0 body=520 status=ok
// SIG undefined FUN_1411543a0(void)

undefined8 FUN_1411543a0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  short *psVar5;
  undefined8 uVar6;
  short *psVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  cVar4 = FUN_141111180();
  if (cVar4 != '\0') {
    return 1;
  }
  uVar6 = 0;
  if (1 < *(int *)(param_1 + 0x7b0) - 4U) {
    if (*(int *)(param_1 + 0x7b0) == 0) {
      if (param_3 != '\0') {
        return 0;
      }
      if (*(char *)(param_2 + 0x18) == '\0') {
        cVar4 = *(char *)(param_2 + 2);
      }
      else {
        cVar4 = *(char *)(param_2 + 0xd);
      }
      if (cVar4 == '\0') {
        psVar5 = &DAT_143f3eda8;
        puVar10 = param_2 + 0xb;
        if (*(char *)(param_2 + 0x18) == '\0') {
          puVar10 = param_2;
        }
        if (*(int *)(param_1 + 0x798) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(param_1 + 0x790);
        }
        if (*(int *)(puVar10 + 1) == 0) {
          psVar7 = &DAT_143f3eda8;
        }
        else {
          psVar7 = (short *)*puVar10;
        }
        puVar1 = (undefined8 *)(param_1 + 0x7a0);
        lVar9 = (longlong)puVar8 - (longlong)psVar7;
        do {
          sVar2 = *psVar7;
          sVar3 = *(short *)((longlong)psVar7 + lVar9);
          if (sVar2 != sVar3) break;
          psVar7 = psVar7 + 1;
        } while (sVar3 != 0);
        if (sVar2 == sVar3) {
          *(undefined4 *)(param_1 + 0x7a8) = 0;
          if (*(int *)(param_1 + 0x7ac) != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,0);
          }
          FUN_14114bb70(param_1);
          lVar9 = FUN_140f9aee0(param_1);
          if ((lVar9 != 0) && (cVar4 = FUN_140bca890(lVar9), cVar4 == '\0')) {
            *(undefined4 *)(param_1 + 0x798) = 0;
            if (*(int *)(param_1 + 0x79c) != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x790,0);
            }
            FUN_141172890(param_1);
          }
        }
        else {
          if (*(int *)(param_1 + 0x7a8) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar1;
          }
          if (*(int *)(puVar10 + 1) != 0) {
            psVar5 = (short *)*puVar10;
          }
          lVar9 = (longlong)puVar8 - (longlong)psVar5;
          do {
            sVar2 = *psVar5;
            sVar3 = *(short *)((longlong)psVar5 + lVar9);
            if (sVar2 != sVar3) break;
            psVar5 = psVar5 + 1;
          } while (sVar3 != 0);
          if (sVar2 == sVar3) {
            *(undefined4 *)(param_1 + 0x7a8) = 0;
            if (*(int *)(param_1 + 0x7ac) != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,0);
            }
          }
          else {
            cVar4 = FUN_1411559a0(param_1,CONCAT71((uint7)(byte)((ushort)sVar3 >> 8),1));
            if (cVar4 != '\0') {
              puVar10 = param_2 + 0xb;
              if (*(char *)(param_2 + 0x18) == '\0') {
                puVar10 = param_2;
              }
              FUN_1411783c0(param_1,puVar10);
            }
          }
        }
      }
    }
    else {
      if (param_3 == '\0') {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x7a8) = 0;
      if (*(int *)(param_1 + 0x7ac) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x7a0,0);
      }
      FUN_14114bb70(param_1);
    }
    FUN_141172890(param_1);
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 1411545d0 FUN_1411545d0 body=93 status=ok
// SIG undefined FUN_1411545d0(void)

void FUN_1411545d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x788) != 0) {
    lVar1 = FUN_1410cb7c0();
    if (lVar1 != 0) {
      FUN_1410ee6c0(*(undefined8 *)(param_1 + 0x788),lVar1);
    }
  }
  if ((*(longlong *)(param_1 + 0x828) == 0) && (*(char *)(param_1 + 0x63c) != '\0')) {
    uVar2 = FUN_1410cb7c0(param_1);
    FUN_141170eb0(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 141154630 FUN_141154630 body=835 status=ok
// SIG undefined FUN_141154630(void)

void FUN_141154630(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong *local_48;
  undefined8 local_40;
  
  plVar1 = (longlong *)(param_1 + 0x838);
  *(undefined4 *)(param_1 + 0x840) = 0;
  if (*(int *)(param_1 + 0x844) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  iVar5 = *(int *)(param_1 + 0x840);
  *(int *)(param_1 + 0x840) = iVar5 + 1;
  if (*(int *)(param_1 + 0x844) < iVar5 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
  }
  lVar10 = *plVar1;
  *(undefined4 *)(lVar10 + (longlong)iVar5 * 8) = local_res8;
  *(undefined4 *)(lVar10 + (longlong)iVar5 * 8 + 4) = local_resc;
  lVar10 = DAT_146875bc0;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    lVar11 = 1;
    if (DVar9 != DAT_1468c21c0) goto LAB_1411546cf;
  }
  lVar11 = 0;
LAB_1411546cf:
  if (0 < *(int *)(lVar10 + lVar11 * 4)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146875bd0) &&
       (_Init_thread_header(&DAT_146875bd0), DAT_146875bd0 == -1)) {
      FName::FName(&DAT_146875bc8,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146875bd0);
    }
    lVar10 = FModuleManager::GetModulePtr_Internal(DAT_146875bc8);
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x28) != 0)) {
      local_48 = (longlong *)0x0;
      local_40 = 0;
      FUN_1404ccea0(*(longlong *)(lVar10 + 0x28),&local_48);
      plVar3 = local_48 + (int)local_40;
      plVar13 = local_48;
      if (local_48 != plVar3) {
LAB_141154761:
        plVar6 = (longlong *)*plVar13;
        if (plVar6 != (longlong *)0x0) {
          lVar10 = FUN_141304350();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
              != lVar10 + 0x88)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            plVar2 = plVar6 + 0x15;
            lVar10 = FWeakObjectPtr::Get(plVar2);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != (int)plVar6[0x16]) && (local_res10 = 0, plVar6[0x17] != 0)) {
                lVar10 = FUN_141796df0();
                FWeakObjectPtr::operator=(plVar2,lVar10);
                if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *(int *)(plVar6 + 0x16) = DAT_1464b56f4;
                }
                lVar10 = FWeakObjectPtr::Get(plVar2);
                if (lVar10 != 0) goto LAB_141154828;
              }
            }
            else {
LAB_141154828:
              lVar11 = FUN_14171bfe0();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                lVar12 = FUN_142f71d80();
                lVar11 = lVar10;
                do {
                  if (lVar11 == lVar12) {
                    lVar11 = FUN_142f71d80();
                    goto LAB_141154885;
                  }
                  lVar11 = *(longlong *)(lVar11 + 0x30);
                } while (lVar11 != 0);
              }
            }
          }
        }
        goto LAB_1411548f3;
      }
LAB_14115490f:
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
  return;
  while (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 != 0) {
LAB_141154885:
    if (lVar10 == lVar11) {
      cVar8 = (**(code **)(*plVar6 + 0x288))(plVar6);
      if ((cVar8 != '\0') && (1 < (int)plVar6[0x44])) {
        FWeakObjectPtr::operator=(&local_res18,plVar6);
        iVar5 = *(int *)(param_1 + 0x840);
        *(int *)(param_1 + 0x840) = iVar5 + 1;
        if (*(int *)(param_1 + 0x844) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
        }
        puVar4 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 8);
        *puVar4 = local_res18;
        puVar4[1] = local_res1c;
      }
      break;
    }
  }
LAB_1411548f3:
  plVar13 = plVar13 + 1;
  if (plVar13 == plVar3) goto LAB_14115490f;
  goto LAB_141154761;
}



// FUNCTION 141154980 FUN_141154980 body=1033 status=ok
// SIG undefined FUN_141154980(void)

void FUN_141154980(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  longlong local_res10;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  wchar_t *local_30;
  
  pwVar11 = (wchar_t *)0x0;
  pwVar4 = pwVar11;
  pwVar12 = pwVar11;
  if (*(longlong *)(param_1 + 0x728) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = (wchar_t *)0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"PNL_EchoNetRoster_Content",0x34);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    pwVar4 = (wchar_t *)FUN_140ecb6b0(*(undefined8 *)(param_1 + 0x728),&local_38,0,6,&local_58);
    pwVar12 = (wchar_t *)0x3;
  }
  *(wchar_t **)(param_1 + 0x718) = pwVar4;
  if (((ulonglong)pwVar12 & 2) != 0) {
    pwVar12 = (wchar_t *)(ulonglong)((uint)pwVar12 & 0xfffffffd);
    plVar10 = local_58;
    for (iVar9 = (int)local_50; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  if ((((ulonglong)pwVar12 & 1) != 0) && (local_38 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    plVar10 = *(longlong **)(param_1 + 0x718);
    pwVar4 = pwVar11;
    local_38 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      pwVar4 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(plVar10,uVar5);
    }
    local_30 = pwVar4;
    FUN_142ecfd10(param_1,&local_38,&local_58);
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x718));
    *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x209) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x20a) = 2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x24c) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x250) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x718) + 0x1ec) = *(undefined4 *)(param_1 + 0x69c);
    *(undefined4 *)(*(longlong *)(param_1 + 0x718) + 0x1e8) = *(undefined4 *)(param_1 + 0x698);
    *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x1c8) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x1c9) = 1;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSelectedPlayerChanged",L"::");
    while (pwVar12 = pwVar4, pwVar12 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
      pwVar11 = pwVar12;
    }
    FName::FName(&local_res10,pwVar11 + 2,1);
    lVar1 = *(longlong *)(param_1 + 0x718);
    plVar10 = (longlong *)(lVar1 + 0x180);
    FWeakObjectPtr::operator=(&local_58,0);
    local_50 = 0;
    FWeakObjectPtr::operator=(&local_58,param_1);
    local_50 = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_58), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_50);
    }
    piVar2 = (int *)*plVar10;
    iVar9 = *(int *)(lVar1 + 0x188);
    uVar5 = local_58;
    for (piVar8 = piVar2; local_58 = (longlong *)uVar5, piVar8 != piVar2 + (longlong)iVar9 * 4;
        piVar8 = piVar8 + 4) {
      local_58._0_4_ = (int)uVar5;
      if ((((*piVar8 == (int)local_58) &&
           (local_58._4_4_ = (int)((ulonglong)uVar5 >> 0x20), bVar13 = piVar8[1] == local_58._4_4_,
           bVar13)) ||
          ((cVar3 = FWeakObjectPtr::IsValid(piVar8), cVar3 == '\0' &&
           (cVar3 = FWeakObjectPtr::IsValid(&local_58), cVar3 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_50)) {
        if ((int)((longlong)piVar8 - (longlong)piVar2 >> 4) != -1) goto LAB_141154cb4;
        break;
      }
      uVar5 = local_58;
    }
    iVar9 = *(int *)(lVar1 + 0x188);
    *(int *)(lVar1 + 0x188) = iVar9 + 1;
    if (*(int *)(lVar1 + 0x18c) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar9);
    }
    puVar7 = (undefined4 *)((longlong)iVar9 * 0x10 + *plVar10);
    *puVar7 = (int)local_58;
    puVar7[1] = local_58._4_4_;
    *(longlong *)(puVar7 + 2) = local_50;
LAB_141154cb4:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"PNL_MenuPager",0x1c);
    local_38 = (longlong *)0x0;
    local_30 = (wchar_t *)0x0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x728),param_1 + 0x720,&local_58,0,6,&local_38);
    plVar10 = local_38;
    for (iVar9 = (int)local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141154d90 FUN_141154d90 body=2688 status=ok
// SIG undefined FUN_141154d90(void)

void FUN_141154d90(longlong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
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
  undefined8 local_178;
  undefined8 local_170;
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
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  
  uVar21 = 0;
  local_res8[0] = 0;
  FUN_1411b6170();
  if ((((*(longlong *)(param_1 + 0x80) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
      (*(longlong *)(param_1 + 0xc0) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x200) != 0)) {
    FUN_141156380(param_1 + 0x1b0);
    FUN_141156380((longlong)*(int *)(param_1 + 0x210) * 0x50 +
                  *(longlong *)
                   (*(longlong *)(param_1 + 0x178) + (longlong)*(int *)(param_1 + 0x214) * 0x10) +
                  0x18);
    FUN_141156380((longlong)*(int *)(param_1 + 0x218) * 0x50 +
                  *(longlong *)
                   (*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 0x21c) * 0x10) +
                  0x18);
    FUN_141150930(param_1 + 0x138,0);
    FUN_141150930(param_1 + 0x160,0);
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x80));
    if ((*(char *)(param_1 + 0x170) == '\0') || (*(char *)(param_1 + 0x171) != '\0')) {
      uVar6 = FName::FName(local_res20,L"OnRevertToDefaultClicked",1);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,L"Revert To Default Control Scheme",L"ControllerOptions",
                         L"REVERT_CUSTOM_CONTROLS");
      lVar8 = FUN_1411b83b0(param_1,uVar7,uVar6);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_130 + 1;
        lVar5 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x198) = 1;
      }
      local_1a8 = 0;
      local_1a0 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
      FGenericPlatformString::Memcpy(local_1a8,L"leftColumnTitle",0x20);
      local_1b8 = (longlong *)0x0;
      local_1b0 = 0;
      local_178 = 0;
      plVar9 = (longlong *)
               FUN_140ac4770(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x200),&local_1a8,0,6,
                             &local_1b8);
      plVar15 = local_1b8;
      for (iVar20 = (int)local_1b0; iVar20 != 0; iVar20 = iVar20 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_1b8 != (longlong *)0x0) {
        FMemory::Free(local_1b8);
      }
      if (local_1a8 != 0) {
        FMemory::Free();
      }
      local_188 = 0;
      local_180 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      FGenericPlatformString::Memcpy(local_188,L"rightColumnTitle",0x22);
      local_198 = (longlong *)0x0;
      local_190 = 0;
      local_170 = 0;
      plVar10 = (longlong *)
                FUN_140ac4770(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x200),&local_188,0,6,
                              &local_198);
      plVar15 = local_198;
      for (iVar20 = (int)local_190; iVar20 != 0; iVar20 = iVar20 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_198 != (longlong *)0x0) {
        FMemory::Free(local_198);
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
      if ((plVar9 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
        lVar8 = *plVar9;
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_120,L"Walking",L"ControllerOptions",L"WalkingText");
        (**(code **)(lVar8 + 0x2b0))(plVar9,uVar6,1,0);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_118 + 1;
          lVar8 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        lVar8 = *plVar10;
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_108,L"Driving",L"ControllerOptions",L"DrivingText");
        (**(code **)(lVar8 + 0x2b0))(plVar10,uVar6,1,0);
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_100 + 1;
          lVar8 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*local_100 + 8))(local_100,1);
            }
          }
        }
      }
    }
    else {
      uVar6 = FName::FName(local_res8,L"OnCustomizeControlsClicked",1);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_150,L"Customize Controls",L"ControllerOptions",L"CUSTOMIZE_CONTROLS")
      ;
      lVar8 = FUN_1411b83b0(param_1,uVar7,uVar6);
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_148 + 1;
        lVar5 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x198) = 1;
      }
      local_1e8 = 0;
      local_1e0 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
      FGenericPlatformString::Memcpy(local_1e8,L"leftColumnTitle",0x20);
      local_1f8 = (longlong *)0x0;
      local_1f0 = 0;
      local_res10 = 0;
      plVar9 = (longlong *)
               FUN_140ac4770(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x200),&local_1e8,0,6,
                             &local_1f8);
      plVar15 = local_1f8;
      for (iVar20 = (int)local_1f0; iVar20 != 0; iVar20 = iVar20 + -1) {
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
      local_1c8 = 0;
      local_1c0 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
      FGenericPlatformString::Memcpy(local_1c8,L"rightColumnTitle",0x22);
      local_1d8 = (longlong *)0x0;
      local_1d0 = 0;
      local_res18 = 0;
      plVar10 = (longlong *)
                FUN_140ac4770(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x200),&local_1c8,0,6,
                              &local_1d8);
      plVar15 = local_1d8;
      for (iVar20 = (int)local_1d0; iVar20 != 0; iVar20 = iVar20 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_1d8 != (longlong *)0x0) {
        FMemory::Free(local_1d8);
      }
      if (local_1c8 != 0) {
        FMemory::Free();
      }
      if ((plVar9 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
        lVar8 = *plVar9;
        uVar6 = FUN_1404b03b0();
        (**(code **)(lVar8 + 0x2b0))(plVar9,uVar6,1,0);
        lVar8 = *plVar10;
        uVar6 = FUN_1404b03b0();
        (**(code **)(lVar8 + 0x2b0))(plVar10,uVar6,1,0);
      }
    }
    lVar8 = *(longlong *)
             (*(longlong *)(param_1 + 0x178) + (longlong)*(int *)(param_1 + 0x214) * 0x10);
    puVar16 = *(undefined8 **)(lVar8 + 0x40 + (longlong)*(int *)(param_1 + 0x210) * 0x50);
    uVar11 = (ulonglong)*(int *)(lVar8 + 0x48 + (longlong)*(int *)(param_1 + 0x210) * 0x50);
    uVar19 = uVar11 & 0x1fffffffffffffff;
    if (puVar16 + uVar11 < puVar16) {
      uVar19 = uVar21;
    }
    uVar11 = uVar21;
    if (uVar19 != 0) {
      do {
        FUN_14114e800(param_1,*puVar16,*(undefined8 *)(param_1 + 0xe8),0);
        uVar11 = uVar11 + 1;
        puVar16 = puVar16 + 1;
      } while (uVar11 != uVar19);
    }
    lVar8 = *(longlong *)
             (*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 0x21c) * 0x10);
    puVar16 = *(undefined8 **)(lVar8 + 0x40 + (longlong)*(int *)(param_1 + 0x218) * 0x50);
    uVar11 = (ulonglong)*(int *)(lVar8 + 0x48 + (longlong)*(int *)(param_1 + 0x218) * 0x50);
    uVar19 = uVar11 & 0x1fffffffffffffff;
    if (puVar16 + uVar11 < puVar16) {
      uVar19 = uVar21;
    }
    uVar11 = uVar21;
    if (uVar19 != 0) {
      do {
        FUN_14114e800(param_1,*puVar16,*(undefined8 *)(param_1 + 0xf0),2);
        uVar11 = uVar11 + 1;
        puVar16 = puVar16 + 1;
      } while (uVar11 != uVar19);
    }
    puVar16 = *(undefined8 **)(param_1 + 0x1d8);
    uVar19 = (longlong)*(int *)(param_1 + 0x1e0) & 0x1fffffffffffffff;
    if (puVar16 + *(int *)(param_1 + 0x1e0) < puVar16) {
      uVar19 = uVar21;
    }
    if (uVar19 != 0) {
      do {
        FUN_14114e800(param_1,*puVar16,*(undefined8 *)(param_1 + 0xf8),1);
        uVar21 = uVar21 + 1;
        puVar16 = puVar16 + 1;
      } while (uVar21 != uVar19);
    }
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2b8))
              (*(longlong **)(param_1 + 0x80),0xffffffff,1,0);
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1f8) != 0)) {
      FUN_14119f1e0();
      lVar8 = 0x148;
      if (*(char *)(param_1 + 0x208) != '\x02') {
        lVar8 = 0x120;
      }
      FUN_1411be220(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),lVar8 + param_1);
      cVar2 = *(char *)(param_1 + 0x208);
      puVar13 = local_d8;
      pwVar18 = L"DrivingBindingsText";
      pwVar17 = L"ControllerOptions";
      pwVar14 = L"Driving Controls";
      if (cVar2 != '\x02') {
        pwVar18 = L"WalkingBindingsText";
        pwVar17 = L"ControllerOptions";
        pwVar14 = L"Walking Controls";
        puVar13 = local_f0;
      }
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (puVar13,pwVar14,pwVar17,pwVar18);
      FText::FText(local_168,uVar6);
      if ((((cVar2 != '\x02') + 1U & 2) != 0) && (local_e8 != (longlong *)0x0)) {
        LOCK();
        plVar15 = local_e8 + 1;
        lVar8 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      if ((cVar2 == '\x02') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        plVar15 = local_d0 + 1;
        lVar8 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 400) != 0) {
        if ((*(char *)(param_1 + 0x170) == '\0') || (*(char *)(param_1 + 0x171) != '\0')) {
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_c0,L"Custom Mapping",L"ControllerOptions",L"CustomMappingText");
          bVar4 = false;
          bVar3 = true;
        }
        else {
          uVar6 = FUN_1404b03b0();
          uVar6 = FText::FText(local_a8,uVar6);
          bVar4 = true;
          bVar3 = false;
        }
        uVar6 = FText::FText(local_90,uVar6);
        uVar7 = FText::FText(local_78,local_168);
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_60,L"Layout",L"ControllerOptions",L"LayoutTitle");
        FUN_1411b81c0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),uVar12,uVar7,uVar6);
        if ((bVar3) && (local_b8 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_b8 + 1;
          lVar8 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)local_b8 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*local_b8 + 8))(local_b8,1);
            }
          }
        }
        if ((bVar4) && (local_a0 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_a0 + 1;
          lVar8 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_160 + 1;
        lVar8 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141155810 FUN_141155810 body=47 status=ok
// SIG undefined FUN_141155810(void)

undefined8 FUN_141155810(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x178) != 0) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x178) + 0x170) + 0x48))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141155840 FUN_141155840 body=113 status=ok
// SIG undefined FUN_141155840(void)

undefined8 FUN_141155840(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x1250) == 0) && (*(longlong **)(param_1 + 0xb30) != (longlong *)0x0)
     ) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0xb30) + 0xfa8))();
    if (lVar2 != 0) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb30) + 0xfa8))();
      uVar3 = FUN_140ec9a00(uVar3);
      *(undefined8 *)(param_1 + 0x1250) = uVar3;
    }
  }
  if (*(longlong *)(param_1 + 0x1250) != 0) {
    cVar1 = FUN_141111680();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1411558c0 FUN_1411558c0 body=223 status=ok
// SIG undefined FUN_1411558c0(void)

ulonglong FUN_1411558c0(undefined8 *param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  ulonglong uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  
  psVar4 = &DAT_143f3eda8;
  if (param_2 == 0) {
LAB_141155939:
    bVar3 = false;
  }
  else {
    puVar9 = param_1 + 0xb;
    if (*(char *)(param_1 + 0x18) == '\0') {
      puVar9 = param_1;
    }
    if (*(int *)(puVar9 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar9;
    }
    if (*(int *)(param_2 + 0x798) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(ushort **)(param_2 + 0x790);
    }
    lVar11 = (longlong)puVar10 - (longlong)puVar6;
    do {
      uVar7 = (uint)*(ushort *)((longlong)puVar6 + lVar11);
      uVar8 = (uint)*puVar6;
      if (uVar8 != uVar7) break;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
    if ((uVar8 != uVar7) || (*(int *)(param_2 + 0x7b0) == uVar8 - uVar7)) goto LAB_141155939;
    bVar3 = true;
  }
  if (param_2 != 0) {
    puVar9 = param_1 + 0xb;
    if (*(char *)(param_1 + 0x18) == '\0') {
      puVar9 = param_1;
    }
    if (*(int *)(puVar9 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar9;
    }
    if (*(int *)(param_2 + 0x7a8) != 0) {
      psVar4 = *(short **)(param_2 + 0x7a0);
    }
    lVar11 = (longlong)puVar10 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar11);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (sVar1 == sVar2) {
      uVar5 = CONCAT71((int7)((ulonglong)psVar4 >> 8),1);
      goto LAB_141155992;
    }
  }
  uVar5 = (ulonglong)psVar4 & 0xffffffffffffff00;
LAB_141155992:
  if ((!bVar3) && ((char)uVar5 == '\0')) {
    return uVar5;
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1411559a0 FUN_1411559a0 body=488 status=ok
// SIG undefined FUN_1411559a0(void)

undefined8 FUN_1411559a0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (pcVar7 = (char *)FUN_140a5dc70(lVar5), *pcVar7 == '\x02')) {
      return 1;
    }
  }
  FText::FText(local_58);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_40,
                     L"You must be in an online network mode in order to start matchmaking.",
                     L"GFxEchoNetMatchmakingMenu",L"InvalidNetworkMode");
  FText::operator=(local_58,uVar8);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (param_2 != '\0') {
    FWeakObjectPtr::operator=(local_68,0);
    local_60 = 0;
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Matchmaking Error",L"GFxEchoNetMatchmakingMenu",
                       L"MatchmakingError");
    FUN_1410f3960(uVar8,uVar9,local_58,local_68,1,0,2);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return 0;
}



// FUNCTION 141155b90 FUN_141155b90 body=182 status=ok
// SIG undefined FUN_141155b90(void)

ulonglong FUN_141155b90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar6 = FWeakObjectPtr::IsValid(param_1 + 0xb28);
  if (((char)uVar6 != '\0') && (*(longlong *)(param_1 + 0xb30) != 0)) {
    FUN_142dcf3a0(*(longlong *)(param_1 + 0xb30),local_18);
    uVar7 = FWeakObjectPtr::Get(param_1 + 0xb28);
    iVar5 = FUN_140bb88c0(uVar7,local_18);
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
    return (ulonglong)(iVar5 == 2);
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 141155c50 FUN_141155c50 body=48 status=ok
// SIG undefined FUN_141155c50(void)

ulonglong FUN_141155c50(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_142ebe130();
  if ((char)uVar2 != '\0') {
    uVar2 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0xff4);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0xff4) = 0;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 == 0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141155c80 FUN_141155c80 body=1287 status=ok
// SIG undefined FUN_141155c80(void)

undefined1 FUN_141155c80(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 local_res18;
  uint uStackX_1c;
  longlong *local_res20;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  plVar10 = (longlong *)0x0;
  cVar4 = FKey::IsGamepadKey(param_2);
  if (cVar4 == '\0') {
LAB_141155e78:
    plVar12 = (longlong *)((ulonglong)uStackX_1c << 0x20);
    plVar9 = plVar10;
LAB_141155e80:
    local_res20 = (longlong *)((ulonglong)uStackX_1c << 0x20);
    local_a8 = (longlong *)((ulonglong)uStackX_1c << 0x20);
LAB_141155e9d:
    plVar10 = (longlong *)((ulonglong)uStackX_1c << 0x20);
LAB_141155ea5:
    plVar5 = (longlong *)((ulonglong)uStackX_1c << 0x20);
    plVar13 = plVar10;
LAB_141155ead:
    plVar10 = (longlong *)((ulonglong)uStackX_1c << 0x20);
LAB_141155eb5:
    plVar6 = (longlong *)((ulonglong)uStackX_1c << 0x20);
LAB_141155ebd:
    plVar7 = (longlong *)((ulonglong)uStackX_1c << 0x20);
    plVar11 = plVar10;
  }
  else {
    cVar4 = FKey::IsFloatAxis(param_2);
    if (cVar4 != '\0') goto LAB_141155e78;
    cVar4 = FKey::IsVectorAxis(param_2);
    if (cVar4 != '\0') goto LAB_141155e78;
    plVar5 = (longlong *)FKey::GetFName(param_2,local_90);
    plVar9 = (longlong *)0x1;
    plVar12 = plVar10;
    if (*plVar5 == DAT_1469ea498) goto LAB_141155e80;
    plVar5 = (longlong *)FKey::GetFName(param_2,local_88);
    plVar9 = (longlong *)0x3;
    local_a8 = (longlong *)0x0;
    if (*plVar5 == DAT_1469ea4e0) {
LAB_141155e66:
      local_res20 = (longlong *)((ulonglong)uStackX_1c << 0x20);
      goto LAB_141155e9d;
    }
    cVar4 = FKey::IsMouseButton(param_2);
    if (cVar4 != '\0') goto LAB_141155e66;
    plVar5 = (longlong *)FKey::GetFName(param_2,local_80);
    plVar9 = (longlong *)0x7;
    local_res20 = (longlong *)0x0;
    if (*plVar5 == DAT_1469ea618) goto LAB_141155e9d;
    plVar5 = (longlong *)FKey::GetFName(param_2,local_78);
    plVar9 = (longlong *)0xf;
    if (*plVar5 == DAT_1469ea630) goto LAB_141155ea5;
    plVar6 = (longlong *)FKey::GetFName(param_2,local_70);
    plVar9 = (longlong *)0x1f;
    plVar5 = plVar10;
    plVar13 = plVar10;
    if (*plVar6 == DAT_1469ea660) goto LAB_141155ead;
    plVar6 = (longlong *)FKey::GetFName(param_2,local_68);
    plVar9 = (longlong *)0x3f;
    if (*plVar6 == DAT_1469ea648) goto LAB_141155eb5;
    plVar7 = (longlong *)FKey::GetFName(param_2,local_60);
    plVar9 = (longlong *)0x7f;
    plVar6 = plVar10;
    if (*plVar7 == DAT_1469ea678) goto LAB_141155ebd;
    plVar8 = (longlong *)FKey::GetFName(param_2,local_58);
    plVar9 = (longlong *)0xff;
    plVar11 = plVar10;
    plVar7 = plVar10;
    if (*plVar8 != DAT_1469ea690) {
      plVar8 = (longlong *)FKey::GetFName(param_2,local_50);
      plVar9 = (longlong *)0x1ff;
      local_98 = (longlong *)0x0;
      plVar11 = (longlong *)0x0;
      plVar5 = (longlong *)0x0;
      plVar13 = (longlong *)0x0;
      plVar7 = (longlong *)0x0;
      plVar6 = (longlong *)0x0;
      if (*plVar8 != DAT_1469ea6c0) {
        plVar8 = (longlong *)FKey::GetFName(param_2,local_48);
        plVar9 = (longlong *)0x3ff;
        local_a0 = (longlong *)0x0;
        if (*plVar8 != DAT_1469ea6a8) {
          local_res18 = 1;
          plVar11 = plVar10;
          plVar5 = plVar10;
          plVar13 = plVar10;
          plVar7 = plVar10;
          plVar6 = plVar10;
          goto LAB_141155ecd;
        }
      }
    }
  }
  local_res18 = 0;
LAB_141155ecd:
  if ((uint)plVar9 >> 9 != 0) {
    plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xfffffdff);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_a0 + 1;
      lVar3 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_a0)();
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  if (((uint)plVar9 >> 8 & 1) != 0) {
    plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xfffffeff);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_98 + 1;
      lVar3 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_98)();
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  if (((char)plVar9 < '\0') &&
     (plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xffffff7f), plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar7 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  if ((((ulonglong)plVar9 & 0x40) != 0) &&
     (plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xffffffbf), plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  if ((((ulonglong)plVar9 & 0x20) != 0) &&
     (plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xffffffdf), plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar11 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if ((((ulonglong)plVar9 & 0x10) != 0) &&
     (plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xffffffef), plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if ((((ulonglong)plVar9 & 8) != 0) &&
     (plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xfffffff7), plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar13)(plVar13);
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
  if (((ulonglong)plVar9 & 4) != 0) {
    plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xfffffffb);
    if (local_res20 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_res20 + 1;
      lVar3 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_res20)(local_res20);
        LOCK();
        piVar1 = (int *)((longlong)local_res20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_res20 + 8))(local_res20,1);
        }
      }
    }
  }
  if (((ulonglong)plVar9 & 2) != 0) {
    plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xfffffffd);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_a8 + 1;
      lVar3 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  if ((((ulonglong)plVar9 & 1) != 0) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar12)(plVar12);
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
  return local_res18;
}



// FUNCTION 141156190 FUN_141156190 body=387 status=ok
// SIG undefined FUN_141156190(void)

void FUN_141156190(longlong param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  cVar4 = FUN_14044aea0(param_1 + 0x478,0);
  if (cVar4 != '\0') {
    iVar5 = FUN_141152dd0(param_1);
    if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x460))) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x458) + (longlong)iVar5 * 0x10);
      uVar6 = UGameplayStatics::GetStreamingLevel(param_1,uVar1);
      FWeakObjectPtr::operator=(param_1 + 0x478,uVar6);
      cVar4 = FUN_14044af00(param_1 + 0x478,0);
      if (cVar4 != '\0') {
        *(int *)(param_1 + 0x474) = iVar5;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnClaptrapSkitSublevelLoaded",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        lVar8 = FWeakObjectPtr::Get(param_1 + 0x478);
        FUN_14074ba20(lVar8 + 0xe0,param_1,FUN_141158520,local_res8);
        local_28 = 0xffffffff;
        uStack_24 = 0xffffffff;
        uStack_20 = 0;
        uStack_1c = 0;
        local_18 = 0;
        UGameplayStatics::LoadStreamLevel(param_1,uVar1,1,0,&local_28);
      }
    }
  }
  return;
}



// FUNCTION 141156320 FUN_141156320 body=86 status=ok
// SIG undefined FUN_141156320(void)

longlong FUN_141156320(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_140680770();
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



// FUNCTION 141156380 FUN_141156380 body=86 status=ok
// SIG undefined FUN_141156380(void)

longlong FUN_141156380(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_140680830();
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



// FUNCTION 1411563e0 FUN_1411563e0 body=1882 status=ok
// SIG undefined FUN_1411563e0(void)

undefined4 FUN_1411563e0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  int local_res8 [2];
  longlong *local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong local_1b8 [10];
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  longlong *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  longlong *local_130;
  longlong local_128 [2];
  longlong local_118 [2];
  undefined1 local_108 [48];
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  undefined1 local_68 [8];
  longlong local_60;
  
  lVar11 = *param_2;
  local_res10 = param_2;
  if (lVar11 != 0) {
    lVar6 = FUN_14133af30();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      lVar6 = 0;
      cVar4 = *(char *)(lVar11 + 0x338);
      param_1[0x1c8] = 0;
      if (param_1[0x174] != 0) {
        if (cVar4 == '\x02') {
          local_1b8[0] = 0;
          local_1b8[1] = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8,0);
          FGenericPlatformString::Memcpy(local_1b8[0],L"friendMessage",0x1c);
          FUN_142088cf0(param_1[0x174],local_1b8);
          lVar7 = local_1b8[0];
        }
        else {
          local_1b8[2] = 0;
          local_1b8[3] = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 2,0);
          FGenericPlatformString::Memcpy(local_1b8[2],L"systemMessage",0x1c);
          FUN_142088cf0(param_1[0x174],local_1b8 + 2);
          lVar7 = local_1b8[2];
        }
        if (lVar7 != 0) {
          FMemory::Free();
        }
      }
      plVar9 = (longlong *)param_1[0x177];
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9,lVar11 + 0x358,1,0);
      }
      plVar9 = (longlong *)param_1[0x178];
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9,lVar11 + 0x340,1,0);
      }
      plVar9 = (longlong *)param_1[0x179];
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9,lVar11 + 0x370,1,0);
      }
      plVar9 = (longlong *)param_1[0x187];
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x278))(plVar9,0);
      }
      if (param_1[0x175] != 0) {
        lVar7 = FUN_1411530f0(lVar11);
        if ((cVar4 == '\x02') && (lVar7 != 0)) {
          local_1b8[4] = 0;
          local_1b8[5] = 0x22;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 4,0);
          FGenericPlatformString::Memcpy(local_1b8[4],L"MessagePanelReplaceTexture_nopack",0x44);
          (**(code **)(*param_1 + 0x2a0))(param_1,local_1b8 + 4,lVar7);
          if (local_1b8[4] != 0) {
            FMemory::Free();
          }
          uVar10 = 2;
        }
        else {
          uVar10 = 1;
        }
        FUN_142088ee0(param_1[0x175],uVar10);
      }
      if (param_1[0x176] != 0) {
        plVar9 = *(longlong **)(lVar11 + 0x3d0);
        local_168 = *(longlong *)(lVar11 + 0x3c8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        uStack_160 = plVar9;
        if (local_168 == 0) {
          uVar10 = FUN_1411f1490(local_118,7);
          FUN_142088cf0(param_1[0x176],uVar10);
          if (local_118[0] != 0) {
            FMemory::Free();
          }
        }
        else {
          local_168._4_4_ = (undefined4)((ulonglong)local_168 >> 0x20);
          uStack_160._0_4_ = SUB84(plVar9,0);
          uStack_160._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
          local_148 = (undefined4)local_168;
          uStack_144 = local_168._4_4_;
          uStack_140 = (undefined4)uStack_160;
          uStack_13c = uStack_160._4_4_;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          uVar10 = FWeakObjectPtr::Get(param_1 + 0x165);
          uVar3 = FUN_140bbd2a0(uVar10,&local_148);
          plVar9 = (longlong *)CONCAT44(uStack_13c,uStack_140);
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
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          uVar10 = FUN_1411f1490(local_128,uVar3);
          FUN_142088cf0(param_1[0x176],uVar10);
          param_2 = local_res10;
          if (local_128[0] != 0) {
            FMemory::Free();
            param_2 = local_res10;
          }
        }
        plVar9 = uStack_160;
        if (uStack_160 != (longlong *)0x0) {
          LOCK();
          plVar2 = uStack_160 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*uStack_160)(uStack_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*uStack_160 + 8))(uStack_160,1);
            }
          }
        }
      }
      if (*(char *)(lVar11 + 1000) == '\0') {
        if (param_1[0x166] != 0) {
          FUN_140d02940(param_1[0x166],(char *)(lVar11 + 0x338));
        }
        iVar5 = (int)param_2[1];
        if ((iVar5 < 0) || ((int)param_1[0x1e2] <= iVar5)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          *(undefined1 *)((longlong)iVar5 * 0xb8 + 0xb0 + param_1[0x1e1]) = 1;
        }
        *(undefined1 *)(lVar11 + 1000) = 1;
        plVar9 = *(longlong **)(lVar11 + 0x260);
        local_150 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(plVar9 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (!bVar12) {
            LOCK();
            bVar12 = iVar5 == (int)plVar9[1];
            if (bVar12) {
              *(int *)(plVar9 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar12) {
              if (plVar9 != (longlong *)0x0) {
                local_158 = *(longlong *)(lVar11 + 600);
                if (local_158 != 0) {
                  FUN_142056670(local_158,*(char *)(lVar11 + 1000) == '\0');
                }
                plVar2 = local_150;
                LOCK();
                plVar9 = plVar9 + 1;
                lVar7 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_150)(local_150);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_150 + 8))(local_150,1);
                  }
                }
              }
              break;
            }
            LOCK();
            iVar5 = (int)plVar9[1];
            bVar12 = iVar5 == 0;
            if (bVar12) {
              *(int *)(plVar9 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
        }
        FUN_142ed2820(lVar11,*(char *)(lVar11 + 1000) != '\0',1);
      }
      lVar11 = lVar11 + 0x388;
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x1d0,local_res8,lVar11);
      lVar7 = lVar6;
      if (((local_res8[0] != -1) &&
          (lVar8 = (longlong)local_res8[0] * 0x20 + param_1[0x1d0], lVar8 != 0)) &&
         (plVar9 = (longlong *)(lVar8 + 0x10), plVar9 != (longlong *)0x0)) {
        lVar7 = *plVar9;
      }
      plVar9 = param_1 + 0x1c6;
      *plVar9 = lVar7;
      if (lVar7 == 0) {
        _guard_xfg_dispatch_icall_nop(local_d8,0,0x68);
        uVar10 = FUN_142fde710(local_68,lVar11);
        cVar4 = FUN_143001780(local_d8,uVar10);
        if (local_60 != 0) {
          FMemory::Free();
        }
        if (cVar4 != '\0') {
          uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar7 = FUN_143019ed0(uVar10,local_d8,1,0);
          *plVar9 = lVar7;
          if (lVar7 != 0) {
            FUN_14223ef90(lVar7,0);
          }
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        if (local_b8 != 0) {
          FMemory::Free();
        }
      }
      if (*plVar9 == 0) {
        if (param_1[0x17c] != 0) {
          local_1b8[8] = 0;
          local_1b8[9] = 7;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 8,0);
          FGenericPlatformString::Memcpy(local_1b8[8],L"noItem",0xe);
          FUN_142088910(param_1[0x17c],local_1b8 + 8);
          if (local_1b8[8] != 0) {
            FMemory::Free();
          }
        }
        param_1[0x1c7] = 0;
        if (param_1[0x16e] != 0) {
          plVar9 = (longlong *)(param_1[0x16e] + 0x1b0);
          (**(code **)(*plVar9 + 0x20))(plVar9,0);
        }
      }
      else {
        local_138 = lVar11;
        local_130 = plVar9;
        FUN_14044d970(param_1 + 0x1d0,local_res18,&local_138,0);
        plVar2 = (longlong *)*plVar9;
        local_res20 = FUN_14301f8f0();
        lVar11 = (**(code **)(*plVar2 + 0x628))(plVar2,local_res20);
        if ((param_1[0x16e] != 0) && ((char)param_1[0x1ca] == '\x01')) {
          param_1[0x1c8] = lVar11;
          FUN_14117a510(param_1);
        }
        lVar7 = lVar6;
        if (lVar11 != 0) {
          lVar7 = *(longlong *)(lVar11 + 0x208);
        }
        if (lVar7 != 0) {
          lVar6 = *(longlong *)(lVar7 + 0x1d8);
        }
        param_1[0x1c7] = lVar6;
        if (lVar6 != 0) {
          FUN_141152800(param_1,local_108,*plVar9);
          FUN_141179180(param_1,local_108,0);
          if (param_1[0x17c] != 0) {
            local_1b8[6] = 0;
            local_1b8[7] = 6;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 6,0);
            FGenericPlatformString::Memcpy(local_1b8[6],L"intro",0xc);
            FUN_142088910(param_1[0x17c],local_1b8 + 6);
            if (local_1b8[6] != 0) {
              FMemory::Free();
            }
          }
          FUN_140ddef50(local_108);
        }
      }
      goto LAB_141156b1b;
    }
  }
  if ((int)param_1[0x1e2] == 0) {
    param_1[0x1c8] = 0;
    FUN_14117a510(param_1);
    FUN_14116d1b0(param_1);
  }
LAB_141156b1b:
  LOCK();
  lVar11 = param_1[0xb1];
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return (int)lVar11;
}



// FUNCTION 141156b40 FUN_141156b40 body=2387 status=ok
// SIG undefined FUN_141156b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141156b40(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,
                  undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_348 [32];
  undefined1 local_328;
  undefined1 local_320;
  longlong **local_318;
  longlong *local_308;
  undefined8 *puStack_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  undefined8 *local_2d8;
  ulonglong *puStack_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined4 local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_2f8 = param_1;
  if (param_2 == 0) goto LAB_141157440;
  lVar6 = FUN_1410cc2a0(param_2,local_130);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1f0,
                     L"{0}|platform(default=Rebinding \"{KeyToRebind}\"\nPress new input to bind.,xbox=Rebinding \"{KeyToRebind}\"\nPress new input to bind.,playstation=Rebinding \"{KeyToRebind}\"\nPress new input to bind.)\n\n{GbxMenu_BackOut, 24, 24}  Cancel"
                     ,L"ControllerOptions",L"RebindBoxDescription");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_160,uVar7);
  local_e8[0] = 4;
  FText::FText(local_d8,lVar6);
  local_2c8 = *puVar8;
  local_308 = (longlong *)local_e8;
  puStack_300 = (undefined8 *)local_b8;
  local_2c0 = puVar8[1];
  local_c0 = '\x01';
  if (local_2c0 != 0) {
    LOCK();
    *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
    UNLOCK();
  }
  local_298 = local_308;
  uStack_290 = (undefined4 *)puStack_300;
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_288,&local_298);
  uVar7 = FText::Format(local_208,&local_2c8,uVar7);
  FText::FText(local_220,uVar7);
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_200 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_288);
  if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_d0 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
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
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1e8 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  lVar6 = FUN_1410cc2a0(param_2,local_118);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1c0,
                     L"{0}|platform(default=Rebinding \"{KeyToRebind}\"\nPress new input to bind.,xbox=Rebinding \"{KeyToRebind}\"\nPress new input to bind.,playstation=Rebinding \"{KeyToRebind}\"\nPress new input to bind.)\n\n{OakPC_PauseGame}  Cancel"
                     ,L"ControllerOptions",L"RebindBoxDescriptionConsole");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_150,uVar7);
  local_b8[0] = 4;
  FText::FText(local_a8,lVar6);
  local_2b8 = *puVar8;
  local_2d8 = (undefined8 *)local_b8;
  puStack_2d0 = (ulonglong *)local_88;
  local_2b0 = puVar8[1];
  local_90 = '\x01';
  if (local_2b0 != 0) {
    LOCK();
    *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
    UNLOCK();
  }
  local_278 = (undefined4 *)local_2d8;
  uStack_270 = puStack_2d0;
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_268,&local_278);
  uVar7 = FText::Format(local_1d8,&local_2b8,uVar7);
  FText::FText(local_178,uVar7);
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1d0 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)local_1d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_268);
  if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_a0 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1b8 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)local_1b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
  lVar6 = *(longlong *)(param_2 + 0xb8);
  if (lVar6 != 0) {
    local_2f0 = DAT_1469e97d8;
    local_2e8 = DAT_1469e97e0;
    local_2e0 = DAT_1469e97e8;
    if (DAT_1469e97e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e97e8 + 1) = (int)DAT_1469e97e8[1] + 1;
      UNLOCK();
    }
    if ((*(char *)(param_3 + 4) != '\0') && (param_4 != -1)) {
      FKey::operator=(&local_2f0,param_3[2] + (longlong)param_4 * 0x18);
    }
    plVar10 = local_2e0;
    lVar4 = *(longlong *)(local_2f8 + 0x68);
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
      UNLOCK();
    }
    local_308 = (longlong *)0x0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x60);
    lVar5 = local_2f8;
    puStack_300 = (undefined8 *)CONCAT44(puStack_300._4_4_,6);
    local_308 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      *plVar9 = (longlong)&PTR_GetPoolName_1446d0400;
      plVar9[1] = lVar6;
      plVar9[2] = param_2;
      plVar9[3] = local_2f0;
      plVar9[4] = local_2e8;
      plVar9[5] = (longlong)local_2e0;
      plVar9[7] = lVar4;
      plVar9[8] = local_2f8;
      *(undefined1 *)(plVar9 + 6) = param_5;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar9[10] = lVar6;
      *plVar9 = (longlong)&PTR_GetPoolName_1446d0448;
    }
    lVar6 = FUN_1410cc2a0(param_2,local_100);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_190,L"Rebind \"{CommandToRebind}\"",L"ControllerOptions",L"RebindTitle"
                      );
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_140,uVar7);
    local_88[0] = 4;
    FText::FText(local_78,lVar6);
    local_2a8 = *puVar8;
    local_2d8 = (undefined8 *)local_88;
    puStack_2d0 = local_58;
    local_2a0 = puVar8[1];
    local_60 = '\x01';
    if (local_2a0 != 0) {
      LOCK();
      *(int *)(local_2a0 + 8) = *(int *)(local_2a0 + 8) + 1;
      UNLOCK();
    }
    local_258 = (undefined4 *)local_2d8;
    uStack_250 = puStack_2d0;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_248,&local_258);
    uVar7 = FText::Format(local_1a8,&local_2a8,uVar7);
    FText::FText(local_238,uVar7);
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1a0 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_248);
    if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_318 = &local_308;
    local_320 = 1;
    local_328 = 0;
    uVar7 = FUN_1411bb8c0(lVar5,local_238,local_220,1);
    *(undefined8 *)(lVar5 + 0xb8) = uVar7;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_230 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_230 + 8))(local_230,1);
        }
      }
    }
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_188 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
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
    if ((int)puStack_300 == 0) {
LAB_141157335:
      if (local_308 != (longlong *)0x0) {
        FMemory::Free(local_308);
      }
    }
    else if (local_308 != (longlong *)0x0) {
      (**(code **)(*local_308 + 0x28))(local_308,0);
      if (local_308 != (longlong *)0x0) {
        local_308 = (longlong *)FMemory::Realloc(local_308,0,0);
      }
      puStack_300 = (undefined8 *)((ulonglong)puStack_300 & 0xffffffff00000000);
      goto LAB_141157335;
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
    plVar10 = local_2e0;
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_2e0 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_2e0)(local_2e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2e0 + 8))(local_2e0,1);
        }
      }
    }
  }
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_170 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_218 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
LAB_141157440:
  if (*(char *)(param_3 + 4) != '\0') {
    *(undefined1 *)(param_3 + 4) = 0;
    *param_3 = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_3 + 2);
    *param_3 = &PTR_FUN_1440385e0;
  }
  return;
}



// FUNCTION 1411574a0 FUN_1411574a0 body=81 status=ok
// SIG undefined FUN_1411574a0(void)

void FUN_1411574a0(void)

{
  return;
}



// FUNCTION 141157500 FUN_141157500 body=180 status=ok
// SIG undefined FUN_141157500(void)

void FUN_141157500(longlong param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x810);
  iVar2 = *(int *)(param_1 + 0x814);
  if (0 < iVar2) {
    iVar4 = (int)(iVar1 + (uint)param_2 * 2 + iVar2) % (iVar2 + 1);
  }
  *(int *)(param_1 + 0x810) = iVar4;
  if (iVar1 != iVar4) {
    iVar1 = *(int *)(param_1 + 0x818);
    if (iVar1 == 1) {
      FUN_14117a650(param_1);
    }
    else {
      if (iVar1 != 0) {
        if (iVar1 == 3) {
          uVar5 = 3;
        }
        else if (iVar1 == 4) {
          uVar5 = 4;
        }
        else if (iVar1 == 5) {
          uVar5 = 5;
        }
        else {
          uVar5 = 6;
        }
      }
      FUN_14116ed10(param_1,uVar5);
    }
    plVar3 = *(longlong **)(param_1 + 0x718);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001411575a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2c8))(plVar3,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 1411575c0 FUN_1411575c0 body=122 status=ok
// SIG undefined FUN_1411575c0(void)

void FUN_1411575c0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x2d8);
  }
  lVar1 = *param_3;
  if ((((((lVar1 == DAT_146875838) || (lVar1 == DAT_146875840)) || (lVar1 == DAT_146875848)) ||
       ((lVar1 == DAT_146875850 || (lVar1 == DAT_146875858)))) ||
      ((lVar1 == DAT_146875930 || (lVar1 == DAT_146875938)))) &&
     ((*(longlong *)(param_1 + 0x778) != 0 &&
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x178), plVar2 != (longlong *)0x0)))
     ) {
                    /* WARNING: Could not recover jumptable at 0x000141157632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2f0))(plVar2,uVar3,1);
    return;
  }
  return;
}



// FUNCTION 141157640 FUN_141157640 body=191 status=ok
// SIG undefined FUN_141157640(void)

void FUN_141157640(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    if ((iVar1 != *(int *)(param_1 + 0x7b4)) && (lVar2 = FUN_140f9aee0(), lVar2 != 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146875be0) &&
         (_Init_thread_header(&DAT_146875be0), DAT_146875be0 == -1)) {
        FName::FName(&DAT_146875bd8,L"MatchMaking_Card_Slide",1);
        _Init_thread_footer(&DAT_146875be0);
      }
      FUN_140be2cb0(lVar2,&DAT_146875bd8);
    }
    *(int *)(param_1 + 0x7b4) = iVar1;
  }
  FUN_141172890(param_1);
  return;
}



// FUNCTION 141157700 FUN_141157700 body=145 status=ok
// SIG undefined FUN_141157700(void)

void FUN_141157700(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x178) != 0) {
    if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
      lVar1 = **(longlong **)(param_1 + 0x180);
      iVar2 = FUN_142eb7a00();
      (**(code **)(lVar1 + 0x278))(*(undefined8 *)(param_1 + 0x180),iVar2 != 0);
    }
    if (*(longlong **)(param_1 + 0x188) != (longlong *)0x0) {
      lVar1 = **(longlong **)(param_1 + 0x188);
      iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x178));
      iVar3 = FUN_142eb7a00(*(undefined8 *)(param_1 + 0x178));
      (**(code **)(lVar1 + 0x278))(*(undefined8 *)(param_1 + 0x188),iVar3 != iVar2 + -1);
    }
  }
  return;
}



// FUNCTION 1411577a0 thunk_FUN_141178db0 body=5 status=ok
// SIG undefined thunk_FUN_141178db0(void)

void thunk_FUN_141178db0(void)

{
  FUN_141178db0();
  return;
}



// FUNCTION 1411577b0 FUN_1411577b0 body=42 status=ok
// SIG undefined FUN_1411577b0(void)

void FUN_1411577b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    if (param_2 == *(longlong *)(param_1 + 0x180)) {
      FUN_142ebe7f0(lVar1,1,0);
      return;
    }
    if (param_2 == *(longlong *)(param_1 + 0x188)) {
      FUN_142ebe7f0(lVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1411577e0 FUN_1411577e0 body=27 status=ok
// SIG undefined FUN_1411577e0(void)

void FUN_1411577e0(undefined8 param_1)

{
  FUN_1411793d0();
  FUN_141174aa0(param_1);
  return;
}



// FUNCTION 141157800 FUN_141157800 body=71 status=ok
// SIG undefined FUN_141157800(void)

undefined1 FUN_141157800(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    cVar1 = FUN_142eef530();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar2;
}



// FUNCTION 141157850 FUN_141157850 body=94 status=ok
// SIG undefined FUN_141157850(void)

undefined8 FUN_141157850(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 8) == DAT_146875878) {
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      FUN_1410cdb10();
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      FUN_1410cdb10(*(longlong *)(param_1 + 0x2b0),param_2);
    }
    return 1;
  }
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread();
  return uVar1;
}



// FUNCTION 1411578b0 FUN_1411578b0 body=113 status=ok
// SIG undefined FUN_1411578b0(void)

void FUN_1411578b0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FWeakObjectPtr::IsValid(param_2 + 0xdc);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0xdc);
    uVar3 = FUN_14142bde0();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      *(longlong *)(param_1 + 0xfd8) = lVar4;
      LOCK();
      *(undefined4 *)(param_1 + 0x1000) = 1;
      UNLOCK();
      FUN_141178a60(param_1,3);
    }
  }
  return;
}



// FUNCTION 141157930 FUN_141157930 body=412 status=ok
// SIG undefined FUN_141157930(void)

void FUN_141157930(longlong param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_141324a80();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (lVar3 = (**(code **)(*param_3 + 0x340))(param_3), *(char *)(lVar3 + 0x54) != '\0')) {
      (**(code **)(*param_3 + 0x378))(param_3);
      lVar3 = FUN_140e97230(param_1);
      if ((lVar3 != 0) && (lVar3 = FUN_140c430a0(lVar3,0), lVar3 != 0)) {
        lVar4 = ANavLinkProxy::GetPrivateStaticClass();
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
           (lVar4 = (**(code **)(*param_3 + 0x340))(param_3), *(int *)(lVar4 + 0xd8) != -1)) {
          lVar4 = (**(code **)(*param_3 + 0x340))(param_3);
          FUN_143015ae0(lVar3,lVar4 + 0xd8,0,1);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xb78) != 0) && ((byte)(*(char *)(param_1 + 0xe50) - 2U) < 3)) {
    cVar2 = FWeakObjectPtr::IsValid(param_2 + 0xdc);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0xdc);
      uVar6 = FUN_14301f8f0();
      uVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
    }
    *(undefined8 *)(param_1 + 0xe48) = uVar6;
    FUN_14117add0(param_1);
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    *(undefined1 *)(param_1 + 0xef0) = 1;
  }
  return;
}



// FUNCTION 141157ad0 FUN_141157ad0 body=764 status=ok
// SIG undefined FUN_141157ad0(void)

void FUN_141157ad0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
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
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  *(undefined1 *)(param_1 + 0x208) = param_2;
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1f8) != 0)) {
    FUN_14119f1e0();
    lVar11 = 0x148;
    if (*(char *)(param_1 + 0x208) != '\x02') {
      lVar11 = 0x120;
    }
    FUN_1411be220(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),lVar11 + param_1);
    cVar4 = *(char *)(param_1 + 0x208);
    puVar10 = local_a8;
    pwVar14 = L"DrivingBindingsText";
    pwVar13 = L"ControllerOptions";
    pwVar12 = L"Driving Controls";
    if (cVar4 != '\x02') {
      pwVar14 = L"WalkingBindingsText";
      pwVar13 = L"ControllerOptions";
      pwVar12 = L"Walking Controls";
      puVar10 = local_c0;
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar10,pwVar12,pwVar13,pwVar14);
    FText::FText(local_d8,uVar7);
    if ((((cVar4 != '\x02') + 1U & 2) != 0) && (local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if ((cVar4 == '\x02') && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if ((*(char *)(param_1 + 0x170) == '\0') || (*(char *)(param_1 + 0x171) != '\0')) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,L"Custom Mapping",L"ControllerOptions",L"CustomMappingText");
      bVar6 = false;
      bVar5 = true;
    }
    else {
      uVar7 = FUN_1404b03b0();
      uVar7 = FText::FText(local_78,uVar7);
      bVar6 = true;
      bVar5 = false;
    }
    uVar7 = FText::FText(local_60,uVar7);
    uVar8 = FText::FText(local_48,local_d8);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,L"Layout",L"ControllerOptions",L"LayoutTitle");
    FUN_1411b81c0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),uVar9,uVar8,uVar7);
    if ((bVar5) && (local_88 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    if ((bVar6) && (local_70 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141157dd0 FUN_141157dd0 body=199 status=ok
// SIG undefined FUN_141157dd0(void)

void FUN_141157dd0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = AReplicationGraphDebugActor::GetPrivateStaticClass();
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
      if (*(char *)(param_1 + 0x869) == '\x01') {
        uVar3 = FWeakObjectPtr::Get(param_2 + 0x330);
        FWeakObjectPtr::operator=(param_1 + 0x874,uVar3);
        *(undefined1 *)(param_1 + 0x87c) = *(undefined1 *)(param_2 + 0x338);
      }
      else if (*(char *)(param_1 + 0x869) == '\x02') {
        uVar3 = FWeakObjectPtr::Get(param_2 + 0x328);
        FWeakObjectPtr::operator=(param_1 + 0x86c,uVar3);
        FUN_141153e30(param_1);
        return;
      }
    }
  }
  FUN_141153e30(param_1);
  return;
}



// FUNCTION 141157ea0 FUN_141157ea0 body=843 status=ok
// SIG undefined FUN_141157ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141157ea0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
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
  
  if (param_2 != 0) {
    local_20 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
    lVar6 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      if (*(char *)(param_1 + 0x869) == '\x01') {
        lVar6 = FWeakObjectPtr::Get(param_2 + 0x330);
        if (lVar6 == 0) {
          if (*(char *)(param_2 + 0x338) == '\0') {
            plVar4 = *(longlong **)(param_1 + 0x808);
            if (plVar4 == (longlong *)0x0) {
              return;
            }
            (**(code **)(*plVar4 + 0x2b0))(plVar4,param_1 + 2000,1,0);
            return;
          }
          FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_90,
                     L"You will start the game in Sanctuary with the main mission objectives completed and a character set to the maximum level."
                     ,L"GFxNewGameSettings",L"MaxLevelStartCharacterDesc");
          plVar4 = *(longlong **)(param_1 + 0x808);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2b0))(plVar4,local_90,1,0);
          }
        }
        else {
          lVar6 = FWeakObjectPtr::Get(param_2 + 0x330);
          puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_60,lVar6 + 0xd0);
          local_50[0] = 0;
          local_28 = '\0';
          local_48 = 0;
          local_c8 = local_50;
          local_d8 = *puVar8;
          uStack_c0 = &local_20;
          lStack_d0 = puVar8[1];
          if (lStack_d0 != 0) {
            LOCK();
            *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
            UNLOCK();
          }
          uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
          uVar7 = FText::Format(local_78,&local_d8,uVar7);
          FText::FText(local_a8,uVar7);
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_70 + 1;
            lVar6 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
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
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8);
          if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
            LOCK();
            plVar4 = local_38 + 1;
            lVar6 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar1 = (int *)((longlong)local_38 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_38 + 8))(local_38,1);
              }
            }
          }
          plVar4 = (longlong *)puVar8[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
          plVar4 = *(longlong **)(param_1 + 0x808);
          local_88 = local_a0;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2b0))(plVar4,local_a8,1,0);
            local_88 = local_a0;
          }
        }
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_88 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_88 + 8))(local_88,1);
            }
          }
        }
      }
      else if (*(char *)(param_1 + 0x869) == '\x02') {
        lVar6 = FWeakObjectPtr::Get(param_2 + 0x328);
        if (lVar6 == 0) {
          uVar7 = FUN_1404b03b0();
          plVar4 = *(longlong **)(param_1 + 0x808);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar7,1,0);
          }
        }
        else {
          lVar6 = FWeakObjectPtr::Get(param_2 + 0x328);
          plVar4 = *(longlong **)(param_1 + 0x808);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2b0))(plVar4,lVar6 + 0xc0,1,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411581f0 FUN_1411581f0 body=809 status=ok
// SIG undefined FUN_1411581f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411581f0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  longlong local_a8;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(char *)((longlong)param_1 + 0x471) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x471) = 0;
    cVar2 = FUN_14044af00(param_1 + 0x8d,0);
    if (cVar2 != '\0') {
      FWeakObjectPtr::Get(param_1 + 0x8d);
      cVar2 = FUN_1411118b0();
      if (cVar2 != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x471) = 1;
        goto LAB_141158304;
      }
    }
    iVar7 = *(int *)((longlong)param_1 + 0x474);
    if ((iVar7 < 0) || ((int)param_1[0x8c] <= iVar7)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_a8 = *(longlong *)(param_1[0x8b] + (longlong)iVar7 * 0x10);
    }
    else {
      local_a8 = 0;
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      plVar5 = (longlong *)param_1[0x8b];
      for (plVar8 = plVar5; plVar8 != plVar5 + (longlong)(int)param_1[0x8c] * 2; plVar8 = plVar8 + 2
          ) {
        if (*plVar8 == local_a8) {
          iVar7 = (int)((longlong)plVar8 - (longlong)plVar5 >> 4);
          if ((iVar7 < 0) || ((int)param_1[0x8c] <= iVar7)) goto LAB_1411582d7;
          bVar1 = true;
          goto LAB_1411582d9;
        }
      }
      iVar7 = -1;
LAB_1411582d7:
      bVar1 = false;
LAB_1411582d9:
      if (((bVar1) && (plVar5[(longlong)iVar7 * 2 + 1] != 0)) &&
         (cVar2 = FUN_142c48f60(plVar5[(longlong)iVar7 * 2 + 1],param_1,0), cVar2 == '\0')) {
        FUN_141178db0(param_1);
      }
    }
  }
LAB_141158304:
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar3 = *(longlong *)(lVar3 + 0x140);
  if (lVar3 != 0) {
    lVar4 = AOfflineGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar3 = FUN_140c13f10(lVar3), lVar3 != 0)) && (0 < *(int *)(lVar3 + 0x4a8))) {
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        plVar5[2] = (longlong)FUN_1411586e0;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar3;
        *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
      }
      uVar6 = AActor::GetWorldTimerManager(param_1);
      local_98 = 0;
      local_90 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      local_b8 = 0;
      FUN_142880850(uVar6,param_1 + 0x91,&local_98);
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
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar3 = FMemory::Realloc(plVar5,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 141158520 FUN_141158520 body=197 status=ok
// SIG undefined FUN_141158520(void)

void FUN_141158520(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  cVar3 = FUN_14044af00(param_1 + 0x478,0);
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnClaptrapSkitSublevelLoaded",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x478);
    FUN_140a4d850(lVar5 + 0xe0,param_1,FUN_141158520,CONCAT44(uStackX_c,local_res8));
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 0x478) = local_res8;
    *(undefined4 *)(param_1 + 0x47c) = uStackX_c;
  }
  return;
}



// FUNCTION 1411585f0 FUN_1411585f0 body=236 status=ok
// SIG undefined FUN_1411585f0(void)

void FUN_1411585f0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  cVar3 = FUN_14044af00(param_1 + 0x480,0);
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnClaptrapSkitSublevelUnloaded",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x480);
    FUN_140a4d850(lVar5 + 0xf0,param_1,FUN_1411585f0,CONCAT44(uStackX_c,local_res8));
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 0x480) = local_res8;
    *(undefined4 *)(param_1 + 0x484) = uStackX_c;
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x468) = local_res8;
  *(undefined4 *)(param_1 + 0x46c) = uStackX_c;
  FUN_141156190(param_1);
  return;
}



// FUNCTION 1411586e0 FUN_1411586e0 body=79 status=ok
// SIG undefined FUN_1411586e0(void)

void FUN_1411586e0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_14044af00(param_1 + 0x468,0);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x468);
    FUN_14112ac90(uVar1);
    return;
  }
  *(undefined1 *)(param_1 + 0x470) = 1;
  return;
}



// FUNCTION 141158730 FUN_141158730 body=64 status=ok
// SIG undefined FUN_141158730(void)

void FUN_141158730(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2b0))();
    if (param_2 == lVar1) {
      FUN_14116bd40(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 141158770 FUN_141158770 body=80 status=ok
// SIG undefined FUN_141158770(void)

void FUN_141158770(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_14114b910;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1411587c0 FUN_1411587c0 body=1405 status=ok
// SIG undefined FUN_1411587c0(void)

void FUN_1411587c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined4 uVar16;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  if (param_2 != 0) {
    lVar6 = FUN_142f1c0a0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pcVar2 = (char *)(param_1 + 0x208);
      if ((DAT_146875c84 != '\0') ||
         (((cVar5 = FUN_1409aecc0(param_2), *pcVar2 != cVar5 && (*(longlong *)(param_1 + 0xc0) != 0)
           ) && (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1f8) != 0)))) {
        DAT_146875c84 = '\0';
        cVar5 = FUN_1409aecc0(param_2);
        *pcVar2 = cVar5;
        FUN_14119f1e0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8));
        lVar6 = 0x148;
        if (*pcVar2 != '\x02') {
          lVar6 = 0x120;
        }
        FUN_1411be220(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),lVar6 + param_1);
      }
      FUN_142eb63c0(param_2,&local_178);
      local_188 = 0;
      local_180 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      FGenericPlatformString::Memcpy(local_188,L"label",0xc);
      local_198 = (longlong *)0x0;
      local_190 = 0;
      lVar6 = FUN_140ecc7d0(param_2,&local_188,0,6,&local_198);
      plVar13 = local_198;
      for (iVar12 = (int)local_190; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 2;
      }
      if (local_198 != (longlong *)0x0) {
        FMemory::Free(local_198);
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
      if (((lVar6 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1f8) != 0)) {
        local_160 = local_178;
        local_158 = local_170;
        local_150 = local_168;
        if (local_168 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_168 + 1) = (int)local_168[1] + 1;
          UNLOCK();
        }
        uVar7 = FUN_142eee450(lVar6,local_d0);
        FUN_14119e9f0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),&local_160,uVar7);
        cVar5 = *pcVar2;
        puVar10 = local_118;
        pwVar15 = L"DrivingBindingsText";
        pwVar14 = L"ControllerOptions";
        pwVar11 = L"Driving Controls";
        if (*pcVar2 != '\x02') {
          pwVar15 = L"WalkingBindingsText";
          pwVar14 = L"ControllerOptions";
          pwVar11 = L"Walking Controls";
          puVar10 = local_130;
        }
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (puVar10,pwVar11,pwVar14,pwVar15);
        FText::FText(local_148,uVar7);
        if ((((cVar5 != '\x02') + 1U & 2) != 0) && (local_128 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_128 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        if ((cVar5 == '\x02') && (local_110 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_110 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if ((*(char *)(param_1 + 0x170) == '\0') || (*(char *)(param_1 + 0x171) != '\0')) {
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_100,L"Custom Mapping",L"ControllerOptions",L"CustomMappingText");
          bVar4 = false;
          bVar3 = true;
        }
        else {
          uVar7 = FUN_1404b03b0();
          uVar7 = FText::FText(local_e8,uVar7);
          bVar4 = true;
          bVar3 = false;
        }
        uVar7 = FText::FText(local_b8,uVar7);
        uVar8 = FText::FText(local_a0,local_148);
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_88,L"Layout",L"ControllerOptions",L"LayoutTitle");
        FUN_1411b81c0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),uVar9,uVar8,uVar7);
        if ((bVar3) && (local_f8 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_f8 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)local_f8 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        if ((bVar4) && (local_e0 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_e0 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar1 = (int *)((longlong)local_e0 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_e0 + 8))(local_e0,1);
            }
          }
        }
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_140 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
      }
      uVar16 = FUN_14119e040();
      FUN_142ed36f0(param_2,uVar16,L"left");
      if (local_168 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar13 = local_168 + 1;
      lVar6 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return;
      }
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 != 1) {
        return;
      }
      (**(code **)(*local_168 + 8))(local_168,1);
      return;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0xc0);
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1f8) != 0)) {
    DAT_146875c84 = 1;
    FUN_14119f1e0(*(undefined8 *)(lVar6 + 0x1f8));
    uVar7 = FUN_1404b03b0();
    uVar7 = FText::FText(local_70,uVar7);
    uVar8 = FUN_1404b03b0();
    uVar8 = FText::FText(local_58,uVar8);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Layout",L"ControllerOptions",L"LayoutTitle");
    FUN_1411b81c0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),uVar9,uVar8,uVar7);
    return;
  }
  return;
}



// FUNCTION 141158d40 FUN_141158d40 body=952 status=ok
// SIG undefined FUN_141158d40(void)

void FUN_141158d40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
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
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  lVar12 = *(longlong *)(param_1 + 0xc0);
  if (lVar12 == 0) goto LAB_141158e10;
  if ((param_2 == *(longlong *)(lVar12 + 400)) || (param_2 == *(longlong *)(lVar12 + 0x1a0))) {
    iVar4 = *(int *)(param_1 + 0x214);
    *(undefined1 *)(param_1 + 0x208) = 0;
    if ((iVar4 < 0) ||
       ((*(int *)(param_1 + 0x180) <= iVar4 || (iVar5 = *(int *)(param_1 + 0x210), iVar5 < 0))))
    goto LAB_141158e10;
    lVar12 = *(longlong *)(param_1 + 0x178);
  }
  else {
    if ((param_2 != *(longlong *)(lVar12 + 0x198)) && (param_2 != *(longlong *)(lVar12 + 0x1a8)))
    goto LAB_141158e10;
    iVar4 = *(int *)(param_1 + 0x21c);
    *(undefined1 *)(param_1 + 0x208) = 2;
    if ((iVar4 < 0) ||
       ((*(int *)(param_1 + 400) <= iVar4 || (iVar5 = *(int *)(param_1 + 0x218), iVar5 < 0))))
    goto LAB_141158e10;
    lVar12 = *(longlong *)(param_1 + 0x188);
  }
  if (iVar5 < *(int *)(lVar12 + 8 + (longlong)iVar4 * 0x10)) {
    FUN_141156380((longlong)iVar5 * 0x50 + *(longlong *)(lVar12 + (longlong)iVar4 * 0x10) + 0x18);
  }
LAB_141158e10:
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1f8) != 0)) {
    FUN_14119f1e0();
    lVar12 = 0x148;
    if (*(char *)(param_1 + 0x208) != '\x02') {
      lVar12 = 0x120;
    }
    FUN_1411be220(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),lVar12 + param_1);
    cVar3 = *(char *)(param_1 + 0x208);
    puVar11 = local_a8;
    pwVar15 = L"DrivingBindingsText";
    pwVar14 = L"ControllerOptions";
    pwVar13 = L"Driving Controls";
    if (cVar3 != '\x02') {
      pwVar15 = L"WalkingBindingsText";
      pwVar14 = L"ControllerOptions";
      pwVar13 = L"Walking Controls";
      puVar11 = local_c0;
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar11,pwVar13,pwVar14,pwVar15);
    FText::FText(local_d8,uVar8);
    if ((((cVar3 != '\x02') + 1U & 2) != 0) && (local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if ((cVar3 == '\x02') && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if ((*(char *)(param_1 + 0x170) == '\0') || (*(char *)(param_1 + 0x171) != '\0')) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,L"Custom Mapping",L"ControllerOptions",L"CustomMappingText");
      bVar7 = false;
      bVar6 = true;
    }
    else {
      uVar8 = FUN_1404b03b0();
      uVar8 = FText::FText(local_78,uVar8);
      bVar7 = true;
      bVar6 = false;
    }
    uVar8 = FText::FText(local_60,uVar8);
    uVar9 = FText::FText(local_48,local_d8);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_30,L"Layout",L"ControllerOptions",L"LayoutTitle");
    FUN_1411b81c0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1f8),uVar10,uVar9,uVar8);
    if ((bVar6) && (local_88 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    if ((bVar7) && (local_70 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141159100 FUN_141159100 body=87 status=ok
// SIG undefined FUN_141159100(void)

void FUN_141159100(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x5a) = iVar2 == 0;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d11bd0(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141159160 FUN_141159160 body=76 status=ok
// SIG undefined FUN_141159160(void)

void FUN_141159160(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x2ee) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  FUN_1411790b0(param_1);
  return;
}



// FUNCTION 1411591b0 FUN_1411591b0 body=76 status=ok
// SIG undefined FUN_1411591b0(void)

void FUN_1411591b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x2ed) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  FUN_1411790b0(param_1);
  return;
}



// FUNCTION 141159200 FUN_141159200 body=76 status=ok
// SIG undefined FUN_141159200(void)

void FUN_141159200(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x2ec) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  FUN_1411790b0(param_1);
  return;
}



// FUNCTION 141159250 FUN_141159250 body=14 status=ok
// SIG undefined FUN_141159250(void)

void FUN_141159250(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x171) = 1;
  FUN_141171a30(param_1,1);
  return;
}



// FUNCTION 141159260 FUN_141159260 body=383 status=ok
// SIG undefined FUN_141159260(void)

void FUN_141159260(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x308);
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
  plVar1 = *(longlong **)(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x308) = 0;
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
  plVar1 = *(longlong **)(param_1 + 0x318);
  *(undefined8 *)(param_1 + 0x310) = 0;
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
  plVar1 = *(longlong **)(param_1 + 800);
  *(undefined8 *)(param_1 + 0x318) = 0;
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
  *(undefined8 *)(param_1 + 800) = 0;
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 1411593e0 FUN_1411593e0 body=374 status=ok
// SIG undefined FUN_1411593e0(void)

void FUN_1411593e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  plVar4 = *(longlong **)(param_1 + 0x308);
  if (plVar4 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      (**(code **)(*plVar4 + 0x288))(plVar4);
    }
  }
  *(undefined8 *)(param_1 + 0x308) = 0;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1411ecbf0();
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x328) != &local_28) {
    *(undefined8 *)(param_1 + 0x328) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x330,&local_20);
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x338) != &local_18) {
    *(undefined8 *)(param_1 + 0x338) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x340,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 141159560 FUN_141159560 body=209 status=ok
// SIG undefined FUN_141159560(void)

void FUN_141159560(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x2d0);
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
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 141159640 FUN_141159640 body=61 status=ok
// SIG undefined FUN_141159640(void)

void FUN_141159640(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  *(undefined8 *)(param_1 + 0x580) = 0;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x680);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x680);
    LOCK();
    *(undefined4 *)(lVar1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141159690 FUN_141159690 body=997 status=ok
// SIG undefined FUN_141159690(void)

void FUN_141159690(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  int local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (*(longlong *)(param_1 + 0x828) == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x818);
  if (iVar6 != 0) {
    if (((iVar6 != 3) && (iVar6 != 4)) && (iVar6 != 5)) {
      if (iVar6 != 1) {
        return;
      }
      FUN_140cffaf0(*(longlong *)(param_1 + 0x828),&local_78);
      lVar8 = (longlong)local_70 * 0x58 + local_78;
      lVar7 = local_78;
      do {
        lVar9 = local_78;
        iVar6 = local_70;
        if (lVar7 == lVar8) {
joined_r0x000141159848:
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            FUN_1404bf980(lVar9 + 0x28);
            FUN_1404bf980(lVar9);
            lVar9 = lVar9 + 0x58;
          }
          if (local_78 == 0) {
            return;
          }
          FMemory::Free(local_78);
          return;
        }
        puVar2 = (undefined8 *)*param_2;
        lVar9 = FUN_142d830c0(lVar7,local_58);
        cVar5 = (**(code **)*puVar2)(puVar2,*(undefined8 *)(lVar9 + 8));
        local_58[0] = &PTR_FUN_143f740c8;
        if (local_40 != 0) {
          FMemory::Free();
        }
        plVar4 = local_48;
        local_58[0] = &PTR_FUN_143f73d18;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar11 = (int *)((longlong)plVar4 + 0xc);
            iVar6 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (cVar5 != '\0') {
          *(undefined1 *)(param_1 + 0x81d) = 1;
          lVar9 = local_78;
          iVar6 = local_70;
          goto joined_r0x000141159848;
        }
        lVar7 = lVar7 + 0x58;
      } while( true );
    }
    if (iVar6 != 0) {
      if (iVar6 == 3) {
        uVar12 = 3;
      }
      else if (iVar6 == 4) {
        uVar12 = 4;
      }
      else if (iVar6 == 5) {
        uVar12 = 5;
      }
      else {
        uVar12 = 6;
      }
      goto LAB_1411598bb;
    }
  }
  uVar12 = 0;
LAB_1411598bb:
  if (*(int *)(param_1 + 0x848) != *(int *)(param_1 + 0x874)) {
    lVar7 = *(longlong *)(param_1 + 0x880);
    if (*(longlong *)(param_1 + 0x880) == 0) {
      lVar7 = param_1 + 0x878;
    }
    iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x888) - 1U & uVar12) * 4);
    if (iVar6 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x840));
        if (*piVar11 == (int)uVar12) {
          if (iVar6 != -1) goto LAB_141159920;
          break;
        }
        iVar6 = piVar11[6];
      } while (iVar6 != -1);
    }
  }
  piVar11 = (int *)0x0;
LAB_141159920:
  lVar8 = *(longlong *)(piVar11 + 2);
  lVar7 = lVar8 + (longlong)piVar11[4] * 0x18;
  do {
    if (lVar8 == lVar7) {
      return;
    }
    FUN_141151b40(lVar8,&local_88);
    if (local_88 != (longlong *)0x0) {
      puVar2 = (undefined8 *)*param_2;
      puVar10 = (undefined8 *)(**(code **)(*local_88 + 8))(local_88,local_68);
      cVar5 = (**(code **)*puVar2)(puVar2,*puVar10);
      plVar4 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar11 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar4 = local_80;
      if (cVar5 != '\0') {
        *(undefined1 *)(param_1 + 0x81c) = 1;
        *(undefined1 *)(param_1 + 0x838) = 1;
        if (local_80 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = local_80 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return;
        }
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar11 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*local_80 + 8))(local_80,1);
        return;
      }
    }
    plVar4 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar11 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    lVar8 = lVar8 + 0x18;
  } while( true );
}



// FUNCTION 141159a80 FUN_141159a80 body=819 status=ok
// SIG undefined FUN_141159a80(void)

void FUN_141159a80(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x70) == 0) || (param_2 == 0)) goto LAB_141159d95;
  if ((*(int *)(param_1 + 0x21c) < 0) || (*(int *)(param_1 + 400) <= *(int *)(param_1 + 0x21c))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (*(longlong *)(param_1 + 0xf0) == 0)) goto LAB_141159d95;
  iVar2 = FUN_142eb62f0();
  if ((iVar2 < 0) ||
     (*(int *)((longlong)*(int *)(param_1 + 0x21c) * 0x10 + 8 + *(longlong *)(param_1 + 0x188)) <=
      iVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_141159d95;
  lVar5 = (longlong)iVar2 * 0x50;
  FUN_141156380(*(longlong *)
                 (*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 0x21c) * 0x10) +
                0x18 + lVar5);
  lVar4 = *(longlong *)((longlong)*(int *)(param_1 + 0x21c) * 0x10 + *(longlong *)(param_1 + 0x188))
          + 0x18 + lVar5;
  lVar3 = FWeakObjectPtr::Get(lVar4);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar4 + 8)) || (*(longlong *)(lVar4 + 0x10) == 0))
    goto LAB_141159d95;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar4);
    if (lVar3 == 0) goto LAB_141159d95;
  }
  lVar4 = FUN_140680830();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_141159d95;
  *(int *)(param_1 + 0x218) = iVar2;
  lVar5 = *(longlong *)((longlong)*(int *)(param_1 + 0x21c) * 0x10 + *(longlong *)(param_1 + 0x188))
          + 0x18 + lVar5;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar5 + 8)) && (*(longlong *)(lVar5 + 0x10) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar5 + 8) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 != 0) goto LAB_141159cac;
    }
LAB_141159ce2:
    lVar3 = 0;
  }
  else {
LAB_141159cac:
    lVar4 = FUN_140680830();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141159ce2;
  }
  FUN_14067e850(*(undefined8 *)(param_1 + 0xf0),lVar3);
  lVar3 = *(longlong *)(param_1 + 0x70);
  *(undefined4 *)(lVar3 + 0x160) = *(undefined4 *)(param_1 + 0x218);
  *(undefined1 *)(lVar3 + 0x28) = 1;
  lVar3 = *(longlong *)(param_1 + 0x70);
  *(undefined4 *)(lVar3 + 0x174) = *(undefined4 *)(param_1 + 0x218);
  *(undefined1 *)(lVar3 + 0x28) = 1;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x690))();
  if (lVar3 != 0) {
    lVar4 = FUN_14148cad0();
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
      FUN_141253c90(lVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x171) = 0;
  FUN_141171a30(param_1,0);
LAB_141159d95:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141159dc0 FUN_141159dc0 body=601 status=ok
// SIG undefined FUN_141159dc0(void)

void FUN_141159dc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_res18;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x70) + 0x30);
    cVar7 = FUN_142eb7a60(param_2);
    if (cVar7 == '\0') {
      if ((cVar4 != '\0') && (DAT_146b17150 != 0)) {
        FWeakObjectPtr::operator=(local_48,0);
        local_40 = 0;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxControlsBasicOptions::OnEnableGamepadInputChoiceMade",L"::");
        pwVar6 = (wchar_t *)0x0;
        while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar6 = pwVar5;
        }
        FName::FName(&local_res18,pwVar6 + 2,1);
        FWeakObjectPtr::operator=(local_48,param_1);
        local_40 = local_res18;
        if ((local_res18 != 0) && (lVar8 = FWeakObjectPtr::Get(local_48), lVar8 != 0)) {
          UObject::FindFunction(lVar8,local_40);
        }
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_20,L"Are you sure you want to disable controller input?",
                            L"ControlsOptions",L"EnableGamepadInputBodyText");
        uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_38,L"Disable Controller?",L"ControlsOptions",
                            L"EnableGamepadInputHeaderText");
        FUN_1410f47a0(*(undefined8 *)(param_1 + 0x68),uVar11,uVar10,local_48,0,0,0,0,0);
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
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_18 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
      }
    }
    else if (cVar4 == '\0') {
      lVar8 = *(longlong *)(param_1 + 0x70);
      *(char *)(lVar8 + 0x30) = cVar7;
      *(undefined1 *)(lVar8 + 0x28) = 1;
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x148))();
      if ((lVar8 != 0) && (lVar8 = UWorld::GetGameViewport(lVar8), lVar8 != 0)) {
        *(undefined1 *)(lVar8 + 0x309) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000141159e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x300))();
      return;
    }
  }
  return;
}



// FUNCTION 14115a020 FUN_14115a020 body=169 status=ok
// SIG undefined FUN_14115a020(void)

void FUN_14115a020(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res18 [16];
  
  plVar1 = (longlong *)FName::FName(local_res18,&DAT_1446bb7d4,1);
  if (param_3 == *plVar1) {
    if ((*(longlong **)(param_1 + 0x68) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x70) != 0))
    {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0xce8))();
      lVar2 = *(longlong *)(param_1 + 0x70);
      *(undefined1 *)(lVar2 + 0x30) = 0;
      *(undefined1 *)(lVar2 + 0x28) = 1;
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x148))();
      if (lVar2 != 0) {
        lVar2 = UWorld::GetGameViewport(lVar2);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x309) = 1;
          return;
        }
      }
    }
  }
  else {
    FUN_142ed16e0(*(undefined8 *)(param_1 + 0xe8));
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x300))();
  }
  return;
}



// FUNCTION 14115a0d0 FUN_14115a0d0 body=72 status=ok
// SIG undefined FUN_14115a0d0(void)

void FUN_14115a0d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x6a) = iVar2 != 0;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d11bd0(*(undefined8 *)(param_1 + 0x68));
    return;
  }
  return;
}



// FUNCTION 14115a140 FUN_14115a140 body=97 status=ok
// SIG undefined FUN_14115a140(void)

void FUN_14115a140(longlong param_1,char param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (param_2 != '\x05') {
    uVar1 = FUN_142eb7a00(param_1 + -0x170);
    *(undefined4 *)(param_1 + 0x104) = uVar1;
  }
  FUN_142ec1910(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14115a1b0 FUN_14115a1b0 body=480 status=ok
// SIG undefined FUN_14115a1b0(void)

void FUN_14115a1b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 0x358) != 0) && (param_2 == *(longlong *)(param_1 + 0x358) + 0x170))
  {
    if (*(char *)(param_1 + 0x391) == '\x01') {
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x39c);
      if (cVar2 != '\0') {
        iVar6 = 0;
        iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x358));
        if (0 < iVar3) {
          do {
            lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x358),iVar6);
            if (lVar4 != 0) {
              lVar5 = AReplicationGraphDebugActor::GetPrivateStaticClass();
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
                lVar5 = FWeakObjectPtr::Get(param_1 + 0x39c);
                lVar4 = FWeakObjectPtr::Get(lVar4 + 0x330);
                if (lVar5 == lVar4) goto LAB_14115a360;
              }
            }
            iVar6 = iVar6 + 1;
            iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x358));
          } while (iVar6 < iVar3);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x391) != '\x02') {
        return;
      }
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x394);
      if (cVar2 != '\0') {
        iVar6 = 0;
        iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x358));
        if (0 < iVar3) {
          do {
            lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x358),iVar6);
            if (lVar4 != 0) {
              lVar5 = AReplicationGraphDebugActor::GetPrivateStaticClass();
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
                lVar5 = FWeakObjectPtr::Get(param_1 + 0x394);
                lVar4 = FWeakObjectPtr::Get(lVar4 + 0x328);
                if (lVar5 == lVar4) goto LAB_14115a360;
              }
            }
            iVar6 = iVar6 + 1;
            iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x358));
          } while (iVar6 < iVar3);
        }
      }
    }
    iVar6 = 0;
LAB_14115a360:
    (**(code **)(**(longlong **)(param_1 + 0x358) + 0x2b8))
              (*(longlong **)(param_1 + 0x358),iVar6,1,0);
  }
  return;
}



// FUNCTION 14115a390 FUN_14115a390 body=114 status=ok
// SIG undefined FUN_14115a390(void)

void FUN_14115a390(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar4 = FUN_14133b140();
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
      *(longlong *)(param_1 + 0xfe0) = lVar1;
      FUN_141178a60(param_1,CONCAT71((int7)((ulonglong)lVar2 >> 8),4));
      LOCK();
      *(undefined4 *)(param_1 + 0x588) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14115a410 FUN_14115a410 body=121 status=ok
// SIG undefined FUN_14115a410(void)

void FUN_14115a410(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar4 = FUN_14133b140();
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
      *(longlong *)(param_1 + 0xfe0) = lVar1;
      FUN_142ed3540(lVar1 + 0x170,CONCAT71((int7)((ulonglong)lVar2 >> 8),1),0);
      LOCK();
      *(undefined4 *)(param_1 + 0x588) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14115a490 FUN_14115a490 body=344 status=ok
// SIG undefined FUN_14115a490(void)

void FUN_14115a490(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong local_28;
  longlong *local_20;
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + 0x780) != 0) && (param_2 != 0)) {
    lVar6 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_28 = *(longlong *)(param_2 + 0x328);
      local_20 = *(longlong **)(param_2 + 0x330);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_2 + 0x340);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_10 = plVar4;
      lVar6 = FUN_1410cb7c0(param_1);
      if ((local_28 == 0) || (lVar6 == 0)) {
        FUN_1410ee650(*(undefined8 *)(param_1 + 0x780));
      }
      else {
        FUN_1410eddc0(*(undefined8 *)(param_1 + 0x780),&local_28);
      }
      plVar2 = local_10;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar4 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_20)(local_20);
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
    }
  }
  return;
}



// FUNCTION 14115a5f0 FUN_14115a5f0 body=1247 status=ok
// SIG undefined FUN_14115a5f0(void)

void FUN_14115a5f0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  longlong local_res20;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined2 local_3c;
  
  local_res20 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (local_res20 == 0) {
LAB_14115a65b:
    local_res20 = 0;
  }
  else {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(local_res20 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res20 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14115a65b;
  }
  if (param_2 == 0) {
    return;
  }
  lVar6 = URemnantGameInstance::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (local_res20 == 0) {
    return;
  }
  iVar14 = *(int *)(param_2 + 0x2d8);
  cVar4 = FUN_142ebdd70(param_1);
  if (cVar4 == '\0') {
    iVar5 = *(int *)(param_1 + 0x68c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x690);
  }
  iVar1 = *(int *)(param_1 + 0x818);
  iVar14 = *(int *)(param_1 + 0x810) * iVar5 + iVar14;
  if (iVar1 == 0) {
    uVar12 = 0;
  }
  else if (iVar1 == 3) {
    uVar12 = 3;
  }
  else if (iVar1 == 4) {
    uVar12 = 4;
  }
  else if (iVar1 == 5) {
    uVar12 = 5;
  }
  else {
    uVar12 = 6;
  }
  if (*(int *)(param_1 + 0x848) != *(int *)(param_1 + 0x874)) {
    lVar6 = *(longlong *)(param_1 + 0x880);
    if (*(longlong *)(param_1 + 0x880) == 0) {
      lVar6 = param_1 + 0x878;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x888) - 1U & uVar12) * 4);
    if (iVar5 != -1) {
      do {
        piVar10 = (int *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x840));
        if (*piVar10 == (int)uVar12) {
          if (iVar5 != -1) goto LAB_14115a790;
          break;
        }
        iVar5 = piVar10[6];
      } while (iVar5 != -1);
    }
  }
  piVar10 = (int *)0x0;
LAB_14115a790:
  if ((iVar14 < 0) || (piVar10[4] <= iVar14)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  FUN_141151a20(*(longlong *)(piVar10 + 2) + (longlong)iVar14 * 0x18,&local_f8);
  plVar15 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 2;
    FText::FText(local_a0);
    FText::FText(local_88);
    FText::FText(local_70);
    FText::FText(local_58);
    plVar11 = *(longlong **)(param_1 + 0x930);
    plVar13 = plVar11 + (longlong)*(int *)(param_1 + 0x938) * 2;
    local_40 = 0;
    local_3c = 0;
    for (; plVar11 != plVar13; plVar11 = plVar11 + 2) {
      puVar7 = (undefined8 *)(**(code **)(*plVar15 + 8))(plVar15,local_d8);
      cVar4 = (*(code *)**(undefined8 **)*puVar7)
                        ((undefined8 *)*puVar7,*(undefined8 *)(*plVar11 + 0x10));
      plVar3 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_d0 + 1;
        lVar6 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        plVar15 = local_f8;
        if ((int)lVar6 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar10 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          plVar15 = local_f8;
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
            plVar15 = local_f8;
          }
        }
      }
      if (cVar4 != '\0') {
        FUN_1411f4300(&local_b8,local_res20,plVar11);
        break;
      }
    }
    if (local_b8 == 0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar15 + 8))(plVar15,local_c8);
      local_e8 = *puVar7;
      local_e0 = (longlong *)puVar7[1];
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      FUN_1411f5120(&local_b8,local_res20,&local_e8);
      plVar15 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_e0 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar10 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_c0 + 1;
        lVar6 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar10 = (int *)((longlong)local_c0 + 0xc);
          iVar5 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      local_3c = CONCAT11(local_3c._1_1_,4);
    }
    FUN_141176fe0(param_1,param_2,&local_b8,iVar14);
    FUN_140fa0310(&local_b8);
    goto LAB_14115aa70;
  }
  iVar14 = *(int *)(*(longlong *)(piVar10 + 2) + 0x10 + (longlong)iVar14 * 0x18);
  if (iVar14 == 2) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x680);
    if (lVar6 == 0) goto LAB_14115aa70;
    lVar8 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14115aa70;
    uVar9 = 1;
  }
  else {
    if ((iVar14 != 3) || (lVar6 = FWeakObjectPtr::Get(param_1 + 0x680), lVar6 == 0))
    goto LAB_14115aa70;
    lVar8 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14115aa70;
    uVar9 = 2;
  }
  FUN_140f0d9a0(lVar6,uVar9);
LAB_14115aa70:
  plVar15 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_f0 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar10 = (int *)((longlong)plVar15 + 0xc);
      iVar14 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return;
}



// FUNCTION 14115ab20 FUN_14115ab20 body=945 status=ok
// SIG undefined FUN_14115ab20(void)

ulonglong FUN_14115ab20(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
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
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [3];
  
  FUN_142ec1f90();
  local_b0 = 0xd;
  local_b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"notification",0x1a);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  plVar3 = (longlong *)FUN_140ac4770(param_1,&local_b8,0,6,&local_c8);
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
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1 + 0x688,1,0);
  }
  local_98 = 0;
  local_90 = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"PNL_MatchmakingMode_Initialized",0x40);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  FUN_14113f080(param_1,param_1 + 0x768,&local_98,0,6,&local_a8);
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
  local_70 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"PNL_Matchmaking",0x20);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_14113ee10(param_1,param_1 + 0x770,&local_78,0,6,&local_88);
  plVar6 = local_88;
  for (iVar5 = (int)local_80; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"PNL_MatchmakingMode_List",0x32);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  FUN_14113f660(param_1,param_1 + 0x778,&local_58,0,6,&local_68);
  plVar6 = local_68;
  for (iVar5 = (int)local_60; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  lVar2 = *(longlong *)(param_1 + 0x768);
  if (lVar2 != 0) {
    plVar6 = *(longlong **)(lVar2 + 0x170);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x6a0,1,0);
    }
    plVar6 = *(longlong **)(lVar2 + 0x178);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x6b8,1,0);
    }
  }
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x588);
  *(uint *)(param_1 + 0x588) = 1;
  uVar4 = (ulonglong)uVar1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x7d8) == 0) {
    uVar4 = FUN_14116c5f0(param_1);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x768);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x180) == '\0')) {
      *(undefined1 *)(lVar2 + 0x180) = 1;
      local_48[0] = 0;
      local_48[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_48[0],5,&DAT_1446c8794,5,0x3f);
      uVar4 = FUN_142088910(lVar2,local_48);
      if (local_48[0] != 0) {
        uVar4 = FMemory::Free();
        return uVar4;
      }
    }
  }
  return uVar4;
}



// FUNCTION 14115aee0 FUN_14115aee0 body=1390 status=ok
// SIG undefined FUN_14115aee0(void)

ulonglong FUN_14115aee0(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  
  FUN_142ec1f90();
  lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
  lVar14 = 0;
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
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
      local_c8 = (code *)&LAB_141164bb0;
      uStack_c0 = 0;
      lVar9 = FUN_140bb7440(lVar7);
      plVar13 = (longlong *)(lVar9 + 0xd8);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      lVar8 = lVar14;
      local_88 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_14428ae88;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(undefined4 *)(plVar10 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar10 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar10 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_bc;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar8;
        *plVar10 = (longlong)&PTR_FUN_14428aed0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
        plVar11 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res10);
        iVar4 = *(int *)(lVar9 + 0xe0);
        lVar8 = *plVar11;
        *(int *)(lVar9 + 0xe0) = iVar4 + 1;
        if (*(int *)(lVar9 + 0xe4) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar4);
        }
        puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar13);
        *puVar12 = plVar10;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
      param_1[0x131] = lVar8;
      lVar8 = *(longlong *)(lVar7 + 0x478);
      local_c8 = FUN_141159690;
      uStack_c0 = 0;
      plVar10 = (longlong *)(lVar8 + 0x1e0);
      plVar13 = (longlong *)FMemory::Realloc(0,0x30);
      lVar9 = lVar14;
      local_78 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(undefined4 *)(plVar13 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar13 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_bc;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar9;
        *plVar13 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
        plVar11 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13,local_res18);
        iVar4 = *(int *)(lVar8 + 0x1e8);
        lVar9 = *plVar11;
        *(int *)(lVar8 + 0x1e8) = iVar4 + 1;
        if (*(int *)(lVar8 + 0x1ec) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar4);
        }
        puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar10);
        *puVar12 = plVar13;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
      param_1[0x132] = lVar9;
      local_c8 = FUN_14115bd30;
      uStack_c0 = 0;
      plVar13 = (longlong *)FUN_140bb74b0(lVar7);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      lVar8 = lVar14;
      local_68 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_144012f30;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(undefined4 *)(plVar10 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar10 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar10 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_bc;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar8;
        *plVar10 = (longlong)&PTR_FUN_144012f78;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
        plVar11 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res20);
        iVar4 = (int)plVar13[1];
        lVar8 = *plVar11;
        *(int *)(plVar13 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar13 + 0xc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar4);
        }
        puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar13);
        *puVar12 = plVar10;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
      param_1[0x130] = lVar8;
      uStack_c0 = 0;
      local_c8 = FUN_140f2ce70;
      plVar13 = (longlong *)(lVar7 + 0xc80);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_58 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(undefined4 *)(plVar10 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar10 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar10 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_bc;
        lVar14 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar14;
        *plVar10 = (longlong)&PTR_FUN_1442cc168;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
        plVar11 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_98);
        iVar4 = *(int *)(lVar7 + 0xc88);
        lVar14 = *plVar11;
        *(int *)(lVar7 + 0xc88) = iVar4 + 1;
        if (*(int *)(lVar7 + 0xc8c) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar4);
        }
        puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar13);
        *puVar12 = plVar10;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
      param_1[0x12e] = lVar14;
    }
  }
  FUN_1404cf890(&local_c8,0);
  pcVar6 = local_c8;
  if (local_c8 != (code *)0x0) {
    uStack_a0 = 0;
    local_b8 = (longlong *)0x0;
    local_a8 = &LAB_1411640c0;
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    local_b0 = 3;
    local_b8 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_1443193b0;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      *(undefined4 *)(plVar13 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar13 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar13 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_9c;
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar13[5] = lVar14;
      *plVar13 = (longlong)&PTR_FUN_1443193f8;
    }
    plVar13 = (longlong *)(**(code **)(*(longlong *)pcVar6 + 0xf8))(pcVar6,local_90,&local_b8);
    param_1[0x12f] = *plVar13;
    if (local_b0 != 0) {
      if (local_b8 == (longlong *)0x0) goto LAB_14115b369;
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
LAB_14115b369:
  lVar14 = *param_1;
  uVar15 = FUN_1410cb7c0(param_1);
  (**(code **)(lVar14 + 0x590))(param_1,uVar15);
  FUN_141179d40(param_1);
  if ((int)param_1[0xd1] != 1) {
    *(undefined1 *)(param_1 + 0x12d) = 0;
    *(undefined4 *)(param_1 + 0xd1) = 1;
    if (param_1[0xf1] != 0) {
      FUN_1410c94f0();
    }
    lVar14 = param_1[0xe3];
    lVar7 = 0;
    if (lVar14 != 0) {
      (**(code **)(*(longlong *)(lVar14 + 0x170) + 0x38))
                ((longlong *)(lVar14 + 0x170),CONCAT71((int7)((ulonglong)lVar14 >> 8),1));
      lVar7 = param_1[0xe3];
    }
    uVar15 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_a8,lVar7);
    FUN_142ed36d0(param_1,uVar15,0);
  }
  LOCK();
  uVar3 = *(uint *)(param_1 + 0xb1);
  *(uint *)(param_1 + 0xb1) = 1;
  uVar16 = (ulonglong)uVar3;
  UNLOCK();
  if (CONCAT44(uStack_bc,uStack_c0) != 0) {
    LOCK();
    puVar1 = (uint *)(CONCAT44(uStack_bc,uStack_c0) + 8);
    uVar3 = *puVar1;
    uVar16 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      puVar12 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
      uVar16 = (**(code **)*puVar12)(puVar12);
      LOCK();
      piVar2 = (int *)((longlong)puVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar16 = (**(code **)(*(longlong *)CONCAT44(uStack_bc,uStack_c0) + 8))
                           ((longlong *)CONCAT44(uStack_bc,uStack_c0),1);
      }
    }
  }
  return uVar16;
}



// FUNCTION 14115b450 FUN_14115b450 body=553 status=ok
// SIG undefined FUN_14115b450(void)

void FUN_14115b450(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 local_res10 [8];
  longlong *local_48;
  longlong *local_40;
  ulonglong uVar10;
  
  uVar10 = 0;
  FUN_1404cf890(&local_48,0);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x100))(local_48,param_1 + 0x978);
    *(undefined8 *)(param_1 + 0x978) = 0;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
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
    if (bVar3) {
      lVar5 = *(longlong *)(param_1 + 0x988);
      lVar6 = FUN_140bb7440(lVar4);
      uVar11 = uVar10;
      if (0 < *(int *)(lVar6 + 0xe0)) {
        do {
          plVar12 = (longlong *)(*(longlong *)(lVar6 + 0xd8) + uVar11);
          if ((((int)plVar12[1] != 0) && (plVar7 = (longlong *)*plVar12, plVar7 != (longlong *)0x0))
             && (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10),
                *plVar7 == lVar5)) {
            if (((int)plVar12[1] != 0) && (plVar7 = (longlong *)*plVar12, plVar7 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar7 + 0x28))(plVar7,0);
              if (*plVar12 != 0) {
                lVar5 = FMemory::Realloc(*plVar12,0,0);
                *plVar12 = lVar5;
              }
              *(undefined4 *)(plVar12 + 1) = 0;
            }
            break;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          uVar11 = uVar11 + 0x10;
        } while ((int)uVar9 < *(int *)(lVar6 + 0xe0));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0xd8,0);
      *(undefined8 *)(param_1 + 0x988) = 0;
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar4 + 0x478) + 0x1e0,*(undefined8 *)(param_1 + 0x990));
      *(undefined8 *)(param_1 + 0x990) = 0;
      uVar8 = FUN_140bb74b0(lVar4);
      TBaseMulticastDelegate<void>::Remove(uVar8,*(undefined8 *)(param_1 + 0x980));
      *(undefined8 *)(param_1 + 0x980) = 0;
      TBaseMulticastDelegate<void>::Remove(lVar4 + 0xc80,*(undefined8 *)(param_1 + 0x970));
      *(undefined8 *)(param_1 + 0x970) = 0;
    }
  }
  FUN_142ec20c0(param_1);
  plVar12 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 14115b680 FUN_14115b680 body=87 status=ok
// SIG undefined FUN_14115b680(void)

void FUN_14115b680(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    fVar2 = (float)FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(int *)(lVar1 + 0xb0) = (int)fVar2;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d196f0();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b6e0 FUN_14115b6e0 body=80 status=ok
// SIG undefined FUN_14115b6e0(void)

void FUN_14115b6e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0xec) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d57dd0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b730 FUN_14115b730 body=80 status=ok
// SIG undefined FUN_14115b730(void)

void FUN_14115b730(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0xf0) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d57dd0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b780 FUN_14115b780 body=80 status=ok
// SIG undefined FUN_14115b780(void)

void FUN_14115b780(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x100) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d57dd0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b7d0 FUN_14115b7d0 body=80 status=ok
// SIG undefined FUN_14115b7d0(void)

void FUN_14115b7d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x104) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d57dd0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b820 FUN_14115b820 body=80 status=ok
// SIG undefined FUN_14115b820(void)

void FUN_14115b820(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0xf4) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d57dd0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b870 FUN_14115b870 body=80 status=ok
// SIG undefined FUN_14115b870(void)

void FUN_14115b870(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0xf8) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d57dd0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b8c0 FUN_14115b8c0 body=87 status=ok
// SIG undefined FUN_14115b8c0(void)

void FUN_14115b8c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    fVar2 = (float)FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(int *)(lVar1 + 0xb8) = (int)fVar2;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d196f0();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b920 FUN_14115b920 body=87 status=ok
// SIG undefined FUN_14115b920(void)

void FUN_14115b920(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    fVar2 = (float)FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(int *)(lVar1 + 0xb4) = (int)fVar2;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d196f0();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115b980 FUN_14115b980 body=944 status=ok
// SIG undefined FUN_14115b980(void)

void FUN_14115b980(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  bool bVar10;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  bVar10 = *(longlong *)(param_1 + 0xb30) == 0;
  if (bVar10) {
    plVar5 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_142dcf3a0(*(longlong *)(param_1 + 0xb30),local_38);
    lVar7 = *plVar5;
  }
  plVar2 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_50;
  if (bVar10) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar9 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar9 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar7 == 0) goto LAB_14115bc11;
  cVar3 = (*(code *)**(undefined8 **)*param_2)();
  if (cVar3 == '\0') goto LAB_14115bc11;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xb28);
  if (cVar3 != '\0') {
    TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(param_1 + 0xef8,param_3);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0xb28);
    FUN_1411352a0(uVar6,param_1 + 0xef8);
    if (*(longlong *)(param_1 + 0xb90) != 0) {
      cVar3 = FUN_142ebdf20();
      if (cVar3 == '\0') {
        FUN_142f0a7c0(*(undefined8 *)(param_1 + 0xb90),*(undefined4 *)(param_1 + 0xf00));
        *(undefined1 *)(param_1 + 0xef1) = 1;
      }
    }
  }
  if (*(longlong *)(param_1 + 0xb90) == 0) goto LAB_14115bc11;
  iVar4 = FUN_142eed990();
  if (0 < iVar4) goto LAB_14115bc11;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xb28);
  if (cVar3 == '\0') goto LAB_14115bc11;
  uVar6 = FWeakObjectPtr::Get(param_1 + 0xb28);
  lVar7 = FUN_14244f490(uVar6,0);
  if (lVar7 == 0) {
LAB_14115bb9c:
    lVar7 = 0;
  }
  else {
    lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_14115bb9c;
  }
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar9 < DAT_146875c40) {
    _Init_thread_header(&DAT_146875c40);
    if (DAT_146875c40 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146875c28,L"No Friends Found",L"EchoNetMailboxMenu",L"NoFriendsTitle");
      atexit(FUN_143e60f70);
      _Init_thread_footer(&DAT_146875c40);
    }
  }
  if (*piVar9 < DAT_146875c60) {
    _Init_thread_header(&DAT_146875c60);
    if (DAT_146875c60 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146875c48,L"Mail can only be sent to friends.",L"EchoNetMailboxMenu",
                 L"NoFriendsMessage");
      atexit(FUN_143e60ae0);
      _Init_thread_footer(&DAT_146875c60);
    }
  }
  FWeakObjectPtr::operator=(local_48,0);
  local_40 = 0;
  FUN_1410f3960(lVar7,&DAT_146875c28,&DAT_146875c48,local_48,1,0,0);
LAB_14115bc11:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar9 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 14115bd30 FUN_14115bd30 body=469 status=ok
// SIG undefined FUN_14115bd30(void)

void FUN_14115bd30(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar9 = (int)param_3[1];
  lVar5 = *param_3;
  local_78 = (undefined8 *)0x0;
  local_70 = iVar9;
  if (iVar9 == 0) {
    local_6c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_78,iVar9,0);
    puVar7 = local_78;
    do {
      *puVar7 = *(undefined8 *)((lVar5 - (longlong)local_78) + (longlong)puVar7);
      lVar6 = *(longlong *)((lVar5 - (longlong)local_78) + 8 + (longlong)puVar7);
      puVar7[1] = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      puVar7 = puVar7 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = local_70;
  local_38 = 0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x38,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_1446d0520;
    puVar7[1] = param_1;
    *(undefined4 *)(puVar7 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_resc;
    puVar7[3] = uVar3;
    puVar7[4] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar9 = local_70;
    }
    puVar7[5] = 0;
    *(int *)(puVar7 + 6) = iVar9;
    if (iVar9 == 0) {
      *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7 + 5,iVar9,0);
      puVar7 = (undefined8 *)puVar7[5];
      puVar8 = local_78;
      do {
        *puVar7 = *puVar8;
        lVar5 = puVar8[1];
        puVar7[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        puVar7 = puVar7 + 2;
        puVar8 = puVar8 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  local_68[0] = &LAB_14114b790;
  FUN_14204c280(local_68);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
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
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 14115bf10 FUN_14115bf10 body=80 status=ok
// SIG undefined FUN_14115bf10(void)

void FUN_14115bf10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x34) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d131a0();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115bf70 FUN_14115bf70 body=87 status=ok
// SIG undefined FUN_14115bf70(void)

void FUN_14115bf70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x2f0) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d1aea0(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14115bfd0 FUN_14115bfd0 body=308 status=ok
// SIG undefined FUN_14115bfd0(void)

void FUN_14115bfd0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = UGNavigationHeaderItem::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  if (*(longlong *)(param_1 + 0x188) == param_2) {
    iVar1 = *(int *)(lVar2 + 0x7b4);
    if ((iVar1 < 0) || (*(int *)(lVar2 + 0x788) <= iVar1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      return;
    }
    lVar4 = (longlong)iVar1 * 200 + *(longlong *)(lVar2 + 0x780);
    if (*(char *)(lVar4 + 0xc0) == '\0') {
      cVar3 = *(char *)(lVar4 + 0x12);
    }
    else {
      cVar3 = *(char *)(lVar4 + 0x6a);
    }
    if (cVar3 == '\0') {
      return;
    }
    if (1 < *(int *)(lVar4 + 0x60)) {
      bVar5 = *(char *)(lVar4 + 0xc0) == '\0';
      goto LAB_14115c0e6;
    }
  }
  else {
    if (*(longlong *)(param_1 + 400) != param_2) {
      return;
    }
    iVar1 = *(int *)(lVar2 + 0x7b4);
    if ((iVar1 < 0) || (*(int *)(lVar2 + 0x788) <= iVar1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      return;
    }
    lVar4 = (longlong)iVar1 * 200 + *(longlong *)(lVar2 + 0x780);
    if (*(char *)(lVar4 + 0xc0) == '\0') {
      cVar3 = *(char *)(lVar4 + 0x12);
    }
    else {
      cVar3 = *(char *)(lVar4 + 0x6a);
    }
    if (cVar3 != '\0') {
      return;
    }
    if (1 < *(int *)(lVar4 + 0x60)) {
      bVar5 = *(char *)(lVar4 + 0xc0) == '\0';
      goto LAB_14115c0e6;
    }
  }
  bVar5 = false;
LAB_14115c0e6:
  *(bool *)(lVar4 + 0xc0) = bVar5;
  FUN_141172890(lVar2);
  return;
}



// FUNCTION 14115c110 FUN_14115c110 body=874 status=ok
// SIG undefined FUN_14115c110(void)

void FUN_14115c110(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ec5080();
  local_58 = FUN_1411518b0;
  uStack_50._0_4_ = 0;
  pplVar2 = (longlong **)(param_1 + 0x188);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_48[0] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14461b688;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_58._4_4_;
    *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_50._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
  }
  if (local_48 != pplVar2) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 400) != 0) && (plVar5 = *pplVar2, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar5 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar5;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,pplVar2);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    local_48[0] = (longlong *)FMemory::Realloc(plVar3,0,0);
    if (local_48[0] != (longlong *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  local_98 = 0;
  local_90 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"friendsListLabel",0x22);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  FUN_140e99270(param_1,param_1 + 0x308,&local_98,0,6,&local_a8);
  plVar3 = local_a8;
  for (iVar7 = (int)local_a0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"friendsListIcon",0x20);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_140e98b90(param_1,param_1 + 0x310,&local_78,0,6,&local_88);
  plVar3 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_58 = (code *)0x0;
  uStack_50 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"mailSenderLabel",0x20);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  FUN_140e99270(param_1,param_1 + 0x318,&local_58,0,6,&local_68);
  plVar3 = local_68;
  for (iVar7 = (int)local_60; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (code *)0x0) {
    FMemory::Free();
  }
  puVar6 = (undefined8 *)FUN_142085870(param_1,local_38,L"systemIcons");
  *(undefined8 *)(param_1 + 800) = *puVar6;
  plVar3 = (longlong *)puVar6[1];
  plVar5 = *(longlong **)(param_1 + 0x328);
  if (plVar3 != plVar5) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x328);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x328) = plVar3;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 14115c480 FUN_14115c480 body=1004 status=ok
// SIG undefined FUN_14115c480(void)

void FUN_14115c480(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ec5080();
  FUN_142ed2600(param_1,3);
  puVar3 = (undefined8 *)FUN_142085870(param_1,local_58,L"newIndicatorWrapper");
  *(undefined8 *)(param_1 + 600) = *puVar3;
  plVar6 = (longlong *)puVar3[1];
  plVar4 = *(longlong **)(param_1 + 0x260);
  if (plVar6 != plVar4) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x260);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    *(longlong **)(param_1 + 0x260) = plVar6;
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  local_c0 = 0x14;
  local_c8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"mailExpirationLabel",0x28);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_140e99270(param_1,param_1 + 0x308,&local_c8,0,6,&local_d8);
  plVar6 = local_d8;
  for (iVar5 = (int)local_d0; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"mailSenderLabel",0x20);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_140e99270(param_1,param_1 + 0x310,&local_a8,0,6,&local_b8);
  plVar6 = local_b8;
  for (iVar5 = (int)local_b0; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"mailSubjectLabel",0x22);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  FUN_140e99270(param_1,param_1 + 0x318,&local_88,0,6,&local_98);
  plVar6 = local_98;
  for (iVar5 = (int)local_90; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"senderIcon",0x16);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_140e98b90(param_1,param_1 + 800,&local_68,0,6,&local_78);
  plVar6 = local_78;
  for (iVar5 = (int)local_70; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  puVar3 = (undefined8 *)FUN_142085870(param_1,local_48,L"systemIcons");
  *(undefined8 *)(param_1 + 0x328) = *puVar3;
  plVar6 = (longlong *)puVar3[1];
  plVar4 = *(longlong **)(param_1 + 0x330);
  if (plVar6 != plVar4) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x330);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    *(longlong **)(param_1 + 0x330) = plVar6;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 14115c870 FUN_14115c870 body=3335 status=ok
// SIG undefined FUN_14115c870(void)

void FUN_14115c870(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  wchar_t *pwVar16;
  longlong local_res8;
  longlong local_res10;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  short *local_48;
  wchar_t *local_40;
  
  FUN_142ef9e70();
  local_res8 = *(longlong *)(param_1 + 0x38);
  pwVar8 = (wchar_t *)0x0;
  if (local_res8 != 0) {
    lVar4 = UGNavigationHeaderItem::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14115c8d1;
  }
  local_res8 = 0;
LAB_14115c8d1:
  local_68 = (longlong *)0x0;
  local_60 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"PNL_Matchmaking_Content",0x30);
  local_78 = (longlong *)0x0;
  plVar12 = (longlong *)(param_1 + 0x170);
  local_70 = 0;
  FUN_140e98b90(param_1,plVar12,&local_68,0,6,&local_78);
  plVar10 = local_78;
  for (iVar13 = (int)local_70; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*plVar12 != 0) {
    local_78 = (longlong *)0x0;
    local_70 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"TXT_MatchmakingModeName",0x30);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140e99270(*plVar12,param_1 + 0x178,&local_78,0,6,&local_68);
    plVar10 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_78 = (longlong *)0x0;
    local_70 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"modeSelection",0x1c);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140e98b90(*plVar12,param_1 + 0x180,&local_78,0,6,&local_68);
    plVar10 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_78 = (longlong *)0x0;
    local_70 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"scrollBar",0x14);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140e98f00(*plVar12,param_1 + 0x1a0,&local_78,0,6,&local_68);
    plVar10 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_78 = (longlong *)0x0;
    local_70 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"TXT_ObjectiveDescription",0x32);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140e99270(*plVar12,param_1 + 0x1a8,&local_78,0,6,&local_68);
    plVar10 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_78 = (longlong *)0x0;
    local_70 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"listMask",0x12);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140e98b90(*plVar12,param_1 + 0x1b0,&local_78,0,6,&local_68);
    plVar10 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_78 = (longlong *)0x0;
    local_70 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"BTN_Start",0x14);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_14113f8d0(*plVar12,param_1 + 0x1b8,&local_78,0,6,&local_68);
    plVar10 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_78 = (longlong *)0x0;
    local_70 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"matchmakingModeLocked",0x2c);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140e98b90(*plVar12,param_1 + 0x1c0,&local_78,0,6,&local_68);
    plVar10 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar10 = (longlong *)(param_1 + 0x1c8);
    iVar13 = *(int *)(param_1 + 0x1d0);
    if (iVar13 < 3) {
      *(undefined4 *)(param_1 + 0x1d0) = 3;
      if (*(int *)(param_1 + 0x1d4) < 3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar10 + (longlong)iVar13 * 8),0,(longlong)(3 - iVar13) << 3);
    }
    else if ((3 < iVar13) && (iVar14 = iVar13 + -3, iVar14 != 0)) {
      iVar3 = (iVar13 - iVar14) + -3;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar10 + 0x18),(void *)(*plVar10 + (longlong)iVar13 * 8),
                   (longlong)iVar3 << 3);
        iVar13 = *(int *)(param_1 + 0x1d0);
      }
      *(int *)(param_1 + 0x1d0) = iVar13 - iVar14;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar10);
    }
    pwVar16 = pwVar8;
    if (0 < *(int *)(param_1 + 0x1d0)) {
      do {
        FString::PrintfImpl(&local_48,L"PNL_Requirement%d",pwVar16);
        local_70 = 0;
        psVar15 = &DAT_143f3eda8;
        if ((int)local_40 != 0) {
          psVar15 = local_48;
        }
        local_78 = (longlong *)0x0;
        if ((psVar15 != (short *)0x0) && (*psVar15 != 0)) {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (psVar15[lVar4] != 0);
          uVar9 = (int)lVar4 + 1;
          local_70 = (ulonglong)uVar9;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
          }
          FGenericPlatformString::Memcpy(local_78,psVar15,(longlong)(int)uVar9 * 2);
        }
        local_68 = (longlong *)0x0;
        local_60 = 0;
        FUN_140e99270(*plVar12,*plVar10 + (longlong)(int)pwVar16 * 8,&local_78,0,6,&local_68);
        plVar11 = local_68;
        for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free(local_68);
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_48 != (short *)0x0) {
          FMemory::Free();
        }
        uVar9 = (int)pwVar16 + 1;
        pwVar16 = (wchar_t *)(ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x1d0));
    }
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) && (local_res8 != 0)) {
    local_78 = (longlong *)0x0;
    local_70 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"menuGlyph",0x14);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x180),param_1 + 0x198,&local_78,0,6,&local_68);
    plVar12 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_78 = (longlong *)0x0;
    local_70 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"heroicButton0",0x1c);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140f15b10(*(undefined8 *)(param_1 + 0x180),param_1 + 0x188,&local_78,0,6,&local_68);
    plVar12 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_78 = (longlong *)0x0;
    local_70 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"heroicButton1",0x1c);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140f15b10(*(undefined8 *)(param_1 + 0x180),param_1 + 400,&local_78,0,6,&local_68);
    plVar12 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x188) != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHeroicModeButtonClicked",L"::");
      pwVar16 = pwVar8;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar16 = pwVar2;
      }
      FName::FName(&local_res10,pwVar16 + 2,1);
      lVar6 = local_res10;
      lVar4 = *(longlong *)(param_1 + 0x188);
      FWeakObjectPtr::operator=(lVar4 + 0x1b0,param_1);
      *(longlong *)(lVar4 + 0x1b8) = lVar6;
      if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x1b0), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x1b8));
      }
      FUN_142ed2600(*(undefined8 *)(param_1 + 0x188),3);
      local_68 = (longlong *)0x0;
      local_60 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"TXT_ObjectiveTitle0",0x28);
      FUN_142f100e0(*(undefined8 *)(param_1 + 0x188),&local_68,local_res8 + 0x6e8);
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 400) != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHeroicModeButtonClicked",L"::");
      pwVar16 = pwVar8;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar16 = pwVar2;
      }
      FName::FName(&local_res10,pwVar16 + 2,1);
      lVar6 = local_res10;
      lVar4 = *(longlong *)(param_1 + 400);
      FWeakObjectPtr::operator=(lVar4 + 0x1b0,param_1);
      *(longlong *)(lVar4 + 0x1b8) = lVar6;
      if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x1b0), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x1b8));
      }
      FUN_142ed2600(*(undefined8 *)(param_1 + 400),3);
      local_68 = (longlong *)0x0;
      local_60 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"TXT_ObjectiveTitle0",0x28);
      FUN_142f100e0(*(undefined8 *)(param_1 + 400),&local_68,local_res8 + 0x6d0);
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_142f0f790(*(longlong *)(param_1 + 0x1a0),1);
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_142f118f0(*(longlong *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1a0),
                  *(undefined8 *)(param_1 + 0x1b0));
  }
  if ((*(longlong *)(param_1 + 0x1b8) != 0) &&
     (*(undefined1 *)(*(longlong *)(param_1 + 0x1b8) + 0x198) = 0, local_res8 != 0)) {
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxEchoNetMatchmakingMenu::OnMatchMakingButtonClicked",L"::");
    pwVar16 = pwVar8;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar16 = pwVar2;
    }
    FName::FName(&local_res10,pwVar16 + 2,1);
    lVar6 = local_res10;
    lVar4 = *(longlong *)(param_1 + 0x1b8);
    FWeakObjectPtr::operator=(lVar4 + 0x1b0,local_res8);
    *(longlong *)(lVar4 + 0x1b8) = lVar6;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x1b8));
    }
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxEchoNetMatchmakingMenu::OnMatchMakingButtonHeld",L"::");
    pwVar16 = pwVar8;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar16 = pwVar2;
    }
    FName::FName(&local_res10,pwVar16 + 2,1);
    lVar4 = *(longlong *)(param_1 + 0x1b8);
    FWeakObjectPtr::operator=(lVar4 + 0x230,local_res8);
    *(longlong *)(lVar4 + 0x238) = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x230), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x238));
    }
    local_68 = (longlong *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FWeakObjectPtr::operator=(&local_68,0);
    FWeakObjectPtr::operator=(&local_60,0);
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    psVar15 = *(short **)(param_1 + 0x1b8);
    local_48 = psVar15;
    if (psVar15 != (short *)0x0) {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      pwVar8 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(psVar15,uVar7);
    }
    local_40 = pwVar8;
    FUN_142ecfd10(local_res8,&local_48,&local_68);
  }
  return;
}



// FUNCTION 14115d580 FUN_14115d580 body=368 status=ok
// SIG undefined FUN_14115d580(void)

void FUN_14115d580(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 0x14;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"TXT_MatchmakingMode",0x28);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x170,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"TXT_Initialized",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14115d6f0 FUN_14115d6f0 body=1149 status=ok
// SIG undefined FUN_14115d6f0(void)

void FUN_14115d6f0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_res8;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  undefined8 local_60;
  short *local_58;
  int local_50;
  
  FUN_142ef9e70();
  local_res8 = *(longlong *)(param_1 + 0x38);
  uVar10 = 0;
  if (local_res8 != 0) {
    lVar3 = UGNavigationHeaderItem::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14115d755;
  }
  local_res8 = 0;
LAB_14115d755:
  local_68 = (longlong *)0x0;
  local_60 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"starIcon",0x12);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_140e98b90(param_1,(longlong *)(param_1 + 0x170),&local_68,0,6,&local_78);
  plVar8 = local_78;
  for (iVar4 = (int)local_70; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_78 = (longlong *)0x0;
  local_70 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"heroicText",0x16);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  FUN_140e99270(param_1,(longlong *)(param_1 + 0x178),&local_78,0,6,&local_68);
  plVar8 = local_68;
  for (iVar4 = (int)local_60; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_78 = (longlong *)0x0;
  local_70 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"currentlyMatchmaking",0x2a);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  FUN_140e99270(param_1,(longlong *)(param_1 + 0x180),&local_78,0,6,&local_68);
  plVar8 = local_68;
  for (iVar4 = (int)local_60; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = (longlong *)(param_1 + 0x188);
  iVar4 = *(int *)(param_1 + 400);
  if (iVar4 < 3) {
    *(undefined4 *)(param_1 + 400) = 3;
    if (*(int *)(param_1 + 0x194) < 3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar8 + (longlong)iVar4 * 8),0,(longlong)(3 - iVar4) << 3);
  }
  else if ((3 < iVar4) && (iVar5 = iVar4 + -3, iVar5 != 0)) {
    iVar2 = (iVar4 - iVar5) + -3;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar8 + 0x18),(void *)(*plVar8 + (longlong)iVar4 * 8),
                 (longlong)iVar2 << 3);
      iVar4 = *(int *)(param_1 + 400);
    }
    *(int *)(param_1 + 400) = iVar4 - iVar5;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
  }
  uVar11 = uVar10;
  if (0 < *(int *)(param_1 + 400)) {
    do {
      FString::PrintfImpl(&local_58,L"requirement%d",uVar11);
      local_78 = (longlong *)0x0;
      psVar6 = &DAT_143f3eda8;
      if (local_50 != 0) {
        psVar6 = local_58;
      }
      local_70 = 0;
      if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (psVar6[lVar3] != 0);
        uVar7 = (int)lVar3 + 1;
        local_70 = (ulonglong)uVar7;
        if (0 < (int)uVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        }
        FGenericPlatformString::Memcpy(local_78,psVar6,(longlong)(int)uVar7 * 2);
      }
      local_68 = (longlong *)0x0;
      local_60 = 0;
      FUN_140e99270(param_1,*plVar8 + (longlong)(int)uVar11 * 8,&local_78,0,6,&local_68);
      plVar9 = local_68;
      for (iVar4 = (int)local_60; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_58 != (short *)0x0) {
        FMemory::Free();
      }
      plVar9 = *(longlong **)(uVar10 + *plVar8);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x278))(plVar9,0);
      }
      uVar7 = (int)uVar11 + 1;
      uVar10 = uVar10 + 8;
      uVar11 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 400));
  }
  plVar8 = *(longlong **)(param_1 + 0x170);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
  }
  plVar8 = *(longlong **)(param_1 + 0x178);
  if ((plVar8 != (longlong *)0x0) && (local_res8 != 0)) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,local_res8 + 0x6d0,1,0);
  }
  plVar8 = *(longlong **)(param_1 + 0x180);
  if ((plVar8 != (longlong *)0x0) && (local_res8 != 0)) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,local_res8 + 0x700,1,0);
  }
  return;
}



// FUNCTION 14115db70 FUN_14115db70 body=527 status=ok
// SIG undefined FUN_14115db70(void)

void FUN_14115db70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 0xb;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"standardBG",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_14113f2f0(param_1,param_1 + 0x308,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"bgStandardFocus",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14113f2f0(param_1,param_1 + 0x310,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"PNL_Mode_Images",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e98b90(param_1,param_1 + 0x318,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14115dd80 FUN_14115dd80 body=2271 status=ok
// SIG undefined FUN_14115dd80(void)

void FUN_14115dd80(longlong param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  int *piVar11;
  longlong *plVar12;
  int iVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  bool bVar16;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  wchar_t *local_40;
  
  FUN_142ef9e70();
  pwVar14 = *(wchar_t **)(param_1 + 0x38);
  pwVar9 = (wchar_t *)0x0;
  if (pwVar14 != (wchar_t *)0x0) {
    lVar4 = UGNavigationHeaderItem::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar14 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar14 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar16) goto LAB_14115dde9;
  }
  pwVar14 = pwVar9;
LAB_14115dde9:
  local_48 = (longlong *)0x0;
  local_40 = (wchar_t *)0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"PNL_MatchmakingMode_Content",0x38);
  local_68 = (longlong *)0x0;
  plVar15 = (longlong *)(param_1 + 0x178);
  local_60 = 0;
  FUN_140f15e80(param_1,plVar15,&local_48,0,6,&local_68);
  plVar12 = local_68;
  for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_68 = (longlong *)0x0;
  local_60 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"arrowButtons.arrowL",0x28);
  local_48 = (longlong *)0x0;
  local_40 = (wchar_t *)0x0;
  FUN_140f15b10(param_1,param_1 + 0x180,&local_68,0,6,&local_48);
  plVar12 = local_48;
  for (iVar13 = (int)local_40; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_68 = (longlong *)0x0;
  local_60 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"arrowButtons.arrowR",0x28);
  local_48 = (longlong *)0x0;
  local_40 = (wchar_t *)0x0;
  FUN_140f15b10(param_1,param_1 + 0x188,&local_68,0,6,&local_48);
  plVar12 = local_48;
  for (iVar13 = (int)local_40; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*plVar15 != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxEchoNetMatchmakingMenu::OnActivityItemFocused",L"::");
    pwVar8 = pwVar9;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar8 = pwVar2;
    }
    FName::FName(&local_res18,pwVar8 + 2,1);
    lVar6 = local_res18;
    lVar4 = *plVar15;
    plVar12 = (longlong *)(lVar4 + 0x180);
    FWeakObjectPtr::operator=(&local_68,0);
    local_60 = 0;
    FWeakObjectPtr::operator=(&local_68,pwVar14);
    local_60 = lVar6;
    local_res10 = 0;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_68), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_60);
    }
    piVar1 = (int *)*plVar12;
    iVar13 = *(int *)(lVar4 + 0x188);
    lVar6 = (longlong)local_68;
    for (piVar11 = piVar1; local_68 = (longlong *)lVar6, piVar11 != piVar1 + (longlong)iVar13 * 4;
        piVar11 = piVar11 + 4) {
      local_68._0_4_ = (int)lVar6;
      if (((*piVar11 == (int)local_68) &&
          (local_68._4_4_ = (int)((ulonglong)lVar6 >> 0x20), bVar16 = piVar11[1] == local_68._4_4_,
          bVar16)) ||
         ((cVar3 = FWeakObjectPtr::IsValid(piVar11), cVar3 == '\0' &&
          (cVar3 = FWeakObjectPtr::IsValid(&local_68), cVar3 == '\0')))) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (*(longlong *)(piVar11 + 2) == local_60)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        if ((int)((longlong)piVar11 - (longlong)piVar1 >> 4) != -1) goto LAB_14115e115;
        break;
      }
      lVar6 = (longlong)local_68;
    }
    iVar13 = *(int *)(lVar4 + 0x188);
    *(int *)(lVar4 + 0x188) = iVar13 + 1;
    if (*(int *)(lVar4 + 0x18c) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar13);
    }
    puVar10 = (undefined4 *)((longlong)iVar13 * 0x10 + *plVar12);
    *puVar10 = (int)local_68;
    puVar10[1] = local_68._4_4_;
    *(longlong *)(puVar10 + 2) = local_60;
LAB_14115e115:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnActivityItemFocused",L"::");
    pwVar8 = pwVar9;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar8 = pwVar2;
    }
    FName::FName(&local_res18,pwVar8 + 2,1);
    lVar6 = local_res18;
    lVar4 = *plVar15;
    plVar12 = (longlong *)(lVar4 + 0x180);
    FWeakObjectPtr::operator=(&local_68,0);
    local_60 = 0;
    FWeakObjectPtr::operator=(&local_68,param_1);
    local_60 = lVar6;
    local_res10 = 0;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_68), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_60);
    }
    piVar1 = (int *)*plVar12;
    iVar13 = *(int *)(lVar4 + 0x188);
    lVar6 = (longlong)local_68;
    for (piVar11 = piVar1; local_68 = (longlong *)lVar6, piVar11 != piVar1 + (longlong)iVar13 * 4;
        piVar11 = piVar11 + 4) {
      local_68._0_4_ = (int)lVar6;
      if (((*piVar11 == (int)local_68) &&
          (local_68._4_4_ = (int)((ulonglong)lVar6 >> 0x20), bVar16 = piVar11[1] == local_68._4_4_,
          bVar16)) ||
         ((cVar3 = FWeakObjectPtr::IsValid(piVar11), cVar3 == '\0' &&
          (cVar3 = FWeakObjectPtr::IsValid(&local_68), cVar3 == '\0')))) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (*(longlong *)(piVar11 + 2) == local_60)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        if ((int)((longlong)piVar11 - (longlong)piVar1 >> 4) != -1) goto LAB_14115e266;
        break;
      }
      lVar6 = (longlong)local_68;
    }
    iVar13 = *(int *)(lVar4 + 0x188);
    *(int *)(lVar4 + 0x188) = iVar13 + 1;
    if (*(int *)(lVar4 + 0x18c) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar13);
    }
    puVar10 = (undefined4 *)((longlong)iVar13 * 0x10 + *plVar12);
    *puVar10 = (int)local_68;
    puVar10[1] = local_68._4_4_;
    *(longlong *)(puVar10 + 2) = local_60;
LAB_14115e266:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxEchoNetMatchmakingMenu::OnActivityItemClicked",L"::");
    pwVar8 = pwVar9;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar8 = pwVar2;
    }
    FName::FName(&local_res18,pwVar8 + 2,1);
    lVar4 = *plVar15;
    plVar12 = (longlong *)(lVar4 + 0x1a8);
    FWeakObjectPtr::operator=(&local_68,0);
    local_60 = 0;
    FWeakObjectPtr::operator=(&local_68,pwVar14);
    local_60 = local_res18;
    local_res10 = 0;
    if ((local_res18 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_68), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_60);
    }
    piVar1 = (int *)*plVar12;
    iVar13 = *(int *)(lVar4 + 0x1b0);
    lVar6 = (longlong)local_68;
    for (piVar11 = piVar1; local_68 = (longlong *)lVar6, piVar11 != piVar1 + (longlong)iVar13 * 4;
        piVar11 = piVar11 + 4) {
      local_68._0_4_ = (int)lVar6;
      if (((*piVar11 == (int)local_68) &&
          (local_68._4_4_ = (int)((ulonglong)lVar6 >> 0x20), bVar16 = piVar11[1] == local_68._4_4_,
          bVar16)) ||
         ((cVar3 = FWeakObjectPtr::IsValid(piVar11), cVar3 == '\0' &&
          (cVar3 = FWeakObjectPtr::IsValid(&local_68), cVar3 == '\0')))) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (*(longlong *)(piVar11 + 2) == local_60)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        if ((int)((longlong)piVar11 - (longlong)piVar1 >> 4) != -1) goto LAB_14115e3b5;
        break;
      }
      lVar6 = (longlong)local_68;
    }
    iVar13 = *(int *)(lVar4 + 0x1b0);
    *(int *)(lVar4 + 0x1b0) = iVar13 + 1;
    if (*(int *)(lVar4 + 0x1b4) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar13);
    }
    puVar10 = (undefined4 *)((longlong)iVar13 * 0x10 + *plVar12);
    *puVar10 = (int)local_68;
    puVar10[1] = local_68._4_4_;
    *(longlong *)(puVar10 + 2) = local_60;
LAB_14115e3b5:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    *(undefined1 *)(*plVar15 + 0x20a) = 2;
    *(undefined1 *)(*plVar15 + 0x209) = 2;
    *(undefined1 *)(*plVar15 + 0x251) = 1;
    *(undefined1 *)(*plVar15 + 0x2c8) = 1;
    *(undefined4 *)(*plVar15 + 0x2cc) = *(undefined4 *)(param_1 + 0x170);
  }
  plVar15 = (longlong *)(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x198) = 0;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnArrowButtonClicked",L"::");
    pwVar8 = pwVar9;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar8 = pwVar2;
    }
    FName::FName(&local_res10,pwVar8 + 2,1);
    lVar6 = local_res10;
    lVar4 = *(longlong *)(param_1 + 0x180);
    FWeakObjectPtr::operator=(lVar4 + 0x1b0,param_1);
    *(longlong *)(lVar4 + 0x1b8) = lVar6;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x1b8));
    }
    if (pwVar14 != (wchar_t *)0x0) {
      local_68 = (longlong *)0x0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_68,0);
      FWeakObjectPtr::operator=(&local_60,0);
      FWeakObjectPtr::operator=(&local_58,0);
      FWeakObjectPtr::operator=(&local_50,0);
      plVar12 = *(longlong **)(param_1 + 0x180);
      pwVar8 = pwVar9;
      local_48 = plVar12;
      if (plVar12 != (longlong *)0x0) {
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        pwVar8 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(plVar12,uVar7);
      }
      local_40 = pwVar8;
      FUN_142ecfd10(pwVar14,&local_48,&local_68);
    }
  }
  if (*plVar15 != 0) {
    *(undefined1 *)(*plVar15 + 0x198) = 0;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnArrowButtonClicked",L"::");
    pwVar8 = pwVar9;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar8 = pwVar2;
    }
    FName::FName(&local_res10,pwVar8 + 2,1);
    lVar6 = local_res10;
    lVar4 = *plVar15;
    FWeakObjectPtr::operator=(lVar4 + 0x1b0,param_1);
    *(longlong *)(lVar4 + 0x1b8) = lVar6;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x1b8));
    }
    if (pwVar14 != (wchar_t *)0x0) {
      local_68 = (longlong *)0x0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_68,0);
      FWeakObjectPtr::operator=(&local_60,0);
      FWeakObjectPtr::operator=(&local_58,0);
      FWeakObjectPtr::operator=(&local_50,0);
      plVar15 = (longlong *)*plVar15;
      local_48 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        pwVar9 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(plVar15,uVar7);
      }
      local_40 = pwVar9;
      FUN_142ecfd10(pwVar14,&local_48,&local_68);
    }
  }
  return;
}



// FUNCTION 14115e660 FUN_14115e660 body=755 status=ok
// SIG undefined FUN_14115e660(void)

void FUN_14115e660(longlong param_1)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ec3600();
  if (*(float *)(param_1 + 0x2c8) == 0.0) {
    dVar1 = (double)FUN_142eeea40(param_1);
    *(float *)(param_1 + 0x2c8) = (float)dVar1;
  }
  local_20 = 0xf;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"contentWrapper",0x1e);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98b90(param_1,param_1 + 0x2d8,&local_28,0,6,&local_38);
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
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_142087ad0(*(longlong *)(param_1 + 0x2d8),param_1 + 0x2cc,param_1 + 0x2d0);
    if (*(longlong *)(param_1 + 0x248) == 0) {
      local_38 = (longlong *)0x0;
      local_30 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"label",0xc);
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x2d8),param_1 + 0x248,&local_38,0,6,&local_28);
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
    local_30 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"hintGlyphWrapper.hintGlyph",0x36);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x2d8),param_1 + 0x2e0,&local_38,0,6,&local_28);
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
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 != 0) {
    lVar3 = UGNavigationHeaderItem::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14115e8f7;
  }
  lVar7 = 0;
LAB_14115e8f7:
  plVar6 = *(longlong **)(param_1 + 0x2e0);
  if ((plVar6 != (longlong *)0x0) && (lVar7 != 0)) {
    local_20 = 0;
    local_28 = plVar6;
    uVar4 = UBlendableInterface::GetPrivateStaticClass();
    local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar4);
    FUN_142ecff00(lVar7,&local_28,DAT_146b3e2a0);
  }
  return;
}



// FUNCTION 14115e960 FUN_14115e960 body=980 status=ok
// SIG undefined FUN_14115e960(void)

void FUN_14115e960(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  FUN_142ec5080();
  local_30 = 0xf;
  local_38 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"characterClass",0x1e);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140e98b90(param_1,param_1 + 0x308,&local_38,0,6,&local_48);
  plVar4 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"characterLevelNum",0x24);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x310,&local_48,0,6,&local_38);
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
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"characterLevelLabel",0x28);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x318,&local_48,0,6,&local_38);
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
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"dlcLabel",0x12);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 800,&local_48,0,6,&local_38);
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
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x334) = 0;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"empty",0xc);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x308),&local_38);
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong **)(param_1 + 0x310) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x310);
    uVar2 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(param_1 + 0x310),uVar2,1,0);
  }
  if (*(longlong **)(param_1 + 0x318) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x318);
    uVar2 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(param_1 + 0x318),uVar2,1,0);
  }
  uVar2 = FUN_1404b03b0();
  FUN_142ed3af0(param_1,uVar2,0);
  if (*(longlong **)(param_1 + 800) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 800);
    uVar2 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(param_1 + 800),uVar2,1,0);
  }
  *(undefined1 *)(param_1 + 0x338) = 0;
  return;
}



// FUNCTION 14115ed40 FUN_14115ed40 body=645 status=ok
// SIG undefined FUN_14115ed40(void)

void FUN_14115ed40(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ec5080();
  uVar1 = FUN_1414afdd0();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar2 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x318) = lVar2;
  if (lVar2 != 0) {
    FUN_1411ee6c0(lVar2,param_1);
    FDefaultXRCamera::UseImplicitHMDPosition(*(undefined8 *)(param_1 + 0x318),0);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"TXT_Status",0x16);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x308,&local_28,0,6,&local_38);
  plVar3 = local_38;
  for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  local_30 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"vaultStatusAnim",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98b90(param_1,param_1 + 0x310,&local_38,0,6,&local_28);
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
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"friendText",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 800,&local_38,0,6,&local_28);
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
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x348) = 0xffffffffffffffff;
  return;
}



// FUNCTION 14115efd0 FUN_14115efd0 body=367 status=ok
// SIG undefined FUN_14115efd0(void)

void FUN_14115efd0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec3600();
  local_10 = 9;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"listIcon",0x12);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x2c8) = uVar1;
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
  local_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"sparkle",0x10);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x2d0) = uVar1;
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
  return;
}



// FUNCTION 14115f140 FUN_14115f140 body=2634 status=ok
// SIG undefined FUN_14115f140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14115f140(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_140 [4];
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  bVar11 = false;
  local_148 = 0;
  LOCK();
  bVar13 = *(int *)(param_1 + 0xb18) == 0;
  if (bVar13) {
    *(int *)(param_1 + 0xb18) = 0;
  }
  UNLOCK();
  if (!bVar13) {
    return 1;
  }
  if (*(char *)(param_1 + 0xd80) != '\0') {
    cVar3 = *(char *)((longlong)param_2 + 0xc);
    if ((cVar3 == '\0') && (DAT_146875ba8 == *param_2)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (!bVar13) {
      if ((cVar3 == '\0') && (DAT_146b3e2b8 == *param_2)) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      if (!bVar13) {
        if ((cVar3 == '\0') && (DAT_146b3e2a0 == *param_2)) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if (!bVar13) {
          if ((cVar3 == '\0') && (DAT_1468757f8 == *param_2)) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          if (!bVar13) goto LAB_14115f218;
        }
        FUN_141176680(param_1 + -0x4d8,0);
        goto LAB_14115f218;
      }
    }
    uVar8 = 0;
LAB_14115f260:
    FUN_141176680(param_1 + -0x4d8,uVar8);
    FUN_142ebe410(param_1 + -0x4d8);
    return 1;
  }
  cVar3 = FUN_14114bac0(param_1 + -0x4d8);
  if (cVar3 != '\0') {
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146875ba8 == *param_2)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      uVar8 = 1;
      goto LAB_14115f260;
    }
  }
LAB_14115f218:
  if (((*(char *)(param_1 + 0xda0) != '\0') && (*(longlong *)(param_1 + 0x6f8) != 0)) &&
     (plVar9 = (longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x170),
     cVar3 = (**(code **)(*plVar9 + 0x20))(plVar9,param_2), cVar3 != '\0')) {
    return 1;
  }
  cVar3 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar3 == '\0') && (DAT_1468758a8 == *param_2)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    if (((*(char *)(param_1 + 0x978) == '\x01') &&
        (*(longlong **)(param_1 + 0x688) != (longlong *)0x0)) &&
       (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x688) + 0x2b0))(), lVar5 != 0)) {
      lVar6 = FUN_14133af30();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        FUN_141170890(param_1 + -0x4d8,lVar5,0);
        return 1;
      }
    }
    goto LAB_14115fb7a;
  }
  if ((cVar3 == '\0') && (DAT_1468757f0 == *param_2)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    if (*(char *)(param_1 + 0x978) == '\x01') {
      cVar3 = FUN_141155b90(param_1 + -0x4d8);
      if (cVar3 == '\0') {
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c8,L"Not Signed In",L"EchoNetMailboxMenu",
                           L"MailboxNotSignedInTitle");
        FUN_1411768a0(param_1 + -0x4d8,uVar8);
        local_a8 = local_c0;
LAB_14115f725:
        if (local_a8 == (longlong *)0x0) {
          return 1;
        }
        LOCK();
        plVar9 = local_a8 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return 1;
        }
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return 1;
        }
        (**(code **)(*local_a8 + 8))(local_a8,1);
        return 1;
      }
      uVar8 = 2;
      goto LAB_14115f376;
    }
    goto LAB_14115fb7a;
  }
  if ((cVar3 == '\0') && (DAT_146b3e2b8 == *param_2)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    cVar3 = *(char *)(param_1 + 0x978);
    if (cVar3 == '\x02') {
      uVar8 = 1;
    }
    else if (cVar3 == '\x04') {
      cVar3 = FUN_141155840(param_1 + -0x4d8);
      if (cVar3 != '\0') goto LAB_14115fb7a;
      if (*(longlong *)(param_1 + 0x748) != 0) {
        local_140[0] = 0;
        local_140[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_140,0);
        FGenericPlatformString::Memcpy(local_140[0],L"hide",10);
        FUN_142088910(*(undefined8 *)(param_1 + 0x748),local_140);
        if (local_140[0] != 0) {
          FMemory::Free();
        }
      }
      uVar8 = 3;
    }
    else {
      if (cVar3 != '\x03') goto LAB_14115fb7a;
      uVar8 = 2;
    }
LAB_14115f376:
    FUN_141178a60(param_1 + -0x4d8,uVar8);
    return 1;
  }
  if ((cVar3 == '\0') && (DAT_146b3e2a0 == *param_2)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    cVar3 = *(char *)(param_1 + 0x978);
    if (cVar3 == '\x04') {
      lVar5 = param_1 + -0x4d8;
      cVar3 = FUN_141155840(lVar5);
      if (cVar3 == '\0') {
        if (*(longlong *)(param_1 + 0x748) != 0) {
          local_140[2] = 0;
          local_140[3] = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_140 + 2,0);
          FGenericPlatformString::Memcpy(local_140[2],L"hide",10);
          FUN_142088910(*(undefined8 *)(param_1 + 0x748),local_140 + 2);
          if (local_140[2] != 0) {
            FMemory::Free();
          }
        }
        local_148 = 0xffffffff;
        if (*(longlong *)(param_1 + 0xb08) != 0) {
          FUN_14170c210(&local_148);
        }
        local_144 = 0xffffffff;
        if (*(longlong *)(param_1 + 0xb00) != 0) {
          FUN_14170c210(&local_144);
        }
        FWeakObjectPtr::operator=(&local_120,lVar5);
        uVar10 = local_144;
        uVar12 = local_148;
        local_144 = 0xffffffff;
        local_148 = 0xffffffff;
        local_68 = (longlong *)0x0;
        local_58 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_88);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_FUN_14461b550;
          puVar7[1] = lVar5;
          *(undefined4 *)(puVar7 + 2) = local_120;
          *(undefined4 *)((longlong)puVar7 + 0x14) = local_11c;
          *(undefined4 *)(puVar7 + 3) = uVar10;
          uVar10 = 0xffffffff;
          *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar12;
          uVar12 = 0xffffffff;
        }
        local_98[0] = &LAB_14114b920;
        FUN_14208c260(lVar5,local_98);
        if (local_58 != 0) {
          plVar9 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar9 = local_68;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(uVar12);
        FUN_1416f8340(uVar10);
        FUN_1416f8340(local_144);
        FUN_1416f8340(local_148);
        return 1;
      }
    }
    else if (cVar3 == '\x02') {
      if ((*(longlong *)(param_1 + 0x6b8) != 0) && (iVar4 = FUN_142eed990(), iVar4 < 1)) {
        return 1;
      }
    }
    else if ((cVar3 == '\x01') &&
            (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x688) + 0x2b0))(), lVar5 != 0)) {
      lVar6 = FUN_14133af30();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (((bVar11) && ((byte)(*(char *)(lVar5 + 0x338) - 1U) < 3)) &&
         (cVar3 = FUN_141155b90(param_1 + -0x4d8), cVar3 == '\0')) {
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_b0,L"Not Signed In",L"EchoNetMailboxMenu",
                           L"MailboxNotSignedInTitle");
        FUN_1411768a0(param_1 + -0x4d8,uVar8);
        goto LAB_14115f725;
      }
    }
    goto LAB_14115fb7a;
  }
  if ((cVar3 == '\0') && (DAT_146875830 == *param_2)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    if ((byte)(*(char *)(param_1 + 0x978) - 2U) < 3) {
      FUN_14114bc30(param_1 + -0x4d8,0);
      return 1;
    }
    if (*(char *)(param_1 + 0x978) == '\x01') {
      FUN_14114bc80(param_1 + -0x4d8,0);
      return 1;
    }
    goto LAB_14115fb7a;
  }
  if ((cVar3 == '\0') && (DAT_146875828 == *param_2)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    if ((byte)(*(char *)(param_1 + 0x978) - 2U) < 3) {
      FUN_14114bc30(param_1 + -0x4d8,1);
      return 1;
    }
    if (*(char *)(param_1 + 0x978) == '\x01') {
      FUN_14114bc80(param_1 + -0x4d8,1);
      return 1;
    }
    goto LAB_14115fb7a;
  }
  if ((cVar3 == '\0') && (DAT_1468758a0 == *param_2)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if ((!bVar13) || (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x650), cVar3 == '\0')) {
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146875938 == *param_2)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (!bVar11) {
      if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146875930 == *param_2)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) goto LAB_14115fb7a;
    }
    if ((*(char *)(param_1 + 0xdb8) == '\0') &&
       (cVar3 = FUN_142ebdf20(*(undefined8 *)(param_1 + 0x688)), cVar3 != '\0')) {
      return 1;
    }
    if ((*(char *)(param_1 + 0xdd0) == '\0') &&
       (cVar3 = FUN_142ebdf20(*(undefined8 *)(param_1 + 0x6b8)), cVar3 != '\0')) {
      return 1;
    }
    goto LAB_14115fb7a;
  }
  if ((*(char *)(param_1 + 0x978) != '\x01') || (*(longlong **)(param_1 + 0x688) == (longlong *)0x0)
     ) {
    if ((*(char *)(param_1 + 0x978) == '\x03') &&
       ((*(longlong *)(param_1 + 0xb08) != 0 &&
        (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x2b0))(), lVar5 != 0)))) {
      local_f8 = *(undefined8 *)(*(longlong *)(param_1 + 0xb08) + 0x3f8);
      local_f0 = *(longlong **)(*(longlong *)(param_1 + 0xb08) + 0x400);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x650);
      cVar3 = FUN_140ba7eb0(uVar8,&local_f8);
      plVar9 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_f0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (cVar3 != '\0') {
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xb08) + 0x400);
        uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0xb08) + 0x3f8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_118._0_4_ = (undefined4)uVar8;
        local_118._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_110._0_4_ = SUB84(plVar9,0);
        uStack_110._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
        local_d8 = (undefined4)local_118;
        uStack_d4 = local_118._4_4_;
        uStack_d0 = (undefined4)uStack_110;
        uStack_cc = uStack_110._4_4_;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_158 = 1;
        local_118 = uVar8;
        uStack_110 = plVar9;
        FUN_1411769e0(param_1 + -0x4d8,&local_d8,lVar5,*(undefined8 *)(param_1 + 0x6b8));
        plVar2 = uStack_110;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar9 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*uStack_110)(uStack_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*uStack_110 + 8))(uStack_110,1);
              uVar8 = FUN_1410db2b0(param_1,param_2);
              return uVar8;
            }
          }
        }
      }
    }
    goto LAB_14115fb7a;
  }
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x688) + 0x2b0))();
  if (lVar5 == 0) goto LAB_14115fb7a;
  lVar6 = FUN_14133af30();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) goto LAB_14115fb7a;
  if ((*(char *)(lVar5 + 0x338) == '\x02') && (lVar6 = *(longlong *)(lVar5 + 0x3c8), lVar6 != 0)) {
    bVar11 = true;
    local_100 = *(longlong **)(lVar5 + 0x3d0);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    local_108 = lVar6;
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x650);
    cVar3 = FUN_140ba7eb0(uVar8,&local_108);
    if (cVar3 == '\0') goto LAB_14115f90e;
    bVar13 = true;
  }
  else {
LAB_14115f90e:
    bVar13 = false;
  }
  plVar9 = local_100;
  if ((bVar11) && (local_100 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_100 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (bVar13) {
    local_e8 = *(undefined8 *)(lVar5 + 0x3c8);
    local_e0 = *(longlong *)(lVar5 + 0x3d0);
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    local_158 = 2;
    FUN_1411769e0(param_1 + -0x4d8,&local_e8,lVar5,*(undefined8 *)(param_1 + 0x688));
    uVar8 = FUN_1410db2b0(param_1,param_2);
    return uVar8;
  }
LAB_14115fb7a:
  uVar8 = FUN_1410db2b0(param_1,param_2);
  return uVar8;
}



// FUNCTION 14115fb90 FUN_14115fb90 body=1254 status=ok
// SIG undefined FUN_14115fb90(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_14115fb90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + -0x4d8);
  cVar3 = FUN_142ebdaa0(plVar1,(int)param_2[1]);
  if ((cVar3 == '\0') || (cVar3 = FUN_142ebdb20(plVar1,(int)param_2[1]), cVar3 != '\0')) {
    return 0;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar3 == '\0') {
LAB_14115fc2b:
    bVar4 = false;
  }
  else {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar8 = FUN_140ec9a00(uVar7);
    if ((lVar8 == 0) || (cVar3 = FUN_141111680(lVar8), cVar3 == '\0')) goto LAB_14115fc2b;
    bVar4 = true;
    cVar3 = FUN_1410db2b0(param_1,param_2);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  cVar3 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar3 == '\0') && (DAT_146875830 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    cVar3 = FUN_141176590(plVar1);
    if ((cVar3 != '\0') && (lVar8 = FWeakObjectPtr::Get(param_1 + 0xf4), lVar8 != 0)) {
      lVar9 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        iVar6 = FUN_140b5d080(lVar8);
        *(int *)(param_1 + 0x31c) = (*(int *)(param_1 + 0x31c) + 1) % (iVar6 + 1);
        LOCK();
        *(undefined4 *)(param_1 + 0xb0) = 1;
        UNLOCK();
      }
    }
    return 1;
  }
  if ((cVar3 == '\0') && (DAT_146875b10 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    cVar3 = FUN_141176610(plVar1);
    if (cVar3 == '\0') {
      return 1;
    }
    FUN_1411786c0(plVar1,1);
    return 1;
  }
  if ((cVar3 == '\0') && (DAT_1468757f0 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    iVar6 = *(int *)(param_1 + 0x2dc);
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x2b0) <= iVar6)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return 1;
    }
    lVar8 = (longlong)iVar6 * 200 + *(longlong *)(param_1 + 0x2a8);
    if (*(int *)(lVar8 + 0x60) < 2) {
      return 1;
    }
    *(bool *)(lVar8 + 0xc0) = *(char *)(lVar8 + 0xc0) == '\0';
    local_28 = 0;
    local_20 = 0;
    if (*(int *)(param_1 + 0x30) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = *(undefined2 **)(param_1 + 0x28);
    }
    lVar8 = *plVar1;
    puVar10 = (undefined8 *)FName::FName(local_res8,puVar11,1);
    (**(code **)(lVar8 + 0x4e8))(plVar1,*puVar10,&local_28);
    FUN_141172890(plVar1);
    return 1;
  }
  if ((cVar3 == '\0') && (DAT_146b3e2a0 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    lVar8 = *param_2;
    if ((((((lVar8 == DAT_146875838) || (lVar8 == DAT_146875840)) || (lVar8 == DAT_146875848)) ||
         ((lVar8 == DAT_146875850 || (lVar8 == DAT_146875858)))) || (lVar8 == DAT_146875930)) ||
       (lVar8 == DAT_146875938)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (((!bVar2) && (*(longlong *)(param_1 + 0x2a0) != 0)) &&
       (cVar3 = FUN_141155810(), cVar3 != '\0')) {
      iVar6 = *(int *)(param_1 + 0x2dc);
      *(int *)(param_1 + 0x2dc) = iVar6;
      if ((iVar6 < 0) || (*(int *)(param_1 + 0x2b0) <= iVar6)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        return 0;
      }
      uVar5 = FUN_1411543a0(plVar1,(longlong)iVar6 * 200 + *(longlong *)(param_1 + 0x2a8),0);
      return uVar5;
    }
  }
  lVar8 = *param_2;
  if (((((lVar8 == DAT_146875838) || (lVar8 == DAT_146875840)) || (lVar8 == DAT_146875848)) ||
      ((lVar8 == DAT_146875850 || (lVar8 == DAT_146875858)))) ||
     ((lVar8 == DAT_146875930 || (lVar8 == DAT_146875938)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    if ((*(char *)((longlong)param_2 + 0xc) == '\x01') && (DAT_146b3e2a8 == lVar8)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (((bVar2) && (*(longlong *)(param_1 + 0x2a0) != 0)) &&
       (cVar3 = FUN_141155810(), cVar3 != '\0')) {
      iVar6 = *(int *)(param_1 + 0x2dc);
      *(int *)(param_1 + 0x2dc) = iVar6;
      if ((iVar6 < 0) || (*(int *)(param_1 + 0x2b0) <= iVar6)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        cVar3 = FUN_141111180(plVar1);
        if (cVar3 != '\0') {
          return 1;
        }
        if (((*(uint *)(param_1 + 0x2d8) & 0xfffffffa) != 0) || (*(uint *)(param_1 + 0x2d8) == 1)) {
          *(undefined4 *)(param_1 + 0x2d0) = 0;
          if (*(int *)(param_1 + 0x2d4) != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x2c8,0);
          }
          FUN_14114bb70(plVar1);
          FUN_141172890(plVar1);
          return 1;
        }
      }
      return 0;
    }
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_1468757a0 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_1468757a8 == *param_2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) goto LAB_14116004f;
  }
  if ((*(longlong *)(param_1 + 0x2a0) != 0) && (cVar3 = FUN_141155810(), cVar3 == '\0')) {
    FUN_141150fc0(*(undefined8 *)(param_1 + 0x2a0),0xffffffff);
  }
LAB_14116004f:
  if (!bVar4) {
    uVar5 = FUN_1410db2b0(param_1,param_2);
    return uVar5;
  }
  return 0;
}



// FUNCTION 141160080 FUN_141160080 body=1519 status=ok
// SIG undefined FUN_141160080(void)

undefined8 FUN_141160080(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [48];
  
  if ((*(int *)(param_1 + 0x1b0) == 2) && (*(char *)((longlong)param_2 + 0xc) == '\0')) {
    if (DAT_146b3e2b8 == *param_2) {
      plVar12 = (longlong *)(param_1 + -0x4d8);
      if (*(int *)(param_1 + 0x1b0) != 1) {
        *(undefined1 *)(param_1 + 0x490) = 0;
        *(undefined4 *)(param_1 + 0x1b0) = 1;
        if (*(longlong *)(param_1 + 0x2b0) != 0) {
          FUN_1410c94f0();
        }
        uVar7 = 0;
        if (*(longlong *)(param_1 + 0x240) != 0) {
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x240) + 0x170);
          (**(code **)(*plVar3 + 0x38))(plVar3,1);
          uVar7 = *(undefined8 *)(param_1 + 0x240);
        }
        uVar7 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>(local_78,uVar7);
        FUN_142ed36d0(plVar12,uVar7,0);
      }
      LOCK();
      *(undefined4 *)(param_1 + 0xb0) = 1;
      UNLOCK();
      local_d8 = 0;
      local_d0 = 0;
      lVar9 = *plVar12;
      puVar8 = (undefined8 *)FName::FName(local_res18,L"Select_Close",1);
      (**(code **)(lVar9 + 0x4e8))(plVar12,*puVar8,&local_d8);
      return 1;
    }
    if (DAT_146875058 == *param_2) {
      lVar9 = FUN_1410cb7c0(param_1 + -0x4d8);
      if (lVar9 != 0) {
        *(undefined1 *)(param_1 + 0x490) = 0;
        FUN_140d189f0(lVar9);
        local_c8 = 0;
        local_c0 = 0;
        lVar9 = *(longlong *)(param_1 + -0x4d8);
        puVar8 = (undefined8 *)FName::FName(local_res20,L"MainMenu_Confirm",1);
        (**(code **)(lVar9 + 0x4e8))(param_1 + -0x4d8,*puVar8,&local_c8);
        if (*(longlong *)(param_1 + 0x2b0) != 0) {
          FUN_1410e8ad0();
        }
      }
      LOCK();
      *(undefined4 *)(param_1 + 0xb0) = 1;
      UNLOCK();
      return 1;
    }
  }
  cVar5 = FUN_1410db2b0(param_1);
  if (cVar5 != '\0') {
    return 1;
  }
  if ((*(int *)(param_1 + 0x1b0) != 1) || (*(char *)((longlong)param_2 + 0xc) != '\0')) {
    return 0;
  }
  if (DAT_146875918 != *param_2) {
    if (DAT_146875830 == *param_2) {
      FUN_141157500(param_1 + -0x4d8,0);
      return 1;
    }
    if (DAT_146875828 == *param_2) {
      FUN_141157500(param_1 + -0x4d8,1);
      return 1;
    }
    if (*(longlong *)(param_1 + 0x238) == *param_2) {
      uVar6 = FUN_1410cbde0(*(undefined1 *)(param_1 + 0x480));
      *(undefined1 *)(param_1 + 0x480) = uVar6;
      if (*(longlong *)(param_1 + 0x2a8) != 0) {
        FUN_1410edce0(*(longlong *)(param_1 + 0x2a8),uVar6);
      }
      if (*(longlong *)(param_1 + 0x2b0) != 0) {
        FUN_1410edce0(*(longlong *)(param_1 + 0x2b0),*(undefined1 *)(param_1 + 0x480));
      }
      local_a8 = 0;
      local_a0 = 0;
      if (*(int *)(param_1 + 0x30) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(param_1 + 0x28);
      }
      lVar9 = *(longlong *)(param_1 + -0x4d8);
      puVar8 = (undefined8 *)FName::FName(local_80,puVar10,1);
      (**(code **)(lVar9 + 0x4e8))((longlong *)(param_1 + -0x4d8),*puVar8,&local_a8);
      LOCK();
      *(undefined4 *)(param_1 + 0xb0) = 1;
      UNLOCK();
      return 1;
    }
    if (DAT_146875050 == *param_2) {
      if (*(int *)(param_1 + 0x1b0) != 2) {
        *(undefined1 *)(param_1 + 0x490) = 0;
        *(undefined4 *)(param_1 + 0x1b0) = 2;
        if (*(longlong *)(param_1 + 0x240) != 0) {
          plVar12 = (longlong *)(*(longlong *)(param_1 + 0x240) + 0x170);
          (**(code **)(*plVar12 + 0x38))(plVar12,0);
        }
        if (*(longlong *)(param_1 + 0x2b0) != 0) {
          FUN_1410c4330();
        }
      }
      LOCK();
      *(undefined4 *)(param_1 + 0xb0) = 1;
      UNLOCK();
      return 1;
    }
    if (DAT_146875810 != *param_2) {
      return 0;
    }
    FUN_1404cf2e0(&local_e8,0);
    plVar12 = local_e8;
    if ((((local_e8 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*local_e8 + 0x10))(local_e8,9), cVar5 != '\0')) &&
        (lVar9 = FUN_1410ae4a0(param_1 + -0x4d8), lVar9 != 0)) &&
       (lVar9 = UGameInstance::FindLocalPlayerFromControllerId(lVar9,(int)param_2[1]), lVar9 != 0))
    {
      lVar9 = FUN_142547b50(lVar9,local_68);
      plVar3 = *(longlong **)(lVar9 + 0x10);
      lVar9 = *(longlong *)(lVar9 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        plVar12 = local_e8;
      }
      FUN_1404bf980(local_68);
      if (lVar9 != 0) {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          plVar12 = local_e8;
        }
        local_98 = lVar9;
        local_90 = plVar3;
        (**(code **)(*plVar12 + 0x68))(plVar12,&local_98);
        plVar12 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_90 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_90)(local_90);
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
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar3 + 1;
        lVar9 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar3)(plVar3);
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
    }
    plVar12 = local_e0;
    if (local_e0 == (longlong *)0x0) {
      return 1;
    }
    LOCK();
    plVar3 = local_e0 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) {
      return 1;
    }
    (**(code **)*local_e0)(local_e0);
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return 1;
    }
    (**(code **)(*local_e0 + 8))(local_e0,1);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x340);
  plVar12 = (longlong *)(param_1 + -0x4d8);
  uVar11 = 0;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x340) = 1;
    *(undefined1 *)(param_1 + 0x345) = 1;
    goto LAB_1411602d1;
  }
  if (iVar4 == 1) {
    cVar5 = FUN_141176520(plVar12);
    if (cVar5 == '\0') {
      uVar11 = 3;
    }
    *(undefined4 *)(param_1 + 0x340) = uVar11;
  }
  else {
    if (iVar4 == 2) {
      *(undefined4 *)(param_1 + 0x340) = 0;
      goto LAB_1411602d1;
    }
    if (iVar4 != 3) {
      if (iVar4 == 5) {
        *(undefined4 *)(param_1 + 0x340) = 4;
        goto LAB_1411602c3;
      }
      if (iVar4 != 4) goto LAB_1411602d1;
    }
    *(undefined4 *)(param_1 + 0x340) = 0;
  }
LAB_1411602c3:
  *(undefined1 *)(param_1 + 0x360) = 1;
  *(undefined1 *)(param_1 + 0x344) = 1;
LAB_1411602d1:
  local_b8 = 0;
  local_b0 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)(param_1 + 0x28);
  }
  lVar9 = *plVar12;
  puVar8 = (undefined8 *)FName::FName(local_88,puVar10,1);
  (**(code **)(lVar9 + 0x4e8))(plVar12,*puVar8,&local_b8);
  FUN_141179d40(plVar12);
  return 1;
}



// FUNCTION 141160670 FUN_141160670 body=190 status=ok
// SIG undefined FUN_141160670(void)

undefined1 FUN_141160670(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x380) != 0) {
    return 1;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar3 = FUN_140ec9a00(uVar2);
    if (lVar3 != 0) {
      cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x4d8) + 0xc0))
                        ((longlong *)(lVar3 + 0x4d8),param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      cVar1 = FUN_141111680(lVar3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    FUN_1411540b0(param_1 + -0x4d8);
  }
  else {
    cVar1 = FUN_142ec6030(param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141160730 FUN_141160730 body=655 status=ok
// SIG undefined FUN_141160730(void)

void FUN_141160730(longlong param_1)

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
  
  if ((((*(longlong *)(param_1 + 0xd0) != 0) && (*(longlong *)(param_1 + 200) != 0)) &&
      (*(longlong *)(param_1 + 0xd8) != 0)) && (*(longlong *)(param_1 + 0xe0) != 0)) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 200) + 0x308);
    (**(code **)(*plVar4 + 0x10))(plVar4,0,*(undefined8 *)(param_1 + 0x68));
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xd0) + 0x308);
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
    *(undefined8 *)(local_48 + lVar5 * 8) = DAT_146875820;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 200) + 0x308);
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
    *(undefined8 *)(local_88 + lVar5 * 8) = DAT_146875818;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xd0) + 0x308);
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
    *(undefined8 *)(local_c8 + lVar5 * 8) = DAT_146875830;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 0x308);
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
    *(undefined8 *)(local_108 + lVar5 * 8) = DAT_146875828;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xe0) + 0x308);
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



// FUNCTION 1411609c0 FUN_1411609c0 body=490 status=ok
// SIG undefined FUN_1411609c0(void)

void FUN_1411609c0(longlong param_1)

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
  
  if ((*(longlong *)(param_1 + 0xc0) != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x308);
    (**(code **)(*plVar5 + 0x10))(plVar5,0,*(undefined8 *)(param_1 + 0x68));
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x308);
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
    *(undefined8 *)(local_48 + lVar6 * 8) = DAT_146875820;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x308);
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
    *(undefined8 *)(local_88 + lVar6 * 8) = DAT_146875818;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x308);
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



// FUNCTION 141160bb0 FUN_141160bb0 body=490 status=ok
// SIG undefined FUN_141160bb0(void)

void FUN_141160bb0(longlong param_1)

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
  
  if ((*(longlong *)(param_1 + 200) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x308);
    (**(code **)(*plVar5 + 0x10))(plVar5,0,*(undefined8 *)(param_1 + 0x68));
    plVar5 = (longlong *)(*(longlong *)(param_1 + 200) + 0x308);
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
    *(undefined8 *)(local_48 + lVar6 * 8) = DAT_146875820;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x308);
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
    *(undefined8 *)(local_88 + lVar6 * 8) = DAT_146875818;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 200) + 0x308);
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



// FUNCTION 141160da0 FUN_141160da0 body=31 status=ok
// SIG undefined FUN_141160da0(void)

void FUN_141160da0(longlong param_1)

{
  FUN_142ec64e0();
  FUN_141172890(param_1 + -0x4d8);
  return;
}



// FUNCTION 141160de0 FUN_141160de0 body=572 status=ok
// SIG undefined FUN_141160de0(void)

void FUN_141160de0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((param_2 == 0) || (*(longlong *)(param_1 + 0x70) == 0)) ||
     (*(longlong *)(param_1 + 0xf0) == 0)) goto LAB_141160ffe;
  iVar3 = FUN_142eb62f0(param_2);
  if ((iVar3 < 0) || (*(int *)(param_1 + 400) <= iVar3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_141160ffe;
  iVar1 = *(int *)(param_1 + 0x218);
  if ((iVar1 < 0) ||
     (*(int *)((longlong)iVar3 * 0x10 + 8 + *(longlong *)(param_1 + 0x188)) <= iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_141160ffe;
  *(int *)(param_1 + 0x21c) = iVar3;
  FUN_141156380((longlong)iVar1 * 0x50 + 0x18 +
                *(longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 0x10));
  lVar5 = (longlong)*(int *)(param_1 + 0x218) * 0x50 + 0x18 +
          *(longlong *)((longlong)*(int *)(param_1 + 0x21c) * 0x10 + *(longlong *)(param_1 + 0x188))
  ;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar5 + 8)) && (*(longlong *)(lVar5 + 0x10) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar5 + 8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar5);
      if (lVar4 != 0) goto LAB_141160f31;
    }
LAB_141160f67:
    lVar4 = 0;
  }
  else {
LAB_141160f31:
    lVar5 = FUN_140680830();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141160f67;
  }
  FUN_14067e850(*(undefined8 *)(param_1 + 0xf0),lVar4);
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(undefined4 *)(lVar4 + 0x164) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined1 *)(lVar4 + 0x28) = 1;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x690))();
  if (lVar4 != 0) {
    lVar5 = FUN_14148cad0();
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
      FUN_141253c90(lVar4);
    }
  }
  FUN_141171a30(param_1,0);
  FUN_140d57dd0(*(undefined8 *)(param_1 + 0x70));
LAB_141160ffe:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141161020 FUN_141161020 body=493 status=ok
// SIG undefined FUN_141161020(void)

void FUN_141161020(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((param_2 == 0) || (*(longlong *)(param_1 + 0x70) == 0)) ||
     (*(longlong *)(param_1 + 0xe8) == 0)) goto LAB_1411611ef;
  iVar3 = FUN_142eb62f0(param_2);
  if ((iVar3 < 0) || (*(int *)(param_1 + 0x180) <= iVar3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_1411611ef;
  iVar1 = *(int *)(param_1 + 0x210);
  if ((iVar1 < 0) ||
     (*(int *)((longlong)iVar3 * 0x10 + 8 + *(longlong *)(param_1 + 0x178)) <= iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_1411611ef;
  *(int *)(param_1 + 0x214) = iVar3;
  FUN_141156380((longlong)iVar1 * 0x50 + 0x18 +
                *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 0x10));
  lVar5 = (longlong)*(int *)(param_1 + 0x210) * 0x50 + 0x18 +
          *(longlong *)((longlong)*(int *)(param_1 + 0x214) * 0x10 + *(longlong *)(param_1 + 0x178))
  ;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar5 + 8)) && (*(longlong *)(lVar5 + 0x10) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar5 + 8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar5);
      if (lVar4 != 0) goto LAB_141161171;
    }
LAB_1411611a7:
    lVar4 = 0;
  }
  else {
LAB_141161171:
    lVar5 = FUN_140680830();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1411611a7;
  }
  FUN_14067e850(*(undefined8 *)(param_1 + 0xe8),lVar4);
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(undefined4 *)(lVar4 + 0x15c) = *(undefined4 *)(param_1 + 0x214);
  *(undefined1 *)(lVar4 + 0x28) = 1;
  FUN_141171a30(param_1,0);
  FUN_140d57dd0(*(undefined8 *)(param_1 + 0x70));
LAB_1411611ef:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141161210 FUN_141161210 body=239 status=ok
// SIG undefined FUN_141161210(void)

void FUN_141161210(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x6e8;
  FUN_141111950(param_1,lVar3);
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x6f0)) && (*(longlong *)(param_1 + 0x6f8) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x6f0) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_1411612a7;
    }
  }
  else {
LAB_1411612a7:
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
    if (bVar1) goto LAB_1411612e0;
  }
  lVar2 = 0;
LAB_1411612e0:
  FUN_142ebe540(param_1,lVar2);
  return;
}



// FUNCTION 141161300 FUN_141161300 body=207 status=ok
// SIG undefined FUN_141161300(void)

void FUN_141161300(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_4;
  bVar2 = false;
  bVar1 = false;
  lVar6 = (longlong)(int)param_4[1] * 0x1a0 + lVar5;
  if (lVar5 == lVar6) {
    *(undefined1 *)(param_1 + 0x87d) = 0;
    *(undefined1 *)(param_1 + 0x880) = 1;
  }
  else {
    do {
      iVar3 = FUN_140c10350(*(undefined4 *)(lVar5 + 0x28));
      iVar4 = FUN_1405120f0();
      if (iVar3 == iVar4) {
        bVar1 = true;
      }
      if (0 < *(int *)(lVar5 + 0x4c)) {
        bVar2 = true;
      }
      if ((bVar1) && (bVar2)) {
        *(undefined2 *)(param_1 + 0x87f) = 0x101;
        *(undefined1 *)(param_1 + 0x87d) = 0;
        return;
      }
      lVar5 = lVar5 + 0x1a0;
    } while (lVar5 != lVar6);
    *(undefined1 *)(param_1 + 0x87d) = 0;
    *(undefined1 *)(param_1 + 0x880) = 1;
  }
  return;
}



// FUNCTION 1411613d0 FUN_1411613d0 body=580 status=ok
// SIG undefined FUN_1411613d0(void)

void FUN_1411613d0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_78 [3];
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar9 = 0;
  bVar10 = *(longlong *)(param_1 + 0xb30) == 0;
  if (bVar10) {
    plVar7 = local_78 + 2;
    local_78[2] = 0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)FUN_142dcf3a0(*(longlong *)(param_1 + 0xb30),local_58);
    lVar9 = *plVar7;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_60;
  if (bVar10) {
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  if ((!bVar10) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (lVar9 != 0) {
    cVar6 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,lVar9);
    if (((cVar6 != '\0') && (param_3 != 2)) && ((byte)(*(char *)(param_1 + 0xe50) - 2U) < 3)) {
      if (*(longlong *)(param_1 + 0xc20) != 0) {
        local_78[1] = 5;
        local_78[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
        FGenericPlatformString::Memcpy(local_78[0],L"hide",10);
        FUN_142088910(*(undefined8 *)(param_1 + 0xc20),local_78);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
      FUN_141178a60(param_1,1);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_48,L"Signed Out",L"EchoNetMailboxMenu",L"MailboxOfflineTitle");
      FUN_1411768a0(param_1,uVar8);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_40 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
    }
  }
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
  return;
}



// FUNCTION 141161620 FUN_141161620 body=759 status=ok
// SIG undefined FUN_141161620(void)

void FUN_141161620(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 local_res10;
  longlong local_res18 [2];
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar12 = *param_2;
  if (lVar12 != 0) {
    lVar8 = FUN_14133af30();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_141161771;
    cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x24e);
    if (cVar7 != '\0') {
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x24e);
      cVar7 = FUN_143003580(uVar9);
      if (cVar7 == '\0') goto LAB_1411616b7;
    }
    if (*(char *)(lVar12 + 0x3e9) != '\0') {
LAB_1411616b7:
      lVar8 = *param_1;
      local_78[2] = 0;
      local_78[3] = 0;
      puVar10 = (undefined8 *)FName::FName(&local_res10,L"Mail_Accept",1);
      (**(code **)(lVar8 + 0x4e8))(param_1,*puVar10,local_78 + 2);
      param_1[400] = lVar12;
      if (param_1[0x1c6] == 0) {
        FUN_141170890(param_1,lVar12,1);
        param_1[400] = 0;
        return;
      }
      if (param_1[0x17c] == 0) {
        return;
      }
      local_78[0] = 0;
      local_78[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      FGenericPlatformString::Memcpy(local_78[0],L"accepted",0x12);
      FUN_142088910(param_1[0x17c],local_78);
      if (local_78[0] == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
  }
LAB_141161771:
  FWeakObjectPtr::operator=(local_88,0);
  local_80 = 0;
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxEchoNetMailboxMenu::OnDialogDismissed",L"::");
  pwVar6 = (wchar_t *)0x0;
  while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar6 = pwVar5;
  }
  FName::FName(local_res18,pwVar6 + 2,1);
  FWeakObjectPtr::operator=(local_88,param_1);
  local_80 = local_res18[0];
  local_res10 = 0;
  if ((local_res18[0] != 0) && (lVar12 = FWeakObjectPtr::Get(local_88), lVar12 != 0)) {
    UObject::FindFunction(lVar12,local_80);
  }
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_40,L"There is no room for this item in your inventory.",
                     L"EchoNetMailboxMenu",L"InventoryFullBody");
  uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_58,L"Inventory Full",L"EchoNetMailboxMenu",L"InventoryFullHeader");
  lVar12 = FUN_1410f3960(param_1[0x166],uVar13,uVar9,local_88,1,param_1[0x166],2);
  param_1[0xb0] = lVar12;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xd0);
  if (cVar7 != '\0') {
    lVar12 = FWeakObjectPtr::Get(param_1 + 0xd0);
    LOCK();
    *(undefined4 *)(lVar12 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141161920 FUN_141161920 body=260 status=ok
// SIG undefined FUN_141161920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141161920(undefined8 param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FWeakObjectPtr::operator=(&local_88,param_1);
  local_80 = *param_2;
  uStack_7c = param_2[1];
  uStack_78 = param_2[2];
  uStack_74 = param_2[3];
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a5458;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_88;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_84;
    *(undefined4 *)(puVar1 + 3) = local_80;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_7c;
    *(undefined4 *)(puVar1 + 4) = uStack_78;
    *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_74;
  }
  local_68[0] = &LAB_14114b770;
  FUN_14208c260(param_1,local_68);
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



// FUNCTION 141161a50 FUN_141161a50 body=402 status=ok
// SIG undefined FUN_141161a50(void)

void FUN_141161a50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [48];
  
  FUN_1404cf2e0(&local_68,0);
  plVar7 = local_68;
  if (local_68 != (longlong *)0x0) {
    cVar5 = (**(code **)(*local_68 + 0x10))(local_68,9);
    if (cVar5 != '\0') {
      lVar6 = FUN_1410ae4a0(param_1);
      if (lVar6 != 0) {
        lVar6 = UGameInstance::FindLocalPlayerFromControllerId(lVar6,*(undefined4 *)(param_3 + 8));
        if (lVar6 != 0) {
          lVar6 = FUN_142547b50(lVar6,local_48);
          plVar4 = *(longlong **)(lVar6 + 0x10);
          lVar6 = *(longlong *)(lVar6 + 8);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            plVar7 = local_68;
          }
          FUN_1404bf980(local_48);
          if (lVar6 != 0) {
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              plVar7 = local_68;
            }
            local_58 = lVar6;
            local_50 = plVar4;
            (**(code **)(*plVar7 + 0x68))(plVar7,&local_58);
            plVar7 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_50 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_50)(local_50);
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
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar4 + 1;
            lVar6 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        }
      }
    }
  }
  plVar7 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 141161bf0 FUN_141161bf0 body=107 status=ok
// SIG undefined FUN_141161bf0(void)

void FUN_141161bf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
     (param_2 != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x44) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d11bd0(*(undefined8 *)(param_1 + 0x68));
    FUN_14116bd40(param_1,param_2);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141161c60 FUN_141161c60 body=42 status=ok
// SIG undefined FUN_141161c60(void)

void FUN_141161c60(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7b4);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x788))) {
    FUN_1411543a0(param_1,(longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x780),0);
    return;
  }
  return;
}



// FUNCTION 141161c90 FUN_141161c90 body=108 status=ok
// SIG undefined FUN_141161c90(void)

void FUN_141161c90(longlong param_1)

{
  char cVar1;
  
  if ((-1 < *(int *)(param_1 + 0x7b4)) && (*(int *)(param_1 + 0x7b4) < *(int *)(param_1 + 0x788))) {
    cVar1 = FUN_141111180();
    if ((cVar1 == '\0') &&
       (((*(uint *)(param_1 + 0x7b0) & 0xfffffffa) != 0 || (*(uint *)(param_1 + 0x7b0) == 1)))) {
      *(undefined4 *)(param_1 + 0x7a8) = 0;
      if (*(int *)(param_1 + 0x7ac) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x7a0,0);
      }
      FUN_14114bb70(param_1);
      FUN_141172890(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141161d00 FUN_141161d00 body=65 status=ok
// SIG undefined FUN_141161d00(void)

void FUN_141161d00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [16];
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  puVar2 = (undefined8 *)FName::FName(local_res18,"Matchmaking",1);
  FUN_14116bac0(param_1,*puVar2,uVar1);
  return;
}



// FUNCTION 141161d50 FUN_141161d50 body=189 status=ok
// SIG undefined FUN_141161d50(void)

void FUN_141161d50(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x7b0);
  iVar3 = FUN_141151960();
  *(int *)(param_1 + 0x7b0) = iVar3;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x798) = 0;
    if (*(int *)(param_1 + 0x79c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x790,0);
    }
    if (1 < *(int *)(param_1 + 0x7a8)) {
      cVar2 = FUN_1411559a0(param_1,0);
      if (cVar2 != '\0') {
        FUN_1411783c0(param_1,param_1 + 0x7a0);
      }
      *(undefined4 *)(param_1 + 0x7a8) = 0;
      if (*(int *)(param_1 + 0x7ac) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x7a0,0);
      }
    }
  }
  if (((iVar1 == 0) != (iVar3 == 0)) && (*(longlong *)(param_1 + 0x778) != 0)) {
    FUN_141171820();
  }
  FUN_141172890(param_1);
  return;
}



// FUNCTION 141161e10 FUN_141161e10 body=105 status=ok
// SIG undefined FUN_141161e10(void)

void FUN_141161e10(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ec7200();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      FUN_140beb060(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 141161e80 FUN_141161e80 body=172 status=ok
// SIG undefined FUN_141161e80(void)

void FUN_141161e80(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_142ec7200();
  if ((*(longlong *)(param_1 + 0x350) == 0) && (*(char *)(param_1 + 0x164) != '\0')) {
    uVar3 = FUN_1410cb7c0(param_1 + -0x4d8);
    FUN_141170eb0(param_1 + -0x4d8,uVar3);
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FUN_140d97f70();
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    iVar1 = *(int *)(lVar5 + 0x90);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140beb060(lVar4,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
    }
  }
  return;
}



// FUNCTION 141161f30 FUN_141161f30 body=31 status=ok
// SIG undefined FUN_141161f30(void)

void FUN_141161f30(longlong param_1)

{
  FUN_142ec6f90();
  FUN_1411793d0(param_1 + -0x4d8);
  return;
}



// FUNCTION 141161f50 FUN_141161f50 body=160 status=ok
// SIG undefined FUN_141161f50(void)

void FUN_141161f50(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  FUN_142ec6f90();
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    iVar1 = *(int *)(lVar5 + 0x90);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140beb060(lVar4,CONCAT71((int7)(int3)((uint)iVar1 >> 8),3));
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar3 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar4 = FUN_140ec9a00(uVar6);
    if (lVar4 != 0) {
      FUN_141131d10(lVar4,4);
    }
  }
  return;
}



// FUNCTION 141161ff0 FUN_141161ff0 body=134 status=ok
// SIG undefined FUN_141161ff0(void)

void FUN_141161ff0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xb4);
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
      lVar4 = FUN_140cff230(lVar3);
      if (lVar4 != 0) {
        cVar2 = FUN_140472310(lVar4);
        if (cVar2 != '\0') {
          FUN_140d1b4d0(lVar3);
        }
      }
    }
  }
  FUN_142ec7580(param_1);
  return;
}



// FUNCTION 141162080 DestroyRenderState_Concurrent body=39 status=ok
// SIG undefined DestroyRenderState_Concurrent(void)

void UNiagaraComponent::DestroyRenderState_Concurrent(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FUN_140d924b0();
  }
  FUN_142ec7580(param_1);
  return;
}



// FUNCTION 1411620b0 FUN_1411620b0 body=1507 status=ok
// SIG undefined FUN_1411620b0(void)

void FUN_1411620b0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong local_res10;
  int local_178;
  uint uStack_174;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  longlong *local_150;
  int local_148;
  uint local_138;
  uint uStack_134;
  uint local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  uint *local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  code *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if (*(longlong *)(param_1 + 0x948) != 0) {
    local_a8 = 0;
    local_98 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_143f3f130;
    }
    local_d8[0] = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_1411f67c0(*(undefined8 *)(param_1 + 0x948),local_d8);
    FUN_1411eff10(*(undefined8 *)(param_1 + 0x948));
    FUN_1411f8450(*(undefined8 *)(param_1 + 0x948));
    lVar13 = *(longlong *)(param_1 + 0x948);
    plVar14 = (longlong *)(lVar13 + 0xe8);
    iVar17 = *(int *)(lVar13 + 0xf0) + -1;
    if (-1 < iVar17) {
      lVar16 = (longlong)iVar17 << 4;
      local_res10 = lVar16;
      do {
        lVar18 = *plVar14 + lVar16;
        if ((((param_1 != 0x4d8) && (lVar9 = FWeakObjectPtr::Get(lVar18), param_1 + -0x4d8 == lVar9)
             ) || (*(longlong *)(lVar18 + 8) == 0)) ||
           (lVar18 = FWeakObjectPtr::Get(lVar18,1), lVar18 == 0)) {
          iVar4 = *(int *)(lVar13 + 0xf0);
          iVar11 = (iVar4 - iVar17) + -1;
          if (0 < iVar11) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(local_res10 + *plVar14),
                       (void *)((longlong)(iVar4 - iVar11) * 0x10 + *plVar14),(longlong)iVar11 << 4)
            ;
            iVar4 = *(int *)(lVar13 + 0xf0);
          }
          *(int *)(lVar13 + 0xf0) = iVar4 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar14);
        }
        local_res10 = local_res10 + -0x10;
        lVar16 = lVar16 + -0x10;
        iVar17 = iVar17 + -1;
      } while (-1 < iVar17);
    }
    *(undefined8 *)(param_1 + 0x948) = 0;
  }
  lVar13 = param_1 + -0x4d8;
  if (*(longlong *)(param_1 + 0x950) != 0) {
    local_58 = 0;
    local_48 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_143f3f130;
    }
    local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_1411f67c0(*(undefined8 *)(param_1 + 0x950),local_88);
  }
  if (*(longlong *)(param_1 + 0x658) != 0) {
    FUN_140483870(*(longlong *)(param_1 + 0x658) + 0xbf8,lVar13);
    FUN_140483870(*(longlong *)(param_1 + 0x658) + 0xe40,lVar13);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xb1c) = 0;
  UNLOCK();
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x650);
  if (cVar7 != '\0') {
    lVar16 = FWeakObjectPtr::Get(param_1 + 0x650);
    FUN_140483870(*(longlong *)(lVar16 + 0x478) + 0x1e0,lVar13);
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x650);
    uVar10 = FUN_140bb74b0(uVar10);
    TBaseMulticastDelegate<void>::Remove(uVar10,*(undefined8 *)(param_1 + 0xa00));
    lVar16 = FWeakObjectPtr::Get(param_1 + 0x650);
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(lVar16 + 0x478) + 0x208,*(undefined8 *)(param_1 + 0xa10));
  }
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xd98);
  if (cVar7 != '\0') {
    lVar16 = FWeakObjectPtr::Get(param_1 + 0xd98);
    FUN_140483870(lVar16 + 0x2c0,lVar13);
  }
  FUN_1404cf890(&local_158,0);
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x88))(local_158,param_1 + 0xa08);
  }
  plVar14 = (longlong *)(param_1 + 0x9a8);
  uStack_174 = 1;
  uVar5 = *(uint *)(param_1 + 0x9d0);
  puVar1 = (uint *)(param_1 + 0x9b8);
  local_178 = 0;
  uStack_164 = 0;
  iStack_160 = 0;
  if (uVar5 != 0) {
    puVar15 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = *puVar15;
    iStack_160 = 0;
    local_178 = 0;
    while (uVar12 == 0) {
      lVar13 = (longlong)local_178;
      iStack_160 = iStack_160 + 0x20;
      iVar17 = local_178 + 1;
      bVar6 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar17;
      if (bVar6) goto LAB_141162448;
      uVar12 = puVar15[lVar13 + 1];
    }
    uStack_174 = -uVar12 & uVar12;
    iVar17 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar17 = 0x20;
    }
    else {
      iVar17 = 0x1f - iVar17;
    }
    uStack_164 = (iStack_160 - iVar17) + 0x1f;
    if ((int)uVar5 < (int)uStack_164) {
LAB_141162448:
      uStack_164 = uVar5;
    }
  }
  uStack_134 = *(uint *)(param_1 + 0x9d0);
  uStack_f8 = CONCAT44(uStack_174,local_178);
  uStack_110 = 0xffffffff;
  uStack_10c = uStack_164;
  local_108 = CONCAT44(uStack_15c,iStack_160);
  local_148 = (int)uStack_134 >> 5;
  local_138 = -1 << ((byte)uStack_134 & 0x1f);
  local_130 = uStack_134 & 0xffffffe0;
  iStack_120 = local_178;
  uStack_11c = uStack_174;
  local_118 = puVar1;
  local_100 = plVar14;
  puStack_f0 = puVar1;
  uStack_e0 = local_108;
  local_128 = plVar14;
  uStack_e8 = uStack_110;
  uStack_e4 = uStack_10c;
  uVar12 = uStack_134;
  if (uStack_134 != uVar5) {
    puVar15 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = puVar15[local_148] & local_138;
    while (uVar12 == 0) {
      lVar13 = (longlong)local_148;
      local_130 = local_130 + 0x20;
      iVar17 = local_148 + 1;
      bVar6 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar17;
      if (bVar6) goto LAB_141162534;
      uVar12 = puVar15[lVar13 + 1];
      local_138 = 0xffffffff;
    }
    uVar12 = -uVar12 & uVar12;
    iVar17 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar17 = 0x20;
    }
    else {
      iVar17 = 0x1f - iVar17;
    }
    uStack_134 = (local_130 - iVar17) + 0x1f;
    uVar12 = uStack_134;
    if ((int)uVar5 < (int)uStack_134) {
LAB_141162534:
      uStack_134 = uVar5;
      uVar12 = uVar5;
    }
  }
  while (((uStack_10c != uVar12 || (local_118 != puVar1)) || (local_128 != plVar14))) {
    lVar13 = *(longlong *)((longlong)(int)uStack_10c * 0x20 + 0x10 + *local_128);
    if (lVar13 != 0) {
      FUN_142227350(lVar13,0,1);
    }
    uStack_110 = uStack_110 & ~uStack_11c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_120);
  }
  TSet<TTuple<FString,AHomeCharacter_*>,TDefaultMapHashableKeyFuncs<FString,AHomeCharacter_*,0>,FDefaultSetAllocator>
  ::Empty(plVar14,0);
  FUN_140ee38f0(param_1 + 0x7b0);
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + 0x6c8),param_1 + 0xda8);
    FUN_142f06340(*(undefined8 *)(param_1 + 0x6c8),param_1 + 0xdb0);
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + 0x668),param_1 + 0xdc0);
    FUN_142f06340(*(undefined8 *)(param_1 + 0x668),param_1 + 0xdc8);
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + 0x6a8),param_1 + 0xdd8);
    FUN_142f06340(*(undefined8 *)(param_1 + 0x6a8),param_1 + 0xde0);
  }
  FUN_142ec75f0(param_1);
  plVar14 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_150 + 1;
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar3 = (int *)((longlong)plVar14 + 0xc);
      iVar17 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  return;
}



// FUNCTION 1411626a0 FUN_1411626a0 body=419 status=ok
// SIG undefined FUN_1411626a0(void)

void FUN_1411626a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140483870(lVar3 + 0xc60,param_1 + -0x4d8);
      if (*(longlong *)(lVar3 + 0x960) != 0) {
        TBaseMulticastDelegate<void>::Remove
                  (*(longlong *)(lVar3 + 0x960),*(undefined8 *)(param_1 + 0x308));
        *(undefined8 *)(param_1 + 0x308) = 0;
      }
      TBaseMulticastDelegate<void>::Remove(lVar3 + 0xc80,*(undefined8 *)(param_1 + 0x2f8));
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      TBaseMulticastDelegate<void>::Remove(lVar3 + 0xc98,*(undefined8 *)(param_1 + 0x310));
      *(undefined8 *)(param_1 + 0x310) = 0;
    }
  }
  TBaseMulticastDelegate<void>::Remove(&DAT_14629b2c8,*(undefined8 *)(param_1 + 0x2f0));
  plVar1 = *(longlong **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
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
  plVar1 = *(longlong **)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x290) = 0;
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
  *(undefined8 *)(param_1 + 0x298) = 0;
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 141162850 FUN_141162850 body=75 status=ok
// SIG undefined FUN_141162850(void)

void FUN_141162850(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142eb7f00(param_1 + -0x4d8);
  if (lVar1 != 0) {
    FUN_142f06340(lVar1,param_1 + 0x488);
    *(undefined8 *)(param_1 + 0x488) = 0;
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1411628a0 FUN_1411628a0 body=477 status=ok
// SIG undefined FUN_1411628a0(void)

void FUN_1411628a0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  longlong *local_38;
  longlong *local_30;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *(longlong *)(param_1 + 0x1b8);
      iVar6 = 0;
      if (0 < *(int *)(lVar3 + 0x9a8)) {
        lVar8 = 0;
        do {
          plVar7 = (longlong *)(*(longlong *)(lVar3 + 0x9a0) + lVar8);
          if ((((int)plVar7[1] != 0) && (plVar5 = (longlong *)*plVar7, plVar5 != (longlong *)0x0))
             && (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res10),
                *plVar5 == lVar4)) {
            if (((int)plVar7[1] != 0) && (plVar5 = (longlong *)*plVar7, plVar5 != (longlong *)0x0))
            {
              (**(code **)(*plVar5 + 0x28))(plVar5,0);
              if (*plVar7 != 0) {
                lVar4 = FMemory::Realloc(*plVar7,0,0);
                *plVar7 = lVar4;
              }
              *(undefined4 *)(plVar7 + 1) = 0;
            }
            break;
          }
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 0x10;
        } while (iVar6 < *(int *)(lVar3 + 0x9a8));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x9a0,0);
      TBaseMulticastDelegate<void>::Remove(lVar3 + 0xa08,*(undefined8 *)(param_1 + 0x1a8));
      TBaseMulticastDelegate<void>::Remove(lVar3 + 0xa20,*(undefined8 *)(param_1 + 0x1b0));
    }
  }
  if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x288))();
  }
  FUN_1404cf2e0(&local_38,0);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x220))(local_38,param_1 + 0x1c0);
  }
  FUN_142ec75f0(param_1);
  plVar7 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 141162a80 FUN_141162a80 body=101 status=ok
// SIG undefined FUN_141162a80(void)

void FUN_141162a80(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_142ec75f0();
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
  plVar2 = (longlong *)FUN_140d3a420(uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x1a8))(plVar2,param_1 + 0x1b8);
    (**(code **)(*plVar2 + 0x188))(plVar2,param_1 + 0x1c0);
  }
  return;
}



// FUNCTION 141162af0 FUN_141162af0 body=1222 status=ok
// SIG undefined FUN_141162af0(void)

ulonglong FUN_141162af0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  longlong *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong *local_80;
  longlong *local_70;
  longlong *local_60;
  
  FUN_142ec8980();
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xbc);
  lVar14 = 0;
  if (lVar7 == 0) {
LAB_141162baa:
    lVar7 = lVar14;
  }
  else {
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || (lVar7 = FUN_140c430a0(lVar7,0), lVar7 == 0)) goto LAB_141162baa;
    lVar8 = ANavLinkProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_141162baa;
  }
  FWeakObjectPtr::operator=(param_1 + 0xd98,lVar7);
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xd98);
  if (cVar6 != '\0') {
    uStack_98 = 0;
    local_a0 = (code *)&LAB_141160dc0;
    lVar7 = FWeakObjectPtr::Get(param_1 + 0xd98);
    plVar12 = (longlong *)(lVar7 + 0x2c0);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_80 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_94;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar8;
      *plVar9 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_res10);
      iVar4 = *(int *)(lVar7 + 0x2c8);
      *(int *)(lVar7 + 0x2c8) = iVar4 + 1;
      if (*(int *)(lVar7 + 0x2cc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar4);
      }
      puVar10 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar12);
      *puVar10 = plVar9;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x650);
  if (cVar6 != '\0') {
    uStack_98 = 0;
    local_a0 = FUN_14115b980;
    uVar11 = FWeakObjectPtr::Get(param_1 + 0x650);
    plVar12 = (longlong *)FUN_140bb74b0(uVar11);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    lVar7 = lVar14;
    local_70 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_94;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar7;
      *plVar9 = (longlong)&PTR_FUN_144012f78;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
      plVar13 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_res18);
      iVar4 = (int)plVar12[1];
      lVar7 = *plVar13;
      *(int *)(plVar12 + 1) = iVar4 + 1;
      if (*(int *)((longlong)plVar12 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar4);
      }
      puVar10 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar12);
      *puVar10 = plVar9;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
    *(longlong *)(param_1 + 0xa00) = lVar7;
    local_a0 = (code *)&DAT_14115aad0;
    uStack_98 = 0;
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x650);
    lVar7 = *(longlong *)(lVar7 + 0x478);
    plVar9 = (longlong *)(lVar7 + 0x208);
    plVar12 = (longlong *)FMemory::Realloc(0,0x30);
    local_60 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar12 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar12 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar12 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar12 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_94;
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar12[5] = lVar14;
      *plVar12 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
      plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,local_res20);
      iVar4 = *(int *)(lVar7 + 0x210);
      lVar14 = *plVar13;
      *(int *)(lVar7 + 0x210) = iVar4 + 1;
      if (*(int *)(lVar7 + 0x214) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar4);
      }
      puVar10 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar9);
      *puVar10 = plVar12;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
    *(longlong *)(param_1 + 0xa10) = lVar14;
  }
  FUN_1404cf890(&local_a0,0);
  plVar12 = (longlong *)local_a0;
  if (local_a0 != (code *)0x0) {
    uStack_88 = 0;
    local_b0 = (longlong *)0x0;
    local_90 = FUN_1411613d0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_a8 = 3;
    local_b0 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_144318830;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_90;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_90._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_88;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_84;
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar14;
      *plVar9 = (longlong)&PTR_FUN_144318878;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x80))(plVar12,local_b8,&local_b0);
    *(undefined8 *)(param_1 + 0xa08) = *puVar10;
    if (local_a8 != 0) {
      if (local_b0 == (longlong *)0x0) goto LAB_141162f50;
      (**(code **)(*local_b0 + 0x28))(local_b0,0);
      if (local_b0 != (longlong *)0x0) {
        local_b0 = (longlong *)FMemory::Realloc(local_b0,0,0);
      }
      local_a8 = 0;
    }
    if (local_b0 != (longlong *)0x0) {
      FMemory::Free(local_b0);
    }
  }
LAB_141162f50:
  LOCK();
  uVar3 = *(uint *)(param_1 + 0xd70);
  *(uint *)(param_1 + 0xd70) = 0xffffffff;
  uVar15 = (ulonglong)uVar3;
  UNLOCK();
  *(undefined8 *)(param_1 + 0xd78) = 0;
  if (CONCAT44(uStack_94,uStack_98) != 0) {
    LOCK();
    puVar1 = (uint *)(CONCAT44(uStack_94,uStack_98) + 8);
    uVar3 = *puVar1;
    uVar15 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      puVar10 = (undefined8 *)CONCAT44(uStack_94,uStack_98);
      uVar15 = (**(code **)*puVar10)(puVar10);
      LOCK();
      piVar2 = (int *)((longlong)puVar10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar15 = (**(code **)(*(longlong *)CONCAT44(uStack_94,uStack_98) + 8))
                           ((longlong *)CONCAT44(uStack_94,uStack_98),1);
      }
    }
  }
  return uVar15;
}



// FUNCTION 141162fc0 FUN_141162fc0 body=1196 status=ok
// SIG undefined FUN_141162fc0(void)

void FUN_141162fc0(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
  uVar13 = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x2c8,0);
  }
  iStack_30 = 0;
  local_38 = AK::MemoryMgr::StartProfileThreadUsage;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  uVar10 = uVar13;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1 + -0x4d8);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
    *(int *)(plVar6 + 3) = iStack_30;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_2c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_14629b2c8,1);
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
    iVar4 = DAT_14629b2d0;
    lVar7 = (longlong)DAT_14629b2d0;
    uVar10 = *puVar8;
    DAT_14629b2d0 = DAT_14629b2d0 + 1;
    if (DAT_14629b2d4 < DAT_14629b2d0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_14629b2c8,iVar4);
    }
    lVar9 = DAT_14629b2c8;
    *(longlong **)(DAT_14629b2c8 + lVar7 * 0x10) = plVar6;
    *(undefined4 *)(lVar9 + 8 + lVar7 * 0x10) = 3;
  }
  *(undefined8 *)(param_1 + 0x2f0) = uVar10;
  *(undefined1 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar7 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = FUN_140bc9f60(lVar7);
      if (cVar3 == '\0') {
        uVar10 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))(param_1 + -0x4d8);
        lVar9 = FUN_142f6caf0(uVar10);
        if (lVar9 != 0) {
          local_38 = (code *)0x0;
          iStack_30 = 0;
          uStack_2c = 0;
          FUN_142f5dfe0(lVar9,&local_38,0);
          bVar2 = true;
          pcVar1 = local_38 + (longlong)iStack_30 * 8;
          for (pcVar14 = local_38; pcVar14 != pcVar1; pcVar14 = pcVar14 + 8) {
            iVar4 = FUN_142f5c9d0(lVar9,*(undefined8 *)pcVar14);
            if (iVar4 != 2) {
              bVar2 = false;
              break;
            }
          }
          lVar9 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))(param_1 + -0x4d8);
          if ((((lVar9 != 0) && (lVar9 = UWorld::GetGameState<APVPGameState>(lVar9), lVar9 != 0)) &&
              (iVar4 = FUN_140cb6340(lVar9), 1 < iVar4)) || (bVar2)) {
            *(undefined1 *)(param_1 + 0x318) = 1;
            uVar5 = FUN_140bb6aa0(lVar7);
            *(undefined4 *)(param_1 + 0x31c) = uVar5;
          }
          if (local_38 != (code *)0x0) {
            FMemory::Free();
          }
        }
      }
      lVar9 = FWeakObjectPtr::Get(param_1 + 0xf4);
      uVar5 = 0;
      if (lVar9 != 0) {
        lVar11 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        uVar5 = 0;
        if (bVar2) {
          uVar5 = FUN_140bba5d0(lVar9);
        }
      }
      *(undefined4 *)(param_1 + 0x2d8) = uVar5;
      plVar12 = (longlong *)FUN_140bb6a20(lVar7,&local_38);
      plVar6 = (longlong *)(param_1 + 0x2b8);
      if (plVar6 != plVar12) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        *plVar6 = *plVar12;
        *plVar12 = 0;
        *(int *)(param_1 + 0x2c0) = (int)plVar12[1];
        *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)((longlong)plVar12 + 0xc);
        plVar12[1] = 0;
      }
      if (local_38 != (code *)0x0) {
        FMemory::Free();
      }
      iStack_30 = 0;
      local_38 = FUN_141161d50;
      plVar6 = (longlong *)(lVar7 + 0xc80);
      plVar12 = (longlong *)FMemory::Realloc(0,0x30);
      uVar10 = uVar13;
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = (longlong)&PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(plVar12 + 1,param_1 + -0x4d8);
        *(undefined4 *)(plVar12 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar12 + 0x14) = local_38._4_4_;
        *(int *)(plVar12 + 3) = iStack_30;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_2c;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar12[5] = lVar9;
        *plVar12 = (longlong)&PTR_FUN_1442cc168;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
        puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x20))(plVar12,local_res8);
        iVar4 = *(int *)(lVar7 + 0xc88);
        uVar10 = *puVar8;
        *(int *)(lVar7 + 0xc88) = iVar4 + 1;
        if (*(int *)(lVar7 + 0xc8c) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar4);
        }
        puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar6);
        *puVar8 = plVar12;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x2f8) = uVar10;
      FUN_140ba89d0(lVar7);
      iStack_30 = 0;
      local_38 = FUN_1411642f0;
      plVar6 = (longlong *)(lVar7 + 0xc60);
      plVar12 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar12 + 1,param_1 + -0x4d8);
        *(undefined4 *)(plVar12 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar12 + 0x14) = local_38._4_4_;
        *(int *)(plVar12 + 3) = iStack_30;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_2c;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar12[5] = lVar9;
        *plVar12 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
        puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x20))(plVar12,local_res8);
        iVar4 = *(int *)(lVar7 + 0xc68);
        uVar13 = *puVar8;
        *(int *)(lVar7 + 0xc68) = iVar4 + 1;
        if (*(int *)(lVar7 + 0xc6c) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar4);
        }
        puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar6);
        *puVar8 = plVar12;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x300) = uVar13;
      FUN_140be5350(lVar7);
    }
  }
  FUN_141170700(param_1 + -0x4d8);
  FUN_142ec8980(param_1);
  return;
}



// FUNCTION 141163470 FUN_141163470 body=111 status=ok
// SIG undefined FUN_141163470(void)

void FUN_141163470(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(param_1 + -0x4d8);
  *(undefined1 *)(param_1 + 0x3a9) = 0;
  *(undefined1 *)(param_1 + 0x390) = 0;
  FUN_141154630(plVar1);
  *(bool *)(param_1 + 0x390) = 1 < *(int *)(param_1 + 0x368);
  FUN_142ec85a0(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
  uVar2 = FUN_14110cbc0(uVar2);
  FWeakObjectPtr::operator=(param_1 + 0x370,uVar2);
  return;
}



// FUNCTION 1411634e0 FUN_1411634e0 body=187 status=ok
// SIG undefined FUN_1411634e0(void)

void FUN_1411634e0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  
  param_2 = *(float *)((longlong)param_1 + 0x10c) - param_2;
  *(float *)((longlong)param_1 + 0x10c) = param_2;
  if (param_2 <= 0.0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0x40400000;
    if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
      cVar2 = FUN_14059f100();
    }
    else {
      cVar2 = '\0';
    }
    if (cVar2 != *(char *)((longlong)param_1 + 0x109)) {
      *(char *)((longlong)param_1 + 0x109) = cVar2;
      if (param_1[0x10] == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = FUN_142eb7a00();
      }
      (**(code **)(*param_1 + 0x2b8))(param_1);
      plVar1 = (longlong *)param_1[0x10];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2b8))(plVar1,uVar3,1,0);
      }
    }
  }
  return;
}



// FUNCTION 1411635a0 FUN_1411635a0 body=455 status=ok
// SIG undefined FUN_1411635a0(void)

void FUN_1411635a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_142ec8c70();
  plVar3 = (longlong *)(param_1 + -0x4d8);
  FUN_140ad4c90(plVar3,&local_c8);
  if (local_c8 != 0) {
    LOCK();
    cVar6 = *(char *)(local_c8 + 0x30);
    if (cVar6 == '\0') {
      *(char *)(local_c8 + 0x30) = '\0';
      cVar6 = '\0';
    }
    UNLOCK();
    if (cVar6 == '\x05') {
      if (*(char *)(param_1 + 0x344) != '\0') {
        *(undefined1 *)(param_1 + 0x344) = 0;
        local_78 = 0;
        local_68 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_98);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = plVar3;
          *puVar7 = &PTR_FUN_143f77b70;
        }
        local_a8[0] = &LAB_14114b830;
        FUN_14208c4f0(plVar3,local_a8);
      }
      if (*(char *)(param_1 + 0x345) != '\0') {
        *(undefined1 *)(param_1 + 0x345) = 0;
        local_28 = 0;
        local_18 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_48);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = plVar3;
          *puVar7 = &PTR_FUN_143f77b70;
        }
        local_58[0] = FUN_14114b720;
        FUN_14208c4f0(plVar3,local_58);
      }
      FUN_14114bd10(plVar3);
      if ((*(char *)(param_1 + 0x490) != '\0') &&
         (*(undefined1 *)(param_1 + 0x490) = 0, *(int *)(param_1 + 0x1b0) == 2)) {
        FUN_141174220(plVar3,1);
        lVar5 = *plVar3;
        local_b8 = 0;
        local_b0 = 0;
        puVar7 = (undefined8 *)FName::FName(local_res8,L"Select_Close",1);
        (**(code **)(lVar5 + 0x4e8))(plVar3,*puVar7,&local_b8);
      }
    }
  }
  plVar3 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 141163770 FUN_141163770 body=112 status=ok
// SIG undefined FUN_141163770(void)

void FUN_141163770(longlong param_1,float param_2)

{
  FUN_142ec8c70();
  if ((*(char *)(param_1 + 0x3a9) != '\0') && (*(char *)(param_1 + 0x391) == '\0')) {
    param_2 = *(float *)(param_1 + 0x3ac) - param_2;
    *(float *)(param_1 + 0x3ac) = param_2;
    if ((*(char *)(param_1 + 0x3a8) != '\0') || (param_2 <= 0.0)) {
      FUN_142ecd4d0(param_1 + -0x4d8);
      FUN_141153e30(param_1 + -0x4d8);
    }
  }
  return;
}



// FUNCTION 141163800 FUN_141163800 body=259 status=ok
// SIG undefined FUN_141163800(void)

void FUN_141163800(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  
  cVar2 = FUN_14044af00(param_1 + 0x468);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x468);
    cVar2 = FUN_1411118b0(uVar3);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x471) = 1;
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 0x474);
  lVar4 = 0;
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x460))) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x458) + (longlong)iVar5 * 0x10);
  }
  if (lVar4 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x458);
    plVar6 = plVar1;
    if (plVar1 != plVar1 + (longlong)*(int *)(param_1 + 0x460) * 2) {
      while (*plVar6 != lVar4) {
        plVar6 = plVar6 + 2;
        if (plVar6 == plVar1 + (longlong)*(int *)(param_1 + 0x460) * 2) {
          return;
        }
      }
      iVar5 = (int)((longlong)plVar6 - (longlong)plVar1 >> 4);
      if ((((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x460))) &&
          (plVar1[(longlong)iVar5 * 2 + 1] != 0)) &&
         (cVar2 = FUN_142c48f60(plVar1[(longlong)iVar5 * 2 + 1],param_1,0), cVar2 == '\0')) {
        FUN_141178db0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 141163910 FUN_141163910 body=148 status=ok
// SIG undefined FUN_141163910(void)

void FUN_141163910(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    fVar3 = (float)FUN_1427fe4c0(param_2);
    fVar4 = *(float *)(param_1 + 0xb8);
    fVar1 = *(float *)(param_1 + 0xbc);
    lVar2 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar2 + 0x28) = 1;
    fVar4 = ((fVar1 - fVar4) * fVar3 * 0.01 + fVar4) * 100.0;
    *(float *)(lVar2 + 0x168) = (float)((int)ROUND(fVar4 + fVar4 + 0.5) >> 1) * 0.01;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411639b0 FUN_1411639b0 body=145 status=ok
// SIG undefined FUN_1411639b0(void)

void FUN_1411639b0(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    fVar3 = (float)FUN_1427fe4c0(param_2);
    fVar4 = *(float *)(param_1 + 0xb8);
    fVar1 = *(float *)(param_1 + 0xbc);
    lVar2 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar2 + 0x28) = 1;
    fVar4 = ((fVar1 - fVar4) * fVar3 * 0.01 + fVar4) * 100.0;
    *(float *)(lVar2 + 0x38) = (float)((int)ROUND(fVar4 + fVar4 + 0.5) >> 1) * 0.01;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141163a50 FUN_141163a50 body=148 status=ok
// SIG undefined FUN_141163a50(void)

void FUN_141163a50(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    fVar3 = (float)FUN_1427fe4c0(param_2);
    fVar4 = *(float *)(param_1 + 0xb8);
    fVar1 = *(float *)(param_1 + 0xbc);
    lVar2 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar2 + 0x28) = 1;
    fVar4 = ((fVar1 - fVar4) * fVar3 * 0.01 + fVar4) * 100.0;
    *(float *)(lVar2 + 0x16c) = (float)((int)ROUND(fVar4 + fVar4 + 0.5) >> 1) * 0.01;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141163b10 FUN_141163b10 body=107 status=ok
// SIG undefined FUN_141163b10(void)

void FUN_141163b10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
     (param_2 != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x48) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d11bd0(*(undefined8 *)(param_1 + 0x68));
    FUN_14116bd40(param_1,param_2);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141163b80 FUN_141163b80 body=87 status=ok
// SIG undefined FUN_141163b80(void)

void FUN_141163b80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x69) = iVar2 == 0;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d11bd0(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141163be0 FUN_141163be0 body=239 status=ok
// SIG undefined FUN_141163be0(void)

void FUN_141163be0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x6c0;
  FUN_141111950(param_1,lVar3);
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x6c8)) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x6c8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_141163c77;
    }
  }
  else {
LAB_141163c77:
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
    if (bVar1) goto LAB_141163cb0;
  }
  lVar2 = 0;
LAB_141163cb0:
  FUN_142ebe540(param_1,lVar2);
  return;
}



// FUNCTION 141163cd0 FUN_141163cd0 body=136 status=ok
// SIG undefined FUN_141163cd0(void)

void FUN_141163cd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if ((int)param_1[0x10b] == 0) {
    if (*(char *)((longlong)param_1 + 0x869) == '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x86a) = 1;
      lVar1 = *param_1;
      local_18 = 0;
      local_10 = 0;
      puVar2 = (undefined8 *)FName::FName(local_res8,L"Game_Mode_Normal",1);
      (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
      FUN_141153e30(param_1);
    }
    else if (*(char *)((longlong)param_1 + 0x869) == '\x04') {
      *(undefined1 *)((longlong)param_1 + 0x86b) = 1;
      FUN_141153e30();
      return;
    }
  }
  return;
}



// FUNCTION 141163d60 FUN_141163d60 body=298 status=ok
// SIG undefined FUN_141163d60(void)

void FUN_141163d60(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x869) == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x808);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1 + 0x6e0,1,0);
    }
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x848);
    if (cVar1 == '\0') {
      return;
    }
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x848);
    FUN_14110faf0(uVar4,1);
    return;
  }
  if (*(char *)(param_1 + 0x869) != '\x04') {
    return;
  }
  plVar2 = (longlong *)FUN_141368f90();
  if ((plVar2[0x1f] == 0) && ((**(code **)(*plVar2 + 0x368))(plVar2), plVar2[0x1f] == 0)) {
    lVar3 = FUN_1404b03b0();
  }
  else {
    plVar2 = (longlong *)FUN_141368f90();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    lVar3 = lVar3 + 0x100;
  }
  plVar2 = *(longlong **)(param_1 + 0x808);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,lVar3,1,0);
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x848);
  if (cVar1 == '\0') {
    return;
  }
  uVar4 = FWeakObjectPtr::Get(param_1 + 0x848);
  FUN_14110ffe0(uVar4,1);
  return;
}



// FUNCTION 141163e90 FUN_141163e90 body=137 status=ok
// SIG undefined FUN_141163e90(void)

void FUN_141163e90(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if ((int)param_1[0x10b] == 0) {
    if (*(char *)((longlong)param_1 + 0x869) == '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x86a) = 0;
      lVar1 = *param_1;
      local_18 = 0;
      local_10 = 0;
      puVar2 = (undefined8 *)FName::FName(local_res8,L"Game_Mode_Vault",1);
      (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
      FUN_141153e30(param_1);
    }
    else if (*(char *)((longlong)param_1 + 0x869) == '\x04') {
      *(undefined1 *)((longlong)param_1 + 0x86b) = 2;
      FUN_141153e30();
      return;
    }
  }
  return;
}



// FUNCTION 141163f20 FUN_141163f20 body=298 status=ok
// SIG undefined FUN_141163f20(void)

void FUN_141163f20(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x869) == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x808);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1 + 0x6f8,1,0);
    }
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x848);
    if (cVar1 == '\0') {
      return;
    }
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x848);
    FUN_14110faf0(uVar4,0);
    return;
  }
  if (*(char *)(param_1 + 0x869) != '\x04') {
    return;
  }
  plVar2 = (longlong *)FUN_141368f90();
  if ((plVar2[0x1f] == 0) && ((**(code **)(*plVar2 + 0x368))(plVar2), plVar2[0x1f] == 0)) {
    lVar3 = FUN_1404b03b0();
  }
  else {
    plVar2 = (longlong *)FUN_141368f90();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    lVar3 = lVar3 + 0xe8;
  }
  plVar2 = *(longlong **)(param_1 + 0x808);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,lVar3,1,0);
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x848);
  if (cVar1 == '\0') {
    return;
  }
  uVar4 = FWeakObjectPtr::Get(param_1 + 0x848);
  FUN_14110ffe0(uVar4,2);
  return;
}



// FUNCTION 141164050 FUN_141164050 body=104 status=ok
// SIG undefined FUN_141164050(void)

void FUN_141164050(longlong param_1,longlong param_2)

{
  int iVar1;
  char local_res8 [32];
  
  if (((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    iVar1 = FUN_142eb62f0(param_2);
    local_res8[0] = iVar1 != 0;
    FUN_142d92450(*(undefined8 *)(param_1 + 0x70),local_res8);
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0xc08))
              (*(longlong **)(param_1 + 0x68),local_res8[0] == '\0');
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411640e0 FUN_1411640e0 body=520 status=ok
// SIG undefined FUN_1411640e0(void)

void FUN_1411640e0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_48 [8];
  longlong *local_40 [5];
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
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
    if (bVar2) goto LAB_141164148;
  }
  lVar4 = 0;
LAB_141164148:
  if (param_2 != 0) {
    lVar5 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar4 != 0)) && (*(longlong *)(param_1 + 0x828) != 0)) {
      FUN_140cffaf0(*(longlong *)(param_1 + 0x828),&local_d8);
      iVar1 = *(int *)(param_2 + 0x2d8);
      if ((iVar1 < 0) || (local_d0 <= iVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar5 = local_d8;
      if (bVar2) {
        FUN_142d830c0((longlong)iVar1 * 0x58 + local_d8,local_48);
        if ((local_40[0] == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*local_40[0] + 0x20))(), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_b8 = 2;
          local_c8 = 0;
          uStack_c0 = 0;
          FText::FText(local_b0);
          FText::FText(local_98);
          FText::FText(local_80);
          FText::FText(local_68);
          local_50 = 0;
          local_4c = 0;
          FUN_1411f5120(&local_c8,lVar4,local_40);
          local_4c = CONCAT11(local_4c._1_1_,4);
          FUN_141176fe0(param_1,param_2,&local_c8,iVar1);
          FUN_140fa0310(&local_c8);
        }
        FUN_1404bf980(local_48);
        lVar5 = local_d8;
      }
      for (; local_d0 != 0; local_d0 = local_d0 + -1) {
        FUN_1404bf980(lVar5 + 0x28);
        FUN_1404bf980(lVar5);
        lVar5 = lVar5 + 0x58;
      }
      if (local_d8 != 0) {
        FMemory::Free(local_d8);
      }
    }
  }
  return;
}



// FUNCTION 1411642f0 FUN_1411642f0 body=131 status=ok
// SIG undefined FUN_1411642f0(void)

void FUN_1411642f0(longlong param_1)

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
      TBaseMulticastDelegate<void>::Remove(lVar2 + 0xc60,*(undefined8 *)(param_1 + 0x7d8));
      *(undefined8 *)(param_1 + 0x7d8) = 0;
    }
  }
  FUN_14116c5f0(param_1);
  return;
}



// FUNCTION 141164380 FUN_141164380 body=39 status=ok
// SIG undefined FUN_141164380(void)

void FUN_141164380(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1411ecbf0();
  }
  FUN_142ecb060(param_1);
  return;
}



// FUNCTION 1411643b0 FUN_1411643b0 body=116 status=ok
// SIG undefined FUN_1411643b0(void)

void FUN_1411643b0(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) &&
     (*(longlong *)(param_1 + 0xf0) != 0)) {
    FUN_14067dd80();
    FUN_14067dd80(*(undefined8 *)(param_1 + 0xe8));
    FUN_14067dd80(*(undefined8 *)(param_1 + 0xf0));
    *(undefined2 *)(param_1 + 0x170) = 1;
    FUN_141171a30(param_1,1);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_14172cc40(*(longlong *)(param_1 + 0x70),1);
      return;
    }
  }
  return;
}



// FUNCTION 141164430 FUN_141164430 body=65 status=ok
// SIG undefined FUN_141164430(void)

void FUN_141164430(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [16];
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  puVar2 = (undefined8 *)FName::FName(local_res18,"Roster",1);
  FUN_14116bac0(param_1,*puVar2,uVar1);
  return;
}



// FUNCTION 141164480 FUN_141164480 body=85 status=ok
// SIG undefined FUN_141164480(void)

void FUN_141164480(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x780) == 0) || (param_2 != 0)) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     ((iVar1 = FUN_142eb7a00(), iVar1 == -1 &&
      (*(int *)(*(longlong *)(param_1 + 0x718) + 0x274) != -1)))) {
    return;
  }
  FUN_1410ee650(*(undefined8 *)(param_1 + 0x780));
  return;
}


