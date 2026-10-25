// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ead460 FUN_142ead460 body=332 status=ok
// SIG undefined FUN_142ead460(void)

void FUN_142ead460(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((*(longlong *)(*param_1 + 0x5e8) == 0) &&
      (cVar1 = FUN_142eb6ef0(*param_1 + 0x4d8), (byte)(cVar1 - 1U) < 4)) &&
     (lVar2 = FUN_142eb7f00(*param_1), lVar2 != 0)) {
    lVar4 = *param_1;
    local_18 = FUN_142ecaab0;
    uStack_10 = 0;
    local_28 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,lVar4);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar2,PTR_s_mouseMove_14673ca00,*param_1 + 0x5e8,&local_28);
    if (local_20 != 0) {
      if (local_28 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_28 + 0x28))(local_28,0);
      if (local_28 != (longlong *)0x0) {
        local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
      }
      local_20 = 0;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 142ead5b0 FUN_142ead5b0 body=412 status=ok
// SIG undefined FUN_142ead5b0(void)

longlong * FUN_142ead5b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res18);
  lVar10 = 0;
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res18);
    iVar2 = *(int *)(lVar7 + 0xc);
    lVar7 = lVar10;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar6 = iVar2 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      local_40 = 0;
      lVar7 = *(longlong *)(*param_1 + 0x248);
      if (lVar7 != 0) {
        lVar3 = *(longlong *)(lVar7 + 0x170);
        plVar4 = *(longlong **)(lVar7 + 0x178);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (lVar3 != 0) {
          plVar8 = (longlong *)FUN_14203af90(lVar3,local_38,&DAT_1446b7cec);
          if (&local_48 != plVar8) {
            lVar10 = *plVar8;
            *plVar8 = 0;
            local_40 = plVar8[1];
            plVar8[1] = 0;
          }
          if (local_38[0] != 0) {
            FMemory::Free();
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar4 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
      *param_2 = lVar10;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142ead750 FUN_142ead750 body=1015 status=ok
// SIG undefined FUN_142ead750(void)

void FUN_142ead750(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8 [2];
  int local_res10;
  undefined4 local_res14;
  int local_res18 [2];
  float local_res20;
  float local_res24;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  
  local_res10 = (int)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar4 = *(int *)(lVar7 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar10 = iVar4 >> 0x1f & 0xffff;
      uVar6 = iVar4 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if (((*(uint *)(lVar7 + 8) & 0x30000000) == 0) &&
       (lVar7 = FWeakObjectPtr::Get(param_1 + 1), *(longlong *)(lVar7 + 0x2b8) != 0)) {
      (**(code **)(*(longlong *)*param_1 + 0x2b0))((longlong *)*param_1,0);
      (**(code **)(*(longlong *)*param_1 + 0x2b8))((longlong *)*param_1,5);
      FUN_142eb7270(*param_1,&local_b0);
      FUN_142eb8d60(*param_1,&local_b8);
      fVar18 = (float)DAT_1468b5d88;
      fVar19 = DAT_1468b5d88._4_4_;
      if (*(longlong *)(*param_1 + 0x430) != 0) {
        FUN_142dcfa20(*(longlong *)(*param_1 + 0x430),&local_res10,local_res18);
        fVar18 = (float)local_res10;
        fVar19 = (float)local_res18[0];
      }
      plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
      cVar5 = (**(code **)(*plVar8 + 0x4d8))(plVar8);
      local_res20 = local_b8;
      if ((cVar5 != '\0') &&
         (lVar7 = FWeakObjectPtr::Get(param_1 + 1), local_res20 = local_b8,
         1e-08 < ABS(*(float *)(lVar7 + 0x1ec)))) {
        lVar7 = FWeakObjectPtr::Get(param_1 + 1);
        local_res20 = *(float *)(lVar7 + 0x1ec);
      }
      local_res24 = local_b4;
      if ((cVar5 != '\0') &&
         (lVar7 = FWeakObjectPtr::Get(param_1 + 1), local_res24 = local_b4,
         1e-08 < ABS(*(float *)(lVar7 + 0x1f0)))) {
        lVar7 = FWeakObjectPtr::Get(param_1 + 1);
        local_res24 = *(float *)(lVar7 + 0x1f0);
      }
      plVar8 = (longlong *)*param_1;
      fVar14 = (*(float *)((longlong)plVar8 + 0x21c) - -1.0) * 0.5;
      if (0.0 <= fVar14) {
        if (1.0 <= fVar14) {
          fVar14 = 1.0;
        }
      }
      else {
        fVar14 = 0.0;
      }
      fVar14 = fVar14 * local_res20;
      fVar13 = (*(float *)(plVar8 + 0x44) - -1.0) * 0.5;
      fVar15 = 0.0;
      if ((0.0 <= fVar13) && (fVar15 = fVar13, 1.0 <= fVar13)) {
        fVar15 = 1.0;
      }
      fVar15 = fVar15 * local_res24;
      local_res8[0] = local_res24 / local_ac;
      if (local_res20 / local_b0 <= local_res24 / local_ac) {
        local_res8[0] = local_res20 / local_b0;
      }
      (**(code **)(*plVar8 + 0x500))(plVar8,local_res8,&local_res20,&local_b0);
      lVar7 = *param_1;
      fVar16 = local_res8[0] * *(float *)(lVar7 + 0x22c);
      fVar17 = local_res8[0] * *(float *)(lVar7 + 0x230);
      *(float *)(lVar7 + 0x234) = fVar16 * 100.0;
      *(float *)(lVar7 + 0x238) = fVar17 * 100.0;
      plVar8 = (longlong *)*param_1;
      fVar11 = local_b8 - local_res20;
      fVar13 = *(float *)((longlong)plVar8 + 0x224);
      fVar1 = *(float *)(plVar8 + 0x45);
      fVar12 = local_b4 - local_res24;
      pfVar9 = (float *)(**(code **)(*plVar8 + 0x4f8))(plVar8,&local_res10);
      fVar2 = *pfVar9;
      fVar3 = pfVar9[1];
      local_a8 = *(float *)(*param_1 + 0x234);
      local_a4 = *(float *)(*param_1 + 0x238);
      local_a0 = 0x42c80000;
      lVar7 = FWeakObjectPtr::Get(param_1 + 1);
      FUN_142f0f050(*(undefined8 *)(lVar7 + 0x2b8),&local_a8);
      local_a0 = 0;
      local_a8 = fVar18 + fVar16 * fVar13 + fVar14 + fVar11 * 0.5 + fVar2;
      local_a4 = fVar19 + fVar17 * fVar1 + fVar15 + fVar12 * 0.5 + fVar3;
      lVar7 = FWeakObjectPtr::Get(param_1 + 1);
      FUN_142f0ec10(*(undefined8 *)(lVar7 + 0x2b8),&local_a8);
    }
  }
  return;
}



// FUNCTION 142eadb50 FUN_142eadb50 body=219 status=ok
// SIG undefined FUN_142eadb50(void)

void FUN_142eadb50(longlong *param_1)

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
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x240);
      if ((cVar2 == '\0') ||
         ((lVar4 = FWeakObjectPtr::Get(lVar4 + 0x240), *(char *)(lVar4 + 0x5e1) != '\0' &&
          (*(char *)(lVar4 + 0x63c) != '\0')))) {
        (**(code **)(*(longlong *)*param_1 + 0x2f8))((longlong *)*param_1,(int)param_1[2] == 0);
      }
    }
  }
  return;
}



// FUNCTION 142eadc30 FUN_142eadc30 body=482 status=ok
// SIG undefined FUN_142eadc30(void)

bool FUN_142eadc30(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar12 = 0;
  local_res8[0] = 0;
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 != '\0') {
    lVar9 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar9 + 0xc);
    lVar9 = lVar12;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar11 = iVar3 >> 0x1f & 0xffff;
      uVar8 = iVar3 + uVar11;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
              (longlong)(int)((uVar8 & 0xffff) - uVar11) * 0x18;
    }
    if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
      plVar10 = (longlong *)FUN_140ad4c90(*param_1,local_38);
      bVar5 = true;
      bVar7 = false;
      lVar12 = *plVar10;
      goto LAB_142eadcf3;
    }
  }
  plVar10 = &local_48;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  bVar5 = false;
  bVar7 = true;
LAB_142eadcf3:
  plVar4 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_40;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
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
    plVar10 = local_30 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  if (lVar12 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar4 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    bVar7 = true;
  }
  else {
    LOCK();
    cVar6 = *(char *)(lVar12 + 0x30);
    if (cVar6 == '\0') {
      *(char *)(lVar12 + 0x30) = '\0';
      cVar6 = '\0';
    }
    UNLOCK();
    bVar7 = '\x03' < cVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar4 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
  return bVar7;
}



// FUNCTION 142eade20 FUN_142eade20 body=337 status=ok
// SIG undefined FUN_142eade20(void)

void FUN_142eade20(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  cVar1 = FText::IsEmptyOrWhitespace(param_2);
  if ((cVar1 == '\0') &&
     (lVar2 = FUN_14113c510(*(undefined8 *)(*param_1 + 0x698),param_1[1],0), lVar2 != 0)) {
    plVar4 = *(longlong **)(lVar2 + 0x248);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2,1,0);
    }
    local_10 = 5;
    local_18 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"icon",10);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    lVar3 = FUN_140ecbdf0(lVar2,&local_18,0,6,&local_28);
    plVar4 = local_28;
    for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (lVar3 != 0) {
      FUN_142088910(lVar3,param_3);
    }
    (**(code **)(*(longlong *)(lVar2 + 0x170) + 0x38))((longlong *)(lVar2 + 0x170),0);
  }
  return;
}



// FUNCTION 142eadf80 FUN_142eadf80 body=580 status=ok
// SIG undefined FUN_142eadf80(void)

void FUN_142eadf80(longlong *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  short *psVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  short *local_48;
  uint local_40;
  int local_3c;
  longlong local_38 [2];
  longlong local_28 [2];
  
  plVar15 = (longlong *)0x0;
  local_res8[0] = 0;
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 != '\0') {
    lVar9 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar9 + 0xc);
    plVar10 = plVar15;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar13 = iVar3 >> 0x1f & 0xffff;
      uVar8 = iVar3 + uVar13;
      plVar10 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                (longlong)(int)((uVar8 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(plVar10 + 1) & 0x30000000) == 0) {
      cVar6 = (**(code **)(*(longlong *)(*param_1 + 0x170) + 0x10))();
      if (((*(int *)(*param_1 + 400) == 0) ||
          (plVar10 = *(longlong **)(*param_1 + 0x188), plVar10 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar10 + 0x18))(), cVar7 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      plVar10 = (longlong *)*param_1;
      if (bVar4) {
        plVar16 = plVar15;
        if ((int)plVar10[0x32] != 0) {
          plVar16 = (longlong *)plVar10[0x31];
        }
        (**(code **)(*plVar16 + 0x38))(plVar16,local_38,plVar10,cVar6);
        plVar10 = local_38;
        bVar5 = true;
        bVar4 = false;
      }
      else {
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x308))(plVar10,local_28,cVar6);
        bVar5 = false;
        bVar4 = true;
      }
      local_48 = (short *)*plVar10;
      *plVar10 = 0;
      local_40 = *(uint *)(plVar10 + 1);
      local_3c = *(int *)((longlong)plVar10 + 0xc);
      plVar10[1] = 0;
      if ((bVar4) && (local_28[0] != 0)) {
        FMemory::Free();
      }
      if ((bVar5) && (local_38[0] != 0)) {
        FMemory::Free();
      }
      uVar8 = local_40;
      if (((cVar6 == '\x05') && ((char)param_1[2] == '\x06')) && (local_48 != &DAT_143f3eda8)) {
        local_40 = 0;
        if (local_3c != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,0);
          plVar15 = (longlong *)(ulonglong)local_40;
        }
        uVar8 = (uint)plVar15;
        if (local_3c < (int)(uint)plVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,plVar15);
          uVar8 = local_40;
        }
      }
      if (1 < (int)uVar8) {
        lVar9 = *param_1;
        if (*(longlong *)(lVar9 + 0x268) != 0) {
          if (*(int *)(lVar9 + 0x280) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = *(undefined2 **)(lVar9 + 0x278);
          }
          psVar14 = &DAT_143f3eda8;
          if (uVar8 != 0) {
            psVar14 = local_48;
          }
          lVar12 = (longlong)puVar11 - (longlong)psVar14;
          do {
            sVar1 = *psVar14;
            sVar2 = *(short *)((longlong)psVar14 + lVar12);
            if (sVar1 != sVar2) break;
            psVar14 = psVar14 + 1;
          } while (sVar2 != 0);
          if (sVar1 != sVar2) {
            FUN_142088910(*(longlong *)(lVar9 + 0x268),&local_48);
            FString::operator=(*param_1 + 0x278,&local_48);
          }
        }
      }
      if (local_48 != (short *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142eae1d0 FUN_142eae1d0 body=159 status=ok
// SIG undefined FUN_142eae1d0(void)

void FUN_142eae1d0(longlong *param_1)

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
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) && (*(char *)(*param_1 + 0x400) != '\0')) {
      FUN_142eda580();
      return;
    }
  }
  return;
}



// FUNCTION 142eae270 FUN_142eae270 body=374 status=ok
// SIG undefined FUN_142eae270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eae270(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x530) != 0) {
    lVar2 = 0;
    lVar3 = lVar2;
    if (*(longlong *)(lVar1 + 0x520) == 0) {
      lVar3 = lVar1 + 0x500;
    }
    if (lVar3 != 0 || *(longlong *)(lVar1 + 0x520) != 0) {
      if (*(int *)(lVar1 + 0x530) != 0) {
        plVar4 = *(longlong **)(lVar1 + 0x520);
        if (*(longlong **)(lVar1 + 0x520) == (longlong *)0x0) {
          plVar4 = (longlong *)(lVar1 + 0x500);
        }
        if (plVar4 != (longlong *)0x0) {
          lVar2 = (**(code **)(*plVar4 + 8))();
        }
      }
      (**(code **)(lVar1 + 0x4f0))(lVar2);
      lVar1 = *param_1;
      local_68[0] = AK::MemoryMgr::StartProfileThreadUsage;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
      FGenericPlatformMemory::MemswapGreaterThan8(lVar3,lVar1 + 0x4f0,0x50);
      if (*(int *)(lVar3 + 0x40) != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x30);
        if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
          plVar4 = (longlong *)(lVar3 + 0x10);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        FMemory::Free();
      }
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
    }
  }
  return;
}



// FUNCTION 142eae3f0 FUN_142eae3f0 body=270 status=ok
// SIG undefined FUN_142eae3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142eae3f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [80];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142eaf1e0(*param_1 + 0x20);
  lVar1 = *param_1;
  local_78[0] = FUN_142eb07b0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  lVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar2,lVar1 + 0x20,0x50);
  if (*(int *)(lVar2 + 0x40) != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x30);
    if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
      plVar3 = (longlong *)(lVar2 + 0x10);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142eae500 FUN_142eae500 body=222 status=ok
// SIG undefined FUN_142eae500(void)

void FUN_142eae500(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_res8;
  
  plVar4 = *(longlong **)(*param_1 + 0xd8);
  lVar5 = *(longlong *)(*param_1 + 0xd0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    FUN_14203d720(lVar5,&local_res8,param_1[2]);
    FUN_142053150(*param_1,local_res8);
    plVar6 = *(longlong **)(*param_1 + 0x80);
    uVar7 = *(undefined8 *)(*param_1 + 0x78);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    FUN_142033230(uVar7);
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
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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



// FUNCTION 142eae5e0 FUN_142eae5e0 body=137 status=ok
// SIG undefined FUN_142eae5e0(void)

void FUN_142eae5e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if (*(char *)(*param_1 + 0x5f9) != '\0') {
    lVar1 = FUN_1416f8720((int)param_1[1]);
    if (lVar1 != 0) {
      local_18[1] = 10;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"firstBoot",0x14);
      uVar2 = FUN_1416f8720((int)param_1[1]);
      FUN_142088910(uVar2,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      *(undefined1 *)(*param_1 + 0x5f9) = 0;
    }
  }
  return;
}



// FUNCTION 142eae670 FUN_142eae670 body=496 status=ok
// SIG undefined FUN_142eae670(void)

float * FUN_142eae670(undefined8 *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  longlong *plVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_b8;
  longlong *local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  
  if (*(char *)(param_1 + 2) == '\0') {
    pfVar11 = (float *)FUN_142eb8d60(*param_1,local_res10);
  }
  else {
    pfVar11 = (float *)FUN_142eb7270(*param_1,local_res8);
  }
  fVar9 = DAT_1468b5d88._4_4_;
  fVar8 = (float)DAT_1468b5d88;
  fVar3 = *pfVar11;
  fVar4 = pfVar11[1];
  local_a8 = (float)DAT_1468b5d88;
  fStack_a4 = DAT_1468b5d88._4_4_;
  local_98 = CONCAT31(local_98._1_3_,1);
  fStack_a0 = fVar3;
  fStack_9c = fVar4;
  FUN_140ad4c90(*param_1,&local_b8);
  if (local_b8 != 0) {
    local_68 = local_98;
    local_78 = local_a8;
    fStack_74 = fStack_a4;
    fStack_70 = fStack_a0;
    fStack_6c = fStack_9c;
    FUN_142058d30(local_b8,&local_90,&local_78);
  }
  plVar10 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  fVar12 = 1.0;
  if (1e-08 < ABS(local_88 - local_90)) {
    fVar13 = (*(float *)(param_1 + 1) - local_90) / (local_88 - local_90);
  }
  else if (*(float *)(param_1 + 1) < local_88) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = 1.0;
  }
  fVar6 = *(float *)((longlong)param_1 + 0xc);
  *param_2 = (fVar3 - fVar8) * fVar13 + fVar8;
  if (1e-08 < ABS(local_84 - local_8c)) {
    fVar12 = (fVar6 - local_8c) / (local_84 - local_8c);
  }
  else if (fVar6 < local_84) {
    fVar12 = 0.0;
  }
  param_2[1] = (fVar4 - fVar9) * fVar12 + fVar9;
  return param_2;
}



// FUNCTION 142eae860 FUN_142eae860 body=801 status=ok
// SIG undefined FUN_142eae860(void)

void FUN_142eae860(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  char cVar13;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong *plStack_68;
  undefined1 local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 == '\0') {
    return;
  }
  lVar9 = FWeakObjectPtr::Get(&local_res10);
  iVar3 = *(int *)(lVar9 + 0xc);
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar11 = iVar3 >> 0x1f & 0xffff;
    uVar8 = iVar3 + uVar11;
    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
            (longlong)(int)((uVar8 & 0xffff) - uVar11) * 0x18;
  }
  else {
    lVar9 = 0;
  }
  if ((*(uint *)(lVar9 + 8) & 0x30000000) != 0) {
    return;
  }
  FUN_142ecf920(*param_1,*(undefined1 *)((longlong)param_1 + 0x11));
  bVar4 = (byte)((char)param_1[2] - 5U) < 3;
  bVar5 = (byte)(*(char *)((longlong)param_1 + 0x11) - 5U) < 3;
  if ((!bVar4) || (bVar5)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  if ((bVar4) || (!bVar5)) {
    cVar13 = '\0';
  }
  else {
    cVar13 = '\x01';
  }
  if (cVar6 == '\0') {
    if ((cVar13 == '\0') || (*(char *)(*param_1 + 0x250) == '\0')) goto LAB_142eaeadf;
    FName::FName(local_58,&DAT_143f3eda8,1);
    local_4c = 0;
    local_50 = 0xffffffff;
    FName::FName(local_48,&DAT_143f3eda8,1);
    local_40 = 0;
    plStack_38 = (longlong *)0x0;
    local_30 = 0;
    local_50 = FUN_142eb7570(*param_1,*(undefined1 *)((longlong)param_1 + 0x12));
    FUN_142eb4390(*param_1 + 0x1e0,*param_1,local_58);
    plVar12 = plStack_38;
  }
  else {
    lVar9 = *param_1;
    if (((*(int *)(lVar9 + 0x1a0) != 0) || (*(int *)(lVar9 + 0x1a4) != 0)) &&
       (*(char *)((longlong)param_1 + 0x12) == '\0')) {
      FUN_142f0ad20(lVar9,*(undefined8 *)(lVar9 + 0x1a0));
    }
    FName::FName(local_88,&DAT_143f3eda8,1);
    local_7c = 0;
    local_80 = 0xffffffff;
    FName::FName(local_78,&DAT_143f3eda8,1);
    local_70 = 0;
    plStack_68 = (longlong *)0x0;
    local_60 = 0;
    local_80 = FUN_142eb7570(*param_1,*(undefined1 *)((longlong)param_1 + 0x12));
    FUN_142eb4390(*param_1 + 0x1d0,*param_1,local_88);
    cVar7 = FWeakObjectPtr::IsValid(*param_1 + 0x240);
    plVar12 = plStack_68;
    if ((cVar7 != '\0') &&
       ((lVar9 = *param_1, *(char *)(lVar9 + 0x250) != '\0' || (*(char *)(lVar9 + 0x251) != '\0'))))
    {
      lVar9 = FWeakObjectPtr::Get(lVar9 + 0x240);
      plVar12 = plStack_68;
      if (*param_1 != 0) {
        *(longlong *)(lVar9 + 0x628) = *param_1;
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
LAB_142eaeadf:
  if (((char)param_1[2] == '\x01') &&
     (cVar7 = FWeakObjectPtr::IsValid(*param_1 + 0x240), cVar7 != '\0')) {
    lVar10 = FWeakObjectPtr::Get(*param_1 + 0x240);
    lVar9 = *param_1;
    if ((*(longlong *)(lVar10 + 0x5a8) != 0) &&
       ((lVar9 != 0 && (lVar9 == *(longlong *)(*(longlong *)(lVar10 + 0x5a8) + 0x48))))) {
      lVar9 = FWeakObjectPtr::Get(lVar9 + 0x240);
      if (*(longlong *)(lVar9 + 0x5a8) != 0) {
        FUN_142f0d400(*(longlong *)(lVar9 + 0x5a8),0,0);
      }
    }
  }
  FUN_142f18e80(*param_1,(char)param_1[2],cVar6,cVar13);
  return;
}



// FUNCTION 142eaeb90 FUN_142eaeb90 body=241 status=ok
// SIG undefined FUN_142eaeb90(void)

void FUN_142eaeb90(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) && (param_1[2] != 0)) {
      FUN_142036df0();
      lVar5 = *param_1;
      uVar2 = *(undefined4 *)(lVar5 + 800);
      if (*(longlong *)(lVar5 + 0x318) != 0) {
        FUN_142ed43c0(*(longlong *)(lVar5 + 0x318),0);
        *(undefined4 *)(lVar5 + 800) = 0;
        lVar5 = *param_1;
      }
      if (*(longlong *)(lVar5 + 0x318) != 0) {
        FUN_142ed43c0(*(longlong *)(lVar5 + 0x318),uVar2);
        *(undefined4 *)(lVar5 + 800) = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 142eaec90 FUN_142eaec90 body=1349 status=ok
// SIG undefined FUN_142eaec90(void)

void FUN_142eaec90(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  uVar13 = 0;
  if (*(char *)(*param_1 + 0x178) == (char)param_1[1]) {
    return;
  }
  lVar3 = *(longlong *)(*param_1 + 0x38);
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x2b8);
  if (lVar3 == 0) {
    return;
  }
  if ((*(longlong *)(lVar3 + 0x28) == 0) || (*(longlong *)(lVar3 + 0x30) == 0)) {
LAB_142eaed6f:
    plVar10 = &local_88;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    bVar5 = false;
    bVar15 = true;
    lVar14 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar3 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (iVar8 < 1) goto LAB_142eaed6f;
    local_b0 = *(longlong **)(lVar3 + 0x30);
    local_b8 = 0;
    if (local_b0 == (longlong *)0x0) {
LAB_142eaed5f:
      plVar10 = &local_b8;
      bVar5 = true;
      bVar15 = false;
      lVar14 = local_b8;
    }
    else {
      LOCK();
      iVar8 = (int)local_b0[1];
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(local_b0 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (!bVar15) {
        LOCK();
        bVar15 = iVar8 == (int)local_b0[1];
        if (bVar15) {
          *(int *)(local_b0 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar15) {
          if (local_b0 != (longlong *)0x0) {
            local_b8 = *(longlong *)(lVar3 + 0x28);
          }
          goto LAB_142eaed5f;
        }
        LOCK();
        iVar8 = (int)local_b0[1];
        bVar15 = iVar8 == 0;
        if (bVar15) {
          *(int *)(local_b0 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
      plVar10 = &local_b8;
      local_b0 = (longlong *)0x0;
      bVar5 = true;
      bVar15 = false;
      lVar14 = 0;
    }
  }
  plVar4 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  plVar12 = plStack_80;
  *plVar10 = 0;
  if ((bVar15) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_80 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar10 = local_b0;
  if ((bVar5) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_b0 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if ((lVar14 == 0) || (cVar7 = FUN_142045be0(lVar14), cVar7 == '\0')) goto LAB_142eaf171;
  *(char *)(*param_1 + 0x178) = (char)param_1[1];
  lVar6 = *param_1;
  if ((char)param_1[1] == '\0') {
    if ((*(longlong *)(lVar6 + 0x28) == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) {
LAB_142eaf03c:
      puVar11 = &local_68;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar5 = false;
      bVar15 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar6 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_142eaf03c;
      local_90 = *(longlong **)(lVar6 + 0x30);
      local_98 = 0;
      if (local_90 == (longlong *)0x0) {
LAB_142eaf02c:
        puVar11 = &local_98;
        bVar5 = true;
        bVar15 = false;
        uVar13 = local_98;
      }
      else {
        LOCK();
        iVar8 = (int)local_90[1];
        bVar15 = iVar8 == 0;
        if (bVar15) {
          *(int *)(local_90 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar15) {
          LOCK();
          bVar15 = iVar8 == (int)local_90[1];
          if (bVar15) {
            *(int *)(local_90 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar15) {
            if (local_90 != (longlong *)0x0) {
              local_98 = *(undefined8 *)(lVar6 + 0x28);
            }
            goto LAB_142eaf02c;
          }
          LOCK();
          iVar8 = (int)local_90[1];
          bVar15 = iVar8 == 0;
          if (bVar15) {
            *(int *)(local_90 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        local_90 = (longlong *)0x0;
        puVar11 = &local_98;
        bVar5 = true;
        bVar15 = false;
        uVar13 = 0;
      }
    }
    plVar10 = (longlong *)puVar11[1];
    puVar11[1] = 0;
    plVar12 = plStack_60;
    *puVar11 = 0;
    if ((bVar15) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_60 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    plVar12 = local_90;
    if ((bVar5) && (local_90 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_90 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_48 = uVar13;
    local_40 = plVar10;
    FUN_14204de30(lVar14,&local_48,0);
    plVar12 = local_40;
  }
  else {
    if ((*(longlong *)(lVar6 + 0x28) == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) {
LAB_142eaeedc:
      puVar11 = &local_78;
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar5 = false;
      bVar15 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar6 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_142eaeedc;
      local_a0 = *(longlong **)(lVar6 + 0x30);
      local_a8 = 0;
      if (local_a0 == (longlong *)0x0) {
LAB_142eaeecc:
        puVar11 = &local_a8;
        bVar5 = true;
        bVar15 = false;
        uVar13 = local_a8;
      }
      else {
        LOCK();
        iVar8 = (int)local_a0[1];
        bVar15 = iVar8 == 0;
        if (bVar15) {
          *(int *)(local_a0 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar15) {
          LOCK();
          bVar15 = iVar8 == (int)local_a0[1];
          if (bVar15) {
            *(int *)(local_a0 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar15) {
            if (local_a0 != (longlong *)0x0) {
              local_a8 = *(undefined8 *)(lVar6 + 0x28);
            }
            goto LAB_142eaeecc;
          }
          LOCK();
          iVar8 = (int)local_a0[1];
          bVar15 = iVar8 == 0;
          if (bVar15) {
            *(int *)(local_a0 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        local_a0 = (longlong *)0x0;
        puVar11 = &local_a8;
        bVar5 = true;
        bVar15 = false;
        uVar13 = 0;
      }
    }
    plVar10 = (longlong *)puVar11[1];
    puVar11[1] = 0;
    plVar12 = plStack_70;
    *puVar11 = 0;
    if ((bVar15) && (plStack_70 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_70 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    plVar12 = local_a0;
    if ((bVar5) && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_58 = uVar13;
    local_50 = plVar10;
    uVar9 = FUN_142eed730(lVar3);
    FUN_142027d30(lVar14,&local_58,uVar9);
    plVar12 = local_50;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    lVar3 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_142eaf171:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 142eaf1e0 FUN_142eaf1e0 body=166 status=ok
// SIG undefined FUN_142eaf1e0(void)

undefined8 FUN_142eaf1e0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar5 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 8))();
    }
  }
  uVar4 = (*(code *)*param_1)(local_28,uVar4);
  FText::FText(param_2,uVar4);
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142eaf2d0 FUN_142eaf2d0 body=134 status=ok
// SIG undefined FUN_142eaf2d0(void)

undefined8 * FUN_142eaf2d0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142eaf360 FUN_142eaf360 body=134 status=ok
// SIG undefined FUN_142eaf360(void)

undefined8 * FUN_142eaf360(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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



// FUNCTION 142eaf3f0 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_75adb8cf8ab57e2f39d397b682af3181>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142eaf480 FUN_142eaf480 body=186 status=ok
// SIG undefined FUN_142eaf480(void)

longlong FUN_142eaf480(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_1415b5910();
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142eaf540 FUN_142eaf540 body=80 status=ok
// SIG undefined FUN_142eaf540(void)

longlong FUN_142eaf540(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 142eaf600 FUN_142eaf600 body=445 status=ok
// SIG undefined FUN_142eaf600(void)

void FUN_142eaf600(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_78;
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  plVar8 = (longlong *)0x0;
  if ((*(int *)(param_1 + 0x3f0) != 0) || (*(int *)(param_1 + 0x3f4) != 0)) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_38 = 0;
    local_28 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_1444f8920;
      puVar7[1] = param_1;
      *(undefined4 *)(puVar7 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar7 + 0x14) = local_resc;
    }
    local_68[0] = &LAB_142eb09f0;
    FUN_14204c280(local_68);
  }
  FString::operator=(param_1 + 0x318,param_1 + 0x318);
  plVar4 = *(longlong **)(param_1 + 0x248);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2a8))(plVar4,param_1 + 0x318,1);
    FUN_142f10ae0(*(undefined8 *)(param_1 + 0x248),0);
    FUN_142f0de70(*(undefined8 *)(param_1 + 0x248),PTR_DAT_14673ca48);
  }
  local_70 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x358) != &local_78) {
    *(undefined8 *)(param_1 + 0x358) = 0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x360,&local_70);
    plVar4 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x3d0) != 0) && (*(longlong **)(param_1 + 0x3c8) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x18))();
    if (cVar6 != '\0') {
      if (*(int *)(param_1 + 0x3d0) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x3c8);
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,param_1,param_1 + 0x318);
    }
  }
  FUN_142eb1230(param_1);
  FUN_142eb11b0(param_1);
  return;
}



// FUNCTION 142eaf7c0 FUN_142eaf7c0 body=131 status=ok
// SIG undefined FUN_142eaf7c0(void)

void FUN_142eaf7c0(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffeff;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | (uint)param_2 << 8;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
    *(uint *)(lVar2 + 0x6a8) = *(uint *)(lVar2 + 0x6a8) & 0xfffffffe;
    *(uint *)(lVar2 + 0x6a8) = *(uint *)(lVar2 + 0x6a8) | (uint)param_2;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x59c);
    FUN_142f0b330(uVar3,1);
  }
  return;
}



// FUNCTION 142eaf850 FUN_142eaf850 body=215 status=ok
// SIG undefined FUN_142eaf850(void)

void FUN_142eaf850(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_res10);
    iVar2 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar2 + 1;
    if (*(int *)(param_1 + 100) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
    puVar3 = (undefined8 *)FName::FName(&local_res10,L"OnDropButtonHovered",1);
    FWeakObjectPtr::operator=(param_2 + 0x210,param_1);
    *(undefined8 *)(param_2 + 0x218) = *puVar3;
    puVar3 = (undefined8 *)FName::FName(&local_res10,L"OnDropButtonUnhovered",1);
    FWeakObjectPtr::operator=(param_2 + 0x220,param_1);
    *(undefined8 *)(param_2 + 0x228) = *puVar3;
  }
  return;
}



// FUNCTION 142eaf930 FUN_142eaf930 body=136 status=ok
// SIG undefined FUN_142eaf930(void)

void FUN_142eaf930(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x28);
  *(int *)(param_1 + 0x30) = iVar2 + 1;
  if (*(int *)(param_1 + 0x34) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar4 + lVar3) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar3) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar3) = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar3) = 0;
  *(undefined1 *)(lVar4 + *plVar1) = *param_2;
  FText::operator=(*plVar1 + 8 + lVar4,param_3);
  return;
}



// FUNCTION 142eaf9c0 FUN_142eaf9c0 body=382 status=ok
// SIG undefined FUN_142eaf9c0(void)

void FUN_142eaf9c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b3de40) && (_Init_thread_header(&DAT_146b3de40), DAT_146b3de40 == -1))
  {
    FName::FName(&DAT_146b3de38,L"OnEntryClicked",1);
    _Init_thread_footer(&DAT_146b3de40);
  }
  if (*(longlong *)(param_1 + 0x198) == 0) {
    return;
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"ListEntry",0x14);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  uVar4 = URemnantGameInstance::GetPrivateStaticClass();
  lVar5 = FUN_142ebcee0(uVar1,local_18,uVar4,0);
  if (lVar5 != 0) {
    lVar6 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142eafa9c;
  }
  lVar5 = 0;
LAB_142eafa9c:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    plVar2 = *(longlong **)(lVar5 + 0x248);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2,1,0);
    }
    FWeakObjectPtr::operator=(lVar5 + 0x1b0,param_1);
    *(undefined8 *)(lVar5 + 0x1b8) = DAT_146b3de38;
  }
  return;
}



// FUNCTION 142eafb40 FUN_142eafb40 body=990 status=ok
// SIG undefined FUN_142eafb40(void)

void FUN_142eafb40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38 = (longlong *)&LAB_1404c20fc;
  iStack_30 = 0;
  local_48 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(int *)(plVar1 + 3) = iStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_rollOver_14673ca10,param_1 + 0x298,&local_48);
  if (local_40 == 0) {
LAB_142eafc1b:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_142eafc1b;
  }
  uStack_20 = 0;
  local_38 = (longlong *)0x0;
  local_28 = &LAB_140edeadc;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  iStack_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_1c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_rollOut_14673ca08,param_1 + 0x2a0,&local_38);
  if (iStack_30 == 0) {
LAB_142eafcd1:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    iStack_30 = 0;
    goto LAB_142eafcd1;
  }
  uStack_20 = 0;
  local_48 = (longlong *)0x0;
  local_28 = &LAB_14099be60;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_1c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_mouseDown_14673c9f8,param_1 + 0x2a8,&local_48);
  if (local_40 == 0) {
LAB_142eafd87:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_142eafd87;
  }
  uStack_20 = 0;
  local_38 = (longlong *)0x0;
  local_28 = &LAB_1404c2174;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  iStack_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_1c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_mouseUp_14673ca18,param_1 + 0x2b0,&local_38);
  if (iStack_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_142eafe4a;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    iStack_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_142eafe4a:
  uStack_20 = 0;
  local_48 = (longlong *)0x0;
  local_28 = &LAB_1404c2108;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_1c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_click_14673c9f0,param_1 + 0x2b8,&local_48);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 142eaff20 FUN_142eaff20 body=84 status=ok
