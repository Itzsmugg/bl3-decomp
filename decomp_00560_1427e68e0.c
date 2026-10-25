// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1427e68e0 FUN_1427e68e0 body=172 status=ok
// SIG undefined FUN_1427e68e0(void)

void FUN_1427e68e0(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if ((param_2 == '\0') &&
     ((cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0), cVar1 == '\0' ||
      (*(char *)((longlong)param_1 + 0xeb1) == '\0')))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)((longlong)param_1 + 0x3c1) = *(byte *)((longlong)param_1 + 0x3c1) & 0xfe;
  *(byte *)((longlong)param_1 + 0x3c1) = *(byte *)((longlong)param_1 + 0x3c1) | bVar3;
  lVar2 = FUN_1423af5a0(param_1);
  if ((lVar2 != 0) && (uVar6 = uVar4, 0 < (int)param_1[0x17f])) {
    do {
      if (*(longlong *)(uVar4 + param_1[0x17e]) != 0) {
        FUN_1426a9000(*(longlong *)(uVar4 + param_1[0x17e]),bVar3);
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)param_1[0x17f]);
  }
  return;
}



// FUNCTION 1427e6990 SetHiddenMaterials body=22 status=ok
// SIG undefined SetHiddenMaterials(void)

void FSkeletalMeshObject::SetHiddenMaterials(longlong param_1,int param_2,undefined8 param_3)

{
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
            ((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 8),param_3);
  return;
}



// FUNCTION 1427e69b0 FUN_1427e69b0 body=159 status=ok
// SIG undefined FUN_1427e69b0(void)

void FUN_1427e69b0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  FUN_1426a9580(param_1 + 0x3b0);
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0xbf0);
  uVar5 = (longlong)*(int *)(param_1 + 0xbf8) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0xbf8) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        cVar2 = FBodyInstance::IsValidBodyInstance(lVar1);
        if (cVar2 != '\0') {
          FUN_1426a9580(lVar1,param_2);
        }
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 1427e6a50 FUN_1427e6a50 body=169 status=ok
// SIG undefined FUN_1427e6a50(void)

void FUN_1427e6a50(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfd;
  uVar3 = 0;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | param_2 * '\x02';
  puVar1 = (undefined8 *)param_1[0x17e];
  uVar2 = (longlong)(int)param_1[0x17f] & 0x1fffffffffffffff;
  if (puVar1 + (int)param_1[0x17f] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FBodyInstance::SetInstanceNotifyRBCollision(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  if (0 < (int)param_1[0x17f]) {
    (**(code **)(*param_1 + 0x848))(param_1);
  }
  return;
}



// FUNCTION 1427e6b00 FUN_1427e6b00 body=109 status=ok
// SIG undefined FUN_1427e6b00(void)

void FUN_1427e6b00(longlong *param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 local_res10 [24];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_18 = &LAB_1427d5590;
  local_res10[0] = param_2;
  iVar1 = FUN_1427da670(param_1,param_3,param_4,0,&local_18);
  if (0 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001427e6b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x848))(param_1);
    return;
  }
  return;
}



// FUNCTION 1427e6b70 FUN_1427e6b70 body=160 status=ok
// SIG undefined FUN_1427e6b70(void)

void FUN_1427e6b70(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    iVar4 = iVar2 - iVar1;
    *(int *)(param_1 + 0xb8) = iVar2;
    if (*(int *)(param_1 + 0xbc) < iVar2) {
      FUN_14089e280(param_1,iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar3 = param_1;
    }
    lVar3 = lVar3 + (longlong)iVar1 * 0x58;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_14271d780(lVar3);
      lVar3 = lVar3 + 0x58;
    }
  }
  else if (iVar2 < iVar1) {
    FUN_14089c0b0(param_1,param_2,iVar1 - iVar2,param_3);
    return;
  }
  return;
}



// FUNCTION 1427e6c10 FUN_1427e6c10 body=1626 status=ok
// SIG undefined FUN_1427e6c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427e6c10(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_4f8 [32];
  undefined4 local_4d8;
  longlong local_4c8;
  longlong local_4c0;
  uint local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  int local_49c;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  undefined4 local_480 [2];
  longlong local_478;
  undefined8 local_470;
  longlong local_468;
  longlong local_460;
  int local_458 [128];
  undefined4 local_258 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_478 = param_1;
  local_470 = param_2;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar5 = local_470;
  lVar4 = local_478;
  lVar2 = *(longlong *)(lVar2 + 0x60);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar8 = param_3 + 2;
  uVar1 = *(uint *)(param_4 + 0xd8);
  iVar7 = 0;
  local_480[0] = *(undefined4 *)(*(longlong *)(param_4 + 0xd0) + (longlong)(int)param_3 * 4);
  local_4b8 = ~param_3;
  local_4b4 = 1 - param_3;
  local_4b0 = 2 - param_3;
  local_4ac = 3 - param_3;
  local_4a8 = 4 - param_3;
  local_4a4 = 5 - param_3;
  local_4a0 = 6 - param_3;
  local_49c = 7 - param_3;
  local_498 = 8 - param_3;
  local_494 = 9 - param_3;
  local_490 = 10 - param_3;
  local_48c = 0xb - param_3;
  local_488 = 0xc - param_3;
  local_484 = 0xd - param_3;
  do {
    uVar6 = (-2 - param_3) + uVar8;
    if (uVar8 - 2 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + -8 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + -8 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_4b8 + uVar8;
    if (uVar8 - 1 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + -4 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + -4 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = uVar8 - param_3;
    if (uVar8 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = uVar8 + local_4b4;
    if (uVar8 + 1 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 4 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 4 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_4b0 + uVar8;
    if (uVar8 + 2 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 8 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 8 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_4ac + uVar8;
    if (uVar8 + 3 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0xc + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0xc + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_4a8 + uVar8;
    if (uVar8 + 4 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x10 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x10 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_4a4 + uVar8;
    if (uVar8 + 5 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x14 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x14 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_4a0 + uVar8;
    if (uVar8 + 6 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x18 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x18 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_49c + uVar8;
    if (uVar8 + 7 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x1c + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x1c + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_498 + uVar8;
    if (uVar8 + 8 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x20 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x20 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_494 + uVar8;
    if (uVar8 + 9 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x24 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x24 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_490 + uVar8;
    if (uVar8 + 10 < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x28 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x28 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_48c + uVar8;
    if (uVar8 + 0xb < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x2c + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x2c + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_488 + uVar8;
    if (uVar8 + 0xc < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x30 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x30 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar6 = local_484 + uVar8;
    if (uVar8 + 0xd < uVar1) {
      lVar3 = *(longlong *)(param_4 + 0xe0);
      local_258[uVar6] = *(undefined4 *)(*param_5 + 0x34 + (longlong)(int)uVar8 * 4);
      local_458[uVar6] = iVar7;
      iVar7 = iVar7 + *(int *)(lVar3 + 0x34 + (longlong)(int)uVar8 * 4);
    }
    else {
      local_258[uVar6] = 0;
      local_458[uVar6] = iVar7;
    }
    uVar8 = uVar8 + 0x10;
  } while ((-2 - param_3) + uVar8 < 0x80);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  local_4d8 = 0;
  local_4c8 = lVar2;
  local_4c0 = lVar2;
  FUN_1427859f0(local_470,&local_4c0,local_478 + 0xd4,local_480);
  local_460 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    local_460 = local_4c8;
  }
  local_4d8 = 0;
  local_468 = lVar2;
  SetShaderValue<TRefCountPtr<FRHIComputeShader>,unsigned_int_[128],FRHICommandList>
            (uVar5,&local_468,lVar4 + 0xce,local_458);
  if (local_460 != 0) {
    LOCK();
    *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
    UNLOCK();
  }
  local_4d8 = 0;
  SetShaderValue<TRefCountPtr<FRHIComputeShader>,unsigned_int_[128],FRHICommandList>
            (uVar5,&local_460,lVar4 + 200,local_258);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_4c8);
  return;
}



// FUNCTION 1427e7270 FUN_1427e7270 body=1116 status=ok
// SIG undefined FUN_1427e7270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427e7270(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  longlong local_4a8;
  longlong local_4a0;
  int local_498;
  int local_494;
  int local_490;
  uint local_48c;
  int local_488;
  int local_484;
  undefined4 local_480 [2];
  longlong local_478;
  undefined8 local_470;
  longlong local_468;
  longlong local_460;
  int local_458 [128];
  undefined4 local_258 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar8 = (ulonglong)(int)param_3;
  local_478 = param_1;
  local_470 = param_2;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = local_470;
  lVar3 = local_478;
  lVar2 = *(longlong *)(lVar2 + 0x60);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  iVar6 = 0;
  uVar1 = *(uint *)(param_4 + 200);
  local_480[0] = *(undefined4 *)(*(longlong *)(param_4 + 0xb0) + uVar8 * 4);
  local_48c = ~param_3;
  local_498 = 1 - param_3;
  local_494 = 2 - param_3;
  local_490 = 3 - param_3;
  local_488 = 4 - param_3;
  local_484 = 5 - param_3;
  iVar11 = -param_3;
  do {
    uVar7 = (uint)uVar8;
    lVar9 = (longlong)(int)uVar7;
    uVar5 = iVar11 + uVar7;
    if (uVar7 < uVar1) {
      local_258[uVar5] = *(undefined4 *)(*param_5 + lVar9 * 4);
      local_458[uVar5] = iVar6;
      if (uVar7 == 0xffffffff) {
        iVar6 = iVar6 + *(int *)(param_4 + 0x104);
      }
      else {
        iVar6 = iVar6 + *(int *)(*(longlong *)(param_4 + 0xc0) + lVar9 * 4);
      }
    }
    else {
      local_258[uVar5] = 0;
      local_458[uVar5] = iVar6;
    }
    uVar10 = uVar7 + 2;
    uVar5 = local_48c + uVar10;
    if (uVar7 + 1 < uVar1) {
      local_258[uVar5] = *(undefined4 *)(*param_5 + 4 + lVar9 * 4);
      local_458[uVar5] = iVar6;
      if (uVar7 == 0xfffffffe) {
        iVar6 = iVar6 + *(int *)(param_4 + 0x104);
      }
      else {
        iVar6 = iVar6 + *(int *)(*(longlong *)(param_4 + 0xc0) + 4 + lVar9 * 4);
      }
    }
    else {
      local_258[uVar5] = 0;
      local_458[uVar5] = iVar6;
    }
    uVar5 = iVar11 + uVar10;
    if (uVar10 < uVar1) {
      local_258[uVar5] = *(undefined4 *)(*param_5 + 8 + lVar9 * 4);
      local_458[uVar5] = iVar6;
      if (uVar7 == 0xfffffffd) {
        iVar6 = iVar6 + *(int *)(param_4 + 0x104);
      }
      else {
        iVar6 = iVar6 + *(int *)(*(longlong *)(param_4 + 0xc0) + 8 + lVar9 * 4);
      }
    }
    else {
      local_258[uVar5] = 0;
      local_458[uVar5] = iVar6;
    }
    uVar5 = local_498 + uVar10;
    if (uVar7 + 3 < uVar1) {
      local_258[uVar5] = *(undefined4 *)(*param_5 + 0xc + lVar9 * 4);
      local_458[uVar5] = iVar6;
      if (uVar7 == 0xfffffffc) {
        iVar6 = iVar6 + *(int *)(param_4 + 0x104);
      }
      else {
        iVar6 = iVar6 + *(int *)(*(longlong *)(param_4 + 0xc0) + 0xc + lVar9 * 4);
      }
    }
    else {
      local_258[uVar5] = 0;
      local_458[uVar5] = iVar6;
    }
    uVar5 = uVar10 + local_494;
    if (uVar7 + 4 < uVar1) {
      local_258[uVar5] = *(undefined4 *)(*param_5 + 0x10 + lVar9 * 4);
      local_458[uVar5] = iVar6;
      if (uVar7 == 0xfffffffb) {
        iVar6 = iVar6 + *(int *)(param_4 + 0x104);
      }
      else {
        iVar6 = iVar6 + *(int *)(*(longlong *)(param_4 + 0xc0) + 0x10 + lVar9 * 4);
      }
    }
    else {
      local_258[uVar5] = 0;
      local_458[uVar5] = iVar6;
    }
    uVar5 = local_490 + uVar10;
    if (uVar7 + 5 < uVar1) {
      local_258[uVar5] = *(undefined4 *)(*param_5 + 0x14 + lVar9 * 4);
      local_458[uVar5] = iVar6;
      if (uVar7 == 0xfffffffa) {
        iVar6 = iVar6 + *(int *)(param_4 + 0x104);
      }
      else {
        iVar6 = iVar6 + *(int *)(*(longlong *)(param_4 + 0xc0) + 0x14 + lVar9 * 4);
      }
    }
    else {
      local_258[uVar5] = 0;
      local_458[uVar5] = iVar6;
    }
    uVar5 = local_488 + uVar10;
    if (uVar7 + 6 < uVar1) {
      local_258[uVar5] = *(undefined4 *)(*param_5 + 0x18 + lVar9 * 4);
      local_458[uVar5] = iVar6;
      if (uVar7 == 0xfffffff9) {
        iVar6 = iVar6 + *(int *)(param_4 + 0x104);
      }
      else {
        iVar6 = iVar6 + *(int *)(*(longlong *)(param_4 + 0xc0) + 0x18 + lVar9 * 4);
      }
    }
    else {
      local_258[uVar5] = 0;
      local_458[uVar5] = iVar6;
    }
    uVar10 = local_484 + uVar10;
    if (uVar7 + 7 < uVar1) {
      local_258[uVar10] = *(undefined4 *)(*param_5 + 0x1c + lVar9 * 4);
      local_458[uVar10] = iVar6;
      if (uVar7 == 0xfffffff8) {
        iVar6 = iVar6 + *(int *)(param_4 + 0x104);
      }
      else {
        iVar6 = iVar6 + *(int *)(*(longlong *)(param_4 + 0xc0) + 0x1c + lVar9 * 4);
      }
    }
    else {
      local_258[uVar10] = 0;
      local_458[uVar10] = iVar6;
    }
    uVar8 = (ulonglong)(uVar7 + 8);
  } while (iVar11 + uVar7 + 8 < 0x80);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  local_4b8 = 0;
  local_4a8 = lVar2;
  local_4a0 = lVar2;
  FUN_1427859f0(local_470,&local_4a0,local_478 + 0xd6,local_480);
  local_460 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    local_460 = local_4a8;
  }
  local_4b8 = 0;
  local_468 = lVar2;
  SetShaderValue<TRefCountPtr<FRHIComputeShader>,unsigned_int_[128],FRHICommandList>
            (uVar4,&local_468,lVar3 + 0xd0,local_458);
  if (local_460 != 0) {
    LOCK();
    *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
    UNLOCK();
  }
  local_4b8 = 0;
  SetShaderValue<TRefCountPtr<FRHIComputeShader>,unsigned_int_[128],FRHICommandList>
            (uVar4,&local_460,lVar3 + 0xc4,local_258);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_4a8);
  return;
}



// FUNCTION 1427e76d0 FUN_1427e76d0 body=621 status=ok
// SIG undefined FUN_1427e76d0(void)

void FUN_1427e76d0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  longlong local_res20;
  longlong local_48;
  longlong local_40;
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  lVar5 = *(longlong *)(lVar5 + 0x60);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  local_res8 = lVar5;
  FRHIComputeShader::UpdateStats(lVar5);
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_144d91e50;
  puVar4[2] = lVar5;
  lVar6 = *(longlong *)(param_5 + 0x58);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    lVar5 = local_res8;
  }
  local_res20 = lVar6;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144d91e40;
    puVar4[2] = lVar5;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = lVar6;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  uVar2 = *(undefined8 *)(param_4 + 0x58);
  lVar6 = 0;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    lVar6 = local_res8;
  }
  local_48 = lVar5;
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144dcb360;
    puVar4[2] = lVar6;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_48);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  local_40 = lVar6;
  SetShaderValue<TRefCountPtr<FRHIComputeShader>,FVector4,FRHICommandList>
            (param_2,&local_40,param_1 + 0xda,param_3,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  return;
}



// FUNCTION 1427e7940 FUN_1427e7940 body=755 status=ok
// SIG undefined FUN_1427e7940(void)

void FUN_1427e7940(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  longlong local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  lVar5 = *(longlong *)(lVar5 + 0x60);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  local_res8 = lVar5;
  FRHIComputeShader::UpdateStats(lVar5);
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_144d91e50;
  puVar4[2] = lVar5;
  lVar6 = *(longlong *)(param_5 + 0x58);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    lVar5 = local_res8;
  }
  local_res20 = lVar6;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144d91e40;
    puVar4[2] = lVar5;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = lVar6;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  local_50 = 0;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    local_50 = local_res8;
  }
  local_58 = lVar5;
  SetShaderValue<TRefCountPtr<FRHIComputeShader>,FVector4,FRHICommandList>
            (param_2,&local_58,param_1 + 0xdc,param_3,0);
  uVar2 = *(undefined8 *)(param_4 + 0x38);
  lVar5 = 0;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
    lVar5 = local_res8;
  }
  if (*(short *)(param_1 + 0xe4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe2);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144dcb360;
    puVar4[2] = lVar5;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_50);
  uVar2 = *(undefined8 *)(param_4 + 0x48);
  lVar6 = 0;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    lVar6 = local_res8;
  }
  local_48[0] = lVar5;
  if (*(short *)(param_1 + 0xe8) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe6);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144dcb360;
    puVar4[2] = lVar6;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_48);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  return;
}



// FUNCTION 1427e7c40 FUN_1427e7c40 body=94 status=ok
// SIG undefined FUN_1427e7c40(void)

void FUN_1427e7c40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_142717f80();
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xbf8)) {
    lVar2 = 0;
    do {
      FBodyInstance::UpdatePhysicalMaterials
                (*(undefined8 *)(*(longlong *)(param_1 + 0xbf0) + lVar2));
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0xbf8));
  }
  return;
}



// FUNCTION 1427e7ca0 FUN_1427e7ca0 body=464 status=ok
// SIG undefined FUN_1427e7ca0(void)

void FUN_1427e7ca0(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  longlong lVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar7;
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
      (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) &&
     ((*(byte *)((longlong)param_1 + 0xb1e) & 2) == 0)) {
    if ((param_3 == '\0') && (lVar6 = FUN_1423af5a0(param_1), param_2 == lVar6)) {
      return;
    }
    FUN_1427e8480(param_1);
    SSL_set_default_read_buffer_len(param_1,param_2,param_3);
    FUN_1423424e0(param_1);
    FUN_1427e9920(param_1);
    if (param_1[0xe3] == 0) {
      SSL_set_default_read_buffer_len(param_1,param_2,param_3);
      FUN_1427e9920(param_1);
    }
    else {
      iVar4 = *(int *)(param_1[0xe3] + 0x160);
      plVar1 = param_1 + 0x17a;
      iVar7 = 0;
      *(undefined4 *)(param_1 + 0x17b) = 0;
      if (*(int *)((longlong)param_1 + 0xbdc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1);
      }
      iVar4 = *(int *)(param_1[0xe3] + 0x160) + (int)param_1[0x17b];
      *(int *)(param_1 + 0x17b) = iVar4;
      if (*(int *)((longlong)param_1 + 0xbdc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      if (0 < *(int *)(param_1[0xe3] + 0x160)) {
        do {
          *(short *)(*plVar1 + (longlong)iVar7 * 2) = (short)iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1[0xe3] + 0x160));
      }
      (**(code **)(*param_1 + 0x960))(param_1,0);
      lVar6 = param_1[0x24];
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      if ((*(longlong *)(lVar6 + 0x218) != 0) &&
         (cVar2 = (**(code **)(*param_1 + 0x318))(param_1), cVar2 != '\0')) {
        FUN_1427dd840(param_1,*(undefined8 *)(lVar6 + 0x218));
      }
    }
    *(byte *)((longlong)param_1 + 0xb1d) = *(byte *)((longlong)param_1 + 0xb1d) & 0xf7;
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1cf);
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1d9);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  param_1[0x1de] = param_2;
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1427e7e70 FUN_1427e7e70 body=236 status=ok
// SIG undefined FUN_1427e7e70(void)

void FUN_1427e7e70(longlong *param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x400))(0,0);
  if (0.0 < param_2 != (bool)cVar1) {
    (**(code **)(*param_1 + 0x5b8))(param_1,0.0 < param_2);
  }
  if (param_2 < 1.0) {
    *(byte *)((longlong)param_1 + 0xb1a) = *(byte *)((longlong)param_1 + 0xb1a) & 0xf7;
    lVar2 = FUN_1423af5a0(param_1);
    if (lVar2 != 0) {
      uVar6 = uVar4;
      if (0 < (int)param_1[0x17f]) {
        do {
          lVar2 = *(longlong *)(uVar4 + param_1[0x17e]);
          lVar3 = FWeakObjectPtr::Get(lVar2 + 0x140);
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0x98) == '\0')) {
            *(float *)(lVar2 + 0xf4) = param_2;
          }
          uVar5 = (int)uVar6 + 1;
          uVar4 = uVar4 + 8;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < (int)param_1[0x17f]);
      }
      *(byte *)((longlong)param_1 + 0xb1a) = *(byte *)((longlong)param_1 + 0xb1a) & 0xf7;
      FUN_1423c00f0(param_1);
      FUN_1423c0050(param_1);
    }
  }
  return;
}



// FUNCTION 1427e7f60 FUN_1427e7f60 body=308 status=ok
// SIG undefined FUN_1427e7f60(void)

void FUN_1427e7f60(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | param_2 << 3;
  *(byte *)((longlong)param_1 + 0xb1a) = *(byte *)((longlong)param_1 + 0xb1a) & 0xf7 | param_2 << 3;
  if ((char)param_1[0x10f] == -2) {
    *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
    *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | param_2 * '\x02';
  }
  lVar3 = FUN_1423af5a0(param_1);
  if ((lVar3 != 0) && (iVar4 = 0, 0 < (int)param_1[0x17f])) {
    lVar5 = 0;
    do {
      if (((*(longlong *)(lVar5 + param_1[0x17e]) != 0) &&
          (lVar1 = *(longlong *)(lVar5 + *(longlong *)(lVar3 + 0x40)), lVar1 != 0)) &&
         (*(char *)(lVar1 + 0x98) == '\0')) {
        FUN_1426a9140(*(longlong *)(lVar5 + param_1[0x17e]),param_2,0);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < (int)param_1[0x17f]);
  }
  cVar2 = (**(code **)(*param_1 + 0x400))(param_1,0);
  if (cVar2 != '\0') {
    FUN_1423bb5d0(param_1,(int)param_1[0x172]);
  }
  if (*(char *)((longlong)param_1 + 0xeb1) != '\0') {
    (**(code **)(*param_1 + 0x8d0))(param_1,*(byte *)((longlong)param_1 + 0x3c1) & 1);
  }
  FUN_1423c00f0(param_1);
  FUN_1423c0050(param_1);
  return;
}



// FUNCTION 1427e80a0 FUN_1427e80a0 body=691 status=ok
// SIG undefined FUN_1427e80a0(void)

void FUN_1427e80a0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b15480 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b15480 != 0x1000)) ||
     (uVar3 = DAT_146b15488, iVar4 != 0)) {
    uVar3 = DAT_146b15484 | DAT_146b15480;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1427e82a7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1427e82a7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1427e8360 FUN_1427e8360 body=52 status=ok
// SIG undefined FUN_1427e8360(void)

byte FUN_1427e8360(longlong param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = FUN_142399f60();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  return cVar2 == '\0' & bVar1;
}



// FUNCTION 1427e83a0 FUN_1427e83a0 body=215 status=ok
// SIG undefined FUN_1427e83a0(void)

undefined8
FUN_1427e83a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0xbf8) < 1) {
    return 0;
  }
  lVar3 = 0;
  do {
    cVar1 = FUN_1426adcc0(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0xbf0)),param_2,param_3,
                          param_4,param_5,param_6,param_7);
    if (cVar1 != '\0') {
      return 1;
    }
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + 8;
  } while (iVar2 < *(int *)(param_1 + 0xbf8));
  return 0;
}



// FUNCTION 1427e8480 FUN_1427e8480 body=566 status=ok
// SIG undefined FUN_1427e8480(void)

void FUN_1427e8480(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  FUN_1423b90e0();
  lVar4 = *(longlong *)(param_1 + 0x120);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  uVar9 = 0;
  uVar6 = uVar9;
  if (lVar4 != 0) {
    uVar6 = *(ulonglong *)(lVar4 + 0x218);
  }
  if (uVar6 != 0) {
    FUN_1426dc1f0(uVar6,uVar1);
    FUN_1426da980(uVar6,param_1);
  }
  cVar2 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar6);
  uVar11 = (ulonglong)(-(uint)(cVar2 != '\0') & 2);
  if (uVar6 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)FUN_1426e2530(uVar6,uVar11);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x358))
                (plVar5,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshComponentPhysics.cpp"
                 ,0x39e);
    }
  }
  uVar8 = uVar9;
  uVar10 = uVar9;
  if (0 < *(int *)(param_1 + 0xc08)) {
    do {
      FUN_1426ce340(*(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0xc00)));
      lVar4 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0xc00));
      if (lVar4 != 0) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x1a8);
        FMemory::operator_delete(lVar4,0x1b8);
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0xc08));
  }
  *(undefined4 *)(param_1 + 0xc08) = 0;
  if (*(int *)(param_1 + 0xc0c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xc00,0);
  }
  uVar8 = uVar9;
  if (0 < *(int *)(param_1 + 0xbf8)) {
    do {
      FUN_1426adfd0(*(undefined8 *)(uVar8 + *(longlong *)(param_1 + 0xbf0)));
      lVar4 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0xbf0));
      if (lVar4 != 0) {
        FUN_14061f570(lVar4);
        FMemory::operator_delete(lVar4,0x1b0);
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
      uVar8 = uVar8 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0xbf8));
  }
  *(undefined4 *)(param_1 + 0xbf8) = 0;
  if (*(int *)(param_1 + 0xbfc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xbf0,0);
  }
  if (*(longlong **)(param_1 + 0xc10) != (longlong *)0x0) {
    if ((uVar6 == 0) ||
       ((*(char *)(uVar11 + 0x69 + uVar6) == '\0' &&
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0xc10) + 0x48))(), iVar3 == 0)))) {
      (**(code **)**(undefined8 **)(param_1 + 0xc10))();
    }
    else {
      FUN_1426dbf00(uVar6,*(undefined8 *)(param_1 + 0xc10),uVar11);
    }
    *(undefined8 *)(param_1 + 0xc10) = 0;
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e86a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x360))(plVar5);
  return;
}



// FUNCTION 1427e86c0 FUN_1427e86c0 body=375 status=ok
// SIG undefined FUN_1427e86c0(void)

void FUN_1427e86c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  lVar5 = FUN_1423af5a0();
  if ((((lVar5 != 0) && (*(longlong *)(param_1 + 0x718) != 0)) && (0 < *(int *)(param_1 + 0xbf8)))
     && ((iVar3 = FUN_1423ac950(param_1,param_2), iVar3 != -1 &&
         (iVar8 = 0, 0 < *(int *)(param_1 + 0xbf8))))) {
    lVar5 = 0;
    do {
      cVar2 = FBodyInstance::IsValidBodyInstance
                        (*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0xbf0)));
      if (cVar2 != '\0') {
        lVar6 = FWeakObjectPtr::Get(*(longlong *)(*(longlong *)(param_1 + 0xbf0) + lVar5) + 0x140);
        lVar6 = *(longlong *)(lVar6 + 0x90);
        iVar4 = FUN_1423ac950(param_1,lVar6);
        if ((iVar4 != -1) &&
           ((lVar6 == param_2 ||
            (cVar2 = FUN_1427d3e00(*(longlong *)(param_1 + 0x718) + 0x138,iVar4,iVar3),
            cVar2 != '\0')))) {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0xc08)) {
            lVar7 = 0;
            do {
              lVar1 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0xc00));
              if ((lVar1 != 0) &&
                 ((*(longlong *)(lVar1 + 0x20) == lVar6 || (*(longlong *)(lVar1 + 0x28) == lVar6))))
              {
                FUN_1426ce340();
              }
              iVar4 = iVar4 + 1;
              lVar7 = lVar7 + 8;
            } while (iVar4 < *(int *)(param_1 + 0xc08));
          }
          FUN_1426adfd0(*(undefined8 *)(*(longlong *)(param_1 + 0xbf0) + lVar5));
        }
      }
      iVar8 = iVar8 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar8 < *(int *)(param_1 + 0xbf8));
  }
  return;
}



// FUNCTION 1427e8840 TransformBy body=454 status=ok
// SIG undefined TransformBy(void)

undefined8 FPlane::TransformBy(undefined8 param_1,undefined8 param_2,float *param_3)

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
  undefined4 uVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  fVar1 = param_3[8];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar4 = param_3[10];
  fVar5 = param_3[1];
  fVar6 = param_3[9];
  fVar7 = param_3[4];
  fVar8 = param_3[6];
  local_9c = 0;
  local_8c = 0;
  fVar9 = param_3[5];
  local_a8 = fVar9 * fVar4 - fVar8 * fVar6;
  local_a4 = fVar1 * fVar8 - fVar7 * fVar4;
  local_a0 = fVar7 * fVar6 - fVar1 * fVar9;
  local_98 = fVar2 * fVar6 - fVar5 * fVar4;
  local_94 = fVar3 * fVar4 - fVar2 * fVar1;
  local_90 = fVar5 * fVar1 - fVar3 * fVar6;
  local_88 = fVar5 * fVar8 - fVar2 * fVar9;
  local_84 = fVar2 * fVar7 - fVar3 * fVar8;
  local_80 = fVar3 * fVar9 - fVar5 * fVar7;
  local_7c = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  uVar10 = FMatrix::Determinant(param_3);
  TransformByUsingAdjointT(param_1,param_2,param_3,uVar10,&local_a8);
  return param_2;
}



// FUNCTION 1427e8a10 FUN_1427e8a10 body=685 status=ok
// SIG undefined FUN_1427e8a10(void)

void FUN_1427e8a10(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong *plVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  LARGE_INTEGER local_res18 [2];
  LARGE_INTEGER local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_3 != 0) {
    lVar7 = operator_new(0xe0);
    plVar12 = (longlong *)0x0;
    plVar8 = plVar12;
    if (lVar7 != 0) {
      plVar8 = (longlong *)FUN_1427ce550(lVar7,param_3,param_1[8],param_2,param_4,param_5);
    }
    uVar5 = 0;
    iVar4 = DAT_1464aaa8c;
    if (*(longlong *)(param_3 + 0x640) != 0) {
      iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x640) + 0x130) + 0x290))();
      uVar5 = FUN_1427daf80(param_3);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_40);
      puVar11 = (undefined8 *)param_1[0x1e];
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11,1);
      }
      param_1[0x1e] = (longlong)plVar8;
      (**(code **)(*param_1 + 0x38))(param_1,(int)plVar8[0xc],1);
      QueryPerformanceCounter(local_res18);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res18[0].s.LowPart - local_40._0_4_);
    }
    else {
      pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar10 = TlsGetValue(*pDVar9);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)operator_new(0x18);
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = 0;
          plVar10[1] = 0;
          *(undefined4 *)(plVar10 + 2) = 0;
          plVar12 = plVar10;
        }
        TlsSetValue(*pDVar9,plVar12);
        plVar10 = plVar12;
      }
      plVar12 = (longlong *)plVar10[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar10;
        if (plVar12 == (longlong *)0x0) {
          lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
          plVar10[1] = lVar7;
          if (lVar7 == 0) {
            puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar10[1] = (longlong)puVar11;
            lVar7 = 0x1f;
            do {
              puVar2 = puVar11 + 0x20;
              *puVar11 = puVar2;
              lVar7 = lVar7 + -1;
              puVar11 = puVar2;
            } while (lVar7 != 0);
            *puVar2 = 0;
          }
          plVar12 = (longlong *)plVar10[1];
          iVar13 = 0x20;
          *(undefined4 *)(plVar10 + 2) = 0x20;
        }
        else {
          iVar13 = 0x20;
          plVar10[1] = (longlong)plVar12;
          *(undefined4 *)(plVar10 + 2) = 0x20;
          *plVar10 = 0;
        }
      }
      else {
        iVar13 = (int)plVar10[2];
      }
      plVar10[1] = *plVar12;
      *(int *)(plVar10 + 2) = iVar13 + -1;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      local_38 = 0;
      local_30 = 0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_1451aef70;
      *(undefined1 *)(plVar12 + 5) = 0;
      plVar12[6] = 0;
      plVar12[2] = (longlong)param_1;
      *(int *)(plVar12 + 3) = iVar4 + 1;
      *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar5;
      plVar12[4] = (longlong)plVar8;
      lVar7 = plVar12[6];
      piVar1 = (int *)(lVar7 + 0x48);
      if (lVar7 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a160(plVar12,0,0xff,1);
      if (lVar7 != 0) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FGraphEvent::Recycle(lVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 1427e8cc0 FUN_1427e8cc0 body=1005 status=ok
// SIG undefined FUN_1427e8cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427e8cc0(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  BOOL BVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar14 = 0;
  local_d0 = param_5;
  local_108 = param_2;
  local_100 = param_3;
  local_d8 = param_4;
  if (((param_3 != 0) && (*(char *)(param_1 + 0x102) == '\0')) && (0 < *(int *)(param_4 + 8))) {
    uVar17 = uVar14;
    if (0 < *(int *)(param_1 + 0xe8)) {
      do {
        iVar13 = 0;
        puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + uVar17);
        lVar3 = *(longlong *)(*(longlong *)*puVar15 + (longlong)*(int *)(puVar15 + 1) * 8);
        if (*(int *)(lVar3 + 0x16c) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x6c);
          FUN_141edf270(puVar15 + 2);
          local_60 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_58 = 0;
          local_50 = 0;
          FUN_1427dcf50(puVar15,&local_88,lVar3);
          FUN_1427d82d0(puVar15 + 0x14,*(undefined4 *)(lVar3 + 8));
          if (0 < *(int *)(lVar3 + 8)) {
            do {
              FUN_1427835c0(puVar15 + 0x14,&local_88,uVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(lVar3 + 8));
          }
        }
        uVar16 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar16;
        uVar17 = uVar17 + 0xe8;
      } while ((int)uVar16 < *(int *)(param_1 + 0xe8));
    }
    *(undefined1 *)(param_1 + 0x102) = 1;
  }
  uVar6 = local_d0;
  lVar4 = local_d8;
  lVar3 = local_100;
  uVar2 = local_108;
  uVar11 = 0;
  if (DAT_146534df8 == 0) {
    lVar10 = operator_new(0x110);
    if (lVar10 != 0) {
      uVar11 = FDynamicSkelMeshObjectDataGPUSkin::FDynamicSkelMeshObjectDataGPUSkin(lVar10);
    }
  }
  else {
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b15528);
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b15528);
    }
    DAT_146b15810 = DAT_146b15810 + 1;
    if (DAT_146b157f8 <= DAT_146b15374) {
      DAT_146b15374 = DAT_146b157f8;
    }
    if (DAT_146b157f8 < 1) {
      lVar10 = operator_new(0x110);
      if (lVar10 != 0) {
        uVar11 = FDynamicSkelMeshObjectDataGPUSkin::FDynamicSkelMeshObjectDataGPUSkin(lVar10);
      }
    }
    else {
      iVar13 = DAT_146b157f8 + -1;
      uVar11 = *DAT_146b157f0;
      if (0 < iVar13) {
        iVar13 = 1;
      }
      if (iVar13 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (DAT_146b157f0,DAT_146b157f0 + (DAT_146b157f8 - iVar13),(longlong)iVar13 << 3);
      }
      DAT_146b157f8 = DAT_146b157f8 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146b157f0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b15528);
  }
  local_118 = param_6;
  local_128 = lVar4;
  local_120 = uVar6;
  FUN_1427ddf30(uVar11,lVar3,*(undefined8 *)(param_1 + 0x40),uVar2);
  uStack_ec = 0;
  iStack_f0 = DAT_1464aaa8c + 1;
  uStack_e0 = 0;
  if ((lVar3 != 0) && (uStack_e0 = 0, *(longlong *)(lVar3 + 0x640) != 0)) {
    iStack_f0 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x640) + 0x130) + 0x290))();
    iStack_f0 = iStack_f0 + 1;
    uStack_e0 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x640) + 0x130) + 0x220))();
    uStack_ec = FUN_1427daf80(lVar3);
  }
  local_f8 = param_1;
  local_e8 = uVar11;
  if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
      local_c8 = (undefined4)local_f8;
      uStack_c4 = local_f8._4_4_;
      iStack_c0 = iStack_f0;
      uStack_bc = uStack_ec;
      local_b8 = (undefined4)local_e8;
      uStack_b4 = local_e8._4_4_;
      uStack_b0 = (undefined4)uStack_e0;
      uStack_ac = uStack_e0._4_4_;
      uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_1427d0510(&local_c8,uVar11);
    }
    else {
      plVar12 = (longlong *)FUN_1427d72c0(local_a8,0,0xff);
      lVar3 = *plVar12;
      *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_f8;
      *(undefined4 *)(lVar3 + 0x14) = local_f8._4_4_;
      *(int *)(lVar3 + 0x18) = iStack_f0;
      *(undefined4 *)(lVar3 + 0x1c) = uStack_ec;
      *(undefined4 *)(lVar3 + 0x20) = (undefined4)local_e8;
      *(undefined4 *)(lVar3 + 0x24) = local_e8._4_4_;
      *(undefined4 *)(lVar3 + 0x28) = (undefined4)uStack_e0;
      *(undefined4 *)(lVar3 + 0x2c) = uStack_e0._4_4_;
      lVar3 = *plVar12;
      lVar5 = plVar12[2];
      lVar4 = plVar12[1];
      lVar10 = *(longlong *)(lVar3 + 0x38);
      piVar1 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_100 = lVar10;
      FUN_14048a640(lVar3,lVar4,(int)lVar5,1);
      if (lVar10 != 0) {
        LOCK();
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          FGraphEvent::Recycle(local_100);
        }
      }
    }
  }
  else {
    uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_1427d0510(&local_f8,uVar11);
  }
  return;
}



// FUNCTION 1427e90b0 FUN_1427e90b0 body=229 status=ok
// SIG undefined FUN_1427e90b0(void)

void FUN_1427e90b0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((0 < *(int *)(param_1 + 0xbf8)) && (lVar5 = FUN_1423af5a0(), lVar5 != 0)) {
    bVar2 = false;
    iVar7 = 0;
    if (0 < *(int *)(lVar5 + 0x48)) {
      lVar6 = 0;
      do {
        iVar4 = FUN_1423ac950(param_1,*(undefined8 *)
                                       (*(longlong *)(lVar6 + *(longlong *)(lVar5 + 0x40)) + 0x90));
        lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0xbf0));
        cVar3 = FBodyInstance::IsValidBodyInstance(lVar1);
        *(short *)(lVar1 + 4) = (short)iVar4;
        lVar6 = lVar6 + 8;
        if ((iVar4 != -1) != (bool)cVar3) {
          bVar2 = true;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar5 + 0x48));
      if (bVar2) {
        FUN_14234b040(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1427e91a0 FUN_1427e91a0 body=383 status=ok
// SIG undefined FUN_1427e91a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1427e91a0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  bool bVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (param_2 != 0) {
    lVar13 = FUN_142a07000();
    fVar11 = fRam0000000146b1541c;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      fVar1 = *(float *)(param_2 + 0x210);
      fVar2 = *(float *)(param_2 + 0x214);
      fVar3 = *(float *)(param_2 + 0x218);
      fVar4 = *(float *)(param_2 + 0x21c);
      fVar17 = fVar2 + fVar2;
      fVar19 = fVar3 + fVar3;
      fVar20 = fVar1 * (fVar1 + fVar1);
      fVar18 = (fVar1 + fVar1) * fVar4;
      fVar5 = *(float *)(param_2 + 0x230);
      fVar6 = *(float *)(param_2 + 0x234);
      fVar7 = *(float *)(param_2 + 0x238);
      uVar14 = (uint)((fRam0000000146b15414 - (fVar3 * fVar19 + fVar20)) * fVar6) &
               uRam0000000146b15404;
      uVar15 = (uint)((fRam0000000146b15418 - (fVar2 * fVar17 + fVar20)) * fVar7) &
               uRam0000000146b15408;
      uVar16 = (uint)((fRam0000000146b1541c - (fVar20 + fVar20)) * *(float *)(param_2 + 0x23c)) &
               uRam0000000146b1540c;
      uVar8 = *(undefined4 *)(param_2 + 0x220);
      uVar9 = *(undefined4 *)(param_2 + 0x224);
      uVar10 = *(undefined4 *)(param_2 + 0x228);
      *(uint *)(param_1 + 0xc0) =
           (uint)((_DAT_146b15410 - (fVar3 * fVar19 + fVar2 * fVar17)) * fVar5) & _DAT_146b15400;
      *(float *)(param_1 + 0xc4) = (fVar19 * fVar4 + fVar17 * fVar1) * fVar5;
      *(float *)(param_1 + 200) = fVar5 * (fVar19 * fVar1 - fVar17 * fVar4);
      *(uint *)(param_1 + 0xcc) = uVar16;
      *(float *)(param_1 + 0xd0) = fVar6 * (fVar17 * fVar1 - fVar19 * fVar4);
      *(uint *)(param_1 + 0xd4) = uVar14;
      *(float *)(param_1 + 0xd8) = (fVar18 + fVar19 * fVar2) * fVar6;
      *(uint *)(param_1 + 0xdc) = uVar16;
      *(float *)(param_1 + 0xe0) = (fVar17 * fVar4 + fVar19 * fVar1) * fVar7;
      *(float *)(param_1 + 0xe4) = fVar7 * (fVar19 * fVar2 - fVar18);
      *(uint *)(param_1 + 0xe8) = uVar15;
      *(uint *)(param_1 + 0xec) = uVar16;
      *(undefined4 *)(param_1 + 0xf0) = uVar8;
      *(undefined4 *)(param_1 + 0xf4) = uVar9;
      *(undefined4 *)(param_1 + 0xf8) = uVar10;
      *(float *)(param_1 + 0xfc) = fVar11;
      if ((*(byte *)(param_2 + 0xb1a) & 0x40) != 0) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::Reset();
        return 1;
      }
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0xb34);
      TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
      ::operator=(param_1 + 0x70,param_2 + 0xd00);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1427e9320 FUN_1427e9320 body=1127 status=ok
// SIG undefined FUN_1427e9320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427e9320(longlong param_1,float param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  longlong local_88 [4];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*DAT_146b08848 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xcd0) == 0) {
    return;
  }
  if (param_2 == 0.0) {
    return;
  }
  FUN_1423b2c40();
  if ((*(byte *)(param_1 + 0xb1b) & 0x20) != 0) {
    if (*(longlong **)(param_1 + 0xcd0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xcd0) + 0x68))();
    }
    FUN_1427d6980(param_1);
    plVar9 = *(longlong **)(param_1 + 0x1a0);
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    plVar8 = plVar9 + *(int *)(param_1 + 0x1a8);
    local_e0 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    for (; plVar9 != plVar8; plVar9 = plVar9 + 1) {
      lVar11 = *plVar9;
      if (lVar11 != 0) {
        lVar7 = FUN_142a07000();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (plVar4 = *(longlong **)(lVar11 + 0xcd0), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x70))(plVar4,&local_f8,0);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xcd0) + 0x60))
              (*(longlong **)(param_1 + 0xcd0),&local_f8);
    plVar8 = local_d8;
    for (iVar12 = (int)local_d0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 3;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
  }
  FUN_1423bff90(param_1,param_2);
  if (*(longlong *)(param_1 + 0xcd0) == 0) {
    return;
  }
  plVar8 = (longlong *)FUN_1427d76e0(local_b8,0,2);
  lVar11 = *plVar8;
  *(float *)(lVar11 + 0x18) = param_2;
  *(longlong *)(lVar11 + 0x10) = param_1;
  lVar11 = *plVar8;
  lVar6 = plVar8[2];
  lVar7 = plVar8[1];
  lVar10 = *(longlong *)(lVar11 + 0x28);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
    UNLOCK();
  }
  local_108 = lVar10;
  FUN_1427e80a0(lVar11,lVar7,(int)lVar6,1);
  plVar8 = (longlong *)(param_1 + 0xcf8);
  if (plVar8 == &local_108) {
    if (lVar10 != 0) {
      LOCK();
      piVar1 = (int *)(lVar10 + 0x48);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar11 = local_108;
      goto joined_r0x0001427e9555;
    }
  }
  else {
    lVar11 = *plVar8;
    *plVar8 = lVar10;
    if (lVar11 != 0) {
      LOCK();
      piVar1 = (int *)(lVar11 + 0x48);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
joined_r0x0001427e9555:
      if (iVar12 == 1) {
        FGraphEvent::Recycle(lVar11);
      }
    }
  }
  local_68 = (longlong *)0x0;
  local_60 = 1;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_88,0);
  plVar9 = local_88;
  if (local_68 != (longlong *)0x0) {
    plVar9 = local_68;
  }
  lVar11 = *plVar8;
  *plVar9 = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)FUN_1427d7560(local_a0,local_88,2);
  lVar11 = *plVar8;
  FWeakObjectPtr::operator=(&local_100,param_1);
  *(undefined4 *)(lVar11 + 0x10) = local_100;
  *(undefined4 *)(lVar11 + 0x14) = local_fc;
  lVar11 = *plVar8;
  lVar6 = plVar8[2];
  lVar7 = plVar8[1];
  lVar10 = *(longlong *)(lVar11 + 0x20);
  piVar1 = (int *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_110 = lVar10;
  FUN_14048b000(lVar11,lVar7,(int)lVar6,1);
  plVar8 = (longlong *)FTickFunction::GetCompletionHandle(param_3,&local_c8);
  *(undefined4 *)(*plVar8 + 0x4c) = 2;
  if (local_c8 != 0) {
    LOCK();
    piVar2 = (int *)(local_c8 + 0x48);
    iVar12 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    lVar10 = local_110;
    if (iVar12 == 1) {
      FGraphEvent::Recycle();
      lVar10 = local_110;
    }
  }
  lVar11 = 0;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
    UNLOCK();
    lVar11 = local_110;
  }
  plVar8 = (longlong *)FTickFunction::GetCompletionHandle(param_3,&local_c0);
  lVar7 = *plVar8;
  iVar12 = *(int *)(lVar7 + 0x40);
  *(int *)(lVar7 + 0x40) = iVar12 + 1;
  if (*(int *)(lVar7 + 0x44) < iVar12 + 1) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (lVar7 + 0x18,iVar12);
  }
  lVar10 = *(longlong *)(lVar7 + 0x38);
  if (*(longlong *)(lVar7 + 0x38) == 0) {
    lVar10 = lVar7 + 0x18;
  }
  plVar8 = (longlong *)(lVar10 + (longlong)iVar12 * 8);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = lVar11;
    lVar7 = 0;
    if (lVar11 == 0) goto LAB_1427e96bb;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    lVar11 = local_110;
  }
  lVar7 = 0;
  if (lVar11 != 0) {
    LOCK();
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar7 = local_110;
    if (iVar12 == 1) {
      FGraphEvent::Recycle(local_110);
    }
  }
LAB_1427e96bb:
  if (local_c0 != 0) {
    LOCK();
    piVar2 = (int *)(local_c0 + 0x48);
    iVar12 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    lVar7 = local_110;
    if (iVar12 == 1) {
      FGraphEvent::Recycle();
      lVar7 = local_110;
    }
  }
  if (lVar7 != 0) {
    LOCK();
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FGraphEvent::Recycle(local_110);
    }
  }
  plVar8 = local_88;
  iVar12 = (int)local_60;
  if (local_68 != (longlong *)0x0) {
    plVar8 = local_68;
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar8 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar8 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar8 = plVar8 + 1;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1427e9790 FUN_1427e9790 body=392 status=ok
// SIG undefined FUN_1427e9790(void)

void FUN_1427e9790(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*(longlong **)(param_1 + 0xcd0) == (longlong *)0x0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0xcd0) + 0x30))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(longlong **)(param_1 + 0xcd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xcd0) + 0x68))();
  }
  if ((*(byte *)(param_1 + 0xb1b) & 0x20) != 0) {
    FUN_1427d6980(param_1);
  }
  if (0 < *(int *)(param_1 + 0xcf0)) {
    lVar5 = *(longlong *)(param_1 + 0xce8);
    lVar8 = (longlong)*(int *)(param_1 + 0xcf0) * 0x40 + lVar5;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    for (; lVar5 != lVar8; lVar5 = lVar5 + 0x40) {
      lVar3 = FWeakObjectPtr::Get(lVar5);
      lVar4 = FWeakObjectPtr::Get(lVar5 + 8);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        FUN_1427d9240(lVar3,lVar4,param_1,&local_38,lVar5);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xcd0) + 0x60))
              (*(longlong **)(param_1 + 0xcd0),&local_38);
    plVar6 = local_18;
    for (iVar7 = (int)local_10; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  if (((*(byte *)(param_1 + 0xb1b) & 0x10) != 0) && (bVar1)) {
    FUN_1427e1cd0(param_1);
  }
  return;
}



// FUNCTION 1427e9920 FUN_1427e9920 body=121 status=ok
// SIG undefined FUN_1427e9920(void)

void FUN_1427e9920(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) & 0xfd;
  lVar2 = FUN_1423af5a0();
  if ((lVar2 != 0) && (iVar3 = 0, 0 < *(int *)(lVar2 + 0x48))) {
    lVar4 = 0;
    do {
      iVar1 = FUN_1423ac950(param_1,*(undefined8 *)
                                     (*(longlong *)(lVar4 + *(longlong *)(lVar2 + 0x40)) + 0x90));
      if (iVar1 != -1) {
        *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) | 2;
        return;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(lVar2 + 0x48));
  }
  return;
}



// FUNCTION 1427e99a0 FUN_1427e99a0 body=682 status=ok
// SIG undefined FUN_1427e99a0(void)

void FUN_1427e99a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong local_res10;
  
  lVar7 = FUN_1423af5a0();
  if (((*(longlong *)(param_1 + 0x718) != 0) && (lVar7 != 0)) &&
     (iVar9 = 0, 0 < *(int *)(param_1 + 0xc08))) {
    local_res10 = 0;
    do {
      lVar10 = *(longlong *)(local_res10 + *(longlong *)(param_1 + 0xc00));
      if (((lVar10 != 0) && (cVar3 = FConstraintInstance::IsTerminated(lVar10), cVar3 != '\0')) &&
         ((iVar5 = FUN_1423ac950(param_1,*(undefined8 *)(lVar10 + 0x18)), iVar5 != -1 &&
          (iVar11 = 0, 0 < *(int *)(lVar7 + 0x48))))) {
        lVar10 = 0;
        do {
          lVar8 = *(longlong *)(lVar10 + *(longlong *)(lVar7 + 0x40));
          iVar6 = FUN_1423ac950(param_1,*(undefined8 *)(lVar8 + 0x90));
          if (iVar6 != -1) {
            if (iVar6 == iVar5) {
LAB_1427e9aa9:
              lVar1 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0xbf0));
              if ((lVar1 != 0) &&
                 ((cVar3 = FUN_1426aaac0(lVar1), cVar3 == '\0' ||
                  (cVar3 = FBodyInstance::IsValidBodyInstance(lVar1), cVar3 == '\0')))) {
                FUN_1426a9140(lVar1,1,0);
              }
              uVar2 = *(undefined8 *)(lVar8 + 0x90);
              lVar8 = FUN_1423af5a0(param_1);
              if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x58) == *(int *)(param_1 + 0xc08))) &&
                  (iVar6 = UPhysicsAsset::FindConstraintIndex(lVar8,uVar2), iVar6 != -1)) &&
                 (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xc00) + (longlong)iVar6 * 8),
                 lVar8 != 0)) {
                bVar4 = *(byte *)(lVar8 + 0x118);
                if ((((bVar4 & 1) != 0) || ((*(byte *)(lVar8 + 0x128) & 1) != 0)) ||
                   ((*(byte *)(lVar8 + 0x138) & 1) != 0)) {
                  FConstraintInstance::SetLinearPositionDrive(lVar8,0,0,0);
                  bVar4 = *(byte *)(lVar8 + 0x118);
                }
                if ((((bVar4 & 2) != 0) || ((*(byte *)(lVar8 + 0x128) & 2) != 0)) ||
                   ((*(byte *)(lVar8 + 0x138) & 2) != 0)) {
                  FConstraintInstance::SetLinearVelocityDrive(lVar8,0);
                }
                cVar3 = *(char *)(lVar8 + 0x188);
                if (cVar3 == '\x01') {
                  if ((*(byte *)(lVar8 + 0x14c) & 1) == 0) {
                    bVar4 = *(byte *)(lVar8 + 0x15c);
                    goto joined_r0x0001427e9bb0;
                  }
LAB_1427e9bb2:
                  FConstraintInstance::SetOrientationDriveTwistAndSwing(lVar8,0);
                  cVar3 = *(char *)(lVar8 + 0x188);
                }
                else {
                  bVar4 = *(byte *)(lVar8 + 0x16c);
joined_r0x0001427e9bb0:
                  if ((bVar4 & 1) != 0) goto LAB_1427e9bb2;
                }
                if (cVar3 == '\x01') {
                  if ((*(byte *)(lVar8 + 0x14c) & 2) == 0) {
                    bVar4 = *(byte *)(lVar8 + 0x15c);
                    goto joined_r0x0001427e9be6;
                  }
                }
                else {
                  bVar4 = *(byte *)(lVar8 + 0x16c);
joined_r0x0001427e9be6:
                  if ((bVar4 & 2) == 0) goto LAB_1427e9bf5;
                }
                FConstraintInstance::SetAngularVelocityDriveTwistAndSwing(lVar8,0);
              }
            }
            else if (iVar5 < iVar6) {
              lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158);
              iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
              do {
                if (iVar6 == iVar5) goto LAB_1427e9aa9;
                iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
              } while (iVar6 != -1);
            }
          }
LAB_1427e9bf5:
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar11 < *(int *)(lVar7 + 0x48));
      }
      iVar9 = iVar9 + 1;
      local_res10 = local_res10 + 8;
    } while (iVar9 < *(int *)(param_1 + 0xc08));
  }
  return;
}



// FUNCTION 1427e9c50 FUN_1427e9c50 body=647 status=ok
// SIG undefined FUN_1427e9c50(void)

void FUN_1427e9c50(longlong *param_1,longlong param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar8 = 0;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar5 + 0x38) < DAT_146b15840) &&
     (_Init_thread_header(&DAT_146b15840), DAT_146b15840 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SkeletalMeshLODRadiusScale");
    uVar4 = uVar8;
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146b15838 = uVar4;
    _Init_thread_footer(&DAT_146b15840);
  }
  fVar10 = *(float *)(DAT_146b15838 + 4);
  if ((char)param_1[0x1b] != '\0') {
    if ((*(int *)(lVar5 + 0x38) < DAT_146b15850) &&
       (_Init_thread_header(&DAT_146b15850), DAT_146b15850 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.SkeletalMeshLODRadiusScale.Character");
      uVar4 = uVar8;
      if (plVar3 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
      }
      DAT_146b15848 = uVar4;
      _Init_thread_footer(&DAT_146b15850);
    }
    if (DAT_146b15848 != 0) {
      fVar10 = *(float *)(DAT_146b15848 + 4);
    }
  }
  local_44 = param_3[1];
  local_48 = *param_3;
  local_40 = param_3[2];
  local_3c = 0x3f800000;
  fVar9 = (float)FUN_142749130(&local_48,param_3[6],param_2);
  fVar10 = fVar9 * fVar10 * fVar10;
  iVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (((*(longlong *)(param_2 + 0x10) != 0) &&
      ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x2c) & 0x800) != 0)) &&
     (uVar6 = *(int *)(param_1[8] + 8) - 1, 0 < (int)uVar6)) {
    lVar5 = (longlong)(int)uVar6;
    pfVar2 = (float *)(lVar5 * 0x30 + param_1[9]);
    do {
      fVar9 = *pfVar2;
      if (lVar5 <= iVar1) {
        fVar9 = fVar9 + pfVar2[1];
      }
      if (fVar10 < fVar9 * fVar9 * 0.25) {
        uVar8 = (ulonglong)uVar6;
        break;
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -1;
      pfVar2 = pfVar2 + -0xc;
      uVar8 = 0;
    } while (0 < lVar5);
  }
  fVar9 = *(float *)((longlong)param_1 + 0x34);
  iVar1 = (int)param_1[6];
  iVar7 = (int)uVar8;
  if (param_4 == (int)param_1[0xc]) {
    if (fVar9 <= fVar10) {
      fVar9 = fVar10;
    }
    if (iVar1 <= iVar7) {
      iVar7 = iVar1;
    }
    *(int *)(param_1 + 6) = iVar7;
    *(float *)((longlong)param_1 + 0x34) = fVar9;
  }
  else {
    *(float *)((longlong)param_1 + 0x2c) = fVar9;
    *(int *)(param_1 + 5) = iVar1;
    *(int *)(param_1 + 0xc) = param_4;
    *(int *)(param_1 + 6) = iVar7;
    *(float *)((longlong)param_1 + 0x34) = fVar10;
  }
  return;
}



// FUNCTION 1427e9ee0 FUN_1427e9ee0 body=860 status=ok
// SIG undefined FUN_1427e9ee0(void)

void FUN_1427e9ee0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  void *_Dst;
  longlong lVar8;
  ulonglong uVar9;
  void *_Dst_00;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  int local_res8 [2];
  
  if (param_1[8] != 0) {
    cVar6 = DoRecomputeSkinTangentsOnGPU_RT();
    bVar15 = cVar6 == '\0';
    lVar5 = *(longlong *)(*(longlong *)*param_1 + (longlong)*(int *)(param_1 + 1) * 8);
    if ((bool)*(char *)(param_1 + 0xe) != (DAT_146534df0 != 0)) {
      FRenderResource::UpdateRHI();
    }
    uVar13 = *(int *)(lVar5 + 0x16c) * 0x18;
    _Dst = (void *)FMemory::Malloc(uVar13);
    if (bVar15) {
      iVar7 = *(int *)(lVar5 + 0x16c) - DAT_146b15520;
      if ((0 < iVar7) && (DAT_146b15520 = DAT_146b15520 + iVar7, DAT_146b15524 < DAT_146b15520)) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146b15518);
      }
      _guard_xfg_dispatch_icall_nop(DAT_146b15518,0,(ulonglong)*(uint *)(lVar5 + 0x16c) << 2);
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)*(uint *)(lVar5 + 0x16c) * 0x18);
    uVar11 = 0;
    iVar7 = 0;
    if (0 < (int)param_2[1]) {
      lVar14 = 0;
      do {
        fVar16 = *(float *)(*param_3 + (longlong)*(int *)(lVar14 + 8 + *param_2) * 4);
        lVar8 = UMorphTarget::GetMorphTargetDelta
                          (*(undefined8 *)(lVar14 + *param_2),*(undefined4 *)(param_1 + 1),
                           local_res8);
        iVar12 = 0;
        if (0 < local_res8[0]) {
          pfVar10 = (float *)(lVar8 + 0x14);
          do {
            uVar9 = (ulonglong)(uint)pfVar10[1];
            if ((uint)pfVar10[1] < (uint)*(float *)(lVar5 + 0x16c)) {
              fVar1 = pfVar10[-4];
              fVar2 = pfVar10[-3];
              fVar3 = *(float *)((longlong)_Dst + uVar9 * 0x18 + 4);
              fVar4 = *(float *)((longlong)_Dst + uVar9 * 0x18 + 8);
              *(float *)((longlong)_Dst + uVar9 * 0x18) =
                   fVar16 * pfVar10[-5] + *(float *)((longlong)_Dst + uVar9 * 0x18);
              *(float *)((longlong)_Dst + uVar9 * 0x18 + 4) = fVar1 * fVar16 + fVar3;
              *(float *)((longlong)_Dst + uVar9 * 0x18 + 8) = fVar2 * fVar16 + fVar4;
              if (bVar15) {
                fVar1 = pfVar10[-1];
                fVar2 = *pfVar10;
                *(float *)((longlong)_Dst + uVar9 * 0x18 + 0xc) =
                     fVar16 * pfVar10[-2] + *(float *)((longlong)_Dst + uVar9 * 0x18 + 0xc);
                *(float *)((longlong)_Dst + uVar9 * 0x18 + 0x10) =
                     fVar1 * fVar16 + *(float *)((longlong)_Dst + uVar9 * 0x18 + 0x10);
                *(float *)((longlong)_Dst + uVar9 * 0x18 + 0x14) =
                     fVar2 * fVar16 + *(float *)((longlong)_Dst + uVar9 * 0x18 + 0x14);
                *(float *)((longlong)DAT_146b15518 + (longlong)(int)pfVar10[1] * 4) =
                     ABS(fVar16) +
                     *(float *)((longlong)DAT_146b15518 + (longlong)(int)pfVar10[1] * 4);
              }
            }
            iVar12 = iVar12 + 1;
            pfVar10 = pfVar10 + 7;
          } while (iVar12 < local_res8[0]);
        }
        iVar7 = iVar7 + 1;
        lVar14 = lVar14 + 0x10;
      } while (iVar7 < (int)param_2[1]);
    }
    if ((bVar15) && (*(int *)(lVar5 + 0x16c) != 0)) {
      do {
        fVar16 = *(float *)((longlong)DAT_146b15518 + (longlong)(int)uVar11 * 4);
        if (1.0 < fVar16) {
          uVar9 = (ulonglong)uVar11;
          fVar16 = 1.0 / fVar16;
          *(float *)((longlong)_Dst + uVar9 * 0x18 + 0xc) =
               fVar16 * *(float *)((longlong)_Dst + uVar9 * 0x18 + 0xc);
          *(float *)((longlong)_Dst + uVar9 * 0x18 + 0x10) =
               fVar16 * *(float *)((longlong)_Dst + uVar9 * 0x18 + 0x10);
          *(float *)((longlong)_Dst + uVar9 * 0x18 + 0x14) =
               fVar16 * *(float *)((longlong)_Dst + uVar9 * 0x18 + 0x14);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(lVar5 + 0x16c));
    }
    _Dst_00 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                (DAT_146ab6358,&DAT_146ab6e78,param_1[8],0,uVar13,1);
    _guard_xfg_dispatch_icall_nop(_Dst_00,_Dst,(ulonglong)uVar13);
    FMemory::Free(_Dst);
    (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,param_1[8]);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return;
}



// FUNCTION 1427ea240 FUN_1427ea240 body=3476 status=ok
// SIG undefined FUN_1427ea240(void)

void FUN_1427ea240(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  void *_Src;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  int local_134 [3];
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0 [2];
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_108 = param_1 + 0x10;
    if ((bool)*(char *)(param_1 + 0x70) != (DAT_146534df0 != 0)) {
      FRenderResource::UpdateRHI();
    }
    plVar10 = (longlong *)0x0;
    local_128 = 0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    FScopedGPUStatEvent::Begin(local_b0,param_2,&DAT_146b154a0,&local_128);
    local_120 = *(longlong *)(param_1 + 0x68);
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar18 = plVar15 + 1;
    local_e8 = local_120;
    if (*(longlong **)(param_2 + 0x38) < plVar18) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar18 = plVar15 + 1;
    }
    *(longlong **)(param_2 + 0x30) = plVar18;
    *plVar15 = local_e8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[4] = 1;
    puVar8[3] = plVar15;
    puVar8[5] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_120);
    plVar18 = plVar10;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      plVar18 = (longlong *)
                (ulonglong)
                (uint)(*(int *)(*(longlong *)
                                 (**(longlong **)(param_1 + 0x78) +
                                 (longlong)*(int *)(param_1 + 0x74) * 8) + 0x16c) * 0x18);
    }
    local_118 = *(longlong *)(param_1 + 0x68);
    if (local_118 != 0) {
      LOCK();
      *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
      UNLOCK();
    }
    ClearUAV(param_2,local_118,plVar18,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0x3f800000;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144e0a8c8;
    *(undefined1 *)(puVar8 + 2) = 0;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0x3f800000;
    local_148 = 0;
    local_13c = 0;
    FUN_1427d5180(param_3,0,&local_88);
    local_f0 = *(int *)(param_4 + 0x100);
    local_f8 = (undefined4 *)0x0;
    local_ec = 0;
    if (0 < local_f0) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    puVar4 = local_f8;
    *local_f8 = 0;
    plVar18 = plVar10;
    plVar15 = plVar10;
    if (0 < (int)param_3[1]) {
      do {
        plVar18 = (longlong *)((longlong)plVar18 + 4);
        uVar11 = (int)plVar15 + 1;
        *(uint *)((longlong)local_f8 + (longlong)plVar18) =
             *(uint *)(*param_3 + -4 + (longlong)plVar18) & 0x7fffffff;
        plVar15 = (longlong *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)param_3[1]);
    }
    piVar13 = *(int **)(param_4 + 0xf0);
    piVar1 = piVar13 + (longlong)*(int *)(param_4 + 0xf8) * 3;
    for (; piVar13 != piVar1; piVar13 = piVar13 + 3) {
      local_f8[*piVar13] = (float)local_f8[piVar13[2]] + (float)local_f8[piVar13[1]];
    }
    local_140 = 0;
    iVar14 = 0;
    if (*(int *)(param_4 + 0xd8) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_148,*(int *)(param_4 + 0xd8));
      iVar14 = *(int *)(param_4 + 0xd8);
    }
    plVar18 = plVar10;
    if (0 < iVar14) {
      do {
        iVar14 = local_140;
        fVar20 = 1.0;
        fVar2 = (float)puVar4[(longlong)(*(int *)(param_4 + 200) + (int)plVar18) + 1];
        if (1.0 < fVar2) {
          fVar20 = 1.0 / fVar2;
        }
        lVar16 = (longlong)local_140;
        local_140 = local_140 + 1;
        if (local_13c < local_140) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_148,iVar14);
        }
        uVar11 = (int)plVar18 + 1;
        *(float *)(local_148 + lVar16 * 4) = fVar20;
        plVar18 = (longlong *)(ulonglong)uVar11;
      } while ((int)uVar11 < *(int *)(param_4 + 0xd8));
    }
    FMemory::Free(puVar4);
    local_a0 = &DAT_146b15550;
    local_98 = 0;
    lVar16 = FUN_1419ef210(DAT_1464c9c54);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar16 + 0x38,&local_138,&local_a0);
    plVar18 = plVar10;
    if (local_138 != -1) {
      plVar18 = (longlong *)((longlong)local_138 * 0x20 + *(longlong *)(lVar16 + 0x38));
    }
    plVar15 = plVar18 + 2;
    if (plVar18 == (longlong *)0x0) {
      plVar15 = plVar10;
    }
    lVar16 = *plVar15;
    if (*(int *)(param_4 + 200) != 0) {
      do {
        iVar14 = 0;
        lVar17 = 0x7f;
        plVar18 = plVar10;
        do {
          uVar11 = (uint)plVar18;
          if (uVar11 < *(uint *)(param_4 + 200)) {
            if (uVar11 == 0xffffffff) {
              iVar12 = *(int *)(param_4 + 0x104);
            }
            else {
              iVar12 = *(int *)(*(longlong *)(param_4 + 0xc0) + (longlong)(int)uVar11 * 4);
            }
            iVar14 = iVar14 + iVar12;
          }
          uVar11 = uVar11 + 1;
          plVar18 = (longlong *)(ulonglong)uVar11;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        if (iVar14 != 0) {
          FUN_1427e7940(lVar16,param_2,&local_88,param_4,local_108);
          FUN_1427e7270(lVar16,param_2,plVar10,param_4,param_3);
          puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar8 + 4;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar8 + 4;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar8;
          *(undefined8 **)(param_2 + 8) = puVar8 + 1;
          puVar8[1] = 0;
          *puVar8 = &PTR_LAB_144d8df50;
          *(undefined4 *)(puVar8 + 2) = 1;
          *(undefined4 *)(puVar8 + 3) = 1;
          *(uint *)((longlong)puVar8 + 0x14) = iVar14 + 0x1fU >> 5;
          puVar7 = *(undefined8 **)(param_1 + 0x68);
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
            UNLOCK();
          }
          plVar18 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar10 = plVar18 + 1;
          local_e0 = puVar7;
          if (*(longlong **)(param_2 + 0x38) < plVar10) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            plVar18 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            plVar10 = plVar18 + 1;
          }
          *(longlong **)(param_2 + 0x30) = plVar10;
          *plVar18 = (longlong)local_e0;
          puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar9 + 6;
          if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar8 = puVar9 + 6;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar8;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar9;
          *(undefined8 **)(param_2 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar9 + 2) = 1;
          puVar9[3] = plVar18;
          *(undefined4 *)(puVar9 + 4) = 3;
          *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
          puVar9[5] = 0;
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar7 + 1);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              if ((*(char *)(puVar7 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
                LOCK();
                bVar19 = *(int *)((longlong)puVar7 + 0xc) == 0;
                if (bVar19) {
                  *(int *)((longlong)puVar7 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar19) {
                  uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar6 == 0) {
                    lVar17 = 0;
                  }
                  else {
                    lVar17 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar17 + 8) = puVar7;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
        }
        plVar10 = (longlong *)(ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_4 + 200));
    }
    lVar17 = *(longlong *)(lVar16 + 0x48);
    if (*(char *)(lVar17 + 0x28) == '\0') {
      FUN_1419f3850(lVar17);
    }
    lVar17 = *(longlong *)(lVar17 + 0x60);
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    local_d8 = lVar17;
    if (*(short *)(lVar16 + 0xc2) != 0) {
      uVar3 = *(ushort *)(lVar16 + 0xc0);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d91e40;
      puVar8[2] = lVar17;
      *(uint *)(puVar8 + 3) = (uint)uVar3;
      puVar8[4] = 0;
    }
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_d8);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144e0a8c8;
    *(undefined1 *)(puVar8 + 2) = 1;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9c50;
    local_110 = *(longlong *)(param_1 + 0x68);
    if (local_110 != 0) {
      LOCK();
      *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
      UNLOCK();
    }
    plVar18 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar10 = plVar18 + 1;
    local_d0 = local_110;
    if (*(longlong **)(param_2 + 0x38) < plVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      plVar18 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar10 = plVar18 + 1;
    }
    *(longlong **)(param_2 + 0x30) = plVar10;
    *plVar18 = local_d0;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = plVar18;
    *(undefined4 *)(puVar8 + 4) = 2;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
    puVar8[5] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_110);
    local_78 = &DAT_146b156a0;
    local_70 = 0;
    lVar16 = FUN_1419ef210(DAT_1464c9c54);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar16 + 0x38,local_134,&local_78);
    if (local_134[0] == -1) {
      lVar16 = 0;
    }
    else {
      lVar16 = (longlong)local_134[0] * 0x20 + *(longlong *)(lVar16 + 0x38);
    }
    plVar18 = (longlong *)0x0;
    uVar11 = *(uint *)(param_4 + 0xd8);
    plVar10 = (longlong *)(lVar16 + 0x10);
    if (lVar16 == 0) {
      plVar10 = plVar18;
    }
    lVar16 = *plVar10;
    if (uVar11 != 0) {
      do {
        iVar14 = 0;
        lVar17 = 0x7f;
        plVar10 = plVar18;
        do {
          uVar6 = (uint)plVar10;
          if (uVar6 < uVar11) {
            iVar14 = iVar14 + *(int *)(*(longlong *)(param_4 + 0xe0) + (longlong)(int)uVar6 * 4);
          }
          uVar6 = uVar6 + 1;
          plVar10 = (longlong *)(ulonglong)uVar6;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        if (iVar14 != 0) {
          FUN_1427e76d0(lVar16,param_2,&local_68,param_4,local_108);
          FUN_1427e6c10(lVar16,param_2,plVar18,param_4,&local_148);
          puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar8 + 4;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar8 + 4;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar8;
          *(undefined8 **)(param_2 + 8) = puVar8 + 1;
          puVar8[1] = 0;
          *puVar8 = &PTR_LAB_144d8df50;
          *(undefined4 *)(puVar8 + 2) = 1;
          *(undefined4 *)(puVar8 + 3) = 1;
          *(uint *)((longlong)puVar8 + 0x14) = iVar14 + 0x1fU >> 5;
          puVar7 = *(undefined8 **)(param_1 + 0x68);
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
            UNLOCK();
          }
          plVar18 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar10 = plVar18 + 1;
          local_c8 = puVar7;
          if (*(longlong **)(param_2 + 0x38) < plVar10) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
            plVar18 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            plVar10 = plVar18 + 1;
          }
          *(longlong **)(param_2 + 0x30) = plVar10;
          *plVar18 = (longlong)local_c8;
          puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar9 + 6;
          if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
            puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar8 = puVar9 + 6;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar8;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar9;
          *(undefined8 **)(param_2 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar9 + 2) = 1;
          puVar9[3] = plVar18;
          *(undefined4 *)(puVar9 + 4) = 3;
          *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
          puVar9[5] = 0;
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar7 + 1);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              if ((*(char *)(puVar7 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
                LOCK();
                bVar19 = *(int *)((longlong)puVar7 + 0xc) == 0;
                if (bVar19) {
                  *(int *)((longlong)puVar7 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar19) {
                  uVar11 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar11 == 0) {
                    lVar17 = 0;
                  }
                  else {
                    lVar17 = (&DAT_1468a81f8)[uVar11 >> 0xe] + (ulonglong)(uVar11 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar17 + 8) = puVar7;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
        }
        uVar11 = *(uint *)(param_4 + 0xd8);
        plVar18 = (longlong *)(ulonglong)uVar6;
      } while (uVar6 < uVar11);
    }
    lVar17 = *(longlong *)(lVar16 + 0x48);
    if (*(char *)(lVar17 + 0x28) == '\0') {
      FUN_1419f3850(lVar17);
    }
    lVar17 = *(longlong *)(lVar17 + 0x60);
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    local_c0 = lVar17;
    if (*(short *)(lVar16 + 0xc2) != 0) {
      uVar3 = *(ushort *)(lVar16 + 0xc0);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d91e40;
      puVar8[2] = lVar17;
      *(uint *)(puVar8 + 3) = (uint)uVar3;
      puVar8[4] = 0;
    }
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_c0);
    local_100 = *(longlong *)(param_1 + 0x68);
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    plVar18 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar10 = plVar18 + 1;
    local_b8 = local_100;
    if (*(longlong **)(param_2 + 0x38) < plVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      plVar18 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar10 = plVar18 + 1;
    }
    *(longlong **)(param_2 + 0x30) = plVar10;
    *plVar18 = local_b8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 1;
    puVar8[3] = plVar18;
    *(undefined4 *)(puVar8 + 4) = 0;
    puVar8[5] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_100);
    if (local_148 != 0) {
      FMemory::Free();
    }
    puVar7 = (undefined8 *)(param_1 + 0x50);
    if (puVar7 != param_5) {
      iVar14 = *(int *)(param_5 + 1);
      _Src = (void *)*param_5;
      *(int *)(param_1 + 0x58) = iVar14;
      if ((iVar14 == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar7,iVar14);
        _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar14 << 2);
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
    if (local_b0[0] != 0) {
      FScopedGPUStatEvent::End(local_b0);
    }
  }
  return;
}



// FUNCTION 1427eaff0 FUN_1427eaff0 body=78 status=ok
// SIG undefined FUN_1427eaff0(void)

void FUN_1427eaff0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xbf8)) {
    lVar2 = 0;
    do {
      FUN_1426b0480(*(undefined8 *)(*(longlong *)(param_1 + 0xbf0) + lVar2));
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0xbf8));
  }
  return;
}



// FUNCTION 1427eb040 FUN_1427eb040 body=373 status=ok
// SIG undefined FUN_1427eb040(void)

void FUN_1427eb040(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar1 = param_2[0xe3];
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_2 + 0xe4);
  if ((plVar3 == (longlong *)0x0) || ((int)param_2[0xf2] != *(int *)(lVar1 + 0x160))) {
    bVar2 = false;
    plVar4 = param_2 + (longlong)(int)param_2[0xee] * 2;
  }
  else {
    bVar2 = true;
    plVar4 = plVar3 + (longlong)(int)plVar3[0xee] * 2;
  }
  if (!bVar2) {
    plVar3 = param_2;
  }
  lVar9 = lVar1 + 0x290;
  lVar5 = (**(code **)(*param_2 + 0x950))(param_2);
  if (lVar5 != 0) {
    lVar5 = (**(code **)(*param_2 + 0x950))(param_2);
    if (*(int *)(lVar5 + 8) == *(int *)(lVar1 + 0x298)) {
      lVar9 = (**(code **)(*param_2 + 0x950))(param_2);
    }
  }
  if (*(int *)(param_1 + 8) != *(int *)(lVar9 + 8)) {
    iVar7 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 8) = 0;
    plVar8 = (longlong *)0x0;
    if ((iVar7 < 0) && (plVar8 = (longlong *)0x0, iVar7 != 0)) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
      plVar8 = (longlong *)(ulonglong)*(uint *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
    }
    iVar6 = *(int *)(lVar9 + 8) + (int)plVar8;
    *(int *)(param_1 + 8) = iVar6;
    if (iVar7 < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,plVar8);
    }
  }
  plVar8 = (longlong *)0x0;
  if (bVar2) {
    plVar8 = param_2 + 0xf1;
  }
  FUN_1427eb1c0(param_1,plVar4 + 0xe5,plVar3 + 0x10d,plVar8,lVar9,lVar1 + 0x138,param_3,param_4,
                param_5);
  return;
}



// FUNCTION 1427eb1c0 FUN_1427eb1c0 body=1996 status=ok
// SIG undefined FUN_1427eb1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427eb1c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,longlong *param_7,int param_8,ulonglong param_9
                  )

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
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
  undefined8 uVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 *puVar26;
  float *pfVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  int iVar35;
  longlong lVar36;
  longlong *plVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auStack_158 [32];
  int local_138;
  int local_134;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  undefined1 local_118 [64];
  longlong *local_d8;
  ulonglong local_d0 [19];
  
  local_d0[2] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar36 = *(longlong *)(*param_7 + (longlong)param_8 * 8);
  local_130 = param_3;
  local_120 = param_4;
  if ((int)param_1[1] != (int)param_5[1]) {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar28 = 0;
    if ((*(int *)((longlong)param_1 + 0xc) < 0) &&
       (iVar28 = 0, *(int *)((longlong)param_1 + 0xc) != 0)) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1);
      iVar28 = (int)param_1[1];
    }
    iVar28 = (int)param_5[1] + iVar28;
    *(int *)(param_1 + 1) = iVar28;
    if (*(int *)((longlong)param_1 + 0xc) < iVar28) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1);
    }
  }
  uVar25 = uRam0000000146b1540c;
  uVar24 = uRam0000000146b15408;
  uVar23 = uRam0000000146b15404;
  uVar31 = _DAT_146b15400;
  local_138 = (int)param_3[1];
  plVar37 = (longlong *)(lVar36 + 0x408);
  iVar28 = (int)param_2[1];
  local_d0[0] = param_9;
  local_d0[1] = 0;
  if (plVar37 != (longlong *)0x0) {
    local_128 = 0;
    local_134 = iVar28;
    local_d8 = plVar37;
    iVar35 = local_138;
    do {
      uVar32 = 0;
      uVar33 = uVar32;
      if (0 < (int)plVar37[1]) {
        do {
          uVar18 = _DAT_1464aa7d8;
          uVar4 = *(ushort *)(*plVar37 + uVar32);
          uVar29 = (ulonglong)uVar4;
          if ((int)(uint)uVar4 < (int)param_5[1]) {
            lVar36 = *param_1;
            uVar38 = (uint)uVar4;
            uVar30 = (ulonglong)uVar38;
            lVar34 = (ulonglong)uVar38 * 0x40;
            *(undefined8 *)(lVar36 + lVar34) = _DAT_1464aa7d0;
            ((undefined8 *)(lVar36 + lVar34))[1] = uVar18;
            uVar18 = _DAT_1464aa7e8;
            puVar2 = (undefined8 *)(lVar36 + 0x10 + lVar34);
            *puVar2 = _DAT_1464aa7e0;
            puVar2[1] = uVar18;
            uVar22 = uRam00000001464aa7fc;
            uVar21 = DAT_1464aa7f8;
            uVar20 = DAT_1464aa7f4;
            puVar3 = (undefined4 *)(lVar36 + 0x20 + lVar34);
            *puVar3 = DAT_1464aa7f0;
            puVar3[1] = uVar20;
            puVar3[2] = uVar21;
            puVar3[3] = uVar22;
            uVar22 = _DAT_1464aa80c;
            uVar21 = uRam00000001464aa808;
            uVar20 = uRam00000001464aa804;
            puVar3 = (undefined4 *)(lVar36 + 0x30 + lVar34);
            *puVar3 = _DAT_1464aa800;
            puVar3[1] = uVar20;
            puVar3[2] = uVar21;
            puVar3[3] = uVar22;
            fVar15 = fRam0000000146b1541c;
            if (local_120 == (longlong *)0x0) {
              if ((int)uVar38 < (int)param_2[1]) {
                if (iVar35 == iVar28) {
                  iVar5 = *(int *)(*(longlong *)(param_6 + 0x20) + 8 + uVar29 * 0x10);
                  lVar36 = (longlong)iVar5;
                  if ((*(char *)(uVar30 + *param_3) != '\x01') && (iVar5 != -1)) goto LAB_1427eb3cc;
                  pfVar27 = (float *)(uVar30 * 0x30 + *param_2);
                  fVar42 = *pfVar27;
                  fVar44 = pfVar27[1];
                  fVar56 = pfVar27[2];
                  fVar46 = pfVar27[3];
                  fVar49 = fVar44 + fVar44;
                  fVar52 = fVar56 + fVar56;
                  fVar54 = (fVar42 + fVar42) * fVar42;
                  fVar55 = fVar49 * fVar44;
                  fVar56 = fVar52 * fVar56;
                  fVar39 = fVar42;
                  fVar40 = fVar46;
                  fVar41 = fVar46;
                  fVar50 = fVar52;
                  fVar48 = fVar52;
                  fVar51 = fVar42 + fVar42;
                  fVar53 = fVar49;
                }
                else {
                  pfVar27 = (float *)(uVar29 * 0x30 + *param_2);
                  fVar49 = *pfVar27;
                  fVar52 = pfVar27[1];
                  fVar56 = pfVar27[2];
                  fVar48 = pfVar27[3];
                  fVar46 = fVar49 + fVar49;
                  fVar42 = fVar52 + fVar52;
                  fVar44 = fVar56 + fVar56;
                  fVar54 = fVar46 * fVar49;
                  fVar55 = fVar42 * fVar52;
                  fVar56 = fVar44 * fVar56;
                  fVar39 = fVar44;
                  fVar40 = fVar44;
                  fVar41 = fVar42;
                  fVar50 = fVar49;
                  fVar51 = fVar48;
                  fVar53 = fVar48;
                }
LAB_1427eb714:
                fVar57 = pfVar27[8];
                fVar58 = pfVar27[9];
                fVar59 = pfVar27[10];
                fVar43 = fRam0000000146b15414 - (fVar56 + fVar54);
                fVar45 = fRam0000000146b15418 - (fVar55 + fVar54);
                fVar47 = (float)((uint)((fRam0000000146b1541c - (fVar54 + fVar54)) * pfVar27[0xb]) &
                                uVar25);
                fVar54 = pfVar27[4];
                fVar60 = pfVar27[5];
                fVar8 = pfVar27[6];
                lVar36 = *param_1;
                puVar1 = (uint *)(lVar36 + lVar34);
                *puVar1 = (uint)((_DAT_146b15410 - (fVar56 + fVar55)) * fVar57) & uVar31;
                puVar1[1] = (uint)((fVar48 * fVar40 + fVar49 * fVar42) * fVar57);
                puVar1[2] = (uint)(fVar57 * (fVar50 * fVar39 - fVar53 * fVar41));
                puVar1[3] = (uint)fVar47;
                pfVar27 = (float *)(lVar36 + 0x10 + lVar34);
                *pfVar27 = fVar58 * (fVar49 * fVar42 - fVar48 * fVar40);
                pfVar27[1] = (float)((uint)(fVar43 * fVar58) & uVar23);
                pfVar27[2] = (fVar51 * fVar46 + fVar52 * fVar44) * fVar58;
                pfVar27[3] = fVar47;
                pfVar27 = (float *)(lVar36 + 0x20 + lVar34);
                *pfVar27 = (fVar53 * fVar41 + fVar50 * fVar39) * fVar59;
                pfVar27[1] = fVar59 * (fVar52 * fVar44 - fVar51 * fVar46);
                pfVar27[2] = (float)((uint)(fVar45 * fVar59) & uVar24);
                pfVar27[3] = fVar47;
                pfVar27 = (float *)(lVar36 + 0x30 + lVar34);
                *pfVar27 = fVar54;
                pfVar27[1] = fVar60;
                pfVar27[2] = fVar8;
                pfVar27[3] = fVar15;
              }
            }
            else {
              iVar5 = *(int *)(*local_120 + uVar29 * 4);
              if ((iVar5 < 0) || ((int)param_2[1] <= iVar5)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              iVar6 = *(int *)(*(longlong *)(param_6 + 0x20) + 8 + uVar29 * 0x10);
              lVar36 = (longlong)iVar6;
              iVar28 = local_134;
              iVar35 = local_138;
              if (bVar19) {
                if ((*(char *)((longlong)iVar5 + *param_3) == '\x01') || (iVar6 == -1)) {
                  pfVar27 = (float *)((longlong)iVar5 * 0x30 + *param_2);
                  fVar42 = *pfVar27;
                  fVar44 = pfVar27[1];
                  fVar56 = pfVar27[2];
                  fVar46 = pfVar27[3];
                  fVar49 = fVar44 + fVar44;
                  fVar52 = fVar56 + fVar56;
                  fVar54 = (fVar42 + fVar42) * fVar42;
                  fVar55 = fVar49 * fVar44;
                  fVar56 = fVar52 * fVar56;
                  fVar39 = fVar42;
                  fVar40 = fVar46;
                  fVar41 = fVar46;
                  fVar50 = fVar52;
                  fVar48 = fVar52;
                  fVar51 = fVar42 + fVar42;
                  fVar53 = fVar49;
                  goto LAB_1427eb714;
                }
LAB_1427eb3cc:
                lVar7 = *param_1;
                puVar26 = (undefined8 *)FMatrix::ApplyScale(lVar36 * 0x40 + lVar7,local_118,0);
                uVar18 = puVar26[1];
                *(undefined8 *)(lVar34 + lVar7) = *puVar26;
                ((undefined8 *)(lVar34 + lVar7))[1] = uVar18;
                uVar18 = puVar26[3];
                puVar2 = (undefined8 *)(lVar34 + 0x10 + lVar7);
                *puVar2 = puVar26[2];
                puVar2[1] = uVar18;
                uVar18 = puVar26[5];
                puVar2 = (undefined8 *)(lVar34 + 0x20 + lVar7);
                *puVar2 = puVar26[4];
                puVar2[1] = uVar18;
                uVar18 = puVar26[7];
                puVar2 = (undefined8 *)(lVar34 + 0x30 + lVar7);
                *puVar2 = puVar26[6];
                puVar2[1] = uVar18;
                param_3 = local_130;
                iVar28 = local_134;
                iVar35 = local_138;
              }
              else {
                lVar7 = *param_1;
                pfVar27 = (float *)(uVar30 * 0x30 + *(longlong *)(param_6 + 0x30));
                fVar42 = *pfVar27;
                fVar44 = pfVar27[1];
                fVar56 = pfVar27[2];
                fVar46 = pfVar27[3];
                fVar49 = pfVar27[4];
                fVar52 = pfVar27[5];
                fVar48 = pfVar27[6];
                fVar50 = fVar44 + fVar44;
                fVar53 = fVar56 + fVar56;
                fVar54 = (fVar42 + fVar42) * fVar42;
                fVar51 = (fVar42 + fVar42) * fVar46;
                fVar39 = pfVar27[8];
                fVar40 = pfVar27[9];
                fVar41 = pfVar27[10];
                fVar58 = (fVar53 * fVar46 + fVar50 * fVar42) * fVar39;
                fVar59 = (fVar51 + fVar53 * fVar44) * fVar40;
                fVar60 = (fVar50 * fVar46 + fVar53 * fVar42) * fVar41;
                fVar55 = fVar40 * (fVar50 * fVar42 - fVar53 * fVar46);
                fVar51 = fVar41 * (fVar53 * fVar44 - fVar51);
                fVar57 = fVar39 * (fVar53 * fVar42 - fVar50 * fVar46);
                fVar42 = (float)((uint)((_DAT_146b15410 - (fVar53 * fVar56 + fVar50 * fVar44)) *
                                       fVar39) & uVar31);
                fVar56 = (float)((uint)((fRam0000000146b15414 - (fVar53 * fVar56 + fVar54)) * fVar40
                                       ) & uVar23);
                fVar44 = (float)((uint)((fRam0000000146b15418 - (fVar50 * fVar44 + fVar54)) * fVar41
                                       ) & uVar24);
                fVar46 = (float)((uint)((fRam0000000146b1541c - (fVar54 + fVar54)) * pfVar27[0xb]) &
                                uVar25);
                if (iVar6 == -1) {
                  pfVar27 = (float *)(lVar7 + lVar34);
                  *pfVar27 = fVar42;
                  pfVar27[1] = fVar58;
                  pfVar27[2] = fVar57;
                  pfVar27[3] = fVar46;
                  pfVar27 = (float *)(lVar7 + 0x10 + lVar34);
                  *pfVar27 = fVar55;
                  pfVar27[1] = fVar56;
                  pfVar27[2] = fVar59;
                  pfVar27[3] = fVar46;
                  pfVar27 = (float *)(lVar7 + 0x20 + lVar34);
                  *pfVar27 = fVar60;
                  pfVar27[1] = fVar51;
                  pfVar27[2] = fVar44;
                  pfVar27[3] = fVar46;
                  pfVar27 = (float *)(lVar7 + 0x30 + lVar34);
                  *pfVar27 = fVar49;
                  pfVar27[1] = fVar52;
                  pfVar27[2] = fVar48;
                  pfVar27[3] = fVar15;
                }
                else {
                  pfVar27 = (float *)(lVar36 * 0x40 + lVar7);
                  fVar39 = pfVar27[4];
                  fVar40 = pfVar27[5];
                  fVar41 = pfVar27[6];
                  fVar50 = pfVar27[7];
                  fVar53 = *pfVar27;
                  fVar54 = pfVar27[1];
                  fVar8 = pfVar27[2];
                  fVar43 = pfVar27[3];
                  fVar45 = pfVar27[8];
                  fVar47 = pfVar27[9];
                  fVar9 = pfVar27[10];
                  fVar10 = pfVar27[0xb];
                  fVar11 = pfVar27[0xc];
                  fVar12 = pfVar27[0xd];
                  fVar13 = pfVar27[0xe];
                  fVar14 = pfVar27[0xf];
                  pfVar27 = (float *)(lVar7 + lVar34);
                  *pfVar27 = fVar42 * fVar53 + fVar58 * fVar39 + fVar57 * fVar45 + fVar46 * fVar11;
                  pfVar27[1] = fVar42 * fVar54 + fVar58 * fVar40 + fVar57 * fVar47 + fVar46 * fVar12
                  ;
                  pfVar27[2] = fVar42 * fVar8 + fVar58 * fVar41 + fVar57 * fVar9 + fVar46 * fVar13;
                  pfVar27[3] = fVar42 * fVar43 + fVar58 * fVar50 + fVar57 * fVar10 + fVar46 * fVar14
                  ;
                  pfVar27 = (float *)(lVar7 + 0x10 + lVar34);
                  *pfVar27 = fVar55 * fVar53 + fVar56 * fVar39 + fVar59 * fVar45 + fVar46 * fVar11;
                  pfVar27[1] = fVar55 * fVar54 + fVar56 * fVar40 + fVar59 * fVar47 + fVar46 * fVar12
                  ;
                  pfVar27[2] = fVar55 * fVar8 + fVar56 * fVar41 + fVar59 * fVar9 + fVar46 * fVar13;
                  pfVar27[3] = fVar55 * fVar43 + fVar56 * fVar50 + fVar59 * fVar10 + fVar46 * fVar14
                  ;
                  pfVar27 = (float *)(lVar7 + 0x20 + lVar34);
                  *pfVar27 = fVar60 * fVar53 + fVar51 * fVar39 + fVar44 * fVar45 + fVar46 * fVar11;
                  pfVar27[1] = fVar60 * fVar54 + fVar51 * fVar40 + fVar44 * fVar47 + fVar46 * fVar12
                  ;
                  pfVar27[2] = fVar60 * fVar8 + fVar51 * fVar41 + fVar44 * fVar9 + fVar46 * fVar13;
                  pfVar27[3] = fVar60 * fVar43 + fVar51 * fVar50 + fVar44 * fVar10 + fVar46 * fVar14
                  ;
                  pfVar27 = (float *)(lVar7 + 0x30 + lVar34);
                  *pfVar27 = fVar49 * fVar53 + fVar52 * fVar39 + fVar48 * fVar45 + fVar15 * fVar11;
                  pfVar27[1] = fVar49 * fVar54 + fVar52 * fVar40 + fVar48 * fVar47 + fVar15 * fVar12
                  ;
                  pfVar27[2] = fVar49 * fVar8 + fVar52 * fVar41 + fVar48 * fVar9 + fVar15 * fVar13;
                  pfVar27[3] = fVar49 * fVar43 + fVar52 * fVar50 + fVar48 * fVar10 + fVar15 * fVar14
                  ;
                }
              }
            }
          }
          uVar38 = (int)uVar33 + 1;
          uVar33 = (ulonglong)uVar38;
          uVar32 = uVar32 + 2;
        } while ((int)uVar38 < (int)plVar37[1]);
      }
      plVar37 = (longlong *)local_d0[local_128];
      local_128 = local_128 + 1;
    } while (plVar37 != (longlong *)0x0);
  }
  uVar32 = 0;
  uVar33 = uVar32;
  if (0 < (int)param_1[1]) {
    do {
      lVar36 = *param_5;
      uVar31 = (int)uVar33 + 1;
      lVar34 = *param_1;
      pfVar27 = (float *)(uVar32 + lVar36);
      fVar15 = *pfVar27;
      fVar42 = pfVar27[1];
      fVar44 = pfVar27[2];
      fVar56 = pfVar27[3];
      pfVar27 = (float *)(lVar34 + 0x10 + uVar32);
      fVar46 = *pfVar27;
      fVar49 = pfVar27[1];
      fVar52 = pfVar27[2];
      fVar48 = pfVar27[3];
      pfVar27 = (float *)(lVar34 + uVar32);
      fVar39 = *pfVar27;
      fVar40 = pfVar27[1];
      fVar41 = pfVar27[2];
      fVar50 = pfVar27[3];
      pfVar27 = (float *)(lVar34 + 0x20 + uVar32);
      fVar51 = *pfVar27;
      fVar53 = pfVar27[1];
      fVar54 = pfVar27[2];
      fVar55 = pfVar27[3];
      pfVar27 = (float *)(lVar34 + 0x30 + uVar32);
      fVar57 = *pfVar27;
      fVar58 = pfVar27[1];
      fVar59 = pfVar27[2];
      fVar60 = pfVar27[3];
      pfVar27 = (float *)(uVar32 + 0x10 + lVar36);
      fVar8 = *pfVar27;
      fVar43 = pfVar27[1];
      fVar45 = pfVar27[2];
      fVar47 = pfVar27[3];
      pfVar27 = (float *)(uVar32 + 0x20 + lVar36);
      fVar9 = *pfVar27;
      fVar10 = pfVar27[1];
      fVar11 = pfVar27[2];
      fVar12 = pfVar27[3];
      pfVar27 = (float *)(uVar32 + 0x30 + lVar36);
      fVar13 = *pfVar27;
      fVar14 = pfVar27[1];
      fVar16 = pfVar27[2];
      fVar17 = pfVar27[3];
      pfVar27 = (float *)(lVar34 + uVar32);
      *pfVar27 = fVar15 * fVar39 + fVar42 * fVar46 + fVar44 * fVar51 + fVar56 * fVar57;
      pfVar27[1] = fVar15 * fVar40 + fVar42 * fVar49 + fVar44 * fVar53 + fVar56 * fVar58;
      pfVar27[2] = fVar15 * fVar41 + fVar42 * fVar52 + fVar44 * fVar54 + fVar56 * fVar59;
      pfVar27[3] = fVar15 * fVar50 + fVar42 * fVar48 + fVar44 * fVar55 + fVar56 * fVar60;
      pfVar27 = (float *)(lVar34 + 0x10 + uVar32);
      *pfVar27 = fVar8 * fVar39 + fVar43 * fVar46 + fVar45 * fVar51 + fVar47 * fVar57;
      pfVar27[1] = fVar8 * fVar40 + fVar43 * fVar49 + fVar45 * fVar53 + fVar47 * fVar58;
      pfVar27[2] = fVar8 * fVar41 + fVar43 * fVar52 + fVar45 * fVar54 + fVar47 * fVar59;
      pfVar27[3] = fVar8 * fVar50 + fVar43 * fVar48 + fVar45 * fVar55 + fVar47 * fVar60;
      pfVar27 = (float *)(lVar34 + 0x20 + uVar32);
      *pfVar27 = fVar9 * fVar39 + fVar10 * fVar46 + fVar11 * fVar51 + fVar12 * fVar57;
      pfVar27[1] = fVar9 * fVar40 + fVar10 * fVar49 + fVar11 * fVar53 + fVar12 * fVar58;
      pfVar27[2] = fVar9 * fVar41 + fVar10 * fVar52 + fVar11 * fVar54 + fVar12 * fVar59;
      pfVar27[3] = fVar9 * fVar50 + fVar10 * fVar48 + fVar11 * fVar55 + fVar12 * fVar60;
      pfVar27 = (float *)(lVar34 + 0x30 + uVar32);
      *pfVar27 = fVar13 * fVar39 + fVar14 * fVar46 + fVar16 * fVar51 + fVar17 * fVar57;
      pfVar27[1] = fVar13 * fVar40 + fVar14 * fVar49 + fVar16 * fVar53 + fVar17 * fVar58;
      pfVar27[2] = fVar13 * fVar41 + fVar14 * fVar52 + fVar16 * fVar54 + fVar17 * fVar59;
      pfVar27[3] = fVar13 * fVar50 + fVar14 * fVar48 + fVar16 * fVar55 + fVar17 * fVar60;
      uVar32 = uVar32 + 0x40;
      uVar33 = (ulonglong)uVar31;
    } while ((int)uVar31 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1427eb990 FUN_1427eb990 body=210 status=ok
// SIG undefined FUN_1427eb990(void)

void FUN_1427eb990(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *(int *)(param_1 + 0xbf8);
  uVar7 = 0;
  uVar5 = uVar7;
  uVar6 = uVar7;
  if (0 < iVar2) {
    do {
      if (*(longlong *)(uVar6 + *(longlong *)(param_1 + 0xbf0)) != 0) {
        FUN_1426b0fd0();
      }
      iVar2 = *(int *)(param_1 + 0xbf8);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < iVar2);
  }
  if ((*(char *)(param_1 + 0xeb1) != '\0') && (uVar5 = uVar7, 0 < iVar2)) {
    do {
      lVar3 = *(longlong *)(uVar7 + *(longlong *)(param_1 + 0xbf0));
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x140;
        cVar1 = FWeakObjectPtr::IsValid(lVar3);
        if (cVar1 != '\0') {
          lVar3 = FWeakObjectPtr::Get(lVar3);
          FUN_1427d8550(param_1,param_1,*(undefined8 *)(lVar3 + 0x90));
          return;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar7 = uVar7 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0xbf8));
  }
  return;
}



// FUNCTION 1427eba70 FUN_1427eba70 body=338 status=ok
// SIG undefined FUN_1427eba70(void)

undefined8 * FUN_1427eba70(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144f65ab0;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1427ebbd0 FUN_1427ebbd0 body=673 status=ok
// SIG undefined FUN_1427ebbd0(void)

uint * FUN_1427ebbd0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  ulonglong *_Src;
  uint uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar9 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = uVar9;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar9 * 0x20 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar7 * 0x20 + *param_1);
      TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>::
      ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar4;
      goto LAB_1427ebe48;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar8 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar11 = -(iVar8 + uVar4) ^ uVar4 >> 0xd;
    uVar12 = (iVar8 - uVar4) - uVar11 ^ uVar11 >> 0xc;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 0x10;
    uVar11 = (uVar11 - uVar4) - uVar12 ^ uVar4 >> 5;
    uVar12 = (uVar12 - uVar4) - uVar11 ^ uVar11 >> 3;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 10;
    uVar12 = ((uVar11 - uVar4) - uVar12 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         uVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1427ebe48:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1427ebe80 FUN_1427ebe80 body=700 status=ok
// SIG undefined FUN_1427ebe80(void)

int * FUN_1427ebe80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x30);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x30) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar11 = false;
  puVar10 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar10 = *puVar10 | 1 << ((byte)iVar6 & 0x1f);
  puVar1 = (undefined8 *)param_3[1];
  puVar10 = (uint *)((longlong)iVar6 * 0x30 + *param_1);
  *puVar10 = *(uint *)*param_3;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(undefined8 *)(puVar10 + 2) = *puVar1;
  *puVar1 = 0;
  puVar10[4] = *(uint *)(puVar1 + 1);
  puVar10[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  puVar10[6] = *(uint *)(puVar1 + 2);
  puVar10[7] = *(uint *)((longlong)puVar1 + 0x14);
  puVar10[8] = *(uint *)(puVar1 + 3);
  puVar10[9] = *(uint *)((longlong)puVar1 + 0x1c);
  puVar10[10] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar10) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar5 * 0x30) == *puVar10) goto LAB_1427ec00e;
          iVar5 = *(int *)(*param_1 + 0x28 + (longlong)iVar5 * 0x30);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1427ec00e:
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar5 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar10,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1427ec113;
    }
  }
  if (3 < uVar9) {
    uVar3 = (uVar9 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar7;
    }
    uVar3 = (uVar9 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *puVar10;
    puVar10[0xb] = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar10[10] = *(uint *)((longlong)plVar4 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar6
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1427ec113:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1427ec140 FUN_1427ec140 body=512 status=ok
// SIG undefined FUN_1427ec140(void)

int * FUN_1427ec140(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar7 = (longlong *)*param_3;
  puVar3 = (undefined1 *)param_3[1];
  bVar13 = false;
  *param_2 = local_38[0];
  *local_30 = *plVar7;
  local_30[1] = plVar7[1];
  local_30[2] = plVar7[2];
  plVar7[2] = 0;
  plVar7[1] = 0;
  *(undefined1 *)(local_30 + 3) = *puVar3;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar10 = -1;
    iVar9 = iVar10;
    if (iVar12 != 0) {
      lVar4 = *local_30;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x28) == lVar4) break;
          iVar8 = *(int *)(*param_1 + 0x20 + (longlong)iVar8 * 0x28);
          iVar9 = iVar10;
        } while (iVar8 != -1);
      }
    }
    bVar13 = iVar9 != -1;
    if (bVar13) {
      lVar4 = *param_1;
      plVar7 = *(longlong **)(lVar4 + 0x10 + (longlong)iVar9 * 0x28);
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
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar9 * 0x28),local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_1427ec317;
    }
  }
  cVar6 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar6 == '\0') {
    uVar11 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x24) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1427ec317:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1427ec340 Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_&&>_> body=495 status=ok
// SIG undefined Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_&&>_>(void)

int * TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  puVar1 = (undefined1 *)param_3[1];
  bVar7 = false;
  *param_2 = local_28[0];
  *local_20 = *(uint *)*param_3;
  *(undefined1 *)(local_20 + 2) = *puVar1;
  local_20[4] = 0;
  local_20[5] = 0;
  *(undefined8 *)(local_20 + 4) = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = 0;
  local_20[6] = *(uint *)(puVar1 + 0x10);
  local_20[7] = *(uint *)(puVar1 + 0x14);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  local_20[8] = local_20[8] ^ (*(uint *)(puVar1 + 0x18) ^ local_20[8]) & 1;
  local_20[9] = *(uint *)(puVar1 + 0x1c);
  local_20[10] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x30) == *local_20) goto LAB_1427ec44e;
          iVar4 = *(int *)(*param_1 + 0x28 + (longlong)iVar4 * 0x30);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1427ec44e:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_1427ec504;
    }
  }
  cVar2 = TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_20;
    local_20[0xb] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_20[10] = *(uint *)((longlong)plVar3 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1427ec504:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1427ec530 Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_const_&>_> body=463 status=ok
// SIG undefined Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_const_&>_>(void)

int * TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  puVar1 = (undefined1 *)param_3[1];
  *param_2 = local_28[0];
  *local_20 = *(uint *)*param_3;
  *(undefined1 *)(local_20 + 2) = *puVar1;
  FString::FString(local_20 + 4,puVar1 + 8);
  bVar7 = false;
  local_20[8] = local_20[8] ^ (*(uint *)(puVar1 + 0x18) ^ local_20[8]) & 1;
  local_20[9] = *(uint *)(puVar1 + 0x1c);
  local_20[10] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x30) == *local_20) goto LAB_1427ec61e;
          iVar4 = *(int *)(*param_1 + 0x28 + (longlong)iVar4 * 0x30);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1427ec61e:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_1427ec6d4;
    }
  }
  cVar2 = TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_20;
    local_20[0xb] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_20[10] = *(uint *)((longlong)plVar3 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1427ec6d4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1427ec700 FUN_1427ec700 body=672 status=ok
// SIG undefined FUN_1427ec700(void)

int * FUN_1427ec700(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  bool local_res8;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar6 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar10 = *puVar10 | 1 << ((byte)iVar6 & 0x1f);
  uVar2 = param_3[1];
  puVar10 = (uint *)((longlong)iVar6 * 0x60 + *param_1);
  *puVar10 = *(uint *)*param_3;
  FUN_1427ed980(puVar10 + 2,uVar2);
  puVar10[0x16] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar10) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)((longlong)iVar6 * 0x60 + *param_1) == *puVar10) goto LAB_1427ec85f;
          iVar6 = *(int *)((longlong)iVar6 * 0x60 + 0x58 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1427ec85f:
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar10,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_1427ec97b;
    }
  }
  if (3 < uVar9) {
    uVar4 = (uVar9 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar8 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar7;
    }
    uVar4 = (uVar9 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *puVar10;
    puVar10[0x17] = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar10[0x16] =
         *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1427ec97b:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1427ec9a0 FUN_1427ec9a0 body=658 status=ok
// SIG undefined FUN_1427ec9a0(void)

int * FUN_1427ec9a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong *_Src;
  void *_Dst;
  bool bVar15;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar13 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar13 & 0x1f);
  puVar6 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)iVar13 * 0x20 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = *puVar6;
  uVar7 = puVar6[1];
  _Src[2] = uVar7;
  if (uVar7 != 0) {
    LOCK();
    *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  bVar15 = false;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      plVar10 = *(longlong **)((longlong)_Dst + 0x10);
      iVar13 = local_res8[0];
      if (plVar10 != (longlong *)0x0) {
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
          iVar13 = local_res8[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            iVar13 = local_res8[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar13;
      goto LAB_1427ecc12;
    }
  }
  cVar9 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar9 == '\0') {
    iVar13 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
    uVar14 = -(iVar13 + uVar12) ^ uVar12 >> 0xd;
    uVar11 = (iVar13 - uVar12) - uVar14 ^ uVar14 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 0x10;
    uVar14 = (uVar14 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar14 ^ uVar14 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 10;
    uVar11 = ((uVar14 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar11;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1427ecc12:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1427ecc40 FUN_1427ecc40 body=514 status=ok
// SIG undefined FUN_1427ecc40(void)

int * FUN_1427ecc40(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar7 = (longlong *)*param_3;
  puVar3 = (undefined1 *)param_3[1];
  *param_2 = local_38[0];
  *local_30 = *plVar7;
  local_30[1] = plVar7[1];
  lVar4 = plVar7[2];
  local_30[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(local_30 + 3) = *puVar3;
  bVar13 = false;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar10 = -1;
    iVar9 = iVar10;
    if (iVar12 != 0) {
      lVar4 = *local_30;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x28) == lVar4) break;
          iVar8 = *(int *)(*param_1 + 0x20 + (longlong)iVar8 * 0x28);
          iVar9 = iVar10;
        } while (iVar8 != -1);
      }
    }
    bVar13 = iVar9 != -1;
    if (bVar13) {
      lVar4 = *param_1;
      plVar7 = *(longlong **)(lVar4 + 0x10 + (longlong)iVar9 * 0x28);
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
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar9 * 0x28),local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_1427ece1a;
    }
  }
  cVar6 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar6 == '\0') {
    uVar11 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x24) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1427ece1a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1427ece50 FUN_1427ece50 body=803 status=ok
// SIG undefined FUN_1427ece50(void)

int * FUN_1427ece50(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  longlong *_Src;
  int iVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  void *_Dst;
  bool local_res8;
  
  iVar8 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar15 = (int)param_1[6];
    iVar10 = *(int *)((longlong)iVar15 * 0x20 + 4 + *param_1);
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar15;
  local_res8 = false;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar15 & 0x1f);
  _Src = (longlong *)((longlong)iVar15 * 0x20 + *param_1);
  plVar7 = (longlong *)param_3[1];
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar7;
  _Src[2] = plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    lVar4 = *_Src;
    iVar11 = iVar12;
    if (uVar14 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar11 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x20 + *param_1) == lVar4) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *param_1);
          iVar11 = iVar12;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x20 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar8 = *param_2;
      bVar5 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar9 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar9[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1427ed14a;
    }
  }
  if (3 < uVar14) {
    uVar6 = (uVar14 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar12;
    }
    uVar6 = (uVar14 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar14 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1427ed14a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1427ed180 Emplace<TPairInitializer<unsigned___int64_const_&,FWaveInstance_*_const_&>_> body=438 status=ok
// SIG undefined Emplace<TPairInitializer<unsigned___int64_const_&,FWaveInstance_*_const_&>_>(void)

int * TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FWaveInstance_*_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

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
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar1) goto LAB_1427ed25b;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1427ed25b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_1427ed30e;
    }
  }
  cVar2 = TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) * 0x17 + (int)*local_30 & (int)param_1[9] - 1U;
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
LAB_1427ed30e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1427ed340 IntroSortInternal<FActiveSound_*,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,`FConcurrencyGroup::StopQuietSoundsDueToMaxConcurrency'::`2'::FCompareActiveSounds>_> body=972 status=ok
// SIG undefined IntroSortInternal<FActiveSound_*,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,`FConcurrencyGroup::StopQuietSoundsDueToMaxConcurrency'::`2'::FCompareActiveSounds>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FActiveSound_*,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::StopQuietSoundsDueToMaxConcurrency_::_2_::FCompareActiveSounds>_>
               (longlong param_1,ulonglong param_2)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  float fVar17;
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
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_318 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar16 = &local_328;
    do {
      plVar4 = (longlong *)*plVar16;
      plVar14 = (longlong *)plVar16[1];
      local_338 = (int)plVar16[2];
      lVar9 = ((longlong)plVar14 - (longlong)plVar4 >> 3) + 1;
      plVar6 = plVar4;
      if (local_338 != 0) {
LAB_1427ed410:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          lVar2 = plVar6[lVar9 >> 1];
          plVar6[lVar9 >> 1] = *plVar6;
          plVar10 = plVar14 + 1;
          *plVar6 = lVar2;
          plVar4 = plVar6;
LAB_1427ed440:
          plVar4 = plVar4 + 1;
          if (plVar4 <= plVar14) goto code_r0x0001427ed449;
          goto LAB_1427ed460;
        }
        for (; plVar10 = plVar6, plVar4 = plVar6, plVar6 < plVar14; plVar14 = plVar14 + -1) {
          while (plVar4 = plVar4 + 1, plVar4 <= plVar14) {
            if (*(float *)(*plVar10 + 0x11c) < *(float *)(*plVar4 + 0x11c)) {
              plVar10 = plVar4;
            }
          }
          lVar9 = *plVar10;
          *plVar10 = *plVar14;
          *plVar14 = lVar9;
        }
        goto LAB_1427ed66c;
      }
LAB_1427ed51f:
      iVar15 = (int)lVar9;
      iVar3 = (iVar15 + -2) / 2;
      if (-1 < iVar3) {
        iVar5 = iVar3 * 2 + 1;
        iVar8 = iVar5;
        iVar7 = iVar3;
joined_r0x0001427ed53c:
        do {
          if (iVar5 < iVar15) {
            iVar12 = iVar3 * 2 + 1;
            iVar5 = iVar3 * 2 + 2;
            iVar13 = iVar12;
            if ((iVar5 < iVar15) &&
               (iVar13 = iVar5,
               *(float *)(plVar4[iVar5] + 0x11c) <= *(float *)(plVar4[iVar12] + 0x11c) &&
               *(float *)(plVar4[iVar12] + 0x11c) != *(float *)(plVar4[iVar5] + 0x11c))) {
              iVar13 = iVar12;
            }
            lVar9 = plVar4[iVar3];
            fVar17 = *(float *)(plVar4[iVar13] + 0x11c);
            pfVar1 = (float *)(lVar9 + 0x11c);
            if (*pfVar1 <= fVar17 && fVar17 != *pfVar1) {
              plVar4[iVar3] = plVar4[iVar13];
              iVar5 = iVar13 * 2 + 1;
              plVar4[iVar13] = lVar9;
              iVar3 = iVar13;
              goto joined_r0x0001427ed53c;
            }
          }
          iVar5 = iVar8 + -2;
          iVar3 = iVar7 + -1;
          iVar8 = iVar5;
          iVar7 = iVar3;
        } while (-1 < iVar3);
      }
      iVar15 = iVar15 + -1;
      lVar9 = (longlong)iVar15;
      if (0 < iVar15) {
        do {
          iVar3 = 0;
          lVar2 = *plVar4;
          *plVar4 = plVar4[lVar9];
          plVar4[lVar9] = lVar2;
          if (1 < iVar15) {
            do {
              iVar7 = iVar3 * 2 + 1;
              iVar5 = iVar3 * 2 + 2;
              iVar8 = iVar7;
              if ((iVar5 < iVar15) &&
                 (iVar8 = iVar5,
                 *(float *)(plVar4[iVar5] + 0x11c) <= *(float *)(plVar4[iVar7] + 0x11c) &&
                 *(float *)(plVar4[iVar7] + 0x11c) != *(float *)(plVar4[iVar5] + 0x11c))) {
                iVar8 = iVar7;
              }
              lVar2 = plVar4[iVar3];
              fVar17 = *(float *)(plVar4[iVar8] + 0x11c);
              pfVar1 = (float *)(lVar2 + 0x11c);
              if (fVar17 < *pfVar1 || fVar17 == *pfVar1) break;
              plVar4[iVar3] = plVar4[iVar8];
              plVar4[iVar8] = lVar2;
              iVar3 = iVar8;
            } while (iVar8 * 2 + 1 < iVar15);
          }
          iVar15 = iVar15 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_1427ed66c:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x0001427ed449:
  if (*(float *)(*plVar4 + 0x11c) < *(float *)(*plVar6 + 0x11c) ||
      *(float *)(*plVar4 + 0x11c) == *(float *)(*plVar6 + 0x11c)) goto LAB_1427ed440;
LAB_1427ed460:
  do {
    plVar11 = plVar10;
    lVar9 = plVar11[-1];
    plVar10 = plVar11 + -1;
    if (plVar10 <= plVar6) break;
  } while (*(float *)(*plVar6 + 0x11c) < *(float *)(lVar9 + 0x11c) ||
           *(float *)(*plVar6 + 0x11c) == *(float *)(lVar9 + 0x11c));
  if (plVar4 <= plVar10) {
    lVar2 = *plVar4;
    *plVar4 = lVar9;
    *plVar10 = lVar2;
    goto LAB_1427ed440;
  }
  lVar2 = *plVar6;
  local_338 = local_338 + -1;
  *plVar6 = lVar9;
  *plVar10 = lVar2;
  if ((longlong)((longlong)plVar10 + (-8 - (longlong)plVar6) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar14 - (longlong)plVar4 & 0xfffffffffffffff8U)) {
    if (plVar4 < plVar14) {
      *plVar16 = (longlong)plVar4;
      plVar16[1] = (longlong)plVar14;
      *(int *)(plVar16 + 2) = local_338;
      plVar16 = plVar16 + 3;
    }
    if (plVar10 <= plVar6 + 1) goto LAB_1427ed66c;
    plVar14 = plVar11 + -2;
    plVar4 = plVar6;
  }
  else {
    if (plVar6 + 1 < plVar10) {
      *plVar16 = (longlong)plVar6;
      plVar16[1] = (longlong)(plVar11 + -2);
      *(int *)(plVar16 + 2) = local_338;
      plVar16 = plVar16 + 3;
    }
    if (plVar14 <= plVar4) goto LAB_1427ed66c;
  }
  lVar9 = ((longlong)plVar14 - (longlong)plVar4 >> 3) + 1;
  plVar6 = plVar4;
  if (local_338 == 0) goto LAB_1427ed51f;
  goto LAB_1427ed410;
}



// FUNCTION 1427ed710 FUN_1427ed710 body=69 status=ok
// SIG undefined FUN_1427ed710(void)

ulonglong FUN_1427ed710(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142937670();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1427ed760 FUN_1427ed760 body=267 status=ok
// SIG undefined FUN_1427ed760(void)

void FUN_1427ed760(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = USoundNodeAssetReferencer::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar1 = (longlong *)*param_3;
      iVar3 = (int)param_3[1];
      for (plVar5 = plVar1; plVar5 != plVar1 + iVar3; plVar5 = plVar5 + 1) {
        if ((longlong *)*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) goto LAB_1427ed80e;
          break;
        }
      }
      *(int *)(param_3 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
      }
      *(longlong **)(*param_3 + (longlong)iVar3 * 8) = param_2;
    }
LAB_1427ed80e:
    iVar3 = (**(code **)(*param_2 + 0x2c0))(param_2);
    iVar6 = 0;
    if (0 < (int)param_2[6]) {
      lVar4 = 0;
      do {
        if (iVar3 <= lVar4) {
          return;
        }
        FUN_1427ed760(param_1,*(undefined8 *)(param_2[5] + lVar4 * 8),param_3);
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
      } while (iVar6 < (int)param_2[6]);
    }
  }
  return;
}



// FUNCTION 1427ed870 FUN_1427ed870 body=267 status=ok
// SIG undefined FUN_1427ed870(void)

void FUN_1427ed870(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = USoundNodeQualityLevel::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar1 = (longlong *)*param_3;
      iVar3 = (int)param_3[1];
      for (plVar5 = plVar1; plVar5 != plVar1 + iVar3; plVar5 = plVar5 + 1) {
        if ((longlong *)*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) goto LAB_1427ed91e;
          break;
        }
      }
      *(int *)(param_3 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
      }
      *(longlong **)(*param_3 + (longlong)iVar3 * 8) = param_2;
    }
LAB_1427ed91e:
    iVar3 = (**(code **)(*param_2 + 0x2c0))(param_2);
    iVar6 = 0;
    if (0 < (int)param_2[6]) {
      lVar4 = 0;
      do {
        if (iVar3 <= lVar4) {
          return;
        }
        FUN_1427ed870(param_1,*(undefined8 *)(param_2[5] + lVar4 * 8),param_3);
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
      } while (iVar6 < (int)param_2[6]);
    }
  }
  return;
}



// FUNCTION 1427ed980 FUN_1427ed980 body=163 status=ok
// SIG undefined FUN_1427ed980(void)

undefined8 * FUN_1427ed980(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1427eda30 FUN_1427eda30 body=511 status=ok
// SIG undefined FUN_1427eda30(void)

undefined8 * FUN_1427eda30(undefined8 *param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res8 = DAT_146af2480;
  lVar2 = FName::GetComparisonNameEntry(&local_res8);
  if (lVar2 == 0) {
    local_48 = (undefined2 *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar2,&local_48);
  }
  puVar5 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar5 = local_48;
  }
  FUN_141784790(param_2,puVar5);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar3 = UUGPlayerInputComponent::GetPrivateStaticClass();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res8,uVar3,param_2);
  local_res10 = DAT_146af2490;
  lVar2 = FName::GetComparisonNameEntry(&local_res10);
  if (lVar2 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar2,&local_38);
  }
  puVar5 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar5 = local_38;
  }
  FUN_141784790(param_2,puVar5);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res10,0,param_2);
  FUN_142403670(param_1,param_2);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0x3f;
  uVar4 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1451b8180;
  param_1[0x8b] = &PTR_LAB_145094270;
  pvVar1 = ThreadLocalStoragePointer;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 1;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar4 * 8) + 0x38) < DAT_146b15ff0) {
    _Init_thread_header(&DAT_146b15ff0);
    if (DAT_146b15ff0 == -1) {
      FName::FName(&DAT_146b15fe8,L"Spectator",1);
      _Init_thread_footer(&DAT_146b15ff0);
    }
  }
  (**(code **)(*(longlong *)param_1[0x9a] + 0x640))((longlong *)param_1[0x9a],DAT_146b15fe8);
  return param_1;
}



// FUNCTION 1427edc30 FUN_1427edc30 body=213 status=ok
// SIG undefined FUN_1427edc30(void)

undefined8 * FUN_1427edc30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *param_1 = &PTR_FUN_1451b8fb8;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SplineMeshComponent0",1);
  uVar1 = *puVar2;
  uVar3 = AUGDungeon::GetPrivateStaticClass();
  plVar4 = (longlong *)FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = plVar4;
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_146aefc60);
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 0;
  FUN_1423974f0(param_1[0x8b],0);
  *(uint *)(param_1[0x8b] + 0x814) = *(uint *)(param_1[0x8b] + 0x814) | 1;
  param_1[0x2d] = param_1[0x8b];
  return param_1;
}



// FUNCTION 1427edd10 FUN_1427edd10 body=323 status=ok
// SIG undefined FUN_1427edd10(void)

undefined8 * FUN_1427edd10(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR__purecall_144f95e38;
  param_1[1] = &PTR_FUN_1440780a8;
  FGCObject::FGCObject(param_1 + 2);
  *param_1 = &PTR_GetSupportedPlatforms_1451b2878;
  param_1[1] = &PTR_LAB_1451b2880;
  param_1[2] = &PTR_LAB_1451b2890;
  param_1[4] = &PTR__scalar_deleting_destructor__143f489a8;
  param_1[5] = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  param_1[7] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[8] = *(undefined8 *)(param_2 + 0x20);
  param_1[9] = uVar2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x30);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0x40);
  param_1[0xc] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = *(undefined8 *)(param_2 + 0x48);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x58);
  param_1[0x10] = uVar2;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x6c);
  *(undefined1 *)((longlong)param_1 + 0x8d) = *(undefined1 *)(param_2 + 0x6d);
  *(undefined1 *)((longlong)param_1 + 0x8e) = *(undefined1 *)(param_2 + 0x6e);
  *(undefined1 *)((longlong)param_1 + 0x8f) = *(undefined1 *)(param_2 + 0x6f);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x70);
  lVar1 = *(longlong *)(param_2 + 0x78);
  param_1[0x13] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 0x14) =
       *(byte *)(param_1 + 0x14) ^ (*(byte *)(param_1 + 0x14) ^ *(byte *)(param_2 + 0x80)) & 1;
  *(byte *)(param_1 + 0x14) =
       (*(byte *)(param_2 + 0x80) ^ *(byte *)(param_1 + 0x14)) & 2 ^ *(byte *)(param_1 + 0x14);
  return param_1;
}



// FUNCTION 1427ede60 FUN_1427ede60 body=1820 status=ok
// SIG undefined FUN_1427ede60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1427ede60(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  longlong *local_80;
  longlong *local_70;
  longlong *local_60;
  
  *param_1 = &PTR__purecall_1451b1688;
  FUN_142861640(param_1 + 1);
  puVar11 = (undefined8 *)0x0;
  *param_1 = &PTR_LAB_1451b28a8;
  param_1[1] = &PTR_LAB_1451b28d0;
  param_1[3] = &PTR_LAB_1451b2a70;
  param_1[0x2b] = &PTR_LAB_1451b2ab0;
  param_1[0x2c] = &PTR_GetViewportRenderTargetTexture_1451b2bf0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(uint *)((longlong)param_1 + 0x21c) = *(uint *)((longlong)param_1 + 0x21c) & 0xffffff00;
  *(undefined4 *)(param_1 + 0x43) = 0x20702;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0xffffffffffffffff;
  FGeometry::FGeometry(param_1 + 0x4f);
  param_1[0x56] = 0xffffffffffffffff;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  puVar6 = (undefined8 *)operator_new(0x40);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_1451b2808;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar7 = (undefined8 *)operator_new(0x20);
    if (puVar7 == (undefined8 *)0x0) {
      puVar6[5] = 0;
      puVar6[6] = 0;
      *(undefined4 *)(puVar6 + 7) = 0xffffffff;
    }
    else {
      puVar7[1] = 0;
      *puVar7 = &PTR__scalar_deleting_destructor__1451b2818;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar6[5] = puVar7;
      puVar6[6] = 0;
      *(undefined4 *)(puVar6 + 7) = 0xffffffff;
    }
  }
  param_1[0x59] = puVar6;
  puVar8 = (undefined8 *)operator_new(0x18);
  puVar7 = puVar11;
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    puVar8[2] = puVar6;
    puVar7 = puVar8;
  }
  param_1[0x5a] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x59,puVar6,puVar6);
  param_1[0x5b] = *param_3;
  lVar4 = param_3[1];
  param_1[0x5c] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x2fa) = 0;
  if (*param_3 == 0) {
    bVar12 = true;
  }
  else {
    bVar12 = *(char *)(*param_3 + 0x358) == '\0';
  }
  *(bool *)((longlong)param_1 + 0x2fb) = bVar12;
  *(undefined2 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2fe) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 1;
  param_1[0x6e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = _DAT_1468b5ca0;
  param_1[0x73] = 0xffffffffffffffff;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x10;
  *(undefined1 *)(param_1 + 0x74) = 0;
  puVar6 = (undefined8 *)operator_new(0x48);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 3) = 4;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined1 *)(puVar6 + 7) = 0;
    *puVar6 = &PTR_FUN_145001480;
    puVar6[2] = &PTR_LAB_1450014a0;
    local_res8 = 0;
    puVar6[8] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    puVar11 = puVar6;
  }
  param_1[0x6c] = puVar11;
  if (param_2 != (longlong *)0x0) {
    uVar5 = (**(code **)(*param_2 + 0x180))(param_2);
    *(undefined1 *)((longlong)param_1 + 0x2f9) = uVar5;
  }
  if (DAT_1469f4590 != 0) {
    lVar4 = *(longlong *)(DAT_1469f4590 + 0x18);
    local_a0 = FSceneViewport::OnWindowBackBufferResourceDestroyed;
    uStack_98 = 0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_90 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_GetPoolName_143fc2050;
      plVar9[1] = (longlong)param_1;
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_94;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_143fc2098;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x30,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_res10);
      iVar3 = *(int *)(lVar4 + 0x38);
      *(int *)(lVar4 + 0x38) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x3c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x30,iVar3);
      }
      puVar11 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x30));
      *puVar11 = plVar9;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
    uStack_98 = 0;
    local_a0 = (code *)&LAB_142806390;
    lVar4 = *(longlong *)(DAT_1469f4590 + 0x18);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_80 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_GetPoolName_143fc2050;
      plVar9[1] = (longlong)param_1;
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_94;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_143fc2098;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x48,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_res18);
      iVar3 = *(int *)(lVar4 + 0x50);
      *(int *)(lVar4 + 0x50) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x54) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x48,iVar3);
      }
      puVar11 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x48));
      *puVar11 = plVar9;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
    uStack_98 = 0;
    local_a0 = FUN_1428061c0;
    lVar4 = *(longlong *)(DAT_1469f4590 + 0x18);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_70 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_GetPoolName_143fc2050;
      plVar9[1] = (longlong)param_1;
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_94;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_143fc2098;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x60,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_res20);
      iVar3 = *(int *)(lVar4 + 0x68);
      *(int *)(lVar4 + 0x68) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x6c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x60,iVar3);
      }
      puVar11 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x60));
      *puVar11 = plVar9;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
    uStack_98 = 0;
    local_a0 = FUN_142807600;
    lVar4 = *(longlong *)(DAT_1469f4590 + 0x18);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_60 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = (longlong)param_1;
      *plVar9 = (longlong)&PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_94;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_143f77b10;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x78,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_a8);
      iVar3 = *(int *)(lVar4 + 0x80);
      *(int *)(lVar4 + 0x80) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x84) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x78,iVar3);
      }
      puVar11 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x78));
      *puVar11 = plVar9;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
  }
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 1427ee580 FUN_1427ee580 body=519 status=ok
// SIG undefined FUN_1427ee580(void)

undefined8 * FUN_1427ee580(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  FUN_1427cef60();
  uVar8 = 0;
  plVar1 = param_1 + 0x1c;
  *param_1 = &PTR_FUN_1451b2290;
  *plVar1 = 0;
  param_1[0x1d] = 0;
  uVar4 = uVar8;
  if (0 < *(int *)(param_3 + 8)) {
    do {
      iVar6 = *(int *)(param_1 + 0x1d);
      *(int *)(param_1 + 0x1d) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0xec) < iVar6 + 1) {
        FUN_14280eac0(plVar1,iVar6);
      }
      plVar3 = (longlong *)((longlong)iVar6 * 0x7a8 + *plVar1);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = param_3;
        *(int *)(plVar3 + 1) = (int)uVar4;
        plVar7 = plVar3 + 0xee;
        *(undefined4 *)(plVar3 + 3) = param_4;
        plVar3[4] = 0;
        plVar3[5] = 0;
        *(undefined1 *)(plVar3 + 7) = 0;
        plVar3[0x68] = 0;
        *(undefined1 *)(plVar3 + 0x69) = 1;
        *(undefined1 *)((longlong)plVar3 + 0x34a) = 0;
        plVar3[0xca] = 0;
        plVar3[0xcb] = 0;
        plVar3[0xcc] = 0;
        plVar3[2] = (longlong)&PTR_FUN_144165fb0;
        plVar3[0xcd] = 0;
        plVar3[0xce] = 0;
        plVar3[0xcf] = 0;
        plVar3[0xd0] = 0;
        plVar3[0xd1] = 0;
        plVar3[0xd2] = 0;
        plVar3[0xdb] = 0;
        plVar3[0xdc] = 0;
        plVar3[0xdd] = 0;
        plVar3[0xe2] = 0;
        plVar3[0xe3] = 0;
        plVar3[0xe4] = 0;
        plVar3[0xe5] = 0;
        plVar3[0xe6] = 0;
        plVar3[0xe7] = 0;
        plVar3[0xe8] = 0;
        plVar3[0xe9] = 0;
        plVar3[0xea] = -1;
        *(undefined2 *)(plVar3 + 0xeb) = 0;
        lVar2 = 2;
        plVar3[0xed] = 0;
        plVar3[0xec] = (longlong)(plVar3 + 0xcd);
        *(undefined1 *)((longlong)plVar3 + 0x349) = 1;
        if (plVar7 <= plVar3 + 0xef) {
          for (; lVar2 != 0; lVar2 = lVar2 + -1) {
            *(undefined4 *)plVar7 = 0xffffffff;
            plVar7 = (longlong *)((longlong)plVar7 + 4);
          }
        }
        plVar3[0xf2] = 0;
        plVar3[0xf3] = 0;
        *(undefined1 *)(plVar3 + 0xf4) = 0;
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_3 + 8));
  }
  uVar4 = uVar8;
  if (0 < *(int *)(param_1 + 0x1d)) {
    do {
      iVar6 = (int)uVar4;
      uVar4 = uVar8;
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_2 + 0x860))) {
        uVar4 = (longlong)iVar6 * 0x38 + *(longlong *)(param_2 + 0x858);
      }
      FUN_142800d30((longlong)iVar6 * 0x7a8 + *plVar1,uVar4);
      uVar4 = (ulonglong)(iVar6 + 1U);
    } while ((int)(iVar6 + 1U) < *(int *)(param_1 + 0x1d));
  }
  return param_1;
}



// FUNCTION 1427ee790 FUN_1427ee790 body=228 status=ok
// SIG undefined FUN_1427ee790(void)

undefined8 *
FUN_1427ee790(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined4 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_1451b2c68;
  param_1[2] = &PTR_LAB_1451b2c88;
  param_1[3] = &PTR_LAB_1451b2cd0;
  param_1[4] = &PTR_LAB_1451b2ce0;
  *(undefined4 *)(param_1 + 0xb) = param_6;
  *(undefined4 *)(param_1 + 10) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_3;
  param_1[0xc] = *param_5;
  lVar4 = param_5[1];
  param_1[0xd] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0x74) = param_7;
  *(undefined4 *)(param_1 + 0xe) = param_4;
  plVar5 = (longlong *)param_5[1];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1427ee880 FUN_1427ee880 body=137 status=ok
// SIG undefined FUN_1427ee880(void)

undefined8 *
FUN_1427ee880(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  *param_1 = &PTR__purecall_144f96210;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_1451b2c68;
  param_1[2] = &PTR_LAB_1451b2c88;
  param_1[3] = &PTR_LAB_1451b2cd0;
  param_1[4] = &PTR_LAB_1451b2ce0;
  *(undefined4 *)(param_1 + 10) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return param_1;
}



// FUNCTION 1427ee910 FSoundConcurrencyManager body=261 status=ok
// SIG undefined FSoundConcurrencyManager(void)

undefined8 *
FSoundConcurrencyManager::FSoundConcurrencyManager(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 1427eea20 FSoundEffectBase body=136 status=ok
// SIG undefined FSoundEffectBase(void)

undefined8 * FSoundEffectBase::FSoundEffectBase(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451b1d90;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  puVar2 = (undefined8 *)0x0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[2] = AK::MemoryMgr::StartProfileThreadUsage;
    puVar2 = puVar1;
  }
  param_1[0xf] = puVar2;
  param_1[0xe] = puVar2;
  return param_1;
}



// FUNCTION 1427eeab0 FSoundParseParameters body=882 status=ok
// SIG undefined FSoundParseParameters(void)

undefined8 * FSoundParseParameters::FSoundParseParameters(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 << 4);
  }
  param_1[2] = param_2[2];
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0x15);
  pvVar2 = (void *)param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x14,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x14],pvVar2,(longlong)iVar1 << 4);
  }
  puVar9 = param_1 + 0x16;
  puVar8 = param_2 + 0x16;
  lVar10 = 2;
  do {
    *puVar9 = 0;
    lVar10 = lVar10 + -1;
    iVar1 = *(int *)(puVar8 + 1);
    pvVar2 = (void *)*puVar8;
    *(int *)((longlong)param_1 + (8 - (longlong)param_2) + (longlong)puVar8) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + (0xc - (longlong)param_2) + (longlong)puVar8) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar9,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar2,(longlong)iVar1 << 4);
    }
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (lVar10 != 0);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined8 *)((longlong)param_1 + 0xd4) = *(undefined8 *)((longlong)param_2 + 0xd4);
  *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1d,param_2 + 0x1d);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  *(uint *)((longlong)param_1 + 0x19c) =
       *(uint *)((longlong)param_1 + 0x19c) ^
       (*(uint *)((longlong)param_1 + 0x19c) ^ *(uint *)((longlong)param_2 + 0x19c)) & 1;
  uVar7 = (*(uint *)((longlong)param_2 + 0x19c) ^ *(uint *)((longlong)param_1 + 0x19c)) & 2 ^
          *(uint *)((longlong)param_1 + 0x19c);
  *(uint *)((longlong)param_1 + 0x19c) = uVar7;
  uVar7 = (uVar7 ^ *(uint *)((longlong)param_2 + 0x19c)) & 4 ^ uVar7;
  *(uint *)((longlong)param_1 + 0x19c) = uVar7;
  uVar7 = (uVar7 ^ *(uint *)((longlong)param_2 + 0x19c)) & 8 ^ uVar7;
  *(uint *)((longlong)param_1 + 0x19c) = uVar7;
  uVar7 = (*(uint *)((longlong)param_2 + 0x19c) ^ uVar7) & 0x10 ^ uVar7;
  *(uint *)((longlong)param_1 + 0x19c) = uVar7;
  uVar7 = (*(uint *)((longlong)param_2 + 0x19c) ^ uVar7) & 0x20 ^ uVar7;
  *(uint *)((longlong)param_1 + 0x19c) = uVar7;
  *(uint *)((longlong)param_1 + 0x19c) =
       (*(uint *)((longlong)param_2 + 0x19c) ^ uVar7) & 0x40 ^ uVar7;
  return param_1;
}



// FUNCTION 1427eee30 FSpeedTreeWind body=318 status=ok
// SIG undefined FSpeedTreeWind(void)

longlong FSpeedTreeWind::FSpeedTreeWind(longlong param_1)

{
  SParams::SParams();
  *(undefined1 *)(param_1 + 0x558) = 1;
  *(undefined4 *)(param_1 + 0x534) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 0x580) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined8 *)(param_1 + 0x5ec) = 0;
  *(undefined8 *)(param_1 + 0x63c) = 0;
  *(undefined1 *)(param_1 + 0x644) = 0;
  *(undefined8 *)(param_1 + 0x5f4) = 0;
  *(undefined8 *)(param_1 + 0x5fc) = 0;
  *(undefined8 *)(param_1 + 0x604) = 0;
  *(undefined8 *)(param_1 + 0x60c) = 0;
  *(undefined8 *)(param_1 + 0x614) = 0;
  *(undefined8 *)(param_1 + 0x61c) = 0;
  *(undefined8 *)(param_1 + 0x624) = 0;
  *(undefined8 *)(param_1 + 0x62c) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5b8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5d8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined4 *)(param_1 + 0x5b4) = 0;
  *(undefined8 *)(param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0x5e8) = 0;
  return param_1;
}



// FUNCTION 1427eef70 FUN_1427eef70 body=619 status=ok
// SIG undefined FUN_1427eef70(void)

undefined8 * FUN_1427eef70(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_142817110(param_1,param_2,0);
  iVar5 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451b96a0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x8b] = 0;
  param_1[0x86] = 0;
  param_1[0x8c] = 0;
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xffdfffff;
  plVar4 = (longlong *)param_1[0x76];
  plVar1 = plVar4 + *(int *)(param_1 + 0x77);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    puVar6 = *(undefined8 **)(*plVar4 + 0x28);
    puVar7 = puVar6 + (longlong)*(int *)(*plVar4 + 0x30) * 2;
    for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
      cVar2 = (**(code **)(*(longlong *)*puVar6 + 0x2f0))((longlong *)*puVar6,6);
      if (cVar2 == '\0') {
        uVar3 = UMaterial::GetDefaultMaterial(0);
        *puVar6 = uVar3;
      }
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x7b8);
  param_1[0x7c] = *(undefined8 *)(param_2 + 0x7b0);
  param_1[0x7d] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x7c8);
  param_1[0x7e] = *(undefined8 *)(param_2 + 0x7c0);
  param_1[0x7f] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x7d8);
  param_1[0x80] = *(undefined8 *)(param_2 + 2000);
  param_1[0x81] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x7e8);
  param_1[0x82] = *(undefined8 *)(param_2 + 0x7e0);
  param_1[0x83] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x7f8);
  param_1[0x84] = *(undefined8 *)(param_2 + 0x7f0);
  param_1[0x85] = uVar3;
  param_1[0x86] = *(undefined8 *)(param_2 + 0x800);
  param_1[0x87] = *(undefined8 *)(param_2 + 0x808);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x810);
  *(byte *)((longlong)param_1 + 0x444) = (byte)(*(uint *)(param_2 + 0x814) >> 1) & 1;
  *(uint *)(param_1 + 0x89) = (uint)*(byte *)(param_2 + 0x818);
  FUN_1423cc3a0(param_2,param_1 + 0x8a,(longlong)param_1 + 0x44c);
  if (0 < *(int *)(param_1 + 0x77)) {
    do {
      local_28 = 0;
      uStack_20 = 0;
      FUN_1423d8b10(param_1,param_2,iVar5,&local_28);
      if ((-1 < iVar5) && (iVar5 < *(int *)(param_2 + 0x760))) {
        local_38 = *(longlong *)(param_2 + 0x758) + 0x30 + (longlong)iVar5 * 0xc0;
        local_30 = local_38 + 0x10;
        FUN_1423d8b10(param_1,param_2,iVar5,&local_38);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x77));
  }
  return param_1;
}



// FUNCTION 1427ef1e0 FUN_1427ef1e0 body=292 status=ok
// SIG undefined FUN_1427ef1e0(void)

undefined8 * FUN_1427ef1e0(undefined8 *param_1)

{
  FUN_1417f4470();
  *param_1 = &PTR_FUN_1451b2d40;
  param_1[0x5e] = &PTR_LAB_1451b2f48;
  FGeometry::FGeometry(param_1 + 0x5f);
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined1 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x87) = 0x42800000;
  return param_1;
}



// FUNCTION 1427ef310 SParams body=715 status=ok
// SIG undefined SParams(void)

undefined4 * FSpeedTreeWind::SParams::SParams(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 2;
  *param_1 = 0x40a00000;
  lVar3 = 2;
  *(undefined8 *)(param_1 + 1) = 0x40200000;
  param_1[3] = 0x3f800000;
  param_1[0x68] = 0x42480000;
  puVar1 = (undefined8 *)(param_1 + 0x7e);
  param_1[0x69] = 0x40000000;
  do {
    *(undefined4 *)(puVar1 + 0xf) = 0x3e99999a;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f400000;
    *(undefined4 *)(puVar1 + 0x10) = 0x3e99999a;
    *puVar1 = 0;
    puVar1[5] = 0;
    puVar1[10] = 0;
    puVar1[1] = 0;
    puVar1[6] = 0;
    puVar1[0xb] = 0;
    puVar1[2] = 0;
    puVar1[7] = 0;
    puVar1[0xc] = 0;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[0xd] = 0;
    puVar1[4] = 0;
    puVar1[9] = 0;
    puVar1[0xe] = 0;
    puVar1 = (undefined8 *)((longlong)puVar1 + 0x84);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = (undefined8 *)(param_1 + 0xc0);
  do {
    *(undefined4 *)(puVar1 + 0x19) = 0x41a00000;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x1a) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0x3e99999a;
    *(undefined4 *)(puVar1 + 0x1b) = 0x3ba3d70a;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0x3f800000;
    *puVar1 = 0;
    puVar1[5] = 0;
    puVar1[10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x14] = 0;
    puVar1[1] = 0;
    puVar1[6] = 0;
    puVar1[0xb] = 0;
    puVar1[0x10] = 0;
    puVar1[0x15] = 0;
    puVar1[2] = 0;
    puVar1[7] = 0;
    puVar1[0xc] = 0;
    puVar1[0x11] = 0;
    puVar1[0x16] = 0;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[0xd] = 0;
    puVar1[0x12] = 0;
    puVar1[0x17] = 0;
    puVar1[4] = 0;
    puVar1[9] = 0;
    puVar1[0xe] = 0;
    puVar1[0x13] = 0;
    puVar1[0x18] = 0;
    puVar1 = puVar1 + 0x1c;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[0x13a] = 0x41200000;
  puVar2 = param_1 + 5;
  param_1[0x13b] = 0x3f800000;
  lVar3 = 10;
  param_1[0x13c] = 0x3ba3d70a;
  param_1[0x13d] = 0x41100000;
  param_1[0x13e] = 0x42000000;
  param_1[0x13f] = 0x3ecccccd;
  param_1[0x140] = 0x3d4ccccd;
  param_1[0x141] = 0x3f000000;
  param_1[0x142] = 0x3f000000;
  param_1[0x143] = 0xbf000000;
  param_1[0x144] = 0x3f000000;
  *(undefined8 *)(param_1 + 0x145) = 0x3f000000;
  param_1[0x147] = 0x3f000000;
  param_1[0x148] = 0x3f800000;
  param_1[0x149] = 0x3f800000;
  param_1[0x14a] = 0x40800000;
  param_1[0x14b] = 0x3f800000;
  param_1[0x14c] = 0x3f800000;
  do {
    *(undefined8 *)(puVar2 + -1) = 0;
    *(undefined8 *)(puVar2 + 1) = 0;
    *(undefined8 *)(puVar2 + 3) = 0;
    *(undefined8 *)(puVar2 + 5) = 0;
    *(undefined8 *)(puVar2 + 7) = 0;
    puVar2 = puVar2 + 10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x132) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x136) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 1427ef5e0 FUN_1427ef5e0 body=42 status=ok
// SIG undefined FUN_1427ef5e0(void)

undefined8 * FUN_1427ef5e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451b2318;
  FUN_1417e8800(param_1 + 5);
  return param_1;
}



// FUNCTION 1427ef610 UCheckBoxStyleAsset body=42 status=ok
// SIG undefined UCheckBoxStyleAsset(void)

undefined8 * UCheckBoxStyleAsset::UCheckBoxStyleAsset(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451b2590;
  FCheckBoxStyle::FCheckBoxStyle(param_1 + 5);
  return param_1;
}



// FUNCTION 1427ef640 USlateBrushAsset body=187 status=ok
// SIG undefined USlateBrushAsset(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * USlateBrushAsset::USlateBrushAsset(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451b2fb8;
  param_1[5] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 6) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[9] = _DAT_1464aa6c0;
  param_1[10] = uVar1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = DAT_1468b5d88;
  *(undefined1 *)(param_1 + 0x12) = 0;
  uVar2 = (undefined4)uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x94) = 3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfc;
  return param_1;
}



// FUNCTION 1427ef700 USoundAttenuation body=42 status=ok
// SIG undefined USoundAttenuation(void)

undefined8 * USoundAttenuation::USoundAttenuation(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451b2018;
  FSoundAttenuationSettings::FSoundAttenuationSettings(param_1 + 5);
  return param_1;
}



// FUNCTION 1427ef730 USoundBase body=104 status=ok
// SIG undefined USoundBase(void)

undefined8 * USoundBase::USoundBase(undefined8 *param_1)

{
  FUN_141781840();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf7;
  *param_1 = &PTR__scalar_deleting_destructor__1451b3230;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xfffffffe;
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined1 *)(param_1 + 9) = 3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 1427ef7a0 USoundClass body=106 status=ok
// SIG undefined USoundClass(void)

undefined8 * USoundClass::USoundClass(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451b16a0;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xfffffff0;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 0x10;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffffc;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3e800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_1 + 9) = 0x3f000000;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1427ef810 USoundConcurrency body=55 status=ok
// SIG undefined USoundConcurrency(void)

undefined8 * USoundConcurrency::USoundConcurrency(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fcf3b0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 5) = 0x10;
  *(undefined1 *)(param_1 + 6) = 3;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  return param_1;
}



// FUNCTION 1427ef850 FUN_1427ef850 body=86 status=ok
// SIG undefined FUN_1427ef850(void)

undefined8 * FUN_1427ef850(undefined8 *param_1)

{
  USoundBase::USoundBase();
  *param_1 = &PTR__scalar_deleting_destructor__1451b43b0;
  FSoundAttenuationSettings::FSoundAttenuationSettings(param_1 + 0x18);
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6d) = 0x461c4000;
  return param_1;
}



// FUNCTION 1427ef8b0 USoundEffectPreset body=46 status=ok
// SIG undefined USoundEffectPreset(void)

undefined8 * USoundEffectPreset::USoundEffectPreset(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1451b1918;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 1427ef8e0 USoundEffectSubmixPreset body=46 status=ok
// SIG undefined USoundEffectSubmixPreset(void)

undefined8 * USoundEffectSubmixPreset::USoundEffectSubmixPreset(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_1451b1918;
  return param_1;
}



// FUNCTION 1427ef910 FUN_1427ef910 body=79 status=ok
// SIG undefined FUN_1427ef910(void)

undefined8 * FUN_1427ef910(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451b3518;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1427ef960 USoundMix body=165 status=ok
// SIG undefined USoundMix(void)

undefined8 * USoundMix::USoundMix(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451b3e08;
  param_1[6] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 7) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x447a0000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x461c4000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3e4ccccd;
  return param_1;
}



// FUNCTION 1427efa10 USoundNode body=43 status=ok
// SIG undefined USoundNode(void)

undefined8 * USoundNode::USoundNode(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1451b40c0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1427efa40 USoundNodeAttenuation body=52 status=ok
// SIG undefined USoundNodeAttenuation(void)

undefined8 * USoundNodeAttenuation::USoundNodeAttenuation(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451b4990;
  FSoundAttenuationSettings::FSoundAttenuationSettings(param_1 + 8);
  return param_1;
}



// FUNCTION 1427efa80 FUN_1427efa80 body=47 status=ok
// SIG undefined FUN_1427efa80(void)

undefined8 * FUN_1427efa80(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b5260;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1427efab0 FUN_1427efab0 body=51 status=ok
// SIG undefined FUN_1427efab0(void)

undefined8 * FUN_1427efab0(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b5550;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1427efaf0 FUN_1427efaf0 body=47 status=ok
// SIG undefined FUN_1427efaf0(void)

undefined8 * FUN_1427efaf0(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b5840;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1427efb20 USoundNodeDialoguePlayer body=52 status=ok
// SIG undefined USoundNodeDialoguePlayer(void)

undefined8 * USoundNodeDialoguePlayer::USoundNodeDialoguePlayer(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451b5b30;
  FDialogueWaveParameter::FDialogueWaveParameter(param_1 + 7);
  return param_1;
}



// FUNCTION 1427efb60 FUN_1427efb60 body=51 status=ok
// SIG undefined FUN_1427efb60(void)

undefined8 * FUN_1427efb60(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b5e20;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1427efba0 USoundNodeDoppler body=50 status=ok
// SIG undefined USoundNodeDoppler(void)

undefined8 * USoundNodeDoppler::USoundNodeDoppler(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b6120;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  return param_1;
}



// FUNCTION 1427efbe0 USoundNodeEnveloper body=104 status=ok
// SIG undefined USoundNodeEnveloper(void)

undefined8 * USoundNodeEnveloper::USoundNodeEnveloper(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b6410;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xc);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  return param_1;
}



// FUNCTION 1427efc50 FUN_1427efc50 body=51 status=ok
// SIG undefined FUN_1427efc50(void)

undefined8 * FUN_1427efc50(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b6700;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1427efc90 USoundNodeLooping body=54 status=ok
// SIG undefined USoundNodeLooping(void)

undefined8 * USoundNodeLooping::USoundNodeLooping(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 1;
  *param_1 = &PTR_FUN_1451b69f0;
  *(undefined4 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 1427efcd0 UInputVectorAxisDelegateBinding body=43 status=ok
// SIG undefined UInputVectorAxisDelegateBinding(void)

undefined8 * UInputVectorAxisDelegateBinding::UInputVectorAxisDelegateBinding(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b6ce0;
  return param_1;
}



// FUNCTION 1427efd00 FUN_1427efd00 body=51 status=ok
// SIG undefined FUN_1427efd00(void)

undefined8 * FUN_1427efd00(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b46a0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1427efd40 USoundNodeModulator body=71 status=ok
// SIG undefined USoundNodeModulator(void)

undefined8 * USoundNodeModulator::USoundNodeModulator(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b6fd0;
  *(undefined4 *)(param_1 + 7) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f866666;
  *(undefined4 *)(param_1 + 8) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f866666;
  return param_1;
}



// FUNCTION 1427efd90 USoundNodeModulatorContinuous body=103 status=ok
// SIG undefined USoundNodeModulatorContinuous(void)

undefined8 * USoundNodeModulatorContinuous::USoundNodeModulatorContinuous(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451b72c0;
  param_1[7] = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  return param_1;
}



// FUNCTION 1427efe00 USoundNodeOscillator body=63 status=ok
// SIG undefined USoundNodeOscillator(void)

undefined8 * USoundNodeOscillator::USoundNodeOscillator(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffc;
  *param_1 = &PTR__scalar_deleting_destructor__1451b75b0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 1427efe40 USoundNodeParamCrossFade body=55 status=ok
// SIG undefined USoundNodeParamCrossFade(void)

undefined8 * USoundNodeParamCrossFade::USoundNodeParamCrossFade(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_1451b78a0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1427efe80 USoundNodeRandom body=66 status=ok
// SIG undefined USoundNodeRandom(void)

undefined8 * USoundNodeRandom::USoundNodeRandom(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451b4f70;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 1427efed0 UInputVectorAxisDelegateBinding body=43 status=ok
// SIG undefined UInputVectorAxisDelegateBinding(void)

undefined8 * UInputVectorAxisDelegateBinding::UInputVectorAxisDelegateBinding(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b4c80;
  return param_1;
}



// FUNCTION 1427eff00 FUN_1427eff00 body=47 status=ok
// SIG undefined FUN_1427eff00(void)

undefined8 * FUN_1427eff00(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b7ba0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1427eff30 FUN_1427eff30 body=47 status=ok
// SIG undefined FUN_1427eff30(void)

undefined8 * FUN_1427eff30(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1451b7e90;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1427eff60 USoundSubmix body=63 status=ok
// SIG undefined USoundSubmix(void)

undefined8 * USoundSubmix::USoundSubmix(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451b1da0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1427effa0 USoundWave body=244 status=ok
// SIG undefined USoundWave(void)

undefined8 * USoundWave::USoundWave(undefined8 *param_1)

{
  USoundBase::USoundBase();
  *param_1 = &PTR__scalar_deleting_destructor__1451b3790;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUntypedBulkData::FUntypedBulkData(param_1 + 0x28);
  param_1[0x28] = &PTR__scalar_deleting_destructor__143f48b90;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0x28;
  *(undefined4 *)(param_1 + 0x1b) = 0x461c4000;
  LOCK();
  *(undefined4 *)(param_1 + 0x17) = 0;
  UNLOCK();
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0x9f;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 1427f00a0 FUN_1427f00a0 body=217 status=ok
// SIG undefined FUN_1427f00a0(void)

undefined8 * FUN_1427f00a0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  USoundWave::USoundWave();
  *param_1 = &PTR_FUN_1451b3ac8;
  puVar2 = (undefined8 *)operator_new();
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar3 = puVar2;
  }
  param_1[0x41] = puVar3;
  param_1[0x40] = puVar3;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(byte *)((longlong)param_1 + 0xb3) = *(byte *)((longlong)param_1 + 0xb3) | 4;
  LOCK();
  *(undefined4 *)(param_1 + 0x45) = 0;
  UNLOCK();
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x200;
  *(undefined4 *)(param_1 + 0x46) = 0x400;
  if (((DAT_146b17150 != 0) && (lVar4 = FUN_142875430(), lVar4 != 0)) &&
     ((*(byte *)(lVar4 + 0x358) & 0x20) == 0)) {
    iVar1 = *(int *)(lVar4 + 0x1c);
    *(int *)(param_1 + 0x46) = iVar1;
    *(int *)((longlong)param_1 + 0x22c) = iVar1 / 2;
  }
  *(undefined4 *)(param_1 + 0x49) = 2;
  return param_1;
}



// FUNCTION 1427f0180 FUN_1427f0180 body=103 status=ok
// SIG undefined FUN_1427f0180(void)

undefined8 * FUN_1427f0180(undefined8 *param_1)

{
  FUN_14243e810();
  *param_1 = &PTR_FUN_1451b89e0;
  param_1[5] = &PTR_LAB_1451b8f88;
  FUN_14246fd50(param_1 + 0x42,0x44960000);
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x457a0000;
  *(undefined4 *)(param_1 + 0x44) = 0x463b8000;
  return param_1;
}



// FUNCTION 1427f01f0 ~TArray<FLocalizedSubtitle,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FLocalizedSubtitle,FDefaultAllocator>(void)

void TArray<FLocalizedSubtitle,FDefaultAllocator>::~TArray<FLocalizedSubtitle,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
      ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1427f0250 FUN_1427f0250 body=172 status=ok
// SIG undefined FUN_1427f0250(void)

void FUN_1427f0250(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x710);
    do {
      if (plVar2[0x10] != 0) {
        FMemory::Free();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2 + 0xb);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2 + -0x16);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2 + -0x17);
      FUN_141edd2d0(plVar2 + -0xe0);
      plVar2 = plVar2 + 0xf5;
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



// FUNCTION 1427f0300 ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator> body=112 status=ok
// SIG undefined ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>(void)

void TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>::
     ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    do {
      *(undefined4 *)(lVar1 + 0x48) = 0;
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar1);
      lVar1 = lVar1 + 0x50;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free(lVar1);
  return;
}



// FUNCTION 1427f0370 ~TSparseArray<TSetElement<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1427f0431;
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
LAB_1427f0431:
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
      TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>::
      ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>
                ((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1427f0500 FUN_1427f0500 body=123 status=ok
// SIG undefined FUN_1427f0500(void)

void FUN_1427f0500(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1427f0580 FUN_1427f0580 body=862 status=ok
// SIG undefined FUN_1427f0580(void)

void FUN_1427f0580(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [32];
  
  *param_1 = &PTR_FUN_1451b2808;
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[5])();
  }
  if (((param_1[1] != 0) && (param_1[3] != param_1[1])) &&
     (local_70 = (longlong *)0x0, param_1 + 1 != &local_78)) {
    param_1[1] = 0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,&local_70);
    plVar11 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_70)();
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  lVar6 = param_1[3];
  if (lVar6 != 0) {
    plVar11 = (longlong *)param_1[4];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
    }
    if (((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) &&
       ((DAT_146ac3ac5 != '\0' ||
        (((cVar8 = FUN_1415ad720(), cVar8 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))))) {
      plVar10 = (longlong *)FUN_1427f9020(local_58,0,0xff);
      lVar4 = *plVar10;
      *(longlong *)(lVar4 + 0x10) = lVar6;
      *(longlong **)(lVar4 + 0x18) = plVar11;
      lVar6 = *plVar10;
      lVar7 = plVar10[2];
      lVar4 = plVar10[1];
      lVar5 = *(longlong *)(lVar6 + 0x28);
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(lVar6,lVar4,(int)lVar7,1);
      if (lVar5 != 0) {
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar11)();
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
    }
    local_60 = (longlong *)0x0;
    if (param_1 + 3 != &local_68) {
      param_1[3] = 0;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_60);
      plVar10 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  if (*(int *)(param_1 + 7) != -1) {
    plVar11 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))();
    (**(code **)(*plVar11 + 0x10))(plVar11,*(undefined4 *)(param_1 + 7));
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x30))();
  }
  plVar11 = (longlong *)param_1[4];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar11 = (longlong *)param_1[2];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1427f08e0 FUN_1427f08e0 body=542 status=ok
// SIG undefined FUN_1427f08e0(void)

void FUN_1427f08e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_1451b28a8;
  param_1[1] = &PTR_LAB_1451b28d0;
  param_1[3] = &PTR_LAB_1451b2a70;
  param_1[0x2b] = &PTR_LAB_1451b2ab0;
  param_1[0x2c] = &PTR_GetViewportRenderTargetTexture_1451b2bf0;
  param_1[0xb] = 0;
  (**(code **)(param_1[1] + 0x198))(param_1 + 1,1,0,0,2,0);
  FUN_141ee24f0(0);
  if (DAT_1469f4590 != 0) {
    FUN_140483870(*(longlong *)(DAT_1469f4590 + 0x18) + 0x30,param_1);
    FUN_140483870(*(longlong *)(DAT_1469f4590 + 0x18) + 0x48,param_1);
    FUN_140483870(*(longlong *)(DAT_1469f4590 + 0x18) + 0x60,param_1);
    FUN_140483870(*(longlong *)(DAT_1469f4590 + 0x18) + 0x78,param_1);
  }
  if (*(char *)((longlong)param_1 + 0x37c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x6b);
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 0x69);
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 0x67);
  if (param_1[0x65] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  plVar4 = (longlong *)param_1[0x5c];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = (longlong *)param_1[0x5a];
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
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x44,0);
  if (param_1[0x48] != 0) {
    FMemory::Free();
  }
  if (param_1[0x44] != 0) {
    FMemory::Free();
  }
  FUN_140438c20(param_1 + 0x2d);
  param_1[0x2b] = &PTR_FUN_144175158;
  FUN_142862840(param_1 + 1);
  return;
}



// FUNCTION 1427f0b00 ~FSoundConcurrencyManager body=264 status=ok
// SIG undefined ~FSoundConcurrencyManager(void)

void FSoundConcurrencyManager::~FSoundConcurrencyManager(longlong param_1)

{
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FFoliageOcclusionResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,FFoliageOcclusionResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xa8,0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x58,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  return;
}



// FUNCTION 1427f0c10 ~FSoundEffectBase body=58 status=ok
// SIG undefined ~FSoundEffectBase(void)

void FSoundEffectBase::~FSoundEffectBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451b1d90;
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>(param_1 + 0xe);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427f0c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1427f0c50 FUN_1427f0c50 body=120 status=ok
// SIG undefined FUN_1427f0c50(void)

void FUN_1427f0c50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FRichCurve::~FRichCurve(param_1 + 0x1d);
  lVar2 = 2;
  plVar3 = param_1 + 0x1a;
  do {
    plVar1 = plVar3 + -2;
    plVar3 = plVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1427f0cd0 ~USoundWave body=230 status=ok
// SIG undefined ~USoundWave(void)

void USoundWave::~USoundWave(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1f8);
  plVar1 = *(longlong **)(param_1 + 0x1f0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x1f0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FFormatContainer::FlushData(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x140);
  TArray<FLocalizedSubtitle,FDefaultAllocator>::~TArray<FLocalizedSubtitle,FDefaultAllocator>
            (param_1 + 0x100);
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1427f0dc0 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1427f0e90();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1427f0e90 FUN_1427f0e90 body=744 status=ok
// SIG undefined FUN_1427f0e90(void)

longlong * FUN_1427f0e90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  plVar1 = param_2 + 2;
  iVar4 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar5 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar9 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar3 = *local_48 + (longlong)local_2c * 0x18;
        (**(code **)(*param_1 + 0x30))(param_1,lVar3);
        FUN_140d66f10(param_1,lVar3 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar4 = 0;
  local_res8[0] = 0;
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  iVar5 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar6 = iVar5 + 0x1f + (iVar5 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar5 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar5);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar5 = (int)param_2[6];
        iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar8 = *(int *)(*param_2 + 4 + (longlong)iVar5 * 0x18);
        *(int *)(param_2 + 6) = iVar8;
        *(int *)((longlong)param_2 + 0x34) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar8 * 0x18) = 0xffffffff;
        }
      }
      plVar9 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = iVar5 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar8 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar5 * 0x18) = 0;
      lVar3 = lVar3 + (longlong)iVar5 * 0x18;
      *(undefined8 *)(lVar3 + 8) = 0;
      *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
      (**(code **)(*param_1 + 0x30))(param_1);
      FUN_140d66f10(param_1,lVar3 + 8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1427f1180 FUN_1427f1180 body=6083 status=ok
// SIG undefined FUN_1427f1180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1427f1180(longlong *param_1,void *param_2)

{
  longlong *plVar1;
  void *_Dst;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_5f8 [32];
  undefined1 local_5d8 [4];
  undefined4 local_5d4;
  undefined4 local_5d0 [2];
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0 [2];
  longlong local_5b8;
  void *local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598 [100];
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400 [10];
  undefined4 local_3d8 [40];
  undefined4 local_338 [46];
  undefined4 local_280 [102];
  undefined4 local_e8 [10];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [4];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d [5];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5f8;
  local_5b0 = param_2;
  _guard_xfg_dispatch_icall_nop(&local_5a8,param_2,0x534);
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_5a8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_5a8,4);
    }
  }
  else {
    local_5a8 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_5a4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_5a4,4);
    }
  }
  else {
    local_5a4 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_5a0,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_5a0,4);
    }
  }
  else {
    local_5a0 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_59c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_59c,4);
    }
  }
  else {
    local_59c = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar5 = 10;
  puVar4 = local_598;
  lVar6 = 10;
  do {
    lVar2 = 10;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar4,4);
        }
      }
      else {
        *puVar4 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar4 = puVar4 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_408,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_408,4);
    }
  }
  else {
    local_408 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_404,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_404,4);
    }
  }
  else {
    local_404 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  puVar4 = local_400;
  lVar6 = 10;
  do {
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
    }
    else {
      *puVar4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    puVar4 = puVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar4 = local_3d8;
  lVar6 = 10;
  do {
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
    }
    else {
      *puVar4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    puVar4 = puVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = 2;
  puVar4 = local_338;
  local_5b8 = 2;
  do {
    puVar3 = puVar4 + -0x1e;
    lVar2 = 10;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    puVar3 = puVar4 + -0x14;
    lVar2 = 10;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    puVar3 = puVar4 + -10;
    lVar2 = 10;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
    }
    else {
      *puVar4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4 + 1,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4 + 1,4);
      }
    }
    else {
      puVar4[1] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4 + 2,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4 + 2,4);
      }
    }
    else {
      puVar4[2] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    puVar4 = puVar4 + 0x21;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if ((int)param_1[8] < 0x16c) {
    plVar1 = (longlong *)param_1[1];
    local_5d4 = 0;
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_5d4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_5d4,4);
      }
    }
    else {
      local_5d4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_5d4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_5d4,4);
      }
    }
    else {
      local_5d4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_5d4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_5d4,4);
      }
    }
    else {
      local_5d4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_5d4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_5d4,4);
      }
    }
    else {
      local_5d4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  puVar4 = local_280;
  do {
    puVar3 = puVar4 + -10;
    lVar6 = 10;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar3 = puVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar6 = 10;
    puVar3 = puVar4;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar3 = puVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar3 = puVar4 + 10;
    lVar6 = 10;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar3 = puVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar3 = puVar4 + 0x14;
    lVar6 = 10;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar3 = puVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar3 = puVar4 + 0x1e;
    lVar6 = 10;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      puVar3 = puVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4 + 0x28,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4 + 0x28,4);
      }
    }
    else {
      puVar4[0x28] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4 + 0x29,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4 + 0x29,4);
      }
    }
    else {
      puVar4[0x29] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4 + 0x2a,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4 + 0x2a,4);
      }
    }
    else {
      puVar4[0x2a] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4 + 0x2b,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4 + 0x2b,4);
      }
    }
    else {
      puVar4[0x2b] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4 + 0x2c,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4 + 0x2c,4);
      }
    }
    else {
      puVar4[0x2c] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4 + 0x2d,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4 + 0x2d,4);
      }
    }
    else {
      puVar4[0x2d] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    puVar4 = puVar4 + 0x38;
    local_5b8 = local_5b8 + -1;
  } while (local_5b8 != 0);
  puVar4 = local_e8;
  local_5b8 = 0;
  do {
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
    }
    else {
      *puVar4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    puVar4 = puVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_c0,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_c0,4);
    }
  }
  else {
    local_c0 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_bc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_bc,4);
    }
  }
  else {
    local_bc = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (0x16b < (int)param_1[8]) {
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_b8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_b8,4);
      }
    }
    else {
      local_b8 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_b4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_b4,4);
      }
    }
    else {
      local_b4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_b0,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_b0,4);
      }
    }
    else {
      local_b0 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_ac,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_ac,4);
      }
    }
    else {
      local_ac = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_a8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_a8,4);
      }
    }
    else {
      local_a8 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_a4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_a4,4);
      }
    }
    else {
      local_a4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_a0,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_a0,4);
      }
    }
    else {
      local_a0 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_9c,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_9c,4);
      }
    }
    else {
      local_9c = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_98,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_98,4);
      }
    }
    else {
      local_98 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_1[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_94,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_94,4);
      }
    }
    else {
      local_94 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_90,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_90,4);
    }
  }
  else {
    local_90 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_8c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_8c,4);
    }
  }
  else {
    local_8c = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_88,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_88,4);
    }
  }
  else {
    local_88 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_84,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_84,4);
    }
  }
  else {
    local_84 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_80,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_80,4);
    }
  }
  else {
    local_80 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_7c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_7c,4);
    }
  }
  else {
    local_7c = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_78,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_78,4);
    }
  }
  else {
    local_78[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  _Dst = local_5b0;
  local_68 = *(undefined1 *)((longlong)local_5b0 + 0x618);
  (**(code **)(*param_1 + 8))(param_1,&local_68);
  local_67 = *(undefined1 *)((longlong)_Dst + 0x619);
  (**(code **)(*param_1 + 8))(param_1,&local_67);
  local_66 = *(undefined1 *)((longlong)_Dst + 0x61a);
  (**(code **)(*param_1 + 8))(param_1,&local_66);
  local_65 = *(undefined1 *)((longlong)_Dst + 0x61b);
  (**(code **)(*param_1 + 8))(param_1,&local_65);
  local_64 = *(undefined1 *)((longlong)_Dst + 0x61c);
  (**(code **)(*param_1 + 8))(param_1,&local_64);
  local_63 = *(undefined1 *)((longlong)_Dst + 0x61d);
  (**(code **)(*param_1 + 8))(param_1,&local_63);
  local_62 = *(undefined1 *)((longlong)_Dst + 0x61e);
  (**(code **)(*param_1 + 8))(param_1,&local_62);
  if ((int)param_1[8] < 0x16c) {
    local_5d8[0] = 0;
    (**(code **)(*param_1 + 8))(param_1,local_5d8);
  }
  local_61 = *(undefined1 *)((longlong)_Dst + 0x61f);
  (**(code **)(*param_1 + 8))(param_1,&local_61);
  local_60 = *(undefined1 *)((longlong)_Dst + 0x620);
  (**(code **)(*param_1 + 8))(param_1,&local_60);
  local_5f = *(undefined1 *)((longlong)_Dst + 0x621);
  (**(code **)(*param_1 + 8))(param_1,&local_5f);
  local_5e = *(undefined1 *)((longlong)_Dst + 0x622);
  (**(code **)(*param_1 + 8))(param_1,&local_5e);
  local_5d = *(undefined1 *)((longlong)_Dst + 0x623);
  (**(code **)(*param_1 + 8))(param_1,&local_5d);
  local_5c = *(undefined1 *)((longlong)_Dst + 0x624);
  (**(code **)(*param_1 + 8))(param_1,&local_5c);
  if ((int)param_1[8] < 0x16c) {
    local_5d8[0] = 0;
    (**(code **)(*param_1 + 8))(param_1,local_5d8);
  }
  local_5b = *(undefined1 *)((longlong)_Dst + 0x625);
  (**(code **)(*param_1 + 8))(param_1,&local_5b);
  local_5a = *(undefined1 *)((longlong)_Dst + 0x626);
  (**(code **)(*param_1 + 8))(param_1,&local_5a);
  local_59 = *(undefined1 *)((longlong)_Dst + 0x627);
  (**(code **)(*param_1 + 8))(param_1,&local_59);
  local_58 = *(undefined1 *)((longlong)_Dst + 0x628);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  local_57 = *(undefined1 *)((longlong)_Dst + 0x629);
  (**(code **)(*param_1 + 8))(param_1,&local_57);
  if ((int)param_1[8] < 0x16c) {
    local_5d8[0] = 0;
    (**(code **)(*param_1 + 8))(param_1,local_5d8);
  }
  local_56 = *(undefined1 *)((longlong)_Dst + 0x62a);
  (**(code **)(*param_1 + 8))(param_1,&local_56);
  local_55 = *(undefined1 *)((longlong)_Dst + 0x62b);
  (**(code **)(*param_1 + 8))(param_1,&local_55);
  local_54 = *(undefined1 *)((longlong)_Dst + 0x62c);
  (**(code **)(*param_1 + 8))(param_1,&local_54);
  local_53 = *(undefined1 *)((longlong)_Dst + 0x62d);
  (**(code **)(*param_1 + 8))(param_1,&local_53);
  local_52 = *(undefined1 *)((longlong)_Dst + 0x62e);
  (**(code **)(*param_1 + 8))(param_1,&local_52);
  if ((int)param_1[8] < 0x16c) {
    local_5d8[0] = 0;
    (**(code **)(*param_1 + 8))(param_1,local_5d8);
  }
  local_51 = *(undefined1 *)((longlong)_Dst + 0x62f);
  (**(code **)(*param_1 + 8))(param_1,&local_51);
  local_50 = *(undefined1 *)((longlong)_Dst + 0x630);
  (**(code **)(*param_1 + 8))(param_1,&local_50);
  local_4f = *(undefined1 *)((longlong)_Dst + 0x631);
  (**(code **)(*param_1 + 8))(param_1,&local_4f);
  local_4e = *(undefined1 *)((longlong)_Dst + 0x632);
  (**(code **)(*param_1 + 8))(param_1,&local_4e);
  if (0x16b < (int)param_1[8]) {
    local_4d[0] = *(undefined1 *)((longlong)_Dst + 0x633);
    (**(code **)(*param_1 + 8))(param_1,local_4d);
  }
  local_5c8 = *(undefined4 *)((longlong)_Dst + 0x634);
  local_5c4 = *(undefined4 *)((longlong)_Dst + 0x638);
  plVar1 = (longlong *)param_1[1];
  local_5c0[0] = *(undefined4 *)((longlong)_Dst + 0x63c);
  local_5d0[0] = *(undefined4 *)((longlong)_Dst + 0x640);
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_5c8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_5c8,4);
    }
  }
  else {
    local_5c8 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_5c4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_5c4,4);
    }
  }
  else {
    local_5c4 = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_5c0,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_5c0,4);
    }
  }
  else {
    local_5c0[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_5d0,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_5d0,4);
    }
  }
  else {
    local_5d0[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined1 *)((longlong)_Dst + 0x618) = local_68;
    *(undefined1 *)((longlong)_Dst + 0x619) = local_67;
    *(undefined1 *)((longlong)_Dst + 0x61a) = local_66;
    *(undefined1 *)((longlong)_Dst + 0x61b) = local_65;
    *(undefined1 *)((longlong)_Dst + 0x61c) = local_64;
    *(undefined1 *)((longlong)_Dst + 0x61d) = local_63;
    *(undefined1 *)((longlong)_Dst + 0x61e) = local_62;
    *(undefined1 *)((longlong)_Dst + 0x61f) = local_61;
    *(undefined1 *)((longlong)_Dst + 0x620) = local_60;
    *(undefined1 *)((longlong)_Dst + 0x621) = local_5f;
    *(undefined1 *)((longlong)_Dst + 0x622) = local_5e;
    *(undefined1 *)((longlong)_Dst + 0x623) = local_5d;
    *(undefined1 *)((longlong)_Dst + 0x624) = local_5c;
    *(undefined1 *)((longlong)_Dst + 0x625) = local_5b;
    *(undefined1 *)((longlong)_Dst + 0x626) = local_5a;
    *(undefined1 *)((longlong)_Dst + 0x627) = local_59;
    *(undefined1 *)((longlong)_Dst + 0x628) = local_58;
    *(undefined1 *)((longlong)_Dst + 0x629) = local_57;
    *(undefined1 *)((longlong)_Dst + 0x62a) = local_56;
    *(undefined1 *)((longlong)_Dst + 0x62b) = local_55;
    *(undefined1 *)((longlong)_Dst + 0x62c) = local_54;
    *(undefined1 *)((longlong)_Dst + 0x62d) = local_53;
    *(undefined1 *)((longlong)_Dst + 0x62e) = local_52;
    *(undefined1 *)((longlong)_Dst + 0x62f) = local_51;
    *(undefined1 *)((longlong)_Dst + 0x630) = local_50;
    *(undefined1 *)((longlong)_Dst + 0x631) = local_4f;
    *(undefined1 *)((longlong)_Dst + 0x632) = local_4e;
    *(undefined1 *)((longlong)_Dst + 0x633) = local_4d[0];
    _guard_xfg_dispatch_icall_nop(_Dst,&local_5a8,0x534);
    *(undefined4 *)((longlong)_Dst + 0x634) = local_5c8;
    *(undefined4 *)((longlong)_Dst + 0x638) = local_5c4;
    *(undefined4 *)((longlong)_Dst + 0x63c) = local_5c0[0];
    *(undefined4 *)((longlong)_Dst + 0x640) = local_5d0[0];
  }
  return param_1;
}



// FUNCTION 1427f2950 FUN_1427f2950 body=272 status=ok
// SIG undefined FUN_1427f2950(void)

void FUN_1427f2950(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = *param_1;
  if ((DAT_146b17150 != 0) && (DAT_1468c2185 == '\0')) {
    lVar2 = FUN_1428742d0();
    if (lVar2 != 0) {
      FUN_1422fabe0(lVar2,lVar1,0);
      FUN_1422edd30(lVar2,lVar1);
    }
  }
  if (*(longlong *)(lVar1 + 0x128) != 0) {
    FMemory::Free();
    *(undefined8 *)(lVar1 + 0x128) = 0;
  }
  if (*(longlong *)(lVar1 + 0x130) != 0) {
    FMemory::Free();
    *(undefined8 *)(lVar1 + 0x130) = 0;
  }
  if (*(longlong *)(lVar1 + 0x138) != 0) {
    FMemory::Free();
    *(undefined4 *)(lVar1 + 0x1dc) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
  }
  *(byte *)(lVar1 + 0xb3) = *(byte *)(lVar1 + 0xb3) & 0xbf;
  *(undefined4 *)(lVar1 + 0x1e0) = 0;
  *(undefined4 *)(lVar1 + 0x1d8) = 0;
  *(undefined1 *)(lVar1 + 0xb1) = 0;
  *(byte *)(lVar1 + 0xb4) = *(byte *)(lVar1 + 0xb4) & 0xef;
  local_28 = 0;
  local_18 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = lVar1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_1427f6360;
  FUN_1422f8d80(local_58,local_res8);
  return;
}



// FUNCTION 1427f2a60 FUN_1427f2a60 body=368 status=ok
// SIG undefined FUN_1427f2a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427f2a60(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  ulonglong uVar3;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar3 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  local_28 = 0;
  FUN_1426fb810(param_1[1],*param_1,&local_118);
  FUN_142723e40(param_1[2],*param_1,&local_118);
  FUN_142723ec0(param_1[2],*param_1,&local_118,0xffffffff);
  if (0 < *(int *)(param_1 + 6)) {
    uVar4 = uVar3;
    do {
      puVar1 = (undefined8 *)param_1[5];
      if ((undefined8 *)param_1[5] == (undefined8 *)0x0) {
        puVar1 = param_1 + 3;
      }
      FUN_142723a20(*(undefined8 *)((longlong)puVar1 + uVar4),uVar3,*param_1,&local_118);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 6));
  }
  FUN_142578240(*param_1,&local_118);
  (**(code **)(*(longlong *)*param_1 + 0x28))();
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1427f2bd0 FUN_1427f2bd0 body=164 status=ok
// SIG undefined FUN_1427f2bd0(void)

void FUN_1427f2bd0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar3 = (longlong *)*param_1;
  plVar7 = (longlong *)FUN_14189ca40(param_2,local_18);
  lVar4 = *plVar3;
  lVar5 = *plVar7;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (lVar5 != lVar4) {
    return;
  }
  FUN_141891140(DAT_1469f4590,*(undefined4 *)(param_2 + 0x110),2);
  return;
}



// FUNCTION 1427f2c80 FUN_1427f2c80 body=255 status=ok
// SIG undefined FUN_1427f2c80(void)

longlong * FUN_1427f2c80(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_141979820(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1427f2d44;
    }
  }
  bVar4 = 1;
LAB_1427f2d44:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1427f2df0 FUN_1427f2df0 body=97 status=ok
// SIG undefined FUN_1427f2df0(void)

undefined8 * FUN_1427f2df0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b9850;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1427f2e60 FUN_1427f2e60 body=97 status=ok
// SIG undefined FUN_1427f2e60(void)

undefined8 * FUN_1427f2e60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b9840;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1427f2ed0 FUN_1427f2ed0 body=97 status=ok
// SIG undefined FUN_1427f2ed0(void)

undefined8 * FUN_1427f2ed0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b2868;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1427f2f40 FUN_1427f2f40 body=97 status=ok
// SIG undefined FUN_1427f2f40(void)

undefined8 * FUN_1427f2f40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b2d20;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1427f2fb0 FUN_1427f2fb0 body=97 status=ok
// SIG undefined FUN_1427f2fb0(void)

undefined8 * FUN_1427f2fb0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b40a0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1427f3020 FUN_1427f3020 body=97 status=ok
// SIG undefined FUN_1427f3020(void)

undefined8 * FUN_1427f3020(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b40b0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1427f3090 FUN_1427f3090 body=97 status=ok
// SIG undefined FUN_1427f3090(void)

undefined8 * FUN_1427f3090(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b2858;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1427f3100 FUN_1427f3100 body=97 status=ok
// SIG undefined FUN_1427f3100(void)

undefined8 * FUN_1427f3100(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b4080;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1427f3170 FUN_1427f3170 body=97 status=ok
// SIG undefined FUN_1427f3170(void)

undefined8 * FUN_1427f3170(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b2d30;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1427f31e0 FUN_1427f31e0 body=97 status=ok
// SIG undefined FUN_1427f31e0(void)

undefined8 * FUN_1427f31e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451b4090;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1427f3250 FUN_1427f3250 body=52 status=ok
// SIG undefined FUN_1427f3250(void)

undefined8 FUN_1427f3250(undefined8 param_1,ulonglong param_2)

{
  FUN_1427f0580();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1427f3290 `scalar_deleting_destructor' body=105 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FDeferredCleanupSlateBrush::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  FSlateBrush::~FSlateBrush(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 0x18) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1427f3300 FUN_1427f3300 body=218 status=ok
// SIG undefined FUN_1427f3300(void)

longlong FUN_1427f3300(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x28,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1427f33e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSlateStyleSet::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1427f08e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a8);
  }
  return param_1;
}



// FUNCTION 1427f3420 FUN_1427f3420 body=77 status=ok
// SIG undefined FUN_1427f3420(void)

undefined8 * FUN_1427f3420(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451b2290;
  FUN_1427f0250(param_1 + 0x1c);
  FUN_1427cf9a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1427f3470 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateCanvasRenderTarget::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1427f34c0 `scalar_deleting_destructor' body=237 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateTexture2DRHIRef::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1451b2c68;
  param_1[2] = &PTR_LAB_1451b2c88;
  param_1[3] = &PTR_LAB_1451b2cd0;
  param_1[4] = &PTR_LAB_1451b2ce0;
  plVar4 = (longlong *)param_1[0xd];
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
  FUN_141edd2d0(param_1 + 4);
  param_1[3] = &PTR_FUN_1440780a8;
  param_1[2] = &PTR_FUN_1451b2c20;
  *param_1 = &PTR__purecall_144f96210;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1427f35b0 FUN_1427f35b0 body=43 status=ok
// SIG undefined FUN_1427f35b0(void)

undefined8 * FUN_1427f35b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451b2c20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1427f35e0 `scalar_deleting_destructor' body=91 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSoundEffectBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451b1d90;
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>(param_1 + 0xe);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1427f3640 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAkAudioInputComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1428181b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 1427f3690 FUN_1427f3690 body=78 status=ok
// SIG undefined FUN_1427f3690(void)

undefined8 FUN_1427f3690(undefined8 param_1,ulonglong param_2)

{
  FUN_14243f1a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x440);
  }
  return param_1;
}



// FUNCTION 1427f36e0 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UButtonStyleAsset::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x28) = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x1c8);
  FSlateBrush::~FSlateBrush(param_1 + 0x140);
  FSlateBrush::~FSlateBrush(param_1 + 0xb8);
  FSlateBrush::~FSlateBrush(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144042b80;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 1427f3760 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UUGCheckboxWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FCheckBoxStyle::~FCheckBoxStyle(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5a8);
  }
  return param_1;
}



// FUNCTION 1427f37a0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USlateBrushAsset::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FSlateBrush::~FSlateBrush(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1427f37e0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundAttenuation::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1404584f0(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 1427f3820 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundBase::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1427f3890 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundClass::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1427f38f0 `scalar_deleting_destructor' body=116 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundCue::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1404584f0(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 1427f3970 FUN_1427f3970 body=70 status=ok
// SIG undefined FUN_1427f3970(void)

longlong FUN_1427f3970(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1427f39c0 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundGroups::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x38);
  FUN_1408708d0(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1427f3a30 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundMix::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1427f3a80 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundNodeAttenuation::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1404584f0(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 1427f3ad0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundNodeDialoguePlayer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1427f3b30 FUN_1427f3b30 body=91 status=ok
// SIG undefined FUN_1427f3b30(void)

longlong FUN_1427f3b30(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0xd8);
  FRichCurve::~FRichCurve(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1427f3b90 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundNodeModulatorContinuous::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1427f3be0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundNodeRandom::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1427f3c50 `scalar_deleting_destructor' body=147 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundSubmix::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 != (undefined8 *)0x0) {
    Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(puVar1 + 4);
    FMemory::operator_delete(*puVar1);
    FMemory::operator_delete(puVar1,0x90);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1427f3cf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 USoundWave::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~USoundWave();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 1427f3d30 FUN_1427f3d30 body=97 status=ok
// SIG undefined FUN_1427f3d30(void)

longlong FUN_1427f3d30(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x238);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  TQueue<TArray<unsigned_char,FDefaultAllocator>,1>::
  ~TQueue<TArray<unsigned_char,FDefaultAllocator>,1>(param_1 + 0x200);
  USoundWave::~USoundWave(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 1427f3da0 FUN_1427f3da0 body=67 status=ok
// SIG undefined FUN_1427f3da0(void)

longlong FUN_1427f3da0(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x210);
  FUN_14095e400(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 1427f3df0 FUN_1427f3df0 body=959 status=ok
// SIG undefined FUN_1427f3df0(void)

longlong FUN_1427f3df0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  local_108[0] = 1;
  local_100 = 0;
  local_f8 = 0;
  local_54 = local_54 & 0xffffff40 | 0x40;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x20702;
  FUN_140438260(param_2,local_108);
  FUN_140438c20(local_108);
  plVar7 = *(longlong **)(param_1 + 0x2e0);
  local_res20 = 0;
  plVar9 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar10 = iVar4 == 0;
    if (bVar10) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar4 == (int)plVar7[1];
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar9 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          local_res20 = *(undefined8 *)(param_1 + 0x2d8);
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar7 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plVar7;
          if ((int)lVar5 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  local_148 = local_res20;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_140 = plVar9;
  FUN_14185b9a0(param_2,&local_148,2,1);
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
  if ((((lVar5 == 0) || (cVar3 = UWorld::IsGameWorld(lVar5), cVar3 == '\0')) ||
      (*(longlong *)(lVar5 + 400) == 0)) ||
     ((lVar6 = FUN_14244f490(*(longlong *)(lVar5 + 400),0), lVar6 == 0 &&
      (cVar3 = UWorld::IsPlayInEditor(lVar5), cVar3 == '\0')))) {
    local_118 = local_res20;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    puVar8 = &local_118;
    local_110 = plVar9;
  }
  else {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_158 = local_res20;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_150 = plVar9;
    if ((undefined8 *)(param_2 + 0x38) != &local_158) {
      *(undefined8 *)(param_2 + 0x38) = local_res20;
      local_158 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x40,&local_150);
    }
    plVar7 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x188))();
    if (cVar3 != '\0') {
      local_138 = local_res20;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_130 = plVar9;
      FUN_142710cc0(param_2,&local_138);
    }
    plVar7 = (longlong *)FUN_14244f490(*(undefined8 *)(lVar5 + 400),0);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar7 + 0xe28))(plVar7), cVar3 == '\0')) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x198))();
    if ((cVar3 != '\0') && (bVar10)) {
      uStackX_1c = (undefined4)((ulonglong)param_3 >> 0x20);
      *(undefined1 *)(param_1 + 0x311) = 1;
      *(int *)(param_1 + 0x314) = (int)param_3;
      *(undefined4 *)(param_1 + 0x318) = uStackX_1c;
    }
    if ((*(char *)(param_1 + 0x311) == '\0') && (bVar10)) goto LAB_1427f4166;
    local_128 = local_res20;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    puVar8 = &local_128;
    local_120 = plVar9;
  }
  FUN_14048f0a0(param_2,puVar8);
LAB_1427f4166:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1427f41b0 FUN_1427f41b0 body=837 status=ok
// SIG undefined FUN_1427f41b0(void)

undefined8
FUN_1427f41b0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_1427fb3c0(param_1 + -0x2f0,&local_58,param_2);
  if (local_58 == 0) {
LAB_1427f4470:
    plVar10 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar10 = (longlong *)param_4[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    return 0;
  }
  plVar10 = (longlong *)0x0;
  lVar4 = *param_3;
  if (*(int *)(local_58 + 0x30) != *(int *)(local_58 + 0x5c)) {
    lVar9 = *(longlong *)(local_58 + 0x68);
    if (*(longlong *)(local_58 + 0x68) == 0) {
      lVar9 = local_58 + 0x60;
    }
    iVar5 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                             (longlong)*(int *)(local_58 + 0x70) - 1U) * 4);
    if (iVar5 != -1) {
      lVar9 = *(longlong *)(local_58 + 0x28);
      do {
        lVar8 = (longlong)iVar5 * 0x20;
        if (*(longlong *)(lVar8 + lVar9) == lVar4) {
          plVar10 = (longlong *)0x0;
          if ((iVar5 != -1) && (lVar9 = (longlong)iVar5 * 0x20 + lVar9, lVar9 != 0)) {
            plVar10 = *(longlong **)(lVar9 + 0x10);
            lVar4 = *(longlong *)(lVar9 + 8);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            if (lVar4 != 0) {
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar10 + 1;
                lVar4 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  iVar5 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
              }
              goto LAB_1427f4470;
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x18 + lVar9);
      } while (iVar5 != -1);
    }
  }
  local_48 = *param_4;
  local_40 = (longlong *)param_4[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_30 = &local_48;
  local_38 = param_3;
  FUN_1427ece50(local_58 + 0x28,local_res8,&local_38,0);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
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
  uVar7 = *(undefined8 *)(local_58 + 0x10);
  uVar6 = (*(code *)**(undefined8 **)*param_4)((undefined8 *)*param_4,local_28);
  uVar7 = FUN_141801800(uVar7,param_5);
  FUN_140801a00(uVar7,uVar6);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  plVar10 = (longlong *)param_4[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return 1;
}



// FUNCTION 1427f4500 FUN_1427f4500 body=1015 status=ok
// SIG undefined FUN_1427f4500(void)

void FUN_1427f4500(longlong param_1,float *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_248;
  longlong *local_240;
  float local_238;
  float local_234;
  undefined1 local_230;
  undefined8 local_228;
  undefined4 local_220;
  float local_218;
  float local_214;
  undefined1 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [208];
  undefined4 local_118;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  iVar10 = (int)param_4[1];
  if (iVar10 != 0) {
    bVar4 = *(byte *)(param_3 + 0x80);
    if (*(longlong *)(param_3 + 0xb0) == 0) {
      fVar14 = 1.0;
    }
    else {
      fVar14 = (float)FUN_1427fcea0(param_1);
      fVar14 = 1.0 / fVar14;
      iVar10 = (int)param_4[1];
    }
    iVar13 = 0;
    if (0 < iVar10) {
      lVar11 = 0;
      lVar12 = 0;
      lVar8 = (longlong)(int)(uint)bVar4;
      lVar9 = lVar8;
      do {
        if ((int)(uint)bVar4 < *(int *)(param_3 + 0x70)) {
          if (iVar13 < *(int *)(*(longlong *)(param_3 + 0x68) + 8 + lVar9 * 0x10)) {
            plVar5 = *(longlong **)(lVar12 + *param_4);
            FUN_1427fb3c0(param_1,&local_248,plVar5);
            fVar16 = 0.0;
            fVar17 = 0.0;
            lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x68) + lVar9 * 0x10);
            fVar15 = *(float *)(lVar11 + lVar9);
            fVar3 = *(float *)(lVar11 + 4 + lVar9);
            fVar18 = *(float *)(lVar11 + 8 + lVar9);
            fVar20 = *(float *)(lVar11 + 0xc + lVar9);
            if (plVar5 != (longlong *)0x0) {
              local_118 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              cVar7 = (**(code **)(*plVar5 + 0x2d0))
                                (plVar5,*(undefined8 *)(plVar5[0xe] + 0xb0),0,local_1e8);
              if (cVar7 != '\0') {
                iVar10 = (int)((ulonglong)local_c8 >> 0x20);
                fVar16 = (float)((int)local_b8 - (int)local_c8) /
                         (float)((int)uStack_c0 - (int)local_c8);
                fVar17 = (float)((int)((ulonglong)local_b8 >> 0x20) - iVar10) /
                         (float)((int)((ulonglong)uStack_c0 >> 0x20) - iVar10);
              }
            }
            fVar19 = (fVar18 + fVar16) * *param_2 * fVar14;
            fVar20 = (fVar20 + fVar17) * param_2[1] * fVar14;
            fVar18 = (fVar15 - (fVar16 + fVar16)) * *param_2 * fVar14;
            fVar15 = (fVar3 - (fVar17 + fVar17)) * param_2[1] * fVar14;
            if ((*(char *)(param_1 + 0x420) == '\x01') &&
               (lVar9 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x3f0),local_1f8),
               *(float *)(lVar9 + 4) <= fVar15 && fVar15 != *(float *)(lVar9 + 4))) {
              lVar9 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x3f0),local_1f0);
              fVar15 = fVar15 - *(float *)(lVar9 + 4);
            }
            lVar6 = local_248;
            local_230 = 1;
            lVar9 = *(longlong *)(local_248 + 0x20);
            local_228 = 0;
            local_220 = 0;
            *(float *)(lVar9 + 0x40) = fVar18;
            *(float *)(lVar9 + 0x44) = fVar15;
            *(undefined1 *)(lVar9 + 0x48) = 1;
            local_238 = fVar18;
            local_234 = fVar15;
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x50,&local_228);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_228);
            lVar9 = *(longlong *)(lVar6 + 0x20);
            local_210 = 1;
            *(float *)(lVar9 + 0x20) = fVar19;
            *(float *)(lVar9 + 0x24) = fVar20;
            *(undefined1 *)(lVar9 + 0x28) = 1;
            local_208 = 0;
            local_200 = 0;
            local_218 = fVar19;
            local_214 = fVar20;
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x30,&local_208);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_208);
            plVar5 = local_240;
            lVar9 = lVar8;
            if (local_240 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_240 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_240)(local_240);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_240 + 8))(local_240,1);
                }
              }
            }
          }
          else {
            lVar9 = (longlong)(int)(uint)bVar4;
          }
        }
        iVar13 = iVar13 + 1;
        lVar12 = lVar12 + 8;
        lVar11 = lVar11 + 0x10;
      } while (iVar13 < (int)param_4[1]);
    }
  }
  return;
}



// FUNCTION 1427f4920 FUN_1427f4920 body=200 status=ok
// SIG undefined FUN_1427f4920(void)

void FUN_1427f4920(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_1427fb3c0(param_1 + -0x2f0,&local_18,param_2);
  uVar6 = FUN_141801800(*(undefined8 *)(local_18 + 0x10),param_4);
  FUN_140801a00(uVar6,param_3);
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
  plVar4 = *(longlong **)(param_3 + 8);
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



// FUNCTION 1427f49f0 Advance body=3619 status=ok
// SIG undefined Advance(void)

void FSpeedTreeWind::Advance(longlong param_1,char param_2,double param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (*(double *)(param_1 + 0x548) == -1.0) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = param_3 - *(double *)(param_1 + 0x548);
  }
  *(double *)(param_1 + 0x550) = dVar13;
  *(double *)(param_1 + 0x548) = param_3;
  lVar9 = 2;
  puVar3 = (undefined8 *)(param_1 + 0x770);
  puVar4 = (undefined8 *)(param_1 + 0x650);
  do {
    puVar8 = puVar4;
    puVar6 = puVar3;
    uVar2 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar2;
    uVar2 = puVar8[3];
    puVar6[2] = puVar8[2];
    puVar6[3] = uVar2;
    uVar2 = puVar8[5];
    puVar6[4] = puVar8[4];
    puVar6[5] = uVar2;
    uVar2 = puVar8[7];
    puVar6[6] = puVar8[6];
    puVar6[7] = uVar2;
    uVar2 = puVar8[9];
    puVar6[8] = puVar8[8];
    puVar6[9] = uVar2;
    uVar2 = puVar8[0xb];
    puVar6[10] = puVar8[10];
    puVar6[0xb] = uVar2;
    uVar2 = puVar8[0xd];
    puVar6[0xc] = puVar8[0xc];
    puVar6[0xd] = uVar2;
    uVar2 = puVar8[0xf];
    puVar6[0xe] = puVar8[0xe];
    puVar6[0xf] = uVar2;
    lVar9 = lVar9 + -1;
    puVar3 = puVar6 + 0x10;
    puVar4 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar2 = puVar8[0x11];
  puVar6[0x10] = puVar8[0x10];
  puVar6[0x11] = uVar2;
  uVar2 = puVar8[0x13];
  puVar6[0x12] = puVar8[0x12];
  puVar6[0x13] = uVar2;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x650) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x6b0) = 0;
    *(undefined8 *)(param_1 + 0x674) = 0;
    *(undefined8 *)(param_1 + 0x67c) = 0;
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined4 *)(param_1 + 0x6a8) = 0;
    *(undefined8 *)(param_1 + 0x6c0) = 0;
    *(undefined4 *)(param_1 + 0x6b8) = 0;
    *(undefined8 *)(param_1 + 0x684) = 0;
    *(undefined8 *)(param_1 + 0x68c) = 0;
    *(undefined4 *)(param_1 + 0x694) = 0;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined4 *)(param_1 + 0x668) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x66c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x710) = 0;
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
    *(undefined4 *)(param_1 + 0x728) = 0;
    *(undefined4 *)(param_1 + 0x6d8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x708) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x730) = 0;
    *(undefined4 *)(param_1 + 0x738) = 0;
    *(undefined4 *)(param_1 + 0x73c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_1 + 0x4f4);
    *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x4f8);
    *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x4fc);
    *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_1 + 0x510);
    *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x514);
    *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x504);
    *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x508);
    *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x50c);
    *(undefined4 *)(param_1 + 0x758) = 0;
    *(undefined4 *)(param_1 + 0x75c) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x558) != '\0') {
      Gust(param_1,SUB84(param_3,0));
    }
    dVar13 = *(double *)(param_1 + 0x5c8);
    fVar15 = 1.0;
    if (*(double *)(param_1 + 0x5d0) != dVar13) {
      dVar13 = (param_3 - dVar13) / (*(double *)(param_1 + 0x5d0) - dVar13);
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      if (1.0 <= dVar13) {
        dVar13 = 1.0;
      }
      fVar15 = (float)dVar13;
    }
    fVar11 = ::_guard_xfg_dispatch_icall_nop(6.0 - fVar15 * 12.0);
    fVar16 = *(float *)(param_1 + 0x5b8);
    fVar12 = *(float *)(param_1 + 0x5bc);
    fVar17 = *(float *)(param_1 + 0x5c0);
    fVar11 = 1.0 / (fVar11 + 1.0);
    fVar11 = (fVar15 - fVar11) * 0.5 + fVar11;
    if (0.5 <= fVar11) {
      fVar15 = ((fVar11 - 0.5) + fVar11) - 0.5;
      fVar11 = (*(float *)(param_1 + 0x5b0) - fVar12) * fVar15;
      fVar14 = (*(float *)(param_1 + 0x5b4) - fVar17) * fVar15;
      fVar15 = (*(float *)(param_1 + 0x5ac) - fVar16) * fVar15;
    }
    else {
      fVar11 = fVar11 + fVar11;
      fVar15 = (fVar16 - *(float *)(param_1 + 0x5d8)) * fVar11;
      fVar14 = (fVar17 - *(float *)(param_1 + 0x5e0)) * fVar11;
      fVar11 = (fVar12 - *(float *)(param_1 + 0x5dc)) * fVar11;
      fVar12 = *(float *)(param_1 + 0x5dc);
      fVar16 = *(float *)(param_1 + 0x5d8);
      fVar17 = *(float *)(param_1 + 0x5e0);
    }
    *(float *)(param_1 + 0x538) = fVar15 + fVar16;
    *(float *)(param_1 + 0x53c) = fVar11 + fVar12;
    *(float *)(param_1 + 0x540) = fVar14 + fVar17;
    Normalize(param_1,param_1 + 0x538);
    fVar15 = 0.0;
    dVar13 = *(double *)(param_1 + 0x598);
    if (*(double *)(param_1 + 0x5a0) == dVar13) {
      fVar12 = 0.0;
    }
    else {
      dVar13 = (param_3 - dVar13) / (*(double *)(param_1 + 0x5a0) - dVar13);
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      if (1.0 <= dVar13) {
        dVar13 = 1.0;
      }
      fVar12 = (float)dVar13;
    }
    fVar17 = *(float *)(param_1 + 0x5a8);
    fVar16 = *(float *)(param_1 + 0x590);
    fVar12 = ::_guard_xfg_dispatch_icall_nop(6.0 - fVar12 * 12.0);
    fVar17 = (fVar16 - fVar17) / (fVar12 + 1.0) + fVar17;
    *(float *)(param_1 + 0x534) = fVar17;
    fVar17 = fVar17 + *(float *)(param_1 + 0x55c);
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    *(float *)(param_1 + 0x5ec) = fVar17;
    *(float *)(param_1 + 0x5e4) =
         (float)((double)(fVar17 * *(float *)(param_1 + 0x538) * *(float *)(param_1 + 0x500)) *
                 *(double *)(param_1 + 0x550) + (double)*(float *)(param_1 + 0x5e4));
    *(float *)(param_1 + 0x5e8) =
         (float)((double)(*(float *)(param_1 + 0x5ec) * *(float *)(param_1 + 0x53c) *
                         *(float *)(param_1 + 0x500)) * *(double *)(param_1 + 0x550) +
                (double)*(float *)(param_1 + 0x5e8));
    fVar12 = *(float *)(param_1 + 0x5ec) * 9.0;
    iVar7 = (int)fVar12;
    iVar5 = iVar7 + 1;
    if (iVar5 < 10) {
      if (iVar7 < 0) {
        iVar7 = 0;
        fVar12 = 0.0;
        iVar5 = iVar7;
      }
      else {
        fVar12 = fVar12 - (float)iVar7;
      }
    }
    else {
      iVar7 = 9;
      fVar12 = 0.0;
      iVar5 = 9;
    }
    lVar10 = (longlong)iVar7;
    lVar9 = (longlong)iVar5;
    *(float *)(param_1 + 0x5f0) =
         (float)((double)((*(float *)(param_1 + 0x10 + lVar9 * 4) -
                          *(float *)(param_1 + 0x10 + lVar10 * 4)) * fVar12 +
                         *(float *)(param_1 + 0x10 + lVar10 * 4)) * *(double *)(param_1 + 0x550) +
                (double)*(float *)(param_1 + 0x5f0));
    *(float *)(param_1 + 0x5f4) =
         (float)((double)((*(float *)(param_1 + 0x38 + lVar9 * 4) -
                          *(float *)(param_1 + 0x38 + lVar10 * 4)) * fVar12 +
                         *(float *)(param_1 + 0x38 + lVar10 * 4)) * *(double *)(param_1 + 0x550) +
                (double)*(float *)(param_1 + 0x5f4));
    *(float *)(param_1 + 0x5f8) =
         (float)((double)((*(float *)(param_1 + 0x60 + lVar9 * 4) -
                          *(float *)(param_1 + 0x60 + lVar10 * 4)) * fVar12 +
                         *(float *)(param_1 + 0x60 + lVar10 * 4)) * *(double *)(param_1 + 0x550) +
                (double)*(float *)(param_1 + 0x5f8));
    fVar17 = *(float *)(param_1 + 0x88 + lVar10 * 4);
    *(float *)(param_1 + 0x5fc) =
         (float)((double)((*(float *)(param_1 + 0x88 + lVar9 * 4) - fVar17) * fVar12 + fVar17) *
                 *(double *)(param_1 + 0x550) + (double)*(float *)(param_1 + 0x5fc));
    fVar17 = *(float *)(param_1 + 0xb0 + lVar10 * 4);
    *(float *)(param_1 + 0x600) =
         (float)((double)((*(float *)(param_1 + 0xb0 + lVar9 * 4) - fVar17) * fVar12 + fVar17) *
                 *(double *)(param_1 + 0x550) + (double)*(float *)(param_1 + 0x600));
    fVar17 = *(float *)(param_1 + 0xd8 + lVar10 * 4);
    *(float *)(param_1 + 0x604) =
         (float)((double)((*(float *)(param_1 + 0xd8 + lVar9 * 4) - fVar17) * fVar12 + fVar17) *
                 *(double *)(param_1 + 0x550) + (double)*(float *)(param_1 + 0x604));
    fVar17 = *(float *)(param_1 + 0x100 + lVar10 * 4);
    *(float *)(param_1 + 0x608) =
         (float)((double)((*(float *)(param_1 + 0x100 + lVar9 * 4) - fVar17) * fVar12 + fVar17) *
                 *(double *)(param_1 + 0x550) + (double)*(float *)(param_1 + 0x608));
    fVar17 = *(float *)(param_1 + 0x128 + lVar10 * 4);
    *(float *)(param_1 + 0x60c) =
         (float)((double)((*(float *)(param_1 + 0x128 + lVar9 * 4) - fVar17) * fVar12 + fVar17) *
                 *(double *)(param_1 + 0x550) + (double)*(float *)(param_1 + 0x60c));
    fVar17 = *(float *)(param_1 + 0x150 + lVar10 * 4);
    *(float *)(param_1 + 0x610) =
         (float)((double)((*(float *)(param_1 + 0x150 + lVar9 * 4) - fVar17) * fVar12 + fVar17) *
                 *(double *)(param_1 + 0x550) + (double)*(float *)(param_1 + 0x610));
    fVar17 = *(float *)(param_1 + 0x178 + lVar10 * 4);
    *(float *)(param_1 + 0x614) =
         (float)((double)((*(float *)(param_1 + 0x178 + lVar9 * 4) - fVar17) * fVar12 + fVar17) *
                 *(double *)(param_1 + 0x550) + (double)*(float *)(param_1 + 0x614));
    fVar17 = *(float *)(param_1 + 0x538);
    fVar16 = *(float *)(param_1 + 0x53c);
    *(float *)(param_1 + 0x650) = fVar17;
    *(float *)(param_1 + 0x654) = fVar16;
    *(float *)(param_1 + 0x658) = *(float *)(param_1 + 0x540);
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x5ec);
    fVar11 = *(float *)(param_1 + 0x1a8 + lVar10 * 4);
    fVar14 = *(float *)(param_1 + 0x1a8 + lVar9 * 4);
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_1 + 0x5f0);
    *(float *)(param_1 + 0x664) = (fVar14 - fVar11) * fVar12 + fVar11;
    fVar11 = 1.0;
    if (*(float *)(param_1 + 0x1a0) != 0.0) {
      fVar11 = 1.0 / *(float *)(param_1 + 0x1a0);
    }
    *(float *)(param_1 + 0x668) = fVar11;
    *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x1a4);
    fVar11 = *(float *)(param_1 + 0x1d0 + lVar10 * 4);
    *(float *)(param_1 + 0x6b0) =
         (*(float *)(param_1 + 0x1d0 + lVar9 * 4) - fVar11) * fVar12 + fVar11;
    fVar11 = *(float *)(param_1 + 0x1f8 + lVar10 * 4);
    fVar14 = *(float *)(param_1 + 0x1f8 + lVar9 * 4);
    *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_1 + 0x5f4);
    *(float *)(param_1 + 0x674) = (fVar14 - fVar11) * fVar12 + fVar11;
    fVar11 = *(float *)(param_1 + 0x27c + lVar10 * 4);
    fVar14 = *(float *)(param_1 + 0x27c + lVar9 * 4);
    *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_1 + 0x5f8);
    *(float *)(param_1 + 0x67c) = (fVar14 - fVar11) * fVar12 + fVar11;
    fVar14 = *(float *)(param_1 + 0x540) + *(float *)(param_1 + 8);
    fVar11 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar14 * fVar14);
    if (fVar11 == 0.0) {
      fVar17 = 0.0;
      fVar16 = 0.0;
      fVar14 = 0.0;
    }
    else {
      fVar11 = 1.0 / fVar11;
      fVar17 = fVar17 * fVar11;
      fVar16 = fVar16 * fVar11;
      fVar14 = fVar14 * fVar11;
    }
    fVar11 = *(float *)(param_1 + 0x640);
    fVar1 = *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x6a0) = fVar17 * fVar11 * fVar1 + *(float *)(param_1 + 0x634);
    *(float *)(param_1 + 0x6a4) = fVar16 * fVar11 * fVar1 + *(float *)(param_1 + 0x638);
    *(float *)(param_1 + 0x6a8) = fVar14 * fVar11 * fVar1 + *(float *)(param_1 + 0x63c);
    fVar17 = *(float *)(param_1 + 0x220 + lVar10 * 4);
    fVar17 = (*(float *)(param_1 + 0x220 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    *(float *)(param_1 + 0x6b4) = fVar17;
    if (*(char *)(param_1 + 0x61b) != '\0') {
      *(float *)(param_1 + 0x6b4) = fVar17 * *(float *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_1 + 0x270);
    fVar17 = *(float *)(param_1 + 0x2a4 + lVar10 * 4);
    fVar17 = (*(float *)(param_1 + 0x2a4 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    *(float *)(param_1 + 0x6b8) = fVar17;
    if (*(char *)(param_1 + 0x621) != '\0') {
      *(float *)(param_1 + 0x6b8) = fVar17 * *(float *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_1 + 0x2f4);
    *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_1 + 0x274);
    *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_1 + 0x278);
    *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_1 + 0x2f8);
    *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_1 + 0x2fc);
    fVar17 = *(float *)(param_1 + 0x248 + lVar10 * 4);
    *(float *)(param_1 + 0x690) =
         (*(float *)(param_1 + 0x248 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x2cc + lVar10 * 4);
    fVar16 = *(float *)(param_1 + 0x2cc + lVar9 * 4);
    *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x5fc);
    *(float *)(param_1 + 0x694) = (fVar16 - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x300 + lVar10 * 4);
    fVar16 = *(float *)(param_1 + 0x300 + lVar9 * 4);
    *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x608);
    *(float *)(param_1 + 0x6d4) = (fVar16 - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x3e0 + lVar10 * 4);
    fVar16 = *(float *)(param_1 + 0x3e0 + lVar9 * 4);
    *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_1 + 0x600);
    *(float *)(param_1 + 0x704) = (fVar16 - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x328 + lVar10 * 4);
    *(float *)(param_1 + 0x6e4) =
         (*(float *)(param_1 + 0x328 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x350 + lVar10 * 4);
    *(float *)(param_1 + 0x6e8) =
         (*(float *)(param_1 + 0x350 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x378 + lVar10 * 4);
    fVar16 = *(float *)(param_1 + 0x378 + lVar9 * 4);
    *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_1 + 0x60c);
    *(float *)(param_1 + 0x6ec) = (fVar16 - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x408 + lVar10 * 4);
    *(float *)(param_1 + 0x714) =
         (*(float *)(param_1 + 0x408 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x430 + lVar10 * 4);
    *(float *)(param_1 + 0x718) =
         (*(float *)(param_1 + 0x430 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x458 + lVar10 * 4);
    *(float *)(param_1 + 0x71c) =
         (*(float *)(param_1 + 0x458 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x3a0 + lVar10 * 4);
    *(float *)(param_1 + 0x6f0) =
         (*(float *)(param_1 + 0x3a0 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0xd8 + lVar10 * 4);
    fVar17 = (*(float *)(param_1 + 0xd8 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    if (1.1920929e-07 <= fVar17) {
      fVar17 = (*(float *)(param_1 + 0x3c8) / fVar17) * 10.0;
    }
    else {
      fVar17 = 0.0;
    }
    *(float *)(param_1 + 0x6f4) = fVar17;
    *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_1 + 0x604);
    fVar17 = *(float *)(param_1 + 0x480 + lVar10 * 4);
    *(float *)(param_1 + 0x720) =
         (*(float *)(param_1 + 0x480 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    fVar17 = *(float *)(param_1 + 0x150 + lVar10 * 4);
    fVar17 = (*(float *)(param_1 + 0x150 + lVar9 * 4) - fVar17) * fVar12 + fVar17;
    if (1.1920929e-07 <= fVar17) {
      fVar15 = (*(float *)(param_1 + 0x4a8) / fVar17) * 10.0;
    }
    *(float *)(param_1 + 0x724) = fVar15;
    *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_1 + 0x610);
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x3dc);
    *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x4bc);
    *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_1 + 0x614);
    fVar15 = *(float *)(param_1 + 0x4c0 + lVar10 * 4);
    *(float *)(param_1 + 0x734) =
         (*(float *)(param_1 + 0x4c0 + lVar9 * 4) - fVar15) * fVar12 + fVar15;
    *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_1 + 0x4e8);
    *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(param_1 + 0x4ec);
    *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_1 + 0x4f4);
    *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x4f8);
    *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x4fc);
    *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_1 + 0x510);
    *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x514);
    *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x504);
    *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x508);
    *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x50c);
    *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x5e4);
    *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(param_1 + 0x5e8);
  }
  return;
}



// FUNCTION 1427f5830 FUN_1427f5830 body=673 status=ok
// SIG undefined FUN_1427f5830(void)

void FUN_1427f5830(longlong param_1,byte *param_2)

{
  int *piVar1;
  undefined1 local_res8 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     ((piVar1 = (int *)(**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1 + 8,local_res8),
      *piVar1 != DAT_1468b5ca0 || (piVar1[1] != DAT_1468b5ca4)))) {
    if ((*param_2 >> 4 & 1) != 0) {
      local_b8 = DAT_1469ea0f0;
      local_b0 = DAT_1469ea0f8;
      local_a8 = DAT_1469ea100;
      if (DAT_1469ea100 != 0) {
        LOCK();
        *(int *)(DAT_1469ea100 + 8) = *(int *)(DAT_1469ea100 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                (*(longlong **)(param_1 + 0x58),param_1 + 8,0,&local_b8,0,0x3f800000,0);
    }
    if ((*param_2 >> 5 & 1) != 0) {
      local_a0 = DAT_1469ea108;
      local_98 = DAT_1469ea110;
      local_90 = DAT_1469ea118;
      if (DAT_1469ea118 != 0) {
        LOCK();
        *(int *)(DAT_1469ea118 + 8) = *(int *)(DAT_1469ea118 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                (*(longlong **)(param_1 + 0x58),param_1 + 8,0,&local_a0,0,0x3f800000,0);
    }
    if ((*param_2 >> 2 & 1) != 0) {
      local_88 = DAT_1469ea0c0;
      local_80 = DAT_1469ea0c8;
      local_78 = DAT_1469ea0d0;
      if (DAT_1469ea0d0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea0d0 + 8) = *(int *)(DAT_1469ea0d0 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                (*(longlong **)(param_1 + 0x58),param_1 + 8,0,&local_88,0,0x3f800000,0);
    }
    if ((*param_2 >> 3 & 1) != 0) {
      local_70 = DAT_1469ea0d8;
      local_68 = DAT_1469ea0e0;
      local_60 = DAT_1469ea0e8;
      if (DAT_1469ea0e8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea0e8 + 8) = *(int *)(DAT_1469ea0e8 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                (*(longlong **)(param_1 + 0x58),param_1 + 8,0,&local_70,0,0x3f800000,0);
    }
    if ((*param_2 & 1) != 0) {
      local_58 = DAT_1469ea090;
      local_50 = DAT_1469ea098;
      local_48 = DAT_1469ea0a0;
      if (DAT_1469ea0a0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea0a0 + 8) = *(int *)(DAT_1469ea0a0 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                (*(longlong **)(param_1 + 0x58),param_1 + 8,0,&local_58,0,0x3f800000,0);
    }
    if ((*param_2 >> 1 & 1) != 0) {
      local_40 = DAT_1469ea0a8;
      local_38 = DAT_1469ea0b0;
      local_30 = DAT_1469ea0b8;
      if (DAT_1469ea0b8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea0b8 + 8) = *(int *)(DAT_1469ea0b8 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                (*(longlong **)(param_1 + 0x58),param_1 + 8,0,&local_40,0,0x3f800000,0);
    }
  }
  return;
}



// FUNCTION 1427f5ae0 BeginDestroy body=79 status=ok
// SIG undefined BeginDestroy(void)

void USoundClass::BeginDestroy(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1417502d0();
  if ((DAT_1468c2185 == '\0') && (DAT_146b17150 != 0)) {
    lVar1 = FUN_1428742d0();
    if (lVar1 != 0) {
      uVar2 = FUN_1428742d0(DAT_146b17150);
      FUN_1422fafd0(uVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1427f5b30 BeginDestroy body=64 status=ok
// SIG undefined BeginDestroy(void)

void USoundMix::BeginDestroy(undefined8 param_1)

{
  longlong lVar1;
  
  if ((DAT_1468c2185 == '\0') && (DAT_146b17150 != 0)) {
    lVar1 = FUN_1428742d0();
    if (lVar1 != 0) {
      FUN_1422f7f40(lVar1,param_1);
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1427f5b70 FUN_1427f5b70 body=27 status=ok
// SIG undefined FUN_1427f5b70(void)

void FUN_1427f5b70(longlong param_1)

{
  FUN_1417502d0();
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 8;
  return;
}



// FUNCTION 1427f5b90 PostLoad body=58 status=ok
// SIG undefined PostLoad(void)

void USoundSubmix::PostLoad(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_1417502d0();
  if (DAT_146b17150 != 0) {
    lVar1 = FUN_1428742d0();
    if (lVar1 != 0) {
      FUN_1422fb050(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1427f5bd0 FUN_1427f5bd0 body=830 status=ok
// SIG undefined FUN_1427f5bd0(void)

void FUN_1427f5bd0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  
  if ((*(char *)(param_1 + 0x2f3) == '\0') && (*(char *)(param_1 + 0x2f4) == '\0')) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      (**(code **)(*DAT_146ab6358 + 0x348))(DAT_146ab6358,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x350,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      local_res20 = *(longlong *)(param_1 + 0x350);
      uVar1 = *(undefined4 *)(local_res20 + 100);
      uVar2 = *(undefined4 *)(local_res20 + 0x60);
      if (local_res20 != 0) {
        LOCK();
        *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
        UNLOCK();
      }
      lVar3 = *(longlong *)(param_1 + 0x358);
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar3 + 8);
      *(undefined4 *)(lVar3 + 0x40) = uVar2;
      *(undefined4 *)(lVar3 + 0x44) = uVar1;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
      cVar5 = FUN_141a90f50();
      if (cVar5 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x350))
                  (DAT_146ab6358,local_res18,*(undefined8 *)(param_1 + 0xb8));
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x138,local_res18);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
        local_40 = *(undefined8 *)(param_1 + 0x138);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        local_38 = 0;
        local_34 = 0xffffffff;
        local_30 = 0x102;
        local_50 = 0;
        uStack_48 = 0;
        puVar6 = puVar7 + 7;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 7;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar7;
        *(undefined8 **)(param_2 + 8) = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_1451b1678;
        puVar7[2] = local_40;
        *(undefined4 *)(puVar7 + 3) = local_38;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = local_34;
        *(undefined1 *)(puVar7 + 4) = (undefined1)local_30;
        *(undefined1 *)((longlong)puVar7 + 0x21) = local_30._1_1_;
        *(undefined4 *)(puVar7 + 5) = (undefined4)local_50;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = local_50._4_4_;
        *(undefined4 *)(puVar7 + 6) = (undefined4)uStack_48;
        *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_48._4_4_;
        uVar4 = *(undefined8 *)(param_1 + 0x138);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 1;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 1;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *puVar7 = uVar4;
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar8 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar8;
        *(undefined8 **)(param_2 + 8) = puVar8 + 1;
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar8 + 2) = 1;
        puVar8[3] = puVar7;
        *(undefined4 *)(puVar8 + 4) = 0;
        *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
      }
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x350);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = uVar4;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_58 = 0;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = puVar7;
    *(undefined4 *)(puVar8 + 4) = 1;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
    FUN_141a19150(param_2,*(undefined8 *)(param_1 + 0x350),0,1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  }
  return;
}



// FUNCTION 1427f5f10 FUN_1427f5f10 body=783 status=ok
// SIG undefined FUN_1427f5f10(void)

void FUN_1427f5f10(longlong param_1,int *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  DWORD DVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_res20 [8];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if ((0 < param_2[2] - *param_2) && (0 < param_2[3] - param_2[1])) {
    plVar10 = (longlong *)0x0;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      local_50 = *(undefined8 *)(param_1 + 8);
      local_48 = *(longlong **)(param_1 + 0x10);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      local_40 = *param_2;
      iStack_3c = param_2[1];
      iStack_38 = param_2[2];
      iStack_34 = param_2[3];
      local_58 = param_1;
      FUN_1427f9380(&local_58,2,local_res20);
      plVar10 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_48 + 1;
        lVar13 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
    else {
      pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar9 = TlsGetValue(*pDVar8);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)operator_new(0x18);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          plVar9[1] = 0;
          *(undefined4 *)(plVar9 + 2) = 0;
          plVar10 = plVar9;
        }
        TlsSetValue(*pDVar8,plVar10);
        plVar9 = plVar10;
      }
      plVar10 = (longlong *)plVar9[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar9;
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
          plVar9[1] = (longlong)plVar10;
          if (plVar10 == (longlong *)0x0) {
            puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar9[1] = (longlong)puVar11;
            lVar13 = 0x1f;
            do {
              puVar2 = puVar11 + 0x20;
              *puVar11 = puVar2;
              lVar13 = lVar13 + -1;
              puVar11 = puVar2;
            } while (lVar13 != 0);
            *puVar2 = 0;
            plVar10 = (longlong *)plVar9[1];
          }
          iVar12 = 0x20;
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
        else {
          iVar12 = 0x20;
          plVar9[1] = (longlong)plVar10;
          *(undefined4 *)(plVar9 + 2) = 0x20;
          *plVar9 = 0;
        }
      }
      else {
        iVar12 = (int)plVar9[2];
      }
      plVar9[1] = *plVar10;
      *(int *)(plVar9 + 2) = iVar12 + -1;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar10 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_1451b2868;
      *(undefined1 *)(plVar10 + 7) = 0;
      plVar10[8] = 0;
      plVar10[2] = param_1;
      plVar10[3] = *(longlong *)(param_1 + 8);
      lVar13 = *(longlong *)(param_1 + 0x10);
      plVar10[4] = lVar13;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      iVar12 = *param_2;
      iVar3 = param_2[1];
      iVar4 = param_2[2];
      iVar5 = param_2[3];
      *(int *)(plVar10 + 5) = iVar12;
      *(int *)((longlong)plVar10 + 0x2c) = iVar3;
      *(int *)(plVar10 + 6) = iVar4;
      *(int *)((longlong)plVar10 + 0x34) = iVar5;
      lVar13 = plVar10[8];
      piVar1 = (int *)(lVar13 + 0x48);
      if (lVar13 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a8b0(iVar12,0,0xff,1,0,0);
      if (lVar13 != 0) {
        LOCK();
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FGraphEvent::Recycle(lVar13);
        }
      }
    }
    local_60 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 8) != &local_68) {
      *(undefined8 *)(param_1 + 8) = 0;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_60);
      plVar10 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        lVar13 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1427f6220 FUN_1427f6220 body=230 status=ok
// SIG undefined FUN_1427f6220(void)

void FUN_1427f6220(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1417510e0();
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x290))();
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    if (*(float *)(param_1 + 0x54) == 0.0) {
      fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x280))();
      *(float *)(param_1 + 0x54) = fVar3;
      if (fVar3 == 0.0) {
        if (*(longlong *)(param_1 + 0x60) == 0) {
          uVar2 = 0x4a000000;
        }
        else {
          uVar2 = FBaseAttenuationSettings::GetMaxDimension(*(longlong *)(param_1 + 0x60) + 0x28);
        }
        *(undefined4 *)(param_1 + 0x54) = uVar2;
      }
    }
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x298))();
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xef;
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | (bVar1 & 1) << 4;
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x2a0))();
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xdf;
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | (bVar1 & 1) << 5;
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x2a8))();
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xbf;
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | (bVar1 & 1) << 6;
  }
  return;
}



// FUNCTION 1427f6330 Call body=40 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_9c06637b1758a97f646615c9da4750e6>,void___cdecl(USoundWave_const_*)>
     ::Call(longlong *param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  if (0 < *(int *)(*param_1 + 0x68)) {
    local_res8[0] = *param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*param_1 + 0x60,local_res8);
  }
  return;
}



// FUNCTION 1427f6380 Call body=41 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_7f14138a3de325c41a357493aaf120e1>,void___cdecl(void)>::Call
               (longlong *param_1)

{
  undefined8 local_res8 [4];
  
  if (0 < *(int *)(*param_1 + 0x68)) {
    local_res8[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*param_1 + 0x60,local_res8);
  }
  return;
}



// FUNCTION 1427f63b0 FUN_1427f63b0 body=260 status=ok
// SIG undefined FUN_1427f63b0(void)

void FUN_1427f63b0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 == '\0') {
    FUN_1406a1ac0(param_1 + 0x160);
    return;
  }
  local_18 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 0x2d8);
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar6 = iVar4 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = local_18, !bVar6) {
      LOCK();
      bVar6 = iVar4 == (int)plVar2[1];
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar6) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          local_18 = *(longlong **)(param_1 + 0x2d0);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_10 = plVar5;
  FUN_14048f0a0(param_1 + 0x160,&local_18);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 1427f64c0 ChooseNodeIndex body=225 status=ok
// SIG undefined ChooseNodeIndex(void)

int USoundNodeRandom::ChooseNodeIndex(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    lVar2 = 0;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x40);
    do {
      if (((*(uint *)(param_1 + 0x50) & 1) == 0) ||
         (*(char *)(lVar2 + *(longlong *)(param_1 + 0x58)) == '\0')) {
        fVar5 = fVar5 + *(float *)(*(longlong *)(param_1 + 0x38) + lVar2 * 4);
      }
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  iVar1 = rand();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar2 = 0;
    do {
      if (*(int *)(param_1 + 0x40) <= lVar2) {
        return 0;
      }
      if ((((*(byte *)(param_1 + 0x50) & 1) == 0) ||
          (*(char *)(lVar2 + *(longlong *)(param_1 + 0x58)) == '\0')) &&
         (fVar6 = fVar6 + *(float *)(*(longlong *)(param_1 + 0x38) + lVar2 * 4),
         (float)iVar1 * 3.051851e-05 * fVar5 < fVar6)) {
        *(undefined1 *)((longlong)iVar4 + *(longlong *)(param_1 + 0x58)) = 1;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  return 0;
}



// FUNCTION 1427f65b0 Cleanup body=71 status=ok
// SIG undefined Cleanup(void)

void FSlateTexture2DRHIRef::Cleanup(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x10;
  if (param_1 == 0x10) {
    lVar1 = 0;
  }
  FUN_141edf360(lVar1);
  lVar1 = param_1 + 8;
  if (param_1 == 0x10) {
    lVar1 = 0;
  }
  BeginCleanup(lVar1);
  return;
}



// FUNCTION 1427f6600 CleanupDecompressor body=251 status=ok
// SIG undefined CleanupDecompressor(void)

undefined8 USoundWave::CleanupDecompressor(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    return 1;
  }
  LOCK();
  bVar4 = *(int *)(lVar3 + 0x18) == 0;
  if (bVar4) {
    *(int *)(lVar3 + 0x18) = 0;
  }
  UNLOCK();
  if (bVar4) {
LAB_1427f668f:
    if (*(longlong *)(lVar3 + 0x28) == 0) goto LAB_1427f66ae;
    (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x20))(*(longlong **)(lVar3 + 0x20),0xffffffff,0);
  }
  else {
    if (param_2 == '\0') {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    plVar1 = *(longlong **)(lVar3 + 0x28);
    if (plVar1 == (longlong *)0x0) {
      LOCK();
      bVar4 = *(int *)(lVar3 + 0x18) == 0;
      if (bVar4) {
        *(int *)(lVar3 + 0x18) = 0;
      }
      UNLOCK();
      if (!bVar4) {
        FUN_1422c66d0(lVar3 + 8);
        LOCK();
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + -1;
        UNLOCK();
      }
      goto LAB_1427f668f;
    }
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
    if (cVar2 == '\0') goto LAB_1427f668f;
    FUN_1422c66d0(lVar3 + 8);
    LOCK();
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + -1;
    UNLOCK();
    if (*(longlong **)(lVar3 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x10))();
    }
  }
  *(undefined8 *)(lVar3 + 0x28) = 0;
LAB_1427f66ae:
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0xb8) = 2;
  UNLOCK();
  return 1;
}



// FUNCTION 1427f6710 FUN_1427f6710 body=506 status=ok
// SIG undefined FUN_1427f6710(void)

void FUN_1427f6710(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 local_48;
  longlong *plStack_40;
  int local_38;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  
  SCanvas::ClearChildren(param_1[0x18]);
  if ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74)) {
    do {
      iVar3 = (int)param_1[0xd];
      local_38 = 0;
      iStack_24 = 0;
      iStack_20 = 0;
      if (iVar3 != 0) {
        puVar10 = (uint *)param_1[0xc];
        if ((uint *)param_1[0xc] == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 10);
        }
        uVar6 = *puVar10;
        while (uVar6 == 0) {
          lVar9 = (longlong)local_38;
          iStack_20 = iStack_20 + 0x20;
          iVar7 = local_38 + 1;
          bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_38;
          local_38 = iVar7;
          if (bVar5) goto LAB_1427f6807;
          uVar6 = puVar10[lVar9 + 1];
        }
        uVar6 = -uVar6 & uVar6;
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar6 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        iStack_24 = (iStack_20 - iVar7) + 0x1f;
        if (iVar3 < iStack_24) {
LAB_1427f6807:
          iStack_24 = iVar3;
        }
      }
      local_28 = 0xffffffff;
      lVar8 = (longlong)iStack_24 * 0x20;
      plVar4 = *(longlong **)(lVar8 + 0x10 + param_1[8]);
      lVar9 = *(longlong *)(lVar8 + 8 + param_1[8]);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x20) = 0;
      }
      TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 8,*(undefined8 *)(lVar8 + param_1[8]));
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
    } while ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74));
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x58))(param_1,&local_48,0,0,0,0);
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
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



// FUNCTION 1427f6910 FUN_1427f6910 body=151 status=ok
// SIG undefined FUN_1427f6910(void)

void FUN_1427f6910(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x40),local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x40), lVar5 == 0)) {
    lVar4 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar5 + 8);
    plVar6 = *(longlong **)(lVar5 + 0x10);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
  if (lVar4 != 0) {
    FUN_141804f50(*(undefined8 *)(lVar4 + 0x10));
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



// FUNCTION 1427f69c0 FUN_1427f69c0 body=7810 status=ok
// SIG undefined FUN_1427f69c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427f69c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong **pplVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_1678 [32];
  ulonglong local_1658;
  ulonglong local_1650;
  undefined4 local_1648;
  longlong local_1640;
  longlong local_1638;
  longlong local_1630;
  undefined1 local_1628;
  undefined1 local_1620;
  longlong local_1618;
  undefined1 local_1608;
  undefined1 local_1607;
  undefined1 local_1606;
  undefined1 local_1605;
  undefined1 local_1604;
  undefined1 local_1603;
  undefined1 local_1602;
  undefined1 local_1601;
  undefined1 local_1600;
  undefined1 local_15ff;
  undefined1 local_15fe;
  undefined1 local_15fd [5];
  longlong local_15f8;
  int local_15f0;
  longlong local_15e8;
  longlong local_15e0;
  longlong *local_15d8;
  undefined8 local_15c8;
  undefined4 uStack_15c0;
  undefined4 uStack_15bc;
  longlong *local_15b8;
  longlong *local_15b0;
  longlong *local_15a8;
  longlong *plStack_15a0;
  longlong *local_1598;
  longlong *local_1590;
  longlong *local_1588;
  longlong *local_1580;
  undefined8 local_1578;
  longlong *plStack_1570;
  longlong *local_1568;
  longlong *plStack_1560;
  undefined8 local_1558;
  longlong *local_1550;
  longlong local_1548;
  longlong *local_1540;
  int local_1538;
  undefined4 local_1530;
  undefined1 local_152c;
  undefined8 local_1528;
  undefined4 local_1520;
  undefined4 local_1518;
  undefined1 local_1514;
  undefined8 local_1510;
  undefined4 local_1508;
  undefined8 *local_1500;
  undefined8 *local_14f8;
  undefined1 *local_14f0;
  undefined8 *local_14e8;
  undefined8 *local_14e0;
  undefined1 *local_14d8;
  undefined8 *local_14d0;
  undefined8 *local_14c8;
  undefined1 *local_14c0;
  undefined8 *local_14b8;
  undefined8 *local_14b0;
  undefined1 *local_14a8;
  longlong local_14a0;
  longlong local_1498;
  undefined1 *local_1490;
  longlong *local_1488;
  longlong *local_1480;
  longlong *local_1478;
  undefined1 *local_1470;
  longlong local_1468;
  longlong local_1460;
  undefined1 *local_1458;
  longlong *local_1450;
  longlong *local_1448;
  undefined1 *local_1440;
  longlong *local_1438;
  longlong *local_1430;
  undefined1 *local_1428;
  longlong *local_1420;
  longlong *local_1418;
  undefined1 *local_1410;
  longlong *local_1408;
  longlong *local_1400;
  undefined1 *local_13f8;
  longlong *local_13f0;
  longlong *local_13e8;
  undefined1 *local_13e0;
  longlong local_13d8;
  longlong *local_13d0;
  undefined8 local_13c8;
  longlong local_13c0;
  undefined8 local_13b8;
  longlong *plStack_13b0;
  longlong *local_13a8;
  longlong *local_13a0;
  longlong *local_1398;
  longlong *local_1390;
  longlong *local_1388;
  longlong *local_1380;
  undefined8 local_1378;
  longlong local_1370;
  undefined8 local_1368;
  longlong local_1360;
  longlong *local_1358;
  longlong *local_1350;
  undefined8 local_1348;
  longlong local_1340;
  undefined8 local_1338;
  longlong local_1330;
  longlong local_1328;
  longlong *local_1320;
  undefined1 local_1318 [8];
  longlong *local_1310;
  undefined1 local_1308 [8];
  longlong *local_1300;
  undefined1 local_12f8 [8];
  longlong *local_12f0;
  undefined1 local_12e8 [8];
  longlong *local_12e0;
  undefined4 local_12d8;
  undefined4 uStack_12d4;
  undefined4 uStack_12d0;
  undefined4 uStack_12cc;
  undefined1 local_12c8 [16];
  undefined1 local_12b8 [8];
  longlong *local_12b0;
  undefined1 local_12a8 [8];
  longlong *local_12a0;
  undefined4 local_1298;
  undefined4 uStack_1294;
  undefined4 uStack_1290;
  undefined4 uStack_128c;
  undefined4 local_1288;
  undefined4 uStack_1284;
  undefined4 uStack_1280;
  undefined4 uStack_127c;
  undefined4 local_1278;
  undefined4 uStack_1274;
  undefined4 uStack_1270;
  undefined4 uStack_126c;
  undefined1 local_1268 [8];
  longlong *local_1260;
  longlong *local_1258;
  longlong *local_1250;
  undefined1 local_1240 [16];
  undefined1 local_1230 [16];
  longlong *local_1220;
  longlong *plStack_1218;
  undefined8 local_1210;
  longlong *plStack_1208;
  longlong *local_1200;
  longlong *plStack_11f8;
  undefined1 local_11e8 [272];
  undefined1 local_10d8 [16];
  undefined1 local_10c8 [16];
  undefined1 local_10b8 [264];
  longlong local_fb0;
  undefined1 local_f98 [264];
  longlong local_e90;
  undefined1 local_e78 [264];
  longlong local_d70;
  undefined1 local_d58 [264];
  longlong local_c50;
  undefined1 local_c38 [264];
  undefined1 local_b30 [24];
  undefined1 local_b18 [264];
  undefined1 local_a10 [24];
  undefined1 local_9f8 [264];
  longlong local_8f0;
  undefined1 local_8d8 [352];
  undefined1 local_778 [352];
  undefined1 local_618 [496];
  undefined1 local_428 [496];
  undefined1 local_238 [496];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1427f69e2;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1678;
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x120);
  local_15f8 = param_2;
  local_15e0 = param_1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x390,param_2 + 0x128);
  plVar7 = (longlong *)FUN_14195ed20();
  plVar14 = plVar7 + 2;
  local_13f0 = plVar14;
  local_13e8 = plVar7;
  FUN_14044f790(&local_13f0,plVar14);
  local_13e0 = &local_1608;
  local_1658 = 0x228;
  SWidget::SetDebugInfo
            (plVar14,"STooltipPresenter",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x53);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_15b8 = plVar14;
  local_15b0 = plVar7;
  if ((longlong **)(param_1 + 0x3c0) != &local_15b8) {
    *(longlong **)(param_1 + 0x3c0) = plVar14;
    local_15b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3c8,&local_15b0);
  }
  plVar10 = local_15b0;
  if (local_15b0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_15b0 + 1;
    lVar8 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_15b0)(local_15b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_15b0 + 8))(local_15b0,1);
      }
    }
  }
  lVar8 = FUN_141960030(local_b18);
  local_1648 = *(undefined4 *)(lVar8 + 0x90);
  local_1618 = lVar8 + 0xf8;
  local_1630 = lVar8 + 0xe8;
  local_1620 = *(undefined1 *)(lVar8 + 0xf1);
  local_1638 = lVar8 + 200;
  local_1640 = lVar8 + 0x98;
  local_1628 = *(undefined1 *)(lVar8 + 0xf0);
  local_1650 = lVar8 + 0x78;
  local_1658 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141978a70(plVar14,lVar8);
  if (((char)plVar7[5] < '\0') || (cVar4 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  lVar8 = FUN_141887340(local_c38);
  pplVar9 = (longlong **)(lVar8 + 0x108);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_15a8 = plVar14;
  plStack_15a0 = plVar7;
  if (&local_15a8 != pplVar9) {
    local_15a8 = *pplVar9;
    plStack_15a0 = *(longlong **)(lVar8 + 0x110);
    *pplVar9 = plVar14;
    *(longlong **)(lVar8 + 0x110) = plVar7;
    local_1220 = plVar14;
    plStack_1218 = plVar7;
  }
  plVar14 = plStack_15a0;
  if (plStack_15a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_15a0 + 1;
    lVar18 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_15a0)(plStack_15a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_15a0 + 8))(plStack_15a0,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar7 + 1;
    lVar18 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar10 = (longlong *)FUN_141880f10();
  plVar14 = plVar10 + 2;
  local_1488 = plVar10;
  local_1408 = plVar14;
  local_1400 = plVar10;
  FUN_14044f790(&local_1408,plVar14);
  local_13f8 = &local_1607;
  local_1658 = 0x2f0;
  SWidget::SetDebugInfo
            (plVar14,"SPopup",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x51);
  local_1648 = *(undefined4 *)(lVar8 + 0x90);
  local_1618 = lVar8 + 0xf8;
  local_1630 = lVar8 + 0xe8;
  local_1620 = *(undefined1 *)(lVar8 + 0xf1);
  local_1638 = lVar8 + 200;
  local_1640 = lVar8 + 0x98;
  local_1628 = *(undefined1 *)(lVar8 + 0xf0);
  local_1650 = lVar8 + 0x78;
  local_1658 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_1419758e0(plVar14,lVar8);
  if (((char)plVar10[5] < '\0') || (cVar4 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar5;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_1388 = plVar14;
  local_1380 = plVar10;
  local_14b0 = (undefined8 *)operator_new(800);
  if (local_14b0 != (undefined8 *)0x0) {
    *(undefined4 *)(local_14b0 + 1) = 1;
    *(undefined4 *)((longlong)local_14b0 + 0xc) = 1;
    *local_14b0 = &PTR_FUN_144044b78;
    if (local_14b0 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  local_14b8 = local_14b0 + 2;
  FUN_14044f790(&local_14b8);
  local_14a8 = &local_1606;
  local_1658 = 0x310;
  SWidget::SetDebugInfo
            (local_14b8,&DAT_1451afe60,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x4a);
  uVar11 = FUN_14068f180(local_428);
  uVar12 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_14b8,param_1 + 0x400);
  puVar13 = (undefined8 *)FUN_14188dd80(uVar12,local_12e8,uVar11);
  local_1338 = *puVar13;
  local_1330 = puVar13[1];
  if (local_1330 != 0) {
    LOCK();
    *(int *)(local_1330 + 8) = *(int *)(local_1330 + 8) + 1;
    UNLOCK();
  }
  local_14c8 = (undefined8 *)operator_new(0x2e0);
  if (local_14c8 != (undefined8 *)0x0) {
    *(undefined4 *)(local_14c8 + 1) = 1;
    *(undefined4 *)((longlong)local_14c8 + 0xc) = 1;
    *local_14c8 = &PTR_FUN_144fb24b8;
    if (local_14c8 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419624e0();
    }
  }
  local_14d0 = local_14c8 + 2;
  FUN_14044f790(&local_14d0);
  local_14c0 = &local_1605;
  local_1658 = 0x2d0;
  SWidget::SetDebugInfo
            (local_14d0,"SWindowTitleBarArea",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x48);
  uVar11 = FUN_1420ce430(local_778);
  uVar11 = FUN_140692660(uVar11,&local_1338);
  uVar12 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_14d0,param_1 + 0x3d0);
  puVar13 = (undefined8 *)FUN_1427f2c80(uVar12,local_12f8,uVar11);
  local_1348 = *puVar13;
  local_1340 = puVar13[1];
  if (local_1340 != 0) {
    LOCK();
    *(int *)(local_1340 + 8) = *(int *)(local_1340 + 8) + 1;
    UNLOCK();
  }
  uVar11 = FUN_1418c41f0();
  uVar11 = SVerticalBox::FSlot::AutoHeight(uVar11);
  uVar11 = FUN_1417f9c30(uVar11,&local_1348);
  lVar8 = SCanvas::FArguments::FArguments(local_d58);
  iVar6 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar6 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x108,iVar6);
  }
  *(undefined8 *)(*(longlong *)(lVar8 + 0x108) + (longlong)iVar6 * 8) = uVar11;
  plVar14 = (longlong *)operator_new(0x248);
  if (plVar14 != (longlong *)0x0) {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  plVar10 = plVar14 + 2;
  local_1420 = plVar10;
  local_1418 = plVar14;
  FUN_14044f790(&local_1420,plVar10);
  local_1410 = &local_1604;
  local_1658 = 0x238;
  SWidget::SetDebugInfo
            (plVar10,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x43);
  local_1648 = *(undefined4 *)(lVar8 + 0x90);
  local_1618 = lVar8 + 0xf8;
  local_1630 = lVar8 + 0xe8;
  local_1620 = *(undefined1 *)(lVar8 + 0xf1);
  local_1638 = lVar8 + 200;
  local_1640 = lVar8 + 0x98;
  local_1628 = *(undefined1 *)(lVar8 + 0xf0);
  local_1650 = lVar8 + 0x78;
  local_1658 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar10,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SHorizontalBox::Construct(plVar10,lVar8);
  if (((char)plVar14[5] < '\0') || (cVar4 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar5;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_1398 = plVar10;
  local_1390 = plVar14;
  plVar10 = (longlong *)operator_new(0x240);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144044b28;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      FUN_141961a40();
    }
  }
  plVar16 = plVar10 + 2;
  local_1438 = plVar16;
  local_1430 = plVar10;
  FUN_14044f790(&local_1438,plVar16);
  local_1428 = &local_1603;
  local_1658 = 0x230;
  SWidget::SetDebugInfo
            (plVar16,"SCanvas",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x39);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_1598 = plVar16;
  local_1590 = plVar10;
  if ((longlong **)(local_15e0 + 0x3b0) != &local_1598) {
    *(longlong **)(local_15e0 + 0x3b0) = plVar16;
    local_1598 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_15e0 + 0x3b8,&local_1590);
  }
  plVar16 = local_1590;
  if (local_1590 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1590 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1590)(local_1590);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1590 + 8))(local_1590,1);
      }
    }
  }
  lVar8 = SCanvas::FArguments::FArguments(local_e78);
  local_1648 = *(undefined4 *)(lVar8 + 0x90);
  local_1618 = lVar8 + 0xf8;
  local_1630 = lVar8 + 0xe8;
  local_1620 = *(undefined1 *)(lVar8 + 0xf1);
  local_1650 = lVar8 + 0x78;
  local_1638 = lVar8 + 200;
  local_1628 = *(undefined1 *)(lVar8 + 0xf0);
  local_1640 = lVar8 + 0x98;
  local_1658 = lVar8 + 0x60;
  plVar16 = plVar10 + 2;
  SWidget::SWidgetConstruct(plVar16,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SOverlay::Construct(plVar16,lVar8);
  if (((char)plVar10[5] < '\0') || (cVar4 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar5;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_15c8 = FUN_1427fcea0;
  uStack_15c0 = 0;
  local_13a8 = plVar16;
  local_13a0 = plVar10;
  puVar13 = (undefined8 *)operator_new(0x50);
  if (puVar13 == (undefined8 *)0x0) {
    local_15d8 = (undefined8 *)0x0;
  }
  else {
    local_15d8 = puVar13;
    FSlotBase::FSlotBase(puVar13);
    *puVar13 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar13 + 4) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x24) = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    *(undefined1 *)(puVar13 + 7) = 1;
    puVar13[8] = 0;
    *(undefined4 *)(puVar13 + 9) = 0;
  }
  puVar19 = (undefined8 *)0x0;
  puVar15 = (undefined8 *)operator_new(0x50);
  puVar13 = puVar19;
  if (puVar15 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar15);
    *(undefined4 *)(puVar15 + 4) = 0;
    *puVar15 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar15 + 0x24) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    *(undefined1 *)(puVar15 + 7) = 1;
    puVar15[8] = 0;
    *(undefined4 *)(puVar15 + 9) = 0;
    puVar13 = puVar15;
  }
  puVar15 = (undefined8 *)operator_new(0x50);
  if (puVar15 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar15);
    *(undefined4 *)(puVar15 + 4) = 0;
    *puVar15 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar15 + 0x24) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    *(undefined1 *)(puVar15 + 7) = 1;
    puVar15[8] = 0;
    *(undefined4 *)(puVar15 + 9) = 0;
    puVar19 = puVar15;
  }
  puVar15 = (undefined8 *)operator_new(0x50);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    FSlotBase::FSlotBase(puVar15);
    *puVar15 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar15 + 4) = 0;
    *(undefined2 *)((longlong)puVar15 + 0x24) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    *(undefined1 *)(puVar15 + 7) = 1;
    puVar15[8] = 0;
    *(undefined4 *)(puVar15 + 9) = 0;
  }
  local_1548 = FUN_140801a00(puVar15,&local_13a8);
  lVar8 = SOverlay::FArguments::FArguments(local_f98);
  plVar16 = (longlong *)(lVar8 + 0x108);
  local_15f0 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = local_15f0 + 1;
  local_15e8 = lVar8;
  if (*(int *)(lVar8 + 0x114) < local_15f0 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,local_15f0);
  }
  *(longlong *)(*plVar16 + (longlong)local_15f0 * 8) = local_1548;
  local_15f8 = FUN_140801a00(puVar19,local_15f8 + 0x108);
  iVar6 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar6 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar6);
  }
  *(longlong *)(*plVar16 + (longlong)iVar6 * 8) = local_15f8;
  uVar11 = FUN_140801a00(puVar13,&local_1398);
  iVar6 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar6 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar6);
  }
  *(undefined8 *)(*plVar16 + (longlong)iVar6 * 8) = uVar11;
  uVar11 = FUN_140801a00(local_15d8,&local_1388);
  iVar6 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar6 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar6);
  }
  *(undefined8 *)(*plVar16 + (longlong)iVar6 * 8) = uVar11;
  plVar16 = (longlong *)operator_new(0x240);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
    local_15d8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_1440f90d0;
    local_15d8 = plVar16;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar2 = plVar16 + 2;
  local_1450 = plVar2;
  local_1448 = plVar16;
  FUN_14044f790(&local_1450,plVar2);
  local_1440 = &local_1602;
  local_1658 = 0x230;
  SWidget::SetDebugInfo
            (plVar2,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x35);
  local_1618 = local_15e8 + 0xf8;
  local_1630 = local_15e8 + 0xe8;
  local_1638 = local_15e8 + 200;
  local_1640 = local_15e8 + 0x98;
  local_1650 = local_15e8 + 0x78;
  local_1658 = local_15e8 + 0x60;
  local_1620 = *(undefined1 *)(local_15e8 + 0xf1);
  local_1628 = *(undefined1 *)(local_15e8 + 0xf0);
  local_1648 = *(undefined4 *)(local_15e8 + 0x90);
  SWidget::SWidgetConstruct(plVar2,local_15e8,local_15e8 + 0x30,local_15e8 + 0x40);
  SOverlay::Construct(plVar2,local_15e8);
  if (((char)plVar16[5] < '\0') || (cVar4 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar5;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1358 = plVar2;
  local_1350 = plVar16;
  local_14e0 = (undefined8 *)operator_new(800);
  if (local_14e0 == (undefined8 *)0x0) {
    local_14e0 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(local_14e0 + 1) = 1;
    *(undefined4 *)((longlong)local_14e0 + 0xc) = 1;
    *local_14e0 = &PTR_FUN_144044b78;
    if (local_14e0 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  local_14e8 = local_14e0 + 2;
  FUN_14044f790(&local_14e8);
  local_14d8 = &local_1601;
  local_1658 = 0x310;
  SWidget::SetDebugInfo
            (local_14e8,&DAT_1451af214,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x2f);
  uVar11 = FUN_14068f180(local_618);
  lVar8 = local_15e0;
  uVar12 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_14e8,local_15e0 + 0x3f0);
  puVar13 = (undefined8 *)FUN_14188dd80(uVar12,local_1308,uVar11);
  local_1378 = *puVar13;
  local_1370 = puVar13[1];
  if (local_1370 != 0) {
    LOCK();
    *(int *)(local_1370 + 8) = *(int *)(local_1370 + 8) + 1;
    UNLOCK();
  }
  local_14f8 = (undefined8 *)operator_new(0x2e0);
  if (local_14f8 == (undefined8 *)0x0) {
    local_14f8 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(local_14f8 + 1) = 1;
    *(undefined4 *)((longlong)local_14f8 + 0xc) = 1;
    *local_14f8 = &PTR_FUN_144fb24b8;
    if (local_14f8 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419624e0();
    }
  }
  local_1500 = local_14f8 + 2;
  FUN_14044f790(&local_1500);
  local_14f0 = &local_1600;
  local_1658 = 0x2d0;
  SWidget::SetDebugInfo
            (local_1500,"SWindowTitleBarArea",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x2d);
  uVar11 = FUN_1420ce430(local_8d8);
  uVar11 = FUN_140692660(uVar11,&local_1378);
  uVar12 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_1500,lVar8 + 0x3e0);
  puVar13 = (undefined8 *)FUN_1427f2c80(uVar12,local_1318,uVar11);
  local_1368 = *puVar13;
  local_1360 = puVar13[1];
  if (local_1360 != 0) {
    LOCK();
    *(int *)(local_1360 + 8) = *(int *)(local_1360 + 8) + 1;
    UNLOCK();
  }
  uVar11 = FUN_1418c41f0();
  uVar11 = SVerticalBox::FSlot::AutoHeight(uVar11);
  uVar11 = FUN_1417f9c30(uVar11,&local_1368);
  lVar8 = SCanvas::FArguments::FArguments(local_10b8);
  plVar16 = (longlong *)(lVar8 + 0x108);
  iVar6 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar6 + 1;
  local_15f8 = lVar8;
  if (*(int *)(lVar8 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar6);
  }
  *(undefined8 *)(*plVar16 + (longlong)iVar6 * 8) = uVar11;
  uVar11 = FUN_1418c41f0();
  uVar11 = FUN_1417f9c30(uVar11,&local_1358);
  iVar6 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar6 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar6);
  }
  *(undefined8 *)(*plVar16 + (longlong)iVar6 * 8) = uVar11;
  plVar16 = (longlong *)operator_new(0x248);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  plVar2 = plVar16 + 2;
  local_1480 = plVar2;
  local_1478 = plVar16;
  FUN_14044f790(&local_1480,plVar2);
  local_1470 = &local_15ff;
  local_1658 = 0x238;
  SWidget::SetDebugInfo
            (plVar2,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x28);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1588 = plVar2;
  local_1580 = plVar16;
  if ((longlong **)(local_15e0 + 0x3a0) != &local_1588) {
    *(longlong **)(local_15e0 + 0x3a0) = plVar2;
    local_1588 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_15e0 + 0x3a8,&local_1580);
  }
  plVar16 = local_1580;
  if (local_1580 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1580 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1580)(local_1580);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1580 + 8))(local_1580,1);
      }
    }
  }
  puVar13 = (undefined8 *)FUN_1417fd340(&local_1480,local_1268,local_15f8);
  plVar16 = (longlong *)puVar13[1];
  local_15f8 = *puVar13;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  lVar8 = FUN_14200e250(local_11e8);
  local_1278 = (undefined4)local_15c8;
  uStack_1274 = local_15c8._4_4_;
  uStack_1270 = uStack_15c0;
  uStack_126c = uStack_15bc;
  local_1548 = lVar8;
  uVar11 = FUN_1418c9fd0(&local_1540,local_15e0,&local_1278);
  local_152c = 1;
  local_1528 = 0;
  local_1520 = 0;
  local_1530 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1528,uVar11);
  *(undefined4 *)(lVar8 + 0x108) = local_1530;
  *(undefined1 *)(lVar8 + 0x10c) = local_152c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x110,&local_1528);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1528);
  if (local_1538 != 0) {
    if (local_1540 == (longlong *)0x0) goto LAB_1427f7b25;
    (**(code **)(*local_1540 + 0x28))(local_1540,0);
    if (local_1540 != (longlong *)0x0) {
      local_1540 = (longlong *)FMemory::Realloc(local_1540,0,0);
    }
    local_1538 = 0;
  }
  if (local_1540 != (longlong *)0x0) {
    FMemory::Free(local_1540);
  }
LAB_1427f7b25:
  puVar13 = (undefined8 *)(lVar8 + 0x120);
  local_1578 = local_15f8;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  plStack_1570 = plVar16;
  if (&local_1578 != puVar13) {
    local_1578 = *puVar13;
    plStack_1570 = *(longlong **)(lVar8 + 0x128);
    local_1210 = local_15f8;
    *puVar13 = local_15f8;
    *(longlong **)(lVar8 + 0x128) = plVar16;
    plStack_1208 = plVar16;
  }
  plVar2 = plStack_1570;
  if (plStack_1570 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_1570 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_1570)(plStack_1570);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1570 + 8))(plStack_1570,1);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar16 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  plVar16 = (longlong *)operator_new(0x290);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_DestroyObject_144f65c80;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      FUN_141961b00();
    }
  }
  plVar2 = plVar16 + 2;
  local_1258 = plVar2;
  local_1250 = plVar16;
  FUN_14044f790(&local_1258,plVar2);
  local_1658 = 0x280;
  SWidget::SetDebugInfo
            (plVar2,"SDPIScaler",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x24);
  local_1648 = *(undefined4 *)(local_1548 + 0x90);
  local_1618 = local_1548 + 0xf8;
  local_1630 = local_1548 + 0xe8;
  local_1620 = *(undefined1 *)(local_1548 + 0xf1);
  local_1638 = local_1548 + 200;
  local_1640 = local_1548 + 0x98;
  local_1628 = *(undefined1 *)(local_1548 + 0xf0);
  local_1650 = local_1548 + 0x78;
  local_1658 = local_1548 + 0x60;
  SWidget::SWidgetConstruct(plVar16 + 2,local_1548,local_1548 + 0x30,local_1548 + 0x40);
  SDPIScaler::Construct(plVar16 + 2);
  if (((char)plVar16[5] < '\0') ||
     (cVar4 = (**(code **)(plVar16[2] + 0x1e8))(plVar16 + 2), cVar4 != '\0')) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar5;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar16 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_10c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_10d8);
  FUN_140456c70(local_11e8);
  if (local_1260 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1260 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1260)(local_1260);
      LOCK();
      piVar1 = (int *)((longlong)local_1260 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1260 + 8))(local_1260);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1480);
  if (local_fb0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_10b8);
  if (local_1310 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1310 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1310)(local_1310);
      LOCK();
      piVar1 = (int *)((longlong)local_1310 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1310 + 8))(local_1310);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1500);
  FUN_1427f0500(local_8d8);
  if (local_1300 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1300 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1300)(local_1300);
      LOCK();
      piVar1 = (int *)((longlong)local_1300 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1300 + 8))(local_1300);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_14e8);
  FUN_140690ea0(local_618);
  plVar2 = local_15d8;
  if (local_15d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_15d8 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_15d8)(local_15d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1450);
  if (local_e90 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_f98);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
    LOCK();
    plVar2 = plVar10 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1438);
  if (local_d70 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_e78);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar14 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
    LOCK();
    plVar10 = plVar14 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1420);
  if (local_c50 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_d58);
  if (local_12f0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_12f0 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_12f0)(local_12f0);
      LOCK();
      piVar1 = (int *)((longlong)local_12f0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_12f0 + 8))(local_12f0);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_14d0);
  FUN_1427f0500(local_778);
  if (local_12e0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_12e0 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_12e0)(local_12e0);
      LOCK();
      piVar1 = (int *)((longlong)local_12e0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_12e0 + 8))(local_12e0);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_14b8);
  FUN_140690ea0(local_428);
  plVar14 = local_1488;
  if (local_1488 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1488 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1488)(local_1488);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
    LOCK();
    plVar10 = plVar14 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1408);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b30);
  FUN_140456c70(local_c38);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar7 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_13f0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_a10);
  FUN_140456c70(local_b18);
  lVar8 = local_15e0;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  pplVar9 = (longlong **)(local_15e0 + 0x228);
  plVar14 = *(longlong **)(local_15e0 + 0x230);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent(local_15e0 + 0x218);
  plVar7 = plVar16 + 2;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1568 = plVar7;
  plStack_1560 = plVar16;
  if (&local_1568 != pplVar9) {
    local_1568 = *pplVar9;
    plStack_1560 = *(longlong **)(lVar8 + 0x230);
    *pplVar9 = plVar7;
    *(longlong **)(lVar8 + 0x230) = plVar16;
    local_1200 = plVar7;
    plStack_11f8 = plVar16;
  }
  plVar7 = plStack_1560;
  if (plStack_1560 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_1560 + 1;
    lVar18 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_1560)(plStack_1560);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1560 + 8))();
      }
    }
  }
  FUN_141802340(lVar8 + 0x218);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar18 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar18 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  lVar18 = DAT_146b17150;
  if (((DAT_146b17150 != 0) && (cVar4 = FUN_1427ed710(DAT_146b17150), cVar4 != '\0')) &&
     (plVar14 = *(longlong **)(lVar18 + 0x11e8), plVar14 != (longlong *)0x0)) {
    LOCK();
    iVar6 = (int)plVar14[1];
    bVar20 = iVar6 == 0;
    if (bVar20) {
      *(int *)(plVar14 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar20) {
      LOCK();
      bVar20 = iVar6 == (int)plVar14[1];
      if (bVar20) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar20) {
        if (plVar14 != (longlong *)0x0) {
          lVar18 = *(longlong *)(lVar18 + 0x11e0);
          if (lVar18 != 0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
            local_1328 = lVar18;
            local_1320 = plVar14;
            FUN_14280feb0(*(undefined8 *)(lVar8 + 0x3d0),&local_1328);
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
            local_13d8 = lVar18;
            local_13d0 = plVar14;
            FUN_14280feb0(*(undefined8 *)(lVar8 + 0x3e0),&local_13d8);
          }
          LOCK();
          plVar7 = plVar14 + 1;
          lVar18 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
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
        break;
      }
      LOCK();
      iVar6 = (int)plVar14[1];
      bVar20 = iVar6 == 0;
      if (bVar20) {
        *(int *)(plVar14 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  local_15c8 = (code *)&LAB_1427fc660;
  uStack_15c0 = 0;
  lVar17 = FUN_14068f180(local_238);
  local_12d8 = (undefined4)local_15c8;
  uStack_12d4 = local_15c8._4_4_;
  uStack_12d0 = uStack_15c0;
  uStack_12cc = uStack_15bc;
  uVar11 = FUN_1427eba70(local_12c8,lVar8,&local_12d8);
  local_1518 = 0xbf800000;
  local_1514 = 1;
  local_1510 = 0;
  local_1508 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1510,uVar11);
  *(undefined4 *)(lVar17 + 0x160) = local_1518;
  *(undefined1 *)(lVar17 + 0x164) = local_1514;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar17 + 0x168,&local_1510);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1510);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_12c8);
  local_1460 = FUN_1418cc2a0();
  lVar18 = local_1460 + 0x10;
  local_1468 = lVar18;
  FUN_14044f790(&local_1468,lVar18);
  local_1458 = &local_15fe;
  local_1658 = 0x310;
  SWidget::SetDebugInfo
            (lVar18,&DAT_1451aff38,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x6e);
  puVar13 = (undefined8 *)FUN_14188dd80(&local_1468,local_12a8,lVar17);
  local_13c8 = *puVar13;
  local_13c0 = puVar13[1];
  if (local_13c0 != 0) {
    LOCK();
    *(int *)(local_13c0 + 8) = *(int *)(local_13c0 + 8) + 1;
    UNLOCK();
  }
  local_1498 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar18 = local_1498 + 0x10;
  local_14a0 = lVar18;
  FUN_14044f790(&local_14a0,lVar18);
  local_1490 = local_15fd;
  local_1658 = 0x238;
  SWidget::SetDebugInfo
            (lVar18,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x6a);
  uVar11 = FUN_1418c41f0();
  uVar11 = SVerticalBox::FSlot::AutoHeight(uVar11);
  uVar11 = FUN_1417f9c30(uVar11,&local_13c8);
  uVar12 = SCanvas::FArguments::FArguments(local_9f8);
  uVar11 = SOverlay::FArguments::operator+(uVar12,uVar11);
  puVar13 = (undefined8 *)FUN_1417fd340(&local_14a0,local_12b8,uVar11);
  local_1550 = (longlong *)puVar13[1];
  local_1558 = *puVar13;
  if (local_1550 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1550 + 1) = (int)local_1550[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(lVar8 + 0x428) != &local_1558) {
    *(undefined8 *)(lVar8 + 0x428) = local_1558;
    local_1558 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar8 + 0x430,&local_1550);
  }
  plVar14 = local_1550;
  if (local_1550 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1550 + 1;
    lVar18 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_1550)(local_1550);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1550 + 8))(local_1550,1);
      }
    }
  }
  if (local_12b0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_12b0 + 1;
    lVar18 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_12b0)(local_12b0);
      LOCK();
      piVar1 = (int *)((longlong)local_12b0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_12b0 + 8))(local_12b0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_14a0);
  if (local_8f0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_9f8);
  if (local_12a0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_12a0 + 1;
    lVar18 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_12a0)(local_12a0);
      LOCK();
      piVar1 = (int *)((longlong)local_12a0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_12a0 + 8))(local_12a0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1468);
  FUN_140690ea0(local_238);
  lVar18 = *(longlong *)(lVar8 + 0x3d0);
  local_15c8 = FUN_14280dfd0;
  uStack_15c0 = 0;
  local_1298 = 0x4280dfd0;
  uStack_1294 = 1;
  uStack_1290 = 0;
  uStack_128c = uStack_15bc;
  uVar11 = FUN_14044bb20(local_1240,lVar8,&local_1298);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x278,uVar11);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(uVar11);
  lVar18 = *(longlong *)(lVar8 + 0x3e0);
  local_15c8 = FUN_14280dfd0;
  uStack_15c0 = 0;
  local_1288 = 0x4280dfd0;
  uStack_1284 = 1;
  uStack_1280 = 0;
  uStack_127c = uStack_15bc;
  uVar11 = FUN_14044bb20(local_1230,lVar8,&local_1288);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x278,uVar11);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(uVar11);
  local_1650 = local_1650 & 0xffffffffffffff00;
  local_1658 = local_1658 & 0xffffffffffffff00;
  local_13b8 = 0;
  plStack_13b0 = (longlong *)0x0;
  (**(code **)(*(longlong *)(lVar8 + 0x2f0) + 0x58))((longlong *)(lVar8 + 0x2f0),&local_13b8,0,0);
  plVar14 = plStack_13b0;
  if (plStack_13b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_13b0 + 1;
    lVar18 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_13b0)(plStack_13b0);
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
  plVar14 = (longlong *)UGeneralProjectSettings::GetPrivateStaticClass();
  lVar18 = plVar14[0x1f];
  if (lVar18 == 0) {
    (**(code **)(*plVar14 + 0x368))(plVar14);
    lVar18 = plVar14[0x1f];
  }
  *(bool *)(lVar8 + 0x43c) = *(char *)(lVar18 + 0x109) != '\0';
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  return;
}



// FUNCTION 1427f8850 FUN_1427f8850 body=639 status=ok
// SIG undefined FUN_1427f8850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1427f8850(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStackX_c;
  longlong *local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *plStack_70;
  byte local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  
  local_68 = local_68 & 0xfc;
  puVar8 = (undefined8 *)0x0;
  local_e8 = &PTR__scalar_deleting_destructor__143f489a8;
  local_c8 = _DAT_1464aa6c0;
  uStack_c0 = _DAT_1464aa6c8;
  local_a8 = (longlong *)0x0;
  lStack_a0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_90 = (undefined4)DAT_1468b5d88;
  uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_84 = uStackX_c;
  local_8c = uStackX_c;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_e0 = 0x4200000042000000;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_7c = 3;
  local_88 = local_90;
  if (param_2 != 0) {
    local_f0 = (longlong *)0x0;
    lStack_a0 = param_2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_70,&local_f0,param_3,param_4,0)
    ;
    plVar4 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  local_e0 = *param_3;
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_48 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  FUN_140692440(&local_c8,&local_58);
  plVar4 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  local_7c._0_2_ = CONCAT11(param_5,(undefined1)local_7c);
  local_7c = CONCAT13(param_6,(undefined3)local_7c);
  lVar5 = operator_new(0xa8);
  puVar6 = puVar8;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_1427edd10(lVar5,&local_e8);
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_LAB_1451b9910;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = puVar6;
    puVar8 = puVar7;
  }
  *param_1 = puVar6;
  param_1[1] = puVar8;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar6,puVar6);
  plVar4 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar4 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1427f8ad0 FUN_1427f8ad0 body=688 status=ok
// SIG undefined FUN_1427f8ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1427f8ad0(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uStackX_c;
  longlong *local_100;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong *plStack_80;
  byte local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  
  local_78 = local_78 & 0xfc;
  puVar8 = (undefined8 *)0x0;
  local_d8 = _DAT_1464aa6c0;
  uStack_d0 = _DAT_1464aa6c8;
  local_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_a0 = (undefined4)DAT_1468b5d88;
  uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_94 = uStackX_c;
  local_9c = uStackX_c;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_f8 = &PTR__scalar_deleting_destructor__143f489a8;
  local_f0 = 0x42000000;
  local_ec = 0x42000000;
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_8c = 3;
  local_98 = local_a0;
  if (param_2 != (longlong *)0x0) {
    local_100 = (longlong *)0x0;
    plStack_b0 = param_2;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&plStack_80,&local_100,param_3,param_4,0);
    plVar4 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  uVar9 = (**(code **)(*param_2 + 0x2b8))(param_2);
  local_f0 = (**(code **)(*param_2 + 0x2b0))(param_2);
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = 0;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  local_ec = uVar9;
  FUN_140692440(&local_d8,&local_68);
  plVar4 = plStack_48;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  uVar9 = local_8c;
  local_8c = CONCAT13(param_5,(undefined3)local_8c);
  local_8c._0_2_ = CONCAT11((char)param_4,(char)uVar9);
  lVar5 = operator_new(0xa8);
  puVar6 = puVar8;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_1427edd10(lVar5,&local_f8);
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_LAB_1451b9910;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = puVar6;
    puVar8 = puVar7;
  }
  *param_1 = puVar6;
  param_1[1] = puVar8;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar6,puVar6);
  plVar4 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar4 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1427f8d80 FUN_1427f8d80 body=91 status=ok
// SIG undefined FUN_1427f8d80(void)

void FUN_1427f8d80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1451b9870;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1451b98b8;
  }
  return;
}



// FUNCTION 1427f8de0 CreateNewActiveSound body=173 status=ok
// SIG undefined CreateNewActiveSound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FSoundConcurrencyManager::CreateNewActiveSound(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_142233c00(param_2);
  if (lVar2 == 0) {
    lVar2 = operator_new();
    if (lVar2 != 0) {
      lVar2 = FActiveSound::FActiveSound(lVar2,param_2);
      *(undefined8 *)(lVar2 + 0x40) = *param_1;
      return lVar2;
    }
    _DAT_00000040 = *param_1;
    return 0;
  }
  iVar1 = FUN_142233be0(param_2);
  if (iVar1 == 0) {
    lVar2 = HandleConcurrencyEvaluationOverride(param_1,param_2);
    return lVar2;
  }
  if (iVar1 != -1) {
    lVar2 = HandleConcurrencyEvaluation(param_1,param_2);
    return lVar2;
  }
  return 0;
}



// FUNCTION 1427f8e90 CreateNewEffect body=85 status=ok
// SIG undefined CreateNewEffect(void)

undefined8 USoundEffectPreset::CreateNewEffect(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x19,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::CreateNewEffect");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x19,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::CreateNewEffect");
  return 0;
}



// FUNCTION 1427f8ef0 CreateNewPreset body=85 status=ok
// SIG undefined CreateNewPreset(void)

undefined8 USoundEffectPreset::CreateNewPreset(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x18,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::CreateNewPreset");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x18,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::CreateNewPreset");
  return 0;
}



// FUNCTION 1427f8f50 CreateStartingConnectors body=80 status=ok
// SIG undefined CreateStartingConnectors(void)

void USoundNode::CreateStartingConnectors(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    (**(code **)(*param_1 + 0x2e0))(param_1,(int)param_1[6]);
  }
  return;
}



// FUNCTION 1427f8fa0 CreateStartingConnectors body=42 status=ok
// SIG undefined CreateStartingConnectors(void)

void USoundNodeConcatenator::CreateStartingConnectors(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2e0))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x0001427f8fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e0))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 1427f8fd0 CreateStartingConnectors body=72 status=ok
// SIG undefined CreateStartingConnectors(void)

void USoundNodeSwitch::CreateStartingConnectors(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2e0))(param_1,(int)param_1[6]);
  (**(code **)(*param_1 + 0x2e0))(param_1,(int)param_1[6]);
  (**(code **)(*param_1 + 0x2e0))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x0001427f9011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e0))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 1427f9020 FUN_1427f9020 body=332 status=ok
// SIG undefined FUN_1427f9020(void)

undefined8 * FUN_1427f9020(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451b9850;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1427f9170 FUN_1427f9170 body=332 status=ok
// SIG undefined FUN_1427f9170(void)

undefined8 * FUN_1427f9170(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451b9840;
  *(undefined1 *)(plVar6 + 9) = 0;
  plVar6[10] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1427f92c0 DecrementNumSounds body=8 status=ok
// SIG undefined DecrementNumSounds(void)

void USoundWave::DecrementNumSounds(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -1;
  UNLOCK();
  return;
}



// FUNCTION 1427f9300 FUN_1427f9300 body=44 status=ok
// SIG undefined FUN_1427f9300(void)

void FUN_1427f9300(longlong *param_1)

{
  param_1[10] = 0;
  (**(code **)(*param_1 + 0x198))(param_1,1,0,0,2,0);
  return;
}



// FUNCTION 1427f9330 FUN_1427f9330 body=9 status=ok
// SIG undefined FUN_1427f9330(void)

void FUN_1427f9330(longlong param_1)

{
  FUN_14289d030(param_1 + 0x10);
  return;
}



// FUNCTION 1427f9340 FUN_1427f9340 body=20 status=ok
// SIG undefined FUN_1427f9340(void)

void FUN_1427f9340(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1427f3300(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1427f9380 FUN_1427f9380 body=602 status=ok
// SIG undefined FUN_1427f9380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427f9380(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *local_50;
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_40);
  plVar3 = *(longlong **)(*param_1 + 0x20);
  lVar4 = *(longlong *)(*param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == 0) || (param_1[1] == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  if (bVar7) {
    lVar4 = *param_1;
    puVar8 = (undefined8 *)(lVar4 + 0x18);
    local_50 = (longlong *)0x0;
    if (puVar8 != &local_58) {
      *puVar8 = 0;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x20,&local_50);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_50 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  plVar3 = param_1 + 1;
  if (param_1[1] == 0) {
    local_70 = *(longlong **)(*param_1 + 0x20);
    local_78 = *(longlong *)(*param_1 + 0x18);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    if (plVar3 != &local_78) {
      *plVar3 = local_78;
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,&local_70);
    }
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x28);
  plVar9 = (longlong *)(lVar4 + 0x18);
  *(int *)(lVar5 + 0x10) = (int)param_1[3];
  *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(int *)(lVar5 + 0x18) = (int)param_1[4];
  *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x24);
  plVar6 = (longlong *)param_1[2];
  lVar5 = *plVar3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_68 = lVar5;
  plStack_60 = plVar6;
  if (&local_68 != plVar9) {
    local_68 = *plVar9;
    plStack_60 = *(longlong **)(lVar4 + 0x20);
    *plVar9 = lVar5;
    *(longlong **)(lVar4 + 0x20) = plVar6;
    local_38 = lVar5;
    plStack_30 = plVar6;
  }
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_60 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  QueryPerformanceCounter(&local_48);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_48.s.LowPart - local_40._0_4_);
  return;
}



// FUNCTION 1427f95e0 FUN_1427f95e0 body=163 status=ok
// SIG undefined FUN_1427f95e0(void)

void FUN_1427f95e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  plVar2 = (longlong *)*param_1;
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < (int)plVar2[1]) {
    do {
      lVar3 = *plVar2;
      plVar2 = *(longlong **)(uVar4 + lVar3);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,1);
        lVar3 = *(longlong *)*param_1;
      }
      *(undefined8 *)(uVar4 + lVar3) = 0;
      plVar2 = (longlong *)param_1[1];
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
        plVar2 = (longlong *)param_1[1];
      }
      *plVar2 = 0;
      uVar5 = (int)uVar6 + 1;
      plVar2 = (longlong *)*param_1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)plVar2[1]);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1427f9690 FUN_1427f9690 body=108 status=ok
// SIG undefined FUN_1427f9690(void)

void FUN_1427f9690(longlong *param_1)

{
  longlong *plVar1;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)(*param_1 + 0x10) + 0x28))((longlong *)(*param_1 + 0x10),param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x20);
  }
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1427f9700 FUN_1427f9700 body=184 status=ok
// SIG undefined FUN_1427f9700(void)

void FUN_1427f9700(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  iVar1 = *(int *)(param_1[1] + 0x10);
  iVar5 = (*(code *)**(undefined8 **)*param_1)();
  if (iVar5 == iVar1) {
    iVar1 = *(int *)(param_1[1] + 0x14);
    iVar5 = (**(code **)(*(longlong *)*param_1 + 8))();
    if (iVar5 == iVar1) goto LAB_1427f9760;
  }
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_1[1] + 0x10);
  *(undefined4 *)(lVar3 + 0x54) = *(undefined4 *)(param_1[1] + 0x14);
  *(undefined4 *)(lVar3 + 0x50) = uVar2;
  FRenderResource::UpdateRHI(lVar3 + 0x20);
LAB_1427f9760:
  (**(code **)(*(longlong *)(*param_1 + 0x10) + 0x28))((longlong *)(*param_1 + 0x10),param_1[1]);
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar4,0x20);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1427f97c0 FUN_1427f97c0 body=188 status=ok
// SIG undefined FUN_1427f97c0(void)

void FUN_1427f97c0(longlong *param_1)

{
  void *_Dst;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  uint uVar1;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  local_res8[0].s.LowPart = 0;
  uVar1 = 0;
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                           (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*param_1 + 8),0,1,
                            local_res8,0,1);
  _guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)param_1[1],(longlong)*(int *)((undefined8 *)param_1[1] + 1));
  (**(code **)(*DAT_146ab6358 + 0x588))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*param_1 + 8),0,uVar1 & 0xffffff00,1);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1427f9880 FUN_1427f9880 body=628 status=ok
// SIG undefined FUN_1427f9880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427f9880(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 != 0) {
    plVar8 = (longlong *)0x0;
    if (*(char *)(lVar6 + 0x95) == '\0') {
      TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 0x28) + 8,*param_3);
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x30);
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        uVar3 = *(undefined8 *)(lVar6 + 300);
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
        if (((int)uVar3 != *(int *)(lVar6 + 0x14)) ||
           ((int)((ulonglong)uVar3 >> 0x20) != *(int *)(lVar6 + 0x18))) {
          plVar7 = (longlong *)*plVar1;
          *plVar1 = 0;
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x30))();
          }
        }
      }
      if (*plVar1 == 0) {
        local_b8 = 1;
        uStack_b4 = 0;
        uStack_ac = 0;
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 300);
        local_84 = (undefined4)uVar3;
        local_d0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_80 = local_d0._4_4_;
        local_58 = L"UnknownTexture2D";
        local_98 = 1;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        local_88 = 0;
        local_7c = 0;
        local_78 = 1;
        local_74 = 0x10000;
        local_70 = 1;
        local_6c = 2;
        local_68 = 0x10;
        local_64 = 1;
        local_60 = 0;
        local_50 = 1;
        local_d0 = uVar3;
        plVar7 = (longlong *)GetRendererModule();
        local_e8 = L"DebugCanvasLayerTexture";
        (**(code **)(*plVar7 + 0x98))(plVar7,param_2,&local_98,plVar1);
      }
      if (((DAT_146b17150 != 0) && (cVar4 = FUN_142881000(DAT_146b17150,0), cVar4 != '\0')) &&
         (*(longlong **)(DAT_146b17150 + 0xab8) != (longlong *)0x0)) {
        plVar8 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))();
      }
      local_d8 = 0;
      local_c0 = 0;
      if ((plVar8 == (longlong *)0x0) ||
         ((**(code **)(*plVar8 + 0x40))(plVar8,*(undefined4 *)(param_1 + 0x38),&local_d8,&local_c0),
         local_d8 == 0)) {
        plVar8 = (longlong *)(*plVar1 + 0x10);
      }
      else {
        plVar8 = &local_d8;
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 0x28) + 8,*plVar8);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_c0);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_d8);
    }
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x8d);
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x8d) = 0;
    if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x8c) == '\0') || (lVar6 = *param_3, lVar6 == 0))
    {
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10);
    }
    else {
      local_c4 = *(undefined4 *)(lVar6 + 100);
      local_c8 = *(undefined4 *)(lVar6 + 0x60);
      puVar9 = &local_d0;
      local_d0 = 0;
    }
    FCanvas::SetRenderTargetRect(*(longlong *)(param_1 + 0x18),puVar9);
    uVar5 = FCanvas::HasBatchesToRender(*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x3c) = uVar5;
    FUN_1428aaa90(*(undefined8 *)(param_1 + 0x18),param_2,1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x8d) = uVar2;
    TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 0x28) + 8,0);
    return;
  }
  return;
}



// FUNCTION 1427f9b10 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>::
     Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
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



// FUNCTION 1427f9b90 FUN_1427f9b90 body=518 status=ok
// SIG undefined FUN_1427f9b90(void)

void FUN_1427f9b90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((*(char *)(param_1 + 0x2f3) == '\0') && (*(char *)(param_1 + 0x2f4) == '\0')) {
    local_48 = 0;
    local_res8 = 0;
    FUN_141a19150(param_2,0,0,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x350,0);
    lVar3 = *(longlong *)(param_1 + 0x358);
    local_res8 = 0;
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar3 + 8,0);
    *(undefined8 *)(lVar3 + 0x40) = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 800) + (longlong)*(int *)(param_1 + 0x364) * 8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x350);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_40 = 0xffffffff00000000;
    uStack_38 = 0xffffffffffffffff;
    puVar2 = puVar4 + 10;
    local_30 = 0xffffffffffffffff;
    uStack_28 = 0xffffffffffffffff;
    local_20 = 0xffffffff;
    uStack_18 = 0;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar4 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar4 + 2) = (undefined4)local_40;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_40._4_4_;
    *(undefined4 *)(puVar4 + 3) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_38._4_4_;
    *(undefined4 *)(puVar4 + 4) = (undefined4)local_30;
    *(undefined4 *)((longlong)puVar4 + 0x24) = local_30._4_4_;
    *(undefined4 *)(puVar4 + 5) = (undefined4)uStack_28;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_28._4_4_;
    *(undefined4 *)(puVar4 + 6) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar4 + 0x34) = local_20._4_4_;
    *(undefined4 *)(puVar4 + 7) = (undefined4)uStack_18;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_18._4_4_;
    puVar4[8] = plVar1;
    puVar4[9] = plVar1;
    lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(longlong *)puVar4[8] + 0x18))();
      if (lVar3 == 0) {
        (**(code **)(*(longlong *)puVar4[8] + 0x20))();
      }
    }
    lVar3 = (**(code **)(*(longlong *)puVar4[9] + 8))();
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(longlong *)puVar4[9] + 0x18))();
      if (lVar3 == 0) {
        (**(code **)(*(longlong *)puVar4[9] + 0x20))();
      }
    }
  }
  return;
}



// FUNCTION 1427f9da0 FUN_1427f9da0 body=1908 status=ok
// SIG undefined FUN_1427f9da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427f9da0(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  DWORD *pDVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_3c8 [32];
  undefined4 local_3a8;
  undefined4 local_3a0;
  char local_398;
  longlong local_390;
  longlong *local_388;
  longlong *local_380;
  longlong local_378;
  longlong local_370;
  LARGE_INTEGER local_368;
  LARGE_INTEGER local_360;
  longlong *local_358;
  longlong *local_350;
  longlong local_348;
  longlong *local_340;
  longlong *local_338;
  longlong *local_330;
  longlong local_328;
  longlong *local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined1 local_308 [352];
  undefined1 local_1a8 [352];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  plVar15 = (longlong *)0x0;
  local_398 = param_2;
  if ((*(longlong *)(DAT_146b17150 + 0xab8) == 0) ||
     (cVar4 = (**(code **)(*param_1 + 0x188))(), cVar4 == '\0')) {
    bVar16 = false;
LAB_1427f9e18:
    bVar3 = false;
    plVar8 = plVar15;
    if (!bVar16) goto LAB_1427f9e3b;
  }
  else {
    bVar16 = true;
    cVar4 = (**(code **)**(undefined8 **)(DAT_146b17150 + 0xab8))();
    if (cVar4 == '\0') goto LAB_1427f9e18;
    bVar3 = true;
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x78))();
LAB_1427f9e3b:
  iVar6 = (int)param_1[0x6d];
  *(int *)((longlong)param_1 + 0x364) = iVar6;
  *(int *)(param_1 + 0x6d) = (iVar6 + 1) % (int)param_1[0x65];
  local_388 = plVar8;
  if (*(longlong *)(param_1[0x66] + (longlong)iVar6 * 8) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1);
  }
  if (bVar16) {
    if (plVar8 == (longlong *)0x0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (**(code **)*plVar8)(plVar8);
    }
    if ((cVar4 != *(char *)((longlong)param_1 + 0x2f4)) ||
       ((cVar4 != '\0' && (cVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,param_1), cVar5 != '\0'))))
    {
      local_3a8 = *(undefined4 *)((longlong)param_1 + 0xd4);
      local_3a0 = 0;
      *(char *)((longlong)param_1 + 0x2f4) = cVar4;
      (**(code **)(*param_1 + 0x198))
                (param_1,0,(int)param_1[0x19],*(undefined4 *)((longlong)param_1 + 0xcc));
    }
  }
  plVar8 = (longlong *)param_1[10];
  lVar13 = param_1[0x58];
  uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8);
  FUN_1427ffa60(lVar13,plVar8,uVar9);
  if ((param_1[0x17] == 0) &&
     (((*(char *)((longlong)param_1 + 0x2f3) == '\0' &&
       (*(char *)((longlong)param_1 + 0x2f4) == '\0')) || (bVar3)))) {
    plVar8 = *(longlong **)(DAT_1469f4590 + 0x18);
    FWidgetPath::FWidgetPath(local_308);
    if ((param_1[0x5a] != 0) && (param_1[0x5b] != 0)) {
      piVar1 = (int *)(param_1[0x5b] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) {
        plVar12 = (longlong *)param_1[0x5b];
        local_358 = plVar15;
        plVar14 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar12[1];
          bVar16 = iVar6 == 0;
          if (bVar16) {
            *(int *)(plVar12 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar14 = plVar15, !bVar16) {
            LOCK();
            bVar16 = iVar6 == (int)plVar12[1];
            if (bVar16) {
              *(int *)(plVar12 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar16) {
              local_358 = (longlong *)0x0;
              plVar14 = plVar12;
              if (plVar12 != (longlong *)0x0) {
                local_358 = (longlong *)param_1[0x5a];
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar12[1];
            bVar16 = iVar6 == 0;
            if (bVar16) {
              *(int *)(plVar12 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        local_350 = plVar14;
        FUN_14189a110(DAT_1469f4590,&local_348,&local_358,local_308);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar14 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
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
          LOCK();
          plVar12 = plVar14 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
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
        if ((local_348 != 0) &&
           (puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0xb8))(plVar8),
           puVar10 != (undefined8 *)0x0)) {
          TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x17,*puVar10);
        }
        if (local_340 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_340 + 1;
          lVar13 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_340)(local_340);
            LOCK();
            piVar1 = (int *)((longlong)local_340 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_340 + 8))(local_340,1);
            }
          }
        }
      }
    }
    FUN_140458830(local_308);
  }
  plVar8 = *(longlong **)(DAT_1469f4590 + 0x18);
  FWidgetPath::FWidgetPath(local_1a8);
  if ((param_1[0x5a] != 0) && (param_1[0x5b] != 0)) {
    piVar1 = (int *)(param_1[0x5b] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar12 = (longlong *)param_1[0x5b];
      local_338 = plVar15;
      plVar14 = plVar12;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar12[1];
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(plVar12 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar14 = plVar15, !bVar16) {
          LOCK();
          bVar16 = iVar6 == (int)plVar12[1];
          if (bVar16) {
            *(int *)(plVar12 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar16) {
            local_338 = (longlong *)0x0;
            plVar14 = plVar12;
            if (plVar12 != (longlong *)0x0) {
              local_338 = (longlong *)param_1[0x5a];
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar12[1];
          bVar16 = iVar6 == 0;
          if (bVar16) {
            *(int *)(plVar12 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_330 = plVar14;
      FUN_14189a110(DAT_1469f4590,&local_328,&local_338,local_1a8);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar14 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
        LOCK();
        plVar12 = plVar14 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
      if (local_328 != 0) {
        local_370 = (**(code **)(*plVar8 + 0x198))(plVar8);
        if (local_370 != 0) {
          LOCK();
          *(int *)(local_370 + 8) = *(int *)(local_370 + 8) + 1;
          UNLOCK();
        }
        FUN_14288e230(param_1,&local_370);
      }
      if (local_320 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_320 + 1;
        lVar13 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_320)(local_320);
          LOCK();
          piVar1 = (int *)((longlong)local_320 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_320 + 8))(local_320,1);
          }
        }
      }
    }
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    local_380 = param_1 + -1;
    local_378 = param_1[1];
    if (local_378 != 0) {
      LOCK();
      *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
      UNLOCK();
    }
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_360);
    (**(code **)(*local_380 + 0x18))(local_380,&local_378);
    QueryPerformanceCounter(&local_368);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_368.s.LowPart - local_360._0_4_);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_378);
  }
  else {
    pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar8 = TlsGetValue(*pDVar11);
    if (plVar8 == (longlong *)0x0) {
      plVar12 = (longlong *)operator_new(0x18);
      plVar8 = plVar15;
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = 0;
        plVar12[1] = 0;
        *(undefined4 *)(plVar12 + 2) = 0;
        plVar8 = plVar12;
      }
      TlsSetValue(*pDVar11,plVar8);
    }
    plVar12 = (longlong *)plVar8[1];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)*plVar8;
      if (plVar12 == (longlong *)0x0) {
        lVar13 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
        plVar8[1] = lVar13;
        if (lVar13 == 0) {
          puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar8[1] = (longlong)puVar10;
          lVar13 = 0x1f;
          do {
            puVar2 = puVar10 + 0x20;
            *puVar10 = puVar2;
            lVar13 = lVar13 + -1;
            puVar10 = puVar2;
          } while (lVar13 != 0);
          *puVar2 = 0;
        }
        plVar12 = (longlong *)plVar8[1];
        iVar6 = 0x20;
        *(undefined4 *)(plVar8 + 2) = 0x20;
      }
      else {
        iVar6 = 0x20;
        plVar8[1] = (longlong)plVar12;
        *(undefined4 *)(plVar8 + 2) = 0x20;
        *plVar8 = 0;
      }
    }
    else {
      iVar6 = (int)plVar8[2];
    }
    plVar8[1] = *plVar12;
    *(int *)(plVar8 + 2) = iVar6 + -1;
    *plVar12 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar12 + 1) = 0xff;
    local_318 = 0;
    local_310 = 0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_1451b2d30;
    *(undefined1 *)(plVar12 + 4) = 0;
    plVar12[5] = 0;
    plVar12[2] = (longlong)(param_1 + -1);
    lVar13 = param_1[1];
    plVar12[3] = lVar13;
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    lVar13 = plVar12[5];
    piVar1 = (int *)(lVar13 + 0x48);
    if (lVar13 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_390 = lVar13;
    FUN_1409421c0(plVar12,0,0xff,1);
    if (lVar13 != 0) {
      LOCK();
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        FGraphEvent::Recycle(local_390);
      }
    }
  }
  cVar4 = local_398;
  FUN_1428716a0(param_1,local_398);
  if ((local_388 != (longlong *)0x0) && (cVar4 != '\0')) {
    plVar8 = (longlong *)param_1[0x5b];
    plVar12 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar16 = iVar6 == 0;
      if (bVar16) {
        *(int *)(plVar8 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (plVar12 = plVar15, !bVar16) {
        LOCK();
        bVar16 = iVar6 == (int)plVar8[1];
        if (bVar16) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar16) {
          plVar12 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            plVar15 = (longlong *)param_1[0x5a];
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar8[1];
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(plVar8 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    if ((*(char *)((longlong)param_1 + 0x2f3) == '\0') &&
       (*(char *)((longlong)param_1 + 0x2f4) == '\0')) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    (**(code **)(*local_388 + 8))(local_388,uVar9,param_1,plVar15);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
  }
  FUN_140458830(local_1a8);
  return;
}



// FUNCTION 1427fa520 FUN_1427fa520 body=532 status=ok
// SIG undefined FUN_1427fa520(void)

void FUN_1427fa520(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *local_28;
  undefined8 local_20;
  
  if ((DAT_146534e00 == -1) && (DAT_146534e00 = FUN_14046cec0(), DAT_146534e00 < 0)) {
    lVar5 = FUN_142874ac0(DAT_146b17150);
    DAT_146534e00 = *(int *)(lVar5 + 0xa8);
  }
  local_20 = 1;
  local_28 = (undefined8 *)0x0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,0);
  *local_28 = *(undefined8 *)(param_1 + 0xb0);
  uVar4 = local_20 & 0xffffffff;
  puVar10 = local_28;
  iVar7 = (int)local_20;
  while (0 < iVar7) {
    iVar7 = (int)uVar4;
    iVar9 = iVar7 + -1;
    plVar1 = (longlong *)puVar10[iVar9];
    iVar6 = (iVar7 - iVar9) + -1;
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop(puVar10 + iVar9,puVar10 + iVar7,(longlong)iVar6 << 3);
    }
    uVar8 = (ulonglong)iVar9;
    local_20 = CONCAT44(local_20._4_4_,iVar9);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = USoundNodeAssetReferencer::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1417510e0(plVar1);
        (**(code **)(*plVar1 + 0x2f0))(plVar1,param_2);
      }
      else {
        lVar5 = USoundNodeQualityLevel::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar5 = (longlong)DAT_146534e00;
          if (DAT_146534e00 < (int)plVar1[6]) {
            lVar2 = plVar1[5];
            local_20 = CONCAT44(local_20._4_4_,iVar7);
            if (local_20._4_4_ < iVar7) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,iVar9);
              puVar10 = local_28;
              uVar4 = local_20;
            }
            puVar10[uVar8] = *(undefined8 *)(lVar2 + lVar5 * 8);
            uVar8 = uVar4 & 0xffffffff;
          }
        }
        else {
          iVar7 = (int)plVar1[6];
          if (iVar7 != 0) {
            if (local_20._4_4_ < iVar7 + iVar9) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_28);
              puVar10 = local_28;
              iVar9 = (int)local_20;
            }
            _guard_xfg_dispatch_icall_nop(puVar10 + iVar9,(void *)plVar1[5],(longlong)iVar7 << 3);
            uVar8 = (ulonglong)(uint)(iVar9 + iVar7);
          }
        }
      }
    }
    uVar4 = uVar8;
    iVar7 = (int)uVar8;
  }
  if (puVar10 != (undefined8 *)0x0) {
    FMemory::Free(puVar10);
    return;
  }
  return;
}



// FUNCTION 1427fa740 Execute body=89 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,USoundNodeWavePlayer,TTypeWrapper<void>___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),bool>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4,*(undefined1 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1427fa7b0 ExecuteIfSafe body=117 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,USoundNodeWavePlayer,void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),bool>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4,*(undefined1 *)(param_1 + 0x18));
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1427fa830 FUN_1427fa830 body=279 status=ok
// SIG undefined FUN_1427fa830(void)

void FUN_1427fa830(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = (longlong *)param_1[3];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451b9850;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427fa950 FUN_1427fa950 body=252 status=ok
// SIG undefined FUN_1427fa950(void)

void FUN_1427fa950(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1427f2a60(param_1 + 2,uVar3);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_1451b9840;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427faa50 ExecuteTask body=290 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FDebugCanvasDrawer::BeginRenderingCanvas'::`5'::EURCMacro_BeginRenderingDebugCanvas>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_1427f9380(param_1 + 2,param_3,param_1 + 8);
  plVar7 = (longlong *)param_1[4];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_1451b2868;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427fab80 FUN_1427fab80 body=237 status=ok
// SIG undefined FUN_1427fab80(void)

void FUN_1427fab80(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1427f95e0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451b2d20;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427fac70 FUN_1427fac70 body=237 status=ok
// SIG undefined FUN_1427fac70(void)

void FUN_1427fac70(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1427f9690(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451b40a0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427fad60 FUN_1427fad60 body=237 status=ok
// SIG undefined FUN_1427fad60(void)

void FUN_1427fad60(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1427f9700(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451b40b0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427fae50 FUN_1427fae50 body=269 status=ok
// SIG undefined FUN_1427fae50(void)

void FUN_1427fae50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  plVar6 = (longlong *)0x0;
  plVar4 = *(longlong **)(param_1[2] + 0x30);
  *(undefined8 *)(param_1[2] + 0x30) = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))();
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1451b2858;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar4 = plVar5;
    }
    TlsSetValue(*pDVar3,plVar4);
  }
  if ((int)plVar4[2] < 0x20) {
    plVar6 = (longlong *)plVar4[1];
  }
  else {
    if (*plVar4 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *plVar4 = plVar4[1];
    plVar4[1] = 0;
    *(undefined4 *)(plVar4 + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
  plVar4[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427faf60 FUN_1427faf60 body=271 status=ok
// SIG undefined FUN_1427faf60(void)

void FUN_1427faf60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar4 = param_1[2];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(lVar4 + 0x54) = uVar3;
  FRenderResource::UpdateRHI(lVar4 + 0x20);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1451b4080;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  plVar7 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      lpTlsValue = plVar6;
    }
    TlsSetValue(*pDVar5,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427fb070 FUN_1427fb070 body=269 status=ok
// SIG undefined FUN_1427fb070(void)

void FUN_1427fb070(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451b2d30;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427fb180 FUN_1427fb180 body=237 status=ok
// SIG undefined FUN_1427fb180(void)

void FUN_1427fb180(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1427f97c0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451b4090;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1427fb270 FUN_1427fb270 body=327 status=ok
// SIG undefined FUN_1427fb270(void)

longlong * FUN_1427fb270(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x40),local_res8);
  if ((local_res8[0] == -1) ||
     (lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x40), lVar5 == 0)) {
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar2 = *(longlong *)(lVar5 + 8);
    plVar6 = *(longlong **)(lVar5 + 0x10);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      lVar5 = *param_4;
      if (*(int *)(lVar2 + 0x30) != *(int *)(lVar2 + 0x5c)) {
        lVar4 = *(longlong *)(lVar2 + 0x68);
        if (*(longlong *)(lVar2 + 0x68) == 0) {
          lVar4 = lVar2 + 0x60;
        }
        iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                                 (longlong)*(int *)(lVar2 + 0x70) - 1U) * 4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(lVar2 + 0x28));
            if (*plVar7 == lVar5) {
              if (iVar3 != -1) goto LAB_1427fb342;
              break;
            }
            iVar3 = (int)plVar7[3];
          } while (iVar3 != -1);
        }
      }
      plVar7 = (longlong *)0x0;
LAB_1427fb342:
      if (plVar7 != (longlong *)0x0) {
        *param_2 = plVar7[1];
        lVar5 = plVar7[2];
        param_2[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        goto LAB_1427fb36b;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1427fb36b:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return param_2;
}



// FUNCTION 1427fb3c0 FUN_1427fb3c0 body=2186 status=ok
// SIG undefined FUN_1427fb3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427fb3c0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  undefined4 local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_228;
  undefined1 local_220;
  longlong *local_218;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong *plStack_1e0;
  int local_1d8;
  int local_1d4;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 *local_1a0;
  longlong **local_198;
  longlong *local_190;
  longlong *local_188;
  longlong local_178;
  longlong *plStack_170;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_1c0 = param_1;
  local_1b0 = param_3;
  local_1a8 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x330),&local_1d8);
  plVar11 = (longlong *)0x0;
  plVar8 = plVar11;
  if (local_1d8 != -1) {
    plVar8 = (longlong *)((longlong)local_1d8 * 0x20 + *(longlong *)(param_1 + 0x330));
  }
  plVar9 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar9 = plVar11;
  }
  if (plVar9 != (longlong *)0x0) goto LAB_1427fbbff;
  lVar7 = operator_new(0xf8);
  plVar8 = plVar11;
  if (lVar7 != 0) {
    plVar8 = (longlong *)FUN_1420cefb0(lVar7);
  }
  plVar9 = (longlong *)operator_new(0x18);
  local_200 = plVar11;
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    plVar9[2] = (longlong)plVar8;
    local_200 = plVar9;
  }
  local_208 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_208,plVar8,plVar8);
  FUN_142810070(local_208,2);
  FUN_142810070(local_208,3);
  FUN_142810070(local_208,0);
  FUN_142810070(local_208,1);
  FUN_142810070(local_208,5);
  FUN_142810070(local_208,4);
  plVar9 = (longlong *)operator_new(0x78);
  plVar8 = plVar11;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    *(undefined4 *)(plVar9 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)plVar9 + 0x5c) = 0;
    plVar9[0xd] = 0;
    *(undefined4 *)(plVar9 + 0xe) = 0;
    plVar8 = plVar9;
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_1451b9900;
    plVar9[2] = (longlong)plVar8;
    plVar11 = plVar9;
  }
  local_1d0 = plVar8;
  local_1c8 = plVar11;
  if (plVar8 != (longlong *)0x0) {
    if ((*plVar8 != 0) && (plVar8[1] != 0)) {
      piVar1 = (int *)(plVar8[1] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) goto LAB_1427fb633;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    *plVar8 = (longlong)plVar8;
    plVar9 = (longlong *)plVar8[1];
    if (plVar11 != plVar9) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar8[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar8[1] = (longlong)plVar11;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    }
  }
LAB_1427fb633:
  plVar11 = local_200;
  plVar8 = local_208;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
  }
  lVar7 = SOverlay::FArguments::FArguments(local_168);
  plVar9 = (longlong *)(lVar7 + 0xf8);
  iVar6 = *(int *)(lVar7 + 0x100);
  *(int *)(lVar7 + 0x100) = iVar6 + 1;
  if (*(int *)(lVar7 + 0x104) < iVar6 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar6);
  }
  puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar9);
  *puVar10 = plVar8;
  puVar10[1] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    }
  }
  *(undefined1 *)(lVar7 + 0xf1) = 3;
  plVar8 = (longlong *)operator_new(0x240);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar11 = plVar8 + 2;
  local_190 = plVar11;
  local_188 = plVar8;
  FUN_14044f790(&local_190,plVar11);
  local_258 = 0x230;
  SWidget::SetDebugInfo
            (plVar11,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SGameLayerManager.cpp"
             ,0x14a);
  local_220 = *(undefined1 *)(lVar7 + 0xf1);
  local_230 = lVar7 + 0xe8;
  local_248 = *(undefined4 *)(lVar7 + 0x90);
  local_238 = lVar7 + 200;
  local_240 = lVar7 + 0x98;
  local_250 = lVar7 + 0x78;
  local_228 = *(undefined1 *)(lVar7 + 0xf0);
  local_258 = lVar7 + 0x60;
  local_218 = plVar9;
  SWidget::SWidgetConstruct(plVar11,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  SOverlay::Construct(plVar11,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar4 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_1f8 = plVar11;
  local_1f0 = plVar8;
  if ((longlong **)(local_1d0 + 2) != &local_1f8) {
    local_1d0[2] = (longlong)plVar11;
    local_1f8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_1d0 + 3,&local_1f0);
  }
  plVar11 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1f0 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    LOCK();
    plVar11 = plVar8 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  plVar11 = local_1d0;
  plVar8 = (longlong *)local_1d0[3];
  local_1b8 = local_1d0[2];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
  }
  lVar7 = *(longlong *)(local_1c0 + 0x3b0);
  puVar10 = (undefined8 *)operator_new(0x68);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    FSlotBase::FSlotBase(puVar10);
    *puVar10 = &PTR__scalar_deleting_destructor__1440439b8;
    *(undefined4 *)(puVar10 + 4) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)((longlong)puVar10 + 0x24) = DAT_1468b5d88._4_4_;
    *(undefined1 *)(puVar10 + 5) = 1;
    puVar10[6] = 0;
    *(undefined4 *)(puVar10 + 7) = 0;
    *(undefined4 *)(puVar10 + 8) = 0x3f800000;
    *(undefined4 *)((longlong)puVar10 + 0x44) = 0x3f800000;
    *(undefined1 *)(puVar10 + 9) = 1;
    puVar10[10] = 0;
    *(undefined4 *)(puVar10 + 0xb) = 0;
    *(undefined4 *)(puVar10 + 0xc) = 1;
    *(undefined4 *)((longlong)puVar10 + 100) = 1;
  }
  if (*(char *)(lVar7 + 0x228) == '\0') {
    lVar3 = *(longlong *)(lVar7 + 0x210);
    if ((lVar3 != 0) && (puVar10[1] != lVar3)) {
      puVar10[1] = lVar3;
      FUN_141802340(puVar10);
    }
    iVar6 = *(int *)(lVar7 + 0x220);
    *(int *)(lVar7 + 0x220) = iVar6 + 1;
    if (*(int *)(lVar7 + 0x224) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x218,iVar6);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x218) + (longlong)iVar6 * 8) = puVar10;
  }
  plVar9 = puVar10 + 2;
  puVar10[0xc] = 0;
  plVar11[4] = (longlong)puVar10;
  plVar11 = (longlong *)puVar10[3];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent(puVar10);
  local_1e8 = local_1b8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plStack_1e0 = plVar8;
  if (&local_1e8 != plVar9) {
    local_1e8 = *plVar9;
    plStack_1e0 = (longlong *)puVar10[3];
    local_178 = local_1b8;
    *plVar9 = local_1b8;
    puVar10[3] = plVar8;
    plStack_170 = plVar8;
  }
  plVar9 = plStack_1e0;
  if (plStack_1e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_1e0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_1e0)(plStack_1e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1e0 + 8))(plStack_1e0,1);
      }
    }
  }
  FUN_141802340(puVar10);
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
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    }
  }
  lVar7 = local_1c0;
  local_1a0 = &local_1b0;
  local_198 = &local_1d0;
  FUN_1427ec9a0(local_1c0 + 0x330,&local_1d4,&local_1a0,0);
  plVar8 = local_1c8;
  plVar9 = (longlong *)(*(longlong *)(lVar7 + 0x330) + (longlong)local_1d4 * 0x20 + 8);
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1c8 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1c8)(local_1c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = local_200;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_200 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
LAB_1427fbbff:
  *local_1a8 = *plVar9;
  lVar7 = plVar9[1];
  local_1a8[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1427fbc50 FinishDestroy body=56 status=ok
// SIG undefined FinishDestroy(void)

void USoundWave::FinishDestroy(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_141755460();
  CleanupCachedRunningPlatformData(param_1);
  uVar1 = IStreamingManager::Get();
  plVar2 = (longlong *)UNiagaraSystem::GetEffectType(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001427fbc81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_1);
  return;
}



// FUNCTION 1427fbc90 FixGroupSizesArray body=185 status=ok
// SIG undefined FixGroupSizesArray(void)

void USoundNodeGroupControl::FixGroupSizesArray(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x30) + -1;
  iVar6 = 0;
  if (-1 < iVar3) {
    iVar6 = iVar3;
  }
  if (iVar1 < iVar6) {
    iVar3 = *(int *)(param_1 + 0x40);
    iVar4 = iVar3 + (iVar6 - iVar1);
    *(int *)(param_1 + 0x40) = iVar4;
    if (*(int *)(param_1 + 0x44) < iVar4) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x38));
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 4),0,
               (longlong)(iVar6 - iVar1) << 2);
    return;
  }
  if (iVar6 < iVar1) {
    iVar3 = iVar1 - iVar6;
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      iVar5 = (iVar4 - iVar6) - iVar3;
      if (iVar5 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x38);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(lVar2 + (longlong)iVar6 * 4),(void *)(lVar2 + (longlong)iVar1 * 4),
                   (longlong)iVar5 << 2);
        iVar4 = *(int *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x40) = iVar4 - iVar3;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x38));
    }
  }
  return;
}



// FUNCTION 1427fbd50 FixHasBeenUsedArray body=161 status=ok
// SIG undefined FixHasBeenUsedArray(void)

void USoundNodeRandom::FixHasBeenUsedArray(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar2 < iVar3) {
    iVar6 = *(int *)(param_1 + 0x60);
    iVar4 = iVar6 + (iVar3 - iVar2);
    *(int *)(param_1 + 0x60) = iVar4;
    if (*(int *)(param_1 + 100) < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x58));
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar6 + *(longlong *)(param_1 + 0x58)),0,(longlong)(iVar3 - iVar2)
              );
    return;
  }
  if (iVar3 < iVar2) {
    plVar1 = (longlong *)(param_1 + 0x58);
    iVar6 = iVar2 - iVar3;
    if (iVar6 != 0) {
      iVar4 = *(int *)(param_1 + 0x60);
      iVar5 = (iVar4 - iVar3) - iVar6;
      if (iVar5 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 + *plVar1),(void *)((longlong)iVar2 + *plVar1),
                   (longlong)iVar5);
        iVar4 = *(int *)(param_1 + 0x60);
      }
      *(int *)(param_1 + 0x60) = iVar4 - iVar6;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 1427fbe00 FixWeightsArray body=172 status=ok
// SIG undefined FixWeightsArray(void)

void USoundNodeRandom::FixWeightsArray(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar1 < iVar2) {
    iVar6 = *(int *)(param_1 + 0x40);
    iVar4 = iVar6 + (iVar2 - iVar1);
    *(int *)(param_1 + 0x40) = iVar4;
    if (*(int *)(param_1 + 0x44) < iVar4) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x38));
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 4),0,
               (longlong)(iVar2 - iVar1) << 2);
    return;
  }
  if (iVar2 < iVar1) {
    iVar6 = iVar1 - iVar2;
    if (iVar6 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      iVar5 = (iVar4 - iVar2) - iVar6;
      if (iVar5 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x38);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(lVar3 + (longlong)iVar2 * 4),(void *)(lVar3 + (longlong)iVar1 * 4),
                   (longlong)iVar5 << 2);
        iVar4 = *(int *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x40) = iVar4 - iVar6;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x38));
    }
  }
  return;
}



// FUNCTION 1427fbeb0 FUN_1427fbeb0 body=771 status=ok
// SIG undefined FUN_1427fbeb0(void)

int FUN_1427fbeb0(longlong *param_1,void *param_2,int param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  void *local_58;
  int local_50;
  void *local_48 [2];
  
  plVar8 = (longlong *)0x0;
  plVar2 = param_1 + 0x43;
  LOCK();
  bVar9 = (int)param_1[0x45] == 0;
  if (bVar9) {
    *(int *)(param_1 + 0x45) = 0;
  }
  UNLOCK();
  if (!bVar9) {
    LOCK();
    *(undefined4 *)(param_1 + 0x45) = 0;
    UNLOCK();
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(int *)((longlong)param_1 + 0x224) < 0) && (*(int *)((longlong)param_1 + 0x224) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar2,0);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x42) = 0;
    UNLOCK();
  }
  iVar6 = (**(code **)(*param_1 + 0x318))(param_1);
  iVar7 = 4;
  if (iVar6 == 2) {
    iVar7 = 2;
  }
  *(int *)(param_1 + 0x49) = iVar7;
  if ((int)param_1[0x46] <= param_3) {
    param_3 = (int)param_1[0x46];
  }
  if ((int)param_1[0x44] / iVar7 < param_3) {
    iVar7 = (**(code **)(*param_1 + 0x338))(param_1,plVar2,param_3);
    if (0 < iVar7) {
      iVar7 = (int)param_1[0x49] * iVar7;
      if (iVar7 < (int)param_1[0x44]) {
        iVar6 = (int)param_1[0x44];
        if (iVar6 < iVar7) {
          *(int *)(param_1 + 0x44) = iVar7;
          if (*(int *)((longlong)param_1 + 0x224) < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 + *plVar2),0,(longlong)(iVar7 - iVar6));
          bVar9 = false;
          goto LAB_1427fc11b;
        }
        if ((iVar7 < iVar6) && (iVar7 != iVar6)) {
          *(int *)(param_1 + 0x44) = iVar7;
        }
      }
      bVar9 = false;
      goto LAB_1427fc11b;
    }
    if ((((int)param_1[0x48] != 0) && ((longlong *)param_1[0x47] != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(*(longlong *)param_1[0x47] + 0x18))(), cVar5 != '\0')) {
      if ((int)param_1[0x48] != 0) {
        plVar8 = (longlong *)param_1[0x47];
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,param_1,param_3);
    }
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  while (lVar3 = *(longlong *)param_1[0x41], lVar3 != 0) {
    ppvVar1 = (void **)(lVar3 + 8);
    if (&local_58 != ppvVar1) {
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      local_58 = *ppvVar1;
      *ppvVar1 = (void *)0x0;
      local_50 = *(int *)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    iVar7 = local_50;
    _Src = local_58;
    lVar4 = param_1[0x41];
    param_1[0x41] = lVar3;
    if (ppvVar1 != local_48) {
      if (*ppvVar1 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar1 = (void *)0x0;
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 8) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar4,0x18);
    }
    if (iVar7 != 0) {
      iVar6 = (int)param_1[0x44];
      if (*(int *)((longlong)param_1 + 0x224) < iVar6 + iVar7) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar2);
        iVar6 = (int)param_1[0x44];
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 + *plVar2),_Src,(longlong)iVar7);
      *(int *)(param_1 + 0x44) = (int)param_1[0x44] + iVar7;
    }
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  bVar9 = true;
LAB_1427fc11b:
  iVar7 = (int)param_1[0x49];
  iVar6 = (int)param_1[0x44] / iVar7;
  if (iVar6 < 1) {
    iVar6 = *(int *)((longlong)param_1 + 0x22c) * iVar7;
    _guard_xfg_dispatch_icall_nop(param_2,0,(longlong)iVar6);
  }
  else {
    if (param_3 <= iVar6) {
      iVar6 = param_3;
    }
    iVar6 = iVar6 * iVar7;
    _guard_xfg_dispatch_icall_nop(param_2,(void *)*plVar2,(longlong)iVar6);
    if (iVar6 != 0) {
      iVar7 = (int)param_1[0x44];
      if (iVar7 - iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)*plVar2,(void *)(*plVar2 + (longlong)iVar6),(longlong)(iVar7 - iVar6));
        iVar7 = (int)param_1[0x44];
      }
      *(int *)(param_1 + 0x44) = iVar7 - iVar6;
    }
    if (bVar9) {
      LOCK();
      *(int *)(param_1 + 0x42) = (int)param_1[0x42] - iVar6;
      UNLOCK();
    }
  }
  return iVar6;
}



// FUNCTION 1427fc1c0 GetAllNodes body=138 status=ok
// SIG undefined GetAllNodes(void)

void USoundNode::GetAllNodes(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  *(longlong *)(*param_2 + (longlong)iVar2 * 8) = param_1;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x28));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1427fc250 GetAssetActionName body=106 status=ok
// SIG undefined GetAssetActionName(void)

undefined8 USoundEffectPreset::GetAssetActionName(undefined8 param_1,undefined8 param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x16,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::GetAssetActionName");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x16,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::GetAssetActionName");
  FText::FText(param_2);
  return param_2;
}



// FUNCTION 1427fc300 GetAvailableAudioByteCount body=13 status=ok
// SIG undefined GetAvailableAudioByteCount(void)

int USoundWaveProcedural::GetAvailableAudioByteCount(longlong param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 0x210);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x210) = 0;
    iVar1 = 0;
  }
  UNLOCK();
  return iVar1;
}



// FUNCTION 1427fc310 GetChunkData body=26 status=ok
// SIG undefined GetChunkData(void)

bool USoundWave::GetChunkData(longlong param_1)

{
  char cVar1;
  
  cVar1 = FStreamedAudioPlatformData::TryLoadChunk(*(undefined8 *)(param_1 + 0x1e8));
  return cVar1 != '\0';
}



// FUNCTION 1427fc330 FUN_1427fc330 body=649 status=ok
// SIG undefined FUN_1427fc330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1427fc330(longlong param_1,undefined8 *param_2,wchar_t *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 local_res20;
  undefined8 *local_58 [2];
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  lVar5 = param_1;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 != '\0') {
    return (undefined8 *)0x0;
  }
  local_res20 = param_2;
  if (param_3 == (wchar_t *)0x0) {
    param_3 = AK::MemoryMgr::GetPoolName((long)lVar5);
  }
  puVar10 = (undefined8 *)0x0;
  if ((int)local_res20 == DAT_146b15fd8) {
    puVar7 = DAT_146b15fd0;
    puVar8 = _DAT_146b15fd8;
    if (local_res20._4_4_ == DAT_146b15fdc) goto LAB_1427fc492;
  }
  puVar7 = local_res20;
  puVar8 = local_res20;
  if (param_3 != (wchar_t *)0x0) {
    puVar7 = (undefined8 *)FName::ToString(&local_res20,local_58);
    if (*(int *)(puVar7 + 1) == 0) {
      psVar9 = &DAT_143f3eda8;
    }
    else {
      psVar9 = (short *)*puVar7;
    }
    local_38 = 0;
    local_40 = (undefined8 *)0x0;
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (psVar9[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_38 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
      }
      FGenericPlatformString::Memcpy(local_40,psVar9,(longlong)(int)uVar4 * 2);
    }
    if (local_58[0] != (undefined8 *)0x0) {
      FMemory::Free();
    }
    FPlatformAudioCookOverrides::GetHashSuffix(param_3,&local_40);
    puVar7 = (undefined8 *)&DAT_143f3eda8;
    if ((int)local_38 != 0) {
      puVar7 = local_40;
    }
    FName::FName(local_58,puVar7,1);
    DAT_146b15fd0 = local_58[0];
    puVar7 = DAT_146b15fd0;
    puVar8 = local_res20;
    if (local_40 != (undefined8 *)0x0) {
      FMemory::Free();
      puVar7 = DAT_146b15fd0;
      puVar8 = local_res20;
    }
  }
LAB_1427fc492:
  _DAT_146b15fd8 = puVar8;
  DAT_146b15fd0 = puVar7;
  plVar1 = (longlong *)(param_1 + 0x1c0);
  local_48 = DAT_146b15fd0;
  FFormatContainer::Contains(plVar1);
  lVar5 = *plVar1;
  local_40 = local_48;
  local_res20 = local_48;
  iVar3 = 0;
  puVar7 = puVar10;
  uVar6 = (longlong)*(int *)(param_1 + 0x1c8);
  if (*(int *)(param_1 + 0x1c8) != 0) {
    do {
      uVar11 = uVar6 >> 1;
      iVar3 = FName::Compare((uVar11 + (longlong)puVar7) * 0x10 + lVar5,&local_res20);
      if (iVar3 < 0) {
        puVar7 = (undefined8 *)((ulonglong)((uint)uVar6 & 1) + uVar11 + (longlong)puVar7);
      }
      uVar6 = uVar11;
    } while (uVar11 != 0);
    iVar3 = *(int *)(param_1 + 0x1c8);
  }
  uVar6 = (ulonglong)(int)puVar7;
  puVar8 = puVar10;
  if ((((uVar6 < (ulonglong)(longlong)iVar3) &&
       (iVar3 = FName::Compare(&local_res20,uVar6 * 0x10 + *plVar1), -1 < iVar3)) &&
      ((int)puVar7 != -1)) &&
     (puVar7 = (undefined8 *)(uVar6 * 0x10 + *plVar1 + 8), puVar7 != (undefined8 *)0x0)) {
    puVar8 = (undefined8 *)*puVar7;
  }
  if (puVar8 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x70);
    local_58[0] = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      FUntypedBulkData::FUntypedBulkData(puVar7);
      *puVar7 = &PTR__scalar_deleting_destructor__143f48b90;
      local_58[0] = puVar7;
    }
    TSortedMap<FName,void_(__cdecl*)(UAnimSequence_&),FDefaultAllocator,TLess<FName>_>::
    Emplace<FName_const_&,void_(__cdecl*const_&)(UAnimSequence_&)>(plVar1,&local_40,local_58);
    puVar8 = local_58[0];
  }
  iVar3 = FUntypedBulkData::GetBulkDataSize(puVar8);
  if (0 < iVar3) {
    puVar10 = puVar8;
  }
  return puVar10;
}



// FUNCTION 1427fc620 GetCurrentDistance body=44 status=ok
// SIG undefined GetCurrentDistance(void)

undefined4
USoundNodeParamCrossFade::GetCurrentDistance(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  FActiveSound::GetFloatParameter(param_3,*(undefined8 *)(param_1 + 0x48),local_res8);
  return local_res8[0];
}



// FUNCTION 1427fc670 GetDesc body=37 status=ok
// SIG undefined GetDesc(void)

undefined8 USoundClass::GetDesc(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Children: %d",*(undefined4 *)(param_1 + 0x60));
  return param_2;
}



// FUNCTION 1427fc6a0 FUN_1427fc6a0 body=552 status=ok
// SIG undefined FUN_1427fc6a0(void)

undefined2 ** FUN_1427fc6a0(longlong *param_1,undefined2 **param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  float fVar7;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  
  iVar5 = 0;
  *param_2 = (undefined2 *)0x0;
  param_2[1] = (undefined2 *)0x0;
  fVar7 = (float)(**(code **)(*param_1 + 0x2a0))();
  if (10000.0 <= fVar7) {
    if (*param_2 != L"Forever") {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,8);
        iVar5 = *(int *)(param_2 + 1);
      }
      *(int *)(param_2 + 1) = iVar5 + 8;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
      }
      builtin_wcsncpy(*param_2,L"Forever",8);
    }
  }
  else {
    FString::PrintfImpl(&local_28,L"%3.2fs",(double)fVar7);
    if (param_2 == &local_28) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_2 = local_28;
      *(int *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
  }
  iVar5 = *(int *)(param_2 + 1);
  iVar2 = (3 - (uint)(iVar5 != 0)) + iVar5;
  *(int *)(param_2 + 1) = iVar2;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
  }
  puVar6 = *param_2;
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  *(undefined4 *)(puVar6 + lVar4) = 0x5b0020;
  puVar6[lVar4 + 2] = 0;
  lVar4 = (**(code **)(*param_1 + 0x2d8))(param_1);
  local_res8 = *(undefined8 *)(lVar4 + 0x18);
  FName::ToString(&local_res8,&local_28);
  lVar4 = -1;
  puVar6 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar6 = local_28;
  }
  do {
    lVar4 = lVar4 + 1;
  } while (puVar6[lVar4] != 0);
  iVar5 = (int)lVar4;
  if (iVar5 != 0) {
    iVar2 = *(int *)(param_2 + 1);
    iVar3 = (uint)(iVar2 == 0) + iVar2 + iVar5;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar1 = *param_2;
    _guard_xfg_dispatch_icall_nop
              (puVar1 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)),puVar6,(longlong)iVar5 * 2);
    (puVar1 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)))[iVar5] = 0;
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_2 + 1);
  iVar2 = (2 - (uint)(iVar5 != 0)) + iVar5;
  *(int *)(param_2 + 1) = iVar2;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
  }
  puVar6 = *param_2;
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  puVar6[lVar4] = 0x5d;
  puVar6[lVar4 + 1] = 0;
  return param_2;
}



// FUNCTION 1427fc8d0 GetDesc body=37 status=ok
// SIG undefined GetDesc(void)

undefined8 USoundMix::GetDesc(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Adjusters: %d",*(undefined4 *)(param_1 + 0x70));
  return param_2;
}



// FUNCTION 1427fc900 GetDesc body=62 status=ok
// SIG undefined GetDesc(void)

undefined8 * USoundSubmix::GetDesc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Sound submix",0x1a);
  return param_2;
}



// FUNCTION 1427fc940 GetDesc body=216 status=ok
// SIG undefined GetDesc(void)

undefined8 USoundWave::GetDesc(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *local_18;
  int local_10;
  int local_c;
  
  local_18 = (wchar_t *)0x0;
  local_c = 0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    local_10 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0xc);
    local_10 = local_10 + 0xc;
    if (local_c < local_10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"Unconverted",0xc);
  }
  else {
    FString::PrintfImpl(&local_18,L"%d Channels");
  }
  pwVar1 = local_18;
  pwVar2 = L"";
  if (local_10 != 0) {
    pwVar2 = local_18;
  }
  FString::PrintfImpl(param_2,L"%3.2fs %s",(double)*(float *)(param_1 + 0x50),pwVar2);
  if (pwVar1 != (wchar_t *)0x0) {
    FMemory::Free(pwVar1);
  }
  return param_2;
}



// FUNCTION 1427fca20 GetDesiredAspectRatio body=42 status=ok
// SIG undefined GetDesiredAspectRatio(void)

float FViewport::GetDesiredAspectRatio(longlong *param_1)

{
  int local_res8;
  int local_resc;
  
  (**(code **)(*param_1 + 0x20))(param_1,&local_res8);
  return (float)local_res8 / (float)local_resc;
}



// FUNCTION 1427fca50 FUN_1427fca50 body=31 status=ok
// SIG undefined FUN_1427fca50(void)

undefined8 FUN_1427fca50(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x458) + 0x40))();
  return param_2;
}



// FUNCTION 1427fca90 FUN_1427fca90 body=61 status=ok
// SIG undefined FUN_1427fca90(void)

void FUN_1427fca90(longlong param_1)

{
  undefined4 uVar1;
  
  if (((*(float *)(param_1 + 0x50) < 1e-08) || ((*(byte *)(param_1 + 0x30) & 0x10) != 0)) &&
     (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x290))();
    *(undefined4 *)(param_1 + 0x50) = uVar1;
  }
  return;
}



// FUNCTION 1427fcad0 FUN_1427fcad0 body=129 status=ok
// SIG undefined FUN_1427fcad0(void)

float FUN_1427fcad0(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x28);
  fVar1 = 0.0;
  uVar3 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x30) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 == 0) {
    fVar1 = 0.0;
  }
  else {
    do {
      fVar5 = fVar1;
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        fVar5 = (float)(**(code **)(*(longlong *)*plVar2 + 0x290))();
        if (fVar5 <= fVar1) {
          fVar5 = fVar1;
        }
      }
      fVar1 = fVar5;
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return fVar1;
}



// FUNCTION 1427fcb60 GetDuration body=115 status=ok
// SIG undefined GetDuration(void)

float USoundNodeConcatenator::GetDuration(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = 0;
  fVar5 = 0.0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x28));
      if (plVar1 != (longlong *)0x0) {
        fVar4 = (float)(**(code **)(*plVar1 + 0x290))();
        fVar5 = fVar5 + fVar4;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x30));
    return fVar5;
  }
  return 0.0;
}



// FUNCTION 1427fcbe0 FUN_1427fcbe0 body=44 status=ok
// SIG undefined FUN_1427fcbe0(void)

float FUN_1427fcbe0(longlong param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((longlong *)**(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    fVar1 = (float)(**(code **)(*(longlong *)**(longlong **)(param_1 + 0x28) + 0x290))();
  }
  return fVar1 + *(float *)(param_1 + 0x3c);
}



// FUNCTION 1427fcc10 FUN_1427fcc10 body=79 status=ok
// SIG undefined FUN_1427fcc10(void)

undefined8 FUN_1427fcc10(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    plVar1 = (longlong *)
             UDialogueWave::GetWaveFromContext(*(longlong *)(param_1 + 0x38),param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      return 0x461c4000;
    }
                    /* WARNING: Could not recover jumptable at 0x0001427fcc4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2a0))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1427fcc60 FUN_1427fcc60 body=104 status=ok
// SIG undefined FUN_1427fcc60(void)

ulonglong FUN_1427fcc60(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x30) < 1) ||
     ((longlong *)**(longlong **)(param_1 + 0x28) == (longlong *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)**(longlong **)(param_1 + 0x28) + 0x290))();
  }
  if ((*(uint *)(param_1 + 0x48) & 2) != 0) {
    if ((*(uint *)(param_1 + 0x48) & 1) != 0) {
      return 0x461c4000;
    }
    uVar1 = (ulonglong)
            (uint)((*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38)) *
                   (float)*(int *)(param_1 + 0x44) + *(float *)(param_1 + 0x38) +
                  *(float *)(param_1 + 0x40));
  }
  return uVar1;
}



// FUNCTION 1427fccd0 FUN_1427fccd0 body=83 status=ok
// SIG undefined FUN_1427fccd0(void)

float FUN_1427fccd0(longlong param_1)

{
  float fVar1;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
      return 10000.0;
    }
    if ((longlong *)**(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      fVar1 = (float)(**(code **)(*(longlong *)**(longlong **)(param_1 + 0x28) + 0x290))();
      return fVar1 * (float)*(int *)(param_1 + 0x38);
    }
  }
  return 0.0;
}



// FUNCTION 1427fcda0 GetExporterName body=39 status=ok
// SIG undefined GetExporterName(void)

undefined8 USoundWave::GetExporterName(undefined8 param_1,undefined8 param_2)

{
  FName::FName(param_2,L"SoundExporterWAV",1);
  return param_2;
}



// FUNCTION 1427fcdd0 GetFocusAttenuation body=46 status=ok
// SIG undefined GetFocusAttenuation(void)

float FSoundAttenuationSettings::GetFocusAttenuation
                (longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1d0) * *(float *)(param_2 + 0x10);
  fVar1 = (*(float *)(param_1 + 0x1d4) * *(float *)(param_2 + 0x14) - fVar1) * param_3 + fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 1427fce00 GetFocusDistanceScale body=46 status=ok
// SIG undefined GetFocusDistanceScale(void)

float FSoundAttenuationSettings::GetFocusDistanceScale
                (longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1c0) * *(float *)(param_2 + 8);
  fVar1 = (*(float *)(param_1 + 0x1c4) * *(float *)(param_2 + 0xc) - fVar1) * param_3 + fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 1427fce30 GetFocusPriorityScale body=46 status=ok
// SIG undefined GetFocusPriorityScale(void)

float FSoundAttenuationSettings::GetFocusPriorityScale
                (longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1c8) * *(float *)(param_2 + 0x18);
  fVar1 = (*(float *)(param_1 + 0x1cc) * *(float *)(param_2 + 0x1c) - fVar1) * param_3 + fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}