// SIG undefined FUN_142eaff20(void)

undefined4 FUN_142eaff20(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x4b0));
  LOCK();
  *(undefined4 *)(param_1 + 0x4b8) = 1;
  UNLOCK();
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x4a0,local_res10);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x4b0));
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 142eaff80 FUN_142eaff80 body=538 status=ok
// SIG undefined FUN_142eaff80(void)

void FUN_142eaff80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_90 = *(longlong **)(param_1 + 0x30);
      local_98 = 0;
      if (local_90 == (longlong *)0x0) {
LAB_142eb0023:
        plVar7 = &local_98;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_98;
      }
      else {
        LOCK();
        iVar6 = (int)local_90[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_90 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)local_90[1];
          if (bVar10) {
            *(int *)(local_90 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_90 != (longlong *)0x0) {
              local_98 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142eb0023;
          }
          LOCK();
          iVar6 = (int)local_90[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(local_90 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_98;
        local_90 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_142eb004a;
    }
  }
  plVar7 = &local_88;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142eb004a:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_80;
  if ((bVar10) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar7 = local_90;
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (lVar9 != 0) {
    local_48 = 0;
    local_38 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_78[0] = &LAB_142eb0a20;
    FUN_14208c5d0(param_1,local_78);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142eb01a0 FUN_142eb01a0 body=37 status=ok
// SIG undefined FUN_142eb01a0(void)

ulonglong FUN_142eb01a0(undefined8 param_1,ulonglong *param_2,undefined1 *param_3)

{
  ulonglong in_RAX;
  
  *param_3 = 0;
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') &&
     ((in_RAX = *param_2, in_RAX == DAT_146b3e2a0 || (in_RAX == DAT_146b3d988)))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142eb01d0 FUN_142eb01d0 body=34 status=ok
// SIG undefined FUN_142eb01d0(void)

void FUN_142eb01d0(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  if (*(longlong *)(param_1 + 0x5b0) == 0) {
    return;
  }
  if (param_4 != '\0') {
    FUN_142ee25d0();
    return;
  }
  FUN_142ee2030(*(longlong *)(param_1 + 0x5b0),*param_2);
  return;
}



// FUNCTION 142eb0200 FUN_142eb0200 body=822 status=ok
// SIG undefined FUN_142eb0200(void)

void FUN_142eb0200(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48 [2];
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x488));
  plVar8 = (longlong *)0x0;
  LOCK();
  *(undefined4 *)(param_1 + 0x490) = 1;
  UNLOCK();
  if (param_2 != 0) {
    local_78 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_78,local_48);
    UDataTable::GetRowNames(param_2,&local_68);
    if (param_3 == '\0') {
      FUN_1406c5d90(param_1 + 0x438,local_60);
    }
    plVar10 = (longlong *)
              ((ulonglong)((longlong)(local_68 + local_60) + (7 - (longlong)local_68)) >> 3);
    if (local_68 + local_60 < local_68) {
      plVar10 = plVar8;
    }
    if (plVar10 != (longlong *)0x0) {
      plVar6 = (longlong *)(param_1 + 0x438);
      plVar7 = plVar8;
      plVar9 = local_68;
LAB_142eb02c0:
      local_res10 = *plVar9;
      if (*(int *)(param_1 + 0x440) != *(int *)(param_1 + 0x46c)) {
        lVar2 = *(longlong *)(param_1 + 0x478);
        if (*(longlong *)(param_1 + 0x478) == 0) {
          lVar2 = param_1 + 0x470;
        }
        iVar1 = *(int *)(lVar2 + ((longlong)
                                  ((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                                 (longlong)*(int *)(param_1 + 0x480) - 1U) * 4);
        if (iVar1 != -1) {
          do {
            if (*(longlong *)(*plVar6 + (longlong)iVar1 * 0x18) == local_res10) {
              if (iVar1 != -1) {
                if (param_3 == '\x02') goto LAB_142eb04d9;
                lVar2 = FUN_142ea7c00(param_2,local_res10,local_48,0);
                if (lVar2 != 0) {
                  if (*(int *)(param_1 + 0x440) == *(int *)(param_1 + 0x46c)) goto LAB_142eb03d0;
                  lVar3 = *(longlong *)(param_1 + 0x478);
                  if (*(longlong *)(param_1 + 0x478) == 0) {
                    lVar3 = param_1 + 0x470;
                  }
                  iVar1 = *(int *)(lVar3 + ((longlong)
                                            ((int)((ulonglong)local_res10 >> 0x20) +
                                            (int)local_res10) &
                                           (longlong)*(int *)(param_1 + 0x480) - 1U) * 4);
                  if (iVar1 == -1) goto LAB_142eb03d0;
                  goto LAB_142eb03b0;
                }
              }
              break;
            }
            iVar1 = *(int *)(*plVar6 + 0x10 + (longlong)iVar1 * 0x18);
          } while (iVar1 != -1);
        }
      }
      goto LAB_142eb03e3;
    }
LAB_142eb04ee:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x488));
  LOCK();
  *(undefined4 *)(param_1 + 0x490) = 0;
  UNLOCK();
  return;
  while (iVar1 = (int)plVar5[2], iVar1 != -1) {
LAB_142eb03b0:
    plVar5 = (longlong *)(*plVar6 + (longlong)iVar1 * 0x18);
    if (*(longlong *)(*plVar6 + (longlong)iVar1 * 0x18) == local_res10) {
      if (iVar1 != -1) goto LAB_142eb03d3;
      break;
    }
  }
LAB_142eb03d0:
  plVar5 = plVar8;
LAB_142eb03d3:
  plVar5[1] = *(longlong *)(lVar2 + 8);
LAB_142eb03e3:
  local_70 = local_res10;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar3 = FUN_142f23190();
    for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (local_70 != 0) {
          if (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 100)) goto LAB_142eb0490;
          lVar2 = *(longlong *)(param_2 + 0x70);
          if (*(longlong *)(param_2 + 0x70) == 0) {
            lVar2 = param_2 + 0x68;
          }
          iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)local_70 >> 0x20) + (int)local_70) &
                                   (longlong)*(int *)(param_2 + 0x78) - 1U) * 4);
          if (iVar1 == -1) goto LAB_142eb0490;
          goto LAB_142eb0470;
        }
        break;
      }
    }
  }
LAB_142eb04d9:
  plVar9 = plVar9 + 1;
  plVar7 = (longlong *)((longlong)plVar7 + 1);
  if (plVar7 == plVar10) goto LAB_142eb04ee;
  goto LAB_142eb02c0;
  while (iVar1 = (int)plVar5[2], iVar1 != -1) {
LAB_142eb0470:
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar1 * 0x18);
    if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar1 * 0x18) == local_70) {
      if (iVar1 != -1) goto LAB_142eb0493;
      break;
    }
  }
LAB_142eb0490:
  plVar5 = plVar8;
LAB_142eb0493:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar8;
  }
  if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
    local_58 = &local_res10;
    local_50 = *plVar4 + 8;
    FUN_141711540(plVar6,local_res8,&local_58,0);
  }
  goto LAB_142eb04d9;
}



// FUNCTION 142eb05b0 FUN_142eb05b0 body=81 status=ok
// SIG undefined FUN_142eb05b0(void)

void FUN_142eb05b0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5d8);
  if (cVar2 != '\0') {
    LOCK();
    iVar1 = *(int *)(param_1 + 0x628);
    *(int *)(param_1 + 0x628) = 1;
    UNLOCK();
    if (iVar1 == 0) {
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
      FUN_142ed95f0(param_1,uVar3,0);
    }
  }
  return;
}



// FUNCTION 142eb0610 FUN_142eb0610 body=207 status=ok
// SIG undefined FUN_142eb0610(void)

void FUN_142eb0610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18;
  
  FName::FName(local_40,&DAT_143f3eda8,1);
  local_34 = 0;
  local_38 = 0xffffffff;
  FName::FName(local_30,&DAT_143f3eda8,1);
  local_18 = 0;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  local_48 = param_2;
  FUN_140ed08a0(local_40,param_3);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_48);
  plVar5 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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



// FUNCTION 142eb06e0 FUN_142eb06e0 body=198 status=ok
// SIG undefined FUN_142eb06e0(void)

void FUN_142eb06e0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x4e8);
  if (lVar2 == 0) {
    return;
  }
  lVar5 = FUN_142f1bdf0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (lVar2 != -0xc0) {
      uVar1 = *param_2;
      if (((*(int *)(lVar2 + 0x128) == 0) || (*(longlong **)(lVar2 + 0x120) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x120) + 0x18))(), cVar4 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (*(int *)(lVar2 + 0x128) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(lVar2 + 0x120);
        }
        (**(code **)(*plVar6 + 0x40))(plVar6,param_1,uVar1,param_3);
      }
      return;
    }
    return;
  }
  return;
}



// FUNCTION 142eb07b0 FUN_142eb07b0 body=23 status=ok
// SIG undefined FUN_142eb07b0(void)

undefined8 FUN_142eb07b0(undefined8 param_1)

{
  FText::FText();
  return param_1;
}



// FUNCTION 142eb0850 FUN_142eb0850 body=87 status=ok
// SIG undefined FUN_142eb0850(void)

void FUN_142eb0850(longlong *param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(*param_1 + 0x5e8) != 0) {
    lVar1 = FUN_142eb7f00();
    if (lVar1 != 0) {
      FUN_142f06340(lVar1,*param_1 + 0x5e8);
    }
    *(undefined8 *)(*param_1 + 0x5e8) = 0;
    return;
  }
  *(undefined8 *)(*param_1 + 0x5e8) = 0;
  return;
}



// FUNCTION 142eb08b0 FUN_142eb08b0 body=44 status=ok
// SIG undefined FUN_142eb08b0(void)

void FUN_142eb08b0(longlong *param_1)

{
  TBaseMulticastDelegate<void>::Broadcast(*param_1 + 0x648);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(*param_1 + 0x648);
  return;
}



// FUNCTION 142eb0950 thunk_FUN_142eab6b0 body=5 status=ok
// SIG undefined thunk_FUN_142eab6b0(void)

void thunk_FUN_142eab6b0(void)

{
  FUN_142eab6b0();
  return;
}



// FUNCTION 142eb0960 FUN_142eb0960 body=32 status=ok
// SIG undefined FUN_142eb0960(void)

undefined8 FUN_142eb0960(undefined8 param_1,undefined8 param_2)

{
  FUN_142eab740(param_2,param_1);
  return param_1;
}



// FUNCTION 142eb09a0 FUN_142eb09a0 body=63 status=ok
// SIG undefined FUN_142eb09a0(void)

void FUN_142eb09a0(undefined8 *param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)param_1[1];
  local_10 = *(undefined4 *)((undefined8 *)param_1[1] + 1);
  USceneComponent::K2_AttachTo
            (*(undefined8 *)*param_1,&local_18,param_1[2],*(undefined1 *)param_1[3],0);
  return;
}



// FUNCTION 142eb0a50 FUN_142eb0a50 body=77 status=ok
// SIG undefined FUN_142eb0a50(void)

ulonglong FUN_142eb0a50(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x5d8);
  if ((char)uVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
    FUN_142ed95f0(*param_1,uVar3,0);
    LOCK();
    uVar1 = *(uint *)(*param_1 + 0x628);
    *(uint *)(*param_1 + 0x628) = 1;
    uVar2 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 142eb0ac0 FUN_142eb0ac0 body=69 status=ok
// SIG undefined FUN_142eb0ac0(void)

void FUN_142eb0ac0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x5d8);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
    FUN_140483870(lVar1 + 0x8e0,*param_1);
    return;
  }
  return;
}



// FUNCTION 142eb0b70 FUN_142eb0b70 body=49 status=ok
// SIG undefined FUN_142eb0b70(void)

void FUN_142eb0b70(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*param_1);
    FUN_142f11000(uVar2,1);
    return;
  }
  return;
}



// FUNCTION 142eb0c00 FUN_142eb0c00 body=32 status=ok
// SIG undefined FUN_142eb0c00(void)

undefined8 FUN_142eb0c00(undefined8 param_1,undefined8 param_2)

{
  FUN_142ead5b0(param_2,param_1);
  return param_1;
}



// FUNCTION 142eb0ca0 FUN_142eb0ca0 body=32 status=ok
// SIG undefined FUN_142eb0ca0(void)

undefined8 FUN_142eb0ca0(undefined8 param_1,undefined8 param_2)

{
  FUN_142eae3f0(param_2,param_1);
  return param_1;
}



// FUNCTION 142eb0cc0 FUN_142eb0cc0 body=61 status=ok
// SIG undefined FUN_142eb0cc0(void)

void FUN_142eb0cc0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_1420573b0(param_1[1],0);
    FUN_142090ed0(*param_1,1);
                    /* WARNING: Could not recover jumptable at 0x000142eb0cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x298))((longlong *)*param_1,0);
    return;
  }
  return;
}



// FUNCTION 142eb0d20 FUN_142eb0d20 body=32 status=ok
// SIG undefined FUN_142eb0d20(void)

undefined8 FUN_142eb0d20(undefined8 param_1,undefined8 param_2)

{
  FUN_142eae670(param_2,param_1);
  return param_1;
}



// FUNCTION 142eb0d40 FUN_142eb0d40 body=65 status=ok
// SIG undefined FUN_142eb0d40(void)

void FUN_142eb0d40(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(*param_1);
    if (*(char *)(lVar1 + 0xa2) != '\0') {
      uVar2 = FUN_1416f8720(*param_1);
      FUN_142f11000(uVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 142eb0dc0 FUN_142eb0dc0 body=32 status=ok
// SIG undefined FUN_142eb0dc0(void)

undefined8 FUN_142eb0dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_142eaf1e0(param_2,param_1);
  return param_1;
}



// FUNCTION 142eb0de0 FUN_142eb0de0 body=121 status=ok
// SIG undefined FUN_142eb0de0(void)

int FUN_142eb0de0(longlong param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x90) <= 0.0) {
    iVar1 = 0;
  }
  else {
    fVar2 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar2 = fVar2 / *(float *)(param_1 + 0x90);
    iVar1 = (int)ROUND((fVar2 + fVar2) - 0.5) >> 1;
  }
  if (((param_2 != -1) && (param_2 = *(int *)(param_1 + 0x54) * iVar1 + param_2, -1 < param_2)) &&
     (iVar1 = FUN_142eb6360(param_1), param_2 < iVar1)) {
    return param_2;
  }
  return -1;
}



// FUNCTION 142eb0e60 FUN_142eb0e60 body=577 status=ok
// SIG undefined FUN_142eb0e60(void)

void FUN_142eb0e60(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 local_48 [16];
  
  iVar13 = -1;
  iVar15 = 1;
  iVar14 = iVar15;
  if (param_2 != '\x02') {
    if (param_2 != '\x03') {
      return;
    }
    iVar14 = -1;
  }
  lVar1 = param_1[0x9d];
  if (lVar1 != 0) {
    lVar9 = FUN_142f227c0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (0 < (int)param_1[0xd3])) {
      plVar10 = (longlong *)(**(code **)(*param_1 + 0x598))(param_1,local_48);
      iVar16 = 0;
      iVar17 = -1;
      if (0 < *(int *)(lVar1 + 200)) {
        plVar12 = *(longlong **)(lVar1 + 0xc0);
        do {
          iVar17 = iVar16;
          if (*plVar12 == *plVar10) break;
          iVar16 = iVar16 + 1;
          plVar12 = plVar12 + 0xb;
          iVar17 = -1;
        } while (iVar16 < *(int *)(lVar1 + 200));
      }
      iVar16 = (int)param_1[0xd3];
      iVar8 = iVar14;
      if (1 < iVar16) {
        do {
          iVar13 = (iVar8 + iVar16 + iVar17) % iVar16;
          lVar9 = (longlong)iVar13;
          if ((iVar13 < 0) || (*(int *)(lVar1 + 200) <= iVar13)) {
            bVar4 = false;
LAB_142eb0f9c:
            bVar5 = false;
            if (bVar4) goto LAB_142eb0fa4;
          }
          else {
            bVar4 = true;
            if (*(longlong *)(lVar9 * 0x58 + 0x38 + *(longlong *)(lVar1 + 0xc0)) == 0)
            goto LAB_142eb0f9c;
            bVar5 = true;
LAB_142eb0fa4:
            plVar10 = (longlong *)(*(longlong *)(lVar1 + 0xc0) + 0x48 + lVar9 * 0x58);
            if (*plVar10 != 0) {
              lVar11 = AGShrineUsable::GetPrivateStaticClass();
              lVar2 = *plVar10;
              for (lVar3 = lVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
                if (lVar3 == lVar11) {
                  if (lVar2 != 0) {
                    bVar6 = true;
                    goto LAB_142eb0fe0;
                  }
                  break;
                }
              }
            }
          }
          bVar6 = false;
LAB_142eb0fe0:
          if ((bVar4) &&
             (cVar7 = (**(code **)(*param_1 + 0x580))
                                (param_1,lVar9 * 0x58 + *(longlong *)(lVar1 + 0xc0)), cVar7 != '\0')
             ) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (((bVar5) || (bVar6)) && (bVar4)) {
            if ((iVar13 < 0) || (*(int *)(lVar1 + 200) <= iVar13)) goto LAB_142eb104e;
            bVar4 = true;
            goto LAB_142eb1050;
          }
          iVar15 = iVar15 + 1;
          iVar16 = (int)param_1[0xd3];
          iVar8 = iVar8 + iVar14;
        } while (iVar15 < iVar16);
        iVar13 = -1;
      }
LAB_142eb104e:
      bVar4 = false;
LAB_142eb1050:
      if (bVar4) {
        FUN_142eda790(param_1,(longlong)iVar13 * 0x58 + *(longlong *)(lVar1 + 0xc0),param_2);
      }
    }
  }
  return;
}



// FUNCTION 142eb10b0 FUN_142eb10b0 body=246 status=ok
// SIG undefined FUN_142eb10b0(void)

void FUN_142eb10b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  
  iVar1 = *(int *)(param_1 + 0x314);
  lVar2 = *(longlong *)(param_1 + 0x308);
  iVar5 = *(int *)(param_1 + 0x310);
  if (iVar1 < 0) {
    if (iVar5 != 0) {
      lVar2 = lVar2 + 8;
      do {
        FUN_142ea9b10(lVar2 + 0x20);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar2);
        lVar2 = lVar2 + 0x38;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar1 = *(int *)(param_1 + 0x314);
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
    if (iVar1 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(param_1 + 0x308),0);
    }
  }
  else {
    if (iVar5 != 0) {
      lVar2 = lVar2 + 8;
      do {
        FUN_142ea9b10(lVar2 + 0x20);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar2);
        lVar2 = lVar2 + 0x38;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  uVar3 = 0;
  plVar6 = *(longlong **)(param_1 + 0x2c0);
  uVar4 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x2c8) < plVar6) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      if (*plVar6 != 0) {
        (**(code **)(*(longlong *)(*plVar6 + 0x148) + 0x38))();
      }
      plVar6 = plVar6 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 142eb11b0 FUN_142eb11b0 body=113 status=ok
// SIG undefined FUN_142eb11b0(void)

void FUN_142eb11b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  param_1 = param_1 + 0x240;
  cVar3 = FWeakObjectPtr::IsValid(param_1);
  if (cVar3 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1);
    lVar1 = FWeakObjectPtr::Get(lVar1 + 0x59c);
    if (lVar1 != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1);
      lVar1 = FWeakObjectPtr::Get(lVar1 + 0x59c);
      cVar3 = FWeakObjectPtr::IsValid(lVar1 + 0x38);
      if (cVar3 != '\0') {
        uVar2 = FWeakObjectPtr::Get(lVar1 + 0x38);
        FUN_142ee40a0(uVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142eb1230 FUN_142eb1230 body=614 status=ok
// SIG undefined FUN_142eb1230(void)

void FUN_142eb1230(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint local_40;
  undefined8 local_38;
  
  lVar8 = FUN_142eee1b0();
  if (lVar8 == 0) goto LAB_142eb145b;
  if ((*(longlong *)(lVar8 + 0x28) == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
LAB_142eb130e:
    plVar9 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar4 = false;
    bVar10 = true;
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_142eb130e;
    local_70 = *(longlong **)(lVar8 + 0x30);
    local_78 = 0;
    if (local_70 == (longlong *)0x0) {
LAB_142eb12fd:
      plVar9 = &local_78;
      bVar4 = true;
      bVar10 = false;
      lVar8 = local_78;
    }
    else {
      LOCK();
      iVar7 = (int)local_70[1];
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(local_70 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar7 == (int)local_70[1];
        if (bVar10) {
          *(int *)(local_70 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar10) {
          if (local_70 != (longlong *)0x0) {
            local_78 = *(longlong *)(lVar8 + 0x28);
          }
          goto LAB_142eb12fd;
        }
        LOCK();
        iVar7 = (int)local_70[1];
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(local_70 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      plVar9 = &local_78;
      local_70 = (longlong *)0x0;
      bVar4 = true;
      bVar10 = false;
      lVar8 = 0;
    }
  }
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_60;
  if ((bVar10) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_60 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar9 = local_70;
  if ((bVar4) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (lVar8 != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    FUN_1420523e0(lVar8,"focus",&local_58);
    if ((local_40 >> 6 & 1) != 0) {
      (**(code **)(*local_48 + 0x10))(local_48,&local_58,local_38);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
LAB_142eb145b:
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x240);
    *(uint *)(lVar8 + 0x40) = *(uint *)(lVar8 + 0x40) & 0xffffff7f;
  }
  *(undefined1 *)(param_1 + 0x400) = 0;
  return;
}



// FUNCTION 142eb14a0 FUN_142eb14a0 body=83 status=ok
// SIG undefined FUN_142eb14a0(void)

void FUN_142eb14a0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FUN_142ee3c60();
  }
  if (((*(longlong *)(param_1 + 0x520) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x520) + 0xd0), lVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x590) != 0)) {
    FUN_142f021a0(*(longlong *)(param_1 + 0x590),lVar1,0);
  }
  *(undefined1 *)(param_1 + 0x5b0) = 1;
  return;
}



// FUNCTION 142eb1500 FUN_142eb1500 body=99 status=ok
// SIG undefined FUN_142eb1500(void)

void FUN_142eb1500(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x598);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x598);
    lVar3 = FUN_14270bb10(uVar2);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x70) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x70) + 0xb0) != 0)) {
      FUN_140483870(&DAT_1465351a8,param_1);
    }
  }
  return;
}



// FUNCTION 142eb1580 FUN_142eb1580 body=17 status=ok
// SIG undefined FUN_142eb1580(void)

void FUN_142eb1580(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 == 0) {
    return;
  }
  FMediaPlayerFacade::Close(*(undefined8 *)(lVar2 + 0x120));
  if (((*(uint *)(lVar2 + 8) >> 4 & 1) == 0) && (DAT_1468c2185 == '\0')) {
    lVar1 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar1 + 0x30) = 0;
    if (*(int *)(lVar1 + 0x34) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x28,0);
    }
    plVar3 = (longlong *)NewObject<UMediaPlaylist>(lVar2,DAT_146b2a750,0x48,0,0,0);
    *(longlong **)(lVar2 + 200) = plVar3;
    (**(code **)(*plVar3 + 0x38))(plVar3,lVar2,0);
  }
  *(undefined4 *)(lVar2 + 0xd0) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0x140) = 0;
  return;
}



// FUNCTION 142eb15b0 FUN_142eb15b0 body=142 status=ok
// SIG undefined FUN_142eb15b0(void)

void FUN_142eb15b0(longlong param_1)

{
  longlong local_18 [2];
  
  if ((*(longlong *)(param_1 + 400) != 0) && (*(char *)(param_1 + 0x1a0) != '\0')) {
    local_18[1] = 5;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
    FUN_142088910(*(undefined8 *)(param_1 + 400),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x278))(*(longlong **)(param_1 + 0x178),0);
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 142eb1640 FUN_142eb1640 body=99 status=ok
// SIG undefined FUN_142eb1640(void)

undefined8 * FUN_142eb1640(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14598afe0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FText::FText(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142eb16b0 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_14598b008;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142eb1720 FUN_142eb1720 body=133 status=ok
// SIG undefined FUN_142eb1720(void)

undefined8 * FUN_142eb1720(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14598ae78;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)puVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142eb17b0 FUN_142eb17b0 body=138 status=ok
// SIG undefined FUN_142eb17b0(void)

undefined8 * FUN_142eb17b0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14598ae48;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar2 + 0x24) = *(undefined1 *)(param_1 + 0x24);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x38);
    puVar2[7] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(param_1 + 0x40);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142eb1840 FUN_142eb1840 body=81 status=ok
// SIG undefined FUN_142eb1840(void)

void FUN_142eb1840(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14598ae60;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 142eb18a0 FUN_142eb18a0 body=99 status=ok
// SIG undefined FUN_142eb18a0(void)

undefined8 * FUN_142eb18a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14598afb0;
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
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142eb1910 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14598afc8;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142eb1960 FUN_142eb1960 body=2169 status=ok
// SIG undefined FUN_142eb1960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142eb1960(longlong param_1,undefined8 *param_2,void **param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  undefined2 *puVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_298 [32];
  longlong *local_278;
  undefined1 local_270;
  longlong **local_268;
  char local_258;
  ulonglong local_250;
  void *local_248;
  undefined8 local_240;
  longlong local_238;
  longlong *plStack_230;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong local_210;
  ulonglong local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  void **local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong *plStack_1c8;
  undefined2 *local_1c0;
  int local_1b8;
  undefined8 local_1b0;
  undefined1 local_198 [128];
  longlong local_118;
  undefined8 local_110;
  undefined1 local_f8 [128];
  longlong local_78;
  char *local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_250 = local_250 & 0xffffffff00000000;
  local_248 = (void *)0x0;
  local_240 = 0;
  local_238 = 0;
  plStack_230 = (longlong *)0x0;
  local_1d8 = param_2;
  if (*param_4 != 0) {
    local_218 = param_4;
    local_1e0 = param_3;
    lVar8 = URemnantGameInstance::GetPrivateStaticClass();
    for (lVar17 = *param_4; lVar17 != 0; lVar17 = *(longlong *)(lVar17 + 0x30)) {
      if (lVar17 == lVar8) {
        if (*param_4 != 0) {
          lVar17 = -1;
          LOCK();
          bVar23 = *(int *)(param_1 + 0x308) == 0;
          if (bVar23) {
            *(int *)(param_1 + 0x308) = 0;
          }
          lVar8 = DAT_146b3dd60;
          UNLOCK();
          if (bVar23) {
            cVar4 = FUN_1415ad720(&DAT_1468e2448);
            if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
               (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
              lVar19 = 1;
            }
            else {
              lVar19 = 0;
            }
            if (*(int *)(lVar8 + lVar19 * 4) != 0) goto LAB_142eb1a65;
            iVar6 = *(int *)(param_1 + 0x290);
            iVar21 = 0;
            local_258 = '\0';
          }
          else {
LAB_142eb1a65:
            iVar6 = -1;
            iVar21 = *(int *)(param_1 + 0x290) + -1;
            local_258 = '\x01';
          }
          uVar20 = (ulonglong)iVar6;
          lVar8 = (longlong)iVar21;
          local_250 = uVar20;
          if (lVar8 != uVar20) {
            plVar13 = (longlong *)(param_1 + 0x288);
            lVar19 = lVar8 << 5;
            do {
              lVar14 = *plVar13;
              if (*(longlong *)(lVar19 + 0x18 + lVar14) != 0) {
                if (*(int *)(lVar19 + 8 + lVar14) == 0) {
                  puVar22 = &DAT_143f3eda8;
                }
                else {
                  puVar22 = *(undefined2 **)(lVar19 + lVar14);
                }
                iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar22);
                uVar20 = local_250;
                if (iVar6 == 0) {
                  lVar14 = *plVar13;
                  if (*(longlong *)(lVar14 + 0x10 + lVar19) != 0) {
                    lVar9 = URemnantGameInstance::GetPrivateStaticClass();
                    lVar14 = *(longlong *)(lVar14 + 0x10 + lVar19);
                    for (lVar11 = lVar14; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
                      if (lVar11 == lVar9) goto LAB_142eb1b10;
                    }
                  }
                  lVar14 = 0;
LAB_142eb1b10:
                  if (*local_218 != 0) {
                    lVar10 = URemnantGameInstance::GetPrivateStaticClass();
                    lVar11 = *local_218;
                    for (lVar9 = lVar11; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
                      if (lVar9 == lVar10) goto LAB_142eb1b41;
                    }
                  }
                  lVar11 = 0;
LAB_142eb1b41:
                  uVar20 = local_250;
                  if (lVar14 == lVar11) {
                    lVar17 = (longlong)iVar21 * 0x20;
                    lVar8 = *plVar13 + lVar17;
                    FString::operator=(&local_248,lVar8);
                    uVar2 = *(undefined8 *)(lVar8 + 0x10);
                    plVar12 = *(longlong **)(lVar8 + 0x18);
                    if (*(longlong *)(lVar17 + *plVar13) != 0) {
                      FMemory::Free();
                    }
                    iVar6 = *(int *)(param_1 + 0x290);
                    iVar7 = (iVar6 - iVar21) + -1;
                    if (iVar7 != 0) {
                      _guard_xfg_dispatch_icall_nop
                                ((void *)(*plVar13 + lVar17),
                                 (void *)((longlong)(iVar21 + 1) * 0x20 + *plVar13),
                                 (longlong)iVar7 << 5);
                      iVar6 = *(int *)(param_1 + 0x290);
                    }
                    *(int *)(param_1 + 0x290) = iVar6 + -1;
                    TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar13);
                    FUN_142ee17b0(param_1,plVar12);
                    if (((int)plVar12[0x34] == 0) && (*(int *)((longlong)plVar12 + 0x1a4) == 0)) {
                      bVar23 = true;
                    }
                    else {
                      bVar23 = false;
                    }
                    if (bVar23) {
                      plVar12[0x34] = *(longlong *)(param_1 + 600);
                    }
                    if (((int)plVar12[0x35] == 0) && (*(int *)((longlong)plVar12 + 0x1ac) == 0)) {
                      bVar23 = true;
                    }
                    else {
                      bVar23 = false;
                    }
                    if (bVar23) {
                      plVar12[0x35] = *(longlong *)(param_1 + 0x260);
                    }
                    (**(code **)(*plVar12 + 0x280))(plVar12);
                    *(undefined1 *)(plVar12 + 0x4a) = *(undefined1 *)(param_1 + 0x1c8);
                    *(undefined1 *)((longlong)plVar12 + 0x251) = *(undefined1 *)(param_1 + 0x1c9);
                    *local_1d8 = local_248;
                    *(undefined4 *)(local_1d8 + 1) = (undefined4)local_240;
                    *(undefined4 *)((longlong)local_1d8 + 0xc) = local_240._4_4_;
                    local_1d8[2] = uVar2;
                    local_1d8[3] = plVar12;
                    return local_1d8;
                  }
                }
              }
              if (local_258 == '\0') {
                iVar6 = 1;
                lVar11 = 0x20;
                lVar14 = 1;
              }
              else {
                lVar11 = -0x20;
                lVar14 = lVar17;
                iVar6 = -1;
              }
              lVar8 = lVar8 + lVar14;
              lVar19 = lVar19 + lVar11;
              iVar21 = iVar21 + iVar6;
              param_3 = local_1e0;
            } while (lVar8 != uVar20);
          }
          local_1f0 = 0;
          if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142eb1d3e:
            plVar13 = &local_1d0;
            local_1d0 = 0;
            plStack_1c8 = (longlong *)0x0;
            bVar3 = false;
            bVar23 = true;
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
            if (iVar6 < 1) goto LAB_142eb1d3e;
            local_220 = *(longlong **)(param_1 + 0x30);
            bVar3 = true;
            bVar23 = false;
            local_228 = 0;
            if (local_220 == (longlong *)0x0) {
LAB_142eb1c01:
              local_1f0 = 0;
              plVar13 = &local_228;
            }
            else {
              LOCK();
              iVar6 = (int)local_220[1];
              bVar24 = iVar6 == 0;
              if (bVar24) {
                *(int *)(local_220 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
              while( true ) {
                if (bVar24) {
                  local_220 = (longlong *)0x0;
                  goto LAB_142eb1c01;
                }
                LOCK();
                bVar24 = iVar6 == (int)local_220[1];
                if (bVar24) {
                  *(int *)(local_220 + 1) = iVar6 + 1;
                }
                UNLOCK();
                if (bVar24) break;
                LOCK();
                iVar6 = (int)local_220[1];
                bVar24 = iVar6 == 0;
                if (bVar24) {
                  *(int *)(local_220 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
              }
              local_1f0 = *(longlong *)(param_1 + 0x28);
              plVar13 = &local_228;
              local_228 = local_1f0;
            }
          }
          plVar12 = (longlong *)plVar13[1];
          plVar13[1] = 0;
          plVar18 = plStack_1c8;
          local_1e8 = plVar12;
          *plVar13 = 0;
          if ((bVar23) && (plStack_1c8 != (longlong *)0x0)) {
            LOCK();
            plVar13 = plStack_1c8 + 1;
            lVar8 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_1c8)(plStack_1c8);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plStack_1c8 + 8))(plStack_1c8,1);
              }
            }
          }
          plVar13 = local_220;
          if ((bVar3) && (local_220 != (longlong *)0x0)) {
            LOCK();
            plVar12 = local_220 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_220)(local_220);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_220 + 8))(local_220,1);
              }
            }
          }
          if (local_1f0 != 0) {
            if (&local_248 != param_3) {
              iVar6 = *(int *)(param_3 + 1);
              _Src = *param_3;
              local_240 = CONCAT44(local_240._4_4_,iVar6);
              if (iVar6 == 0) {
                local_240 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,iVar6,0);
                _guard_xfg_dispatch_icall_nop(local_248,_Src,(longlong)iVar6 * 2);
              }
            }
            plVar13 = local_218;
            local_238 = *local_218;
            FString::PrintfImpl(&local_1c0,L"Cell%d",*(undefined4 *)(param_1 + 0x2b0));
            puVar22 = &DAT_143f3eda8;
            puVar15 = &DAT_143f3eda8;
            if (local_1b8 != 0) {
              puVar15 = local_1c0;
            }
            TStringConversion<TStringConvert<wchar_t,char>,128>::
            TStringConversion<TStringConvert<wchar_t,char>,128>(local_f8,puVar15);
            local_210 = 0;
            local_208 = 0;
            if ((local_70 != (char *)0x0) && (*local_70 != '\0')) {
              do {
                lVar17 = lVar17 + 1;
              } while (local_70[lVar17] != '\0');
              uVar16 = (int)lVar17 + 1;
              local_208 = (ulonglong)uVar16;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
              }
              local_278 = (longlong *)CONCAT62(local_278._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_210,uVar16,local_70,uVar16);
            }
            if (*(int *)(param_3 + 1) != 0) {
              puVar22 = *param_3;
            }
            TStringConversion<TStringConvert<wchar_t,char>,128>::
            TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar22);
            if (*plVar13 == 0) {
LAB_142eb1f22:
              lVar17 = 0;
            }
            else {
              lVar19 = URemnantGameInstance::GetPrivateStaticClass();
              lVar17 = *plVar13;
              lVar8 = lVar17;
              while( true ) {
                if (lVar8 == 0) goto LAB_142eb1f22;
                if (lVar8 == lVar19) break;
                lVar8 = *(longlong *)(lVar8 + 0x30);
              }
            }
            plVar13 = *(longlong **)(local_1f0 + 0x80);
            local_1b0 = *(undefined8 *)(local_1f0 + 0x78);
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
            }
            local_268 = &local_200;
            local_200 = (longlong *)0x0;
            local_278 = &local_210;
            local_270 = 6;
            local_1f8 = 0;
            plVar12 = (longlong *)FUN_14202a0e0(local_1b0,lVar17,param_1,local_110);
            if (plVar12 == (longlong *)0x0) {
LAB_142eb1fb8:
              plVar12 = (longlong *)0x0;
            }
            else {
              lVar17 = URemnantGameInstance::GetPrivateStaticClass();
              if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
                  lVar17 + 0x88)) {
                bVar23 = false;
              }
              else {
                bVar23 = true;
              }
              if (!bVar23) goto LAB_142eb1fb8;
            }
            plVar18 = local_200;
            for (iVar6 = (int)local_1f8; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (*plVar18 != 0) {
                FMemory::Free();
              }
              plVar18 = plVar18 + 2;
            }
            if (local_200 != (longlong *)0x0) {
              FMemory::Free(local_200);
            }
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar18 = plVar13 + 1;
              lVar17 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            plStack_230 = plVar12;
            if (local_118 != 0) {
              FMemory::Free();
            }
            if (local_210 != 0) {
              FMemory::Free();
            }
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (plVar12 != (longlong *)0x0) {
              *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + 1;
              plVar13 = *(longlong **)(param_1 + 0x38);
              if (plVar13 == (longlong *)0x0) {
LAB_142eb20a9:
                plVar13 = (longlong *)0x0;
              }
              else {
                lVar17 = UInputKeySelector::GetPrivateStaticClass();
                if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
                    lVar17 + 0x88)) {
                  bVar23 = false;
                }
                else {
                  bVar23 = true;
                }
                if (!bVar23) goto LAB_142eb20a9;
              }
              FWeakObjectPtr::operator=(plVar12 + 0x48,plVar13);
              plVar12[0x59] = param_1;
              if (((int)plVar12[0x34] == 0) && (*(int *)((longlong)plVar12 + 0x1a4) == 0)) {
                bVar23 = true;
              }
              else {
                bVar23 = false;
              }
              if (bVar23) {
                plVar12[0x34] = *(longlong *)(param_1 + 600);
              }
              if (((int)plVar12[0x35] == 0) && (*(int *)((longlong)plVar12 + 0x1ac) == 0)) {
                bVar23 = true;
              }
              else {
                bVar23 = false;
              }
              if (bVar23) {
                plVar12[0x35] = *(longlong *)(param_1 + 0x260);
              }
              (**(code **)(*plVar12 + 0x280))(plVar12);
              *(undefined1 *)(plVar12 + 0x4a) = *(undefined1 *)(param_1 + 0x1c8);
              *(undefined1 *)((longlong)plVar12 + 0x251) = *(undefined1 *)(param_1 + 0x1c9);
            }
            if (local_1c0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          plVar13 = local_1e8;
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_1e8 + 1;
            lVar17 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_1e8)(local_1e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_1e8 + 8))(local_1e8,1);
              }
            }
          }
        }
        break;
      }
    }
  }
  *local_1d8 = local_248;
  *(undefined4 *)(local_1d8 + 1) = (undefined4)local_240;
  *(undefined4 *)((longlong)local_1d8 + 0xc) = local_240._4_4_;
  local_1d8[2] = local_238;
  local_1d8[3] = plStack_230;
  return local_1d8;
}



// FUNCTION 142eb21e0 FUN_142eb21e0 body=1681 status=ok
// SIG undefined FUN_142eb21e0(void)

void FUN_142eb21e0(short *param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  int iVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  int local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  short *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  short *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  plVar9 = (longlong *)0x0;
  puVar16 = &DAT_143f3eda8;
  if ((*(longlong *)(param_1 + 0x34c) != 0) && (lVar3 = FUN_142eb6240(), lVar3 != 0)) {
    iVar12 = *(int *)(lVar3 + 0x30);
    cVar1 = FText::IsEmptyOrWhitespace(lVar3 + 0x38);
    if (cVar1 == '\0') {
      iVar12 = iVar12 + 1;
    }
    if (iVar12 < 1) {
      iVar15 = 1;
    }
    else {
      iVar15 = 8;
      if (iVar12 < 8) {
        iVar15 = iVar12;
      }
    }
    FString::PrintfImpl(&local_c8,L"%dentries",iVar15);
    local_e0 = (undefined1 *)0x0;
    psVar14 = &DAT_143f3eda8;
    if ((int)local_c0 != 0) {
      psVar14 = local_c8;
    }
    local_e8 = (short *)0x0;
    if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (psVar14[lVar3] != 0);
      uVar13 = (int)lVar3 + 1;
      local_e0 = (undefined1 *)(ulonglong)uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      }
      FGenericPlatformString::Memcpy(local_e8,psVar14,(longlong)(int)uVar13 * 2);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x34c),&local_e8);
    if (local_e8 != (short *)0x0) {
      FMemory::Free();
    }
    if (local_c8 != (short *)0x0) {
      FMemory::Free();
    }
  }
  FUN_142ed4970(param_1);
  if (*(int *)(param_1 + 0x27c) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = *(undefined2 **)(param_1 + 0x278);
  }
  FName::FName(local_a8,puVar11,1);
  if (*(int *)(param_1 + 0x284) != 0) {
    puVar16 = *(undefined2 **)(param_1 + 0x280);
  }
  FName::FName(local_a0,puVar16,1);
  local_b8 = 0;
  local_b0 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"BTN_ContextualMenu",0x26);
  lVar3 = *(longlong *)(param_1 + 0x274);
  local_e0 = local_a8;
  local_d8 = local_a0;
  local_c0 = &local_b8;
  plVar17 = plVar9;
  local_e8 = param_1;
  local_c8 = param_1;
  if (lVar3 != 0) {
    lVar4 = FUN_142f1bdf0();
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
      plVar17 = (longlong *)(lVar3 + 0xc0);
    }
  }
  if ((*(longlong *)(param_1 + 0x34c) == 0) || (plVar17 == (longlong *)0x0)) goto LAB_142eb2832;
  if (*(char *)((longlong)plVar17 + 0xc) == '\0') {
LAB_142eb2414:
    if ((char)plVar17[3] == '\0') {
LAB_142eb2426:
      uVar8 = FUN_14113c510(*(longlong *)(param_1 + 0x34c),&local_b8,0);
      fVar18 = *(float *)(*(longlong *)(param_1 + 0x34c) + 0x2f4);
      FUN_142ed0bb0(*(longlong *)(param_1 + 0x34c),uVar8,0);
      iVar12 = (int)plVar17[6];
      cVar1 = FText::IsEmptyOrWhitespace(plVar17 + 7);
      if (cVar1 == '\0') {
        iVar12 = iVar12 + 1;
      }
      fVar18 = (float)iVar12 * fVar18;
      local_res18 = CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)plVar17 + 4) >> 0x20) +
                             fVar18,(int)*(undefined8 *)((longlong)plVar17 + 4));
      local_res20 = CONCAT44((float)((ulonglong)plVar17[2] >> 0x20) - fVar18,(int)plVar17[2]);
      puVar10 = (undefined8 *)FUN_142edb0b0(param_1,&local_res8,&local_res18);
      local_res18 = *puVar10;
      puVar10 = (undefined8 *)FUN_142edb0b0(param_1,&local_res8,&local_res20);
      local_res20 = *puVar10;
      fVar18 = DAT_1468b5d88._4_4_;
      if (*(longlong *)(param_1 + 0x218) != 0) {
        FUN_142dcfa20(*(longlong *)(param_1 + 0x218),local_res10,&local_res8);
        fVar18 = (float)local_res8;
      }
      lVar3 = FUN_142eb8d60(param_1,&local_res8);
      fVar19 = fVar18 - local_res20._4_4_;
      fVar18 = local_res18._4_4_ - (fVar18 + *(float *)(lVar3 + 4));
      if (*(byte *)((longlong)plVar17 + 1) < 2) {
        if (0.0 <= fVar18) {
          if (0.0 <= fVar19) {
            bVar2 = fVar19 < fVar18;
LAB_142eb2584:
            cVar1 = bVar2 + '\x01';
            goto LAB_142eb2586;
          }
          *(undefined1 *)(param_1 + 0x354) = 2;
        }
        else {
          *(undefined1 *)(param_1 + 0x354) = 1;
        }
      }
      else if (*(byte *)((longlong)plVar17 + 1) == 2) {
        if (0.0 <= fVar19) {
          if (0.0 <= fVar18) {
            bVar2 = fVar19 <= fVar18;
            goto LAB_142eb2584;
          }
          cVar1 = '\x01';
        }
        else {
          cVar1 = '\x02';
        }
LAB_142eb2586:
        *(char *)(param_1 + 0x354) = cVar1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x354) = 2;
    }
  }
  else {
    if ((char)plVar17[3] != '\0') {
      if (*(char *)((longlong)plVar17 + 0xc) == '\0') goto LAB_142eb2414;
      goto LAB_142eb2426;
    }
    *(undefined1 *)(param_1 + 0x354) = 1;
  }
  if ((char)param_1[0x354] == '\x02') {
    lVar3 = plVar17[5];
    lVar4 = (longlong)(int)plVar17[6] * 0x20 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      uVar8 = *(undefined8 *)(param_1 + 0x34c);
      uVar5 = URemnantGameInstance::GetPrivateStaticClass();
      lVar6 = FUN_142ebd220(uVar8,0,&local_b8,uVar5);
      if (lVar6 != 0) {
        lVar7 = URemnantGameInstance::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar8 = FName::FName(&local_res8,L"OnContextualMenuItemClicked",1);
          FUN_142eaaa00(&local_e8,lVar6,lVar3,uVar8);
        }
      }
    }
    FUN_142eade20(&local_c8,plVar17 + 7,plVar17 + 10);
  }
  else {
    FUN_142eade20(&local_c8,plVar17 + 7,plVar17 + 10);
    lVar3 = plVar17[5];
    lVar4 = (longlong)(int)plVar17[6] * 0x20 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      uVar8 = *(undefined8 *)(param_1 + 0x34c);
      uVar5 = URemnantGameInstance::GetPrivateStaticClass();
      lVar6 = FUN_142ebcee0(uVar8,&local_b8,uVar5,0);
      if (lVar6 != 0) {
        lVar7 = URemnantGameInstance::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FName::FName(&local_res8,L"OnContextualMenuItemClicked",1);
          FUN_142eaaa00(&local_e8,lVar6,lVar3);
        }
      }
    }
  }
  local_e8 = (short *)0x0;
  local_e0 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  FWeakObjectPtr::operator=(&local_e8,0);
  FWeakObjectPtr::operator=(&local_e0,0);
  FWeakObjectPtr::operator=(&local_d8,0);
  FWeakObjectPtr::operator=(&local_d0,0);
  psVar14 = *(short **)(param_1 + 0x34c);
  local_c8 = psVar14;
  if (psVar14 != (short *)0x0) {
    uVar8 = UBlendableInterface::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(psVar14,uVar8);
  }
  local_c0 = plVar9;
  FUN_142ecfd10(param_1,&local_c8,&local_e8);
  lVar3 = *(longlong *)(param_1 + 0x34c);
  if (lVar3 != 0) {
    uVar8 = UBlendableInterface::GetPrivateStaticClass();
    UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar8);
  }
  if (*(longlong *)(param_1 + 0x2d4) != 0) {
    FUN_142f0d400(*(longlong *)(param_1 + 0x2d4),lVar3,0);
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_68 = 0;
  local_58 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_88);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_1444f8920;
    puVar10[1] = param_1;
    *(int *)(puVar10 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_resc;
  }
  local_98[0] = &LAB_142eb0bc0;
  FUN_14204c280(local_98);
LAB_142eb2832:
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142eb2880 FUN_142eb2880 body=107 status=ok
// SIG undefined FUN_142eb2880(void)

void FUN_142eb2880(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14598af20;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_14598af68;
  }
  return;
}



// FUNCTION 142eb28f0 FUN_142eb28f0 body=107 status=ok
// SIG undefined FUN_142eb28f0(void)

void FUN_142eb28f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14598ae90;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_14598aed8;
  }
  return;
}



// FUNCTION 142eb2960 FUN_142eb2960 body=60 status=ok
// SIG undefined FUN_142eb2960(void)

void FUN_142eb2960(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14598ae08;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 142eb29a0 FUN_142eb29a0 body=948 status=ok
// SIG undefined FUN_142eb29a0(void)

longlong FUN_142eb29a0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_58 [8];
  int local_50;
  longlong local_48;
  longlong local_40;
  
  (**(code **)(*param_1 + 0x298))(param_1,local_58);
  lVar3 = FWeakObjectPtr::Get(local_58);
  lVar8 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != local_50) && (local_48 != 0)) {
      lVar3 = FUN_141796df0(&local_48);
      FWeakObjectPtr::operator=(local_58,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_50 = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(local_58);
      if (lVar3 != 0) goto LAB_142eb2a40;
    }
  }
  else {
LAB_142eb2a40:
    lVar4 = FUN_14171bfe0();
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
      lVar4 = UInputKeySelector::GetPrivateStaticClass();
      do {
        if (lVar3 == lVar4) goto LAB_142eb2ae4;
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  lVar3 = FUN_1405ec200(local_58);
  if (lVar3 != 0) {
    lVar4 = FUN_14171bfe0();
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
      lVar4 = UInputKeySelector::GetPrivateStaticClass();
      do {
        if (lVar3 == lVar4) break;
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
LAB_142eb2ae4:
  lVar3 = FWeakObjectPtr::Get(local_58);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    lVar4 = lVar8;
    if ((DAT_1464b56f4 == local_50) || (local_48 == 0)) goto LAB_142eb2d29;
    lVar3 = FUN_141796df0(&local_48);
    FWeakObjectPtr::operator=(local_58,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_50 = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(local_58);
    if (lVar3 == 0) goto LAB_142eb2d29;
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
  lVar4 = 0;
  if (bVar2) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    do {
      if (lVar3 == lVar5) {
        lVar4 = FWeakObjectPtr::Get(local_58);
        lVar3 = lVar8;
        if (lVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == local_50) || (local_48 == 0)) goto LAB_142eb2c91;
          lVar4 = FUN_141796df0(&local_48);
          FWeakObjectPtr::operator=(local_58,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_50 = DAT_1464b56f4;
          }
          lVar4 = FWeakObjectPtr::Get(local_58);
          if (lVar4 == 0) goto LAB_142eb2c91;
        }
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
        if (!bVar2) goto LAB_142eb2c91;
        lVar6 = UInputKeySelector::GetPrivateStaticClass();
        lVar5 = lVar4;
        goto LAB_142eb2c80;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_142eb2d29:
  if (local_40 != 0) {
    FMemory::Free();
  }
  return lVar4;
  while (lVar5 = *(longlong *)(lVar5 + 0x30), lVar3 = lVar8, lVar5 != 0) {
LAB_142eb2c80:
    lVar3 = lVar4;
    if (lVar5 == lVar6) break;
  }
LAB_142eb2c91:
  uVar7 = GetTransientPackage();
  FUN_1417846f0(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar4 = FUN_1417985e0(lVar3,uVar7,0,0,0,0,0,0,0);
  if (lVar4 != 0) {
    iVar1 = (int)param_1[0x17];
    *(int *)(param_1 + 0x17) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xbc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar1);
    }
    *(longlong *)(param_1[0x16] + (longlong)iVar1 * 8) = lVar4;
  }
  goto LAB_142eb2d29;
}



// FUNCTION 142eb2d60 FUN_142eb2d60 body=129 status=ok
// SIG undefined FUN_142eb2d60(void)

undefined8 * FUN_142eb2d60(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x4e8);
  if (lVar3 != 0) {
    lVar2 = FUN_142f227c0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142eb2db1;
  }
  lVar3 = 0;
LAB_142eb2db1:
  *param_2 = 0;
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 200))) {
    *param_2 = **(undefined8 **)(lVar3 + 0xc0);
  }
  return param_2;
}



// FUNCTION 142eb2df0 FUN_142eb2df0 body=973 status=ok
// SIG undefined FUN_142eb2df0(void)

/* WARNING: Removing unreachable block (ram,0x000142eb3048) */
/* WARNING: Removing unreachable block (ram,0x000142eb2f3b) */
/* WARNING: Removing unreachable block (ram,0x000142eb3148) */

undefined8 * FUN_142eb2df0(longlong param_1,undefined8 *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  
  if ((param_3 == '\x05') || (param_3 == '\x02')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((param_3 == '\x06') || (param_3 == '\x03')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_3 == '\a') || (param_3 == '\x04')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar1 = (byte)(param_3 - 5U) < 3;
  if (*(char *)(param_1 + 0x2c5) == '\x01') {
    if (bVar2) {
      pwVar7 = L"lockedUp";
      if (bVar1) {
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
    else if (bVar4) {
      pwVar7 = L"lockedOver";
      if (bVar1) {
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
    else if (bVar3) {
      pwVar7 = L"lockedDown";
      if (bVar1) {
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
      if (param_3 != '\x01') goto LAB_142eb31a1;
      pwVar7 = L"lockedDisabled";
      *param_2 = 0;
      param_2[1] = 0;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (L"lockedDisabled"[lVar6] != L'\0');
    }
  }
  else if (*(char *)(param_1 + 0x2c6) == '\x01') {
    if (bVar2) {
      pwVar7 = L"checkedUp";
      if (bVar1) {
        pwVar7 = L"checkedFocusedUp";
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
    else if (bVar4) {
      pwVar7 = L"checkedOver";
      if (bVar1) {
        pwVar7 = L"checkedFocusedOver";
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
    else if (bVar3) {
      pwVar7 = L"checkedDown";
      if (bVar1) {
        pwVar7 = L"checkedFocusedDown";
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
      if (param_3 != '\x01') goto LAB_142eb31a1;
      pwVar7 = L"checkedDisabled";
      *param_2 = 0;
      param_2[1] = 0;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (L"checkedDisabled"[lVar6] != L'\0');
    }
  }
  else if (bVar2) {
    pwVar7 = L"up";
    if (bVar1) {
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
  else if (bVar4) {
    pwVar7 = L"over";
    if (bVar1) {
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
  else if (bVar3) {
    pwVar7 = L"down";
    if (bVar1) {
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
    if (param_3 != '\x01') {
LAB_142eb31a1:
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    pwVar7 = L"disabled";
    *param_2 = 0;
    param_2[1] = 0;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (L"disabled"[lVar6] != L'\0');
  }
  iVar5 = (int)lVar6 + 1;
  *(int *)(param_2 + 1) = iVar5;
  if (0 < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar7,(longlong)iVar5 * 2);
  return param_2;
}



// FUNCTION 142eb31c0 FUN_142eb31c0 body=414 status=ok
// SIG undefined FUN_142eb31c0(void)

undefined8 * FUN_142eb31c0(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  bVar9 = (byte)(param_3 - 5U) < 3;
  if ((bool)*(char *)(param_1 + 0x328) != bVar9) {
    *(bool *)(param_1 + 0x328) = bVar9;
    cVar4 = FUN_14208d370(param_1,param_1 + 0x308,L"navBarIconOuter");
    if (cVar4 != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x310);
      plVar7 = plVar2;
      plVar8 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
          LOCK();
          bVar9 = iVar5 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar8 = *(longlong **)(param_1 + 0x308);
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      pwVar6 = L"unselected";
      if (*(char *)(param_1 + 0x328) != '\0') {
        pwVar6 = L"selected";
      }
      FUN_14203e4e0(plVar8,pwVar6);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
  }
  if ((byte)(param_3 - 5U) < 3) {
    *param_2 = 0;
    param_2[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"focusedUp",0x14);
    return param_2;
  }
  if (param_3 == '\x01') {
    *param_2 = 0;
    param_2[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"disabled",0x12);
    return param_2;
  }
  FUN_142eb2df0(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 142eb3360 FUN_142eb3360 body=161 status=ok
// SIG undefined FUN_142eb3360(void)

undefined8 FUN_142eb3360(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = DAT_146b3dd00;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  lVar6 = 4;
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar5 = 4;
  }
  else {
    lVar5 = 0;
  }
  lVar2 = DAT_146b3dd30;
  if (*(int *)(lVar5 + lVar1) != 0) {
    return 1;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + lVar2) != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 142eb3410 FUN_142eb3410 body=161 status=ok
// SIG undefined FUN_142eb3410(void)

undefined8 FUN_142eb3410(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = DAT_146b3dd00;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  lVar6 = 4;
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar5 = 4;
  }
  else {
    lVar5 = 0;
  }
  lVar2 = DAT_146b3dd48;
  if (*(int *)(lVar5 + lVar1) != 0) {
    return 1;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + lVar2) != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 142eb34c0 FUN_142eb34c0 body=161 status=ok
// SIG undefined FUN_142eb34c0(void)

undefined8 FUN_142eb34c0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = DAT_146b3dd00;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  lVar6 = 4;
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar5 = 4;
  }
  else {
    lVar5 = 0;
  }
  lVar2 = DAT_146b3dd18;
  if (*(int *)(lVar5 + lVar1) != 0) {
    return 1;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + lVar2) != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 142eb3570 FUN_142eb3570 body=464 status=ok
// SIG undefined FUN_142eb3570(void)

void FUN_142eb3570(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  ulonglong uVar6;
  
  if (param_1[0x9c] != 0) {
    uVar1 = FUN_14203bd30();
    TBaseMulticastDelegate<void>::Remove(uVar1,param_1[0x9c]);
  }
  uVar6 = 0;
  param_1[0x9c] = 0;
  if (param_1[0x9d] != 0) {
    uVar1 = FUN_14203bd20();
    TBaseMulticastDelegate<void>::Remove(uVar1,param_1[0x9d]);
  }
  lVar4 = param_1[0x9e];
  param_1[0x9d] = 0;
  if (lVar4 != 0) {
    plVar2 = (longlong *)FUN_14203bd40();
    uVar8 = uVar6;
    if (0 < (int)plVar2[1]) {
      do {
        plVar7 = (longlong *)(*plVar2 + uVar8);
        if ((((int)plVar7[1] != 0) && (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0)) &&
           (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_res8), *plVar3 == lVar4
           )) {
          if (((int)plVar7[1] != 0) && (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar7 != 0) {
              lVar4 = FMemory::Realloc(*plVar7,0,0);
              *plVar7 = lVar4;
            }
            *(undefined4 *)(plVar7 + 1) = 0;
          }
          break;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar8 = uVar8 + 0x10;
      } while ((int)uVar5 < (int)plVar2[1]);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,0);
  }
  param_1[0x9e] = 0;
  FUN_142ef7f40(param_1 + 0xa5);
  if (param_1[0xb2] != 0) {
    FUN_142ef7f80();
  }
  param_1[0xb2] = 0;
  FUN_142eb1500(param_1);
  FUN_142ed0f70(param_1,1);
  param_1[0xa4] = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xb5) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xb3) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x59c) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xb4) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = local_resc;
                    /* WARNING: Could not recover jumptable at 0x000142eb3739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x280))(param_1);
  return;
}



// FUNCTION 142eb3740 FUN_142eb3740 body=282 status=ok
// SIG undefined FUN_142eb3740(void)

void FUN_142eb3740(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0x3f800000;
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x88);
    FUN_14251b240(uVar1,*(undefined8 *)(param_1 + 0x80),&local_18);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_142aa72a0();
    FUN_1407665e0(*(longlong *)(param_1 + 0x90) + 0x28,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x90) + 0x38,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x90) + 0x48,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x90) + 0x58,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x90) + 0x68,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x90) + 0x78,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x90) + 0x88,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x90) + 0x98,param_1);
    return;
  }
  return;
}



// FUNCTION 142eb3860 FUN_142eb3860 body=36 status=ok
// SIG undefined FUN_142eb3860(void)

void FUN_142eb3860(longlong *param_1)

{
  (**(code **)(*param_1 + 0x518))();
                    /* WARNING: Could not recover jumptable at 0x000142eb387d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x280))(param_1);
  return;
}



// FUNCTION 142eb3890 FUN_142eb3890 body=21 status=ok
// SIG undefined FUN_142eb3890(void)

void FUN_142eb3890(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  FUN_142084500();
  return;
}



// FUNCTION 142eb38b0 FUN_142eb38b0 body=143 status=ok
// SIG undefined FUN_142eb38b0(void)

void FUN_142eb38b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_142f05ef0(param_1,*(longlong *)(param_2 + 0x18),0);
    (**(code **)(**(longlong **)(param_2 + 0x18) + 800))();
  }
  iVar1 = *(int *)(param_1 + 0x290);
  *(int *)(param_1 + 0x290) = iVar1 + 1;
  if (*(int *)(param_1 + 0x294) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x288,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x288);
  FString::FString(lVar2,param_2);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



// FUNCTION 142eb3940 FUN_142eb3940 body=20 status=ok
// SIG undefined FUN_142eb3940(void)

void FUN_142eb3940(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142eaf480(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 142eb3960 FUN_142eb3960 body=44 status=ok
// SIG undefined FUN_142eb3960(void)

void FUN_142eb3960(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ef5430();
  if (cVar1 != '\0') {
    FUN_142ef6530(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  return;
}



// FUNCTION 142eb3990 FUN_142eb3990 body=271 status=ok
// SIG undefined FUN_142eb3990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eb3990(undefined8 param_1)

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
  local_b8[0] = &LAB_142eb07f0;
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



// FUNCTION 142eb3aa0 FUN_142eb3aa0 body=115 status=ok
// SIG undefined FUN_142eb3aa0(void)

void FUN_142eb3aa0(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (((cVar2 != '\0') && (*param_1 != 0)) && (param_1[1] != 0)) {
    local_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0x3f800000;
    uVar1 = FWeakObjectPtr::Get(param_1 + 2);
    FUN_14251b240(uVar1,param_1[1],&local_18);
    uVar1 = FWeakObjectPtr::Get(param_1 + 2);
    FUN_14251fb90(uVar1,param_1[1],*param_1,0);
  }
  return;
}



// FUNCTION 142eb3b20 FUN_142eb3b20 body=234 status=ok
// SIG undefined FUN_142eb3b20(void)

void FUN_142eb3b20(longlong *param_1,int param_2)

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
    plVar7 = (longlong *)(*param_1 + 0x10);
    do {
      plVar4 = (longlong *)plVar7[3];
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
      plVar7 = plVar7 + 0xb;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142eb3c10 FUN_142eb3c10 body=139 status=ok
// SIG undefined FUN_142eb3c10(void)

void FUN_142eb3c10(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x30);
    do {
      if ((int)plVar2[2] != 0) {
        plVar1 = (longlong *)*plVar2;
        if ((longlong *)*plVar2 == (longlong *)0x0) {
          plVar1 = plVar2 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142eb3ca0 FUN_142eb3ca0 body=1148 status=ok
// SIG undefined FUN_142eb3ca0(void)

void FUN_142eb3ca0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined8 local_48 [2];
  
  plVar11 = (longlong *)(param_1 + 0x28);
  plVar17 = (longlong *)0x0;
  plVar5 = *(longlong **)(param_1 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar5[1];
    bVar18 = iVar9 == 0;
    if (bVar18) {
      *(int *)(plVar5 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar18) {
      LOCK();
      bVar18 = iVar9 == (int)plVar5[1];
      if (bVar18) {
        *(int *)(plVar5 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar18) {
        if (plVar5 != (longlong *)0x0) {
          lVar3 = *plVar11;
          if (lVar3 == 0) goto LAB_142eb3f54;
          if (plVar11 != local_58) {
            *plVar11 = 0;
            plVar11 = *(longlong **)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x30) = 0;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          lVar16 = FWeakObjectPtr::Get(param_1 + 0x38);
          if (lVar16 == 0) goto LAB_142eb3f15;
          FUN_142f16320();
          plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar16);
          if (plVar11 == (longlong *)0x0) goto LAB_142eb3f15;
          plVar6 = *(longlong **)(param_1 + 0x48);
          local_78 = (longlong *)0x0;
          plVar15 = plVar6;
          if (plVar6 == (longlong *)0x0) goto LAB_142eb3dc3;
          LOCK();
          iVar9 = (int)plVar6[1];
          bVar18 = iVar9 == 0;
          if (bVar18) {
            *(int *)(plVar6 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
          goto joined_r0x000142eb3da0;
        }
        break;
      }
      LOCK();
      iVar9 = (int)plVar5[1];
      bVar18 = iVar9 == 0;
      if (bVar18) {
        *(int *)(plVar5 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
LAB_142eb3f82:
  lVar16 = *(longlong *)(param_1 + 0x58);
  lVar3 = lVar16 + (longlong)*(int *)(param_1 + 0x60) * 8;
  for (; lVar16 != lVar3; lVar16 = lVar16 + 8) {
    cVar8 = FWeakObjectPtr::IsValid(lVar16);
    if (cVar8 != '\0') {
      lVar12 = FWeakObjectPtr::Get(lVar16);
      if ((param_1 != 0) && (lVar12 = FWeakObjectPtr::Get(lVar12 + 0x210), param_1 == lVar12)) {
        lVar12 = FWeakObjectPtr::Get(lVar16);
        FWeakObjectPtr::operator=(lVar12 + 0x210,0);
        *(undefined8 *)(lVar12 + 0x218) = 0;
      }
      lVar12 = FWeakObjectPtr::Get(lVar16);
      if ((param_1 != 0) && (lVar12 = FWeakObjectPtr::Get(lVar12 + 0x220), param_1 == lVar12)) {
        lVar12 = FWeakObjectPtr::Get(lVar16);
        FWeakObjectPtr::operator=(lVar12 + 0x220,0);
        *(undefined8 *)(lVar12 + 0x228) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 100)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x58,0);
  }
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x50);
  if (cVar8 == '\0') goto LAB_142eb4107;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar13 = FWeakObjectPtr::Get(param_1 + 0x50);
    FUN_142f06340(uVar13,param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  lVar3 = DAT_146b3dce8;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    lVar16 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_142eb40de;
  }
  else {
LAB_142eb40de:
    lVar16 = 0;
  }
  if ((*(int *)(lVar3 + lVar16) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    uVar13 = FWeakObjectPtr::Get(param_1 + 0x50);
    FUN_142f06340(uVar13,param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
LAB_142eb4107:
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
joined_r0x000142eb3da0:
  plVar15 = local_78;
  if (bVar18) goto LAB_142eb3dc3;
  LOCK();
  bVar18 = iVar9 == (int)plVar6[1];
  if (bVar18) {
    *(int *)(plVar6 + 1) = iVar9 + 1;
  }
  UNLOCK();
  if (bVar18) {
    plVar15 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar17 = *(longlong **)(param_1 + 0x40);
    }
    goto LAB_142eb3dc3;
  }
  LOCK();
  iVar9 = (int)plVar6[1];
  bVar18 = iVar9 == 0;
  if (bVar18) {
    *(int *)(plVar6 + 1) = 0;
    iVar9 = 0;
  }
  UNLOCK();
  goto joined_r0x000142eb3da0;
LAB_142eb3dc3:
  if ((param_2 == '\0') || (*(char *)(param_1 + 0x80) == '\0')) {
    pplVar14 = &local_88;
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    bVar7 = false;
    bVar18 = true;
  }
  else {
    local_90 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    pplVar14 = &local_98;
    bVar7 = true;
    bVar18 = false;
    local_78 = plVar17;
    local_98 = plVar17;
  }
  uVar4 = *(undefined1 *)(param_1 + 0x80);
  local_70 = pplVar14[1];
  pplVar14[1] = (longlong *)0x0;
  *pplVar14 = (longlong *)0x0;
  (**(code **)(*plVar11 + 0x10))(plVar11,&local_78,uVar4);
  plVar6 = plStack_80;
  if ((bVar18) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar6 = local_90;
  if ((bVar7) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_68 = plVar17;
  local_60 = plVar15;
  (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar16 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
LAB_142eb3f15:
  if ((undefined8 *)(param_1 + 0x40) != local_48) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    plVar11 = *(longlong **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  FUN_142056670(lVar3,0);
LAB_142eb3f54:
  LOCK();
  plVar11 = plVar5 + 1;
  lVar3 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
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
  goto LAB_142eb3f82;
}



// FUNCTION 142eb4130 FUN_142eb4130 body=49 status=ok
// SIG undefined FUN_142eb4130(void)

void FUN_142eb4130(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_142eb3570(uVar2);
    return;
  }
  return;
}



// FUNCTION 142eb4170 FUN_142eb4170 body=32 status=ok
// SIG undefined FUN_142eb4170(void)

undefined1 FUN_142eb4170(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x5e1) = 1;
  }
  return 0;
}



// FUNCTION 142eb4190 FUN_142eb4190 body=338 status=ok
// SIG undefined FUN_142eb4190(void)

undefined8
FUN_142eb4190(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (((*(longlong *)(param_1 + 8) != 0) && (lVar3 = FWeakObjectPtr::Get(), lVar3 != 0)) &&
     (lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 8)), lVar3 != 0)) {
    local_68 = 0;
    uVar4 = FUN_1404b03b0();
    FText::FText(local_60,uVar4);
    local_68 = *param_2;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_28 = 0;
    FText::operator=(local_60,param_2 + 1);
    local_48 = *(undefined1 *)(param_2 + 4);
    local_44 = *(undefined4 *)((longlong)param_2 + 0x24);
    FUN_142ea9c20(&local_40,param_2 + 5);
    local_28 = *param_4;
    local_30 = param_3;
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar4 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar5 + 0x208))(plVar5,uVar4,&local_68);
    FUN_142ea9b10(&local_40);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_58 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142eb42f0 FUN_142eb42f0 body=154 status=ok
// SIG undefined FUN_142eb42f0(void)

undefined8 FUN_142eb42f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 8));
      if (lVar1 != 0) {
        local_18 = param_2;
        local_10 = param_3;
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,&local_18);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142eb4390 FUN_142eb4390 body=311 status=ok
// SIG undefined FUN_142eb4390(void)

undefined8 FUN_142eb4390(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FWeakObjectPtr::Get();
    if (lVar4 != 0) {
      lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(param_1 + 8));
      if (lVar4 != 0) {
        FName::FName(local_40,&DAT_143f3eda8,1);
        local_34 = 0;
        local_38 = 0xffffffff;
        FName::FName(local_30,&DAT_143f3eda8,1);
        local_18 = 0;
        local_28 = 0;
        plStack_20 = (longlong *)0x0;
        local_48 = param_2;
        FUN_140ed08a0(local_40,param_3);
        plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
        uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,&local_48);
        plVar5 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_20)(plStack_20);
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
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142eb44d0 FUN_142eb44d0 body=20 status=ok
// SIG undefined FUN_142eb44d0(void)

undefined1 FUN_142eb44d0(longlong param_1)

{
  FUN_142eacd50(param_1 + 8);
  return 1;
}



// FUNCTION 142eb44f0 FUN_142eb44f0 body=46 status=ok
// SIG undefined FUN_142eb44f0(void)

undefined1 FUN_142eb44f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_142eb3570(uVar2);
  }
  return 1;
}



// FUNCTION 142eb4520 FUN_142eb4520 body=174 status=ok
// SIG undefined FUN_142eb4520(void)

void FUN_142eb4520(longlong param_1)

{
  longlong local_18 [2];
  
  if (((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_1 + 400) != 0)) &&
     (*(char *)(param_1 + 0x1a0) == '\0')) {
    FUN_142ed4250(*(longlong *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x178));
    local_18[1] = 5;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 400),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x278))(*(longlong **)(param_1 + 0x178),1);
    *(undefined1 *)(param_1 + 0x1a0) = 1;
  }
  return;
}



// FUNCTION 142eb45d0 FUN_142eb45d0 body=605 status=ok
// SIG undefined FUN_142eb45d0(void)

void FUN_142eb45d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [16];
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((*(longlong *)(param_1 + 0x318) != 0) &&
     (cVar4 = (**(code **)(*(longlong *)(param_1 + 0x170) + 0x40))(), cVar4 != '\0')) {
    FUN_142eb4520(*(undefined8 *)(param_1 + 0x318));
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x240);
    if (cVar4 != '\0') {
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x318) + 0x198);
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x240);
      puVar6 = (undefined8 *)
               TScriptInterface<IBlendableInterface>::
               TScriptInterface<IBlendableInterface><UMaterialInterface>(local_88,uVar8);
      if (*(longlong *)(lVar5 + 0x5a8) != 0) {
        FUN_142f0d400(*(longlong *)(lVar5 + 0x5a8),*puVar6,0);
      }
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x240);
      local_a8 = 0;
      local_a0 = 0;
      lVar5 = *plVar7;
      puVar6 = (undefined8 *)FName::FName(local_res10,"Navigate",1);
      (**(code **)(lVar5 + 0x4e8))(plVar7,*puVar6,&local_a8);
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x240);
      FWeakObjectPtr::operator=(&local_res8,param_1);
      puVar6 = (undefined8 *)FUN_140ad4c90(uVar8,local_98);
      uVar8 = *puVar6;
      plVar7 = (longlong *)puVar6[1];
      puVar6[1] = 0;
      *puVar6 = 0;
      local_48 = 0;
      local_38 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_68);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_14598afb0;
        puVar6[1] = param_1;
        *(undefined4 *)(puVar6 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
        puVar6[3] = uVar8;
        puVar6[4] = plVar7;
        plVar7 = (longlong *)0x0;
      }
      local_78[0] = &LAB_142eb0da0;
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x240);
      FUN_14208c4f0(uVar8,local_78);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
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
      if (local_90 != (longlong *)0x0) {
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
    }
  }
  return;
}



// FUNCTION 142eb4830 FUN_142eb4830 body=355 status=ok
// SIG undefined FUN_142eb4830(void)

ulonglong FUN_142eb4830(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ulonglong in_RAX;
  longlong *plVar7;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  if (((*(int *)(param_1 + 0x4d0) != 0) && (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x18))(), (char)in_RAX != '\0')) {
    plVar3 = (longlong *)param_3[2];
    local_38 = *param_3;
    local_30 = param_3[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x4d0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x4c8);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_28 = plVar3;
    bVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,param_2,&local_38,param_4);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar3 = (longlong *)param_3[2];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    return (ulonglong)bVar5;
  }
  plVar3 = (longlong *)param_3[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    uVar6 = (int)lVar4 - 1;
    in_RAX = (ulonglong)uVar6;
    if (uVar6 == 0) {
      in_RAX = (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        in_RAX = (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142eb49a0 FUN_142eb49a0 body=139 status=ok
// SIG undefined FUN_142eb49a0(void)

longlong * FUN_142eb49a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    lVar3 = FUN_142f227c0();
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
      plVar4 = *(longlong **)(lVar1 + 0xc0);
      plVar5 = plVar4 + (longlong)*(int *)(lVar1 + 200) * 0xb;
      if (plVar4 != plVar5) {
        do {
          if (*plVar4 == *param_2) {
            return plVar4;
          }
          plVar4 = plVar4 + 0xb;
        } while (plVar4 != plVar5);
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142eb4a30 FUN_142eb4a30 body=62 status=ok
// SIG undefined FUN_142eb4a30(void)

ulonglong FUN_142eb4a30(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    if ((*(int *)(uVar1 + 0x90) < *(int *)(param_2 + 0x90)) ||
       (uVar1 = *(ulonglong *)(uVar1 + 0x88),
       *(longlong *)(uVar1 + (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
      in_RAX = uVar1 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar1 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142eb4a70 FUN_142eb4a70 body=309 status=ok
// SIG undefined FUN_142eb4a70(void)

void FUN_142eb4a70(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x2b0))();
  cVar1 = (char)param_1[0x48];
  if (cVar1 == '\0') {
    FUN_142ebe780(param_1,lVar3);
    return;
  }
  if (cVar1 == '\x02') {
    iVar2 = 0;
    if (0 < (int)param_1[0x50]) {
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar4 + 0x18 + param_1[0x4f]) != 0) {
          FUN_142ebe780(param_1);
        }
        iVar2 = iVar2 + 1;
        lVar4 = lVar4 + 0x20;
      } while (iVar2 < (int)param_1[0x50]);
    }
  }
  else {
    if (cVar1 != '\x03') {
      return;
    }
    iVar2 = (int)param_1[0x50];
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        if (*(longlong *)((longlong)(iVar2 - iVar5) * 0x20 + -8 + param_1[0x4f]) != 0) {
          FUN_142ebe780(param_1);
        }
        iVar2 = (int)param_1[0x50];
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  if (lVar3 != 0) {
    iVar2 = FUN_142eed730(param_1);
    FUN_142f0bc30(param_1,lVar3,iVar2 + -1);
  }
  if ((((char)param_1[0x60] != '\0') && (*(char *)((longlong)param_1 + 0x24e) != '\0')) &&
     (param_1[0x5f] != 0)) {
    iVar2 = FUN_142eed730(param_1);
    FUN_142f0bc30(param_1,param_1[0x5f],iVar2 + -1);
  }
  return;
}



// FUNCTION 142eb4bb0 FUN_142eb4bb0 body=244 status=ok
// SIG undefined FUN_142eb4bb0(void)

void FUN_142eb4bb0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  int local_res8 [2];
  longlong local_res18;
  
  if (*(float *)(param_1 + 0x90) <= 0.0) {
    iVar2 = 0;
  }
  else {
    fVar7 = (float)FUN_142eedeb0();
    fVar7 = fVar7 / *(float *)(param_1 + 0x90);
    iVar2 = (int)ROUND((fVar7 + fVar7) - 0.5) >> 1;
  }
  iVar2 = *(int *)(param_1 + 0x54) * iVar2;
  if ((iVar2 < 0) || (iVar3 = FUN_142eb6360(), iVar3 <= iVar2)) {
    iVar2 = -1;
  }
  iVar3 = *(int *)(param_1 + 0x88);
  if (0 < (longlong)iVar3) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar6 * 8);
      local_res18 = 0;
      if (lVar1 != 0) {
        local_res18 = *(longlong *)(lVar1 + 0x10);
      }
      if (local_res18 != 0) {
        local_res8[0] = iVar2;
        if (*(int *)(param_2 + 8) == 0) {
LAB_142eb4c76:
          uVar4 = 0;
        }
        else {
          plVar5 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar5 = param_2 + 2;
          }
          if (plVar5 == (longlong *)0x0) goto LAB_142eb4c76;
          uVar4 = (**(code **)(*plVar5 + 8))();
        }
        (*(code *)*param_2)(uVar4,local_res8,&local_res18);
      }
      iVar2 = iVar2 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  return;
}



// FUNCTION 142eb4cb0 FUN_142eb4cb0 body=1041 status=ok
// SIG undefined FUN_142eb4cb0(void)

void FUN_142eb4cb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong local_res10;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  
  lVar8 = *(longlong *)(param_1 + 0x248);
  lVar14 = 0;
  if (lVar8 == 0) {
    local_res10 = 0;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    plVar9 = &local_68;
    bVar5 = false;
    bVar16 = true;
  }
  else {
    local_res10 = *(longlong *)(lVar8 + 0x170);
    local_70 = *(longlong **)(lVar8 + 0x178);
    local_78 = local_res10;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar9 = &local_78;
    bVar5 = true;
    bVar16 = false;
  }
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_60;
  if ((bVar16) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_60 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar9 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if ((local_res10 == 0) || (lVar8 = FUN_142eee1b0(), lVar8 == 0)) goto LAB_142eb4f6c;
  if ((*(longlong *)(lVar8 + 0x28) == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
LAB_142eb4e5b:
    plVar9 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar5 = false;
    bVar16 = true;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_142eb4e5b;
    local_80 = *(longlong **)(lVar8 + 0x30);
    local_88 = 0;
    if (local_80 == (longlong *)0x0) {
LAB_142eb4e4c:
      plVar9 = &local_88;
      bVar5 = true;
      bVar16 = false;
      lVar14 = local_88;
    }
    else {
      LOCK();
      iVar7 = (int)local_80[1];
      bVar16 = iVar7 == 0;
      if (bVar16) {
        *(int *)(local_80 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar16) {
        LOCK();
        bVar16 = iVar7 == (int)local_80[1];
        if (bVar16) {
          *(int *)(local_80 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar16) {
          if (local_80 != (longlong *)0x0) {
            local_88 = *(longlong *)(lVar8 + 0x28);
          }
          goto LAB_142eb4e4c;
        }
        LOCK();
        iVar7 = (int)local_80[1];
        bVar16 = iVar7 == 0;
        if (bVar16) {
          *(int *)(local_80 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      local_80 = (longlong *)0x0;
      plVar9 = &local_88;
      bVar5 = true;
      bVar16 = false;
      lVar14 = 0;
    }
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  plVar2 = plStack_50;
  *plVar9 = 0;
  if ((bVar16) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plStack_50 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar9 = local_80;
  if ((bVar5) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (lVar14 != 0) {
    local_48 = local_res10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_40 = plVar3;
    FUN_142052630(lVar14,"focus",&local_48);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
LAB_142eb4f6c:
  uVar15 = 0;
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x240);
    *(uint *)(lVar8 + 0x40) = *(uint *)(lVar8 + 0x40) | 0x80;
    uVar10 = UBlendableInterface::GetPrivateStaticClass();
    UObjectBaseUtility::GetInterfaceAddress(param_1,uVar10);
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x240);
    if (*(longlong *)(lVar8 + 0x5a8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar8 + 0x5a8),param_1,0);
    }
    *(undefined1 *)(param_1 + 0x400) = 1;
  }
  plVar9 = *(longlong **)(param_1 + 0x2c8);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x2b8))(plVar9,*(undefined4 *)(param_1 + 0x2d8),1,0);
    lVar8 = *(longlong *)(param_1 + 0x2c8);
    uVar11 = uVar15;
    uVar12 = uVar15;
    uVar13 = uVar15;
    if (0 < *(int *)(lVar8 + 0x280)) {
      do {
        iVar7 = (int)uVar11;
        uVar11 = uVar15;
        if ((-1 < (longlong)uVar13) && (iVar7 < *(int *)(lVar8 + 0x280))) {
          uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x278) + 0x18 + uVar12);
        }
        if (uVar11 != 0) {
          uVar11 = uVar15;
          if ((-1 < (longlong)uVar13) && (iVar7 < *(int *)(lVar8 + 0x280))) {
            uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x278) + 0x18 + uVar12);
          }
          FUN_142ecf920(uVar11,0);
          lVar8 = *(longlong *)(param_1 + 0x2c8);
        }
        uVar11 = (ulonglong)(iVar7 + 1U);
        uVar12 = uVar12 + 0x20;
        uVar13 = uVar13 + 1;
      } while ((int)(iVar7 + 1U) < *(int *)(lVar8 + 0x280));
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142eb50d0 FUN_142eb50d0 body=64 status=ok
// SIG undefined FUN_142eb50d0(void)

bool FUN_142eb50d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x148);
  }
  if (lVar1 != 0) {
    return *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x18) == DAT_146b3dda0;
  }
  return false;
}



// FUNCTION 142eb5110 FUN_142eb5110 body=884 status=ok
// SIG undefined FUN_142eb5110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142eb5110(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x80);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      FText::FText(puVar5 + 0xc);
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_FUN_14598aff8;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = FUN_142eb0ca0;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_14598b008;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_142eb0a10;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 142eb5490 FUN_142eb5490 body=800 status=ok
// SIG undefined FUN_142eb5490(void)

ulonglong FUN_142eb5490(longlong param_1,char param_2,uint param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar2 = FUN_142eb7360();
  cVar7 = *(char *)(param_1 + 0x1e1);
  iVar5 = 1;
  iVar4 = 1;
  if (cVar7 == '\0') {
    iVar4 = 1;
    if (0 < *(int *)(param_1 + 0x1e4)) {
      iVar4 = *(int *)(param_1 + 0x1e4);
      iVar3 = FUN_142eb7360(param_1);
      cVar7 = *(char *)(param_1 + 0x1e1);
      iVar4 = (iVar3 + -1 + iVar4) / iVar4;
    }
  }
  else if (cVar7 == '\x01') {
    iVar4 = *(int *)(param_1 + 0x1e4);
    cVar7 = '\x01';
  }
  if (cVar7 == '\0') {
    iVar5 = *(int *)(param_1 + 0x1e4);
  }
  else if ((cVar7 == '\x01') && (0 < *(int *)(param_1 + 0x1e4))) {
    iVar5 = *(int *)(param_1 + 0x1e4);
    iVar3 = FUN_142eb7360(param_1);
    iVar5 = (iVar3 + -1 + iVar5) / iVar5;
  }
  if ((iVar4 == 0) || (iVar5 == 0)) {
    return 0xffffffff;
  }
  if (((int)param_3 < 0) || (iVar3 = FUN_142eb7360(param_1), iVar3 <= (int)param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar9 = 0xffffffff;
  if ((param_3 == 0xffffffff) || (!bVar1)) {
    cVar7 = *(char *)(param_1 + 0x1e1);
LAB_142eb55bf:
    uVar6 = 0xffffffff;
    uVar11 = 0xffffffff;
  }
  else {
    cVar7 = *(char *)(param_1 + 0x1e1);
    if (cVar7 == '\0') {
      iVar3 = *(int *)(param_1 + 0x1e4);
      if (iVar3 < 1) goto LAB_142eb55bf;
      uVar11 = (longlong)(int)param_3 % (longlong)iVar3 & 0xffffffff;
      uVar6 = (longlong)(int)param_3 / (longlong)iVar3 & 0xffffffff;
    }
    else {
      if ((cVar7 != '\x01') || (iVar3 = *(int *)(param_1 + 0x1e4), iVar3 < 1)) goto LAB_142eb55bf;
      uVar6 = (longlong)(int)param_3 % (longlong)iVar3 & 0xffffffff;
      uVar11 = (longlong)(int)param_3 / (longlong)iVar3 & 0xffffffff;
    }
  }
  uVar12 = (uint)uVar6;
  uVar10 = (uint)uVar11;
  if (cVar7 == '\0') {
    if ((uVar12 == iVar4 - 1U) && (iVar2 % iVar5 != 0)) {
      iVar5 = iVar2 % iVar5;
    }
  }
  else if (((cVar7 == '\x01') && (uVar10 == iVar5 - 1U)) && (iVar2 % iVar4 != 0)) {
    iVar4 = iVar2 % iVar4;
  }
  if (param_2 == '\x02') {
    iVar4 = FUN_142eb7360(param_1);
    cVar7 = *(char *)(param_1 + 0x208);
    if (0 < iVar4) {
      if (param_3 == 0xffffffff) {
        uVar9 = 0;
        if (cVar7 == '\x01') {
          uVar9 = 0;
          if (param_4 == '\0') {
            uVar9 = iVar4 - 1;
          }
          return (ulonglong)uVar9;
        }
      }
      else {
        uVar9 = param_3;
        if (param_4 == '\0') {
          if (0 < (int)param_3) {
            return (ulonglong)(param_3 - 1);
          }
          if (cVar7 == '\x01') {
            uVar9 = iVar4 - 1;
          }
        }
        else {
          if ((int)param_3 < iVar4 + -1) {
            return (ulonglong)(param_3 + 1);
          }
          if (cVar7 == '\x01') {
            return 0;
          }
        }
      }
    }
    return (ulonglong)uVar9;
  }
  if (param_2 == '\0') {
    cVar8 = '\0';
    if (cVar7 == '\0') {
      cVar8 = *(char *)(param_1 + 0x208);
    }
    if (0 < iVar4) {
      if (uVar12 == 0xffffffff) {
        uVar9 = 0;
        if ((cVar8 == '\x01') && (param_4 == '\0')) {
          uVar9 = iVar4 - 1;
        }
      }
      else {
        uVar9 = uVar12;
        if (param_4 == '\0') {
          if ((int)uVar12 < 1) {
            if (cVar8 == '\x01') {
              uVar9 = iVar4 - 1;
            }
          }
          else {
            uVar9 = uVar12 - 1;
          }
        }
        else if ((int)uVar12 < iVar4 + -1) {
          uVar9 = uVar12 + 1;
        }
        else if (cVar8 == '\x01') {
          uVar9 = 0;
        }
      }
    }
    uVar6 = (ulonglong)uVar9;
    goto LAB_142eb56d7;
  }
  if (param_2 != '\x01') {
    return (ulonglong)param_3;
  }
  cVar8 = '\0';
  if (cVar7 == '\x01') {
    cVar8 = *(char *)(param_1 + 0x208);
  }
  if (0 < iVar5) {
    if (uVar10 == 0xffffffff) {
      uVar9 = 0;
      if (cVar8 == '\x01') {
        uVar9 = 0;
        if (param_4 == '\0') {
          uVar9 = iVar5 - 1;
        }
        uVar11 = (ulonglong)uVar9;
        goto LAB_142eb56d7;
      }
    }
    else {
      uVar9 = uVar10;
      if (param_4 == '\0') {
        if (0 < (int)uVar10) {
          uVar11 = (ulonglong)(uVar10 - 1);
          goto LAB_142eb56d7;
        }
        if (cVar8 == '\x01') {
          uVar9 = iVar5 - 1;
        }
      }
      else {
        if ((int)uVar10 < iVar5 + -1) {
          uVar11 = (ulonglong)(uVar10 + 1);
          goto LAB_142eb56d7;
        }
        if (cVar8 == '\x01') {
          uVar11 = 0;
          goto LAB_142eb56d7;
        }
      }
    }
  }
  uVar11 = (ulonglong)uVar9;
LAB_142eb56d7:
  uVar6 = FUN_142ed17e0(param_1,uVar6,uVar11);
  if ((-1 < (int)uVar6) && ((int)uVar6 < iVar2)) {
    return uVar6;
  }
  uVar9 = iVar2 - 1;
  if ((-1 < (int)uVar9) && ((int)uVar9 < iVar2)) {
    return (ulonglong)uVar9;
  }
  return (ulonglong)param_3;
}



// FUNCTION 142eb57b0 FUN_142eb57b0 body=159 status=ok
// SIG undefined FUN_142eb57b0(void)

undefined8 FUN_142eb57b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if (lVar1 == DAT_146b3d900) {
    cVar2 = FWeakObjectPtr::IsValid();
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_1);
      return uVar3;
    }
  }
  else if (lVar1 == DAT_146b3d908) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_1 + 8);
      return uVar3;
    }
  }
  else if (lVar1 == DAT_146b3d910) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
      return uVar3;
    }
  }
  else if (lVar1 == DAT_146b3d918) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 142eb5850 FUN_142eb5850 body=309 status=ok
// SIG undefined FUN_142eb5850(void)

float FUN_142eb5850(longlong *param_1)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  iVar3 = FUN_14203bd00();
  pfVar1 = DAT_146b3de00;
  lVar7 = 4;
  if (((iVar3 < 2) || (lVar5 == 0)) || ((*(byte *)(lVar5 + 0x830) & 4) != 0)) {
    fVar8 = (float)FUN_14046e540(param_1);
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      fVar8 = pfVar1[1];
    }
    else {
      fVar8 = *pfVar1;
    }
  }
  iVar3 = FUN_14203bd00();
  if (1 < iVar3) {
    iVar3 = FUN_14203bd10();
    lVar5 = DAT_146b3ddd0;
    if (1 < iVar3) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
        lVar6 = 4;
      }
      else {
        lVar6 = 0;
      }
      fVar8 = fVar8 * *(float *)(lVar6 + lVar5);
    }
    lVar5 = DAT_146b3ddb8;
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar7 = 0;
    }
    return fVar8 * *(float *)(lVar7 + lVar5);
  }
  return fVar8;
}



// FUNCTION 142eb5990 FUN_142eb5990 body=156 status=ok
// SIG undefined FUN_142eb5990(void)

ulonglong FUN_142eb5990(longlong *param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  iVar3 = FUN_14203bd00();
  puVar1 = DAT_146b3de00;
  if (((1 < iVar3) && (lVar5 != 0)) && ((*(byte *)(lVar5 + 0x830) & 4) == 0)) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar4 = GetCurrentThreadId();
      if (DVar4 != DAT_1468c21c0) {
        return (ulonglong)puVar1[1];
      }
    }
    return (ulonglong)*puVar1;
  }
  uVar6 = FUN_14046e540(param_1);
  return uVar6;
}



// FUNCTION 142eb5a30 FUN_142eb5a30 body=84 status=ok
// SIG undefined FUN_142eb5a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142eb5a30(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = uRam0000000146b3dbcc;
  uVar8 = uRam0000000146b3dbc8;
  uVar7 = uRam0000000146b3dbc4;
  uVar6 = _DAT_146b3dbc0;
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    uVar4 = *(undefined8 *)(lVar1 + 0x58);
    *param_2 = *(undefined8 *)(lVar1 + 0x40);
    param_2[1] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    param_2[4] = *(undefined8 *)(lVar1 + 0x60);
    param_2[5] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    return param_2;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  uVar6 = uVar6 & _DAT_146b3dbd0;
  uVar7 = uVar7 & uRam0000000146b3dbd4;
  uVar8 = uVar8 & uRam0000000146b3dbd8;
  uVar9 = uVar5 & uRam0000000146b3dbdc;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((longlong)param_2 + 0xc) = uVar5;
  *(uint *)(param_2 + 4) = uVar6;
  *(uint *)((longlong)param_2 + 0x24) = uVar7;
  *(uint *)(param_2 + 5) = uVar8;
  *(uint *)((longlong)param_2 + 0x2c) = uVar9;
  return param_2;
}



// FUNCTION 142eb5a90 GetStaticDepthPriorityGroup body=8 status=ok
// SIG undefined GetStaticDepthPriorityGroup(void)

undefined1 UPrimitiveComponent::GetStaticDepthPriorityGroup(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2c4);
}



// FUNCTION 142eb5aa0 FUN_142eb5aa0 body=38 status=ok
// SIG undefined FUN_142eb5aa0(void)

undefined8 FUN_142eb5aa0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    param_1 = *(longlong *)(param_1 + 0x2d0);
  }
  FUN_142eeb1f0(param_1);
  return param_2;
}



// FUNCTION 142eb5ad0 FUN_142eb5ad0 body=8 status=ok
// SIG undefined FUN_142eb5ad0(void)

undefined1 FUN_142eb5ad0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2c6);
}



// FUNCTION 142eb5ae0 FUN_142eb5ae0 body=275 status=ok
// SIG undefined FUN_142eb5ae0(void)

undefined8 * FUN_142eb5ae0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar8 = 0;
  lVar9 = *(longlong *)(param_1 + 0x2c0);
  if ((lVar9 == 0) && (lVar9 = *(longlong *)(param_1 + 0x2b8), lVar9 == 0)) {
    puVar7 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    puVar7 = (undefined8 *)FUN_142085870(lVar9,local_18);
    bVar6 = true;
    bVar5 = false;
    uVar8 = *puVar7;
  }
  *param_2 = uVar8;
  param_2[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  plVar3 = plStack_20;
  if (bVar5) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((bVar6) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142eb5c00 FUN_142eb5c00 body=71 status=ok
// SIG undefined FUN_142eb5c00(void)

int FUN_142eb5c00(longlong param_1)

{
  float local_res8 [2];
  undefined1 local_res10 [24];
  
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FUN_142087ad0(*(longlong *)(param_1 + 0x600),local_res10,local_res8);
    return (int)ROUND(local_res8[0] * 2.0 + 0.5) >> 1;
  }
  return 0;
}



// FUNCTION 142eb5c50 FUN_142eb5c50 body=1264 status=ok
// SIG undefined FUN_142eb5c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eb5c50(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  switch(param_2) {
  case '\f':
    FText::operator=(param_3,param_1 + 0x6c8);
    if ((wchar_t *)*param_4 != L"removeFriend") {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0xd);
        iVar7 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar7 + 0xd;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      builtin_wcsncpy((wchar_t *)*param_4,L"removeFriend",0xd);
    }
    break;
  default:
    pcVar9 = *(char **)(param_1 + 0x680);
    pcVar8 = pcVar9 + (longlong)*(int *)(param_1 + 0x688) * 0x30;
    for (; pcVar9 != pcVar8; pcVar9 = pcVar9 + 0x30) {
      if (*pcVar9 == param_2) {
        FString::operator=(param_4,pcVar9 + 0x20);
        if (*pcVar9 != '\n') {
          FText::operator=(param_3,pcVar9 + 8);
          return;
        }
        puVar5 = (undefined8 *)FTextFormat::FTextFormat();
        local_c8 = local_68;
        local_68[0] = 0;
        puStack_c0 = local_38;
        local_40 = '\0';
        local_60 = 0;
        local_d8 = *puVar5;
        lStack_d0 = puVar5[1];
        if (lStack_d0 != 0) {
          LOCK();
          *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
          UNLOCK();
        }
        uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
        uVar6 = FText::Format(local_90,&local_d8,uVar6);
        FText::FText(local_a8,uVar6);
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_88 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_88 + 8))(local_88,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8);
        if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_50 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        plVar3 = (longlong *)puVar5[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        FText::operator=(param_3,local_a8);
        if (local_a0 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar3 = local_a0 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 != 1) {
          return;
        }
        (**(code **)(*local_a0 + 8))(local_a0,1);
        return;
      }
    }
    break;
  case '\x13':
    FText::operator=(param_3,param_1 + 0x6e0);
    if ((wchar_t *)*param_4 != L"addShiftFriend") {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0xf);
        iVar7 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar7 + 0xf;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      builtin_wcsncpy((wchar_t *)*param_4,L"addShiftFriend",0xf);
    }
    break;
  case '\x14':
    FText::operator=(param_3,param_1 + 0x6f8);
    if ((wchar_t *)*param_4 != L"editFriend") {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0xb);
        iVar7 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar7 + 0xb;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      builtin_wcsncpy((wchar_t *)*param_4,L"editFriend",0xb);
    }
    break;
  case '\x15':
    FText::operator=(param_3,param_1 + 0x710);
    if ((wchar_t *)*param_4 != L"block") {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,6);
        iVar7 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar7 + 6;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      puVar5 = (undefined8 *)*param_4;
      *puVar5 = 0x63006f006c0062;
      *(undefined4 *)(puVar5 + 1) = 0x6b;
    }
    break;
  case '\x16':
    FText::operator=(param_3,param_1 + 0x728);
    if ((wchar_t *)*param_4 != L"unblock") {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,8);
        iVar7 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar7 + 8;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      builtin_wcsncpy((wchar_t *)*param_4,L"unblock",8);
    }
    break;
  case '\x17':
    FText::operator=(param_3,param_1 + 0x740);
    if ((wchar_t *)*param_4 != L"report") {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,7);
        iVar7 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar7 + 7;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      puVar5 = (undefined8 *)*param_4;
      *puVar5 = 0x6f007000650072;
      *(undefined4 *)(puVar5 + 1) = 0x740072;
      *(undefined2 *)((longlong)puVar5 + 0xc) = 0;
    }
  }
  return;
}



// FUNCTION 142eb6170 FUN_142eb6170 body=205 status=ok
// SIG undefined FUN_142eb6170(void)

longlong FUN_142eb6170(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    lVar4 = FUN_142f1bdf0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 != -0xc0)) {
      if (*(char *)(param_1 + 0x6a8) == '\x01') {
        cVar3 = FText::IsEmpty(lVar1 + 0xf8);
        if (cVar3 == '\0') {
          param_2 = param_2 + -1;
        }
      }
      else if (*(char *)(param_1 + 0x6a8) == '\x02') {
        param_2 = (*(int *)(lVar1 + 0xf0) - param_2) + -1;
      }
      if ((param_2 < 0) || (*(int *)(lVar1 + 0xf0) <= param_2)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return (longlong)param_2 * 0x20 + *(longlong *)(lVar1 + 0xe8);
      }
    }
  }
  return 0;
}



// FUNCTION 142eb6240 FUN_142eb6240 body=93 status=ok
// SIG undefined FUN_142eb6240(void)

longlong FUN_142eb6240(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    lVar3 = FUN_142f1bdf0();
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
      return lVar1 + 0xc0;
    }
  }
  return 0;
}



// FUNCTION 142eb62a0 FUN_142eb62a0 body=54 status=ok
// SIG undefined FUN_142eb62a0(void)

ulonglong FUN_142eb62a0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if ((char)uVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x59c);
    return (ulonglong)*(byte *)(lVar2 + 0xb8);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142eb62e0 FUN_142eb62e0 body=7 status=ok
// SIG undefined FUN_142eb62e0(void)

undefined4 FUN_142eb62e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x324);
}



// FUNCTION 142eb62f0 FUN_142eb62f0 body=22 status=ok
// SIG undefined FUN_142eb62f0(void)

undefined4 FUN_142eb62f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 800) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 800) + 0x2d8);
}



// FUNCTION 142eb6340 FUN_142eb6340 body=8 status=ok
// SIG undefined FUN_142eb6340(void)

undefined8 FUN_142eb6340(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}



// FUNCTION 142eb6350 FUN_142eb6350 body=8 status=ok
// SIG undefined FUN_142eb6350(void)

undefined8 FUN_142eb6350(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



// FUNCTION 142eb6360 FUN_142eb6360 body=93 status=ok
// SIG undefined FUN_142eb6360(void)

int FUN_142eb6360(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if ((0 < *(int *)(param_1 + 0x58)) && (0 < iVar1)) {
    fVar4 = (float)(*(int *)(param_1 + 0x58) / iVar1);
    iVar3 = -((int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1);
    iVar2 = *(int *)(param_1 + 0xa4);
    if (*(int *)(param_1 + 0xa4) <= iVar3) {
      iVar2 = iVar3;
    }
    return iVar2 * iVar1;
  }
  iVar2 = *(int *)(param_1 + 0xa4);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  return iVar2 * iVar1;
}



// FUNCTION 142eb63c0 FUN_142eb63c0 body=93 status=ok
// SIG undefined FUN_142eb63c0(void)

undefined8 * FUN_142eb63c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x329) == '\0') || (*(char *)(param_1 + 0x328) != '\x02')) {
    *param_2 = *(undefined8 *)(param_1 + 0x330);
    param_2[1] = *(undefined8 *)(param_1 + 0x338);
    lVar1 = *(longlong *)(param_1 + 0x340);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x348);
    param_2[1] = *(undefined8 *)(param_1 + 0x350);
    lVar1 = *(longlong *)(param_1 + 0x358);
  }
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142eb6420 FUN_142eb6420 body=10 status=ok
// SIG undefined FUN_142eb6420(void)

undefined8 * FUN_142eb6420(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 142eb6430 FUN_142eb6430 body=131 status=ok
// SIG undefined FUN_142eb6430(void)

int FUN_142eb6430(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x280);
  iVar4 = 0;
  if (0 < iVar3) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      if ((((-1 < lVar6) && (iVar4 < iVar3)) &&
          (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x18 + lVar5), lVar1 != 0)) &&
         (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x170) + 0x40))(), cVar2 != '\0')) {
        return iVar4;
      }
      iVar3 = *(int *)(param_1 + 0x280);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (iVar4 < iVar3);
  }
  return -1;
}



// FUNCTION 142eb65a0 FUN_142eb65a0 body=18 status=ok
// SIG undefined FUN_142eb65a0(void)

undefined8 FUN_142eb65a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x5a8) + 0x48);
  }
  return 0;
}



// FUNCTION 142eb65c0 FUN_142eb65c0 body=77 status=ok
// SIG undefined FUN_142eb65c0(void)

void FUN_142eb65c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x430) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x148))();
    if (lVar1 != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x148))();
      UWorld::GetGameViewport(uVar2);
      return;
    }
  }
  FUN_142086d20(param_1);
  return;
}



// FUNCTION 142eb6610 FUN_142eb6610 body=190 status=ok
// SIG undefined FUN_142eb6610(void)

undefined8 * FUN_142eb6610(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x368) != 0) && (*(longlong *)(param_1 + 0x370) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x370) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar5 = FUN_142eee240(param_1 + 0x360,local_28);
      uVar5 = FText::ToString(uVar5);
      FString::FString(param_2,uVar5);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142eb66e0 FUN_142eb66e0 body=268 status=ok
// SIG undefined FUN_142eb66e0(void)

undefined8 FUN_142eb66e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 8);
  bVar8 = cVar5 == '\0';
  if (bVar8) {
    uVar6 = FUN_1404b03b0();
    puVar7 = (undefined1 *)FText::FText(local_20,uVar6);
  }
  else {
    FWeakObjectPtr::Get(param_1 + 8);
    uVar6 = FUN_1404b03b0();
    FText::FText(local_38,uVar6);
    puVar7 = local_38;
  }
  FText::FText(param_2,puVar7);
  if (bVar8) {
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
  }
  if ((!bVar8) && (local_30 != (longlong *)0x0)) {
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
  return param_2;
}



// FUNCTION 142eb67f0 FUN_142eb67f0 body=124 status=ok
// SIG undefined FUN_142eb67f0(void)

float FUN_142eb67f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  
  plVar1 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if (lVar2 == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(lVar2 + 0x38);
  }
  fVar3 = *(float *)(param_1 + 0x270) / fVar3;
  if (fVar3 < 0.0) {
    return 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  return fVar3;
}



// FUNCTION 142eb6870 FUN_142eb6870 body=21 status=ok
// SIG undefined FUN_142eb6870(void)

undefined8 FUN_142eb6870(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x520) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x520) + 0xd0);
  }
  return 0;
}



// FUNCTION 142eb6890 FUN_142eb6890 body=379 status=ok
// SIG undefined FUN_142eb6890(void)

void FUN_142eb6890(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 local_38 [16];
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x430);
  if (lVar7 == 0) {
    return;
  }
  uVar5 = FUN_142f30760();
  plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
  lVar8 = (**(code **)(*plVar6 + 0x28))(plVar6);
  if (lVar8 == 0) {
    return;
  }
  if (lVar7 == 0) {
    return;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x318);
  if (cVar3 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x318);
    lVar9 = FUN_14270bb10(uVar5);
    if (lVar9 != 0) {
      uVar4 = *(undefined4 *)(lVar9 + 0x108);
      goto LAB_142eb6959;
    }
  }
  uVar4 = FUN_142eed9a0(param_1);
LAB_142eb6959:
  lVar11 = *(longlong *)(param_1 + 800);
  lVar9 = lVar11 + (longlong)*(int *)(param_1 + 0x328) * 8;
  for (; lVar11 != lVar9; lVar11 = lVar11 + 8) {
    puVar10 = (undefined8 *)
              FUN_142f02690(lVar8,local_38,lVar11,uVar4,*(char *)(lVar7 + 0xb8) == '\x01');
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    lVar2 = *param_2;
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *puVar10;
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 0xc + 8) = *(undefined4 *)(puVar10 + 1);
  }
  return;
}



// FUNCTION 142eb6a30 FUN_142eb6a30 body=35 status=ok
// SIG undefined FUN_142eb6a30(void)

undefined8 FUN_142eb6a30(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x280))) {
    return *(undefined8 *)((longlong)param_2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x278));
  }
  return 0;
}



// FUNCTION 142eb6a60 FUN_142eb6a60 body=260 status=ok
// SIG undefined FUN_142eb6a60(void)

int FUN_142eb6a60(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar9 = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    plVar7 = *(longlong **)(param_1 + 0x80);
    uVar3 = uVar9;
    uVar6 = uVar9;
    do {
      uVar5 = uVar9;
      if (*plVar7 != 0) {
        uVar5 = *(ulonglong *)(*plVar7 + 0x10);
      }
      iVar4 = (int)uVar6;
      if (uVar5 == param_2) {
        if (0.0 < *(float *)(param_1 + 0x90)) {
          fVar10 = (float)FUN_142eedeb0(param_1 + 0x20);
          fVar10 = fVar10 / *(float *)(param_1 + 0x90);
          iVar8 = (int)ROUND((fVar10 + fVar10) - 0.5) >> 1;
        }
        if (iVar4 != -1) {
          iVar1 = *(int *)(param_1 + 0x54);
          iVar4 = iVar1 * iVar8 + iVar4;
          if (-1 < iVar4) {
            if ((*(int *)(param_1 + 0x58) < 1) || (iVar1 < 1)) {
              iVar8 = 1;
            }
            else {
              fVar10 = (float)(*(int *)(param_1 + 0x58) / iVar1);
              iVar8 = -((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1);
            }
            iVar2 = *(int *)(param_1 + 0xa4);
            if (*(int *)(param_1 + 0xa4) <= iVar8) {
              iVar2 = iVar8;
            }
            if (iVar4 < iVar2 * iVar1) {
              return iVar4;
            }
          }
        }
        return -1;
      }
      uVar6 = (ulonglong)(iVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar7 = plVar7 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x88));
  }
  return -1;
}



// FUNCTION 142eb6b70 FUN_142eb6b70 body=52 status=ok
// SIG undefined FUN_142eb6b70(void)

undefined8 FUN_142eb6b70(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_142eee450();
    return param_2;
  }
  FText::FText(param_2);
  return param_2;
}



// FUNCTION 142eb6c70 FUN_142eb6c70 body=368 status=ok
// SIG undefined FUN_142eb6c70(void)

longlong * FUN_142eb6c70(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  int local_res8;
  
  lVar5 = 0;
  local_res8 = 0;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb3);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xb3);
    FUN_142710360(uVar2);
  }
  if (param_1[0xa4] == 0) {
    return (longlong *)0x0;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(lVar3 + 0x148);
  }
  if (lVar5 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x18) == DAT_146b3dda0;
  }
  switch(param_2) {
  case 0:
    if ((bVar6) && (*(longlong *)(param_1[0xa4] + 0x88) != 0)) {
      return (longlong *)(param_1[0xa4] + 0x88);
    }
  default:
    return (longlong *)(param_1[0xa4] + 0x48);
  case 1:
    goto switchD_142eb6d10_caseD_1;
  case 2:
    goto switchD_142eb6d10_caseD_2;
  case 3:
    break;
  case 4:
    local_res8 = -2;
    break;
  case 5:
    goto LAB_142eb6d63;
  case 6:
    local_res8 = -2;
LAB_142eb6d63:
    if (local_res8 == 0) {
switchD_142eb6d10_caseD_2:
      if ((bVar6) && (*(longlong *)(param_1[0xa4] + 0xa8) != 0)) {
        return (longlong *)(param_1[0xa4] + 0xa8);
      }
      return (longlong *)(param_1[0xa4] + 0x68);
    }
  case 7:
    goto switchD_142eb6d10_caseD_7;
  }
  if (local_res8 == 0) {
switchD_142eb6d10_caseD_1:
    if ((!bVar6) || (plVar4 = (longlong *)(param_1[0xa4] + 0x98), *plVar4 == 0)) {
      plVar4 = (longlong *)(param_1[0xa4] + 0x58);
    }
  }
  else {
switchD_142eb6d10_caseD_7:
    if ((!bVar6) || (plVar4 = (longlong *)(param_1[0xa4] + 0xb8), *plVar4 == 0)) {
      plVar4 = (longlong *)(param_1[0xa4] + 0x78);
    }
  }
  return plVar4;
}



// FUNCTION 142eb6e00 RequiresPushToTalk body=8 status=ok
// SIG undefined RequiresPushToTalk(void)

undefined1 AGameSession::RequiresPushToTalk(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2c5);
}



// FUNCTION 142eb6e10 FUN_142eb6e10 body=144 status=ok
// SIG undefined FUN_142eb6e10(void)

longlong FUN_142eb6e10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int local_res8 [2];
  
  piVar1 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x10,local_res8,param_2);
  if (*piVar1 == -1) {
    return param_1;
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x10,local_res8,param_2);
  if (local_res8[0] != -1) {
    return *(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x28 + 0x10;
  }
  return 0x10;
}



// FUNCTION 142eb6ea0 FUN_142eb6ea0 body=34 status=ok
// SIG undefined FUN_142eb6ea0(void)

undefined4 FUN_142eb6ea0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    return *(undefined4 *)(param_1 + 0x1e4);
  }
  uVar1 = 1;
  if (*(char *)(param_1 + 0x1e1) == '\x01') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 142eb6ed0 FUN_142eb6ed0 body=28 status=ok
// SIG undefined FUN_142eb6ed0(void)

undefined8 FUN_142eb6ed0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142eb49a0();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x38);
  }
  return 0;
}



// FUNCTION 142eb6ef0 FUN_142eb6ef0 body=280 status=ok
// SIG undefined FUN_142eb6ef0(void)

char FUN_142eb6ef0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return '\x01';
  }
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x32);
  if (cVar2 == '\x05') {
    lVar1 = param_1 + 0xc4;
    cVar2 = FWeakObjectPtr::IsValid(lVar1);
    if (cVar2 == '\0') {
      return '\x01';
    }
    uVar4 = FWeakObjectPtr::Get(lVar1);
    uVar7 = 0;
    iVar3 = FUN_142eecda0(uVar4,param_1 + -0x4d8);
    uVar8 = uVar7;
    if (iVar3 < 1) {
      cVar2 = '\x01';
    }
    else {
      do {
        lVar5 = FWeakObjectPtr::Get(lVar1);
        if ((((-1 < (longlong)uVar7) && ((int)uVar8 < *(int *)(lVar5 + 0x48))) &&
            (plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x40) + uVar7 * 8),
            plVar6 != (longlong *)0x0)) && (lVar5 = (**(code **)(*plVar6 + 0x278))(), lVar5 != 0)) {
          uVar4 = FUN_142f2b5a0();
          plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
          if ((plVar6 != (longlong *)0x0) &&
             (cVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6), cVar2 != '\x05')) {
            cVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
            return cVar2;
          }
        }
        uVar7 = uVar7 + 1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      } while ((longlong)uVar7 < (longlong)iVar3);
      cVar2 = '\x01';
    }
  }
  return cVar2;
}



// FUNCTION 142eb7010 FUN_142eb7010 body=310 status=ok
// SIG undefined FUN_142eb7010(void)

char FUN_142eb7010(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return '\x01';
  }
  cVar3 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x33);
  if (cVar3 == '\x02') {
    cVar3 = '\x01';
    lVar1 = param_1 + 0xc4;
    cVar2 = FWeakObjectPtr::IsValid(lVar1);
    if (cVar2 == '\0') {
      return '\x01';
    }
    uVar5 = FWeakObjectPtr::Get(lVar1);
    uVar8 = 0;
    iVar4 = FUN_142eecda0(uVar5,param_1 + -0x4d8);
    uVar9 = uVar8;
    if (iVar4 < 1) {
      cVar3 = '\x01';
    }
    else {
      do {
        lVar6 = FWeakObjectPtr::Get(lVar1);
        if ((((-1 < (longlong)uVar8) && ((int)uVar9 < *(int *)(lVar6 + 0x48))) &&
            (plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x40) + uVar8 * 8),
            plVar7 != (longlong *)0x0)) && (lVar6 = (**(code **)(*plVar7 + 0x278))(), lVar6 != 0)) {
          uVar5 = FUN_142f2b5a0();
          plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar5);
          if ((plVar7 != (longlong *)0x0) &&
             (cVar2 = (**(code **)(*plVar7 + 0x100))(plVar7), cVar2 != '\x02')) {
            cVar3 = (**(code **)(*plVar7 + 0x100))(plVar7);
          }
        }
        uVar8 = uVar8 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while ((longlong)uVar8 < (longlong)iVar4);
    }
  }
  return cVar3;
}



// FUNCTION 142eb7150 FUN_142eb7150 body=84 status=ok
// SIG undefined FUN_142eb7150(void)

ulonglong FUN_142eb7150(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)*(byte *)(param_1 + 0x198);
  if (*(byte *)(param_1 + 0x198) == 3) {
    uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x240);
    if ((char)uVar1 != '\0') {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x240);
      uVar1 = 0;
      if (*(byte *)(lVar2 + 0x4e0) != 3) {
        uVar1 = (ulonglong)*(byte *)(lVar2 + 0x4e0);
      }
      return uVar1;
    }
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}



// FUNCTION 142eb71b0 FUN_142eb71b0 body=111 status=ok
// SIG undefined FUN_142eb71b0(void)

ulonglong FUN_142eb71b0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)*(byte *)(param_1 + 0x198);
  if (*(byte *)(param_1 + 0x198) == 3) {
    uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x240);
    if ((char)uVar1 == '\0') {
      uVar1 = uVar1 & 0xffffffffffffff00;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x240);
      uVar1 = 0;
      if (*(byte *)(lVar2 + 0x4e0) != 3) {
        uVar1 = (ulonglong)*(byte *)(lVar2 + 0x4e0);
      }
    }
  }
  if ((*(char *)(param_1 + 0x198) == '\x03') && (*(longlong *)(param_1 + 0x2c8) != 0)) {
    uVar1 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x2c8) + 0x209);
  }
  return uVar1;
}



// FUNCTION 142eb7220 FUN_142eb7220 body=74 status=ok
// SIG undefined FUN_142eb7220(void)

undefined8 FUN_142eb7220(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_38,param_1 + 0x48);
  FUN_142eb7c20(param_1,param_2,uVar1,param_3);
  return param_2;
}



// FUNCTION 142eb7270 FUN_142eb7270 body=230 status=ok
// SIG undefined FUN_142eb7270(void)

undefined8 * FUN_142eb7270(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 == 0) {
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
    *param_2 = DAT_1468b5d88;
  }
  else {
    FUN_14203bc50(local_18,param_2);
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
          return param_2;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142eb7360 FUN_142eb7360 body=121 status=ok
// SIG undefined FUN_142eb7360(void)

int FUN_142eb7360(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  iVar4 = -1;
  if (0 < *(int *)(param_1 + 0x280)) {
    lVar5 = 0;
    iVar4 = -1;
    do {
      lVar1 = *(longlong *)(lVar5 + 0x18 + *(longlong *)(param_1 + 0x278));
      if ((lVar1 != 0) &&
         (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x170) + 0x40))(), cVar2 != '\0')) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x280));
  }
  return iVar4 + 1;
}



// FUNCTION 142eb73e0 FUN_142eb73e0 body=82 status=ok
// SIG undefined FUN_142eb73e0(void)

ulonglong FUN_142eb73e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    return (ulonglong)*(uint *)(param_1 + 0x1e4);
  }
  if ((*(char *)(param_1 + 0x1e1) == '\x01') && (0 < *(int *)(param_1 + 0x1e4))) {
    iVar1 = *(int *)(param_1 + 0x1e4);
    iVar2 = FUN_142eb7360();
    return (longlong)(iVar2 + -1 + iVar1) / (longlong)iVar1 & 0xffffffff;
  }
  return 1;
}



// FUNCTION 142eb7440 FUN_142eb7440 body=7 status=ok
// SIG undefined FUN_142eb7440(void)

undefined4 FUN_142eb7440(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x280);
}



// FUNCTION 142eb7450 FUN_142eb7450 body=44 status=ok
// SIG undefined FUN_142eb7450(void)

ulonglong FUN_142eb7450(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 800) < 1) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x1e4) * *(int *)(param_1 + 800);
  uVar1 = (longlong)*(int *)(param_1 + 0x280) / (longlong)iVar3;
  uVar2 = (ulonglong)((int)uVar1 + 1);
  if (*(int *)(param_1 + 0x280) % iVar3 == 0) {
    uVar2 = uVar1 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 142eb7480 FUN_142eb7480 body=82 status=ok
// SIG undefined FUN_142eb7480(void)

ulonglong FUN_142eb7480(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    if (0 < *(int *)(param_1 + 0x1e4)) {
      iVar1 = *(int *)(param_1 + 0x1e4);
      iVar2 = FUN_142eb7360();
      return (longlong)(iVar2 + -1 + iVar1) / (longlong)iVar1 & 0xffffffff;
    }
  }
  else if (*(char *)(param_1 + 0x1e1) == '\x01') {
    return (ulonglong)*(uint *)(param_1 + 0x1e4);
  }
  return 1;
}



// FUNCTION 142eb74e0 FUN_142eb74e0 body=90 status=ok
// SIG undefined FUN_142eb74e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142eb74e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = uRam0000000146b3dbcc;
  uVar8 = uRam0000000146b3dbc8;
  uVar7 = uRam0000000146b3dbc4;
  uVar6 = _DAT_146b3dbc0;
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    uVar3 = *(undefined8 *)(lVar1 + 0x80);
    uVar4 = *(undefined8 *)(lVar1 + 0x88);
    *param_2 = *(undefined8 *)(lVar1 + 0x70);
    param_2[1] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x98);
    param_2[4] = *(undefined8 *)(lVar1 + 0x90);
    param_2[5] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    return param_2;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  uVar6 = uVar6 & _DAT_146b3dbd0;
  uVar7 = uVar7 & uRam0000000146b3dbd4;
  uVar8 = uVar8 & uRam0000000146b3dbd8;
  uVar9 = uVar5 & uRam0000000146b3dbdc;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((longlong)param_2 + 0xc) = uVar5;
  *(uint *)(param_2 + 4) = uVar6;
  *(uint *)((longlong)param_2 + 0x24) = uVar7;
  *(uint *)(param_2 + 5) = uVar8;
  *(uint *)((longlong)param_2 + 0x2c) = uVar9;
  return param_2;
}



// FUNCTION 142eb7540 FUN_142eb7540 body=47 status=ok
// SIG undefined FUN_142eb7540(void)

undefined4 FUN_142eb7540(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar1 = FUN_14270bb10();
    if (lVar1 != 0) {
      return *(undefined4 *)(lVar1 + 0x108);
    }
  }
  return 0xffffffff;
}



// FUNCTION 142eb7570 FUN_142eb7570 body=83 status=ok
// SIG undefined FUN_142eb7570(void)

undefined4 FUN_142eb7570(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x240);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x240);
      lVar3 = FUN_140f141d0(uVar2);
      if (lVar3 != 0) {
        lVar3 = FUN_14270bb10(lVar3);
        if (lVar3 != 0) {
          return *(undefined4 *)(lVar3 + 0x108);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142eb75d0 FUN_142eb75d0 body=21 status=ok
// SIG undefined FUN_142eb75d0(void)

undefined8 FUN_142eb75d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x430) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x430) + 0x848);
  }
  return 0;
}



// FUNCTION 142eb75f0 FUN_142eb75f0 body=631 status=ok
// SIG undefined FUN_142eb75f0(void)

longlong * FUN_142eb75f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  
  lVar1 = param_1 + 0x598;
  uVar11 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  cVar3 = FWeakObjectPtr::IsValid(lVar1);
  uVar7 = uVar11;
  if ((cVar3 != '\0') && (lVar4 = FWeakObjectPtr::Get(lVar1), lVar4 != 0)) {
    uVar5 = FUN_142f30760();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(lVar1);
  if ((cVar3 != '\0') && (uVar7 != 0)) {
    param_1 = param_1 + 0x5a0;
    cVar3 = FWeakObjectPtr::IsValid(param_1);
    if (cVar3 != '\0') {
      uVar5 = FWeakObjectPtr::Get(param_1);
      lVar4 = FUN_1422312c0(uVar5);
      if (lVar4 != 0) {
        uVar5 = FWeakObjectPtr::Get(param_1);
        uVar5 = FUN_1422312c0(uVar5);
        plVar6 = (longlong *)UListView::OnItemSelectionChanged(uVar5);
        uVar15 = uVar11;
        if (0 < (int)plVar6[1]) {
          do {
            lVar4 = *(longlong *)(*plVar6 + uVar11 * 8);
            if (lVar4 != 0) {
              uVar5 = FWeakObjectPtr::Get(lVar1);
              lVar8 = FUN_14270bb10(uVar5);
              if ((((lVar4 == lVar8) && (-1 < (longlong)uVar11)) &&
                  ((int)uVar15 < *(int *)(uVar7 + 0x70))) &&
                 (lVar4 = *(longlong *)(*(longlong *)(uVar7 + 0x68) + uVar11 * 8), lVar4 != 0)) {
                if (param_2 != (longlong *)(lVar4 + 0x38)) {
                  iVar12 = (int)param_2[1];
                  if (iVar12 != 0) {
                    plVar9 = (longlong *)(*param_2 + 8);
                    do {
                      if (*plVar9 != 0) {
                        FMemory::Free();
                      }
                      plVar9 = plVar9 + 4;
                      iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                  }
                  iVar12 = *(int *)(lVar4 + 0x40);
                  lVar4 = *(longlong *)(lVar4 + 0x38);
                  *(int *)(param_2 + 1) = iVar12;
                  if ((iVar12 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
                    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
                  }
                  else {
                    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_2,iVar12);
                    puVar13 = (undefined8 *)*param_2;
                    if (iVar12 != 0) {
                      puVar10 = (undefined1 *)(lVar4 + 0x18);
                      do {
                        *puVar13 = *(undefined8 *)(puVar10 + -0x18);
                        FString::FString(puVar13 + 1,puVar10 + -0x10);
                        uVar2 = *puVar10;
                        puVar10 = puVar10 + 0x20;
                        *(undefined1 *)(puVar13 + 3) = uVar2;
                        puVar13 = puVar13 + 4;
                        iVar12 = iVar12 + -1;
                      } while (iVar12 != 0);
                    }
                  }
                }
                plVar9 = (longlong *)FWeakObjectPtr::Get(param_1);
                (**(code **)(*plVar9 + 0x7c8))(plVar9,param_2);
              }
            }
            if (((uVar11 == 1) && (0 < *(int *)(uVar7 + 0x70))) &&
               (**(longlong **)(uVar7 + 0x68) != 0)) {
              plVar9 = (longlong *)FWeakObjectPtr::Get(param_1);
              (**(code **)(*plVar9 + 2000))(plVar9,param_2,**(longlong **)(uVar7 + 0x68) + 0x38);
            }
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
            uVar11 = uVar11 + 1;
          } while ((int)uVar14 < (int)plVar6[1]);
        }
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142eb7870 FUN_142eb7870 body=382 status=ok
// SIG undefined FUN_142eb7870(void)

void FUN_142eb7870(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x38) != 0) goto LAB_142eb79e1;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    FUN_140ad4c90(param_1,&local_18);
    lVar7 = local_18;
    lVar6 = 0;
    plVar8 = local_10;
    if (local_18 != 0) {
      uVar5 = UPlatformGameInstance::StaticClass();
      plVar8 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
        lVar7 = local_18;
      }
      lVar6 = FUN_14203c640(lVar7,uVar5);
      if (lVar6 == 0) {
LAB_142eb792a:
        lVar6 = 0;
      }
      else {
        lVar7 = UPlatformGameInstance::StaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_142eb792a;
      }
      plVar4 = local_10;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_10;
        if ((int)lVar7 == 1) {
          (**(code **)*local_10)(local_10);
          plVar8 = local_10;
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    *(longlong *)(param_1 + 0x2b8) = lVar6;
    if (lVar6 != 0) {
      FUN_142087ad0(lVar6,param_1 + 0x2c8,param_1 + 0x2cc);
    }
    plVar4 = local_10;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar8 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x2b8);
LAB_142eb79e1:
  FUN_142087db0(param_1);
  return;
}



// FUNCTION 142eb79f0 FUN_142eb79f0 body=9 status=ok
// SIG undefined FUN_142eb79f0(void)

undefined4 FUN_142eb79f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2f4);
}



// FUNCTION 142eb7a00 FUN_142eb7a00 body=7 status=ok
// SIG undefined FUN_142eb7a00(void)

undefined4 FUN_142eb7a00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x270);
}



// FUNCTION 142eb7a10 FUN_142eb7a10 body=32 status=ok
// SIG undefined FUN_142eb7a10(void)

undefined4 FUN_142eb7a10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x198) + 0x270);
  }
  return 0xffffffff;
}



// FUNCTION 142eb7a60 FUN_142eb7a60 body=46 status=ok
// SIG undefined FUN_142eb7a60(void)

bool FUN_142eb7a60(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 800) != 0) {
    iVar1 = FUN_142eeb880();
    return iVar1 != 0;
  }
  return true;
}



// FUNCTION 142eb7a90 FUN_142eb7a90 body=62 status=ok
// SIG undefined FUN_142eb7a90(void)

undefined4 FUN_142eb7a90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_res8 [8];
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x608) != '\0') {
    lVar2 = FUN_140f141d0();
    local_res8[0] = 0xffffffff;
    uVar3 = 0;
    if (lVar2 != 0) {
      cVar1 = FUN_142710360(lVar2,local_res8);
      uVar3 = 0;
      if (cVar1 != '\0') {
        uVar3 = local_res8[0];
      }
    }
  }
  return uVar3;
}



// FUNCTION 142eb7ad0 FUN_142eb7ad0 body=305 status=ok
// SIG undefined FUN_142eb7ad0(void)

undefined8 * FUN_142eb7ad0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 1:
    *(undefined4 *)param_2 = 0;
    break;
  case 2:
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    bVar2 = iVar1 == 0;
    goto LAB_142eb7be5;
  case 3:
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 4) = 0xbe800000;
      *(undefined4 *)param_2 = 0;
      return param_2;
    }
    bVar2 = iVar1 == 1;
    goto LAB_142eb7bde;
  case 4:
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        *(undefined4 *)((longlong)param_2 + 4) = 0x3e800000;
        *(undefined4 *)param_2 = 0;
        return param_2;
      }
LAB_142eb7b5c:
      *(undefined4 *)param_2 = 0x3e800000;
      *(undefined4 *)((longlong)param_2 + 4) = 0xbe800000;
      return param_2;
    }
LAB_142eb7b45:
    *(undefined4 *)param_2 = 0xbe800000;
    *(undefined4 *)((longlong)param_2 + 4) = 0xbe800000;
    return param_2;
  case 5:
    if (iVar1 == 0) {
      *(undefined4 *)param_2 = 0xbe800000;
      *(undefined4 *)((longlong)param_2 + 4) = 0;
      return param_2;
    }
    *(undefined4 *)param_2 = 0x3e800000;
    iVar1 = iVar1 + -1;
    break;
  case 6:
    if (iVar1 == 2) {
      *param_2 = 0x3e800000;
      return param_2;
    }
    *(undefined4 *)param_2 = 0xbe800000;
    if (iVar1 == 1) goto LAB_142eb7bc3;
    goto LAB_142eb7b0e;
  case 7:
    if (iVar1 == 0) goto LAB_142eb7b45;
    if (iVar1 == 1) goto LAB_142eb7b5c;
    bVar2 = iVar1 == 2;
LAB_142eb7bde:
    *(undefined4 *)((longlong)param_2 + 4) = 0x3e800000;
LAB_142eb7be5:
    if (!bVar2) {
      *(undefined4 *)param_2 = 0x3e800000;
      return param_2;
    }
    *(undefined4 *)param_2 = 0xbe800000;
    return param_2;
  default:
    *param_2 = 0;
    return param_2;
  }
  if (iVar1 != 0) {
LAB_142eb7bc3:
    *(undefined4 *)((longlong)param_2 + 4) = 0x3e800000;
    return param_2;
  }
LAB_142eb7b0e:
  *(undefined4 *)((longlong)param_2 + 4) = 0xbe800000;
  return param_2;
}



// FUNCTION 142eb7c20 FUN_142eb7c20 body=695 status=ok
// SIG undefined FUN_142eb7c20(void)

undefined4 *
FUN_142eb7c20(longlong param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 local_res20;
  undefined1 local_c8 [8];
  undefined1 local_c0 [16];
  longlong local_b0;
  longlong local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  longlong local_80;
  longlong local_68;
  undefined8 local_58;
  undefined1 local_50 [40];
  
  uVar3 = 0;
  if (param_4 != 0) {
    uVar4 = FUN_142f30760();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_4,uVar4);
    if ((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar6 != 0))
    {
      uVar4 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_58,param_3);
      cVar2 = FUN_142ef1430(lVar6,uVar4);
      if (cVar2 != '\0') {
        uVar4 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_58,param_3);
        FUN_142eedf90(lVar6,local_c8,uVar4);
        if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
          uVar3 = (uint)*(byte *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
        }
        if (*(char *)(param_1 + 0xa0) != '\0') {
          uVar3 = *(uint *)(param_1 + 0xa4);
        }
        switch(uVar3) {
        case 2:
switchD_142eb7d11_caseD_2:
          if (local_b0 != 0) {
            puVar7 = local_c0;
LAB_142eb7d28:
            TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_2,puVar7);
            if (local_68 != 0) {
              FMemory::Free();
            }
            if (local_80 != 0) {
              FMemory::Free();
            }
            if (local_a8 != 0) {
              FMemory::Free();
            }
            goto LAB_142eb7e75;
          }
          break;
        case 3:
          cVar2 = FUN_142710360(param_4,&local_res20);
          if (cVar2 != '\0') {
            uVar3 = (uint)local_res20 - 1;
LAB_142eb7d7b:
            if (uVar3 < 2) goto switchD_142eb7d11_caseD_7;
          }
          break;
        case 4:
          cVar2 = FUN_142710360(param_4,&local_res20);
          if (cVar2 != '\0') {
            uVar3 = (uint)local_res20;
            goto LAB_142eb7d7b;
          }
          break;
        case 5:
          cVar2 = FUN_142710360(param_4,&local_res20);
          if (cVar2 != '\0') {
            iVar1 = (uint)local_res20;
            if (((uint)local_res20 - 1 < 2) && (local_88 != 0)) goto LAB_142eb7d8a;
LAB_142eb7dd0:
            if (iVar1 == 0) goto switchD_142eb7d11_caseD_2;
          }
          break;
        case 6:
          cVar2 = FUN_142710360(param_4,&local_res20);
          if (cVar2 != '\0') {
            if ((1 < (uint)local_res20) || (local_88 == 0)) {
              iVar1 = (uint)local_res20 - 2;
              goto LAB_142eb7dd0;
            }
            goto LAB_142eb7d8a;
          }
          break;
        case 7:
switchD_142eb7d11_caseD_7:
          if (local_88 != 0) {
LAB_142eb7d8a:
            puVar7 = local_98;
            goto LAB_142eb7d28;
          }
        }
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (local_80 != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  local_res20 = 0;
  param_2[8] = 0;
  if (0x7fffffff < (uint)param_2[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_2 + 6) = 0;
  }
  param_2[2] = 0;
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  local_58 = *(undefined8 *)(param_3 + 4);
  FString::FString(local_50,param_3 + 6);
  FSoftObjectPath::operator=(param_2 + 4,&local_58);
LAB_142eb7e75:
  if (*(longlong *)(param_3 + 6) != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142eb7ef0 FUN_142eb7ef0 body=7 status=ok
// SIG undefined FUN_142eb7ef0(void)

undefined4 FUN_142eb7ef0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x310);
}



// FUNCTION 142eb7f00 FUN_142eb7f00 body=1216 status=ok
// SIG undefined FUN_142eb7f00(void)

undefined8 FUN_142eb7f00(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  longlong local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong *local_90;
  ulonglong local_88;
  longlong *plStack_80;
  ulonglong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    return *(undefined8 *)(param_1 + 0x2b0);
  }
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 == 0) {
    puVar8 = &local_78;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    bVar4 = false;
    bVar3 = true;
    local_98 = uVar11;
  }
  else {
    if ((*(longlong *)(lVar7 + 0x28) == 0) || (*(longlong *)(lVar7 + 0x30) == 0)) {
LAB_142eb7fb4:
      puVar8 = &local_88;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      bVar4 = false;
      bVar3 = true;
      local_c8 = uVar11;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar7 + 0x30) + 8);
      LOCK();
      iVar12 = *piVar1;
      if (iVar12 == 0) {
        *piVar1 = 0;
        iVar12 = 0;
      }
      UNLOCK();
      if (iVar12 < 1) goto LAB_142eb7fb4;
      local_d0 = *(longlong **)(lVar7 + 0x30);
      bVar4 = true;
      bVar3 = false;
      local_d8 = 0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        uVar2 = *(uint *)(local_d0 + 1);
        bVar13 = uVar2 == 0;
        if (bVar13) {
          *(uint *)(local_d0 + 1) = 0;
          uVar6 = uVar11;
        }
        else {
          uVar6 = (ulonglong)uVar2;
        }
        UNLOCK();
        while (!bVar13) {
          iVar12 = (int)uVar6;
          LOCK();
          bVar13 = iVar12 == (int)local_d0[1];
          if (bVar13) {
            *(int *)(local_d0 + 1) = iVar12 + 1;
          }
          UNLOCK();
          if (bVar13) {
            local_d8 = *(ulonglong *)(lVar7 + 0x28);
            puVar8 = &local_d8;
            local_c8 = local_d8;
            goto LAB_142eb7fc8;
          }
          uVar6 = 0;
          LOCK();
          uVar2 = *(uint *)(local_d0 + 1);
          bVar13 = uVar2 == 0;
          if (bVar13) {
            *(uint *)(local_d0 + 1) = 0;
          }
          else {
            uVar6 = (ulonglong)uVar2;
          }
          UNLOCK();
        }
        local_d0 = (longlong *)0x0;
      }
      puVar8 = &local_d8;
      local_c8 = 0;
    }
LAB_142eb7fc8:
    plVar10 = (longlong *)puVar8[1];
    puVar8[1] = 0;
    plVar9 = plStack_80;
    local_c0 = plVar10;
    *puVar8 = 0;
    if ((bVar3) && (plStack_80 != (longlong *)0x0)) {
      LOCK();
      plVar10 = plStack_80 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    plVar10 = local_d0;
    if ((bVar4) && (local_d0 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_d0 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    bVar4 = true;
    bVar3 = false;
    puVar8 = &local_c8;
    local_98 = local_c8;
  }
  plVar10 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  plVar9 = plStack_70;
  local_90 = plVar10;
  *puVar8 = 0;
  if ((bVar3) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_70 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar10 = local_c0;
  if ((bVar4) && (local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_c0 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  bVar4 = false;
  bVar3 = false;
  if (local_98 == 0) goto LAB_142eb8345;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_14203acd0(local_98,"stage",&local_68);
  FUN_140ad4c90(param_1,&local_e8);
  lVar7 = local_e8;
  plVar10 = local_e0;
  if (local_e8 != 0) {
    local_a8 = 0;
    local_a0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"stage",0xc);
    bVar4 = true;
    bVar3 = true;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uVar5 = UPlatformGameInstance::StaticClass();
    plVar10 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
      lVar7 = local_e8;
    }
    uVar6 = FUN_14203ba40(lVar7,uVar5,&local_68,&local_a8,&local_b8);
    if (uVar6 == 0) {
LAB_142eb8238:
      uVar6 = uVar11;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (!bVar13) goto LAB_142eb8238;
    }
    plVar9 = local_e0;
    uVar11 = uVar6;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar10 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      plVar10 = local_e0;
      if ((int)lVar7 == 1) {
        (**(code **)*local_e0)(local_e0);
        plVar10 = local_e0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
  *(ulonglong *)(param_1 + 0x2b0) = uVar11;
  if (bVar3) {
    plVar9 = local_b8;
    for (iVar12 = (int)local_b0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  if ((bVar4) && (local_a8 != 0)) {
    FMemory::Free();
  }
  plVar9 = local_e0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar10 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if ((local_50 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
  }
LAB_142eb8345:
  plVar10 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_90 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return *(undefined8 *)(param_1 + 0x2b0);
}



// FUNCTION 142eb83c0 FUN_142eb83c0 body=801 status=ok
// SIG undefined FUN_142eb83c0(void)

float * FUN_142eb83c0(undefined8 param_1,float *param_2)

{
  int *piVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  int local_78;
  undefined4 uStack_74;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint local_40;
  int local_38;
  undefined4 uStack_34;
  
  lVar9 = 0;
  lVar6 = FUN_142eb7f00();
  if (lVar6 == 0) goto LAB_142eb86ba;
  if ((*(longlong *)(lVar6 + 0x28) == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) {
LAB_142eb8470:
    plVar7 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar2 = false;
    bVar10 = true;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar6 + 0x30) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 < 1) goto LAB_142eb8470;
    local_b0 = *(longlong **)(lVar6 + 0x30);
    local_b8 = 0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)local_b0[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(local_b0 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar5 == (int)local_b0[1];
        if (bVar10) {
          *(int *)(local_b0 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) {
          lVar9 = *(longlong *)(lVar6 + 0x28);
          plVar7 = &local_b8;
          bVar2 = true;
          bVar10 = false;
          local_b8 = lVar9;
          goto LAB_142eb8485;
        }
        LOCK();
        iVar5 = (int)local_b0[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(local_b0 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
      local_b0 = (longlong *)0x0;
    }
    lVar9 = 0;
    plVar7 = &local_b8;
    bVar2 = true;
    bVar10 = false;
  }
LAB_142eb8485:
  plVar8 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar3 = plStack_60;
  local_a0 = plVar8;
  *plVar7 = 0;
  if ((bVar10) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_60 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar8 = local_a0;
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_a0;
      if (iVar5 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
        plVar8 = local_a0;
      }
    }
  }
  plVar7 = local_b0;
  if ((bVar2) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_b0 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_a0;
    if ((int)lVar6 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_a0;
      if (iVar5 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
        plVar8 = local_a0;
      }
    }
  }
  if ((lVar9 != 0) && (cVar4 = FUN_142045be0(lVar9), cVar4 != '\0')) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    local_88 = (longlong *)0x0;
    local_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    local_80 = 0;
    cVar4 = FUN_14203acd0(lVar9,"stageWidth",&local_58);
    if ((cVar4 != '\0') && (cVar4 = FUN_14203acd0(lVar9,"stageHeight",&local_98), cVar4 != '\0')) {
      *param_2 = (float)local_38;
      param_2[1] = (float)local_78;
      if ((local_80 >> 6 & 1) != 0) {
        (**(code **)(*local_88 + 0x10))(local_88,&local_98,CONCAT44(uStack_74,local_78));
        local_88 = (longlong *)0x0;
      }
      local_80 = 0;
      if ((local_40 >> 6 & 1) != 0) {
        (**(code **)(*local_48 + 0x10))(local_48,&local_58,CONCAT44(uStack_34,local_38));
        local_48 = (longlong *)0x0;
      }
      plVar7 = local_a0;
      local_40 = 0;
      if (plVar8 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar8 = plVar8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 != 1) {
        return param_2;
      }
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 != 1) {
        return param_2;
      }
      (**(code **)(*local_a0 + 8))(local_a0,1);
      return param_2;
    }
    if ((local_80 >> 6 & 1) != 0) {
      (**(code **)(*local_88 + 0x10))(local_88,&local_98,CONCAT44(uStack_74,local_78));
      local_88 = (longlong *)0x0;
    }
    local_80 = 0;
    if ((local_40 >> 6 & 1) != 0) {
      (**(code **)(*local_48 + 0x10))(local_48,&local_58,CONCAT44(uStack_34,local_38));
    }
  }
  plVar7 = local_a0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
LAB_142eb86ba:
  *(undefined8 *)param_2 = DAT_1468b5d88;
  return param_2;
}



// FUNCTION 142eb86f0 FUN_142eb86f0 body=81 status=ok
// SIG undefined FUN_142eb86f0(void)

char * FUN_142eb86f0(longlong param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  
  pcVar2 = *(char **)(param_1 + 0x30);
  pcVar4 = pcVar2 + (longlong)*(int *)(param_1 + 0x38) * 0xc0;
  while( true ) {
    if (pcVar2 == pcVar4) {
      cVar1 = UNF_CustomizationStatics::IsWeaponType(param_2);
      lVar3 = 0x100;
      if (cVar1 != '\0') {
        lVar3 = 0x40;
      }
      return (char *)(lVar3 + param_1);
    }
    if (*pcVar2 == param_2) break;
    pcVar2 = pcVar2 + 0xc0;
  }
  return pcVar2;
}



// FUNCTION 142eb8770 FUN_142eb8770 body=262 status=ok
// SIG undefined FUN_142eb8770(void)

undefined8 FUN_142eb8770(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 8);
  bVar7 = cVar4 == '\0';
  if (bVar7) {
    uVar6 = FUN_1404b03b0();
    uVar6 = FText::FText(local_38,uVar6);
  }
  else {
    lVar5 = FWeakObjectPtr::Get(param_1 + 8);
    uVar6 = FUN_142eb8880(lVar5 + 0x308,local_20);
  }
  FText::FText(param_2,uVar6);
  if (bVar7) {
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
  }
  if ((!bVar7) && (local_18 != (longlong *)0x0)) {
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
  return param_2;
}



// FUNCTION 142eb8880 FUN_142eb8880 body=613 status=ok
// SIG undefined FUN_142eb8880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142eb8880(longlong param_1,undefined8 param_2)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_1b8 [32];
  undefined2 local_198;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  code *local_168 [2];
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined4 local_128;
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  param_1 = param_1 + -0x308;
  FWeakObjectPtr::operator=(&local_188,param_1);
  local_138 = 0;
  local_128 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_158);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_188;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_184;
  }
  local_180 = 0;
  local_168[0] = FUN_142eb0960;
  local_178 = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
  local_198 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_180,0x22,"UGbxGFxEditableTextField::GetText");
  FUN_142ea9950(local_118,&local_180,local_168);
  uVar4 = FUN_142eb5110(local_118,local_168);
  FUN_14208c5d0(param_1,uVar4);
  lVar5 = local_58;
  if (local_58 != 0) {
    while ((lVar5 = local_58, local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar1 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) {
        lVar5 = FUN_14203ca70();
        if (lVar5 != 0) {
          FUN_1420714f0(lVar5);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar5 = local_58;
      if (local_58 == 0) break;
      if (*(char *)(local_58 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5);
      }
    }
  }
  cVar1 = *(char *)(lVar5 + 0x58);
  while (cVar1 == '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0);
    cVar1 = *(char *)(lVar5 + 0x58);
  }
  FText::FText(param_2,lVar5 + 0x60);
  FUN_140ce1dc0(local_118);
  return param_2;
}



// FUNCTION 142eb8af0 FUN_142eb8af0 body=613 status=ok
// SIG undefined FUN_142eb8af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142eb8af0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_1b8 [32];
  undefined2 local_198;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  code *local_168 [2];
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined4 local_128;
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  FWeakObjectPtr::operator=(&local_188,param_1);
  local_138 = 0;
  local_128 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_158);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_188;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_184;
  }
  local_180 = 0;
  local_168[0] = FUN_142eb0c00;
  local_178 = 0x28;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
  local_198 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_180,0x28,"UGbxGFxEditableTextField::GetTextString");
  FUN_1410b2b20(local_118,&local_180,local_168);
  uVar4 = FUN_1410ca460(local_118,local_168);
  FUN_14208c5d0(param_1,uVar4);
  lVar5 = local_58;
  if (local_58 != 0) {
    while ((lVar5 = local_58, local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar1 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) {
        lVar5 = FUN_14203ca70();
        if (lVar5 != 0) {
          FUN_1420714f0(lVar5);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar5 = local_58;
      if (local_58 == 0) break;
      if (*(char *)(local_58 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5);
      }
    }
  }
  cVar1 = *(char *)(lVar5 + 0x58);
  while (cVar1 == '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0);
    cVar1 = *(char *)(lVar5 + 0x58);
  }
  FString::FString(param_2,lVar5 + 0x60);
  FUN_140ce1dc0(local_118);
  return param_2;
}



// FUNCTION 142eb8d60 FUN_142eb8d60 body=297 status=ok
// SIG undefined FUN_142eb8d60(void)

float * FUN_142eb8d60(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int local_res8 [2];
  int local_res18 [2];
  longlong local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_142dcfa90(*(longlong *)(param_1 + 0x430),local_res8,local_res18);
    *param_2 = (float)local_res8[0];
    param_2[1] = (float)local_res18[0];
    return param_2;
  }
  FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 == 0) {
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
    *(undefined8 *)param_2 = DAT_1468b5d88;
  }
  else {
    FUN_14203d4c0(local_18,param_2);
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
          return param_2;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142eb8e90 FUN_142eb8e90 body=93 status=ok
// SIG undefined FUN_142eb8e90(void)

float * FUN_142eb8e90(longlong param_1,float *param_2)

{
  int local_res8 [4];
  int local_res18 [4];
  
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_142dcfa20(*(longlong *)(param_1 + 0x430),local_res8,local_res18);
    *param_2 = (float)local_res8[0];
    param_2[1] = (float)local_res18[0];
    return param_2;
  }
  *(undefined8 *)param_2 = DAT_1468b5d88;
  return param_2;
}



// FUNCTION 142eb8ef0 FUN_142eb8ef0 body=91 status=ok
// SIG undefined FUN_142eb8ef0(void)

undefined1 * FUN_142eb8ef0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [8];
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    puVar3 = (undefined1 *)
             (**(code **)(*(longlong *)(lVar2 + 0x308) + 0x28))
                       ((longlong *)(lVar2 + 0x308),local_res8);
    *param_2 = *puVar3;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142eb8f50 FUN_142eb8f50 body=7 status=ok
// SIG undefined FUN_142eb8f50(void)

undefined1 * FUN_142eb8f50(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142eb8f60 FUN_142eb8f60 body=57 status=ok
// SIG undefined FUN_142eb8f60(void)

undefined8 FUN_142eb8f60(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000142eb8f8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x308) + 0x20))();
    return uVar3;
  }
  return 0;
}



// FUNCTION 142eb9000 FUN_142eb9000 body=19 status=ok
// SIG undefined FUN_142eb9000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142eb9000(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_178 [32];
  longlong lStack_158;
  longlong *plStack_150;
  undefined4 uStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  longlong alStack_130 [3];
  undefined1 auStack_118 [96];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_44;
  undefined1 uStack_42;
  ulonglong uStack_38;
  
  lVar4 = *(longlong *)(param_1 + 0x2b8);
  if (lVar4 == 0) {
    return 1;
  }
  uStack_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uStack_b8 = 0x3f800000;
  uStack_a8 = 0x3f80000000000000;
  uStack_90 = 0x3f800000;
  uStack_88 = 0x3f800000;
  uStack_78 = 0x3f80000000000000;
  uStack_60 = 0x3f800000;
  uStack_50 = 0x3f80000000000000;
  uStack_148 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_44 = 0;
  if ((*(longlong *)(lVar4 + 0x28) != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      plStack_150 = *(longlong **)(lVar4 + 0x30);
      lStack_158 = 0;
      if (plStack_150 == (longlong *)0x0) {
LAB_14208873e:
        plVar9 = &lStack_158;
        bVar5 = true;
        bVar11 = false;
        lVar10 = lStack_158;
      }
      else {
        LOCK();
        iVar8 = (int)plStack_150[1];
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(plStack_150 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar8 == (int)plStack_150[1];
          if (bVar11) {
            *(int *)(plStack_150 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (plStack_150 != (longlong *)0x0) {
              lStack_158 = *(longlong *)(lVar4 + 0x28);
            }
            goto LAB_14208873e;
          }
          LOCK();
          iVar8 = (int)plStack_150[1];
          bVar11 = iVar8 == 0;
          if (bVar11) {
            *(int *)(plStack_150 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        plVar9 = &lStack_158;
        plStack_150 = (longlong *)0x0;
        bVar5 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_142088767;
    }
  }
  plVar9 = &lStack_140;
  lStack_140 = 0;
  plStack_138 = (longlong *)0x0;
  bVar5 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_142088767:
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  plVar2 = plStack_138;
  *plVar9 = 0;
  if ((bVar11) && (plStack_138 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plStack_138 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138,1);
      }
    }
  }
  plVar9 = plStack_150;
  if ((bVar5) && (plStack_150 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_150 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_150 + 8))(plStack_150,1);
      }
    }
  }
  if ((lVar10 == 0) || (cVar7 = FUN_142039630(lVar10,auStack_118), cVar7 == '\0')) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    UObjectBaseUtility::GetPathName(lVar4,alStack_130,0);
    if (alStack_130[0] != 0) {
      FMemory::Free();
    }
    uStack_42 = 0;
  }
  else if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return uStack_42;
}



// FUNCTION 142eb9020 FUN_142eb9020 body=114 status=ok
// SIG undefined FUN_142eb9020(void)

void FUN_142eb9020(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
                    /* WARNING: Could not recover jumptable at 0x000142eb9059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x148))(plVar2);
    return;
  }
  if (*(longlong **)(param_1 + 0x430) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142eb9079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x148))();
    return;
  }
  FUN_141758700(param_1);
  return;
}



// FUNCTION 142eb90d0 FUN_142eb90d0 body=513 status=ok
// SIG undefined FUN_142eb90d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eb90d0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_c0;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_c0 = *param_2;
  plVar6 = (longlong *)param_2[4];
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
  local_110 = param_2[2];
  local_108 = param_2[3];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  uVar4 = *(undefined1 *)(param_2 + 5);
  FWeakObjectPtr::operator=(&local_118,param_1);
  local_f8 = local_118;
  local_f4 = local_114;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x48,local_78);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_14598ae48;
    puVar8[1] = param_1;
    *(undefined4 *)(puVar8 + 2) = local_118;
    *(undefined4 *)((longlong)puVar8 + 0x14) = local_114;
    puVar8[3] = local_c0;
    *(undefined4 *)(puVar8 + 4) = uVar5;
    *(undefined1 *)((longlong)puVar8 + 0x24) = uVar3;
    puVar8[5] = local_110;
    puVar8[6] = local_108;
    puVar8[7] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar8 + 8) = uVar4;
  }
  local_88[0] = &LAB_142eb0bd0;
  FUN_14208c300(param_1,local_88);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar6 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  return;
}



// FUNCTION 142eb92e0 FUN_142eb92e0 body=599 status=ok
// SIG undefined FUN_142eb92e0(void)

void FUN_142eb92e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  longlong local_20;
  
  FUN_142eb9540();
  plVar6 = (longlong *)UOnlineEngineInterface::Get();
  if (plVar6 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar6 + 0x410))(plVar6);
    if (cVar5 != '\0') {
      ppuVar3 = (undefined8 **)(param_1 + 0x358);
      uVar4 = *(undefined4 *)(param_2 + 8);
      if (*ppuVar3 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)operator_new(0x10);
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          *puVar7 = &PTR_FUN_14598ad88;
          *(undefined4 *)(puVar7 + 1) = 0xffffffff;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        plVar6 = (longlong *)operator_new(0x18);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar6 + 1) = 1;
          *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          plVar6[2] = (longlong)puVar7;
        }
        local_38 = puVar7;
        local_30 = plVar6;
        SharedPointerInternals::EnableSharedFromThis(&local_38,puVar7,puVar7);
        if (ppuVar3 != &local_38) {
          *ppuVar3 = puVar7;
          local_38 = (undefined8 *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x360,&local_30);
          plVar6 = local_30;
        }
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
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        FWeakObjectPtr::operator=(*ppuVar3 + 1,param_1);
      }
      local_28 = *ppuVar3;
      local_20 = *(longlong *)(param_1 + 0x360);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_1418c3ef0(DAT_1469f4590,1,uVar4,&local_28);
      goto LAB_142eb9464;
    }
  }
  FUN_142eb4cb0(param_1);
LAB_142eb9464:
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  if (cVar5 != '\0') {
    if (param_1 != 0) {
      UBlendableInterface::GetPrivateStaticClass();
      UObjectBaseUtility::GetInterfaceAddress(param_1);
    }
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x240);
    if (*(longlong *)(lVar8 + 0x5a8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar8 + 0x5a8),param_1,0);
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x2c8);
  if ((lVar8 != 0) && (iVar11 = 0, 0 < *(int *)(lVar8 + 0x280))) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if ((lVar13 < 0) || (*(int *)(lVar8 + 0x280) <= iVar11)) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(*(longlong *)(lVar8 + 0x278) + 0x18 + lVar12);
      }
      if (lVar10 != 0) {
        if ((lVar13 < 0) || (*(int *)(lVar8 + 0x280) <= iVar11)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 0x278) + 0x18 + lVar12);
        }
        FUN_142ecf920(uVar9);
        lVar8 = *(longlong *)(param_1 + 0x2c8);
      }
      iVar11 = iVar11 + 1;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x20;
    } while (iVar11 < *(int *)(lVar8 + 0x280));
  }
  return;
}



// FUNCTION 142eb9540 FUN_142eb9540 body=408 status=ok
// SIG undefined FUN_142eb9540(void)

void FUN_142eb9540(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined8 local_68;
  
  local_68 = *param_2;
  plVar7 = (longlong *)param_2[4];
  uVar6 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined1 *)((longlong)param_2 + 0xc);
  local_res10 = param_2[2];
  local_res18 = param_2[3];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  uVar5 = *(undefined1 *)(param_2 + 5);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  local_78 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x48,local_a8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_14598ae48;
    puVar9[1] = param_1;
    *(undefined4 *)(puVar9 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar9 + 0x14) = local_resc;
    puVar9[3] = local_68;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined1 *)((longlong)puVar9 + 0x24) = uVar4;
    puVar9[5] = local_res10;
    puVar9[6] = local_res18;
    puVar9[7] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar9 + 8) = uVar5;
  }
  local_b8[0] = &LAB_142eb0aa0;
  FUN_14204c280(local_b8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar7)(plVar7);
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
  return;
}



// FUNCTION 142eb96e0 FUN_142eb96e0 body=141 status=ok
// SIG undefined FUN_142eb96e0(void)

void FUN_142eb96e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_28 = 0;
    local_30 = DAT_146b3d9e8;
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    local_34 = param_2;
    FUN_142eef530(*(longlong *)(param_1 + 0x2f8),local_38);
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
  }
  return;
}



// FUNCTION 142eb9770 FUN_142eb9770 body=312 status=ok
// SIG undefined FUN_142eb9770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142eb9770(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  if ((*(char *)(param_1 + 0x4c0) != '\0') && (*(char *)(param_1 + 0x621) != '\0')) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_142eb07d0;
    uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar3);
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
    if (local_78 != 0) {
      plVar4 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar4 = local_88;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    local_18 = (ulonglong)uVar1;
    UNLOCK();
  }
  return local_18;
}



// FUNCTION 142eb98b0 FUN_142eb98b0 body=417 status=ok
// SIG undefined FUN_142eb98b0(void)

bool FUN_142eb98b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146b3d900 == *param_2) {
      FUN_142ebe5a0(param_1,-*(int *)(param_1 + 0x54));
      return iVar1 != *(int *)(param_1 + 0x5c);
    }
    if (DAT_146b3d908 == *param_2) {
      FUN_142ebe5a0(param_1,*(undefined4 *)(param_1 + 0x54));
      return iVar1 != *(int *)(param_1 + 0x5c);
    }
    if (DAT_146b3d910 == *param_2) {
      FUN_142ebe5a0(param_1,0xffffffff);
      return iVar1 != *(int *)(param_1 + 0x5c);
    }
    if (DAT_146b3d918 == *param_2) {
      FUN_142ebe5a0(param_1,1);
      return iVar1 != *(int *)(param_1 + 0x5c);
    }
    if (DAT_146b3e2a0 == *param_2) {
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x58))) {
        uVar2 = FUN_141039030(param_1,iVar1);
        FUN_14057da00(param_1 + 0x10,iVar1,uVar2);
        return true;
      }
    }
    else if (DAT_146b3daa8 == *param_2) {
      if (iVar1 != -1) {
        FUN_142f0ced0(param_1 + 0x20,*(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x3c));
        return true;
      }
    }
    else if ((DAT_146b3daa0 == *param_2) && (iVar1 != -1)) {
      FUN_142f0ced0(param_1 + 0x20,*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x90));
      return true;
    }
  }
  return false;
}



// FUNCTION 142eb9a60 FUN_142eb9a60 body=118 status=ok
// SIG undefined FUN_142eb9a60(void)

undefined8 FUN_142eb9a60(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) &&
     (1 < *(int *)(param_1 + 0x108))) {
    FUN_142ecd680(param_1 + -0x208);
    return 1;
  }
  if ((*(longlong *)(param_1 + 0xf8) != 0) &&
     (cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x150) + 0x20))(),
     cVar1 != '\0')) {
    return 1;
  }
  uVar2 = FUN_142eefc20(param_1,param_2);
  return uVar2;
}



// FUNCTION 142eb9ae0 FUN_142eb9ae0 body=209 status=ok
// SIG undefined FUN_142eb9ae0(void)

undefined8 FUN_142eb9ae0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    if (*(char *)((longlong)param_1 + 0x105) == '\0') {
      if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) {
        (**(code **)(param_1[-0x2e] + 0x300))(param_1 + -0x2e,param_2);
        return 1;
      }
    }
    else if ((*(char *)((longlong)param_2 + 0xc) == '\x01') && (DAT_146b3e2a0 == *param_2)) {
      if (((int)param_1[7] != 0) || (*(int *)((longlong)param_1 + 0x3c) != 0)) {
        FUN_142f0ad20(param_1 + -0x2e,param_1[7]);
      }
      FUN_142eb4390(param_1 + 0x18,param_1 + -0x2e,param_2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142eb9bc0 FUN_142eb9bc0 body=117 status=ok
// SIG undefined FUN_142eb9bc0(void)

undefined8 FUN_142eb9bc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  if ((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) &&
      (lVar1 = *(longlong *)(param_1 + 0x1b0), lVar1 != 0)) &&
     ((*(longlong *)(lVar1 + 0x198) != 0 && (*(char *)(lVar1 + 0x1a0) != '\0')))) {
    FUN_142eb15b0();
    local_res10[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 0x1b0) + 0x1d0,local_res10);
    return 1;
  }
  uVar2 = FUN_142eb9d90(param_1);
  return uVar2;
}



// FUNCTION 142eb9c40 FUN_142eb9c40 body=321 status=ok
// SIG undefined FUN_142eb9c40(void)

undefined8 FUN_142eb9c40(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    cVar1 = '\0';
    if (DAT_146b3d900 == *param_2) {
      if ((*(int *)(param_1 + 0x200) != 0) && (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0))
      {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x18))();
        if (cVar1 != '\0') {
          if (*(int *)(param_1 + 0x200) == 0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            plVar3 = *(longlong **)(param_1 + 0x1f8);
          }
          (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + -0x170,0x26,0,0,0);
          return 1;
        }
      }
      cVar1 = *(char *)((longlong)param_2 + 0xc);
    }
    if ((((cVar1 == '\0') && (DAT_146b3d908 == *param_2)) && (*(int *)(param_1 + 0x200) != 0)) &&
       (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x200) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x1f8);
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + -0x170,0x28,0,0,0);
        return 1;
      }
    }
  }
  if (((*(char *)(param_1 + 0x290) != '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
     (DAT_146b3e2b8 == *param_2)) {
    FUN_142eaf600(param_1 + -0x170);
    return 1;
  }
  uVar2 = FUN_142eb9ae0(param_1,param_2);
  return uVar2;
}



// FUNCTION 142eb9d90 FUN_142eb9d90 body=619 status=ok
// SIG undefined FUN_142eb9d90(void)

ulonglong FUN_142eb9d90(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  bVar5 = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    puVar6 = (ulonglong *)FName::FName(local_res8,"Gamepad_LeftX",1);
    puVar7 = (ulonglong *)FKey::GetFName(param_2 + 2,local_res18);
    uVar8 = *puVar6;
    if (*puVar7 == uVar8) {
LAB_142eb9e12:
      return uVar8 & 0xffffffffffffff00;
    }
    puVar6 = (ulonglong *)FName::FName(local_res8,"Gamepad_LeftY",1);
    puVar7 = (ulonglong *)FKey::GetFName(param_2 + 2,local_res18);
    uVar8 = *puVar6;
    if (*puVar7 == uVar8) goto LAB_142eb9e12;
  }
  cVar2 = *(char *)(param_1 + 0x72);
  plVar1 = (longlong *)(param_1 + -0x170);
  cVar3 = FUN_142ebdf20(plVar1);
  lVar9 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
  if ((lVar9 == 0) ||
     (cVar4 = (**(code **)(*(longlong *)(lVar9 + 0x170) + 0x20))
                        ((longlong *)(lVar9 + 0x170),param_2), cVar4 == '\0')) {
    if ((*(char *)(param_1 + 0xe0) == '\0') ||
       ((cVar3 == '\0' || (*(char *)((longlong)param_2 + 0xc) != '\0')))) {
LAB_142eb9f21:
      cVar3 = *(char *)((longlong)param_2 + 0xc);
      if ((cVar3 == '\0') && (DAT_146b3d900 == *param_2)) {
        uVar10 = 0;
        uVar8 = 0;
LAB_142eb9f39:
        uVar8 = uVar8 & 0xffffffffffffff00;
LAB_142eb9f3c:
        bVar5 = FUN_142ebe7f0(plVar1,uVar10,uVar8);
        if (bVar5 != 0) goto LAB_142eb9f87;
      }
      else {
        if ((cVar3 == '\0') && (DAT_146b3d908 == *param_2)) {
          uVar10 = 0;
          uVar8 = 1;
          goto LAB_142eb9f3c;
        }
        if (cVar3 == '\0') {
          if (DAT_146b3d910 == *param_2) {
            uVar10 = 1;
            uVar8 = (ulonglong)(cVar2 == '\x01');
          }
          else {
            uVar8 = *param_2;
            if (DAT_146b3d918 != uVar8) goto LAB_142eb9f60;
            uVar10 = 1;
            if (cVar2 == '\x01') goto LAB_142eb9f39;
            uVar8 = 1;
          }
          goto LAB_142eb9f3c;
        }
      }
LAB_142eb9f60:
      if ((*(char *)(param_1 + 0xdf) == '\0') ||
         ((((uVar8 = *param_2, uVar8 != DAT_146b3d918 && (uVar8 != DAT_146b3d910)) &&
           (uVar8 != DAT_146b3d900)) && (uVar8 != DAT_146b3d908)))) goto LAB_142eb9f87;
    }
    else if (DAT_146b3daa0 == *param_2) {
      if (*(char *)(param_1 + 0xe1) == '\0') {
        (**(code **)(*plVar1 + 0x2f8))
                  (plVar1,*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x14c),1);
      }
      else {
        (**(code **)(*plVar1 + 0x2f8))
                  (plVar1,*(float *)(param_1 + 0x14c) + *(float *)(param_1 + 0x164));
      }
    }
    else {
      if (DAT_146b3daa8 != *param_2) goto LAB_142eb9f21;
      if (*(char *)(param_1 + 0xe1) == '\0') {
        (**(code **)(*plVar1 + 0x2f8))
                  (plVar1,*(float *)(param_1 + 0x14c) + *(float *)(param_1 + 0x164),1);
      }
      else {
        (**(code **)(*plVar1 + 0x2f8))
                  (plVar1,*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x14c));
      }
    }
  }
  bVar5 = 1;
LAB_142eb9f87:
  return (ulonglong)bVar5;
}



// FUNCTION 142eba000 FUN_142eba000 body=77 status=ok
// SIG undefined FUN_142eba000(void)

bool FUN_142eba000(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) &&
      (*(longlong *)(param_1 + 0x1a8) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x1a0) == '\0')) {
    FUN_142eb45d0(param_1 + -0x170);
    return true;
  }
  cVar1 = FUN_142eb9ae0();
  return cVar1 != '\0';
}



// FUNCTION 142eba050 FUN_142eba050 body=284 status=ok
// SIG undefined FUN_142eba050(void)

undefined8 FUN_142eba050(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x1b9) == '\0') {
LAB_142eba15d:
    uVar3 = FUN_142eb9ae0();
    return uVar3;
  }
  if (*(char *)(param_1 + 0x1b8) == '\0') {
    if ((*(char *)((longlong)param_2 + 0xc) != '\0') || (DAT_146b3d918 != *param_2))
    goto LAB_142eba15d;
    *(undefined1 *)(param_1 + 0x1b8) = 2;
    local_res8[0] = 2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1a8,local_res8);
    plVar5 = *(longlong **)(param_1 + -0x138);
    if (plVar5 == (longlong *)0x0) goto LAB_142eba144;
    pcVar4 = "Navigate";
  }
  else {
    if (((*(char *)(param_1 + 0x1b8) != '\x02') || (*(char *)((longlong)param_2 + 0xc) != '\0')) ||
       (DAT_146b3d910 != *param_2)) goto LAB_142eba15d;
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    local_res8[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1a8,local_res8);
    plVar5 = *(longlong **)(param_1 + -0x138);
    if (plVar5 == (longlong *)0x0) goto LAB_142eba144;
    pcVar4 = "Navigate";
  }
  local_18 = 0;
  local_10 = 0;
  lVar1 = *plVar5;
  puVar2 = (undefined8 *)FName::FName(local_res8,pcVar4,1);
  (**(code **)(lVar1 + 0x4e8))(*(undefined8 *)(param_1 + -0x138),*puVar2,&local_18);
LAB_142eba144:
  FUN_142ecf550(param_1 + -0x170);
  return 1;
}



// FUNCTION 142eba170 FUN_142eba170 body=148 status=ok
// SIG undefined FUN_142eba170(void)

undefined8 FUN_142eba170(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_142eb9ae0();
  if (cVar1 == '\0') {
    if (((*(char *)((longlong)param_2 + 0xc) == '\0') &&
        (((DAT_146b3daa0 == *param_2 || (DAT_146b3daa8 == *param_2)) &&
         (cVar1 = (**(code **)(*param_1 + 0x10))(param_1), cVar1 != '\x06')))) ||
       ((param_1[0x3a] == 0 ||
        (plVar2 = (longlong *)(param_1[0x3a] + 0x170),
        cVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), cVar1 == '\0')))) {
      return 0;
    }
    FUN_142f0ad20(param_1 + -0x2e,param_1[0x39]);
  }
  return 1;
}



// FUNCTION 142eba210 FUN_142eba210 body=102 status=ok
// SIG undefined FUN_142eba210(void)

undefined8 FUN_142eba210(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_142eb9ae0();
  if (cVar1 != '\0') {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (plVar2 = (longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x170),
     cVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), cVar1 != '\0')) {
    FUN_142f0ad20(param_1 + -0x170,*(undefined8 *)(param_1 + 0x1a8));
    return 1;
  }
  return 0;
}



// FUNCTION 142eba280 FUN_142eba280 body=116 status=ok
// SIG undefined FUN_142eba280(void)

void FUN_142eba280(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_142eb6a60();
  if (iVar2 != -1) {
    FUN_142ed2f20(param_1,iVar2);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x58))) {
      iVar3 = FUN_14103fac0(param_1,iVar2);
      if ((iVar3 < 0) ||
         ((*(int *)(param_1 + 0x88) <= iVar3 ||
          (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar3 * 8), lVar1 == 0)))
         ) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar1 + 0x10);
      }
      FUN_14057da00(param_1 + 0x10,iVar2,uVar4);
    }
  }
  return;
}



// FUNCTION 142eba300 FUN_142eba300 body=123 status=ok
// SIG undefined FUN_142eba300(void)

void FUN_142eba300(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_142eb6a60();
  if (param_3 == '\0') {
    if (iVar2 == *(int *)(param_1 + 0x5c)) {
      uVar3 = FUN_14103fac0(param_1);
      *(undefined4 *)(param_1 + 0xa0) = uVar3;
      iVar2 = -1;
      if (*(int *)(param_1 + 0x9c) < -1) {
        iVar2 = *(int *)(param_1 + 0x9c);
      }
      FUN_142ed2f20(param_1,iVar2);
    }
  }
  else if (iVar2 != *(int *)(param_1 + 0x5c)) {
    iVar1 = *(int *)(param_1 + 0x9c);
    if ((iVar1 != -1) && (iVar1 < iVar2)) {
      iVar2 = iVar1;
    }
    FUN_142ed2f20(param_1,iVar2);
    return;
  }
  return;
}



// FUNCTION 142eba380 FUN_142eba380 body=394 status=ok
// SIG undefined FUN_142eba380(void)

void FUN_142eba380(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  uVar6 = 0;
  uVar4 = uVar6;
  if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
    uVar4 = (ulonglong)*(byte *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
  }
  if (*(uint *)(param_1 + 0x5b4) == (uint)uVar4) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x5b4);
    if (*(char *)(param_1 + 0x5b0) == '\0') goto LAB_142eba473;
  }
  else {
    *(uint *)(param_1 + 0x5b4) = (uint)uVar4;
  }
  *(undefined1 *)(param_1 + 0x5b0) = 0;
  uVar2 = FUN_142eb6c70(param_1,uVar4);
  uVar3 = FWeakObjectPtr::Get(param_1 + 0x598);
  FUN_142ed56a0(param_1,uVar3);
  plVar7 = *(longlong **)(param_1 + 0x510);
  uVar4 = (longlong)*(int *)(param_1 + 0x518) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x518) < plVar7) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar7;
      if (plVar1 != (longlong *)0x0) {
        FUN_142ecfb30(param_1,plVar1,uVar2);
        (**(code **)(*plVar1 + 0x530))(plVar1);
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
LAB_142eba473:
  FUN_142efe210(param_1 + 0x528,param_2);
  plVar7 = *(longlong **)(param_1 + 0x510);
  uVar4 = (longlong)*(int *)(param_1 + 0x518) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x518) < plVar7) {
    uVar4 = uVar6;
  }
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar7;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        bVar8 = *(int *)((longlong)plVar1 + 0x61c) == 0;
        if (bVar8) {
          *(int *)((longlong)plVar1 + 0x61c) = 0;
        }
        UNLOCK();
        if (!bVar8) {
          (**(code **)(*plVar1 + 0x4b8))(plVar1,local_res8);
          (**(code **)(*plVar1 + 0x570))(plVar1,param_2);
        }
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4);
  }
  return;
}



// FUNCTION 142eba510 FUN_142eba510 body=395 status=ok
// SIG undefined FUN_142eba510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142eba510(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar2 = local_18;
  if (*(char *)((longlong)param_1 + 0x63c) == '\0') {
    uVar2 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 199);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 199) = 0;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 != 0) {
      uVar2 = 0;
      LOCK();
      uVar1 = *(uint *)(param_1 + 0x15);
      if (uVar1 == 0) {
        *(uint *)(param_1 + 0x15) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
      }
      UNLOCK();
      if ((uVar1 != 0) && (uVar2 = (**(code **)(*param_1 + 0x518))(), (char)uVar2 != '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x63c) = 1;
        (**(code **)(*param_1 + 0x520))(param_1);
        uVar2 = (**(code **)(*param_1 + 0x508))(param_1);
        if ((char)uVar2 != '\0') {
          LOCK();
          uVar1 = *(uint *)(param_1 + 200);
          *(uint *)(param_1 + 200) = 1;
          uVar2 = (ulonglong)uVar1;
          UNLOCK();
          if (uVar1 == 0) {
            local_88 = (longlong *)0x0;
            local_78 = 0;
            puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
            if (puVar3 != (undefined8 *)0x0) {
              puVar3[1] = param_1;
              *puVar3 = &PTR_FUN_143f77b70;
            }
            local_b8[0] = FUN_142eb08b0;
            uVar4 = FUN_1420849a0(param_1,local_68,local_b8);
            uVar2 = FUN_14208c260(param_1,uVar4);
            if (local_28 != 0) {
              plVar5 = local_58;
              if (local_38 != (longlong *)0x0) {
                plVar5 = local_38;
              }
              if (plVar5 != (longlong *)0x0) {
                uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0);
              }
            }
            if (local_38 != (longlong *)0x0) {
              uVar2 = FMemory::Free();
            }
            if (local_78 != 0) {
              plVar5 = local_a8;
              if (local_88 != (longlong *)0x0) {
                plVar5 = local_88;
              }
              if (plVar5 != (longlong *)0x0) {
                uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0);
              }
            }
            if (local_88 != (longlong *)0x0) {
              uVar2 = FMemory::Free();
            }
          }
        }
      }
    }
  }
  return uVar2;
}



// FUNCTION 142eba6a0 FUN_142eba6a0 body=450 status=ok
// SIG undefined FUN_142eba6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eba6a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  int local_90 [2];
  longlong local_88;
  undefined1 *puStack_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puStack_80 = &local_98;
  lVar8 = 0;
  local_97 = 0;
  local_95 = 0;
  local_98 = 1;
  local_48 = (longlong *)0x0;
  iVar1 = 0;
  local_38 = 0;
  local_88 = param_1;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f77c18;
    puVar3[1] = local_88;
    puVar3[2] = puStack_80;
  }
  local_78 = FUN_141032360;
  if (0.0 < *(float *)(param_1 + 0x90)) {
    fVar9 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar9 = fVar9 / *(float *)(param_1 + 0x90);
    iVar1 = (int)ROUND((fVar9 + fVar9) - 0.5) >> 1;
  }
  iVar1 = *(int *)(param_1 + 0x54) * iVar1;
  if ((iVar1 < 0) || (iVar2 = FUN_142eb6360(param_1), iVar2 <= iVar1)) {
    iVar1 = -1;
  }
  iVar2 = *(int *)(param_1 + 0x88);
  lVar7 = lVar8;
  if (0 < (longlong)iVar2) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar7 * 8);
      lVar4 = lVar8;
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar5 + 0x10);
      }
      if (lVar4 != 0) {
        lVar5 = lVar8;
        local_90[0] = iVar1;
        local_88 = lVar4;
        if (local_38 != 0) {
          plVar6 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar6 = local_48;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar5 = (**(code **)(*plVar6 + 8))();
          }
        }
        (*local_78)(lVar5,local_90,&local_88);
      }
      iVar1 = iVar1 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2);
  }
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
  return;
}



// FUNCTION 142eba870 FUN_142eba870 body=59 status=ok
// SIG undefined FUN_142eba870(void)

ulonglong FUN_142eba870(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_14202a080();
  if (((char)uVar2 != '\0') && (uVar2 = 0, (*(byte *)(param_1 + 0x624) & 1) != 0)) {
    uVar2 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x628);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0x628) = 0;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 != 0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142eba8b0 IsOccupied body=11 status=ok
// SIG undefined IsOccupied(void)

bool ALadder::IsOccupied(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x310);
}



// FUNCTION 142eba8c0 FUN_142eba8c0 body=882 status=ok
// SIG undefined FUN_142eba8c0(void)

bool FUN_142eba8c0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  undefined1 *puVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  int local_a0;
  ulonglong local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined1 local_80;
  ulonglong local_78;
  longlong local_70 [2];
  undefined1 local_60;
  ulonglong local_58;
  undefined1 local_50 [16];
  undefined1 local_40;
  ulonglong uVar12;
  
  uVar14 = 0;
  iVar17 = 0;
  FUN_142eb75f0(param_1,&local_a8);
  iVar6 = local_a0;
  lVar8 = local_a8;
  lVar4 = *(longlong *)(param_1 + 0x520);
  local_c8 = 0;
  if (lVar4 == 0) {
    uVar12 = local_b0 & 0xffffffff;
    puVar9 = &local_c8;
    local_c0 = 0;
    bVar3 = false;
    bVar2 = true;
    uVar13 = local_b8;
  }
  else {
    local_c0 = CONCAT44(local_c0._4_4_,local_a0);
    if (local_a0 == 0) {
      local_c0 = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_c8,local_a0,0);
      lVar8 = lVar8 - local_c8;
      puVar16 = (undefined1 *)(local_c8 + 0x18);
      do {
        *(undefined8 *)(puVar16 + -0x18) = *(undefined8 *)(puVar16 + lVar8 + -0x18);
        FString::FString(puVar16 + -0x10,puVar16 + lVar8 + -0x10);
        *puVar16 = puVar16[lVar8];
        puVar16 = puVar16 + 0x20;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      lVar4 = *(longlong *)(param_1 + 0x520);
    }
    puVar9 = *(ulonglong **)(lVar4 + 0x38);
    puVar15 = puVar9 + (longlong)*(int *)(lVar4 + 0x40) * 4;
    local_b8 = 0;
    local_b0 = 0;
    uVar12 = uVar14;
    uVar13 = uVar14;
    uVar18 = uVar14;
    for (; puVar9 != puVar15; puVar9 = puVar9 + 4) {
      local_78 = *puVar9;
      FString::FString(local_70,puVar9 + 1);
      local_60 = (undefined1)puVar9[3];
      local_98 = local_78;
      FString::FString(&local_90,local_70);
      local_80 = local_60;
      local_58 = local_98;
      FString::FString(local_50,&local_90);
      local_40 = local_80;
      lVar4 = FUN_142ea7a10(&local_c8,&local_58);
      if (CONCAT44(uStack_8c,local_90) != 0) {
        FMemory::Free();
      }
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      if (lVar4 == 0) {
        iVar6 = (int)uVar12;
        uVar11 = iVar6 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,uVar11);
        if ((int)uVar18 < (int)uVar11) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_b8,uVar12);
          uVar18 = local_b0 >> 0x20;
          uVar13 = local_b8;
          uVar11 = (uint)local_b0;
        }
        uVar12 = (ulonglong)uVar11;
        lVar4 = (longlong)iVar6 * 0x20;
        *(ulonglong *)(lVar4 + uVar13) = *puVar9;
        FString::FString(uVar13 + 8 + lVar4,puVar9 + 1);
        *(char *)(lVar4 + 0x18 + uVar13) = (char)puVar9[3];
      }
    }
    FUN_1408708d0(&local_c8);
    puVar9 = &local_b8;
    bVar3 = true;
    bVar2 = false;
    iVar17 = (int)local_c0;
  }
  iVar6 = (int)puVar9[1];
  local_98 = 0;
  local_90 = iVar6;
  if (iVar6 != 0) {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_98,iVar6,0);
    uVar14 = local_98;
    puVar10 = (undefined8 *)*puVar9;
    puVar16 = (undefined1 *)(local_98 + 0x18);
    do {
      *(undefined8 *)(puVar16 + -0x18) = *puVar10;
      FString::FString(puVar16 + -0x10,puVar10 + 1);
      puVar1 = puVar10 + 3;
      puVar10 = puVar10 + 4;
      *puVar16 = *(undefined1 *)puVar1;
      puVar16 = puVar16 + 0x20;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = local_90;
  uVar18 = local_c8;
  if (bVar2) {
    if (iVar17 != 0) {
      plVar7 = (longlong *)(local_c8 + 8);
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 4;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    if (uVar18 != 0) {
      FMemory::Free(uVar18);
    }
  }
  if (bVar3) {
    if ((int)uVar12 != 0) {
      plVar7 = (longlong *)(uVar13 + 8);
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 4;
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 != 0);
    }
    if (uVar13 != 0) {
      FMemory::Free(uVar13);
    }
  }
  iVar5 = local_a0 + iVar6;
  iVar17 = *(int *)(param_1 + 0x518);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(uVar14 + 8);
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar14 != 0) {
    FMemory::Free(uVar14);
  }
  if (local_a0 != 0) {
    plVar7 = (longlong *)(local_a8 + 8);
    iVar6 = local_a0;
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return iVar17 == iVar5;
}



// FUNCTION 142ebac40 FUN_142ebac40 body=539 status=ok
// SIG undefined FUN_142ebac40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142ebac40(longlong param_1,undefined1 param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar8 = FUN_1420890a0();
  if ((char)uVar8 != '\0') {
    FUN_140ad4c90(param_1,&local_f8);
    plVar11 = local_f0;
    if (local_f8 != 0) {
      uVar8 = 0;
      LOCK();
      bVar4 = *(byte *)(local_f8 + 0x30);
      if (bVar4 == 0) {
        *(byte *)(local_f8 + 0x30) = 0;
      }
      else {
        uVar8 = (ulonglong)bVar4;
      }
      UNLOCK();
      if ((char)uVar8 == '\t') {
        if (local_f0 == (longlong *)0x0) {
          return uVar8;
        }
        LOCK();
        puVar1 = (uint *)(local_f0 + 1);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar5 != 1) {
          return (ulonglong)uVar5;
        }
        uVar8 = (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return uVar8;
        }
        uVar8 = (**(code **)(*local_f0 + 8))(local_f0,1);
        return uVar8;
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_f0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    uVar8 = 0;
    LOCK();
    bVar4 = *(byte *)(param_1 + 0x4d8);
    if (bVar4 == 0) {
      *(byte *)(param_1 + 0x4d8) = 1;
    }
    else {
      uVar8 = (ulonglong)bVar4;
    }
    UNLOCK();
    if (bVar4 == 0) {
      FWeakObjectPtr::operator=(&local_e8,param_1);
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_78);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &PTR_FUN_144605cc8;
        puVar9[1] = param_1;
        *(undefined4 *)(puVar9 + 2) = local_e8;
        *(undefined4 *)((longlong)puVar9 + 0x14) = local_e4;
        *(undefined1 *)(puVar9 + 3) = param_2;
      }
      local_88[0] = &LAB_142eb0820;
      uVar10 = FUN_1420849a0(param_1,local_d8,local_88);
      uVar8 = FUN_14208c4f0(param_1,uVar10);
      if (local_48 != 0) {
        plVar11 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar11 = local_58;
        }
        if (plVar11 != (longlong *)0x0) {
          uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        uVar8 = FMemory::Free();
      }
    }
  }
  return uVar8;
}



// FUNCTION 142ebae60 FUN_142ebae60 body=1996 status=ok
// SIG undefined FUN_142ebae60(void)

void FUN_142ebae60(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  short *psVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong *plVar22;
  float fVar23;
  uint local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  undefined8 local_98;
  longlong local_90;
  ulonglong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  short *local_60;
  int local_58;
  
  FUN_141033a10();
  iVar14 = *(int *)(param_2 + 0x58);
  *(int *)(param_1 + 0x54) = iVar14;
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x68);
  iVar3 = *(int *)(param_2 + 0x5c);
  *(int *)(param_1 + 0xa4) = iVar3 / iVar14;
  cVar2 = FWeakObjectPtr::IsValid(param_2,(longlong)iVar3 % (longlong)iVar14 & 0xffffffff);
  puVar13 = (undefined8 *)0x0;
  if (cVar2 == '\0') goto LAB_142ebb073;
  local_80 = (longlong *)0x0;
  local_78 = 0;
  uVar4 = FWeakObjectPtr::Get(param_2);
  lVar5 = FUN_140ecbdf0(uVar4,param_2 + 8,0,6,&local_80);
  puVar1 = (uint *)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if (lVar5 != 0) {
      puVar20 = (undefined8 *)operator_new(0x18);
      puVar8 = puVar13;
      if (puVar20 != (undefined8 *)0x0) {
        FGCObject::FGCObject(puVar20);
        *puVar20 = &PTR__scalar_deleting_destructor__1440f8f50;
        puVar20[2] = lVar5;
        puVar8 = puVar20;
      }
      if (puVar1 == local_res10) {
        if (puVar8 != (undefined8 *)0x0) {
          puVar20 = (undefined8 *)*puVar8;
          goto LAB_142ebaf69;
        }
      }
      else {
        puVar10 = *(undefined8 **)puVar1;
        *(undefined8 **)puVar1 = puVar8;
        if (puVar10 != (undefined8 *)0x0) {
          puVar20 = (undefined8 *)*puVar10;
          puVar8 = puVar10;
LAB_142ebaf69:
          (*(code *)*puVar20)(puVar8,1);
        }
      }
    }
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = lVar5;
  }
  plVar11 = local_80;
  for (iVar14 = (uint)local_78; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_80 != (longlong *)0x0) {
    FMemory::Free(local_80);
  }
  local_80 = (longlong *)0x0;
  local_78 = 0;
  uVar4 = FWeakObjectPtr::Get(param_2);
  lVar5 = FUN_141021f30(uVar4,param_2 + 0x18,0,6,&local_80);
  puVar1 = (uint *)(param_1 + 0x70);
  if (*(longlong *)puVar1 == 0) {
    if (lVar5 != 0) {
      puVar20 = (undefined8 *)operator_new(0x18);
      puVar8 = puVar13;
      if (puVar20 != (undefined8 *)0x0) {
        FGCObject::FGCObject(puVar20);
        *puVar20 = &PTR__scalar_deleting_destructor__1440f8f50;
        puVar20[2] = lVar5;
        puVar8 = puVar20;
      }
      if (puVar1 == local_res10) {
        if (puVar8 != (undefined8 *)0x0) {
          puVar20 = (undefined8 *)*puVar8;
          goto LAB_142ebb036;
        }
      }
      else {
        puVar10 = *(undefined8 **)puVar1;
        *(undefined8 **)puVar1 = puVar8;
        if (puVar10 != (undefined8 *)0x0) {
          puVar20 = (undefined8 *)*puVar10;
          puVar8 = puVar10;
LAB_142ebb036:
          (*(code *)*puVar20)(puVar8,1);
        }
      }
    }
  }
  else {
    *(longlong *)(*(longlong *)puVar1 + 0x10) = lVar5;
  }
  plVar11 = local_80;
  for (iVar14 = (uint)local_78; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_80 != (longlong *)0x0) {
    FMemory::Free(local_80);
  }
LAB_142ebb073:
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10), lVar5 != 0)) {
    FUN_142087ad0(lVar5,param_1 + 0x78,param_1 + 0x7c);
    local_80 = (longlong *)0x0;
    local_res10[0] = 0;
    local_78 = local_78 & 0xffffffff;
    puVar8 = puVar13;
    puVar20 = puVar13;
    if (0 < *(int *)(param_2 + 0x50)) {
      do {
        if (*(int *)(param_2 + 0x30) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(param_2 + 0x28);
        }
        FString::PrintfImpl(&local_60,L"%s%d",puVar12,*(int *)(param_2 + 0x54) + (int)puVar8);
        local_90 = 0;
        psVar19 = &DAT_143f3eda8;
        if (local_58 != 0) {
          psVar19 = local_60;
        }
        local_88 = 0;
        if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
          lVar5 = -1;
          do {
            lVar17 = lVar5 + 1;
            lVar5 = lVar5 + 1;
          } while (psVar19[lVar17] != 0);
          uVar15 = (int)lVar5 + 1;
          local_88 = (ulonglong)uVar15;
          if (0 < (int)uVar15) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
          }
          FGenericPlatformString::Memcpy(local_90,psVar19,(longlong)(int)uVar15 * 2);
        }
        local_70 = (longlong *)0x0;
        local_68 = 0;
        puVar10 = puVar13;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          puVar6 = (undefined8 *)UPlatformGameInstance::StaticClass();
          for (puVar7 = *(undefined8 **)(param_2 + 0x38);
              (puVar10 = puVar13, puVar7 != (undefined8 *)0x0 &&
              (puVar10 = *(undefined8 **)(param_2 + 0x38), puVar7 != puVar6));
              puVar7 = (undefined8 *)puVar7[6]) {
          }
        }
        puVar7 = puVar13;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x68) + 0x10);
        }
        lVar5 = FUN_140ecbdf0(puVar7,&local_90,puVar10,6,&local_70);
        plVar11 = local_70;
        for (iVar14 = (int)local_68; iVar14 != 0; iVar14 = iVar14 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_70 != (longlong *)0x0) {
          FMemory::Free(local_70);
        }
        if (local_90 != 0) {
          FMemory::Free();
        }
        if (lVar5 == 0) {
          if (local_60 != (short *)0x0) {
            FMemory::Free();
          }
          break;
        }
        iVar14 = (int)puVar20;
        local_res10[0] = iVar14 + 1;
        local_78 = CONCAT44(local_78._4_4_,local_res10[0]);
        if (local_78._4_4_ < (int)local_res10[0]) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,puVar20);
          local_res10[0] = (uint)local_78;
        }
        puVar20 = (undefined8 *)(ulonglong)local_res10[0];
        local_80[iVar14] = lVar5;
        if (local_60 != (short *)0x0) {
          FMemory::Free();
        }
        uVar15 = (int)puVar8 + 1;
        puVar8 = (undefined8 *)(ulonglong)uVar15;
      } while ((int)uVar15 < *(int *)(param_2 + 0x50));
    }
    iVar21 = (int)puVar20;
    iVar3 = *(int *)(param_2 + 0x5c) - iVar21;
    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar21);
    local_98 = 0;
    iVar14 = 0;
    if (-1 < iVar3) {
      iVar14 = iVar3;
    }
    iVar3 = 1;
    if (0 < *(int *)(param_2 + 0x58)) {
      iVar3 = *(int *)(param_2 + 0x58);
    }
    local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar3);
    if (0 < iVar21) {
      if (*local_80 != 0) {
        FUN_142087ad0(*local_80,&local_98,(longlong)&local_98 + 4);
      }
      puVar20 = (undefined8 *)((ulonglong)local_res18 & 0xffffffff);
    }
    puVar8 = puVar13;
    if (0 < iVar14) {
      do {
        iVar21 = (int)puVar8 + (int)puVar20 + *(int *)(param_2 + 0x54);
        if (*(int *)(param_2 + 0x30) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(param_2 + 0x28);
        }
        FString::PrintfImpl(&local_60,L"%s%d",puVar12,iVar21);
        local_90 = 0;
        psVar19 = &DAT_143f3eda8;
        if (local_58 != 0) {
          psVar19 = local_60;
        }
        local_88 = 0;
        if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
          lVar5 = -1;
          do {
            lVar17 = lVar5 + 1;
            lVar5 = lVar5 + 1;
          } while (psVar19[lVar17] != 0);
          uVar15 = (int)lVar5 + 1;
          local_88 = (ulonglong)uVar15;
          if (0 < (int)uVar15) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
          }
          FGenericPlatformString::Memcpy(local_90,psVar19,(longlong)(int)uVar15 * 2);
          iVar3 = (int)local_res20;
        }
        puVar20 = puVar13;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          puVar7 = (undefined8 *)UPlatformGameInstance::StaticClass();
          for (puVar10 = *(undefined8 **)(param_2 + 0x38);
              (puVar20 = puVar13, puVar10 != (undefined8 *)0x0 &&
              (puVar20 = *(undefined8 **)(param_2 + 0x38), puVar10 != puVar7));
              puVar10 = (undefined8 *)puVar10[6]) {
          }
        }
        if (*(int *)(param_2 + 0x48) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(param_2 + 0x40);
        }
        puVar10 = puVar13;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 0x68) + 0x10);
        }
        lVar5 = FUN_140f986f0(puVar10,puVar12,&local_90,puVar20);
        if (local_90 != 0) {
          FMemory::Free();
        }
        if (lVar5 == 0) {
          if (local_60 != (short *)0x0) {
            FMemory::Free();
          }
          break;
        }
        FUN_1420900f0(lVar5,CONCAT44((float)(iVar21 / iVar3) * *(float *)(param_2 + 0x68) +
                                     local_98._4_4_,
                                     (float)(iVar21 % iVar3) * *(float *)(param_2 + 100) +
                                     (float)local_98));
        uVar15 = local_res10[0];
        lVar17 = (longlong)(int)local_res10[0];
        local_res10[0] = local_res10[0] + 1;
        local_78 = CONCAT44(local_78._4_4_,local_res10[0]);
        if (local_78._4_4_ < (int)local_res10[0]) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,uVar15);
          local_res10[0] = (uint)local_78;
        }
        local_80[lVar17] = lVar5;
        if (local_60 != (short *)0x0) {
          FMemory::Free();
        }
        puVar20 = (undefined8 *)((ulonglong)local_res18 & 0xffffffff);
        uVar15 = (int)puVar8 + 1;
        puVar8 = (undefined8 *)(ulonglong)uVar15;
        iVar3 = (int)local_res20;
      } while ((int)uVar15 < iVar14);
    }
    uVar15 = local_res10[0];
    local_res18 = (longlong *)(param_1 + 0x80);
    iVar14 = *(int *)(param_1 + 0x88);
    if (iVar14 < (int)local_res10[0]) {
      *(uint *)(param_1 + 0x88) = local_res10[0];
      uVar16 = local_res10[0] - iVar14;
      if (*(int *)(param_1 + 0x8c) < (int)local_res10[0]) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_res18,iVar14);
      }
      if (uVar16 != 0) {
        puVar8 = (undefined8 *)(*local_res18 + (longlong)iVar14 * 8);
        for (uVar9 = (ulonglong)uVar16; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
      }
    }
    else if ((int)local_res10[0] < iVar14) {
      TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(local_res18,local_res10[0],iVar14 - local_res10[0],1);
    }
    if (0 < *(int *)(param_1 + 0x88)) {
      local_res20 = local_80;
      plVar11 = local_80;
      puVar8 = puVar13;
      puVar20 = puVar13;
      plVar22 = local_80;
      do {
        if (((-1 < (longlong)puVar20) && ((int)puVar8 < (int)uVar15)) &&
           (lVar5 = *plVar22, uVar15 = local_res10[0], lVar5 != 0)) {
          plVar18 = (longlong *)((longlong)plVar22 + (*local_res18 - (longlong)plVar11));
          if (*plVar18 == 0) {
            puVar7 = (undefined8 *)operator_new(0x18);
            puVar10 = puVar13;
            if (puVar7 != (undefined8 *)0x0) {
              FGCObject::FGCObject(puVar7);
              puVar7[2] = lVar5;
              *puVar7 = &PTR__scalar_deleting_destructor__1440f8f50;
              puVar10 = puVar7;
            }
            uVar15 = local_res10[0];
            plVar11 = local_res20;
            if (plVar18 == &local_90) {
              if (puVar10 != (undefined8 *)0x0) {
                puVar7 = (undefined8 *)*puVar10;
                goto LAB_142ebb555;
              }
            }
            else {
              puVar6 = (undefined8 *)*plVar18;
              *plVar18 = (longlong)puVar10;
              if (puVar6 != (undefined8 *)0x0) {
                puVar7 = (undefined8 *)*puVar6;
                puVar10 = puVar6;
LAB_142ebb555:
                (*(code *)*puVar7)(puVar10,1);
                plVar11 = local_res20;
                uVar15 = local_res10[0];
              }
            }
          }
          else {
            *(longlong *)(*plVar18 + 0x10) = lVar5;
          }
        }
        uVar16 = (int)puVar8 + 1;
        puVar8 = (undefined8 *)(ulonglong)uVar16;
        puVar20 = (undefined8 *)((longlong)puVar20 + 1);
        plVar22 = plVar22 + 1;
      } while ((int)uVar16 < *(int *)(param_1 + 0x88));
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
  }
  fVar23 = (float)*(int *)(param_1 + 0xa4) * *(float *)(param_1 + 0x90);
  FUN_142f11a80(param_1 + 0x20,fVar23,fVar23);
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10), lVar5 != 0)) {
    FUN_142f0f790(lVar5,1);
  }
  iVar14 = -1;
  if (*(int *)(param_1 + 0x9c) < -1) {
    iVar14 = *(int *)(param_1 + 0x9c);
  }
  FUN_142ed2f20(param_1,iVar14);
  FUN_142f0ee50(param_1 + 0x20);
  return;
}



// FUNCTION 142ebb630 FUN_142ebb630 body=849 status=ok
// SIG undefined FUN_142ebb630(void)

void FUN_142ebb630(longlong *param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 local_res8 [8];
  
  *(undefined2 *)((longlong)param_1 + 500) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x5b1) = 0;
  lVar8 = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  param_1[0xa4] = param_2;
  *(undefined4 *)(param_1 + 0xb4) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = param_3[1];
  *(undefined4 *)(param_1 + 0xb3) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x59c) = param_4[1];
  *(undefined4 *)(param_1 + 0xb5) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = param_5[1];
  if ((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)*(byte *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
  }
  *(uint *)((longlong)param_1 + 0x5b4) = uVar9;
  uVar2 = FWeakObjectPtr::Get(param_1 + 0xb3);
  FUN_142ed95f0(param_1,uVar2,0);
  FUN_142ed1510(param_1,1);
  (**(code **)(*param_1 + 0x298))(param_1,1);
  param_5._0_4_ = 0xffffffff;
  FUN_14170c210(&param_5,param_1);
  uVar10 = param_5._0_4_;
  param_5._0_4_ = 0xffffffff;
  plVar3 = (longlong *)FUN_14203bd20();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  lVar5 = lVar8;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_14598ae90;
    *(undefined4 *)(plVar4 + 1) = uVar10;
    uVar10 = 0xffffffff;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_14598aed8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar3[1];
    lVar5 = *plVar6;
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar7 = plVar4;
    *(undefined4 *)(puVar7 + 1) = 2;
  }
  param_1[0x9d] = lVar5;
  FUN_1416f8340(uVar10);
  FUN_1416f8340(param_5._0_4_);
  param_5._0_4_ = 0xffffffff;
  FUN_14170c210(&param_5,param_1);
  uVar10 = param_5._0_4_;
  param_5._0_4_ = 0xffffffff;
  plVar3 = (longlong *)FUN_14203bd30();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  lVar5 = lVar8;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_14598ae90;
    *(undefined4 *)(plVar4 + 1) = uVar10;
    uVar10 = 0xffffffff;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_14598aed8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar3[1];
    lVar5 = *plVar6;
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar7 = plVar4;
    *(undefined4 *)(puVar7 + 1) = 2;
  }
  param_1[0x9c] = lVar5;
  FUN_1416f8340(uVar10);
  FUN_1416f8340(param_5._0_4_);
  param_5._0_4_ = 0xffffffff;
  FUN_14170c210(&param_5,param_1);
  uVar10 = param_5._0_4_;
  param_5._0_4_ = 0xffffffff;
  plVar3 = (longlong *)FUN_14203bd40();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_14598af20;
    *(undefined4 *)(plVar4 + 1) = uVar10;
    uVar10 = 0xffffffff;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar8;
    *plVar4 = (longlong)&PTR_GetPoolName_14598af68;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar3[1];
    lVar8 = *plVar6;
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar7 = plVar4;
    *(undefined4 *)(puVar7 + 1) = 2;
  }
  param_1[0x9e] = lVar8;
  FUN_1416f8340(uVar10);
  FUN_1416f8340(param_5._0_4_);
  return;
}



// FUNCTION 142ebb990 FUN_142ebb990 body=1409 status=ok
// SIG undefined FUN_142ebb990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebb990(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined8 local_res8;
  
  param_1[9] = *param_3;
  param_1[10] = param_3[1];
  param_1[0xb] = param_3[2];
  param_1[0xc] = param_3[3];
  FString::operator=(param_1 + 0xd,param_3 + 4);
  pwVar13 = (wchar_t *)0x0;
  if ((param_1[10] != 0) && (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar8 = FUN_1428cc4e0(uVar9);
    if (lVar8 != 0) {
      lVar8 = FUN_142d7ea80(lVar8,param_1[10]);
      param_1[0x12] = lVar8;
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieEndReached",L"::");
      pwVar11 = pwVar13;
      while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res8,pwVar11 + 2,1);
      FUN_14074ba20(param_1[0x12] + 0x28,param_1,FUN_142eca390,local_res8);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaClosed",L"::");
      pwVar11 = pwVar13;
      while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res8,pwVar11 + 2,1);
      FUN_14074ba20(param_1[0x12] + 0x38,param_1,&LAB_142eca430,local_res8);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaOpened",L"::");
      pwVar11 = pwVar13;
      while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res8,pwVar11 + 2,1);
      FUN_14074ba20(param_1[0x12] + 0x48,param_1,FUN_140b7b820,local_res8);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaOpenFailed",L"::");
      pwVar11 = pwVar13;
      while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res8,pwVar11 + 2,1);
      FUN_14074ba20(param_1[0x12] + 0x58,param_1,FUN_140b7b820,local_res8);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMoviePlaybackResumed",L"::");
      pwVar11 = pwVar13;
      while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res8,pwVar11 + 2,1);
      FUN_14074ba20(param_1[0x12] + 0x68,param_1,&LAB_142ecb000,local_res8);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMoviePlaybackSuspended",L"::");
      pwVar11 = pwVar13;
      while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res8,pwVar11 + 2,1);
      FUN_14074ba20(param_1[0x12] + 0x78,param_1,&LAB_142eca430,local_res8);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieSeekCompleted",L"::");
      pwVar11 = pwVar13;
      while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res8,pwVar11 + 2,1);
      FUN_14074ba20(param_1[0x12] + 0x88,param_1,AK::MemoryMgr::StartProfileThreadUsage,local_res8);
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieTracksChanged",L"::");
      while (pwVar10 = pwVar11, pwVar10 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
        pwVar13 = pwVar10;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      FUN_14074ba20(param_1[0x12] + 0x98,param_1,AK::MemoryMgr::StartProfileThreadUsage,local_res8);
    }
  }
  if (param_1[0xb] == 0) {
    return;
  }
  fVar1 = *(float *)((longlong)param_1 + 100);
  fVar2 = *(float *)(param_1 + 0xc);
  param_1[0xf] = param_1[0xb];
  FWeakObjectPtr::operator=(param_1 + 0x11,param_2);
  lVar8 = param_1[0x10];
  if (lVar8 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_res8 = 0;
    uVar9 = UTexture2D::GetPrivateStaticClass();
    lVar8 = FUN_1417985e0(uVar9,param_2,0,0,0,0,0,0,0);
    param_1[0x10] = lVar8;
    if (lVar8 == 0) goto LAB_142ebbeb4;
  }
  if ((0 < (int)fVar2) && (0 < (int)fVar1)) {
    *(int *)(lVar8 + 0xc0) = (int)fVar2;
    *(int *)(param_1[0x10] + 0xc4) = (int)fVar1;
    *(byte *)(param_1[0x10] + 0x4b) = *(byte *)(param_1[0x10] + 0x4b) | 1;
    uVar6 = uRam00000001468b5d84;
    uVar5 = uRam00000001468b5d80;
    uVar4 = uRam00000001468b5d7c;
    lVar8 = param_1[0x10];
    *(undefined4 *)(lVar8 + 200) = _DAT_1468b5d78;
    *(undefined4 *)(lVar8 + 0xcc) = uVar4;
    *(undefined4 *)(lVar8 + 0xd0) = uVar5;
    *(undefined4 *)(lVar8 + 0xd4) = uVar6;
    *(uint *)(param_1[0x10] + 0xbc) = *(uint *)(param_1[0x10] + 0xbc) & 0xfffffffe;
    lVar8 = param_1[0x10];
    FUN_14287a580(lVar8,*(undefined4 *)(lVar8 + 0xc0),*(undefined4 *)(lVar8 + 0xc4));
    FUN_142894320(param_1[0x10],1);
  }
LAB_142ebbeb4:
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x11);
  if (cVar7 != '\0') {
    plVar12 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x11);
    (**(code **)(*plVar12 + 0x2a0))(plVar12,param_1 + 0xd,param_1[0x10]);
    FUN_142eb3aa0(param_1 + 0xf);
  }
  return;
}



// FUNCTION 142ebbf20 FUN_142ebbf20 body=247 status=ok
// SIG undefined FUN_142ebbf20(void)

void FUN_142ebbf20(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  byte param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x5d0) = local_res8;
  *(undefined4 *)(param_1 + 0x5d4) = local_resc;
  FWeakObjectPtr::operator=(param_1 + 0x60c,param_2);
  uVar3 = 0;
  if (param_3 != 0) {
    uVar1 = FUN_142f30760();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  FWeakObjectPtr::operator=(param_1 + 0x614,uVar3);
  FWeakObjectPtr::operator=(param_1 + 0x5d8,param_3);
  FWeakObjectPtr::operator=(&local_res10,0);
  *(undefined4 *)(param_1 + 0x5c8) = local_res10;
  *(undefined4 *)(param_1 + 0x5cc) = local_res14;
  FWeakObjectPtr::operator=(param_1 + 0x5e0,param_4);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffff872;
  LOCK();
  *(uint *)(param_1 + 0x61c) = (uint)param_5;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x600) = 0;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x5f8) = 1;
  FUN_142ed95f0(param_1,param_3,0);
  return;
}



// FUNCTION 142ebc020 FUN_142ebc020 body=219 status=ok
// SIG undefined FUN_142ebc020(void)

void FUN_142ebc020(longlong param_1,undefined8 param_2,undefined1 param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x248);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2,1,0);
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_142f0be00(*(longlong *)(param_1 + 800),param_5);
    FUN_142f0c980(*(undefined8 *)(param_1 + 800),param_3,1);
    *(undefined1 *)(*(longlong *)(param_1 + 800) + 0x308) = 1;
  }
  plVar3 = (longlong *)(param_1 + 0x328);
  if (param_4 != plVar3) {
    if (((int)param_4[1] == 0) || (param_4 = (longlong *)*param_4, param_4 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x330) != 0) &&
         (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar3 != 0) {
          lVar2 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar2;
        }
        *(undefined4 *)(param_1 + 0x330) = 0;
      }
    }
    else {
      (**(code **)(*param_4 + 0x30))(param_4,plVar3);
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_5);
  return;
}



// FUNCTION 142ebc100 FUN_142ebc100 body=58 status=ok
// SIG undefined FUN_142ebc100(void)

void FUN_142ebc100(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *param_1;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  uVar2 = (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000142ebc137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x30))(param_1,uVar2,0,0);
  return;
}



// FUNCTION 142ebc140 FUN_142ebc140 body=216 status=ok
// SIG undefined FUN_142ebc140(void)

void FUN_142ebc140(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x248);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_142ed3b20(*(longlong *)(param_1 + 0x318),param_3);
    FUN_142ed43c0(*(undefined8 *)(param_1 + 0x318),param_4);
  }
  plVar1 = (longlong *)(param_1 + 0x340);
  if (param_5 != plVar1) {
    if (((int)param_5[1] == 0) || (plVar2 = (longlong *)*param_5, plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x348) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar3 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar3;
        }
        *(undefined4 *)(param_1 + 0x348) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  *(undefined4 *)(param_1 + 800) = param_4;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return;
}



// FUNCTION 142ebc220 FUN_142ebc220 body=2002 status=ok
// SIG undefined FUN_142ebc220(void)

void FUN_142ebc220(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,longlong *param_6,char param_7)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FKey::operator=(param_1 + 0x66,&DAT_1469e97d8);
  FKey::operator=(param_1 + 0x69,&DAT_1469e97d8);
  *(char *)(param_1 + 0x65) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x329) = param_5;
  if (param_7 == '\0') {
    local_58 = (longlong *)0x0;
    local_50 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"columnSingleButtonLeft",0x2e);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    lVar3 = FUN_140ecbdf0(param_1,&local_58,0,6,&local_48);
    param_1[0x6e] = lVar3;
    plVar4 = local_48;
    for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_58 = (longlong *)0x0;
    local_50 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"columnSingleButtonRight",0x30);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    lVar3 = FUN_140ecbdf0(param_1,&local_58,0,6,&local_48);
    param_1[0x6f] = lVar3;
    plVar4 = local_48;
    for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (param_1[0x6e] != 0) {
      uStack_30 = 0;
      local_68 = (longlong *)0x0;
      local_38 = FUN_142eca740;
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_60 = CONCAT44(local_60._4_4_,3);
      local_68 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)IDelegateInstance::vftable;
        *plVar4 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_30;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_143fcff08;
      }
      plVar4 = param_1 + 0x70;
LAB_142ebc468:
      FUN_142ee1c00(param_1[0x6e],PTR_s_rollOver_14673ca10,plVar4,&local_68);
      if ((int)local_60 != 0) {
        if (local_68 == (longlong *)0x0) goto LAB_142ebc57a;
        (**(code **)(*local_68 + 0x28))(local_68,0);
        if (local_68 != (longlong *)0x0) {
          local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
        }
        local_60 = local_60 & 0xffffffff00000000;
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
    }
  }
  else if (param_7 == '\x01') {
    local_58 = (longlong *)0x0;
    local_50 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"columnSingleButton",0x26);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    lVar3 = FUN_140ecbdf0(param_1,&local_58,0,6,&local_48);
    param_1[0x6e] = lVar3;
    plVar4 = local_48;
    for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    param_1[0x6f] = 0;
  }
  else if (param_7 == '\x02') {
    local_58 = (longlong *)0x0;
    local_50 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"columnSingleButtonRight",0x30);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    lVar3 = FUN_140ecbdf0(param_1,&local_58,0,6,&local_68);
    param_1[0x6e] = lVar3;
    plVar4 = local_68;
    for (iVar6 = (int)local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_48 = (longlong *)0x0;
    local_40 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"columnSingleButtonLeft",0x2e);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    lVar3 = FUN_140ecbdf0(param_1,&local_48,0,6,&local_58);
    param_1[0x6f] = lVar3;
    plVar4 = local_58;
    for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (param_1[0x6e] != 0) {
      uStack_30 = 0;
      local_68 = (longlong *)0x0;
      local_38 = FUN_142eca6d0;
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_60 = CONCAT44(local_60._4_4_,3);
      local_68 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)IDelegateInstance::vftable;
        *plVar4 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_30;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_143fcff08;
      }
      plVar4 = param_1 + 0x71;
      goto LAB_142ebc468;
    }
  }
LAB_142ebc57a:
  if (param_1[0x6e] != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"label",0xc);
    FUN_142f100e0(param_1[0x6e],&local_48,param_3);
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    lVar3 = *param_1;
    uVar2 = (**(code **)(param_1[0x2e] + 0x10))();
    uVar5 = (**(code **)(lVar3 + 0x308))(param_1,&local_38,uVar2);
    FUN_142088cf0(param_1[0x6e],uVar5);
    if (local_38 != (code *)0x0) {
      FMemory::Free();
    }
  }
  if (param_1[0x6f] != 0) {
    local_48 = (longlong *)0x0;
    if (*(char *)((longlong)param_1 + 0x329) == '\0') {
      local_40 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"disabled",0x12);
      FUN_142088cf0(param_1[0x6f],&local_48);
      plVar4 = local_48;
    }
    else {
      local_40 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"label",0xc);
      FUN_142f100e0(param_1[0x6f],&local_48,param_4);
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      uStack_30 = 0;
      local_68 = (longlong *)0x0;
      local_38 = FUN_142eca6d0;
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_60 = CONCAT44(local_60._4_4_,3);
      local_68 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)IDelegateInstance::vftable;
        *plVar4 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_30;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_143fcff08;
      }
      FUN_142ee1c00(param_1[0x6f],PTR_s_rollOver_14673ca10,param_1 + 0x72,&local_68);
      plVar4 = local_68;
      if ((int)local_60 != 0) {
        if (local_68 == (longlong *)0x0) goto LAB_142ebc94e;
        (**(code **)(*local_68 + 0x28))(local_68,0);
        if (local_68 != (longlong *)0x0) {
          local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
        }
        local_60 = local_60 & 0xffffffff00000000;
        plVar4 = local_68;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
LAB_142ebc94e:
  plVar4 = (longlong *)param_1[0x49];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2,1,0);
  }
  plVar4 = param_1 + 0x5f;
  if (param_6 != plVar4) {
    if (((int)param_6[1] != 0) && (param_6 = (longlong *)*param_6, param_6 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142ebc9b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_6 + 0x30))(param_6,plVar4);
      return;
    }
    if (((int)param_1[0x60] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*plVar4 != 0) {
        lVar3 = FMemory::Realloc(*plVar4,0,0);
        *plVar4 = lVar3;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 142ebca00 FUN_142ebca00 body=154 status=ok
// SIG undefined FUN_142ebca00(void)

void FUN_142ebca00(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 *param_8)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x248);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
  }
  FUN_142ebcb80(param_1,param_3,param_4,param_5,param_6,param_7);
  *(undefined4 *)(param_1 + 0x328) = *param_8;
  *(undefined4 *)(param_1 + 0x32c) = param_8[1];
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_8 + 2);
  return;
}



// FUNCTION 142ebcaa0 FUN_142ebcaa0 body=224 status=ok
// SIG undefined FUN_142ebcaa0(void)

void FUN_142ebcaa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x248);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2,1,0);
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_142f0be00(*(longlong *)(param_1 + 800),param_3);
    FUN_142f0c980(*(undefined8 *)(param_1 + 800),param_4,1);
    *(undefined1 *)(*(longlong *)(param_1 + 800) + 0x308) = 1;
  }
  plVar3 = (longlong *)(param_1 + 0x328);
  if (param_5 != plVar3) {
    if (((int)param_5[1] != 0) && (param_5 = (longlong *)*param_5, param_5 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142ebcb3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_5 + 0x30))(param_5,plVar3);
      return;
    }
    if ((*(int *)(param_1 + 0x330) != 0) &&
       (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*plVar3 != 0) {
        lVar2 = FMemory::Realloc(*plVar3,0,0);
        *plVar3 = lVar2;
      }
      *(undefined4 *)(param_1 + 0x330) = 0;
    }
  }
  return;
}



// FUNCTION 142ebcb80 FUN_142ebcb80 body=862 status=ok
// SIG undefined FUN_142ebcb80(void)

void FUN_142ebcb80(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
                  char param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  
  if (1e-08 < ABS(param_3 - param_4)) {
    fVar9 = param_3;
    if (param_3 <= param_4) {
      fVar9 = param_4;
    }
    fVar8 = param_3;
    if (param_4 <= param_3) {
      fVar8 = param_4;
    }
  }
  else {
    fVar9 = 1.0;
    fVar8 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x354) = fVar8;
  *(float *)(param_1 + 0x6b) = fVar9;
  fVar8 = *(float *)((longlong)param_1 + 0x354);
  fVar10 = fVar8;
  if ((fVar8 <= param_2) && (fVar10 = fVar9, param_2 <= fVar9)) {
    fVar10 = param_2;
  }
  fVar9 = *(float *)(param_1 + 0x6b) - fVar8;
  if (0.0 <= param_5) {
    fVar11 = fVar9;
    if (param_5 <= fVar9) {
      fVar11 = param_5;
    }
  }
  else {
    fVar11 = 0.0;
  }
  *(float *)(param_1 + 0x6a) = fVar11;
  fVar12 = (1.0 / fVar9) * param_5;
  if (0.0001 < fVar11) {
    plVar5 = param_1 + 0x6e;
    *(undefined4 *)(param_1 + 0x6f) = 0;
    if (*(int *)((longlong)param_1 + 0x37c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar5,0);
    }
    fVar11 = 0.0;
    do {
      iVar3 = (int)param_1[0x6f];
      *(int *)(param_1 + 0x6f) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x37c) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5,iVar3);
      }
      *(float *)(*plVar5 + (longlong)iVar3 * 4) = fVar11;
      fVar11 = fVar11 + fVar12;
    } while (fVar11 < 1.0);
    iVar3 = (int)param_1[0x6f];
    *(int *)(param_1 + 0x6f) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x37c) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5,iVar3);
    }
    *(undefined4 *)(*plVar5 + (longlong)iVar3 * 4) = 0x3f800000;
    if (param_1[0x68] != 0) {
      FUN_142f10910(param_1[0x68],fVar12);
    }
  }
  if (param_1[0x68] != 0) {
    FUN_142f0fa70(param_1[0x68],(fVar10 - fVar8) * (1.0 / fVar9));
    iVar3 = *(int *)((longlong)param_1 + 0x31c);
    local_b8 = 0;
    iStack_b0 = 0;
    uStack_ac = 0x3f000000;
    if ((((0 < iVar3) && (0.0 < param_5)) && (0 < (int)param_1[100])) && (0 < (int)param_1[99])) {
      iVar6 = (int)((param_4 - param_3) / ((float)(int)param_1[100] * param_5)) / iVar3;
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      local_b8 = CONCAT44(iVar6,(int)param_1[99]);
      iStack_b0 = iVar3;
    }
    lVar4 = param_1[0x68];
    *(undefined8 *)(lVar4 + 0x2c8) = local_b8;
    *(ulonglong *)(lVar4 + 0x2d0) = CONCAT44(0x3f000000,iStack_b0);
  }
  if ((longlong *)param_1[0x69] == (longlong *)0x0) {
    *(char *)((longlong)param_1 + 0x35c) = param_6;
  }
  else {
    if (param_6 != '\0') {
      fVar10 = (float)((int)ROUND((fVar10 + fVar10) - 0.5) >> 1);
    }
    *(float *)(param_1 + 0x6d) = fVar10;
    lVar4 = *(longlong *)param_1[0x69];
    uVar7 = (**(code **)(*param_1 + 0x330))(param_1,&local_b8,fVar10);
    (**(code **)(lVar4 + 0x2b0))(param_1[0x69],uVar7,1,0);
    plVar5 = (longlong *)CONCAT44(uStack_ac,iStack_b0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    *(char *)((longlong)param_1 + 0x35c) = param_6;
  }
  return;
}



// FUNCTION 142ebcee0 FUN_142ebcee0 body=832 status=ok
// SIG undefined FUN_142ebcee0(void)

longlong FUN_142ebcee0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 local_res18;
  undefined4 local_res20;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_60 [2];
  undefined8 local_50;
  longlong local_48;
  
  lVar11 = 0;
  local_res20 = 0;
  local_res18 = param_3;
  FUN_142eb1960(param_1,local_60,param_2,&local_res18);
  lVar9 = local_48;
  if (local_48 == 0) {
    FUN_142ebe290();
    goto LAB_142ebd1c4;
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,L"Set Me",L"GbxGFxGridScrollingList",L"SetMeText");
  plVar10 = *(longlong **)(lVar9 + 0x248);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x2b0))(plVar10,uVar8,1,0);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_70 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  lVar5 = local_48;
  plVar10 = (longlong *)(local_48 + 0x170);
  (**(code **)(*plVar10 + 0x38))(plVar10,1);
  lVar9 = *plVar10;
  *(undefined2 *)(lVar5 + 0x17a) = 0;
  *(undefined1 *)(lVar5 + 0x179) = 0;
  uVar6 = (**(code **)(lVar9 + 0x10))(plVar10);
  (**(code **)(lVar9 + 0x30))(plVar10,uVar6,0,0);
  iVar7 = (int)param_1[0x50];
  *(int *)(param_1 + 0x50) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0x284) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x4f,iVar7);
  }
  lVar9 = (longlong)iVar7 * 0x20 + param_1[0x4f];
  FString::FString(lVar9,local_60);
  *(undefined8 *)(lVar9 + 0x10) = local_50;
  *(longlong *)(lVar9 + 0x18) = local_48;
  if (*(char *)((longlong)param_1 + 0x241) != '\x01') goto LAB_142ebd1c4;
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
LAB_142ebd0cc:
    plVar10 = &local_88;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    bVar4 = false;
    bVar12 = true;
  }
  else {
    piVar1 = (int *)(param_1[6] + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_142ebd0cc;
    local_90 = (longlong *)param_1[6];
    local_98 = 0;
    if (local_90 == (longlong *)0x0) {
LAB_142ebd0bc:
      plVar10 = &local_98;
      bVar4 = true;
      bVar12 = false;
      lVar11 = local_98;
    }
    else {
      LOCK();
      iVar7 = (int)local_90[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(local_90 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar12) {
        LOCK();
        bVar12 = iVar7 == (int)local_90[1];
        if (bVar12) {
          *(int *)(local_90 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar12) {
          if (local_90 != (longlong *)0x0) {
            local_98 = param_1[5];
          }
          goto LAB_142ebd0bc;
        }
        LOCK();
        iVar7 = (int)local_90[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(local_90 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      local_90 = (longlong *)0x0;
      plVar10 = &local_98;
      bVar4 = true;
      bVar12 = false;
      lVar11 = 0;
    }
  }
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_80;
  if ((bVar12) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar10 = local_90;
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (lVar11 != 0) {
    FUN_1420504f0(lVar11,local_48,0);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
LAB_142ebd1c4:
  if (param_4 == '\0') {
    (**(code **)(*param_1 + 0x300))(param_1);
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return local_48;
}



// FUNCTION 142ebd220 FUN_142ebd220 body=905 status=ok
// SIG undefined FUN_142ebd220(void)

longlong FUN_142ebd220(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  void *_Src;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_res20;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_60 [2];
  undefined8 local_50;
  longlong local_48;
  
  local_res20 = param_4;
  FUN_142eb1960(param_1,local_60,param_3,&local_res20);
  lVar9 = local_48;
  if (local_48 == 0) {
    FUN_142ebe290();
    goto LAB_142ebd54a;
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,L"Set Me",L"GbxGFxGridScrollingList",L"SetMeText");
  plVar10 = *(longlong **)(lVar9 + 0x248);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x2b0))(plVar10,uVar8,1,0);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_70 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  lVar5 = local_48;
  plVar10 = (longlong *)(local_48 + 0x170);
  (**(code **)(*plVar10 + 0x38))(plVar10,1);
  lVar9 = *plVar10;
  *(undefined2 *)(lVar5 + 0x17a) = 0;
  *(undefined1 *)(lVar5 + 0x179) = 0;
  uVar6 = (**(code **)(lVar9 + 0x10))(plVar10);
  (**(code **)(lVar9 + 0x30))(plVar10,uVar6,0,0);
  if ((param_2 < 0) || ((int)param_1[0x50] <= param_2)) {
    iVar7 = (int)param_1[0x50];
    *(int *)(param_1 + 0x50) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0x284) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x4f,iVar7);
    }
    lVar9 = (longlong)iVar7 * 0x20 + param_1[0x4f];
  }
  else {
    plVar10 = param_1 + 0x4f;
    iVar7 = (int)param_1[0x50];
    *(int *)(param_1 + 0x50) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0x284) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar10,iVar7);
    }
    _Src = (void *)(*plVar10 + (longlong)param_2 * 0x20);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 0x20),_Src,(longlong)(iVar7 - param_2) << 5);
    lVar9 = (longlong)param_2 * 0x20 + *plVar10;
  }
  FString::FString(lVar9,local_60);
  *(undefined8 *)(lVar9 + 0x10) = local_50;
  *(longlong *)(lVar9 + 0x18) = local_48;
  if (*(char *)((longlong)param_1 + 0x241) != '\x01') goto LAB_142ebd54a;
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
LAB_142ebd459:
    plVar10 = &local_88;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    bVar4 = false;
    bVar11 = true;
    lVar9 = 0;
  }
  else {
    piVar1 = (int *)(param_1[6] + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_142ebd459;
    local_90 = (longlong *)param_1[6];
    local_98 = 0;
    if (local_90 == (longlong *)0x0) {
LAB_142ebd449:
      plVar10 = &local_98;
      bVar4 = true;
      bVar11 = false;
      lVar9 = local_98;
    }
    else {
      LOCK();
      iVar7 = (int)local_90[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(local_90 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar7 == (int)local_90[1];
        if (bVar11) {
          *(int *)(local_90 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_90 != (longlong *)0x0) {
            local_98 = param_1[5];
          }
          goto LAB_142ebd449;
        }
        LOCK();
        iVar7 = (int)local_90[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_90 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      plVar10 = &local_98;
      local_90 = (longlong *)0x0;
      bVar4 = true;
      bVar11 = false;
      lVar9 = 0;
    }
  }
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_80;
  if ((bVar11) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar10 = local_90;
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (lVar9 != 0) {
    FUN_1420504f0(lVar9,local_48,0);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
LAB_142ebd54a:
  (**(code **)(*param_1 + 0x300))(param_1);
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return local_48;
}



// FUNCTION 142ebd5b0 FUN_142ebd5b0 body=824 status=ok
// SIG undefined FUN_142ebd5b0(void)

longlong FUN_142ebd5b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_res18 [2];
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_60 [2];
  undefined8 local_50;
  longlong local_48;
  
  local_res18[0] = param_3;
  FUN_142eb1960(param_1,local_60,param_2,local_res18);
  lVar9 = local_48;
  if (local_48 == 0) {
    FUN_142ebe290();
    goto LAB_142ebd89d;
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,L"Set Me",L"GbxGFxGridScrollingList",L"SetMeText");
  plVar10 = *(longlong **)(lVar9 + 0x248);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x2b0))(plVar10,uVar8,1,0);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_70 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  lVar5 = local_48;
  plVar10 = (longlong *)(local_48 + 0x170);
  (**(code **)(*plVar10 + 0x38))(plVar10,1);
  lVar9 = *plVar10;
  *(undefined2 *)(lVar5 + 0x17a) = 0;
  *(undefined1 *)(lVar5 + 0x179) = 0;
  uVar6 = (**(code **)(lVar9 + 0x10))(plVar10);
  (**(code **)(lVar9 + 0x30))(plVar10,uVar6,0,0);
  iVar7 = *(int *)(param_1 + 0x280);
  *(int *)(param_1 + 0x280) = iVar7 + 1;
  if (*(int *)(param_1 + 0x284) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x278,iVar7);
  }
  lVar9 = (longlong)iVar7 * 0x20 + *(longlong *)(param_1 + 0x278);
  FString::FString(lVar9,local_60);
  *(undefined8 *)(lVar9 + 0x10) = local_50;
  *(longlong *)(lVar9 + 0x18) = local_48;
  if (*(char *)(param_1 + 0x241) != '\x01') goto LAB_142ebd89d;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ebd79c:
    plVar10 = &local_88;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    bVar4 = false;
    bVar11 = true;
    lVar9 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_142ebd79c;
    local_90 = *(longlong **)(param_1 + 0x30);
    local_98 = 0;
    if (local_90 == (longlong *)0x0) {
LAB_142ebd78c:
      plVar10 = &local_98;
      bVar4 = true;
      bVar11 = false;
      lVar9 = local_98;
    }
    else {
      LOCK();
      iVar7 = (int)local_90[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(local_90 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar7 == (int)local_90[1];
        if (bVar11) {
          *(int *)(local_90 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_90 != (longlong *)0x0) {
            local_98 = *(longlong *)(param_1 + 0x28);
          }
          goto LAB_142ebd78c;
        }
        LOCK();
        iVar7 = (int)local_90[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_90 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      plVar10 = &local_98;
      local_90 = (longlong *)0x0;
      bVar4 = true;
      bVar11 = false;
      lVar9 = 0;
    }
  }
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_80;
  if ((bVar11) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar10 = local_90;
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (lVar9 != 0) {
    FUN_1420504f0(lVar9,local_48,0);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
LAB_142ebd89d:
  *(undefined1 *)(param_1 + 0x2ec) = 1;
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return local_48;
}



// FUNCTION 142ebd8f0 FUN_142ebd8f0 body=45 status=ok
// SIG undefined FUN_142ebd8f0(void)

void FUN_142ebd8f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x5b8))(param_1,(longlong)param_1 + 0x21c);
  *(undefined1 *)((longlong)param_1 + 0x21a) = 1;
  FUN_142ecf3f0(param_1);
  return;
}



// FUNCTION 142ebd920 FUN_142ebd920 body=16 status=ok
// SIG undefined FUN_142ebd920(void)

undefined8 FUN_142ebd920(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x61c);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x61c) = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),uVar1 != 0);
}



// FUNCTION 142ebd930 FUN_142ebd930 body=141 status=ok
// SIG undefined FUN_142ebd930(void)

bool FUN_142ebd930(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x59c);
    if (0 < *(int *)(lVar3 + 0x48)) {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x59c);
      if ((0 < *(int *)(lVar3 + 0x48)) &&
         (plVar1 = *(longlong **)
                    (*(longlong *)(lVar3 + 0x40) + -8 + (longlong)*(int *)(lVar3 + 0x48) * 8),
         plVar1 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar1 + 0x278))();
        return param_1 == lVar3;
      }
      return param_1 == 0;
    }
  }
  return true;
}



// FUNCTION 142ebd9c0 FUN_142ebd9c0 body=208 status=ok
// SIG undefined FUN_142ebd9c0(void)

undefined1 FUN_142ebd9c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x680);
  if (cVar5 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x680);
    cVar5 = FUN_142ebd930(uVar2);
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_142ebda08;
    }
  }
  bVar4 = false;
LAB_142ebda08:
  cVar5 = FUN_142ebd930(param_1);
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar6 == '\0') {
    bVar8 = false;
  }
  else {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x59c);
    iVar1 = *(int *)(lVar3 + 0x48);
    iVar7 = FUN_142eecda0(uVar2,param_1);
    bVar8 = iVar7 == iVar1 + -2;
  }
  if (((!bVar4) && (cVar5 == '\0')) && (!bVar8)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142ebda90 FUN_142ebda90 body=11 status=ok
// SIG undefined FUN_142ebda90(void)

bool FUN_142ebda90(longlong param_1)

{
  return *(char *)(param_1 + 0x2c6) == '\x01';
}



// FUNCTION 142ebdaa0 FUN_142ebdaa0 body=123 status=ok
// SIG undefined FUN_142ebdaa0(void)

bool FUN_142ebdaa0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_142937720();
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
      lVar2 = UGameInstance::FindLocalPlayerFromControllerId(lVar2,param_2);
      return lVar2 != 0;
    }
  }
  return true;
}



// FUNCTION 142ebdb20 FUN_142ebdb20 body=63 status=ok
// SIG undefined FUN_142ebdb20(void)

bool FUN_142ebdb20(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x608) != '\0') {
    lVar1 = FUN_140f141d0();
    if (lVar1 != 0) {
      lVar1 = FUN_14270bb10(lVar1);
      if (lVar1 != 0) {
        return *(int *)(lVar1 + 0x108) != param_2;
      }
    }
  }
  return false;
}



// FUNCTION 142ebdb60 FUN_142ebdb60 body=46 status=ok
// SIG undefined FUN_142ebdb60(void)

bool FUN_142ebdb60(longlong param_1)

{
  if (*(char *)(param_1 + 900) != '\0') {
    return ABS(*(float *)(param_1 + 0x380) - *(float *)(param_1 + 0x368)) <= 0.001;
  }
  return false;
}



// FUNCTION 142ebdb90 FUN_142ebdb90 body=61 status=ok
// SIG undefined FUN_142ebdb90(void)

bool FUN_142ebdb90(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 800) != 0) && (*(char *)(param_1 + 0x33c) != '\0')) {
    iVar1 = FUN_142eeb880();
    return *(int *)(param_1 + 0x338) == iVar1;
  }
  return false;
}



// FUNCTION 142ebdbd0 IsSafeToExecute body=35 status=ok
// SIG undefined IsSafeToExecute(void)

ulonglong TBaseSPMethodDelegateInstance<0,SSearchBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,FText>
          ::IsSafeToExecute(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ebdc00 FUN_142ebdc00 body=41 status=ok
// SIG undefined FUN_142ebdc00(void)

ulonglong FUN_142ebdc00(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14202a080();
  if ((char)uVar1 != '\0') {
    return (ulonglong)(*(byte *)(param_1 + 0x624) & 1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142ebdc30 FUN_142ebdc30 body=133 status=ok
// SIG undefined FUN_142ebdc30(void)

bool FUN_142ebdc30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x9b) == '\0') {
    return *(char *)(param_1 + 8) == '\0';
  }
  lVar2 = *(longlong *)(param_1 + 0x108);
  lVar3 = (longlong)*(int *)(param_1 + 0x110) * 0x20 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return false;
    }
    if ((*(longlong *)(lVar2 + 0x18) != 0) &&
       (cVar1 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x170) + 0x40))(),
       cVar1 != '\0')) break;
    lVar2 = lVar2 + 0x20;
  }
  return true;
}



// FUNCTION 142ebdcc0 ByteToBoolean body=7 status=ok
// SIG undefined ByteToBoolean(void)

bool ULowEntryExtendedStandardLibrary::ByteToBoolean(char param_1)

{
  return param_1 == '\x01';
}



// FUNCTION 142ebdcd0 FUN_142ebdcd0 body=16 status=ok
// SIG undefined FUN_142ebdcd0(void)

undefined1 FUN_142ebdcd0(char param_1)

{
  if ((param_1 != '\a') && (param_1 != '\x04')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142ebdce0 IsWeaponType body=10 status=ok
// SIG undefined IsWeaponType(void)

bool UNF_CustomizationStatics::IsWeaponType(char param_1)

{
  return (byte)(param_1 - 5U) < 3;
}



// FUNCTION 142ebdcf0 FUN_142ebdcf0 body=16 status=ok
// SIG undefined FUN_142ebdcf0(void)

undefined1 FUN_142ebdcf0(char param_1)

{
  if ((param_1 != '\x06') && (param_1 != '\x03')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142ebdd00 FUN_142ebdd00 body=16 status=ok
// SIG undefined FUN_142ebdd00(void)

undefined1 FUN_142ebdd00(char param_1)

{
  if ((param_1 != '\x05') && (param_1 != '\x02')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142ebdd10 FUN_142ebdd10 body=90 status=ok
// SIG undefined FUN_142ebdd10(void)

undefined1 FUN_142ebdd10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x240);
    if (((*(longlong *)(lVar1 + 0x5a8) != 0) && (param_1 != 0)) &&
       (param_1 == *(longlong *)(*(longlong *)(lVar1 + 0x5a8) + 0x48))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ebdd70 FUN_142ebdd70 body=392 status=ok
// SIG undefined FUN_142ebdd70(void)

undefined8 FUN_142ebdd70(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res8;
  longlong local_res10;
  longlong local_18 [2];
  
  iVar5 = *(int *)((longlong)param_1 + 0x61c);
  iVar3 = 0;
  if ((char)param_1[0xc1] != '\0') {
    lVar4 = FUN_140f141d0();
    local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
    iVar3 = 0;
    if (lVar4 != 0) {
      cVar1 = FUN_142710360(lVar4,&local_res8);
      iVar3 = 0;
      if (cVar1 != '\0') {
        iVar3 = (int)local_res8;
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x61c) != iVar3) {
    if ((char)param_1[0xc1] != '\0') {
      lVar4 = FUN_140f141d0(param_1);
      local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
      if (lVar4 != 0) {
        FUN_142710360(lVar4,&local_res8);
      }
    }
    local_res10 = param_1[3];
    FName::ToString(&local_res10,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    iVar5 = 0;
    if ((char)param_1[0xc1] != '\0') {
      lVar4 = FUN_140f141d0(param_1);
      local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
      if (lVar4 != 0) {
        cVar1 = FUN_142710360(lVar4,&local_res8);
        iVar5 = 0;
        if (cVar1 != '\0') {
          iVar5 = (int)local_res8;
        }
      }
    }
  }
  iVar3 = (int)param_1[0xc3];
  if (((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x558))(param_1), (int)param_1[0xc3] != iVar2)) {
    local_res8 = param_1[3];
    FName::ToString(&local_res8,local_18);
    (**(code **)(*param_1 + 0x558))(param_1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    iVar3 = (**(code **)(*param_1 + 0x558))(param_1);
  }
  if (iVar3 != 1) {
    if (iVar3 == 3) {
      if (iVar5 != 0) {
        return 0;
      }
    }
    else {
      if (iVar3 != 4) {
        return 0;
      }
      if (iVar5 != 2) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142ebdf00 FUN_142ebdf00 body=21 status=ok
// SIG undefined FUN_142ebdf00(void)

undefined1 FUN_142ebdf00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x318) + 0x1a0);
  }
  return 0;
}



// FUNCTION 142ebdf20 FUN_142ebdf20 body=189 status=ok
// SIG undefined FUN_142ebdf20(void)

undefined8 FUN_142ebdf20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 == 0) {
    return 1;
  }
  lVar2 = UInputKeySelector::GetPrivateStaticClass();
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ebdfb1;
  }
  lVar3 = 0;
LAB_142ebdfb1:
  if ((*(longlong *)(lVar3 + 0x5a8) != 0) &&
     (param_1 == *(longlong *)(*(longlong *)(lVar3 + 0x5a8) + 0x48))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142ebdfe0 FUN_142ebdfe0 body=50 status=ok
// SIG undefined FUN_142ebdfe0(void)

undefined8 FUN_142ebdfe0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14202a080();
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x624) & 1) != 0)) {
    return 1;
  }
  uVar2 = FUN_142089f90(param_1);
  return uVar2;
}



// FUNCTION 142ebe020 GetUseAutoGears body=11 status=ok
// SIG undefined GetUseAutoGears(void)

bool UChaosVehicleMovementComponent::GetUseAutoGears(longlong param_1)

{
  return *(char *)(param_1 + 0x2c5) == '\x01';
}



// FUNCTION 142ebe030 FUN_142ebe030 body=124 status=ok
// SIG undefined FUN_142ebe030(void)

longlong FUN_142ebe030(longlong *param_1)

{
  longlong lVar1;
  uint7 uVar2;
  undefined4 local_res8 [8];
  
  if ((char)param_1[0xc1] != '\0') {
    lVar1 = FUN_140f141d0();
    local_res8[0] = 0xffffffff;
    if (lVar1 != 0) {
      FUN_142710360(lVar1,local_res8);
    }
  }
  (**(code **)(*param_1 + 0x558))(param_1);
  uVar2 = (uint7)(int3)((uint)(int)param_1[0xc3] >> 8);
  switch((int)param_1[0xc3]) {
  case 1:
  case 3:
  case 4:
  case 7:
switchD_142ebe091_caseD_1:
    return CONCAT71(uVar2,1);
  case 5:
    if (*(int *)((longlong)param_1 + 0x61c) != 0) goto switchD_142ebe091_caseD_1;
    break;
  case 6:
    if (*(int *)((longlong)param_1 + 0x61c) != 2) goto switchD_142ebe091_caseD_1;
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142ebe0d0 FUN_142ebe0d0 body=51 status=ok
// SIG undefined FUN_142ebe0d0(void)

ulonglong FUN_142ebe0d0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if ((char)uVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    return (ulonglong)*(byte *)(lVar2 + 0x328);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142ebe120 FUN_142ebe120 body=8 status=ok
// SIG undefined FUN_142ebe120(void)

undefined1 FUN_142ebe120(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x608);
}



// FUNCTION 142ebe130 FUN_142ebe130 body=43 status=ok
// SIG undefined FUN_142ebe130(void)

undefined1 FUN_142ebe130(longlong param_1)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x4c0) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142ebe180 FUN_142ebe180 body=16 status=ok
// SIG undefined FUN_142ebe180(void)

undefined8 FUN_142ebe180(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x600);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x600) = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),uVar1 != 0);
}



// FUNCTION 142ebe190 FUN_142ebe190 body=21 status=ok
// SIG undefined FUN_142ebe190(void)

undefined1 FUN_142ebe190(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x340) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x340) + 800);
  }
  return 0;
}


