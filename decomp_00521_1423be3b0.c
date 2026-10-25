// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1423be3b0 FUN_1423be3b0 body=676 status=ok
// SIG undefined FUN_1423be3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423be3b0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_f8 [32];
  uint local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x718);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + 6) = 0;
  }
  else {
    local_d0 = (longlong *)(param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x770) * 0x10);
    param_2[4] = *(longlong *)(lVar2 + 0x18);
    iVar7 = (int)local_d0[1];
    *(undefined4 *)(param_2 + 1) = 0;
    iVar8 = 0;
    if ((*(int *)((longlong)param_2 + 0xc) < iVar7) && (iVar7 != *(int *)((longlong)param_2 + 0xc)))
    {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_2,iVar7);
      iVar8 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar8 + iVar7;
    if (*(int *)((longlong)param_2 + 0xc) < iVar8 + iVar7) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined4 *)(param_2 + 3) = 0;
    if (*(int *)((longlong)param_2 + 0x1c) < iVar7) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 2,iVar7);
    }
    iVar8 = (int)param_2[3] + iVar7;
    *(int *)(param_2 + 3) = iVar8;
    if (*(int *)((longlong)param_2 + 0x1c) < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 2);
    }
    puVar3 = (undefined8 *)*param_2;
    iVar8 = 1;
    local_d8 = 1;
    puVar4 = (undefined8 *)*local_d0;
    uVar5 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    uVar14 = *(undefined4 *)((longlong)puVar4 + 0x14);
    uVar15 = *(undefined4 *)(puVar4 + 3);
    uVar16 = *(undefined4 *)((longlong)puVar4 + 0x1c);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar14;
    *(undefined4 *)(puVar3 + 3) = uVar15;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar16;
    uVar14 = *(undefined4 *)((longlong)puVar4 + 0x24);
    uVar15 = *(undefined4 *)(puVar4 + 5);
    uVar16 = *(undefined4 *)((longlong)puVar4 + 0x2c);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)((longlong)puVar3 + 0x24) = uVar14;
    *(undefined4 *)(puVar3 + 5) = uVar15;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar16;
    *(undefined8 *)param_2[2] = **(undefined8 **)(lVar2 + 0x158);
    if (1 < (longlong)iVar7) {
      local_c8 = 1;
      local_c0 = 0x30;
      lVar13 = 0x10;
      lVar11 = 1;
      plVar12 = local_d0;
      local_b8 = (longlong)iVar7;
      do {
        *(undefined8 *)(param_2[2] + local_c8 * 8) =
             *(undefined8 *)(*(longlong *)(lVar2 + 0x158) + lVar13);
        if (((lVar11 < 0) || (*(int *)(param_1 + 0xbe8) <= iVar8)) ||
           (local_d8 != *(ushort *)(*(longlong *)(param_1 + 0xbe0) + lVar11 * 2))) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          puVar9 = (undefined4 *)
                   FUN_14162bcf0((longlong)(int)local_d8 * 0x30 + *plVar12,local_78,
                                 (longlong)*(int *)(*(longlong *)(lVar2 + 0x158) + 8 + lVar13) *
                                 0x30 + *plVar12);
          uVar14 = *puVar9;
          uVar15 = puVar9[1];
          uVar16 = puVar9[2];
          uVar17 = puVar9[3];
          plVar12 = local_d0;
        }
        else {
          lVar10 = *(longlong *)(lVar2 + 0x168);
          puVar9 = &local_a8;
          puVar1 = (undefined4 *)(local_c0 + lVar10);
          uVar14 = *puVar1;
          uVar15 = puVar1[1];
          uVar16 = puVar1[2];
          uVar17 = puVar1[3];
          puVar3 = (undefined8 *)(local_c0 + 0x10 + lVar10);
          puVar4 = (undefined8 *)(local_c0 + 0x20 + lVar10);
          local_98 = *puVar3;
          uStack_90 = puVar3[1];
          local_88 = *puVar4;
          uStack_80 = puVar4[1];
          local_a8 = uVar14;
          uStack_a4 = uVar15;
          uStack_a0 = uVar16;
          uStack_9c = uVar17;
        }
        lVar10 = *param_2;
        local_d8 = local_d8 + 1;
        lVar13 = lVar13 + 0x10;
        local_c8 = local_c8 + 1;
        puVar1 = (undefined4 *)(local_c0 + lVar10);
        *puVar1 = uVar14;
        puVar1[1] = uVar15;
        puVar1[2] = uVar16;
        puVar1[3] = uVar17;
        uVar14 = puVar9[5];
        uVar15 = puVar9[6];
        uVar16 = puVar9[7];
        puVar1 = (undefined4 *)(local_c0 + 0x10 + lVar10);
        *puVar1 = puVar9[4];
        puVar1[1] = uVar14;
        puVar1[2] = uVar15;
        puVar1[3] = uVar16;
        uVar14 = puVar9[9];
        uVar15 = puVar9[10];
        uVar16 = puVar9[0xb];
        puVar1 = (undefined4 *)(local_c0 + 0x20 + lVar10);
        *puVar1 = puVar9[8];
        puVar1[1] = uVar14;
        puVar1[2] = uVar15;
        puVar1[3] = uVar16;
        local_c0 = local_c0 + 0x30;
        lVar10 = lVar11 + 1;
        iVar7 = iVar8 + 1;
        if (!bVar6) {
          lVar10 = lVar11;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        lVar11 = lVar10;
      } while (local_c8 < local_b8);
    }
    *(undefined1 *)(param_2 + 6) = 1;
  }
  return;
}



// FUNCTION 1423be660 FUN_1423be660 body=93 status=ok
// SIG undefined FUN_1423be660(void)

void FUN_1423be660(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    lVar3 = FUN_1428f7290();
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
      FUN_1422b3fc0(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1423be6d0 FUN_1423be6d0 body=283 status=ok
// SIG undefined FUN_1423be6d0(void)

void FUN_1423be6d0(longlong param_1,float param_2,undefined1 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    *(byte *)(param_1 + 0xb1e) = *(byte *)(param_1 + 0xb1e) | 1;
    uVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0xa50);
    uVar3 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar2 + *(int *)(param_1 + 0xa58) < puVar2) {
      uVar3 = uVar1;
    }
    if (uVar3 != 0) {
      do {
        FUN_142284510(*puVar2,param_2 * *(float *)(param_1 + 0xb10),0);
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar1 != uVar3);
    }
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      FUN_142284510(*(longlong *)(param_1 + 0xa48),param_2 * *(float *)(param_1 + 0xb10),param_3);
    }
    if ((*(longlong *)(param_1 + 0xa60) != 0) && (*(char *)(param_1 + 0xa68) == '\0')) {
      FUN_142284510(*(longlong *)(param_1 + 0xa60),param_2 * *(float *)(param_1 + 0xb10),0);
    }
    if (((*(char *)(param_1 + 0x878) == '\x03') && ((*(byte *)(param_1 + 0x880) & 2) == 0)) &&
       (0.0 < param_2)) {
      FUN_1423a75f0(param_1);
    }
  }
  return;
}



// FUNCTION 1423be7f0 FUN_1423be7f0 body=533 status=ok
// SIG undefined FUN_1423be7f0(void)

void FUN_1423be7f0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1d9);
  if ((param_1[0x1de] != 0) && (param_1 != (longlong *)0x0)) {
    BVar5 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar5 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    (**(code **)(*param_1 + 0x928))(param_1,param_1[0x1de],0);
    param_1[0x1de] = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  if (*(char *)((longlong)param_1 + 0x3d) == '\0') {
LAB_1423be892:
    uVar8 = 0;
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x400))(param_1,0);
    if (cVar3 == '\0') {
      cVar3 = FUN_1426ce250(param_1);
      bVar2 = false;
      if (cVar3 != '\0') goto LAB_1423be888;
    }
    else {
LAB_1423be888:
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1423be892;
    uVar8 = 1;
  }
  FUN_1423b8450(param_1,uVar8);
  FUN_1423c0050(param_1);
  if ((-1 < *(char *)((longlong)param_1 + 0xb1d)) || ((longlong *)param_1[0x19a] == (longlong *)0x0)
     ) goto LAB_1423be926;
  cVar3 = (**(code **)(*(longlong *)param_1[0x19a] + 0x30))();
  if (cVar3 == '\0') goto LAB_1423be926;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xe4);
  if (lVar6 == 0) {
LAB_1423be909:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1423be909;
  }
  (**(code **)(*(longlong *)param_1[0x19a] + 0x50))
            ((longlong *)param_1[0x19a],param_1 + 0x1a0,param_1,lVar6);
LAB_1423be926:
  plVar1 = (longlong *)param_1[0x149];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x328))(plVar1,param_2);
    (**(code **)(*param_1 + 0xa98))(param_1,param_2);
  }
  FUN_1423bea10(param_1,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x171) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xb8c)) {
    TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(param_1 + 0x170,0);
  }
  *(byte *)((longlong)param_1 + 0xb1d) = *(byte *)((longlong)param_1 + 0xb1d) & 0xfd;
  cVar3 = *(char *)((longlong)param_1 + 0xdbd);
  *(byte *)((longlong)param_1 + 0xb1d) =
       *(byte *)((longlong)param_1 + 0xb1d) | *(byte *)((longlong)param_1 + 0xb1c) >> 5 & 2;
  if ((*DAT_146af0c58 < 1) || (cVar3 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 4;
  }
  if (param_4 != 0) {
    *(undefined1 *)(param_4 + 9) = uVar4;
    if ((bool)(*(byte *)(param_4 + 0xc) >> 4 & 1) != 0 < *DAT_146af0c70) {
      FTickFunction::SetPriorityIncludingPrerequisites(param_4);
    }
  }
  if ((param_1[0x1c1] == 0) && (cVar3 == '\0')) {
    FUN_1423a75f0(param_1);
  }
  return;
}



// FUNCTION 1423bea10 FUN_1423bea10 body=741 status=ok
// SIG undefined FUN_1423bea10(void)

void FUN_1423bea10(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  
  if (param_1[0x24] == 0) {
    FUN_1423407b0();
  }
  if (*(char *)((longlong)param_1 + 0x99a) != '\0') {
    (**(code **)(*param_1 + 0xa10))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x99a) = 0;
  }
  FUN_142357eb0(param_1,param_2,param_3,param_4);
  lVar6 = param_1[0x24];
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0();
  }
  fVar9 = *(float *)((longlong)param_1 + 0x36c);
  if ((fVar9 <= *(float *)(lVar6 + 0x790) - 1.0) || (DAT_146af4a64 != 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 2;
  }
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xfd;
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | bVar3;
  if ((*(byte *)((longlong)param_1 + 0x999) & 1) != 0) {
    plVar8 = (longlong *)param_1[0x34];
    plVar1 = plVar8 + (int)param_1[0x35];
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        lVar7 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (fVar9 < *(float *)(lVar6 + 0x36c))) {
          fVar9 = *(float *)(lVar6 + 0x36c);
        }
      }
    }
    lVar6 = param_1[0x24];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0();
    }
    bVar3 = 0;
    if (*(float *)(lVar6 + 0x790) - 1.0 < fVar9) {
      bVar3 = 2;
    }
    *(byte *)(param_1 + 0x110) = bVar3 | *(byte *)(param_1 + 0x110) & 0xfd;
  }
  uVar4 = (**(code **)(*param_1 + 0x980))(param_1,0);
  if ((param_1[0x11e] != 0) && (cVar5 = FUN_1424763a0(param_1[0x140]), cVar5 != '\0')) {
    lVar6 = param_1[0x24];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    FUN_1424908d0(lVar6,param_2);
    FUN_142471b60(param_1[0x140],param_1[0x11e]);
    bVar3 = *(byte *)(param_1 + 0x10f);
    if (bVar3 < 2) {
      *(byte *)(param_1[0x11e] + 2) = *(byte *)(param_1[0x11e] + 2) & 0xf7;
      *(undefined4 *)(param_1[0x11e] + 0x10) = 0;
      bVar3 = *(byte *)(param_1 + 0x10f);
    }
    if (bVar3 == 0) {
      *(byte *)(param_1[0x11e] + 2) = *(byte *)(param_1[0x11e] + 2) & 0xef;
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x9a0))(param_1);
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x970))(param_1,param_2,0);
  }
  cVar5 = (**(code **)(*param_1 + 0x998))(param_1,uVar4);
  if (cVar5 == '\0') {
    if ((char)param_1[0x10f] == '\x01') {
      (**(code **)(*param_1 + 0x968))(param_1,param_4);
    }
  }
  else {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xe4);
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0x960))(param_1,param_4);
    }
    else {
      (**(code **)(*param_1 + 0x978))();
    }
  }
  cVar5 = (**(code **)(*param_1 + 0xa08))(param_1);
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,0);
    *(undefined1 *)(param_1 + 0x133) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001423becee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa18))(param_1);
  return;
}



// FUNCTION 1423bed00 FUN_1423bed00 body=410 status=ok
// SIG undefined FUN_1423bed00(void)

int * FUN_1423bed00(longlong param_1,float param_2,undefined1 param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  float fVar8;
  
  if ((((*(longlong *)(param_1 + 0x8f0) == 0) ||
       (cVar2 = FUN_1424763a0(*(undefined8 *)(param_1 + 0xa00)), cVar2 == '\0')) &&
      (cVar2 = FUN_1423bdc20(param_1), cVar2 != '\0')) && (*(longlong *)(param_1 + 0x118) != 0)) {
    FUN_1423bef10(param_1,param_2,param_3);
  }
  cVar2 = FUN_1423bd7b0(param_1);
  if (cVar2 == '\0') {
    if (*(longlong **)(param_1 + 0xa48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xa48) + 0x2b0))();
    }
    uVar5 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0xa50);
    uVar7 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar6 + *(int *)(param_1 + 0xa58) < puVar6) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar6 + 0x2b0))();
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != uVar7);
    }
    if (*(longlong **)(param_1 + 0xa60) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xa60) + 0x2b0))();
    }
    piVar4 = DAT_146af0c40;
    if (*DAT_146af0c40 != 0) {
      LOCK();
      DAT_146af0bec = DAT_146af0bec + 1;
      UNLOCK();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc80) = (undefined4)DAT_1468c21b0;
    cVar2 = FUN_1423bdc20(param_1);
    if (cVar2 == '\0') {
      fVar8 = 0.0;
    }
    else {
      fVar8 = *(float *)(*(longlong *)(param_1 + 0x8f0) + 0x10);
    }
    FUN_1423be6d0(param_1,fVar8 + param_2,param_3);
    piVar4 = DAT_146af0c40;
    if (0 < *DAT_146af0c40) {
      LOCK();
      uVar1 = DAT_146af0be8 + 1;
      UNLOCK();
      uVar3 = DAT_146af0be8 + 1;
      piVar4 = (int *)(ulonglong)uVar3;
      DAT_146af0be8 = uVar1;
      if (uVar3 == 500) {
        LOCK();
        DAT_146af0be8 = 0;
        UNLOCK();
        LOCK();
        DAT_146af0bec = 0;
        UNLOCK();
        return (int *)(ulonglong)uVar1;
      }
    }
  }
  return piVar4;
}



// FUNCTION 1423beea0 FUN_1423beea0 body=104 status=ok
// SIG undefined FUN_1423beea0(void)

void FUN_1423beea0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x8f0) != 0) &&
     (cVar1 = FUN_1424763a0(*(undefined8 *)(param_1 + 0xa00)), cVar1 != '\0')) {
    return;
  }
  cVar1 = FUN_1423bdc20(param_1);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x118) != 0)) {
    FUN_1423bef10(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1423bef10 FUN_1423bef10 body=632 status=ok
// SIG undefined FUN_1423bef10(void)

void FUN_1423bef10(undefined8 param_1,undefined4 param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  byte bVar16;
  float fVar17;
  float fVar18;
  uint local_res8 [2];
  byte local_res20;
  byte local_68;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = DAT_1468c21b0;
  iVar11 = (int)DAT_1468c21b0 + SUB164(auVar3 / ZEXT816(0xffffffff),0);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146531e10,local_res8);
  uVar15 = 0;
  uVar9 = uVar15;
  if (local_res8[0] != 0xffffffff) {
    uVar9 = DAT_146531e10 + (longlong)(int)local_res8[0] * 0x18;
  }
  lVar1 = *(longlong *)(uVar9 + 8);
  if (iVar11 != *(int *)(lVar1 + 0x88)) {
    bVar4 = 0;
    bVar5 = 0;
    bVar8 = 0;
    bVar16 = 0;
    uVar12 = 0;
    uVar13 = 0;
    *(int *)(lVar1 + 0x88) = iVar11;
    iVar11 = 0x7fffffff;
    plVar14 = *(longlong **)(lVar1 + 0x90);
    fVar17 = 0.0;
    local_res20 = 1;
    local_68 = 0;
    local_res8[0] = local_res8[0] & 0xffffff00;
    uVar9 = (longlong)*(int *)(lVar1 + 0x98) & 0x1fffffffffffffff;
    if (plVar14 + *(int *)(lVar1 + 0x98) < plVar14) {
      uVar9 = uVar15;
    }
    fVar18 = fVar17;
    bVar10 = 1;
    if (uVar9 != 0) {
      do {
        plVar2 = (longlong *)*plVar14;
        fVar17 = *(float *)((longlong)plVar2 + 0x84c);
        if (*(float *)((longlong)plVar2 + 0x84c) <= fVar18) {
          fVar17 = fVar18;
        }
        bVar8 = bVar8 | *(byte *)(plVar2 + 0x110) >> 1 & 1;
        bVar4 = (**(code **)(*plVar2 + 0x9f0))(plVar2);
        bVar16 = bVar16 | bVar4;
        bVar4 = (**(code **)(*plVar2 + 0x9f8))(plVar2);
        local_res20 = local_res20 & bVar4;
        if ((*(byte *)(lVar1 + 2) & 4) == 0) {
          iVar7 = *(int *)((longlong)plVar2 + 0x83c);
        }
        else {
          iVar7 = (int)plVar2[0x107];
        }
        if (iVar11 <= iVar7) {
          iVar7 = iVar11;
        }
        iVar11 = iVar7;
        bVar4 = (**(code **)(*plVar2 + 0x9e8))(plVar2);
        bVar4 = local_68 | bVar4;
        bVar5 = (**(code **)(*plVar2 + 0xa00))(plVar2);
        bVar5 = (byte)local_res8[0] | bVar5;
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar5);
        if ((*(byte *)(plVar2 + 0x12e) & 1) != 0) {
          cVar6 = (**(code **)(*plVar2 + 0xa20))(plVar2);
          uVar13 = uVar12;
          bVar5 = (byte)local_res8[0];
          if (cVar6 != '\0') {
            uVar12 = 1;
            uVar13 = 1;
          }
        }
        plVar14 = plVar14 + 1;
        uVar15 = uVar15 + 1;
        fVar18 = fVar17;
        local_68 = bVar4;
        bVar10 = local_res20;
      } while (uVar15 != uVar9);
    }
    FUN_1423a3db0(lVar1,param_2,bVar8,fVar17,iVar11,bVar16 & param_3,bVar10,bVar4,bVar5,uVar13);
  }
  return;
}



// FUNCTION 1423bf190 FUN_1423bf190 body=83 status=ok
// SIG undefined FUN_1423bf190(void)

void FUN_1423bf190(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xa68);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0xa60) != 0) {
      FUN_142276240();
    }
    *(bool *)(param_1 + 0xa68) = cVar1 == '\0';
    return;
  }
  *(undefined1 *)(param_1 + 0xa68) = 1;
  return;
}



// FUNCTION 1423bf1f0 TransformFromBoneSpace body=1281 status=ok
// SIG undefined TransformFromBoneSpace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void USkinnedMeshComponent::TransformFromBoneSpace
               (undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 uStack_17c;
  undefined4 uStack_16c;
  undefined4 uStack_15c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  iVar1 = FUN_1423ac950();
  if (iVar1 != -1) {
    FUN_1423acc10(param_1,&local_128,iVar1);
    local_198 = *param_4 * _DAT_146af0e90 -
                (float)(int)(_DAT_146af0e80 * *param_4 * _DAT_146af0e90) * _DAT_146af0e70;
    fStack_194 = param_4[1] * fRam0000000146af0e94 -
                 (float)(int)(fRam0000000146af0e84 * param_4[1] * fRam0000000146af0e94) *
                 fRam0000000146af0e74;
    fVar8 = param_4[2] * fRam0000000146af0e98 -
            (float)(int)(fRam0000000146af0e88 * param_4[2] * fRam0000000146af0e98) *
            fRam0000000146af0e78;
    fStack_18c = fRam0000000146af0e9c * 0.0 -
                 (float)(int)(fRam0000000146af0e8c * fRam0000000146af0e9c * 0.0) *
                 fRam0000000146af0e7c;
    uVar3 = -(uint)(_DAT_146af0e40 < (float)((uint)local_198 & _DAT_146af0d10));
    uVar4 = -(uint)(fRam0000000146af0e44 < (float)((uint)fStack_194 & uRam0000000146af0d14));
    uVar5 = -(uint)(fRam0000000146af0e48 < (float)((uint)fVar8 & uRam0000000146af0d18));
    local_198 = (float)(((uint)((float)((uint)local_198 & _DAT_146af0e60 | _DAT_146af0e50) -
                               local_198) ^ (uint)local_198) & uVar3 ^ (uint)local_198);
    fStack_194 = (float)(((uint)((float)((uint)fStack_194 & uRam0000000146af0e64 |
                                        uRam0000000146af0e54) - fStack_194) ^ (uint)fStack_194) &
                         uVar4 ^ (uint)fStack_194);
    fVar8 = (float)(((uint)((float)((uint)fVar8 & uRam0000000146af0e68 | uRam0000000146af0e58) -
                           fVar8) ^ (uint)fVar8) & uVar5 ^ (uint)fVar8);
    fStack_18c = (float)(((uint)((float)((uint)fStack_18c & uRam0000000146af0e6c |
                                        uRam0000000146af0e5c) - fStack_18c) ^ (uint)fStack_18c) &
                         -(uint)(fRam0000000146af0e4c <
                                (float)((uint)fStack_18c & uRam0000000146af0d1c)) ^ (uint)fStack_18c
                        );
    fVar6 = local_198 * local_198;
    fVar7 = fStack_194 * fStack_194;
    fVar9 = fVar8 * fVar8;
    fVar10 = fStack_18c * fStack_18c;
    local_198 = (((((fVar6 * -2.3889859e-08 + 2.7525562e-06) * fVar6 + -0.00019840874) * fVar6 +
                  0.008333331) * fVar6 + -0.16666667) * fVar6 + 1.0) * local_198;
    fStack_194 = (((((fVar7 * -2.3889859e-08 + 2.7525562e-06) * fVar7 + -0.00019840874) * fVar7 +
                   0.008333331) * fVar7 + -0.16666667) * fVar7 + 1.0) * fStack_194;
    fVar8 = (((((fVar9 * -2.3889859e-08 + 2.7525562e-06) * fVar9 + -0.00019840874) * fVar9 +
              0.008333331) * fVar9 + -0.16666667) * fVar9 + 1.0) * fVar8;
    fStack_18c = (((((fVar10 * -2.3889859e-08 + 2.7525562e-06) * fVar10 + -0.00019840874) * fVar10 +
                   0.008333331) * fVar10 + -0.16666667) * fVar10 + 1.0) * fStack_18c;
    fVar10 = param_3[2];
    uStack_17c = 0;
    uStack_16c = 0;
    uStack_15c = 0;
    fVar14 = (((((fVar6 * -2.6051615e-07 + 2.4760495e-05) * fVar6 + -0.0013888378) * fVar6 +
               0.041666638) * fVar6 + -0.5) * fVar6 + 1.0) *
             (float)((_DAT_146af0ce0 ^ _DAT_146af0bf0) & uVar3 ^ _DAT_146af0bf0);
    fStack_144 = (((((fVar7 * -2.6051615e-07 + 2.4760495e-05) * fVar7 + -0.0013888378) * fVar7 +
                   0.041666638) * fVar7 + -0.5) * fVar7 + 1.0) *
                 (float)((uRam0000000146af0ce4 ^ uRam0000000146af0bf4) & uVar4 ^
                        uRam0000000146af0bf4);
    fVar15 = (((((fVar9 * -2.6051615e-07 + 2.4760495e-05) * fVar9 + -0.0013888378) * fVar9 +
               0.041666638) * fVar9 + -0.5) * fVar9 + 1.0) *
             (float)((uRam0000000146af0ce8 ^ uRam0000000146af0bf8) & uVar5 ^ uRam0000000146af0bf8);
    fVar13 = fStack_144 * fVar8 * local_198 - fVar15 * fStack_194;
    fVar7 = fStack_144 * fVar14;
    fVar11 = -(fVar14 * fVar8);
    fVar12 = fStack_194 * fVar8 * local_198 + fVar15 * fStack_144;
    fVar9 = fVar14 * fStack_194;
    fVar14 = fVar15 * fVar14;
    fVar6 = *param_3;
    local_148 = fStack_144 * fVar8 - fStack_194 * fVar15 * local_198;
    local_138 = ZEXT416((uint)fVar6);
    fVar15 = -(fStack_144 * fVar15 * local_198 + fVar8 * fStack_194);
    fVar8 = param_3[1];
    local_e8 = fVar9 * local_118 + fVar7 * local_128 + local_198 * local_108 + local_f8 * 0.0;
    fStack_e4 = fVar9 * fStack_114 + fVar7 * fStack_124 + local_198 * fStack_104 + fStack_f4 * 0.0;
    fStack_e0 = fVar9 * fStack_110 + fVar7 * fStack_120 + local_198 * fStack_100 + fStack_f0 * 0.0;
    fStack_dc = fVar9 * fStack_10c + fVar7 * fStack_11c + local_198 * fStack_fc + fStack_ec * 0.0;
    local_d8 = fVar12 * local_118 + fVar13 * local_128 + fVar11 * local_108 + local_f8 * 0.0;
    fStack_d4 = fVar12 * fStack_114 + fVar13 * fStack_124 + fVar11 * fStack_104 + fStack_f4 * 0.0;
    fStack_d0 = fVar12 * fStack_110 + fVar13 * fStack_120 + fVar11 * fStack_100 + fStack_f0 * 0.0;
    fStack_cc = fVar12 * fStack_10c + fVar13 * fStack_11c + fVar11 * fStack_fc + fStack_ec * 0.0;
    local_c8 = local_148 * local_118 + fVar15 * local_128 + fVar14 * local_108 + local_f8 * 0.0;
    fStack_c4 = local_148 * fStack_114 + fVar15 * fStack_124 + fVar14 * fStack_104 + fStack_f4 * 0.0
    ;
    fStack_c0 = local_148 * fStack_110 + fVar15 * fStack_120 + fVar14 * fStack_100 + fStack_f0 * 0.0
    ;
    fStack_bc = local_148 * fStack_10c + fVar15 * fStack_11c + fVar14 * fStack_fc + fStack_ec * 0.0;
    local_b8 = fVar8 * local_118 + fVar6 * local_128 + fVar10 * local_108 + local_f8 * 1.0;
    fStack_b4 = fVar8 * fStack_114 + fVar6 * fStack_124 + fVar10 * fStack_104 + fStack_f4 * 1.0;
    fStack_190 = fVar8 * fStack_110 + fVar6 * fStack_120 + fVar10 * fStack_100 + fStack_f0 * 1.0;
    fStack_ac = fVar8 * fStack_10c + fVar6 * fStack_11c + fVar10 * fStack_fc + fStack_ec * 1.0;
    *param_5 = CONCAT44(fStack_b4,local_b8);
    *(float *)(param_5 + 1) = fStack_190;
    fStack_140 = fStack_144;
    fStack_13c = fStack_144;
    fStack_b0 = fStack_190;
    puVar2 = (undefined8 *)FMatrix::Rotator(&local_e8,&local_198);
    *param_6 = *puVar2;
    *(undefined4 *)(param_6 + 1) = *(undefined4 *)(puVar2 + 1);
  }
  return;
}



// FUNCTION 1423bf700 TransformToBoneSpace body=1292 status=ok
// SIG undefined TransformToBoneSpace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void USkinnedMeshComponent::TransformToBoneSpace
               (undefined8 param_1,undefined8 param_2,uint *param_3,float *param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
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
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1dc;
  float fStack_1cc;
  float fStack_1bc;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [64];
  undefined1 local_e8 [224];
  
  iVar11 = FUN_1423ac950();
  if (iVar11 != -1) {
    FUN_1423acc10(param_1,local_128,iVar11);
    local_1f8 = *param_4 * _DAT_146af0e90 -
                (float)(int)(_DAT_146af0e80 * *param_4 * _DAT_146af0e90) * _DAT_146af0e70;
    fStack_1f4 = param_4[1] * fRam0000000146af0e94 -
                 (float)(int)(fRam0000000146af0e84 * param_4[1] * fRam0000000146af0e94) *
                 fRam0000000146af0e74;
    fStack_1f0 = param_4[2] * fRam0000000146af0e98 -
                 (float)(int)(fRam0000000146af0e88 * param_4[2] * fRam0000000146af0e98) *
                 fRam0000000146af0e78;
    fStack_1ec = fRam0000000146af0e9c * 0.0 -
                 (float)(int)(fRam0000000146af0e8c * fRam0000000146af0e9c * 0.0) *
                 fRam0000000146af0e7c;
    uVar14 = -(uint)(_DAT_146af0e40 < (float)((uint)local_1f8 & _DAT_146af0d10));
    uVar15 = -(uint)(fRam0000000146af0e44 < (float)((uint)fStack_1f4 & uRam0000000146af0d14));
    uVar16 = -(uint)(fRam0000000146af0e48 < (float)((uint)fStack_1f0 & uRam0000000146af0d18));
    local_1f8 = (float)(((uint)((float)((uint)local_1f8 & _DAT_146af0e60 | _DAT_146af0e50) -
                               local_1f8) ^ (uint)local_1f8) & uVar14 ^ (uint)local_1f8);
    fStack_1f4 = (float)(((uint)((float)((uint)fStack_1f4 & uRam0000000146af0e64 |
                                        uRam0000000146af0e54) - fStack_1f4) ^ (uint)fStack_1f4) &
                         uVar15 ^ (uint)fStack_1f4);
    fStack_1f0 = (float)(((uint)((float)((uint)fStack_1f0 & uRam0000000146af0e68 |
                                        uRam0000000146af0e58) - fStack_1f0) ^ (uint)fStack_1f0) &
                         uVar16 ^ (uint)fStack_1f0);
    fStack_1ec = (float)(((uint)((float)((uint)fStack_1ec & uRam0000000146af0e6c |
                                        uRam0000000146af0e5c) - fStack_1ec) ^ (uint)fStack_1ec) &
                         -(uint)(fRam0000000146af0e4c <
                                (float)((uint)fStack_1ec & uRam0000000146af0d1c)) ^ (uint)fStack_1ec
                        );
    fVar17 = local_1f8 * local_1f8;
    fVar18 = fStack_1f4 * fStack_1f4;
    fVar19 = fStack_1f0 * fStack_1f0;
    fVar20 = fStack_1ec * fStack_1ec;
    local_1f8 = (((((fVar17 * -2.3889859e-08 + 2.7525562e-06) * fVar17 + -0.00019840874) * fVar17 +
                  0.008333331) * fVar17 + -0.16666667) * fVar17 + 1.0) * local_1f8;
    fStack_1f4 = (((((fVar18 * -2.3889859e-08 + 2.7525562e-06) * fVar18 + -0.00019840874) * fVar18 +
                   0.008333331) * fVar18 + -0.16666667) * fVar18 + 1.0) * fStack_1f4;
    fStack_1f0 = (((((fVar19 * -2.3889859e-08 + 2.7525562e-06) * fVar19 + -0.00019840874) * fVar19 +
                   0.008333331) * fVar19 + -0.16666667) * fVar19 + 1.0) * fStack_1f0;
    fStack_1ec = (((((fVar20 * -2.3889859e-08 + 2.7525562e-06) * fVar20 + -0.00019840874) * fVar20 +
                   0.008333331) * fVar20 + -0.16666667) * fVar20 + 1.0) * fStack_1ec;
    fVar20 = (float)param_3[2];
    fStack_1dc = 0.0;
    fStack_1cc = 0.0;
    fStack_1bc = 0.0;
    fVar21 = (((((fVar17 * -2.6051615e-07 + 2.4760495e-05) * fVar17 + -0.0013888378) * fVar17 +
               0.041666638) * fVar17 + -0.5) * fVar17 + 1.0) *
             (float)((_DAT_146af0ce0 ^ _DAT_146af0bf0) & uVar14 ^ _DAT_146af0bf0);
    fStack_184 = (((((fVar18 * -2.6051615e-07 + 2.4760495e-05) * fVar18 + -0.0013888378) * fVar18 +
                   0.041666638) * fVar18 + -0.5) * fVar18 + 1.0) *
                 (float)((uRam0000000146af0ce4 ^ uRam0000000146af0bf4) & uVar15 ^
                        uRam0000000146af0bf4);
    fVar17 = (((((fVar19 * -2.6051615e-07 + 2.4760495e-05) * fVar19 + -0.0013888378) * fVar19 +
               0.041666638) * fVar19 + -0.5) * fVar19 + 1.0) *
             (float)((uRam0000000146af0ce8 ^ uRam0000000146af0bf8) & uVar16 ^ uRam0000000146af0bf8);
    fVar26 = fStack_184 * fStack_1f0 * local_1f8 - fVar17 * fStack_1f4;
    fVar23 = fVar21 * fStack_1f4;
    fVar24 = -(fVar21 * fStack_1f0);
    fVar25 = fStack_1f4 * fStack_1f0 * local_1f8 + fVar17 * fStack_184;
    fVar22 = fStack_184 * fVar21;
    fVar21 = fVar17 * fVar21;
    local_188 = fStack_184 * fStack_1f0 - fStack_1f4 * fVar17 * local_1f8;
    local_178 = ZEXT416(*param_3);
    fVar27 = -(fStack_184 * fVar17 * local_1f8 + fStack_1f0 * fStack_1f4);
    fVar17 = (float)param_3[1];
    fStack_180 = fStack_184;
    fStack_17c = fStack_184;
    pfVar12 = (float *)FMatrix::Inverse(local_128,local_e8);
    uVar7 = *(undefined8 *)(pfVar12 + 0xc);
    uVar8 = *(undefined8 *)(pfVar12 + 0xe);
    fVar18 = pfVar12[4];
    fVar19 = pfVar12[5];
    fVar1 = pfVar12[6];
    fVar2 = pfVar12[7];
    fVar3 = *pfVar12;
    fVar4 = pfVar12[1];
    fVar5 = pfVar12[2];
    fVar6 = pfVar12[3];
    uVar9 = *(undefined8 *)(pfVar12 + 8);
    uVar10 = *(undefined8 *)(pfVar12 + 10);
    local_1a8._0_4_ = (float)uVar9;
    local_1a8._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
    uStack_1a0._0_4_ = (float)uVar10;
    uStack_1a0._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    local_198._0_4_ = (float)uVar7;
    local_198._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
    uStack_190._0_4_ = (float)uVar8;
    uStack_190._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    local_168 = fVar23 * fVar18 + fVar22 * fVar3 + local_1f8 * (float)local_1a8 +
                fStack_1dc * (float)local_198;
    fStack_164 = fVar23 * fVar19 + fVar22 * fVar4 + local_1f8 * local_1a8._4_4_ +
                 fStack_1dc * local_198._4_4_;
    fStack_160 = fVar23 * fVar1 + fVar22 * fVar5 + local_1f8 * (float)uStack_1a0 +
                 fStack_1dc * (float)uStack_190;
    fStack_15c = fVar23 * fVar2 + fVar22 * fVar6 + local_1f8 * uStack_1a0._4_4_ +
                 fStack_1dc * uStack_190._4_4_;
    local_158 = fVar25 * fVar18 + fVar26 * fVar3 + fVar24 * (float)local_1a8 +
                fStack_1cc * (float)local_198;
    fStack_154 = fVar25 * fVar19 + fVar26 * fVar4 + fVar24 * local_1a8._4_4_ +
                 fStack_1cc * local_198._4_4_;
    fStack_150 = fVar25 * fVar1 + fVar26 * fVar5 + fVar24 * (float)uStack_1a0 +
                 fStack_1cc * (float)uStack_190;
    fStack_14c = fVar25 * fVar2 + fVar26 * fVar6 + fVar24 * uStack_1a0._4_4_ +
                 fStack_1cc * uStack_190._4_4_;
    local_148 = local_188 * fVar18 + fVar27 * fVar3 + fVar21 * (float)local_1a8 +
                fStack_1bc * (float)local_198;
    fStack_144 = local_188 * fVar19 + fVar27 * fVar4 + fVar21 * local_1a8._4_4_ +
                 fStack_1bc * local_198._4_4_;
    fStack_140 = local_188 * fVar1 + fVar27 * fVar5 + fVar21 * (float)uStack_1a0 +
                 fStack_1bc * (float)uStack_190;
    fStack_13c = local_188 * fVar2 + fVar27 * fVar6 + fVar21 * uStack_1a0._4_4_ +
                 fStack_1bc * uStack_190._4_4_;
    local_138 = fVar17 * fVar18 + (float)local_178._0_4_ * fVar3 + fVar20 * (float)local_1a8 +
                (float)local_198 * 1.0;
    fStack_134 = fVar17 * fVar19 + (float)local_178._0_4_ * fVar4 + fVar20 * local_1a8._4_4_ +
                 local_198._4_4_ * 1.0;
    fStack_1f0 = fVar17 * fVar1 + (float)local_178._0_4_ * fVar5 + fVar20 * (float)uStack_1a0 +
                 (float)uStack_190 * 1.0;
    fStack_12c = fVar17 * fVar2 + (float)local_178._0_4_ * fVar6 + fVar20 * uStack_1a0._4_4_ +
                 uStack_190._4_4_ * 1.0;
    *param_5 = CONCAT44(fStack_134,local_138);
    *(float *)(param_5 + 1) = fStack_1f0;
    local_1a8 = uVar9;
    uStack_1a0 = uVar10;
    local_198 = uVar7;
    uStack_190 = uVar8;
    fStack_130 = fStack_1f0;
    puVar13 = (undefined8 *)FMatrix::Rotator(&local_168,&local_1f8);
    *param_6 = *puVar13;
    *(undefined4 *)(param_6 + 1) = *(undefined4 *)(puVar13 + 1);
  }
  return;
}



// FUNCTION 1423bfc10 FUN_1423bfc10 body=216 status=ok
// SIG undefined FUN_1423bfc10(void)

void FUN_1423bfc10(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  if ((cVar2 != '\0') || (*(int *)(param_1 + 0x870) <= param_2)) goto LAB_1423bfca6;
  if (((*(char *)(param_1 + 0x878) + 2U & 0xfd) != 0) &&
     (*(char *)(lVar5 + *(longlong *)(param_1 + 0x868)) != '\x01')) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
      if (lVar3 == 0) goto LAB_1423bfc7a;
    }
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(lVar3 + 0x790);
  }
LAB_1423bfc7a:
  if (((*(byte *)(param_1 + 0x881) & 8) == 0) ||
     (uVar4 = 3, *(char *)(lVar5 + *(longlong *)(param_1 + 0x868)) == '\x01')) {
    uVar4 = 1;
  }
  *(undefined1 *)(lVar5 + *(longlong *)(param_1 + 0x868)) = uVar4;
  FUN_1423b6f00(param_1);
LAB_1423bfca6:
  if (((*(longlong *)(param_1 + 0x718) != 0) && (-1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0xa90))) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xa88) + 0x20 + lVar5 * 0x30);
    *puVar1 = 0x3f8000003f800000;
    puVar1[1] = 0x3f800000;
    *(byte *)(param_1 + 0xb1d) = *(byte *)(param_1 + 0xb1d) & 0xf7;
  }
  return;
}



// FUNCTION 1423bfcf0 FUN_1423bfcf0 body=161 status=ok
// SIG undefined FUN_1423bfcf0(void)

void FUN_1423bfcf0(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  if (cVar1 != '\0') {
    return;
  }
  if (param_2 < *(int *)(param_1 + 0x870)) {
    if ((((*(char *)(param_1 + 0x878) + 2U & 0xfd) != 0) &&
        (*(char *)(lVar4 + *(longlong *)(param_1 + 0x868)) != '\x01')) &&
       ((lVar2 = *(longlong *)(param_1 + 0x120), lVar2 != 0 ||
        (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)))) {
      *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(lVar2 + 0x790);
    }
    if (((*(byte *)(param_1 + 0x881) & 8) == 0) ||
       (uVar3 = 3, *(char *)(lVar4 + *(longlong *)(param_1 + 0x868)) == '\x01')) {
      uVar3 = 1;
    }
    *(undefined1 *)(lVar4 + *(longlong *)(param_1 + 0x868)) = uVar3;
    FUN_1423b6f00(param_1);
    return;
  }
  return;
}



// FUNCTION 1423bfda0 FUN_1423bfda0 body=45 status=ok
// SIG undefined FUN_1423bfda0(void)

void FUN_1423bfda0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1423ac950();
  if (iVar1 != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001423bfdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x9d8))(param_1,iVar1);
    return;
  }
  return;
}



// FUNCTION 1423bfdd0 FUN_1423bfdd0 body=134 status=ok
// SIG undefined FUN_1423bfdd0(void)

void FUN_1423bfdd0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x720);
  if (lVar2 != 0) {
    lVar3 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((*(byte *)(param_1 + 0xb1b) & 2) != 0)) {
      if (*(longlong *)(param_1 + 0xcd0) != 0) {
        *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) & 0xbf;
      }
      *(byte *)(param_1 + 0xb1b) = *(byte *)(param_1 + 0xb1b) & 0xfd;
    }
  }
  return;
}



// FUNCTION 1423bfe60 FUN_1423bfe60 body=15 status=ok
// SIG undefined FUN_1423bfe60(void)

void FUN_1423bfe60(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xe78,*param_2);
  return;
}



// FUNCTION 1423bfe70 UnregisterOnPhysicsCreatedDelegate body=15 status=ok
// SIG undefined UnregisterOnPhysicsCreatedDelegate(void)

void USkeletalMeshComponent::UnregisterOnPhysicsCreatedDelegate
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xe90,*param_2);
  return;
}



// FUNCTION 1423bfe80 FUN_1423bfe80 body=257 status=ok
// SIG undefined FUN_1423bfe80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423bfe80(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  
  bVar3 = (bool)(*(byte *)(param_1 + 0x700) >> 3 & 1);
  if ((bVar3 != false) && (*(longlong *)(param_1 + 0x6f8) == 0)) {
    plVar4 = (longlong *)FUN_14178ca30();
    lVar5 = (**(code **)(*plVar4 + 0x6b8))(plVar4);
    bVar3 = lVar5 != 0;
    *(longlong *)(param_1 + 0x6f8) = lVar5;
  }
  if (bVar3 != false) {
    bVar6 = *(byte *)(param_1 + 0x700);
    fVar7 = *(float *)(param_1 + 0x710);
    if (fVar7 < 0.0001) {
      fVar7 = 0.1;
    }
    bVar1 = bVar6;
    if (fVar7 != *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x28) + 0xac)) {
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      bVar1 = 0;
      bVar6 = *(byte *)(param_1 + 0x700);
    }
    *(byte *)(param_1 + 0x700) = (bVar1 & 0xf8 ^ bVar6) & 8 ^ bVar6;
  }
  FUN_14239e300(param_1);
  if ((*(byte *)(param_1 + 0x700) & 8) == 0) {
    fVar7 = *(float *)(param_1 + 0x710);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x28);
    if (fVar7 < 0.0001) {
      fVar7 = 0.1;
    }
    *(undefined8 *)(lVar5 + 0xa0) = _DAT_1468b5d90;
    uVar2 = DAT_1468b5d98;
    *(float *)(lVar5 + 0xac) = fVar7;
    *(undefined4 *)(lVar5 + 0xa8) = uVar2;
  }
  return;
}



// FUNCTION 1423bff90 FUN_1423bff90 body=191 status=ok
// SIG undefined FUN_1423bff90(void)

void FUN_1423bff90(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0xa70))();
  if ((*(byte *)((longlong)param_1 + 0xb1b) & 4) != 0) {
    *(byte *)((longlong)param_1 + 0xb1b) = *(byte *)((longlong)param_1 + 0xb1b) & 0xfb;
    if (*(char *)((longlong)param_1 + 0xb19) == '\x01') {
      *(char *)((longlong)param_1 + 0xb17) =
           (*(char *)((longlong)param_1 + 0xb17) == '\x02') + '\x01';
    }
    else if (*(char *)((longlong)param_1 + 0xb19) == '\x02') {
      *(undefined1 *)((longlong)param_1 + 0xb17) = 2;
    }
    FUN_1427e9790(param_1);
  }
  plVar1 = (longlong *)param_1[0x19a];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2,param_1[0x19b]);
    plVar1 = (longlong *)param_1[0x19c];
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[5] != '\0')) {
      (**(code **)(*plVar1 + 0x288))(plVar1,param_1[0x19a],param_1[0x19b]);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xb17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb19) = 0;
  return;
}



// FUNCTION 1423c0050 FUN_1423c0050 body=160 status=ok
// SIG undefined FUN_1423c0050(void)

void FUN_1423c0050(longlong *param_1)

{
  char cVar1;
  
  if ((*(char *)((longlong)param_1 + 0x3d) == '\0') ||
     (cVar1 = (**(code **)(*param_1 + 0xa78))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if ((*(char *)((longlong)param_1 + 0xead) == '\0') &&
     (cVar1 != *(char *)((longlong)param_1 + 0xc25))) {
    if (cVar1 == '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x183);
    }
    else {
      cVar1 = FUN_1423521e0(param_1,param_1 + 0x183);
      if (cVar1 != '\0') {
        param_1[0x18d] = (longlong)param_1;
        FTickFunction::AddPrerequisite(param_1 + 0x183,param_1,param_1 + 6);
        FTickFunction::AddPrerequisite(param_1 + 0x183,param_1,param_1 + 0x1b6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1423c00f0 FUN_1423c00f0 body=82 status=ok
// SIG undefined FUN_1423c00f0(void)

void FUN_1423c00f0(longlong *param_1)

{
  char cVar1;
  
  if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
    if (cVar1 == '\0') {
      cVar1 = FUN_1426ce250(param_1);
      if (cVar1 == '\0') goto LAB_1423c0133;
    }
    FUN_1423b8450(param_1,1);
    return;
  }
LAB_1423c0133:
  FUN_1423b8450(param_1,0);
  return;
}



// FUNCTION 1423c0150 FUN_1423c0150 body=99 status=ok
// SIG undefined FUN_1423c0150(void)

void FUN_1423c0150(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = UActorComponent::IsComponentTickEnabled();
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 0xa00) != 0) {
      FUN_142491970(param_1);
      *(undefined8 *)(param_1 + 0xa00) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0xa00) == 0) {
    uVar1 = FUN_14248a5b0(param_1);
    *(undefined8 *)(param_1 + 0xa00) = uVar1;
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
              (param_1 + 0x8e0,*(undefined8 *)(param_1 + 0x8f0));
    return;
  }
  return;
}



// FUNCTION 1423c01c0 FUN_1423c01c0 body=41 status=ok
// SIG undefined FUN_1423c01c0(void)

undefined1 FUN_1423c01c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423c01f0();
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xb1d) = *(byte *)(param_1 + 0xb1d) & 0xf7;
    return 1;
  }
  return 0;
}



// FUNCTION 1423c01f0 FUN_1423c01f0 body=604 status=ok
// SIG undefined FUN_1423c01f0(void)

byte FUN_1423c01f0(longlong param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  undefined4 local_res8;
  undefined4 local_resc;
  
  iVar9 = DAT_146af0b40;
  bVar15 = false;
  if (param_2 == '\0') goto LAB_1423c03b2;
  if (*(longlong *)(param_1 + 0x718) == 0) {
    *(undefined4 *)(param_1 + 0x83c) = 0;
  }
  else {
    iVar10 = 0;
    iVar11 = 0;
    if (*(char *)(param_1 + 0x834) != '\0') {
      iVar11 = *(int *)(param_1 + 0x838);
    }
    lVar6 = FUN_14233fea0();
    if (lVar6 != 0) {
      FUN_14233fea0(param_1);
    }
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x718) + 0xd8);
    if (iVar12 <= iVar11) {
      iVar12 = iVar11;
    }
    iVar11 = iVar12;
    iVar14 = iVar10;
    if (((*(longlong *)(param_1 + 0x888) != 0) &&
        (iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x888) + 0x40) + 8) + -1,
        iVar11 = 0, -1 < iVar12)) && (iVar11 = iVar14, iVar12 < iVar14)) {
      iVar11 = iVar12;
    }
    iVar12 = *(int *)(param_1 + 0x830);
    if (iVar12 < 1) {
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x720);
      iVar12 = iVar10;
      if (cVar4 == '\0') {
        if (((*(byte *)(param_1 + 0x87c) & 1) != 0) && (*(longlong *)(param_1 + 400) != 0)) {
          lVar7 = FUN_142a0cc80();
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x10);
          if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          if (bVar15) {
            iVar9 = *(int *)(*(longlong *)(param_1 + 400) + 0x83c);
            if ((-1 < iVar9) && (iVar12 = iVar14, iVar9 < iVar14)) {
              iVar12 = iVar9;
            }
            goto LAB_1423c0368;
          }
        }
        iVar12 = iVar14;
        if (((*(longlong *)(param_1 + 0x888) != 0) &&
            (iVar9 = *(int *)(*(longlong *)(param_1 + 0x888) + 0x28) + iVar9, iVar12 = iVar10,
            -1 < iVar9)) && (iVar12 = iVar14, iVar9 < iVar14)) {
          iVar12 = iVar9;
        }
      }
      else {
        lVar6 = FWeakObjectPtr::Get(param_1 + 0x720);
        iVar9 = *(int *)(lVar6 + 0x83c);
        if ((-1 < iVar9) && (iVar12 = iVar14, iVar9 < iVar14)) {
          iVar12 = iVar9;
        }
      }
LAB_1423c0368:
      piVar1 = (int *)(param_1 + 0x83c);
      *piVar1 = iVar12;
      if (0 < iVar11) {
        if (iVar14 < iVar11) {
          *piVar1 = iVar14;
        }
        else {
          if ((iVar11 <= iVar12) && (iVar11 = iVar14, iVar12 < iVar14)) {
            iVar11 = iVar12;
          }
          *piVar1 = iVar11;
        }
      }
    }
    else {
      if ((iVar11 <= iVar12 + -1) && (iVar11 = iVar14, iVar12 <= iVar14)) {
        iVar11 = iVar12 + -1;
      }
      *(int *)(param_1 + 0x83c) = iVar11;
    }
  }
  bVar15 = *(int *)(param_1 + 0x83c) != *(int *)(param_1 + 0x840);
LAB_1423c03b2:
  bVar3 = FUN_1423bd9c0(param_1);
  bVar3 = bVar15 | bVar3;
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x83c);
  if (*(longlong *)(param_1 + 0x888) != 0) {
    *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(*(longlong *)(param_1 + 0x888) + 0x2c);
  }
  puVar13 = *(undefined4 **)(param_1 + 0x778);
  puVar2 = puVar13 + (longlong)*(int *)(param_1 + 0x780) * 2;
  for (; puVar13 != puVar2; puVar13 = puVar13 + 2) {
    local_res8 = *puVar13;
    local_resc = puVar13[1];
    cVar4 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar4 != '\0') {
      plVar8 = (longlong *)FWeakObjectPtr::Get(&local_res8);
      bVar5 = (**(code **)(*plVar8 + 0x980))(plVar8,0);
      bVar3 = bVar3 | bVar5;
    }
  }
  return bVar3;
}



// FUNCTION 1423c0450 FUN_1423c0450 body=883 status=ok
// SIG undefined FUN_1423c0450(void)

void FUN_1423c0450(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  DWORD DVar11;
  float *pfVar12;
  DWORD *pDVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  undefined1 local_b0 [16];
  undefined1 local_a0 [128];
  
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar10 = FUN_1415ad720(&DAT_1468e2448), cVar10 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)))) {
      fVar3 = *(float *)(param_1 + 0x2e4);
      pfVar12 = (float *)FLinearColor::FLinearColor(local_b0,param_1 + 0x2e8);
      lVar18 = *(longlong *)(param_1 + 0x4a8);
      uVar4 = *(undefined4 *)(param_1 + 0x2f0);
      uVar5 = *(undefined4 *)(param_1 + 0x2f4);
      fVar6 = *pfVar12;
      fVar7 = pfVar12[1];
      fVar8 = pfVar12[2];
      fVar9 = pfVar12[3];
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      *(undefined4 *)(lVar18 + 0x104) = uVar4;
      *(undefined4 *)(lVar18 + 0x108) = uVar5;
      *(float *)(lVar18 + 0x38) = fVar3 * fVar6;
      *(float *)(lVar18 + 0x3c) = fVar3 * fVar7;
      *(float *)(lVar18 + 0x40) = fVar3 * fVar8;
      *(float *)(lVar18 + 0x44) = fVar3 * fVar9;
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      fVar3 = *(float *)(param_1 + 0x2e4);
      pfVar12 = (float *)FLinearColor::FLinearColor(local_a0,param_1 + 0x2e8);
      fVar6 = *pfVar12;
      fVar7 = pfVar12[1];
      fVar8 = pfVar12[2];
      fVar9 = pfVar12[3];
      pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar14 = TlsGetValue(*pDVar13);
      plVar15 = (longlong *)0x0;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)operator_new(0x18);
        if (plVar14 != (longlong *)0x0) {
          *plVar14 = 0;
          plVar14[1] = 0;
          *(undefined4 *)(plVar14 + 2) = 0;
          plVar15 = plVar14;
        }
        TlsSetValue(*pDVar13,plVar15);
        plVar14 = plVar15;
      }
      plVar15 = (longlong *)plVar14[1];
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)*plVar14;
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
          plVar14[1] = (longlong)plVar15;
          if (plVar15 == (longlong *)0x0) {
            puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar14[1] = (longlong)puVar16;
            lVar18 = 0x1f;
            do {
              puVar2 = puVar16 + 0x20;
              *puVar16 = puVar2;
              lVar18 = lVar18 + -1;
              puVar16 = puVar2;
            } while (lVar18 != 0);
            *puVar2 = 0;
            plVar15 = (longlong *)plVar14[1];
          }
          iVar17 = 0x20;
          *(undefined4 *)(plVar14 + 2) = 0x20;
        }
        else {
          iVar17 = 0x20;
          plVar14[1] = (longlong)plVar15;
          *(undefined4 *)(plVar14 + 2) = 0x20;
          *plVar14 = 0;
        }
      }
      else {
        iVar17 = (int)plVar14[2];
      }
      plVar14[1] = *plVar15;
      *(int *)(plVar14 + 2) = iVar17 + -1;
      *plVar15 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar15 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
      *(undefined1 *)(plVar15 + 6) = 0;
      *plVar15 = (longlong)&PTR_FUN_14506d530;
      plVar15[7] = 0;
      uVar4 = *(undefined4 *)(param_1 + 0x2f4);
      lVar18 = *(longlong *)(param_1 + 0x4a8);
      *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(param_1 + 0x2f0);
      *(undefined4 *)((longlong)plVar15 + 0x2c) = uVar4;
      plVar15[2] = lVar18;
      *(float *)(plVar15 + 3) = fVar3 * fVar6;
      *(float *)((longlong)plVar15 + 0x1c) = fVar3 * fVar7;
      *(float *)(plVar15 + 4) = fVar3 * fVar8;
      *(float *)((longlong)plVar15 + 0x24) = fVar3 * fVar9;
      lVar18 = plVar15[7];
      piVar1 = (int *)(lVar18 + 0x48);
      if (lVar18 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar18;
      FUN_14048a640(fVar3 * fVar6,0,0xff,1,0);
      if (lVar18 != 0) {
        LOCK();
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
  }
  return;
}



// FUNCTION 1423c07d0 FUN_1423c07d0 body=367 status=ok
// SIG undefined FUN_1423c07d0(void)

void FUN_1423c07d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x788);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x790) = 0;
  if (*(int *)(param_1 + 0x794) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (((*(longlong *)(param_1 + 0x718) != 0) &&
      (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x720), cVar2 != '\0')) &&
     (lVar5 = FWeakObjectPtr::Get(param_1 + 0x720), *(longlong *)(lVar5 + 0x718) != 0)) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x720);
    lVar5 = *(longlong *)(lVar5 + 0x718);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x160);
    *(undefined4 *)(param_1 + 0x790) = 0;
    uVar7 = uVar6;
    if (*(int *)(param_1 + 0x794) != iVar3) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,iVar3);
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x790);
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x160) + (int)uVar7;
    *(int *)(param_1 + 0x790) = iVar3;
    if (*(int *)(param_1 + 0x794) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    if (*(longlong *)(param_1 + 0x718) == lVar5) {
      uVar7 = uVar6;
      if (0 < *(int *)(param_1 + 0x790)) {
        do {
          *(int *)(uVar6 + *plVar1) = (int)uVar7;
          uVar8 = (int)uVar7 + 1;
          uVar6 = uVar6 + 4;
          uVar7 = (ulonglong)uVar8;
        } while ((int)uVar8 < *(int *)(param_1 + 0x790));
      }
    }
    else {
      uVar7 = uVar6;
      uVar9 = uVar6;
      if (0 < *(int *)(param_1 + 0x790)) {
        do {
          local_res8 = *(undefined8 *)
                        (uVar9 + *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158));
          uVar4 = FReferenceSkeleton::FindBoneIndex(lVar5 + 0x138,&local_res8);
          uVar8 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar8;
          *(undefined4 *)(uVar7 + *plVar1) = uVar4;
          uVar7 = uVar7 + 4;
          uVar9 = uVar9 + 0x10;
        } while ((int)uVar8 < *(int *)(param_1 + 0x790));
      }
    }
  }
  *(int *)(param_1 + 0x798) = *(int *)(param_1 + 0x798) + 1;
  return;
}



// FUNCTION 1423c0940 FUN_1423c0940 body=656 status=ok
// SIG undefined FUN_1423c0940(void)

void FUN_1423c0940(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int *piVar15;
  ulonglong local_res8;
  longlong *local_58;
  undefined8 local_50;
  ulonglong uVar10;
  
  lVar5 = param_1[200];
  if (((lVar5 != 0) && (0 < (int)param_1[0x102])) &&
     (lVar6 = param_1[0xe3], 0 < *(int *)(lVar6 + 0x128))) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    plVar13 = *(longlong **)(lVar6 + 0x120);
    plVar1 = plVar13 + *(int *)(lVar6 + 0x128);
    if (plVar13 != plVar1) {
      do {
        lVar5 = *plVar13;
        if (lVar5 != 0) {
          lVar8 = *(longlong *)(lVar5 + 0x30);
          lVar5 = (longlong)*(int *)(lVar5 + 0x38) * 0x30 + lVar8;
          for (; lVar8 != lVar5; lVar8 = lVar8 + 0x30) {
            piVar15 = *(int **)(lVar8 + 0x18);
            local_res8 = 0;
            uVar14 = (longlong)*(int *)(lVar8 + 0x20) & 0x3fffffffffffffff;
            if (piVar15 + *(int *)(lVar8 + 0x20) < piVar15) {
              uVar14 = 0;
            }
            if (uVar14 != 0) {
              do {
                uVar10 = 0;
                iVar2 = *piVar15;
                uVar11 = uVar10;
                if (0 < *(int *)(*(longlong *)(lVar6 + 0x40) + 8)) {
                  do {
                    plVar7 = *(longlong **)(uVar11 + **(longlong **)(lVar6 + 0x40));
                    if ((-1 < iVar2) && (iVar2 < (int)plVar7[1])) {
                      lVar6 = (**(code **)(*param_1 + 0x560))
                                        (param_1,*(undefined2 *)((longlong)iVar2 * 0x108 + *plVar7))
                      ;
                      uVar3 = local_50;
                      lVar12 = (longlong)(int)local_50;
                      for (plVar7 = local_58; plVar7 != local_58 + lVar12; plVar7 = plVar7 + 1) {
                        if (*plVar7 == lVar6) {
                          if ((int)((longlong)plVar7 - (longlong)local_58 >> 3) != -1)
                          goto LAB_1423c0afe;
                          break;
                        }
                      }
                      iVar4 = (int)local_50 + 1;
                      local_50 = CONCAT44(local_50._4_4_,iVar4);
                      if (local_50._4_4_ < iVar4) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (&local_58,uVar3 & 0xffffffff);
                      }
                      local_58[lVar12] = lVar6;
                    }
LAB_1423c0afe:
                    lVar6 = param_1[0xe3];
                    uVar9 = (int)uVar10 + 1;
                    uVar10 = (ulonglong)uVar9;
                    uVar11 = uVar11 + 8;
                  } while ((int)uVar9 < *(int *)(*(longlong *)(lVar6 + 0x40) + 8));
                }
                local_res8 = local_res8 + 1;
                piVar15 = piVar15 + 1;
              } while (local_res8 != uVar14);
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar1);
      lVar5 = param_1[200];
    }
    FUN_1427826c0(lVar5,&local_58);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423c0bd0 FUN_1423c0bd0 body=710 status=ok
// SIG undefined FUN_1423c0bd0(void)

void FUN_1423c0bd0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if ((*(longlong *)(param_1 + 0x4a8) != 0) &&
     ((lVar8 = FUN_14233fea0(), lVar8 == 0 || (1 < *(int *)(lVar8 + 8))))) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      local_38 = *(undefined4 *)(param_1 + 0x334);
      local_40 = *(longlong *)(param_1 + 0x4a8);
      local_34 = *(undefined4 *)(param_1 + 0x338);
      local_30 = *(undefined4 *)(param_1 + 0x33c);
      local_2c = *(undefined4 *)(param_1 + 0x340);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      *(undefined4 *)(local_40 + 0x110) = local_38;
      *(undefined4 *)(local_40 + 0x114) = local_34;
      *(undefined4 *)(local_40 + 0x118) = local_30;
      FLinearColor::FLinearColor(&local_50,&local_2c);
      *(undefined4 *)(local_40 + 0x11c) = local_50;
      *(undefined4 *)(local_40 + 0x120) = uStack_4c;
      *(undefined4 *)(local_40 + 0x124) = uStack_48;
      *(undefined4 *)(local_40 + 0x128) = uStack_44;
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
      return;
    }
    pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar10 = TlsGetValue(*pDVar9);
    plVar11 = (longlong *)0x0;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)operator_new(0x18);
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = 0;
        plVar10[1] = 0;
        *(undefined4 *)(plVar10 + 2) = 0;
        plVar11 = plVar10;
      }
      TlsSetValue(*pDVar9,plVar11);
      plVar10 = plVar11;
    }
    plVar11 = (longlong *)plVar10[1];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)*plVar10;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
        plVar10[1] = (longlong)plVar11;
        if (plVar11 == (longlong *)0x0) {
          puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar10[1] = (longlong)puVar12;
          lVar8 = 0x1f;
          do {
            puVar2 = puVar12 + 0x20;
            *puVar12 = puVar2;
            lVar8 = lVar8 + -1;
            puVar12 = puVar2;
          } while (lVar8 != 0);
          *puVar2 = 0;
          plVar11 = (longlong *)plVar10[1];
        }
        iVar13 = 0x20;
        *(undefined4 *)(plVar10 + 2) = 0x20;
      }
      else {
        iVar13 = 0x20;
        plVar10[1] = (longlong)plVar11;
        *(undefined4 *)(plVar10 + 2) = 0x20;
        *plVar10 = 0;
      }
    }
    else {
      iVar13 = (int)plVar10[2];
    }
    plVar10[1] = *plVar11;
    *(int *)(plVar10 + 2) = iVar13 + -1;
    *plVar11 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar11 + 1) = 0xff;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *(undefined1 *)(plVar11 + 5) = 0;
    *plVar11 = (longlong)&PTR_FUN_14506d540;
    plVar11[6] = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x33c);
    uVar4 = *(undefined4 *)(param_1 + 0x338);
    lVar8 = *(longlong *)(param_1 + 0x4a8);
    uVar5 = *(undefined4 *)(param_1 + 0x340);
    *(undefined4 *)(plVar11 + 3) = *(undefined4 *)(param_1 + 0x334);
    *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar4;
    *(undefined4 *)(plVar11 + 4) = uVar3;
    plVar11[2] = lVar8;
    *(undefined4 *)((longlong)plVar11 + 0x24) = uVar5;
    lVar8 = plVar11[6];
    piVar1 = (int *)(lVar8 + 0x48);
    if (lVar8 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res10 = lVar8;
    FUN_14048a160(plVar11,0,0xff,1,0);
    if (lVar8 != 0) {
      LOCK();
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
  }
  return;
}



// FUNCTION 1423c0eb0 FUN_1423c0eb0 body=468 status=ok
// SIG undefined FUN_1423c0eb0(void)

void FUN_1423c0eb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    return;
  }
  if (DAT_146af0b4c != 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = -1;
    uVar5 = UAtmosphericFogComponent::GetPrivateStaticClass();
    FUN_1417a5560(uVar5,&local_28,1,0x10,0);
    uVar8 = local_20 & 0xffffffff;
    do {
      local_18 = local_18 + 1;
      if ((int)local_20 <= local_18) break;
    } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
    do {
      if ((local_18 < 0) || ((int)uVar8 <= local_18)) goto LAB_1423c1000;
      lVar1 = *(longlong *)(local_28 + (longlong)local_18 * 8);
      cVar2 = UWorld::ContainsActor(param_1,*(undefined8 *)(lVar1 + 0x118));
      if (cVar2 != '\0') {
        uVar3 = *(uint *)(lVar1 + 0xc);
        lVar6 = 0;
        if ((int)uVar3 < (int)DAT_1469e91c4) {
          uVar7 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)uVar7 * 0x18;
        }
        if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
          FUN_1423b9ca0(lVar1);
        }
      }
      uVar8 = local_20 & 0xffffffff;
      do {
        local_18 = local_18 + 1;
        if ((int)local_20 <= local_18) break;
      } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
    } while( true );
  }
LAB_1423c1017:
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  }
  if (0 < DAT_146af0ef8) {
    FUN_1423c1090(param_1,&DAT_146af0ef0,1);
  }
  if (0 < DAT_146af0f08) {
    FUN_1423c1090(param_1,&DAT_146af0f00,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001423c1077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  return;
LAB_1423c1000:
  if (local_28 != 0) {
    FMemory::Free(local_28);
  }
  goto LAB_1423c1017;
}



// FUNCTION 1423c1090 FUN_1423c1090 body=1277 status=ok
// SIG undefined FUN_1423c1090(void)

void FUN_1423c1090(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  
  if ((DAT_146b09470 == 0) ||
     ((((*(int *)(DAT_146b09470 + 0x68) < 1 &&
        (*(int *)(DAT_146b09470 + 0xa0) - *(int *)(DAT_146b09470 + 0xcc) < 1)) &&
       (*(int *)(DAT_146b09470 + 0x10) < 1)) && (*(int *)(DAT_146b09470 + 0x6c) < 1)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  iVar13 = (int)param_2[1] + -1;
  if (-1 < iVar13) {
    lVar16 = (longlong)iVar13 * 8;
    lVar12 = (longlong)(int)param_2[1] << 3;
    lVar17 = lVar16;
    do {
      lVar3 = *(longlong *)(lVar17 + *param_2);
      lVar9 = *(longlong *)(lVar3 + 0x118);
      if (((lVar9 == 0) || (lVar8 = AActor::GetLevel(lVar9), lVar8 == 0)) ||
         (lVar9 = AActor::GetLevel(lVar9), (*(byte *)(lVar9 + 0x204) & 0x10) != 0)) {
        lVar9 = *(longlong *)(lVar3 + 0x120);
        if (lVar9 == 0) {
          lVar9 = FUN_1423407b0(lVar3);
        }
        if ((lVar9 == param_1) && ((!bVar5 || (*(char *)(lVar3 + 0x2f8) == '\x01')))) {
          if ((*(char *)(lVar3 + 0x2f8) != '\x01') || (*(longlong *)(lVar3 + 0x300) != 0)) {
            if (param_3 == '\0') {
              plVar4 = *(longlong **)(lVar3 + 0x3f0);
              if (plVar4 == (longlong *)0x0) {
LAB_1423c138d:
                puVar10 = (undefined8 *)operator_new();
                if (puVar10 != (undefined8 *)0x0) {
                  *(undefined4 *)(puVar10 + 1) = 4;
                  puVar10[2] = 0;
                  puVar10[3] = 0;
                  *(undefined1 *)(puVar10 + 5) = 0;
                  puVar10[6] = 0;
                  puVar10[7] = 0;
                  puVar10[8] = 0;
                  puVar10[9] = 0xc7efffffe0000000;
                  puVar10[10] = 0;
                  puVar10[0xb] = 0;
                  *(undefined4 *)(puVar10 + 0xc) = 0;
                  *puVar10 = &PTR__scalar_deleting_destructor__14506c840;
                  puVar10[0xd] = &PTR_LAB_14506c8a0;
                  *(undefined2 *)((longlong)puVar10 + 100) = 0;
                  *(undefined1 *)((longlong)puVar10 + 0x66) = 0;
                  puVar10[0xe] = 0;
                  *(undefined4 *)(puVar10 + 0xf) = 0;
                  puVar10[0x10] = 0;
                  *(undefined4 *)(puVar10 + 0x11) = 0;
                }
                lVar9 = *(longlong *)(lVar3 + 0x3f0);
                *(undefined8 **)(lVar3 + 0x3f0) = puVar10;
                if (puVar10 != (undefined8 *)0x0) {
                  *(int *)(puVar10 + 0x11) = *(int *)(puVar10 + 0x11) + 1;
                }
                if (lVar9 != 0) {
                  piVar1 = (int *)(lVar9 + 0x88);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_141edf360(lVar9);
                    BeginCleanup(lVar9 + 0x68);
                  }
                }
                uVar2 = *(uint *)(lVar3 + 0x30c);
                iVar6 = 0x1f;
                if (uVar2 != 0) {
                  for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                  }
                }
                if (uVar2 == 0) {
                  iVar6 = 0x20;
                }
                else {
                  iVar6 = 0x1f - iVar6;
                }
                uVar7 = uVar2 - 1;
                iVar14 = 0x1f;
                if (uVar7 != 0) {
                  for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                  }
                }
                if (uVar7 == 0) {
                  iVar14 = 0x20;
                }
                else {
                  iVar14 = 0x1f - iVar14;
                }
                lVar9 = *(longlong *)(lVar3 + 0x3f0);
                *(uint *)(lVar9 + 0x74) = (0x20U - iVar14 & ~((iVar6 << 0x1a) >> 0x1f)) + 1;
                *(uint *)(lVar9 + 0x70) = uVar2;
                *(undefined4 *)(lVar9 + 0x78) = 10;
                FUN_141edf270(*(undefined8 *)(lVar3 + 0x3f0));
                FUN_1423424e0(lVar3);
              }
              else {
                (**(code **)(*plVar4 + 0x48))(plVar4);
                (**(code **)(*plVar4 + 0x40))(plVar4);
                plVar4 = *(longlong **)(lVar3 + 0x3f0);
                if ((plVar4 == (longlong *)0x0) ||
                   (iVar6 = (**(code **)(*plVar4 + 0x40))(plVar4), iVar6 != *(int *)(lVar3 + 0x30c))
                   ) goto LAB_1423c138d;
              }
              uVar15 = *(undefined8 *)(lVar3 + 1000);
              lVar9 = lVar3 + 0x400;
              lVar8 = lVar3 + 0x490;
              uVar11 = *(undefined8 *)(lVar3 + 0x3f0);
            }
            else {
              plVar4 = *(longlong **)(lVar3 + 0x348);
              if (plVar4 == (longlong *)0x0) {
LAB_1423c11fd:
                puVar10 = (undefined8 *)operator_new();
                if (puVar10 != (undefined8 *)0x0) {
                  *(undefined4 *)(puVar10 + 1) = 4;
                  puVar10[2] = 0;
                  puVar10[3] = 0;
                  *(undefined1 *)(puVar10 + 5) = 0;
                  puVar10[6] = 0;
                  puVar10[7] = 0;
                  puVar10[8] = 0;
                  puVar10[9] = 0xc7efffffe0000000;
                  puVar10[10] = 0;
                  puVar10[0xb] = 0;
                  *(undefined4 *)(puVar10 + 0xc) = 0;
                  *puVar10 = &PTR__scalar_deleting_destructor__14506c840;
                  puVar10[0xd] = &PTR_LAB_14506c8a0;
                  *(undefined2 *)((longlong)puVar10 + 100) = 0;
                  *(undefined1 *)((longlong)puVar10 + 0x66) = 0;
                  puVar10[0xe] = 0;
                  *(undefined4 *)(puVar10 + 0xf) = 0;
                  puVar10[0x10] = 0;
                  *(undefined4 *)(puVar10 + 0x11) = 0;
                }
                lVar9 = *(longlong *)(lVar3 + 0x348);
                *(undefined8 **)(lVar3 + 0x348) = puVar10;
                if (puVar10 != (undefined8 *)0x0) {
                  *(int *)(puVar10 + 0x11) = *(int *)(puVar10 + 0x11) + 1;
                }
                if (lVar9 != 0) {
                  piVar1 = (int *)(lVar9 + 0x88);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_141edf360(lVar9);
                    BeginCleanup(lVar9 + 0x68);
                  }
                }
                uVar2 = *(uint *)(lVar3 + 0x30c);
                iVar6 = 0x1f;
                if (uVar2 != 0) {
                  for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                  }
                }
                if (uVar2 == 0) {
                  iVar6 = 0x20;
                }
                else {
                  iVar6 = 0x1f - iVar6;
                }
                uVar7 = uVar2 - 1;
                iVar14 = 0x1f;
                if (uVar7 != 0) {
                  for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                  }
                }
                if (uVar7 == 0) {
                  iVar14 = 0x20;
                }
                else {
                  iVar14 = 0x1f - iVar14;
                }
                lVar9 = *(longlong *)(lVar3 + 0x348);
                *(uint *)(lVar9 + 0x74) = (0x20U - iVar14 & ~((iVar6 << 0x1a) >> 0x1f)) + 1;
                *(uint *)(lVar9 + 0x70) = uVar2;
                *(undefined4 *)(lVar9 + 0x78) = 10;
                FUN_141edf270(*(undefined8 *)(lVar3 + 0x348));
                FUN_1423424e0(lVar3);
              }
              else {
                (**(code **)(*plVar4 + 0x48))(plVar4);
                (**(code **)(*plVar4 + 0x40))(plVar4);
                plVar4 = *(longlong **)(lVar3 + 0x348);
                if ((plVar4 == (longlong *)0x0) ||
                   (iVar6 = (**(code **)(*plVar4 + 0x40))(plVar4), iVar6 != *(int *)(lVar3 + 0x30c))
                   ) goto LAB_1423c11fd;
              }
              uVar15 = *(undefined8 *)(lVar3 + 0x300);
              lVar9 = lVar3 + 0x350;
              lVar8 = lVar3 + 0x3e0;
              uVar11 = *(undefined8 *)(lVar3 + 0x348);
            }
            (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0xa8))
                      (*(longlong **)(param_1 + 0x1b8),lVar3,*(undefined1 *)(lVar3 + 0x314),uVar15,
                       uVar11,lVar8,lVar9,0);
            FUN_141edede0(lVar3 + 0x498,0);
            *(undefined1 *)(lVar3 + 0x346) = 1;
            FUN_1423424e0(lVar3);
          }
          iVar6 = (int)param_2[1];
          iVar14 = (iVar6 - iVar13) + -1;
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + lVar16),(void *)(*param_2 + lVar12),(longlong)iVar14 << 3
                      );
            iVar6 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
        }
      }
      lVar12 = lVar12 + -8;
      lVar16 = lVar16 + -8;
      lVar17 = lVar17 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  return;
}



// FUNCTION 1423c1590 FUN_1423c1590 body=261 status=ok
// SIG undefined FUN_1423c1590(void)

void FUN_1423c1590(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1423b8ff0();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x720);
  if (lVar2 != 0) {
    lVar3 = FUN_142a07000();
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
      if (*(longlong *)(lVar2 + 0xa48) != 0) {
        FUN_14227cb40(*(longlong *)(lVar2 + 0xa48),param_1);
      }
      if (*(longlong *)(param_1 + 0x718) != 0) {
        if (0 < *(int *)(lVar2 + 0xd58) - *(int *)(lVar2 + 0xd84)) {
          FUN_142246e20(*(longlong *)(param_1 + 0x718),lVar2 + 0xd50,param_1 + 0x808,param_1 + 0x818
                       );
        }
        if (0 < *(int *)(param_1 + 0xd58) - *(int *)(param_1 + 0xd84)) {
          FUN_142246e20(*(undefined8 *)(param_1 + 0x718),param_1 + 0xd50,param_1 + 0x808,
                        param_1 + 0x818);
        }
      }
    }
  }
  FUN_1423424c0(param_1);
  return;
}



// FUNCTION 1423c16b0 UpdateSpline body=858 status=ok
// SIG undefined UpdateSpline(void)

void FSplineCurves::UpdateSpline
               (longlong *param_1,char param_2,undefined1 param_3,int param_4,char param_5,
               float param_6,undefined8 param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar7 = (int)param_1[1];
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    if (iVar7 < 1) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)((longlong)iVar7 * 0x2c + -0x2c + *param_1);
    }
    if (param_5 == '\0') {
      param_6 = fVar11 + 1.0;
    }
    if ((iVar7 == 0) ||
       (fVar11 = *(float *)((longlong)iVar7 * 0x2c + -0x2c + *param_1), param_6 <= fVar11)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      *(float *)((longlong)param_1 + 0x14) = param_6 - fVar11;
    }
    *(undefined1 *)(param_1 + 2) = uVar4;
    if (((int)param_1[4] == 0) ||
       (fVar11 = *(float *)(param_1[3] + -0x50 + (longlong)(int)param_1[4] * 0x50),
       param_6 <= fVar11)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      *(float *)((longlong)param_1 + 0x2c) = param_6 - fVar11;
    }
    *(undefined1 *)(param_1 + 5) = uVar4;
    if (((int)param_1[7] == 0) ||
       (fVar11 = *(float *)((longlong)(int)param_1[7] * 0x2c + -0x2c + param_1[6]),
       param_6 <= fVar11)) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 1;
      *(float *)((longlong)param_1 + 0x44) = param_6 - fVar11;
    }
  }
  FInterpCurve<FVector>::AutoSetTangents(param_1,0,param_3);
  FInterpCurve<FQuat>::AutoSetTangents(param_1 + 3,0,param_3);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 6,0,param_3);
  *(undefined4 *)(param_1 + 10) = 0;
  plVar1 = param_1 + 9;
  if (param_2 == '\0') {
    iVar7 = iVar7 + -1;
  }
  if (*(int *)((longlong)param_1 + 0x54) < iVar7 * param_4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
  }
  iVar6 = 0;
  fVar11 = 0.0;
  if (0 < iVar7) {
    do {
      iVar5 = 0;
      if (0 < param_4) {
        do {
          fVar9 = (float)iVar5 * (1.0 / (float)param_4);
          if (iVar5 == 0) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = (float)GetSegmentLength(param_1,iVar6,fVar9,param_2,param_7);
          }
          iVar2 = (int)param_1[10];
          lVar8 = (longlong)iVar2;
          *(int *)(param_1 + 10) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0x54) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeGrow(plVar1,iVar2);
          }
          lVar3 = *plVar1;
          iVar5 = iVar5 + 1;
          *(float *)(lVar3 + lVar8 * 0x14) = fVar10 + fVar11;
          *(float *)(lVar3 + 4 + lVar8 * 0x14) = (float)iVar6 + fVar9;
          *(undefined8 *)(lVar3 + 8 + lVar8 * 0x14) = 0;
          *(undefined1 *)(lVar3 + 0x10 + lVar8 * 0x14) = 0;
        } while (iVar5 < param_4);
      }
      fVar9 = (float)GetSegmentLength(param_1,iVar6,0x3f800000,param_2,param_7);
      iVar6 = iVar6 + 1;
      fVar11 = fVar11 + fVar9;
    } while (iVar6 < iVar7);
  }
  lVar8 = (longlong)(int)param_1[10];
  iVar6 = (int)param_1[10] + 1;
  *(int *)(param_1 + 10) = iVar6;
  if (*(int *)((longlong)param_1 + 0x54) < iVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
              (plVar1);
  }
  lVar3 = *plVar1;
  *(float *)(lVar3 + lVar8 * 0x14) = fVar11;
  *(float *)(lVar3 + 4 + lVar8 * 0x14) = (float)iVar7;
  *(undefined8 *)(lVar3 + 8 + lVar8 * 0x14) = 0;
  *(undefined1 *)(lVar3 + 0x10 + lVar8 * 0x14) = 0;
  return;
}



// FUNCTION 1423c1a10 FUN_1423c1a10 body=117 status=ok
// SIG undefined FUN_1423c1a10(void)

void FUN_1423c1a10(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = *(undefined4 *)(param_1 + 0x230);
  local_14 = *(undefined4 *)(param_1 + 0x234);
  local_10 = *(undefined4 *)(param_1 + 0x238);
  FSplineCurves::UpdateSpline
            (param_1 + 0x6f0,*(undefined1 *)(param_1 + 0x7c1),*(undefined1 *)(param_1 + 0x7bc),
             *(undefined4 *)(param_1 + 0x7b4),*(undefined1 *)(param_1 + 0x7c2),
             *(undefined4 *)(param_1 + 0x7c4),&local_18);
  return;
}



// FUNCTION 1423c1a90 FUN_1423c1a90 body=496 status=ok
// SIG undefined FUN_1423c1a90(void)

void FUN_1423c1a90(longlong param_1,void **param_2)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  void *local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  
  pvVar6 = (void *)0x0;
  pvVar7 = (void *)0x0;
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x40), pvVar7 = pvVar6,
     plVar1 != (longlong *)0x0)) {
    iVar5 = *(int *)(param_1 + 0x83c);
    if ((-1 < iVar5) && (iVar5 < (int)plVar1[1])) {
      pvVar7 = (void *)(ulonglong)*(uint *)(*(longlong *)(*plVar1 + (longlong)iVar5 * 8) + 0x16c);
    }
  }
  FString::PrintfImpl(&local_38,L"\nRequiredBones(%d) NumVerts(%d)",*(undefined4 *)(param_1 + 0xbd8)
                      ,pvVar7);
  pvVar7 = local_38;
  iVar5 = *(int *)(param_2 + 1);
  iVar2 = (int)local_30;
  if (iVar5 < 2) {
    iVar4 = local_30._4_4_;
    local_38 = (void *)0x0;
    local_30 = 0;
  }
  else {
    iVar3 = 0;
    if ((int)local_30 != 0) {
      iVar3 = (int)local_30 + -1;
    }
    if ((iVar5 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = 0;
    }
    pvVar6 = *param_2;
    local_48 = (void *)0x0;
    local_40 = iVar5;
    if ((iVar5 == 0) && (iVar2 + iVar3 == 0)) {
      local_3c = 0;
      pvVar7 = (void *)0x0;
      iVar5 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar5 + iVar2 + iVar3,0);
      pvVar7 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,pvVar6,(longlong)iVar5 * 2);
      iVar5 = local_40;
    }
    pvVar6 = local_38;
    iVar4 = local_3c;
    iVar2 = iVar5;
    if (iVar3 != 0) {
      local_40 = iVar5 + (uint)(iVar5 == 0) + iVar3;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
        pvVar7 = local_48;
      }
      iVar4 = local_3c;
      iVar2 = local_40;
      _Dst = (void *)((longlong)pvVar7 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar6,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
  }
  if (param_2 == &local_48) {
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
  }
  else {
    if (*param_2 != (void *)0x0) {
      FMemory::Free();
    }
    *param_2 = pvVar7;
    *(int *)(param_2 + 1) = iVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar4;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423c1c80 FUN_1423c1c80 body=202 status=ok
// SIG undefined FUN_1423c1c80(void)

void FUN_1423c1c80(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xcd0) != 0) {
    lVar5 = 0;
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x720);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x720);
      if (lVar3 != 0) {
        lVar4 = FUN_142a0cc80();
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
          lVar5 = lVar3;
        }
      }
      if (*(int *)(param_1 + 0x790) == 0) {
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::Reset(param_1 + 0xd00);
        return;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xcd0) + 0x50))
              (*(longlong **)(param_1 + 0xcd0),param_1 + 0xd00,param_1,lVar5);
  }
  return;
}



// FUNCTION 1423c1e50 FUN_1423c1e50 body=268 status=ok
// SIG undefined FUN_1423c1e50(void)

void FUN_1423c1e50(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  ulonglong local_res8;
  longlong local_38;
  ulonglong local_30;
  wchar_t *local_28;
  int local_20;
  
  lVar2 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x718);
  if (lVar3 == 0) {
    lVar3 = lVar2;
    pwVar4 = L"NoMesh";
  }
  else {
    local_res8 = *(ulonglong *)(lVar3 + 0x18);
    FName::ToString(&local_res8,&local_28);
    lVar3 = 1;
    pwVar4 = L"";
    if (local_20 != 0) {
      pwVar4 = local_28;
    }
  }
  local_38 = 0;
  local_30 = 0;
  if ((pwVar4 != (wchar_t *)0x0) && (*pwVar4 != L'\0')) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pwVar4[lVar2] != L'\0');
    uVar1 = (int)lVar2 + 1;
    local_30 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    lVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar4,(longlong)(int)uVar1 * 2);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) == 0) {
    FUN_1423407b0();
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  if ((lVar3 != 0) && (local_28 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423c1f60 FUN_1423c1f60 body=437 status=ok
// SIG undefined FUN_1423c1f60(void)

void FUN_1423c1f60(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ulonglong local_res8;
  undefined8 local_res10;
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  bVar3 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,L"EAnimationMode",1);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x718);
  if (lVar9 == 0) {
    pwVar10 = L"NoMesh";
  }
  else {
    local_res8 = *(ulonglong *)(lVar9 + 0x18);
    FName::ToString(&local_res8,&local_48);
    bVar3 = true;
    pwVar10 = L"";
    if (local_40 != 0) {
      pwVar10 = local_48;
    }
  }
  bVar2 = false;
  if (lVar5 == 0) {
    pwVar7 = L"UNKNOWN";
  }
  else {
    bVar2 = true;
    puVar6 = (undefined8 *)
             FUN_1417392b0(lVar5,local_38,*(undefined1 *)(*(longlong *)(param_1 + 8) + 0xb18));
    if (*(int *)(puVar6 + 1) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*puVar6;
    }
  }
  bVar1 = false;
  lVar9 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar9 + 0x118) == 0) {
    pwVar8 = L"NoName";
  }
  else {
    local_res10 = *(undefined8 *)(*(longlong *)(lVar9 + 0x118) + 0x18);
    bVar1 = true;
    FName::ToString(&local_res10,&local_58);
    lVar9 = *(longlong *)(param_1 + 8);
    pwVar8 = L"";
    if (local_50 != 0) {
      pwVar8 = local_58;
    }
  }
  FString::PrintfImpl(local_28,L"Skel 0x%p\n%s\n%s\n%s\nLOD: %d (%d)",lVar9,pwVar8,pwVar7,pwVar10,
                      *(undefined4 *)(lVar9 + 0x83c));
  if ((bVar1) && (local_58 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_48 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) == 0) {
    FUN_1423407b0();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423c2120 FUN_1423c2120 body=299 status=ok
// SIG undefined FUN_1423c2120(void)

void FUN_1423c2120(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  ulonglong local_res8;
  undefined8 local_res10;
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  int local_30;
  longlong local_28 [2];
  
  bVar2 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar5 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar5 + 0x718) == 0) {
    pwVar3 = L"NoMesh";
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(lVar5 + 0x718) + 0x18);
    FName::ToString(&local_res8,&local_38);
    lVar5 = *(longlong *)(param_1 + 8);
    bVar2 = true;
    pwVar3 = L"";
    if (local_30 != 0) {
      pwVar3 = local_38;
    }
  }
  bVar1 = false;
  if (*(longlong *)(lVar5 + 0x118) == 0) {
    pwVar4 = L"NoName";
  }
  else {
    local_res10 = *(undefined8 *)(*(longlong *)(lVar5 + 0x118) + 0x18);
    bVar1 = true;
    FName::ToString(&local_res10,&local_48);
    lVar5 = *(longlong *)(param_1 + 8);
    pwVar4 = L"";
    if (local_40 != 0) {
      pwVar4 = local_48;
    }
  }
  FString::PrintfImpl(local_28,L"Skinned 0x%p\n%s\n%s\nLOD: %d (%d)",lVar5,pwVar4,pwVar3,
                      *(undefined4 *)(lVar5 + 0x83c));
  if ((bVar1) && (local_48 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_38 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) == 0) {
    FUN_1423407b0();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423c22c0 FUN_1423c22c0 body=398 status=ok
// SIG undefined FUN_1423c22c0(void)

undefined8 * FUN_1423c22c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  bool bVar9;
  
  plVar1 = (longlong *)param_2[1];
  plVar6 = plVar1;
  plVar7 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar1[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar1 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar1[1];
      if (bVar9) {
        *(int *)(plVar1 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar6 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          plVar7 = (longlong *)*param_2;
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar1 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar8 = (int *)((longlong)plVar1 + 0xc);
            iVar3 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          plVar6 = plVar1;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar1[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar1 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_1445542e0;
    puVar4[1] = plVar7;
    puVar4[2] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    puVar4[3] = param_3;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[5] = uVar5;
    *puVar4 = &PTR_GetPoolName_144554328;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      piVar8 = (int *)((longlong)plVar6 + 0xc);
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    piVar8 = (int *)((longlong)plVar6 + 0xc);
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1423c2450 FUN_1423c2450 body=765 status=ok
// SIG undefined FUN_1423c2450(void)

int * FUN_1423c2450(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  bool bVar20;
  
  iVar12 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar19);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar19 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar19 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar19;
  lVar9 = (longlong)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  bVar20 = false;
  puVar18 = (uint *)((longlong)plVar16 + lVar9);
  *puVar18 = *puVar18 | 1 << ((byte)iVar19 & 0x1f);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  lVar1 = (longlong)iVar19 * 0x18;
  plVar16 = (longlong *)(*param_1 + lVar1);
  *(undefined4 *)plVar16 = *param_3;
  *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
  *(undefined4 *)(plVar16 + 1) = uVar5;
  *(undefined4 *)((longlong)plVar16 + 0xc) = uVar6;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar13 = iVar17;
    if (uVar15 != 0) {
      plVar11 = (longlong *)param_1[8];
      iVar7 = GetTypeHash(plVar16);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar11 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        lVar2 = *param_1;
        do {
          lVar10 = (longlong)iVar7;
          if ((*(longlong *)(lVar2 + lVar10 * 0x18) == *plVar16) &&
             (*(longlong *)(lVar2 + 8 + lVar10 * 0x18) == plVar16[1])) {
            bVar20 = true;
          }
          else {
            bVar20 = false;
          }
          iVar13 = iVar7;
        } while ((!bVar20) &&
                (iVar7 = *(int *)(lVar2 + 0x10 + lVar10 * 0x18), iVar13 = iVar17, iVar7 != -1));
      }
    }
    bVar20 = iVar13 != -1;
    if (bVar20) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar13 * 0x18),plVar16,0x10);
      bVar3 = (byte)iVar19 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar19;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar19;
      plVar16 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar18 = (uint *)((longlong)plVar16 + lVar9);
      *param_2 = iVar13;
      *puVar18 = *puVar18 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1423c2725;
    }
  }
  if (3 < uVar15) {
    uVar8 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar14 = '\0';
    if (uVar8 != 0) {
      iVar12 = 0x1f - iVar17;
    }
    uVar8 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar14 = '\x1f' - (char)iVar17;
    }
    iVar12 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar15 = GetTypeHash(plVar16);
    uVar15 = uVar15 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x14) = uVar15;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<FTextRenderComponentMIDCache::FKey,DefaultKeyFuncs<FTextRenderComponentMIDCache::FKey,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1423c2725:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar20;
  }
  return param_2;
}



// FUNCTION 1423c2750 FUN_1423c2750 body=737 status=ok
// SIG undefined FUN_1423c2750(void)

int * FUN_1423c2750(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool local_res8;
  
  iVar17 = 1;
  iVar20 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar19);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar19 = (int)param_1[6];
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar19 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar19;
  local_res8 = false;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar16 +
                   (longlong)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar19 & 0x1f);
  puVar4 = (undefined4 *)*param_3;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  plVar16 = (longlong *)(*param_1 + (longlong)iVar19 * 0x28);
  plVar12 = (longlong *)param_3[1];
  *(undefined4 *)plVar16 = *puVar4;
  *(undefined4 *)((longlong)plVar16 + 4) = uVar6;
  *(undefined4 *)(plVar16 + 1) = uVar7;
  *(undefined4 *)((longlong)plVar16 + 0xc) = uVar8;
  plVar16[2] = *plVar12;
  plVar16[3] = plVar12[1];
  plVar12[1] = 0;
  *plVar12 = 0;
  *(undefined4 *)(plVar16 + 4) = 0xffffffff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar18 != 1) {
    iVar15 = iVar20;
    if (uVar18 != 0) {
      plVar12 = (longlong *)param_1[8];
      iVar10 = GetTypeHash(plVar16);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar12 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4)
      ;
      if (iVar10 != -1) {
        lVar5 = *param_1;
        do {
          lVar13 = (longlong)iVar10;
          if ((*(longlong *)(lVar5 + lVar13 * 0x28) == *plVar16) &&
             (*(longlong *)(lVar5 + 8 + lVar13 * 0x28) == plVar16[1])) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          iVar15 = iVar10;
        } while ((!bVar9) &&
                (iVar10 = *(int *)(lVar5 + 0x20 + lVar13 * 0x28), iVar15 = iVar20, iVar10 != -1));
      }
    }
    local_res8 = iVar15 != -1;
    if (local_res8) {
      lVar5 = *param_1;
      plVar12 = *(longlong **)(lVar5 + 0x18 + (longlong)iVar15 * 0x28);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar5 + (longlong)iVar15 * 0x28),plVar16,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar15;
      goto LAB_1423c2a08;
    }
  }
  if (3 < uVar18) {
    uVar11 = (uVar18 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar20 = 0x20;
    cVar14 = '\0';
    if (uVar11 != 0) {
      iVar20 = 0x1f - iVar17;
    }
    uVar11 = (uVar18 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar11 != 0) {
      cVar14 = '\x1f' - (char)iVar17;
    }
    iVar17 = 1 << (~(byte)((iVar20 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar18 < 1) || (((int)param_1[9] != 0 && (iVar17 <= (int)param_1[9])))) {
    uVar18 = GetTypeHash(plVar16);
    uVar18 = uVar18 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x24) = uVar18;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 4) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 9) = iVar17;
    TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1423c2a08:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1423c2a40 FeaturePointMethod<FRichCurve_const_> body=580 status=ok
// SIG undefined FeaturePointMethod<FRichCurve_const_>(void)

void FeaturePointMethod<FRichCurve_const_>
               (undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
               int param_6,int param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (param_6 < param_7) {
    fVar1 = (float)FRichCurve::Eval(param_1,param_2 - param_5,0);
    fVar1 = param_4 - fVar1;
    while (param_2 = param_2 + param_5, param_2 < param_3 + param_5) {
      fVar2 = (float)FRichCurve::Eval(param_1,param_2,0);
      fVar5 = *param_8;
      if (*param_8 <= fVar2) {
        fVar5 = fVar2;
      }
      param_4 = fVar2 - param_4;
      *param_8 = fVar5;
      fVar5 = *param_9;
      if (fVar2 <= *param_9) {
        fVar5 = fVar2;
      }
      *param_9 = fVar5;
      if (param_4 <= 0.0) {
        if (0.0 <= param_4) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = -1.0;
        }
      }
      else {
        fVar5 = 1.0;
      }
      if (fVar1 <= 0.0) {
        if (0.0 <= fVar1) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = -1.0;
        }
      }
      else {
        fVar3 = 1.0;
      }
      fVar1 = param_4;
      param_4 = fVar2;
      if (fVar5 != fVar3) {
        fVar5 = param_2 - (param_5 + param_5);
        uVar4 = FRichCurve::Eval(param_1,fVar5,0);
        FeaturePointMethod<FRichCurve_const_>
                  (param_1,fVar5,param_2,uVar4,param_5 * 0.4,param_6 + 1,param_7,param_8,param_9);
      }
    }
  }
  return;
}



// FUNCTION 1423c2c90 RemoveAll<<lambda_333ff22782d4b683517e9d097bcba44b>_> body=384 status=ok
// SIG undefined RemoveAll<<lambda_333ff22782d4b683517e9d097bcba44b>_>(void)

int TArray<TWeakPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultAllocator>::
    RemoveAll<<lambda_333ff22782d4b683517e9d097bcba44b>_>(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar10 = 0;
  uVar11 = uVar10;
  uVar14 = uVar10;
  if ((*(longlong *)*param_1 != 0) && (lVar6 = ((longlong *)*param_1)[1], lVar6 != 0)) {
    piVar1 = (int *)(lVar6 + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (0 < iVar9) {
      bVar15 = 1;
      goto LAB_1423c2d01;
    }
  }
  bVar15 = 0;
LAB_1423c2d01:
  do {
    iVar9 = (int)uVar10;
    uVar11 = uVar11 + 1;
    uVar10 = (ulonglong)(iVar9 + 1);
    if ((longlong)uVar11 < lVar7) {
      lVar6 = uVar11 * 0x10;
      do {
        if ((*(longlong *)(lVar6 + *param_1) == 0) ||
           (lVar3 = *(longlong *)(lVar6 + 8 + *param_1), lVar3 == 0)) {
LAB_1423c2d3a:
          bVar5 = 0;
        }
        else {
          piVar1 = (int *)(lVar3 + 8);
          LOCK();
          iVar12 = *piVar1;
          if (iVar12 == 0) {
            *piVar1 = 0;
            iVar12 = 0;
          }
          UNLOCK();
          if (iVar12 < 1) goto LAB_1423c2d3a;
          bVar5 = 1;
        }
        if (bVar15 != bVar5) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar11 = uVar11 + 1;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)uVar11 < lVar7);
    }
    iVar12 = (int)uVar10 - iVar9;
    if (bVar15 == 0) {
      if (iVar12 != 0) {
        plVar8 = (longlong *)((longlong)iVar9 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar8;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          plVar8 = plVar8 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    else {
      iVar13 = (int)uVar14;
      if (iVar13 != iVar9) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x10 + *param_1),
                   (void *)((longlong)iVar9 * 0x10 + *param_1),(longlong)iVar12 << 4);
      }
      uVar14 = (ulonglong)(uint)(iVar13 + iVar12);
    }
    bVar15 = bVar15 ^ 1;
    if (lVar7 <= (longlong)uVar11) {
      *(int *)(param_1 + 1) = (int)uVar14;
      return iVar2 - (int)uVar14;
    }
  } while( true );
}



// FUNCTION 1423c2e10 FUN_1423c2e10 body=323 status=ok
// SIG undefined FUN_1423c2e10(void)

void FUN_1423c2e10(longlong param_1,undefined8 *param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *_Dst;
  uint uVar7;
  
  uVar7 = (uint)param_3[2] + param_5 * -0x10;
  if (3 < (int)uVar7) {
    uVar7 = 4;
  }
  if (0 < (int)uVar7) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = param_3[1];
    uVar2 = *param_3;
    uVar3 = *param_2;
    uVar4 = (longlong)(int)uVar7 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar7 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar4 = (longlong)(int)uVar7 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar4;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar7);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar6;
    *(undefined8 **)(param_1 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f4d340;
    puVar6[2] = uVar3;
    puVar6[3] = _Dst;
    *(uint *)((longlong)puVar6 + 0x24) = (uint)uVar1 + param_5 * 0x10;
    *(uint *)(puVar6 + 4) = (uint)uVar2;
    *(uint *)(puVar6 + 5) = uVar7;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return;
}



// FUNCTION 1423c2f60 SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector2D,FRHICommandList> body=323 status=ok
// SIG undefined SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector2D,FRHICommandList>(void)

void SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector2D,FRHICommandList>
               (longlong param_1,undefined8 *param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *_Dst;
  uint uVar7;
  
  uVar7 = (uint)param_3[2] + param_5 * -0x10;
  if (7 < (int)uVar7) {
    uVar7 = 8;
  }
  if (0 < (int)uVar7) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = param_3[1];
    uVar2 = *param_3;
    uVar3 = *param_2;
    uVar4 = (longlong)(int)uVar7 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar7 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar4 = (longlong)(int)uVar7 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar4;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar7);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar6;
    *(undefined8 **)(param_1 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f4d340;
    puVar6[2] = uVar3;
    puVar6[3] = _Dst;
    *(uint *)((longlong)puVar6 + 0x24) = (uint)uVar1 + param_5 * 0x10;
    *(uint *)(puVar6 + 4) = (uint)uVar2;
    *(uint *)(puVar6 + 5) = uVar7;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return;
}



// FUNCTION 1423c30b0 SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList> body=323 status=ok
// SIG undefined SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>(void)

void SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
               (longlong param_1,undefined8 *param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *_Dst;
  uint uVar7;
  
  uVar7 = (uint)param_3[2] + param_5 * -0x10;
  if (0xb < (int)uVar7) {
    uVar7 = 0xc;
  }
  if (0 < (int)uVar7) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = param_3[1];
    uVar2 = *param_3;
    uVar3 = *param_2;
    uVar4 = (longlong)(int)uVar7 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar7 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar4 = (longlong)(int)uVar7 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar4;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar7);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar6;
    *(undefined8 **)(param_1 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f4d340;
    puVar6[2] = uVar3;
    puVar6[3] = _Dst;
    *(uint *)((longlong)puVar6 + 0x24) = (uint)uVar1 + param_5 * 0x10;
    *(uint *)(puVar6 + 4) = (uint)uVar2;
    *(uint *)(puVar6 + 5) = uVar7;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return;
}



// FUNCTION 1423c3200 FUN_1423c3200 body=305 status=ok
// SIG undefined FUN_1423c3200(void)

undefined8 * FUN_1423c3200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145070ff0;
  param_1[0x8b] = &PTR_LAB_145071840;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 2;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 2;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 2;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 4;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TransformComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429ff160();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(uint *)((longlong)param_1 + 0x4cc) = *(uint *)((longlong)param_1 + 0x4cc) & 0xfffffffc;
  param_1[0x94] = lVar4;
  param_1[0x2d] = lVar4;
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x24c) = *(byte *)(lVar4 + 0x24c) | 8;
  }
  return param_1;
}



// FUNCTION 1423c3340 FUN_1423c3340 body=497 status=ok
// SIG undefined FUN_1423c3340(void)

undefined8 * FUN_1423c3340(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined2 *local_18;
  undefined8 local_10;
  
  FUN_1428c1a80();
  lVar7 = 0;
  *param_1 = &PTR_FUN_145072c50;
  plVar1 = param_1 + 0x93;
  *plVar1 = 0;
  param_1[0x94] = 0;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(byte *)(param_1[0x8e] + 0x2ee) = *(byte *)(param_1[0x8e] + 0x2ee) | 0x80;
  iVar2 = *(int *)(param_1 + 0x94);
  *(int *)(param_1 + 0x94) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x4a4) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = 0;
  iVar2 = *(int *)(param_1 + 0x94);
  *(int *)(param_1 + 0x94) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x4a4) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = 0x461c4000;
  *(uint *)(param_1 + 0x95) = *(uint *)(param_1 + 0x95) | 1;
  if (DAT_146b17150 == 0) {
    puVar9 = &DAT_1468e2360;
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    cVar4 = FConfigCacheIni::GetString
                      (DAT_1468b6148,L"/Script/Engine.Engine",L"DefaultCullDistanceDataName",
                       &local_18,&DAT_1468e2360);
    if (cVar4 != '\0') {
      puVar8 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar8 = local_18;
      }
      uVar6 = FUN_14291fc30();
      lVar7 = FUN_141799c90(uVar6,0,puVar8,0,(ulonglong)puVar9 & 0xffffffff00000000,0,1);
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    lVar7 = *(longlong *)(DAT_146b17150 + 0x10f0);
    if (lVar7 == 0) {
      return param_1;
    }
    lVar5 = FUN_14291fc30();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return param_1;
    }
  }
  if ((lVar7 != 0) && (plVar1 != (longlong *)(lVar7 + 0x30))) {
    iVar2 = *(int *)(lVar7 + 0x38);
    _Src = *(void **)(lVar7 + 0x30);
    *(int *)(param_1 + 0x94) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x4a4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 << 3);
    }
  }
  return param_1;
}



// FUNCTION 1423c3540 FUN_1423c3540 body=119 status=ok
// SIG undefined FUN_1423c3540(void)

undefined8 * FUN_1423c3540(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NewTextRenderComponent",1);
  uVar3 = *puVar1;
  uVar2 = ACharacter::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 1423c35c0 FKeyHandle body=20 status=ok
// SIG undefined FKeyHandle(void)

int * FKeyHandle::FKeyHandle(int *param_1)

{
  DAT_146531fa0 = DAT_146531fa0 + 1;
  *param_1 = DAT_146531fa0;
  return param_1;
}



// FUNCTION 1423c35e0 FUN_1423c35e0 body=271 status=ok
// SIG undefined FUN_1423c35e0(void)

undefined8 *
FUN_1423c35e0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x66] = 0;
  puVar3 = param_1 + 0xec;
  *(undefined1 *)(param_1 + 0x67) = 1;
  *(undefined1 *)((longlong)param_1 + 0x33a) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *param_1 = &PTR_FUN_144165fb0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0xe9) = 0;
  puVar1 = param_1 + 0xcb;
  if (param_4 != (undefined8 *)0x0) {
    puVar1 = param_4;
  }
  param_1[0xeb] = 0;
  param_1[0xea] = puVar1;
  lVar2 = 2;
  if (param_1 + 0xed < puVar3) {
    lVar2 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x339) = 1;
  if (puVar3 <= param_1 + 0xed) {
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)puVar3 = 0xffffffff;
      puVar3 = (undefined8 *)((longlong)puVar3 + 4);
    }
  }
  return param_1;
}



// FUNCTION 1423c36f0 FUN_1423c36f0 body=565 status=ok
// SIG undefined FUN_1423c36f0(void)

longlong * FUN_1423c36f0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  longlong local_38;
  undefined8 local_30;
  
  plVar10 = (longlong *)0x0;
  plVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = 0;
  *plVar1 = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  iVar2 = *(int *)(param_3 + 0x50);
  if ((DAT_1468c217e == '\0') && (0 < iVar2)) {
    local_38 = 0;
    local_30 = 0;
    (**(code **)(*param_2 + 0x348))(param_2,plVar1,&local_38);
    if (0 < (int)param_1[3]) {
      cVar4 = FUN_140a79890(param_2);
      if (cVar4 == '\0') {
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,iVar2);
        }
        if (0 < iVar2) {
          do {
            uVar7 = UMaterialInstanceDynamic::Create(param_2,0);
            puVar8 = (undefined8 *)param_1[2];
            puVar11 = puVar8 + (longlong)(int)param_1[3] * 2;
            for (; puVar8 != puVar11; puVar8 = puVar8 + 2) {
              local_40 = *(undefined2 *)(puVar8 + 1);
              local_48 = *puVar8;
              local_3e = *(undefined1 *)((longlong)puVar8 + 10);
              local_3d = *(undefined1 *)((longlong)puVar8 + 0xb);
              local_3c = *(undefined4 *)((longlong)puVar8 + 0xc);
              FUN_1425a2210(uVar7,&local_48,param_3,plVar10);
            }
            lVar6 = param_1[1];
            iVar5 = (int)lVar6 + 1;
            *(int *)(param_1 + 1) = iVar5;
            if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
            }
            uVar9 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar9;
            *(undefined8 *)(*param_1 + (longlong)(int)lVar6 * 8) = uVar7;
          } while ((int)uVar9 < iVar2);
        }
      }
      else {
        *(undefined1 *)(param_1 + 4) = 1;
        lVar6 = FUN_1429ba110();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        puVar8 = (undefined8 *)*plVar1;
        if (!bVar3) {
          param_2 = plVar10;
        }
        puVar11 = puVar8 + (longlong)(int)param_1[3] * 2;
        for (; puVar8 != puVar11; puVar8 = puVar8 + 2) {
          local_48 = *puVar8;
          local_40 = *(undefined2 *)(puVar8 + 1);
          local_3e = *(undefined1 *)((longlong)puVar8 + 10);
          local_3d = *(undefined1 *)((longlong)puVar8 + 0xb);
          local_3c = *(undefined4 *)((longlong)puVar8 + 0xc);
          FUN_1425a2210(param_2,&local_48,param_3,0);
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        *(longlong **)(*param_1 + (longlong)iVar2 * 8) = param_2;
      }
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 1423c3930 FUN_1423c3930 body=83 status=ok
// SIG undefined FUN_1423c3930(void)

undefined8 * FUN_1423c3930(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 4;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  lVar1 = 2;
  if (puVar2 <= param_1 + 5) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined4 *)puVar2 = 0;
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
    }
  }
  return param_1;
}



// FUNCTION 1423c3990 FRuntimeFloatCurve body=74 status=ok
// SIG undefined FRuntimeFloatCurve(void)

undefined8 * FRuntimeFloatCurve::FRuntimeFloatCurve(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_14413ebc8;
  *(undefined2 *)(param_1 + 0xb) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x7f7fffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1423c39e0 FUN_1423c39e0 body=103 status=ok
// SIG undefined FUN_1423c39e0(void)

undefined8 * FUN_1423c39e0(undefined8 *param_1,longlong param_2)

{
  FUN_14237df90();
  *param_1 = &PTR__scalar_deleting_destructor__145073380;
  param_1[0x14] = *(undefined8 *)(param_2 + 0x728);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 1423c3a50 FUN_1423c3a50 body=107 status=ok
// SIG undefined FUN_1423c3a50(void)

undefined8 * FUN_1423c3a50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_14271e220(param_1 + 10,0);
  param_1[0x17] = param_2;
  puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 1423c3ac0 FUN_1423c3ac0 body=88 status=ok
// SIG undefined FUN_1423c3ac0(void)

undefined8 * FUN_1423c3ac0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_14271e220(param_1 + 10,0);
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 1423c3b20 FUN_1423c3b20 body=516 status=ok
// SIG undefined FUN_1423c3b20(void)

undefined8 * FUN_1423c3b20(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar4 = (longlong *)operator_new(0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar6 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_144139dc0;
    plVar4[2] = (longlong)plVar6;
    plVar7 = plVar4;
  }
  *param_1 = plVar6;
  param_1[1] = plVar7;
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
        if (0 < iVar3) goto LAB_1423c3c30;
      }
      plVar7 = (longlong *)param_1[1];
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar6;
    plVar4 = (longlong *)plVar6[1];
    if (plVar7 != plVar4) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar6[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar6[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
LAB_1423c3c30:
  uVar2 = *param_1;
  lVar5 = FUN_141607f00();
  plVar7 = (longlong *)(lVar5 + 0xd8);
  plVar6 = (longlong *)FUN_1423c22c0(&local_28,uVar2,FUN_1423d7850);
  if (((int)plVar6[1] != 0) && (*plVar6 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    if (((int)plVar6[1] != 0) && (plVar4 = (longlong *)*plVar6, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    }
    iVar3 = *(int *)(lVar5 + 0xe0);
    *(int *)(lVar5 + 0xe0) = iVar3 + 1;
    if (*(int *)(lVar5 + 0xe4) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar3);
    }
    plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *plVar7);
    *plVar7 = 0;
    *plVar7 = *plVar6;
    *plVar6 = 0;
    *(int *)(plVar7 + 1) = (int)plVar6[1];
    *(undefined4 *)(plVar6 + 1) = 0;
  }
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_1;
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
  return param_1;
}



// FUNCTION 1423c3d30 FUN_1423c3d30 body=558 status=ok
// SIG undefined FUN_1423c3d30(void)

undefined8 * FUN_1423c3d30(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_res8;
  longlong *local_18;
  int local_10;
  
  *(undefined1 *)(param_1 + 1) = 0;
  lVar6 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar3 = GetTransientPackage();
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res8 = 0;
      uVar4 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar8;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,param_1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  local_18 = (longlong *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__1450742b8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = (longlong)param_1;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar5[2] = (longlong)FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
  }
  uVar3 = FUN_14164ab60();
  puVar7 = (undefined8 *)
           FUN_14158f860(uVar3,&local_res8,&local_18,
                         L"FTextRenderComponentMIDCache_PurgeUnreferencedMIDsTicker",0x41200000);
  param_1[2] = *puVar7;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return param_1;
}



// FUNCTION 1423c3f60 FUN_1423c3f60 body=852 status=ok
// SIG undefined FUN_1423c3f60(void)

undefined8 * FUN_1423c3f60(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 local_res10 [8];
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_145074348;
  param_1[0x74] = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(param_1 + 0x75);
  FUN_1426f5920(param_1 + 0x92);
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined2 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xb7) = 4;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xb6] = &PTR_FUN_145071898;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  FUN_1423c35e0(param_1 + 0xc0,*(undefined4 *)(param_1[0x26] + 8),"FTextRenderSceneProxy",0);
  param_1[0x1ae] = 0;
  puVar3 = param_1 + 0x1b3;
  param_1[0x1af] = 0;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x71c);
  param_1[0x1b2] = *(undefined8 *)(param_2 + 0x710);
  *puVar3 = 0;
  param_1[0x1b4] = 0;
  FText::FText(param_1 + 0x1b5,param_2 + 0x6f0);
  *(float *)(param_1 + 0x1b8) =
       *(float *)(param_2 + 0x720) * *(float *)(param_2 + 0x728) * *(float *)(param_2 + 0x72c);
  *(float *)((longlong)param_1 + 0xdc4) =
       *(float *)(param_2 + 0x724) * *(float *)(param_2 + 0x728) * *(float *)(param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0x1b9) = *(undefined4 *)(param_2 + 0x730);
  *(undefined4 *)((longlong)param_1 + 0xdcc) = *(undefined4 *)(param_2 + 0x734);
  *(uint *)(param_1 + 0x1ba) = (uint)*(byte *)(param_2 + 0x718);
  *(uint *)((longlong)param_1 + 0xdd4) = (uint)*(byte *)(param_2 + 0x719);
  *(byte *)(param_1 + 0x1bb) = *(byte *)(param_2 + 0x738) & 1;
  if (*(longlong **)(param_2 + 0x708) != (longlong *)0x0) {
    lVar6 = (**(code **)(**(longlong **)(param_2 + 0x708) + 0x290))();
    if ((*(char *)(lVar6 + 0x140) == '\0') &&
       (plVar7 = *(longlong **)(param_2 + 0x708), plVar7 != (longlong *)0x0)) goto LAB_1423c4128;
  }
  plVar7 = (longlong *)UMaterial::GetDefaultMaterial(0);
LAB_1423c4128:
  param_1[0x1b1] = plVar7;
  uVar5 = *(undefined4 *)(param_1[0x26] + 8);
  uVar8 = (**(code **)(*plVar7 + 0x290))(plVar7);
  pbVar9 = (byte *)FUN_142592090(uVar8,local_res10,uVar5);
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | *pbVar9;
  *(byte *)((longlong)param_1 + 0x3a1) = *(byte *)((longlong)param_1 + 0x3a1) | pbVar9[1];
  *(byte *)((longlong)param_1 + 0x3a2) = *(byte *)((longlong)param_1 + 0x3a2) | pbVar9[2];
  *(byte *)((longlong)param_1 + 0x3a3) = *(byte *)((longlong)param_1 + 0x3a3) | pbVar9[3];
  *(byte *)((longlong)param_1 + 0x3a4) = *(byte *)((longlong)param_1 + 0x3a4) | pbVar9[4];
  *(byte *)((longlong)param_1 + 0x3a5) = *(byte *)((longlong)param_1 + 0x3a5) | pbVar9[5];
  *(byte *)((longlong)param_1 + 0x3a6) = *(byte *)((longlong)param_1 + 0x3a6) | pbVar9[6];
  *(byte *)((longlong)param_1 + 0x3a7) = *(byte *)((longlong)param_1 + 0x3a7) | pbVar9[7];
  if (((param_1[0x1b2] != 0) && (*(char *)(param_1[0x1b2] + 0x30) == '\0')) && (DAT_146af1040 != 0))
  {
    puVar10 = (undefined8 *)
              FTextRenderComponentMIDCache::GetMIDData(DAT_146af1040,local_38,param_1[0x1b1]);
    local_40 = (longlong *)puVar10[1];
    local_48 = *puVar10;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    if (puVar3 != &local_48) {
      *puVar3 = local_48;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1b4,&local_40);
    }
    plVar7 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xfdffffff;
  return param_1;
}



// FUNCTION 1423c42c0 UPlayer body=44 status=ok
// SIG undefined UPlayer(void)

undefined8 * UPlayer::UPlayer(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145070a20;
  param_1[5] = &PTR_FUN_145070c98;
  return param_1;
}



// FUNCTION 1423c42f0 UCurveFloat body=126 status=ok
// SIG undefined UCurveFloat(void)

undefined8 * UCurveFloat::UCurveFloat(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145070d08;
  param_1[5] = &PTR_GetCurves_145070f80;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[6] = &PTR_FUN_14413ebc8;
  *(undefined2 *)(param_1 + 0x11) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x7f7fffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 1423c4370 UCurveLinearColor body=202 status=ok
// SIG undefined UCurveLinearColor(void)

undefined8 * UCurveLinearColor::UCurveLinearColor(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_141781840();
  lVar3 = 4;
  *param_1 = &PTR__scalar_deleting_destructor__145074ab8;
  param_1[5] = &PTR_GetCurves_145074d30;
  lVar1 = (longlong)param_1 + 100;
  puVar2 = param_1 + 6;
  do {
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *puVar2 = &PTR_FUN_14413ebc8;
    *(undefined2 *)(lVar1 + 0x24) = 0x404;
    *(undefined4 *)(lVar1 + 0x28) = 0x7f7fffff;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined8 *)(lVar1 + 0x34) = 0;
    lVar3 = lVar3 + -1;
    lVar1 = lVar1 + 0x70;
    puVar2 = puVar2 + 0xe;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  return param_1;
}



// FUNCTION 1423c4440 FUN_1423c4440 body=79 status=ok
// SIG undefined FUN_1423c4440(void)

undefined8 * FUN_1423c4440(undefined8 *param_1)

{
  UTexture2D::UTexture2D();
  *param_1 = &PTR_FUN_145074da0;
  param_1[5] = &PTR_LAB_1450750a0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 9) = 0x106;
  *(byte *)((longlong)param_1 + 0x4b) = *(byte *)((longlong)param_1 + 0x4b) & 0xfe;
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  return param_1;
}



// FUNCTION 1423c4490 UCurveVector body=145 status=ok
// SIG undefined UCurveVector(void)

undefined8 * UCurveVector::UCurveVector(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_141781840();
  lVar3 = 3;
  *param_1 = &PTR__scalar_deleting_destructor__1450750d0;
  param_1[5] = &PTR_GetCurves_145075348;
  lVar1 = (longlong)param_1 + 100;
  puVar2 = param_1 + 6;
  do {
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *puVar2 = &PTR_FUN_14413ebc8;
    *(undefined2 *)(lVar1 + 0x24) = 0x404;
    *(undefined4 *)(lVar1 + 0x28) = 0x7f7fffff;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined8 *)(lVar1 + 0x34) = 0;
    lVar3 = lVar3 + -1;
    lVar1 = lVar1 + 0x70;
    puVar2 = puVar2 + 0xe;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 1423c4530 FUN_1423c4530 body=130 status=ok
// SIG undefined FUN_1423c4530(void)

undefined8 * FUN_1423c4530(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  uVar1 = FUN_14178c940();
  UDeveloperSettings::UDeveloperSettings(param_1,uVar1);
  *param_1 = &PTR_FUN_145074820;
  FName::FName(local_res8,L"Garbage Collection",1);
  param_1[6] = local_res8[0];
  *(undefined4 *)(param_1 + 7) = 0x42700000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xffffff2e | 0x2e;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xc00000;
  *(undefined4 *)(param_1 + 10) = 0x200000;
  *(undefined4 *)(param_1 + 8) = 5;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1423c45c0 FUN_1423c45c0 body=667 status=ok
// SIG undefined FUN_1423c45c0(void)

undefined8 * FUN_1423c45c0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14235ed30();
  *param_1 = &PTR__scalar_deleting_destructor__144ef8520;
  param_1[5] = &PTR_LAB_144ee07d0;
  param_1[0x5a] = &PTR_LAB_144ee0800;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(uint *)(param_1 + 0xf1) = *(uint *)(param_1 + 0xf1) & 0xfffffff0;
  *(undefined8 *)((longlong)param_1 + 0x78c) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x79c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  FUN_142717130(param_1,DAT_146aefc70);
  *(byte *)((longlong)param_1 + 0x744) = *(byte *)((longlong)param_1 + 0x744) & 0xbf;
  *(byte *)((longlong)param_1 + 0x745) = *(byte *)((longlong)param_1 + 0x745) & 0xfb;
  *(byte *)((longlong)param_1 + 0x745) = *(byte *)((longlong)param_1 + 0x745) | 2;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 1;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0x3dcccccd;
  *(byte *)((longlong)param_1 + 0x744) = *(byte *)((longlong)param_1 + 0x744) & 0xeb | 8;
  lVar1 = FUN_142708e10(param_1,0,1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) | 0x40;
  *param_1 = &PTR_FUN_145071980;
  param_1[5] = &PTR_LAB_145072300;
  param_1[0x5a] = &PTR_LAB_145072330;
  param_1[0xf5] = &PTR_LAB_145072388;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  FUN_142717130(param_1,DAT_146aefc58);
  *(byte *)((longlong)param_1 + 0x745) = *(byte *)((longlong)param_1 + 0x745) & 0xfb;
  *(uint *)((longlong)param_1 + 0x814) = *(uint *)((longlong)param_1 + 0x814) & 0xfffffffc;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  *(undefined4 *)(param_1 + 0x102) = 0x3f800000;
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x7dc) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7e4) = 0;
  param_1[0xfd] = 0x42c80000;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xff) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x81c) = 0;
  return param_1;
}



// FUNCTION 1423c4860 FUN_1423c4860 body=64 status=ok
// SIG undefined FUN_1423c4860(void)

undefined8 * FUN_1423c4860(undefined8 *param_1)

{
  FUN_14235eff0();
  *(undefined4 *)(param_1 + 0x90) = 0;
  *param_1 = &PTR_FUN_145072558;
  param_1[5] = &PTR_LAB_145072b10;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x42300000;
  return param_1;
}



// FUNCTION 1423c48a0 FUN_1423c48a0 body=335 status=ok
// SIG undefined FUN_1423c48a0(void)

undefined8 * FUN_1423c48a0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14235ed30();
  *param_1 = &PTR__scalar_deleting_destructor__144ef8520;
  param_1[5] = &PTR_LAB_144ee07d0;
  param_1[0x5a] = &PTR_LAB_144ee0800;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(uint *)(param_1 + 0xf1) = *(uint *)(param_1 + 0xf1) & 0xfffffff0;
  *(undefined8 *)((longlong)param_1 + 0x78c) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x79c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  FUN_142717130(param_1,DAT_146aefc70);
  *(byte *)((longlong)param_1 + 0x744) = *(byte *)((longlong)param_1 + 0x744) & 0xbf;
  *(byte *)((longlong)param_1 + 0x745) = *(byte *)((longlong)param_1 + 0x745) & 0xfb;
  *(byte *)((longlong)param_1 + 0x745) = *(byte *)((longlong)param_1 + 0x745) | 2;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 1;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0x3dcccccd;
  *(byte *)((longlong)param_1 + 0x744) = *(byte *)((longlong)param_1 + 0x744) & 0xeb | 8;
  lVar1 = FUN_142708e10(param_1,0,1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) | 0x40;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  return param_1;
}



// FUNCTION 1423c49f0 FUN_1423c49f0 body=243 status=ok
// SIG undefined FUN_1423c49f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423c49f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14237f6c0();
  *(uint *)(param_1 + 0x5a) = *(uint *)(param_1 + 0x5a) & 0xfffffff8;
  *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) & 0xfffffffe;
  *param_1 = &PTR_FUN_145073400;
  param_1[5] = &PTR_LAB_145055558;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x42c80000;
  param_1[0x5e] = 0x42c80000;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x304) = 1;
  *(undefined4 *)(param_1 + 0x61) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x62) = 0x32;
  *(undefined2 *)((longlong)param_1 + 0x314) = 2;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined2 *)((longlong)param_1 + 0x31c) = 1;
  uVar1 = uRam00000001468b5b78;
  param_1[0x66] = _DAT_1468b5b70;
  param_1[0x67] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[0x68] = _DAT_1468b5b80;
  param_1[0x69] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[0x6a] = _DAT_1468b5b90;
  param_1[0x6b] = uVar1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 1423c4af0 UStreamingSettings body=158 status=ok
// SIG undefined UStreamingSettings(void)

undefined8 * UStreamingSettings::UStreamingSettings(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  uVar1 = FUN_14178c940();
  UDeveloperSettings::UDeveloperSettings(param_1,uVar1);
  *param_1 = &PTR_FUN_145074588;
  FName::FName(local_res8,L"Streaming",1);
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffc;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 3;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffe;
  param_1[6] = local_res8[0];
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3fc00000;
  *(undefined4 *)(param_1 + 8) = 0x3ba3d70a;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x20000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40a00000;
  *(undefined4 *)(param_1 + 10) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xb) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 10;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 5;
  return param_1;
}



// FUNCTION 1423c4b90 FUN_1423c4b90 body=915 status=ok
// SIG undefined FUN_1423c4b90(void)

undefined8 * FUN_1423c4b90(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_14237eb90();
  *param_1 = &PTR_FUN_145073948;
  param_1[5] = &PTR_LAB_145074230;
  param_1[0x5a] = &PTR_LAB_145074260;
  FText::FText(param_1 + 0xde);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af1768) {
    _Init_thread_header(&DAT_146af1768);
    if (DAT_146af1768 == -1) {
      FUN_1423c3b20(&DAT_146af1758);
      atexit(FUN_143eaaae0);
      _Init_thread_footer(&DAT_146af1768);
    }
  }
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xdf;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Text",L"TextRenderComponent",L"DefaultText");
  FText::operator=(param_1 + 0xde,uVar5);
  lVar6 = -1;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if ((DAT_146531f80 == 0) && (PTR_u__Engine_EngineFonts_RobotoDistan_146531f88 != (undefined *)0x0)
     ) {
    FUN_141785db0();
    puVar4 = PTR_u__Engine_EngineFonts_RobotoDistan_146531f88;
    local_48 = 0;
    local_40 = 0;
    if ((PTR_u__Engine_EngineFonts_RobotoDistan_146531f88 != (undefined *)0x0) &&
       (*(short *)PTR_u__Engine_EngineFonts_RobotoDistan_146531f88 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(PTR_u__Engine_EngineFonts_RobotoDistan_146531f88 + lVar8 * 2) != 0);
      uVar7 = (int)lVar8 + 1;
      local_40 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,puVar4,(longlong)(int)uVar7 * 2);
    }
    FUN_14179acf0(&local_48,1);
    DAT_146531f80 = FUN_1420c5ca0(&local_48);
    if (DAT_146531f80 == 0) {
      FUN_14178ab20(PTR_u__Engine_EngineFonts_RobotoDistan_146531f88);
    }
    PTR_u__Engine_EngineFonts_RobotoDistan_146531f88 = (undefined *)0x0;
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  param_1[0xe2] = DAT_146531f80;
  if ((DAT_146531f90 == 0) && (PTR_u__Engine_EngineMaterials_DefaultT_146531f98 != (undefined *)0x0)
     ) {
    FUN_141785db0();
    puVar4 = PTR_u__Engine_EngineMaterials_DefaultT_146531f98;
    local_38 = 0;
    local_30 = 0;
    if ((PTR_u__Engine_EngineMaterials_DefaultT_146531f98 != (undefined *)0x0) &&
       (*(short *)PTR_u__Engine_EngineMaterials_DefaultT_146531f98 != 0)) {
      do {
        lVar6 = lVar6 + 1;
      } while (*(short *)(PTR_u__Engine_EngineMaterials_DefaultT_146531f98 + lVar6 * 2) != 0);
      uVar7 = (int)lVar6 + 1;
      local_30 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,puVar4,(longlong)(int)uVar7 * 2);
    }
    FUN_14179acf0(&local_38,1);
    DAT_146531f90 = FUN_14044ea10(&local_38);
    if (DAT_146531f90 == 0) {
      FUN_14178ab20(PTR_u__Engine_EngineMaterials_DefaultT_146531f98);
    }
    PTR_u__Engine_EngineMaterials_DefaultT_146531f98 = (undefined *)0x0;
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  param_1[0xe1] = DAT_146531f90;
  FUN_142717130(param_1,DAT_146aefc58);
  *(undefined4 *)((longlong)param_1 + 0x71c) = DAT_1464aa730;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0x3f800000;
  param_1[0xe6] = 0;
  *(undefined2 *)(param_1 + 0xe3) = 0x200;
  FUN_1423974f0(param_1,0);
  if (param_1[0xe2] == 0) {
    fVar10 = 0.033333335;
    fVar9 = 30.0;
  }
  else {
    FUN_1417510e0();
    fVar9 = (float)FUN_14244fa00(param_1[0xe2]);
    fVar10 = 1.0 / fVar9;
  }
  *(float *)(param_1 + 0xe5) = fVar9;
  *(float *)((longlong)param_1 + 0x72c) = fVar10;
  return param_1;
}



// FUNCTION 1423c4f30 FUN_1423c4f30 body=159 status=ok
// SIG undefined FUN_1423c4f30(void)

void FUN_1423c4f30(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      lVar2 = 2;
      plVar5 = plVar4 + 6;
      do {
        plVar1 = plVar5 + -2;
        plVar5 = plVar5 + -2;
        lVar2 = lVar2 + -1;
        if (*plVar1 != 0) {
          FMemory::Free();
        }
      } while (lVar2 != 0);
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar4);
  return;
}



// FUNCTION 1423c4fd0 ~FRichCurve body=78 status=ok
// SIG undefined ~FRichCurve(void)

void FRichCurve::~FRichCurve(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14413ebc8;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__14413eb30;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  return;
}



// FUNCTION 1423c5020 ~FStaticLightingMesh body=181 status=ok
// SIG undefined ~FStaticLightingMesh(void)

void FStaticLightingMesh::~FStaticLightingMesh(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  *(undefined ***)(param_1 + -0xb8) = &PTR__purecall_1450724a0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0 + param_1) =
       &PTR__scalar_deleting_destructor__1450724f0;
  iVar5 = *(int *)(param_1 + -0x18);
  plVar4 = *(longlong **)(param_1 + -0x20);
  if (iVar5 != 0) {
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + 8 + lVar2);
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      plVar4 = plVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + -0x20);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + -0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + -0x90) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423c50e0 FUN_1423c50e0 body=265 status=ok
// SIG undefined FUN_1423c50e0(void)

void FUN_1423c50e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  
  uVar5 = 0;
  plVar6 = (longlong *)(param_1 + 0x30);
  lVar4 = 0x20;
  do {
    puVar1 = (undefined8 *)*plVar6;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *plVar6 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = (longlong)*(int *)(param_1 + 0x28) * 0x30 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x30) {
      *(undefined4 *)(lVar4 + lVar2) = 0;
    }
    uVar5 = uVar5 + 1;
    plVar6 = plVar6 + 1;
    lVar4 = lVar4 + 4;
  } while (uVar5 < 2);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x50) = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x80);
  FUN_141edd2d0(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    FMeshMapBuildData::~FMeshMapBuildData(lVar4);
    FMemory::operator_delete(lVar4,0x30);
  }
  return;
}



// FUNCTION 1423c51f0 FUN_1423c51f0 body=485 status=ok
// SIG undefined FUN_1423c51f0(void)

void FUN_1423c51f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  
  *param_1 = &PTR_FUN_145074348;
  (**(code **)(param_1[0x92] + 0x30))();
  (**(code **)(param_1[0x75] + 0x30))();
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0xb4)) {
    lVar8 = 0;
    do {
      puVar6 = (undefined8 *)param_1[0xb3];
      if ((undefined8 *)param_1[0xb3] == (undefined8 *)0x0) {
        puVar6 = param_1 + 0x9d;
      }
      (**(code **)(*(longlong *)((longlong)puVar6 + lVar8) + 0x30))();
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x58;
    } while (iVar7 < *(int *)(param_1 + 0xb4));
  }
  plVar3 = param_1 + 0xb6;
  (**(code **)(*plVar3 + 0x30))(plVar3);
  plVar4 = param_1 + 0xc0;
  (**(code **)(*plVar4 + 0x30))(plVar4);
  plVar5 = (longlong *)param_1[0x1b6];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)param_1[0x1b4];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (param_1[0x1ae] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1ab);
  if (param_1[0x1a0] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18a);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x189);
  FUN_141edd2d0(plVar4);
  if (param_1[0xbe] != 0) {
    FMemory::Free();
  }
  *plVar3 = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xbd);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xbc);
  FUN_141edd2d0(plVar3);
  FUN_140944f50(param_1 + 0x9d);
  FPositionVertexBuffer::~FPositionVertexBuffer(param_1 + 0x92);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(param_1 + 0x75);
  FUN_14271e9f0(param_1);
  return;
}



// FUNCTION 1423c53e0 FUN_1423c53e0 body=150 status=ok
// SIG undefined FUN_1423c53e0(void)

void FUN_1423c53e0(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ef8520;
  param_1[5] = &PTR_LAB_144ee07d0;
  param_1[0x5a] = &PTR_LAB_144ee0800;
  if (param_1[0xef] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0xec);
  lVar1 = param_1[0xeb];
  if (iVar2 != 0) {
    do {
      FUN_1423c50e0(lVar1);
      lVar1 = lVar1 + 0xc0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[0xeb];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FUN_14080d1e0(param_1);
  return;
}



// FUNCTION 1423c5480 FUN_1423c5480 body=148 status=ok
// SIG undefined FUN_1423c5480(void)

longlong * FUN_1423c5480(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_1423c5860();
  (**(code **)(*param_1 + 0x30))(param_1,param_2 + 0x28);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x30);
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 0x34) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x34,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0x34,4);
  }
  return param_1;
}



// FUNCTION 1423c5520 FUN_1423c5520 body=120 status=ok
// SIG undefined FUN_1423c5520(void)

longlong * FUN_1423c5520(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  
  puVar1 = (undefined4 *)(param_2 + 0xc);
  plVar3 = (longlong *)FUN_1406da970();
  puVar2 = *(undefined4 **)plVar3[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)plVar3[1])[1]) {
    *puVar1 = *puVar2;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    return plVar3;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,4);
  if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(plVar3,puVar1,4);
  }
  return plVar3;
}



// FUNCTION 1423c55a0 FUN_1423c55a0 body=697 status=ok
// SIG undefined FUN_1423c55a0(void)

longlong * FUN_1423c55a0(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  ulonglong local_res8;
  byte local_res18;
  byte local_res19;
  undefined4 *local_98;
  longlong *local_90;
  undefined4 **local_88;
  undefined4 ***local_80;
  undefined1 local_78 [96];
  
  FUN_14242a0d0(&local_res18,param_1,0,0xd6);
  if ((local_res18 & 2) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      iVar8 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
      if (iVar8 < 9) {
        puVar9 = (undefined4 *)FGuid::NewGuid(&local_98);
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        *param_2 = *puVar9;
        param_2[1] = uVar4;
        param_2[2] = uVar5;
        param_2[3] = uVar6;
        lVar10 = operator_new(0x30);
        if (lVar10 == 0) {
          puVar11 = (ulonglong *)0x0;
        }
        else {
          puVar11 = (ulonglong *)FUN_14217c900(lVar10);
        }
        *(ulonglong **)(param_2 + 4) = puVar11;
        local_res8 = *puVar11;
        FUN_14253eb20(param_1,&local_res8);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          plVar14 = (longlong *)*puVar11;
          *puVar11 = local_res8;
          if (local_res8 != 0) {
            *(int *)(local_res8 + 0x1c) = *(int *)(local_res8 + 0x1c) + 1;
          }
          if (plVar14 != (longlong *)0x0) {
            piVar1 = (int *)((longlong)plVar14 + 0x1c);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x38))();
            }
          }
        }
        lVar10 = *(longlong *)(param_2 + 4);
        local_res8 = *(ulonglong *)(lVar10 + 8);
        FUN_14276dcd0(param_1,&local_res8);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          plVar14 = *(longlong **)(lVar10 + 8);
          *(ulonglong *)(lVar10 + 8) = local_res8;
          if (local_res8 != 0) {
            *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          }
          if (plVar14 != (longlong *)0x0) {
            plVar2 = plVar14 + 3;
            *(int *)plVar2 = (int)*plVar2 + -1;
            if ((int)*plVar2 == 0) {
              (**(code **)(*plVar14 + 0x38))();
            }
          }
        }
        goto LAB_1423c56e4;
      }
    }
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_98,param_1);
    local_88 = &local_98;
    local_80 = &local_88;
    FUN_141661f40(&local_88,param_2);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_98);
  }
LAB_1423c56e4:
  if ((local_res19 & 1) == 0) {
    local_98 = param_2;
    local_90 = param_1;
    if (*(int *)((longlong)param_1 + 0x44) < 6) {
      FUN_1423c6970(&local_98,0);
    }
    else {
      plVar14 = (longlong *)(param_2 + 0xc);
      uVar13 = 0;
      do {
        local_res8 = CONCAT71(local_res8._1_7_,*plVar14 != 0);
        puVar3 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,&local_res8,1);
        }
        else {
          local_res8 = CONCAT71(local_res8._1_7_,*puVar3);
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        if ((char)local_res8 != '\0') {
          if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_1423c579e:
            uVar15 = 1;
          }
          else {
            lVar12 = operator_new(0x58);
            lVar10 = 0;
            if (lVar12 != 0) {
              lVar10 = FUN_14271d780(lVar12);
            }
            *plVar14 = lVar10;
            if ((((*(byte *)(param_1 + 5) & 1) == 0) || (DAT_1468b616c != '\0')) ||
               (DAT_146af1038 != 0)) goto LAB_1423c579e;
            uVar15 = 0;
          }
          FUN_14273acf0(*plVar14,param_1,uVar15);
        }
        uVar13 = uVar13 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar13 < 2);
      if (*(int *)((longlong)param_1 + 0x44) < 0x13) {
        lVar10 = 2;
        do {
          plVar14 = (longlong *)param_1[1];
          uVar7 = local_res8 >> 8;
          local_res8 = local_res8 & 0xffffffffffffff00;
          if ((undefined1 *)plVar14[1] < (undefined1 *)*plVar14 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,&local_res8,1);
          }
          else {
            local_res8 = CONCAT71((int7)uVar7,*(undefined1 *)*plVar14);
            *plVar14 = *plVar14 + 1;
          }
          if ((char)local_res8 != '\0') {
            FUN_14271d780(local_78);
            FUN_14273acf0(local_78,param_1,1);
            FColorVertexBuffer::~FColorVertexBuffer(local_78);
          }
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  if ((local_res18 & 1) == 0) {
    FUN_1423c5ad0(param_1,param_2 + 8);
  }
  return param_1;
}



// FUNCTION 1423c5860 FUN_1423c5860 body=621 status=ok
// SIG undefined FUN_1423c5860(void)

longlong * FUN_1423c5860(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  if ((int)param_1[8] < 0x1f6) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      plVar4 = (longlong *)FUN_1406da970(param_1,&local_38);
      puVar1 = *(undefined4 **)plVar4[1];
      if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar1 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_2c,4);
        if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar4,local_2c,4);
        }
      }
      else {
        local_2c[0] = *puVar1;
        *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
      }
      uVar2 = local_30;
      uStack_1c = local_2c[0];
      uStack_18 = local_2c[0];
      uStack_20 = local_30;
      local_30 = local_2c[0];
      *param_2 = local_38;
      param_2[1] = uStack_34;
      param_2[2] = uVar2;
      param_2[3] = local_2c[0];
      uStack_14 = local_2c[0];
      local_10 = local_2c[0];
      *(ulonglong *)(param_2 + 4) = CONCAT44(local_2c[0],local_2c[0]);
      param_2[6] = local_2c[0];
    }
  }
  else {
    uVar3 = FUN_1406da970();
    plVar4 = (longlong *)FUN_1406da970(uVar3,param_2 + 3);
    puVar1 = *(undefined4 **)plVar4[1];
    if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar1 + 1) {
      (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 6,4);
      if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar4,param_2 + 6,4);
      }
    }
    else {
      param_2[6] = *puVar1;
      *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
    }
  }
  if ((int)param_1[8] < 0x1f2) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      param_2[7] = 0;
      param_2[8] = 0x7f7fffff;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 7,4);
      }
    }
    else {
      param_2[7] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 8,4);
      }
    }
    else {
      param_2[8] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[9] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 9,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 9,4);
  }
  return param_1;
}



// FUNCTION 1423c5ad0 FUN_1423c5ad0 body=1871 status=ok
// SIG undefined FUN_1423c5ad0(void)

longlong * FUN_1423c5ad0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  uint local_64 [9];
  ulonglong uVar13;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  uVar11 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar2 = (longlong *)param_1[1];
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x55555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    uVar13 = uVar11;
    uVar7 = uVar11;
    if (0 < local_res8[0]) {
      do {
        lVar8 = *param_2 + uVar7;
        FUN_1406da970(param_1,lVar8);
        iVar6 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
        if (iVar6 < 0x1a) {
          FUN_140871cc0(param_1,local_64);
          auVar5[0xc] = (char)(local_64[0] >> 0x18);
          auVar5._0_12_ = ZEXT712(0);
          *(float *)(lVar8 + 0x10) = (float)(local_64[0] & 0xff) * 0.007843138 + -1.0;
          *(float *)(lVar8 + 0x14) = (float)(local_64[0] >> 8 & 0xff) * 0.007843138 + -1.0;
          *(float *)(lVar8 + 0x18) =
               (float)(int)CONCAT32(auVar5._10_3_,(ushort)(byte)(local_64[0] >> 0x10)) * 0.007843138
               + -1.0;
          *(float *)(lVar8 + 0x1c) = (float)(uint3)(auVar5._10_3_ >> 0x10) * 0.007843138 + -1.0;
          iVar6 = *(int *)((longlong)param_1 + 0x44);
          puVar10 = (undefined4 *)(lVar8 + 0x20);
          if (iVar6 < 6) {
            uVar9 = 2;
            local_res20 = 0;
            if (puVar10 <= (undefined4 *)(lVar8 + 0x28U)) {
LAB_1423c60df:
              puVar10 = (undefined4 *)(lVar8 + 0x20);
              for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
            }
LAB_1423c60e4:
            FUN_140871cc0(param_1,lVar8 + 0x20);
          }
          else {
            if (puVar10 != (undefined4 *)(lVar8 + 0x28)) {
              do {
                puVar3 = *(undefined4 **)param_1[1];
                if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
                  (**(code **)(*param_1 + 0x50))(param_1,puVar10,4);
                  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(param_1,puVar10,4);
                  }
                }
                else {
                  *puVar10 = *puVar3;
                  *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
                }
                puVar10 = puVar10 + 1;
              } while (puVar10 != (undefined4 *)(lVar8 + 0x28));
              iVar6 = *(int *)((longlong)param_1 + 0x44);
            }
            if (iVar6 < 0x13) {
              plVar2 = (longlong *)param_1[1];
              if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
                (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
                if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_1,local_res10,4);
                }
              }
              else {
                local_res10[0] = *(undefined4 *)*plVar2;
                *plVar2 = *plVar2 + 4;
              }
              plVar2 = (longlong *)param_1[1];
              if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
                (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
                if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                  puVar10 = local_res10;
LAB_1423c61dd:
                  FArchive::ByteSwap(param_1,puVar10,4);
                }
              }
              else {
                local_res10[0] = *(undefined4 *)*plVar2;
                *plVar2 = *plVar2 + 4;
              }
            }
          }
        }
        else {
          FUN_1406da970(param_1,lVar8);
          FUN_140da9f70(param_1,lVar8 + 0x10);
          iVar6 = *(int *)((longlong)param_1 + 0x44);
          puVar10 = (undefined4 *)(lVar8 + 0x20);
          if (iVar6 < 6) {
            if (puVar10 <= (undefined4 *)(lVar8 + 0x28U)) {
              uVar9 = 8;
              if ((undefined4 *)(lVar8 + 0x28U) < puVar10) {
                uVar9 = uVar11;
              }
              uVar9 = uVar9 >> 2;
              goto LAB_1423c60df;
            }
            goto LAB_1423c60e4;
          }
          if (puVar10 != (undefined4 *)(lVar8 + 0x28)) {
            do {
              puVar3 = *(undefined4 **)param_1[1];
              if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
                (**(code **)(*param_1 + 0x50))(param_1,puVar10,4);
                if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_1,puVar10,4);
                }
              }
              else {
                *puVar10 = *puVar3;
                *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
              }
              puVar10 = puVar10 + 1;
            } while (puVar10 != (undefined4 *)(lVar8 + 0x28));
            iVar6 = *(int *)((longlong)param_1 + 0x44);
          }
          if (iVar6 < 0x13) {
            plVar2 = (longlong *)param_1[1];
            if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
              (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
              if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_1,local_res18,4);
              }
            }
            else {
              local_res18[0] = *(undefined4 *)*plVar2;
              *plVar2 = *plVar2 + 4;
            }
            plVar2 = (longlong *)param_1[1];
            if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
              (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
              if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                puVar10 = local_res18;
                goto LAB_1423c61dd;
              }
            }
            else {
              local_res18[0] = *(undefined4 *)*plVar2;
              *plVar2 = *plVar2 + 4;
            }
          }
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar7 = uVar7 + 0x30;
      } while ((int)uVar12 < (int)param_2[1]);
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_2,local_res8[0]);
    }
    uVar13 = uVar11;
    if (0 < local_res8[0]) {
      do {
        iVar6 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        uVar7 = uVar11;
        if ((longlong)iVar6 * 0x30 + *param_2 != 0) {
          uVar7 = FUN_1423c3930();
        }
        FUN_1406da970(param_1,uVar7);
        iVar6 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
        if (iVar6 < 0x1a) {
          FUN_140871cc0(param_1,local_64);
          auVar4[0xc] = (char)(local_64[0] >> 0x18);
          auVar4._0_12_ = ZEXT712(0);
          *(float *)(uVar7 + 0x10) = (float)(local_64[0] & 0xff) * 0.007843138 + -1.0;
          *(float *)(uVar7 + 0x14) = (float)(local_64[0] >> 8 & 0xff) * 0.007843138 + -1.0;
          *(float *)(uVar7 + 0x18) =
               (float)(int)CONCAT32(auVar4._10_3_,(ushort)(byte)(local_64[0] >> 0x10)) * 0.007843138
               + -1.0;
          *(float *)(uVar7 + 0x1c) = (float)(uint3)(auVar4._10_3_ >> 0x10) * 0.007843138 + -1.0;
          iVar6 = *(int *)((longlong)param_1 + 0x44);
          puVar10 = (undefined4 *)(uVar7 + 0x20);
          if (iVar6 < 6) {
            local_res20 = 0;
            if (puVar10 <= (undefined4 *)(uVar7 + 0x28)) {
LAB_1423c5dbb:
              puVar10 = (undefined4 *)(uVar7 + 0x20);
              for (lVar8 = 2; lVar8 != 0; lVar8 = lVar8 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
            }
LAB_1423c5dc0:
            FUN_140871cc0(param_1,uVar7 + 0x20);
          }
          else {
            if (puVar10 != (undefined4 *)(uVar7 + 0x28)) {
              do {
                puVar3 = *(undefined4 **)param_1[1];
                if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
                  (**(code **)(*param_1 + 0x50))(param_1,puVar10,4);
                  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(param_1,puVar10,4);
                  }
                }
                else {
                  *puVar10 = *puVar3;
                  *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
                }
                puVar10 = puVar10 + 1;
              } while (puVar10 != (undefined4 *)(uVar7 + 0x28));
              iVar6 = *(int *)((longlong)param_1 + 0x44);
            }
            if (iVar6 < 0x13) {
              plVar2 = (longlong *)param_1[1];
              if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
                (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
                if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_1,local_res10,4);
                }
              }
              else {
                local_res10[0] = *(undefined4 *)*plVar2;
                *plVar2 = *plVar2 + 4;
              }
              plVar2 = (longlong *)param_1[1];
              if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
                (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
                if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                  puVar10 = local_res10;
LAB_1423c5ebd:
                  FArchive::ByteSwap(param_1,puVar10,4);
                }
              }
              else {
                local_res10[0] = *(undefined4 *)*plVar2;
                *plVar2 = *plVar2 + 4;
              }
            }
          }
        }
        else {
          FUN_1406da970(param_1,uVar7);
          FUN_140da9f70(param_1,uVar7 + 0x10);
          iVar6 = *(int *)((longlong)param_1 + 0x44);
          puVar10 = (undefined4 *)(uVar7 + 0x20);
          if (iVar6 < 6) {
            if (puVar10 <= (undefined4 *)(uVar7 + 0x28)) goto LAB_1423c5dbb;
            goto LAB_1423c5dc0;
          }
          if (puVar10 != (undefined4 *)(uVar7 + 0x28)) {
            do {
              puVar3 = *(undefined4 **)param_1[1];
              if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
                (**(code **)(*param_1 + 0x50))(param_1,puVar10,4);
                if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_1,puVar10,4);
                }
              }
              else {
                *puVar10 = *puVar3;
                *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
              }
              puVar10 = puVar10 + 1;
            } while (puVar10 != (undefined4 *)(uVar7 + 0x28));
            iVar6 = *(int *)((longlong)param_1 + 0x44);
          }
          if (iVar6 < 0x13) {
            plVar2 = (longlong *)param_1[1];
            if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
              (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
              if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_1,local_res18,4);
              }
            }
            else {
              local_res18[0] = *(undefined4 *)*plVar2;
              *plVar2 = *plVar2 + 4;
            }
            plVar2 = (longlong *)param_1[1];
            if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
              (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
              if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
                puVar10 = local_res18;
                goto LAB_1423c5ebd;
              }
            }
            else {
              local_res18[0] = *(undefined4 *)*plVar2;
              *plVar2 = *plVar2 + 4;
            }
          }
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < local_res8[0]);
    }
  }
  return param_1;
}



// FUNCTION 1423c6220 FUN_1423c6220 body=508 status=ok
// SIG undefined FUN_1423c6220(void)

longlong * FUN_1423c6220(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xc0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc0);
  iVar7 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x15556)))) {
    if ((bVar1 & 1) != 0) {
      lVar4 = *param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        FUN_1423c50e0(lVar4);
        lVar4 = lVar4 + 0xc0;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::
        ResizeTo(param_2,iVar2);
      }
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            FUN_1404852a0(param_2,iVar2);
          }
          puVar5 = (undefined8 *)((longlong)iVar2 * 0xc0 + *param_2);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            FUN_14271e220(puVar5 + 10,0);
            puVar5[0x17] = 0;
          }
          FUN_1423c55a0(param_1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1423c55a0(param_1,(longlong)iVar7 * 0xc0 + *param_2);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1423c6420 operator== body=525 status=ok
// SIG undefined operator==(void)

undefined8 FKeyHandleMap::operator==(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  undefined8 local_38;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined1 auStack_18 [16];
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) !=
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    return 0;
  }
  iVar2 = (int)param_1[5];
  puStack_20 = (uint *)(param_1 + 2);
  piVar8 = (int *)0x0;
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puStack_20;
    }
    uVar1 = *puVar9;
    piVar6 = piVar8;
    piVar7 = piVar8;
    while (uVar1 == 0) {
      iVar4 = (int)piVar6;
      uStack_40 = (int)piVar7 + 0x20;
      piVar7 = (int *)(ulonglong)uStack_40;
      local_58 = iVar4 + 1;
      piVar6 = (int *)(ulonglong)local_58;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1423c64ff;
      uVar1 = puVar9[(longlong)iVar4 + 1];
    }
    uStack_54 = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_1423c64ff:
      local_48._4_4_ = iVar2;
    }
  }
  auStack_18._4_4_ = local_48._4_4_;
  auStack_18._0_4_ = 0xffffffff;
  auStack_18._8_4_ = uStack_40;
  auStack_18._12_4_ = iStack_3c;
  uStack_28 = local_58;
  uStack_24 = uStack_54;
  uStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = auStack_18._8_8_;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar3 = local_48._4_4_ < iVar2;
  local_30 = param_1;
  local_48 = puStack_20;
  if (bVar3) {
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        iVar2 = *(int *)(*param_1 + (longlong)iStack_3c * 0x10);
        plVar5 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar5 = param_2 + 7;
        }
        iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_2[9] - 1U & (longlong)iVar2) * 4);
        if (iVar4 != -1) {
          do {
            piVar6 = (int *)((longlong)iVar4 * 0x10 + *param_2);
            if (*piVar6 == iVar2) {
              if (iVar4 != -1) goto LAB_1423c65c1;
              break;
            }
            iVar4 = piVar6[2];
          } while (iVar4 != -1);
        }
      }
      piVar6 = piVar8;
LAB_1423c65c1:
      piVar7 = piVar6 + 1;
      if (piVar6 == (int *)0x0) {
        piVar7 = piVar8;
      }
      if (piVar7 == (int *)0x0) {
        return 0;
      }
      if (*piVar7 != *(int *)(*param_1 + 4 + (longlong)iStack_3c * 0x10)) {
        return 0;
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return 1;
}



// FUNCTION 1423c6630 operator== body=25 status=ok
// SIG undefined operator==(void)

ulonglong FNameCurveKey::operator==(float *param_1,float *param_2)

{
  ulonglong in_RAX;
  
  if ((*param_2 == *param_1) &&
     (in_RAX = *(ulonglong *)(param_2 + 2), *(ulonglong *)(param_1 + 2) == in_RAX)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423c6650 operator== body=83 status=ok
// SIG undefined operator==(void)

ulonglong FRichCurveKey::operator==(char *param_1,char *param_2)

{
  ulonglong in_RAX;
  
  if (((((*(float *)(param_2 + 4) == *(float *)(param_1 + 4)) &&
        (*(float *)(param_2 + 8) == *(float *)(param_1 + 8))) && (*param_1 == *param_2)) &&
      ((in_RAX = 0, param_1[1] == param_2[1] && (in_RAX = 0, param_1[2] == param_2[2])))) &&
     ((*param_1 != '\x02' ||
      ((*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0xc) &&
       (*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14))))))) {
    return 1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423c66b0 FUN_1423c66b0 body=692 status=ok
// SIG undefined FUN_1423c66b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423c66b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar7 = (longlong *)0x0;
  plVar8 = (longlong *)param_1[5];
  if ((longlong *)param_1[5] == (longlong *)0x0) {
    plVar8 = param_1 + 3;
  }
  plVar4 = plVar8 + (int)param_1[6];
  for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
    if (*plVar8 != 0) {
      bVar3 = true;
      goto LAB_1423c6715;
    }
  }
  bVar3 = false;
LAB_1423c6715:
  lVar1 = *(longlong *)(*param_1 + 0xee0);
  if ((((lVar1 == 0) || (*(char *)(lVar1 + 0x28) == '\0')) || (bVar3)) &&
     (((lVar1 = *(longlong *)(*param_1 + 0xee8), lVar1 == 0 || (*(char *)(lVar1 + 0x28) == '\0')) ||
      (!bVar3)))) {
    plVar4 = (longlong *)operator_new(0x770);
    plVar8 = plVar7;
    if (plVar4 != (longlong *)0x0) {
      FUN_1423c35e0(plVar4,(int)param_1[7],"FSplineMeshVertexFactory",0);
      *(undefined1 *)((longlong)plVar4 + 0x339) = 0;
      *plVar4 = (longlong)&PTR_FUN_1450723b8;
      plVar8 = plVar4;
    }
    lVar1 = *param_1;
    if (bVar3) {
      puVar2 = *(undefined8 **)(lVar1 + 0xee8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(longlong **)(lVar1 + 0xee8) = plVar8;
    }
    else {
      puVar2 = *(undefined8 **)(lVar1 + 0xee0);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(longlong **)(lVar1 + 0xee0) = plVar8;
    }
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0xffffffffffffffff;
    local_38 = 0;
    FUN_1426fb810(param_1[1] + 0xe8,plVar8,&local_128);
    FUN_142723e40(param_1[1],plVar8,&local_128);
    FUN_142723ca0(param_1[1],plVar8,&local_128);
    FUN_142723be0(param_1[1],plVar8,&local_128,*(undefined4 *)(param_1[2] + 0x90));
    plVar4 = plVar7;
    plVar9 = plVar7;
    do {
      iVar6 = (int)plVar7;
      if ((iVar6 < 0) || (lVar1 = param_1[1], *(int *)(lVar1 + 0x1f8) <= iVar6)) {
LAB_1423c68ed:
        FUN_142723b20(plVar7,plVar8,&local_128,0);
      }
      else {
        lVar5 = *(longlong *)(lVar1 + 0x1f0);
        if (*(longlong *)(lVar1 + 0x1f0) == 0) {
          lVar5 = lVar1 + 0x140;
        }
        if (*(int *)((longlong)plVar9 + lVar5 + 0x54) == 0) goto LAB_1423c68ed;
        FUN_142723a20((longlong)plVar4 + lVar5,plVar7,plVar8);
      }
      plVar7 = (longlong *)(ulonglong)(iVar6 + 1U);
      plVar4 = plVar4 + 0xb;
      plVar9 = plVar9 + 0xb;
    } while ((int)(iVar6 + 1U) < 2);
    FUN_142578240(plVar8,&local_128);
    (**(code **)(*plVar8 + 0x28))(plVar8);
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423c6970 FUN_1423c6970 body=205 status=ok
// SIG undefined FUN_1423c6970(void)

void FUN_1423c6970(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  char local_res10 [24];
  
  lVar1 = (longlong)param_2 * 8 + 0x30;
  plVar2 = (longlong *)param_1[1];
  local_res10[0] = *(longlong *)(lVar1 + *param_1) != 0;
  pcVar3 = *(char **)plVar2[1];
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
  }
  else {
    local_res10[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  if (local_res10[0] == '\0') {
    return;
  }
  lVar4 = param_1[1];
  if ((*(byte *)(lVar4 + 0x28) & 1) != 0) {
    lVar4 = operator_new();
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_14271d780(lVar4);
    }
    *(undefined8 *)(lVar1 + *param_1) = uVar5;
    lVar4 = param_1[1];
    if ((((*(byte *)(lVar4 + 0x28) & 1) != 0) && (DAT_1468b616c == '\0')) && (DAT_146af1038 == 0)) {
      uVar5 = 0;
      goto LAB_1423c6a26;
    }
  }
  uVar5 = 1;
LAB_1423c6a26:
  FUN_14273acf0(*(undefined8 *)(lVar1 + *param_1),lVar4,uVar5);
  return;
}



// FUNCTION 1423c6a40 FUN_1423c6a40 body=264 status=ok
// SIG undefined FUN_1423c6a40(void)

void FUN_1423c6a40(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(int *)param_1[1] < *(int *)(*param_1 + 8)) &&
     (*(int *)param_1[3] < *(int *)(param_1[2] + 8))) {
    lVar3 = param_1[4];
    iVar2 = *(int *)(lVar3 + 0xd78);
    *(int *)(lVar3 + 0xd78) = iVar2 + 1;
    if (*(int *)(lVar3 + 0xd7c) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar3 + 0xd70,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1[4] + 0xd70) + (longlong)iVar2 * 0x18);
    *puVar1 = *(undefined4 *)param_1[3];
    puVar1[1] = *(int *)(param_1[2] + 8) - *(int *)param_1[3];
    puVar1[2] = *(undefined4 *)param_1[1];
    puVar1[3] = *(int *)(*param_1 + 8) - *(int *)param_1[1];
    *(undefined8 *)(puVar1 + 4) = 0;
    plVar4 = *(longlong **)(param_1[4] + 0xd98);
    if (plVar4 != (longlong *)0x0) {
      iVar2 = *(int *)param_1[5];
      if (((-1 < iVar2) && (iVar2 < (int)plVar4[1])) &&
         (lVar3 = *(longlong *)(*plVar4 + (longlong)iVar2 * 8), *(longlong *)(puVar1 + 4) = lVar3,
         lVar3 != 0)) goto LAB_1423c6b29;
    }
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_1[4] + 0xd88);
  }
LAB_1423c6b29:
  *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + 8);
  *(undefined4 *)param_1[3] = *(undefined4 *)(param_1[2] + 8);
  return;
}



// FUNCTION 1423c6be0 FUN_1423c6be0 body=97 status=ok
// SIG undefined FUN_1423c6be0(void)

undefined8 * FUN_1423c6be0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450753b8;
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1423c6c50 FUN_1423c6c50 body=97 status=ok
// SIG undefined FUN_1423c6c50(void)

undefined8 * FUN_1423c6c50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450753c8;
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



// FUNCTION 1423c6cc0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<`USplineMeshComponent::UpdateRenderStateAndCollision_Internal'::`5'::EURCMacro_UpdateSplineParamsRTCommand>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145072470;
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1423c6d30 FUN_1423c6d30 body=123 status=ok
// SIG undefined FUN_1423c6d30(void)

longlong FUN_1423c6d30(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4d8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4a8);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x508);
  }
  return param_1;
}



// FUNCTION 1423c6db0 FUN_1423c6db0 body=90 status=ok
// SIG undefined FUN_1423c6db0(void)

longlong FUN_1423c6db0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 1423c6e10 FUN_1423c6e10 body=43 status=ok
// SIG undefined FUN_1423c6e10(void)

undefined8 * FUN_1423c6e10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_1450709b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1423c6e40 FUN_1423c6e40 body=52 status=ok
// SIG undefined FUN_1423c6e40(void)

undefined8 FUN_1423c6e40(undefined8 param_1,ulonglong param_2)

{
  FUN_1420d82a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1423c6e80 FUN_1423c6e80 body=43 status=ok
// SIG undefined FUN_1423c6e80(void)

undefined8 * FUN_1423c6e80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1423c6eb0 `scalar_deleting_destructor' body=115 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSplineStaticLightingMesh::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[-0x1b] != 0) {
    FMemory::Free();
  }
  FStaticLightingMesh::~FStaticLightingMesh(param_1 + -0x1b);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -0x32,0x1a0);
  }
  return param_1 + -0x32;
}



// FUNCTION 1423c6f30 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SDockingCross>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14504f408;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 1423c6f60 `scalar_deleting_destructor' body=60 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FStaticLightingMesh::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  ~FStaticLightingMesh();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -0xb8,200);
  }
  return param_1 + -0xb8;
}



// FUNCTION 1423c6fa0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FStaticMeshComponentInstanceData::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  FUN_1423c4f30(param_1 + 0x15);
  *param_1 = &PTR_FUN_14505f6b8;
  FUN_1420d82a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1423c7010 FUN_1423c7010 body=72 status=ok
// SIG undefined FUN_1423c7010(void)

undefined8 * FUN_1423c7010(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14412c180;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1423c7060 `scalar_deleting_destructor' body=226 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTextRenderComponentMIDCache::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450742b8;
  uVar1 = FUN_14164ab60();
  FUN_141597530(uVar1,param_1[2]);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 3,0);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1423c7150 FUN_1423c7150 body=52 status=ok
// SIG undefined FUN_1423c7150(void)

undefined8 FUN_1423c7150(undefined8 param_1,ulonglong param_2)

{
  FUN_1423c51f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xde0);
  }
  return param_1;
}



// FUNCTION 1423c7190 FUN_1423c7190 body=63 status=ok
// SIG undefined FUN_1423c7190(void)

longlong FUN_1423c7190(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x28) = &PTR__purecall_1450709b0;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1423c71d0 `scalar_deleting_destructor' body=149 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCurveFloat::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_14413ebc8;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR__scalar_deleting_destructor__14413eb30;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x38);
  *(undefined ***)(param_1 + 0x28) = &PTR__purecall_1450709b0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1423c7270 `scalar_deleting_destructor' body=212 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCurveLinearColor::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x1f0);
  lVar2 = 4;
  plVar1 = (longlong *)(param_1 + 0x238);
  do {
    puVar3 = puVar3 + -0xe;
    lVar2 = lVar2 + -1;
    *puVar3 = &PTR_FUN_14413ebc8;
    if (plVar1[-0xb] != 0) {
      FMemory::Free();
    }
    *puVar3 = &PTR__scalar_deleting_destructor__14413eb30;
    *(undefined4 *)(plVar1 + -0xd) = 0;
    if (plVar1[-0xe] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (plVar1 + -0x16);
    plVar1 = plVar1 + -0xe;
  } while (lVar2 != 0);
  *(undefined ***)(param_1 + 0x28) = &PTR__purecall_1450709b0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 1423c7350 FUN_1423c7350 body=139 status=ok
// SIG undefined FUN_1423c7350(void)

longlong FUN_1423c7350(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd5f0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1423c73e0 `scalar_deleting_destructor' body=212 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCurveVector::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x180);
  lVar2 = 3;
  plVar1 = (longlong *)(param_1 + 0x1c8);
  do {
    puVar3 = puVar3 + -0xe;
    lVar2 = lVar2 + -1;
    *puVar3 = &PTR_FUN_14413ebc8;
    if (plVar1[-0xb] != 0) {
      FMemory::Free();
    }
    *puVar3 = &PTR__scalar_deleting_destructor__14413eb30;
    *(undefined4 *)(plVar1 + -0xd) = 0;
    if (plVar1[-0xe] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (plVar1 + -0x16);
    plVar1 = plVar1 + -0xe;
  } while (lVar2 != 0);
  *(undefined ***)(param_1 + 0x28) = &PTR__purecall_1450709b0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 1423c74c0 FUN_1423c74c0 body=66 status=ok
// SIG undefined FUN_1423c74c0(void)

longlong FUN_1423c74c0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x7a8) = &PTR_FUN_1440facf0;
  FUN_1423c53e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x850);
  }
  return param_1;
}



// FUNCTION 1423c7510 FUN_1423c7510 body=52 status=ok
// SIG undefined FUN_1423c7510(void)

undefined8 FUN_1423c7510(undefined8 param_1,ulonglong param_2)

{
  FUN_14235f4e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1423c7550 FUN_1423c7550 body=135 status=ok
// SIG undefined FUN_1423c7550(void)

longlong FUN_1423c7550(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x6f8);
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
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 1423c75e0 AddDefaulted body=94 status=ok
// SIG undefined AddDefaulted(void)

int TArray<TOptional<FKeyHandle>,FDefaultAllocator>::AddDefaulted(longlong *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  if (param_2 != 0) {
    puVar2 = (undefined1 *)(*param_1 + (longlong)iVar1 * 8 + 4);
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 1423c7640 AddKey body=609 status=ok
// SIG undefined AddKey(void)

undefined4 *
FRichCurve::AddKey(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,
                  char param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 local_res8 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_a8;
  int *local_a0;
  longlong *local_98;
  undefined1 local_90 [4];
  uint local_8c;
  longlong local_88;
  uint local_80;
  int local_7c;
  longlong local_68;
  char local_60;
  char local_5f;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar7 = 0;
    pfVar3 = (float *)(*(longlong *)(param_1 + 0x60) + 4);
    do {
      if (param_3 < *pfVar3 || param_3 == *pfVar3) break;
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 1;
      pfVar3 = pfVar3 + 7;
    } while (lVar7 < *(int *)(param_1 + 0x68));
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x60,iVar2);
  }
  lVar6 = (longlong)iVar5 * 0x1c;
  _Src = (void *)(*(longlong *)(param_1 + 0x60) + lVar6);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x1c),_Src,(longlong)(iVar2 - iVar5) * 0x1c);
  lVar7 = *(longlong *)(param_1 + 0x60);
  *(undefined2 *)(lVar6 + lVar7) = 0;
  *(undefined1 *)(lVar6 + 2 + lVar7) = 0;
  *(float *)(lVar6 + 4 + lVar7) = param_3;
  *(undefined4 *)(lVar6 + 8 + lVar7) = param_4;
  *(undefined8 *)(lVar6 + 0xc + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0x14 + lVar7) = 0;
  if ((0 < iVar5) && (param_5 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x60);
    fVar1 = *(float *)((longlong)iVar5 * 0x1c + -0x14 + lVar7);
    for (fVar8 = *(float *)(lVar6 + 8 + lVar7); 180.0 < fVar8 - fVar1; fVar8 = fVar8 + -360.0) {
    }
    for (; fVar8 - fVar1 < -180.0; fVar8 = fVar8 + 360.0) {
    }
    *(float *)(lVar6 + 8 + lVar7) = fVar8;
  }
  FKeyHandleMap::CreateIterator(param_1 + 8,&local_98);
  if (local_7c < *(int *)(local_88 + 0x18)) {
    do {
      iVar2 = *(int *)(*local_98 + 4 + (longlong)local_7c * 0x10);
      if (iVar5 <= iVar2) {
        *(int *)(*local_98 + 4 + (longlong)local_7c * 0x10) = iVar2 + 1;
      }
      local_80 = local_80 & ~local_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_90);
    } while (local_7c < *(int *)(local_88 + 0x18));
  }
  if ((local_60 != '\0') && (local_5f != '\0')) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
    ConditionalRehash(local_68,*(int *)(local_68 + 8) - *(int *)(local_68 + 0x34),1);
  }
  local_a8 = (int *)&stack0x00000030;
  local_a0 = local_res18;
  local_res18[0] = iVar5;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(param_1 + 8,local_res20,&local_a8,0);
  local_res20[0] = iVar5;
  lVar7 = TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
          ::FindKey(param_1 + 8,iVar5);
  if (lVar7 == 0) {
    DAT_146531fa0 = DAT_146531fa0 + 1;
    local_a8 = local_res18;
    local_a0 = local_res20;
    local_res18[0] = DAT_146531fa0;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(param_1 + 8,local_res8,&local_a8,0)
    ;
  }
  puVar4 = (undefined4 *)
           TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
           ::FindKey(param_1 + 8,iVar5);
  *param_2 = *puVar4;
  return param_2;
}



// FUNCTION 1423c78b0 AddLevel body=97 status=ok
// SIG undefined AddLevel(void)

void FStreamingManagerCollection::AddLevel(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
      (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423c7920 FUN_1423c7920 body=906 status=ok
// SIG undefined FUN_1423c7920(void)

void FUN_1423c7920(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  uint local_res18;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 *puVar12;
  undefined2 *local_58;
  ulonglong local_50;
  int local_48;
  
  plVar3 = DAT_146b16d40;
  bVar11 = *DAT_146b16d48 != 0;
  if (DAT_146ab62fe == '\0') {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,0);
    puVar4 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar4 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x8000000);
    bVar11 = false;
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
      bVar11 = false;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (bVar11) {
    if (plVar3 == (longlong *)0x0) {
      puVar12 = &DAT_1468e2360;
      FConfigCacheIni::GetFloat
                (DAT_1468b6148,L"TextureStreaming",L"LoadMapTimeLimit",param_1 + 0x28,&DAT_1468e2360
                );
      lVar1 = operator_new(0x9c0);
      uVar2 = 0;
      if (lVar1 != 0) {
        uVar2 = FUN_14282aa20(lVar1);
      }
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      iVar10 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar10 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar10 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar10);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar10 * 8) = uVar2;
      if (param_2 == '\0') {
        local_58 = (undefined2 *)0x0;
        local_50 = 0;
        local_48 = -1;
        uVar2 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
        FUN_1417a5560(uVar2,&local_58,1,0x10,(ulonglong)puVar12 & 0xffffffff00000000);
        uVar5 = local_50 & 0xffffffff;
        do {
          local_48 = local_48 + 1;
          if ((int)local_50 <= local_48) break;
        } while (*(longlong *)(local_58 + (longlong)local_48 * 4) == 0);
        do {
          puVar4 = local_58;
          if ((local_48 < 0) || ((int)uVar5 <= local_48)) {
joined_r0x0001423c7c8f:
            if (puVar4 == (undefined2 *)0x0) {
              return;
            }
            FMemory::Free(puVar4);
            return;
          }
          (**(code **)(**(longlong **)(local_58 + (longlong)local_48 * 4) + 0x278))();
          uVar5 = local_50 & 0xffffffff;
          do {
            local_48 = local_48 + 1;
            if ((int)local_50 <= local_48) break;
          } while (*(longlong *)(local_58 + (longlong)local_48 * 4) == 0);
        } while( true );
      }
    }
  }
  else if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,0,0);
    uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    lVar1 = (longlong)*(int *)(param_1 + 0x18);
    uVar5 = 0;
    puVar12 = *(undefined8 **)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x18) != 0) {
      local_res18 = 0;
      bVar11 = (undefined8 *)**(longlong **)(param_1 + 0x10) != puVar12;
      uVar7 = uVar5;
      uVar9 = uVar5;
      do {
        uVar8 = (uint)uVar9;
        uVar6 = (uint)uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = (ulonglong)(uVar6 + 1);
        if ((longlong)uVar5 < lVar1) {
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8);
          do {
            if (bVar11 != ((undefined8 *)*plVar3 != puVar12)) break;
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar5 = uVar5 + 1;
            plVar3 = plVar3 + 1;
          } while ((longlong)uVar5 < lVar1);
        }
        iVar10 = (int)uVar7 - uVar6;
        if (bVar11 != false) {
          if (uVar8 != uVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar8 * 8),
                       (void *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar6 * 8),
                       (longlong)iVar10 << 3);
            uVar8 = local_res18;
          }
          local_res18 = uVar8 + iVar10;
          uVar9 = (ulonglong)local_res18;
        }
        uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        bVar11 = (bool)(bVar11 ^ 1);
      } while ((longlong)uVar5 < lVar1);
      *(int *)(param_1 + 0x18) = (int)uVar9;
      puVar12 = *(undefined8 **)(param_1 + 0x30);
    }
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12,1);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_58 = (undefined2 *)0x0;
    local_50 = 0;
    local_48 = -1;
    uVar2 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
    FUN_1417a5560(uVar2,&local_58,1,0x10,(ulonglong)uVar8 << 0x20);
    uVar5 = local_50 & 0xffffffff;
    do {
      local_48 = local_48 + 1;
      puVar4 = local_58;
      if ((int)local_50 <= local_48) break;
    } while (*(longlong *)(local_58 + (longlong)local_48 * 4) == 0);
    do {
      if ((local_48 < 0) || ((int)uVar5 <= local_48)) goto joined_r0x0001423c7c8f;
      plVar3 = *(longlong **)(puVar4 + (longlong)local_48 * 4);
      if ((*(byte *)((longlong)plVar3 + 0xc4) & 2) != 0) {
        (**(code **)(*plVar3 + 0x278))(plVar3);
        uVar5 = local_50 & 0xffffffff;
        puVar4 = local_58;
      }
      do {
        local_48 = local_48 + 1;
        if ((int)uVar5 <= local_48) break;
      } while (*(longlong *)(puVar4 + (longlong)local_48 * 4) == 0);
    } while( true );
  }
  return;
}



// FUNCTION 1423c7cb0 FUN_1423c7cb0 body=202 status=ok
// SIG undefined FUN_1423c7cb0(void)

void FUN_1423c7cb0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x6e8))(param_2);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x3c) & 2) != 0)) {
      FTickFunction::AddPrerequisite(lVar2 + 0x30,param_1,param_1 + 0x28);
      if ((*(byte *)(lVar2 + 0x1b8) & 4) != 0) {
        return;
      }
      FWeakObjectPtr::operator=(local_18,lVar2);
      lVar3 = param_2[9];
      lVar4 = (longlong)(int)param_2[10] * 0x10 + lVar3;
      local_10 = lVar2 + 0x30;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3,local_18);
        if ((cVar1 != '\0') && (*(longlong *)(lVar3 + 8) == local_10)) {
          return;
        }
      }
    }
    FTickFunction::AddPrerequisite(param_2 + 5,param_1,param_1 + 0x28);
  }
  return;
}



// FUNCTION 1423c7d80 AddReferencedObjects body=54 status=ok
// SIG undefined AddReferencedObjects(void)

void FStaticMeshComponentInstanceData::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  FUN_1423812a0();
                    /* WARNING: Could not recover jumptable at 0x0001423c7db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xa0,0,0);
  return;
}



// FUNCTION 1423c7dc0 AddReferencedObjects body=807 status=ok
// SIG undefined AddReferencedObjects(void)

void FTextRenderComponentMIDCache::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_a4 = 1;
  local_a8 = 0;
  uVar3 = *(uint *)(param_1 + 0x40);
  puVar1 = (uint *)(param_1 + 0x28);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = *puVar11;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar10 == 0) {
      lVar7 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar9 = local_a8 + 1;
      bVar14 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar9;
      if (bVar14) goto LAB_1423c7e8d;
      uVar10 = puVar11[lVar7 + 1];
    }
    uStack_a4 = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_94 = (iStack_90 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1423c7e8d:
      uStack_94 = uVar3;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x40);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar10 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = puVar11[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar9 = (int)uStack_74 >> 5;
    while (uVar6 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1423c7f6d;
      uVar6 = puVar11[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1423c7f6d:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_44 != uStack_74 || (local_50 != puVar1))) {
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)(int)uStack_44 * 0x28)
    ;
    if ((char)plVar13[4] == '\0') {
      lVar8 = *plVar13;
      lVar7 = lVar8 + (longlong)(int)plVar13[1] * 8;
      for (; lVar8 != lVar7; lVar8 = lVar8 + 8) {
        (**(code **)(*param_2 + 0x38))(param_2,lVar8);
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  plVar13 = *(longlong **)(param_1 + 0x68);
  plVar12 = plVar13 + (longlong)*(int *)(param_1 + 0x70) * 2;
  do {
    if (plVar13 == plVar12) {
      return;
    }
    plVar4 = (longlong *)plVar13[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar9 = (int)plVar4[1];
      bVar14 = iVar9 == 0;
      if (bVar14) {
        *(int *)(plVar4 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (!bVar14) {
LAB_1423c8030:
        LOCK();
        bVar14 = iVar9 == (int)plVar4[1];
        if (bVar14) {
          *(int *)(plVar4 + 1) = iVar9 + 1;
        }
        UNLOCK();
        if (!bVar14) break;
        plVar5 = (longlong *)*plVar13;
        if ((plVar5 != (longlong *)0x0) && ((char)plVar5[4] == '\0')) {
          lVar8 = *plVar5;
          lVar7 = lVar8 + (longlong)(int)plVar5[1] * 8;
          for (; lVar8 != lVar7; lVar8 = lVar8 + 8) {
            (**(code **)(*param_2 + 0x38))(param_2,lVar8,0,0);
          }
        }
        LOCK();
        plVar5 = plVar4 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
    }
LAB_1423c80bf:
    plVar13 = plVar13 + 2;
  } while( true );
  LOCK();
  iVar9 = (int)plVar4[1];
  bVar14 = iVar9 == 0;
  if (bVar14) {
    *(int *)(plVar4 + 1) = 0;
    iVar9 = 0;
  }
  UNLOCK();
  if (bVar14) goto LAB_1423c80bf;
  goto LAB_1423c8030;
}



// FUNCTION 1423c80f0 FUN_1423c80f0 body=111 status=ok
// SIG undefined FUN_1423c80f0(void)

void FUN_1423c80f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x760)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x758) + 0x18 + lVar3);
      if (lVar1 != 0) {
        FMeshMapBuildData::AddReferencedObjects(lVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0xc0;
    } while (iVar2 < *(int *)(param_1 + 0x760));
  }
  return;
}



// FUNCTION 1423c8160 AddLoadedObject body=70 status=ok
// SIG undefined AddLoadedObject(void)

void FUObjectSerializeContext::AddLoadedObject(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1423c81b0 AddViewInfoToArray body=451 status=ok
// SIG undefined AddViewInfoToArray(void)

void IStreamingManager::AddViewInfoToArray
               (longlong *param_1,float *param_2,float param_3,float param_4,float param_5,
               char param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar8 = (int)param_1[1];
  uVar7 = 0;
  bVar6 = true;
  if (0 < iVar8) {
    uVar10 = uVar7;
    do {
      lVar5 = *param_1;
      if ((((ABS(*param_2 - *(float *)(uVar7 + lVar5)) <= 0.5) &&
           (ABS(param_2[1] - *(float *)(uVar7 + 4 + lVar5)) <= 0.5)) &&
          (ABS(param_2[2] - *(float *)(uVar7 + 8 + lVar5)) <= 0.5)) &&
         (((ABS(param_3 - *(float *)(uVar7 + 0xc + lVar5)) <= 1e-08 &&
           (ABS(param_4 - *(float *)(uVar7 + 0x10 + lVar5)) <= 1e-08)) &&
          (*(char *)(uVar7 + 0x1c + lVar5) == param_6)))) {
        *(undefined4 *)(uVar7 + 0x18 + lVar5) = param_7;
        fVar4 = param_5;
        if (ABS(param_5 - 1.0) <= 1e-08) {
          fVar4 = *(float *)(uVar7 + 0x14 + lVar5);
        }
        *(float *)(uVar7 + 0x14 + lVar5) = fVar4;
        bVar6 = false;
      }
      iVar8 = (int)param_1[1];
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar7 = uVar7 + 0x28;
    } while ((int)uVar9 < iVar8);
    if (!bVar6) {
      return;
    }
  }
  *(int *)(param_1 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar8 * 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *param_8;
    uVar3 = param_8[1];
    *puVar1 = *(undefined8 *)param_2;
    fVar4 = param_2[2];
    *(float *)((longlong)puVar1 + 0xc) = param_3;
    *(float *)(puVar1 + 2) = param_4;
    *(float *)((longlong)puVar1 + 0x14) = param_5;
    *(undefined4 *)(puVar1 + 3) = param_7;
    *(float *)(puVar1 + 1) = fVar4;
    *(char *)((longlong)puVar1 + 0x1c) = param_6;
    *(undefined4 *)(puVar1 + 4) = uVar2;
    *(undefined4 *)((longlong)puVar1 + 0x24) = uVar3;
  }
  return;
}



// FUNCTION 1423c8380 FUN_1423c8380 body=939 status=ok
// SIG undefined FUN_1423c8380(void)

void FUN_1423c8380(undefined8 param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,undefined1 param_6,float param_7,undefined4 *param_8)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 *puVar13;
  undefined4 local_88;
  undefined4 local_84;
  
  lVar11 = DAT_146b166c0;
  if (((ABS(*param_2) < 1e+20) && (ABS(param_2[1]) < 1e+20)) && (ABS(param_2[2]) < 1e+20)) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    uVar9 = 0;
    uVar10 = 4;
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar3 = GetCurrentThreadId(), uVar4 = uVar10, DVar3 == DAT_1468c21c0)) {
      uVar4 = 0;
    }
    lVar1 = DAT_146b166a8;
    if (*(float *)(uVar4 + lVar11) <= 0.0) {
      param_5 = 1.0;
    }
    else {
      param_5 = param_5 * *(float *)(uVar4 + lVar11);
    }
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar3 = GetCurrentThreadId(), uVar4 = uVar10, DVar3 == DAT_1468c21c0)) {
      uVar4 = uVar9;
    }
    lVar11 = DAT_146b16690;
    fVar12 = *(float *)(uVar4 + lVar1);
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
      uVar10 = uVar9;
    }
    if ((*(int *)(uVar10 + lVar11) == 0) || (fVar12 <= 0.0)) {
      fVar12 = *DAT_146b16d00;
      if (*DAT_146b16d00 <= *DAT_146b16d18) {
        fVar12 = *DAT_146b16d18;
      }
    }
    else {
      fVar12 = 1.0;
      if ((1.0 <= DAT_146534ed4) && (fVar12 = DAT_146534ed4, 32.0 <= DAT_146534ed4)) {
        fVar12 = 32.0;
      }
    }
    if (DAT_146af103c != '\0') {
      DAT_146af103c = '\0';
      DAT_146af1328 = 0;
      if (DAT_146af132c != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                  (&DAT_146af1320,0);
      }
      DAT_146af1348 = 0;
      if (DAT_146af134c != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&DAT_146af1340,0);
      }
    }
    if ((param_7 <= 0.0) &&
       (uVar10 = uVar9, lVar11 = DAT_146af1330, iVar7 = DAT_146af1338, 0 < DAT_146af1338)) {
      do {
        iVar8 = (int)uVar9;
        if ((ABS(*param_2 - *(float *)(uVar10 + lVar11)) <= 0.5) &&
           ((ABS(param_2[1] - *(float *)(uVar10 + 4 + lVar11)) <= 0.5 &&
            (ABS(param_2[2] - *(float *)(uVar10 + 8 + lVar11)) <= 0.5)))) {
          iVar5 = (iVar7 - iVar8) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar11 + (longlong)iVar8 * 0x28),
                       (void *)(lVar11 + (longlong)(iVar7 - iVar5) * 0x28),(longlong)iVar5 * 0x28);
            iVar7 = DAT_146af1338;
          }
          DAT_146af1338 = iVar7 + -1;
          TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(&DAT_146af1330);
          iVar8 = iVar8 + -1;
          uVar10 = uVar10 - 0x28;
          lVar11 = DAT_146af1330;
          iVar7 = DAT_146af1338;
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
        uVar10 = uVar10 + 0x28;
      } while ((int)(iVar8 + 1U) < iVar7);
    }
    if (param_7 <= 0.0) {
      puVar13 = &local_88;
      puVar6 = &DAT_146af1320;
      param_7 = 0.0;
      local_88 = *param_8;
      local_84 = param_8[1];
    }
    else {
      puVar13 = &local_res10;
      puVar6 = &DAT_146af1330;
      local_res10 = *param_8;
      local_res14 = param_8[1];
    }
    IStreamingManager::AddViewInfoToArray
              (puVar6,param_2,param_3,param_4,fVar12 * param_5,param_6,param_7,puVar13);
  }
  return;
}



// FUNCTION 1423c8730 AddViewSlaveLocation body=243 status=ok
// SIG undefined AddViewSlaveLocation(void)

void IStreamingManager::AddViewSlaveLocation
               (undefined8 param_1,undefined8 *param_2,float param_3,undefined1 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  fVar2 = *DAT_146b16d00;
  if (*DAT_146b16d00 <= *DAT_146b16d18) {
    fVar2 = *DAT_146b16d18;
  }
  if (DAT_146af103c != '\0') {
    DAT_146af103c = '\0';
    DAT_146af1328 = 0;
    if (DAT_146af132c != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146af1320,0);
    }
    DAT_146af1348 = 0;
    if (DAT_146af134c != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146af1340,0);
    }
  }
  iVar4 = DAT_146af1348;
  lVar5 = (longlong)DAT_146af1348;
  DAT_146af1348 = DAT_146af1348 + 1;
  if (DAT_146af134c < DAT_146af1348) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&DAT_146af1340,iVar4);
  }
  puVar1 = (undefined8 *)(DAT_146af1340 + lVar5 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    uVar3 = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(puVar1 + 2) = param_5;
    *(float *)((longlong)puVar1 + 0xc) = param_3 * fVar2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    *(undefined1 *)((longlong)puVar1 + 0x14) = param_4;
  }
  return;
}



// FUNCTION 1423c8830 FUN_1423c8830 body=507 status=ok
// SIG undefined FUN_1423c8830(void)

bool FUN_1423c8830(longlong param_1,float *param_2)

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
  
  fVar1 = param_2[6];
  fVar6 = fVar1 + *(float *)(param_1 + 0x1c0);
  fVar11 = *param_2 - *(float *)(param_1 + 0xa0);
  fVar13 = param_2[2] - *(float *)(param_1 + 0xa8);
  fVar12 = param_2[1] - *(float *)(param_1 + 0xa4);
  fVar8 = fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
  if (fVar8 <= fVar6 * fVar6) {
    fVar6 = *(float *)(param_1 + 0x1f8);
    fVar2 = *(float *)(param_1 + 0x30);
    fVar3 = *(float *)(param_1 + 0x40);
    fVar4 = *(float *)(param_1 + 0x50);
    fVar5 = fVar1 / fVar6;
    fVar9 = *param_2 - (*(float *)(param_1 + 0xa0) - fVar5 * fVar2);
    fVar7 = param_2[1] - (*(float *)(param_1 + 0xa4) - fVar5 * fVar3);
    fVar5 = param_2[2] - (*(float *)(param_1 + 0xa8) - fVar5 * fVar4);
    fVar10 = fVar7 * fVar3 + fVar9 * fVar2 + fVar5 * fVar4;
    if ((0.0 < fVar10) &&
       ((fVar7 * fVar7 + fVar9 * fVar9 + fVar5 * fVar5) *
        *(float *)(param_1 + 0x1f0) * *(float *)(param_1 + 0x1f0) <= fVar10 * fVar10)) {
      fVar11 = -(fVar3 * fVar12 + fVar2 * fVar11 + fVar4 * fVar13);
      if ((0.0 < fVar11) && (fVar6 * fVar6 * fVar8 <= fVar11 * fVar11)) {
        return fVar8 <= fVar1 * fVar1;
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 1423c8a30 FUN_1423c8a30 body=589 status=ok
// SIG undefined FUN_1423c8a30(void)

bool FUN_1423c8a30(longlong param_1,float *param_2)

{
  char cVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_78 [112];
  
  cVar1 = FUN_142361460();
  if (cVar1 != '\0') {
    fVar4 = *(float *)(param_1 + 0x480);
    if (0.0 <= fVar4) {
      if (89.0 <= fVar4) {
        fVar4 = 89.0;
      }
    }
    else {
      fVar4 = 0.0;
    }
    fVar5 = *(float *)(param_1 + 0x484) * 0.017453292;
    fVar4 = fVar4 * 0.017453292 + 0.001;
    if ((fVar4 <= fVar5) && (fVar4 = fVar5, 1.5543431 <= fVar5)) {
      fVar4 = 1.5543431;
    }
    uVar3 = __libm_sse2_sincosf_(fVar4);
    fVar5 = (float)((ulonglong)uVar3 >> 0x20);
    fVar4 = (float)uVar3;
    pfVar2 = (float *)FUN_142369f10(param_1,local_78);
    fVar6 = param_2[6] / fVar4;
    fVar8 = *param_2 - (*(float *)(param_1 + 0x220) - fVar6 * *pfVar2);
    fVar7 = param_2[1] - (*(float *)(param_1 + 0x224) - fVar6 * pfVar2[1]);
    fVar9 = param_2[2] - (*(float *)(param_1 + 0x228) - fVar6 * pfVar2[2]);
    pfVar2 = (float *)FUN_142369f10(param_1,local_78);
    fVar6 = fVar7 * pfVar2[1] + fVar8 * *pfVar2 + fVar9 * pfVar2[2];
    if ((0.0 < fVar6) &&
       ((fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) * fVar5 * fVar5 <= fVar6 * fVar6)) {
      fVar6 = *param_2 - *(float *)(param_1 + 0x220);
      fVar7 = param_2[1] - *(float *)(param_1 + 0x224);
      fVar5 = param_2[2] - *(float *)(param_1 + 0x228);
      fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
      pfVar2 = (float *)FUN_142369f10(param_1,local_78);
      fVar5 = -(fVar7 * pfVar2[1] + fVar6 * *pfVar2 + fVar5 * pfVar2[2]);
      if ((0.0 < fVar5) && (fVar4 * fVar4 * fVar8 <= fVar5 * fVar5)) {
        return fVar8 <= param_2[6] * param_2[6];
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 1423c8c80 AllocateHandle body=247 status=ok
// SIG undefined AllocateHandle(void)

int * FKeyHandleLookupTable::AllocateHandle(longlong *param_1,int *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_48 [2];
  undefined1 local_40 [8];
  int *local_38;
  int *local_30;
  
  DAT_146531fa0 = DAT_146531fa0 + 1;
  *param_2 = DAT_146531fa0;
  iVar2 = (int)param_1[1];
  iVar6 = (param_3 - iVar2) + 1;
  local_48[0] = param_3;
  if (0 < iVar6) {
    *(int *)(param_1 + 1) = iVar2 + iVar6;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar6) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    puVar5 = (undefined1 *)(*param_1 + (longlong)iVar2 * 8 + 4);
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar4 = local_48[0];
  iVar2 = (int)param_1[1];
  iVar6 = *param_2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar1 = (longlong)iVar4 * 8;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar1 + 8),(void *)(*param_1 + lVar1),
             (longlong)(iVar2 - iVar4) << 3);
  lVar3 = *param_1;
  local_30 = local_48;
  *(int *)(lVar1 + lVar3) = iVar6;
  *(undefined1 *)(lVar1 + 4 + lVar3) = 1;
  local_38 = param_2;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(param_1 + 2,local_40,&local_38,0);
  return param_2;
}



// FUNCTION 1423c8d80 AllocateStaticLightingMesh body=167 status=ok
// SIG undefined AllocateStaticLightingMesh(void)

undefined8 *
USplineMeshComponent::AllocateStaticLightingMesh
          (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1a0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = &DAT_145072550;
    *(undefined4 *)(puVar1 + 0x33) = 0;
    puVar1[0x32] = &PTR_FUN_1440104c8;
    FUN_142817850(puVar1,param_1,param_2,param_3,0);
    *puVar1 = &PTR_FUN_1450724f8;
    *(undefined ***)((longlong)*(int *)(puVar1[1] + 4) + 8 + (longlong)puVar1) =
         &PTR__scalar_deleting_destructor__145072548;
    puVar1[0x31] = param_1;
  }
  return puVar1;
}



// FUNCTION 1423c8e30 FUN_1423c8e30 body=737 status=ok
// SIG undefined FUN_1423c8e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423c8e30(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  longlong local_28;
  undefined1 local_20;
  byte local_1f;
  
  if (*(longlong *)(param_1 + 0x728) == *(longlong *)(param_2 + 0xa0)) {
    iVar3 = *(int *)(param_2 + 0xc0);
    lVar17 = (longlong)iVar3;
    uVar11 = FUN_14238efd0();
    lVar16 = 0;
    if ((((char)uVar11 != '\0') && (0 < iVar3)) &&
       (auVar4._4_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x74) -
                                                    *(float *)(param_1 + 0x224)) &
                                             uRam0000000146af12d4)),
       auVar4._0_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x70) -
                                                   *(float *)(param_1 + 0x220)) & _DAT_146af12d0)),
       auVar4._8_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x78) -
                                                   *(float *)(param_1 + 0x228)) &
                                            uRam0000000146af12d8)),
       auVar4._12_4_ =
            -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x7c) - *(float *)(param_1 + 0x22c))
                                  & uRam0000000146af12dc)), iVar12 = movmskps(uVar11,auVar4),
       iVar12 == 0)) {
      auVar5._4_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 100) -
                                                  *(float *)(param_1 + 0x214)) &
                                           uRam0000000146af12d4));
      auVar5._0_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x60) -
                                                  *(float *)(param_1 + 0x210)) & _DAT_146af12d0));
      auVar5._8_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x68) -
                                                  *(float *)(param_1 + 0x218)) &
                                           uRam0000000146af12d8));
      auVar5._12_4_ =
           -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x6c) - *(float *)(param_1 + 0x21c)) &
                                 uRam0000000146af12dc));
      iVar12 = movmskps(0,auVar5);
      if (((iVar12 == 0) ||
          (auVar6._4_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 100) +
                                                       *(float *)(param_1 + 0x214)) &
                                                uRam0000000146af12d4)),
          auVar6._0_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x60) +
                                                      *(float *)(param_1 + 0x210)) & _DAT_146af12d0)
                                ),
          auVar6._8_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x68) +
                                                      *(float *)(param_1 + 0x218)) &
                                               uRam0000000146af12d8)),
          auVar6._12_4_ =
               -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x6c) +
                                            *(float *)(param_1 + 0x21c)) & uRam0000000146af12dc)),
          iVar12 = movmskps(iVar12,auVar6), iVar12 == 0)) &&
         ((auVar7._4_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x84) -
                                                       *(float *)(param_1 + 0x234)) &
                                                uRam0000000146af12d4)),
          auVar7._0_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x80) -
                                                      *(float *)(param_1 + 0x230)) & _DAT_146af12d0)
                                ),
          auVar7._8_4_ = -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x88) -
                                                      *(float *)(param_1 + 0x238)) &
                                               uRam0000000146af12d8)),
          auVar7._12_4_ =
               -(uint)(0.01 < (float)((uint)(*(float *)(param_2 + 0x8c) -
                                            *(float *)(param_1 + 0x23c)) & uRam0000000146af12dc)),
          iVar12 = movmskps(0,auVar7), iVar12 == 0 &&
          (FUN_142826ef0(param_1,iVar3,iVar3), lVar14 = lVar16, lVar18 = lVar16, 0 < iVar3)))) {
        do {
          puVar1 = (undefined4 *)(lVar18 + *(longlong *)(param_2 + 0xb8));
          uVar11 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          puVar2 = (undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x758));
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          lVar17 = lVar17 + -1;
          lVar14 = lVar14 + 0xc0;
          lVar18 = lVar18 + 0x10;
        } while (lVar17 != 0);
      }
    }
    if ((*(byte *)(param_1 + 0x744) & 0x10) == 0) {
      local_38 = 0xffffffff;
      local_34 = 0;
      FWeakObjectPtr::operator=(local_30,0);
      lVar17 = lVar16;
      if (((*(byte *)(param_1 + 0xb8) & 1) != 0) &&
         ((*(longlong *)(param_1 + 0x120) != 0 || (lVar14 = FUN_1423407b0(param_1), lVar14 != 0))))
      {
        lVar17 = *(longlong *)(param_1 + 0x120);
        if (lVar17 == 0) {
          lVar17 = FUN_1423407b0(param_1);
        }
        local_1f = local_1f & 0xfd | 1;
        local_20 = 1;
        local_28 = lVar17;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_28);
        FUN_14233aad0(param_1);
        *(undefined8 *)(param_1 + 0x120) = 0;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_28);
      }
      FWeakObjectPtr::operator=(local_30,lVar17);
      cVar10 = FWeakObjectPtr::IsValid(local_30);
      lVar17 = lVar16;
      if (cVar10 != '\0') {
        lVar17 = param_1;
      }
      FWeakObjectPtr::operator=(&local_38,lVar17);
      FUN_1423c9200(param_2,param_1);
      cVar10 = FWeakObjectPtr::IsValid(&local_38);
      if (cVar10 != '\0') {
        lVar17 = FWeakObjectPtr::Get(local_30);
        lVar14 = FWeakObjectPtr::Get(&local_38);
        iVar3 = *(int *)(lVar14 + 0xc);
        if (iVar3 < (int)DAT_1469e91c4) {
          uVar15 = iVar3 >> 0x1f & 0xffff;
          uVar13 = iVar3 + uVar15;
          lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar13 >> 0x10) * 8) +
                   (longlong)(int)((uVar13 & 0xffff) - uVar15) * 0x18;
        }
        if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) == 0) {
          if ((*(byte *)(lVar14 + 0xb8) & 1) != 0) {
            FUN_14233aad0(lVar14);
          }
          *(longlong *)(lVar14 + 0x120) = lVar17;
          local_1f = local_1f & 0xfd | 1;
          local_20 = 1;
          local_28 = lVar17;
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_28);
          FUN_14233a6f0(lVar14);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_28);
        }
      }
    }
    TArray<FVector,FDefaultAllocator>::operator=(param_1 + 0x778,param_2 + 200);
  }
  return;
}



// FUNCTION 1423c9120 FUN_1423c9120 body=153 status=ok
// SIG undefined FUN_1423c9120(void)

void FUN_1423c9120(longlong param_1,longlong param_2)

{
  FUN_142381ae0();
  if ((param_1 != 0) && ((*(byte *)(param_2 + 0x814) & 1) != 0)) {
    *(undefined8 *)(param_2 + 0x7b0) = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(param_2 + 0x7b8) = *(undefined4 *)(param_1 + 0x68);
    *(undefined8 *)(param_2 + 0x7dc) = *(undefined8 *)(param_1 + 0x6c);
    *(undefined4 *)(param_2 + 0x7e4) = *(undefined4 *)(param_1 + 0x74);
    *(undefined8 *)(param_2 + 0x7bc) = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(param_2 + 0x7c4) = *(undefined4 *)(param_1 + 0x80);
    *(undefined8 *)(param_2 + 0x7e8) = *(undefined8 *)(param_1 + 0x84);
    *(undefined4 *)(param_2 + 0x7f0) = *(undefined4 *)(param_1 + 0x8c);
    FUN_1423e22d0(param_2,0);
  }
  return;
}



// FUNCTION 1423c91c0 ApplyToComponent body=61 status=ok
// SIG undefined ApplyToComponent(void)

void FStaticMeshComponentInstanceData::ApplyToComponent
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_1423818d0();
  if (param_3 == 1) {
    FUN_1423c8e30(param_2,param_1);
  }
  return;
}



// FUNCTION 1423c9200 FUN_1423c9200 body=542 status=ok
// SIG undefined FUN_1423c9200(void)

undefined8 FUN_1423c9200(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  int local_res10;
  longlong local_res18;
  
  uVar11 = 0;
  if (param_2 == 0) {
    return 0;
  }
  FUN_142826ef0();
  iVar9 = 0;
  if (0 < *(int *)(param_2 + 0x760)) {
    lVar3 = 0;
    lVar10 = 0;
    lVar4 = 0;
    do {
      puVar5 = (undefined8 *)(lVar4 + *(longlong *)(param_2 + 0x758));
      if ((-1 < lVar3) && (iVar9 < *(int *)(param_1 + 0xc0))) {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + lVar10);
        uVar2 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
      }
      iVar9 = iVar9 + 1;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0xc0;
      lVar10 = lVar10 + 0x10;
    } while (iVar9 < *(int *)(param_2 + 0x760));
  }
  local_res10 = 0;
  if (*(int *)(param_1 + 0xb0) < 1) {
    return 0;
  }
  local_res18 = 0;
  do {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xa8) + local_res18);
    iVar9 = *(int *)(puVar5 + 6);
    if ((-1 < iVar9) && (iVar9 < *(int *)(param_2 + 0x760))) {
      lVar3 = (longlong)iVar9 * 0xc0 + *(longlong *)(param_2 + 0x758);
      puVar1 = (undefined8 *)(lVar3 + 0x20);
      if (puVar1 != puVar5) {
        iVar9 = *(int *)(puVar5 + 1);
        _Src = (void *)*puVar5;
        *(int *)(lVar3 + 0x28) = iVar9;
        if ((iVar9 == 0) && (*(int *)(lVar3 + 0x2c) == 0)) {
          *(undefined4 *)(lVar3 + 0x2c) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar1,iVar9);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar9 * 0x30);
        }
      }
      uVar7 = 0;
      plVar8 = (longlong *)(lVar3 + 0x30);
      piVar6 = (int *)(puVar5 + 3);
      do {
        if ((*plVar8 == 0) && (*piVar6 != 0)) {
          lVar4 = operator_new(0x58);
          lVar3 = 0;
          if (lVar4 != 0) {
            lVar3 = FUN_14271d780(lVar4);
          }
          *plVar8 = lVar3;
          FColorVertexBuffer::InitFromColorArray(lVar3,*(undefined8 *)(piVar6 + -2),*piVar6,4);
          FUN_141edf270(*plVar8);
          uVar11 = 1;
        }
        uVar7 = uVar7 + 1;
        plVar8 = plVar8 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 < 2);
    }
    local_res10 = local_res10 + 1;
    local_res18 = local_res18 + 0x38;
  } while (local_res10 < *(int *)(param_1 + 0xb0));
  return uVar11;
}



// FUNCTION 1423c9440 FUN_1423c9440 body=259 status=ok
// SIG undefined FUN_1423c9440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423c9440(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((*(byte *)((longlong)param_1 + 0x4cc) & 1) != 0) &&
     (plVar1 = (longlong *)param_1[0x2d], plVar1 != (longlong *)0x0)) {
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x700))(param_1);
    }
    else if ((*(longlong *)(param_2 + 0x168) != 0) &&
            (plVar1[0x32] != *(longlong *)(param_2 + 0x168))) {
      (**(code **)(*plVar1 + 0x418))(plVar1,&DAT_14653218c);
      local_28 = DAT_1468b5da0;
      local_20 = DAT_1468b5da8;
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
      FUN_1423982b0(param_1[0x2d],&local_18,&local_28,0,0,0);
      FUN_142382f60(param_1[0x2d],*(undefined8 *)(param_2 + 0x168),&DAT_146af29ec,0);
      return;
    }
  }
  return;
}



// FUNCTION 1423c9550 AutoSetTangents body=305 status=ok
// SIG undefined AutoSetTangents(void)

void FRichCurve::AutoSetTangents(longlong param_1,float param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = *(int *)(param_1 + 0x68);
  iVar7 = 0;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x60);
      lVar6 = lVar8 * 0x1c;
      fVar11 = *(float *)(lVar6 + 0xc + lVar3);
      fVar10 = *(float *)(lVar6 + 0x14 + lVar3);
      if (lVar8 == 0) {
        if ((iVar7 < iVar4 + -1) && (*(char *)(lVar3 + 1) == '\0')) {
          fVar10 = 0.0;
        }
      }
      else {
        cVar1 = *(char *)(lVar6 + lVar3);
        if (iVar7 < iVar4 + -1) {
          lVar9 = lVar8 * 0x1c;
          if ((cVar1 == '\x02') && (*(char *)(lVar6 + 1 + lVar3) == '\0')) {
            fVar10 = *(float *)(lVar6 + 8 + lVar3);
            lVar5 = (lVar8 + 1) * 0x1c;
            fVar11 = *(float *)(lVar5 + 4 + lVar3) - *(float *)(lVar9 + -0x18 + lVar3);
            if (fVar11 <= 0.0001) {
              fVar11 = 0.0001;
            }
            fVar11 = (((fVar10 - *(float *)(lVar9 + -0x14 + lVar3)) +
                      (*(float *)(lVar5 + 8 + lVar3) - fVar10)) * (1.0 - param_2)) / fVar11;
            fVar10 = fVar11;
          }
          else {
            cVar2 = *(char *)(lVar9 + -0x1c + lVar3);
            if ((cVar2 == '\x01') || (cVar1 == '\x01')) {
              if (cVar2 != '\x02') {
                fVar11 = 0.0;
              }
              fVar10 = 0.0;
            }
          }
        }
        else if ((cVar1 == '\x02') && (*(char *)(lVar6 + 1 + lVar3) == '\0')) {
          fVar11 = 0.0;
        }
      }
      *(float *)(lVar6 + 0xc + lVar3) = fVar11;
      iVar7 = iVar7 + 1;
      *(float *)(lVar6 + 0x14 + lVar3) = fVar10;
      lVar8 = lVar8 + 1;
      iVar4 = *(int *)(param_1 + 0x68);
    } while (iVar7 < iVar4);
  }
  return;
}



// FUNCTION 1423c9690 FUN_1423c9690 body=198 status=ok
// SIG undefined FUN_1423c9690(void)

void FUN_1423c9690(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  FUN_142384dc0();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x760)) {
    lVar5 = 0x30;
    do {
      uVar4 = 0;
      lVar2 = lVar5;
      do {
        lVar1 = *(longlong *)(param_1 + 0x758);
        if (*(longlong *)(lVar2 + lVar1) != 0) {
          FUN_141edf360();
          lVar1 = *(longlong *)(param_1 + 0x758);
        }
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 8;
      } while (uVar4 < 2);
      FUN_141edf360((longlong)iVar3 * 0xc0 + lVar1 + 0x50);
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0xc0;
    } while (iVar3 < *(int *)(param_1 + 0x760));
  }
  FUN_141edede0(param_1 + 0x648,0);
  return;
}



// FUNCTION 1423c9760 FUN_1423c9760 body=111 status=ok
// SIG undefined FUN_1423c9760(void)

void FUN_1423c9760(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_1423850d0();
  if ((*(int *)(param_1 + 800) != 0) &&
     (*(undefined8 **)(DAT_146b17150 + 0xab8) != (undefined8 *)0x0)) {
    cVar1 = (**(code **)**(undefined8 **)(DAT_146b17150 + 0xab8))();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined4 *)(param_1 + 800));
        *(undefined4 *)(param_1 + 800) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1423c97d0 FUN_1423c97d0 body=397 status=ok
// SIG undefined FUN_1423c97d0(void)

void FUN_1423c97d0(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1 + 8,param_2,L"SplineStartPos",0);
  FShaderParameter::Bind(param_1 + 0xe,param_2,L"SplineStartTangent",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"SplineStartRoll",0);
  FShaderParameter::Bind(param_1 + 0x1a,param_2,L"SplineStartScale",0);
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"SplineStartOffset",0);
  FShaderParameter::Bind(param_1 + 0x26,param_2,L"SplineEndPos",0);
  FShaderParameter::Bind(param_1 + 0x2c,param_2,L"SplineEndTangent",0);
  FShaderParameter::Bind(param_1 + 0x32,param_2,L"SplineEndRoll",0);
  FShaderParameter::Bind(param_1 + 0x38,param_2,L"SplineEndScale",0);
  FShaderParameter::Bind(param_1 + 0x3e,param_2,L"SplineEndOffset",0);
  FShaderParameter::Bind(param_1 + 0x44,param_2,L"SplineUpDir",0);
  FShaderParameter::Bind(param_1 + 0x4a,param_2,L"SmoothInterpRollScale",0);
  FShaderParameter::Bind(param_1 + 0x50,param_2,L"SplineMeshMinZ",0);
  FShaderParameter::Bind(param_1 + 0x56,param_2,L"SplineMeshScaleZ",0);
  FShaderParameter::Bind(param_1 + 0x5c,param_2,L"SplineMeshDir",0);
  FShaderParameter::Bind(param_1 + 0x62,param_2,L"SplineMeshX",0);
  FShaderParameter::Bind(param_1 + 0x68,param_2,L"SplineMeshY",0);
  return;
}



// FUNCTION 1423c9960 BlockTillAllRequestsFinished body=132 status=ok
// SIG undefined BlockTillAllRequestsFinished(void)

int FStreamingManagerCollection::BlockTillAllRequestsFinished
              (longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x10));
      iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
  return iVar3;
}



// FUNCTION 1423c99f0 FUN_1423c99f0 body=2824 status=ok
// SIG undefined FUN_1423c99f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1423c99f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  wint_t wVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  wint_t *pwVar18;
  wint_t *pwVar19;
  longlong lVar20;
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
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  float local_228;
  float local_224;
  int local_220;
  int local_21c;
  uint local_218;
  int local_214;
  float local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  int local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  wint_t *local_1c8;
  wint_t *pwStack_1c0;
  float local_1b0;
  float local_1a4;
  float local_198;
  float local_18c;
  longlong *local_188;
  int *local_180;
  longlong *local_178;
  int *local_170;
  longlong local_168;
  uint *local_160;
  wint_t *local_158;
  wint_t *pwStack_150;
  ulonglong local_148;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined1 local_ec [4];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  *(undefined4 *)(param_1 + 0xd78) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xd7c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xd70,0);
  }
  if ((*(longlong *)(param_1 + 0xd90) == 0) ||
     (cVar9 = FText::IsEmpty(param_1 + 0xda8), cVar9 != '\0')) {
    bVar10 = false;
  }
  else {
    fVar24 = 0.0;
    local_180 = &local_220;
    local_170 = &local_21c;
    local_160 = &local_218;
    local_218 = 0xffffffff;
    local_220 = 0;
    local_210 = -1.0;
    local_224 = 0.0;
    local_21c = 0;
    local_1e4 = ((float)*(int *)(*(longlong *)(param_1 + 0xd90) + 0x6c) +
                *(float *)(param_1 + 0xdc8)) * *(float *)(param_1 + 0xdc0);
    local_188 = param_2;
    local_178 = param_3;
    local_168 = param_1;
    puVar15 = (undefined8 *)FText::ToString(param_1 + 0xda8);
    if (*(int *)(puVar15 + 1) == 0) {
      pwVar18 = &DAT_143f3eda8;
    }
    else {
      pwVar18 = (wint_t *)*puVar15;
    }
    wVar2 = *pwVar18;
    local_1c8 = pwVar18;
    pwStack_1c0 = pwVar18;
    fVar21 = -1.0;
    while (wVar2 != 0) {
      fVar27 = 0.0;
      local_238 = *(undefined4 *)(param_1 + 0xdcc);
      local_248 = *(undefined4 *)(param_1 + 0xdc4);
      local_240 = *(undefined4 *)(param_1 + 0xdc8);
      local_158 = local_1c8;
      pwStack_150 = pwStack_1c0;
      ComputeTextSize(&local_1d8,&local_158,*(undefined8 *)(param_1 + 0xd90),
                      *(undefined4 *)(param_1 + 0xdc0));
      local_228 = 0.0;
      if (*(int *)(param_1 + 0xdd0) == 1) {
        local_228 = local_1d8 * -0.5;
      }
      else if (*(int *)(param_1 + 0xdd0) == 2) {
        local_228 = -local_1d8;
      }
      local_1e0 = local_1d4;
      fVar23 = local_228;
      if (fVar21 < 0.0) {
        local_210 = local_1d4;
      }
      while (pwVar19 = pwVar18, wVar2 = *pwVar19, pwVar18 = pwVar19, wVar2 != 0) {
        if ((((wVar2 == 0x3c) && (pwVar19[1] == 0x62)) && (pwVar19[2] == 0x72)) &&
           (pwVar19[3] == 0x3e)) {
          pwVar18 = pwVar19 + 4;
          pwStack_1c0 = pwVar18;
          break;
        }
        pwVar18 = pwVar19 + 1;
        pwStack_1c0 = pwVar18;
        if (wVar2 == 10) break;
        uVar11 = UFont::RemapChar(*(undefined8 *)(param_1 + 0xd90));
        lVar20 = *(longlong *)(param_1 + 0xd90);
        if ((int)(uint)uVar11 < *(int *)(lVar20 + 0x40)) {
          lVar17 = *(longlong *)(lVar20 + 0x38);
          uVar16 = (ulonglong)uVar11;
          bVar1 = *(byte *)(lVar17 + 0x10 + uVar16 * 0x18);
          uVar12 = (uint)bVar1;
          if ((int)(uint)bVar1 < *(int *)(lVar20 + 0x50)) {
            uVar13 = uVar12;
            if (local_218 != bVar1) {
              if (local_218 != 0xffffffff) {
                if ((local_220 < (int)param_2[1]) && (local_21c < (int)param_3[1])) {
                  iVar14 = *(int *)(param_1 + 0xd78);
                  lVar20 = (longlong)iVar14;
                  *(int *)(param_1 + 0xd78) = iVar14 + 1;
                  if (*(int *)(param_1 + 0xd7c) < iVar14 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(param_1 + 0xd70,iVar14);
                  }
                  lVar5 = *(longlong *)(param_1 + 0xd70);
                  *(int *)(lVar5 + lVar20 * 0x18) = local_21c;
                  *(int *)(lVar5 + 4 + lVar20 * 0x18) = (int)param_3[1] - local_21c;
                  *(int *)(lVar5 + 8 + lVar20 * 0x18) = local_220;
                  *(int *)(lVar5 + 0xc + lVar20 * 0x18) = (int)param_2[1] - local_220;
                  *(undefined8 *)(lVar5 + 0x10 + lVar20 * 0x18) = 0;
                  plVar6 = *(longlong **)(param_1 + 0xd98);
                  if (((plVar6 == (longlong *)0x0) || ((int)local_218 < 0)) ||
                     (((int)plVar6[1] <= (int)local_218 ||
                      (lVar7 = *(longlong *)(*plVar6 + (longlong)(int)local_218 * 8),
                      *(longlong *)(lVar5 + 0x10 + lVar20 * 0x18) = lVar7, lVar7 == 0)))) {
                    *(undefined8 *)(lVar5 + 0x10 + lVar20 * 0x18) = *(undefined8 *)(param_1 + 0xd88)
                    ;
                  }
                }
                local_220 = (int)param_2[1];
                lVar20 = *(longlong *)(param_1 + 0xd90);
                local_21c = (int)param_3[1];
                uVar12 = (uint)*(byte *)(lVar17 + 0x10 + uVar16 * 0x18);
              }
              uVar13 = (uint)*(byte *)(lVar17 + 0x10 + uVar16 * 0x18);
              local_218 = uVar12;
            }
            lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x48) + (ulonglong)uVar13 * 8);
            if (lVar20 != 0) {
              uVar8 = *(undefined8 *)(lVar20 + 200);
              fVar23 = fVar23 + fVar27;
              local_208 = 0;
              local_204 = 0xbf800000;
              local_200 = 0;
              local_1f8 = 0x3f800000;
              local_1f0 = 0;
              fVar22 = 1.0 / (float)(int)uVar8;
              fVar28 = (float)*(int *)(lVar17 + 0xc + uVar16 * 0x18);
              fVar21 = 1.0 / (float)(int)((ulonglong)uVar8 >> 0x20);
              fVar24 = (float)*(int *)(lVar17 + 0x14 + uVar16 * 0x18) * *(float *)(param_1 + 0xdc4)
                       + fVar24;
              fVar25 = (float)*(int *)(lVar17 + 8 + uVar16 * 0x18);
              fVar32 = fVar25 * *(float *)(param_1 + 0xdc0);
              fVar26 = (float)*(int *)(lVar17 + 4 + uVar16 * 0x18) * fVar21;
              fVar30 = fVar32 + fVar23;
              fVar31 = -fVar24;
              local_148 = (ulonglong)(uint)fVar23 << 0x20 ^ 0x8000000000000000;
              fVar29 = -(fVar28 * *(float *)(param_1 + 0xdc4) + fVar24);
              fVar24 = (float)*(int *)(lVar17 + uVar16 * 0x18) * fVar22;
              local_1b0 = fVar31;
              fStack_140 = fVar31;
              FPackedNormal::FPackedNormal(&uStack_fc,&local_208);
              FPackedNormal::FPackedNormal(&local_f8,&local_1f8);
              FUN_1408de720(&uStack_f4,local_ec,param_1 + 0xd80);
              local_f8 = CONCAT13(0x7f,(undefined3)local_f8);
              local_214 = (int)param_2[1];
              lVar20 = (longlong)local_214;
              *(int *)(param_2 + 1) = local_214 + 1;
              fStack_13c = fVar24;
              local_138 = fVar26;
              fStack_134 = fVar24;
              fStack_130 = fVar26;
              fStack_12c = fVar24;
              local_128 = fVar26;
              fStack_124 = fVar24;
              fStack_120 = fVar26;
              fStack_11c = fVar24;
              local_118 = fVar26;
              fStack_114 = fVar24;
              fStack_110 = fVar26;
              fStack_10c = fVar24;
              local_108 = fVar26;
              fStack_104 = fVar24;
              fStack_100 = fVar26;
              if (*(int *)((longlong)param_2 + 0xc) < local_214 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(param_2,local_214);
              }
              lVar17 = *param_2;
              fVar22 = fVar25 * fVar22 + fVar24;
              lVar20 = lVar20 * 0x5c;
              *(ulonglong *)(lVar20 + lVar17) = local_148;
              ((ulonglong *)(lVar20 + lVar17))[1] = CONCAT44(fStack_13c,fStack_140);
              puVar15 = (undefined8 *)(lVar20 + 0x10 + lVar17);
              *puVar15 = CONCAT44(fStack_134,local_138);
              puVar15[1] = CONCAT44(fStack_12c,fStack_130);
              puVar15 = (undefined8 *)(lVar20 + 0x20 + lVar17);
              *puVar15 = CONCAT44(fStack_124,local_128);
              puVar15[1] = CONCAT44(fStack_11c,fStack_120);
              puVar15 = (undefined8 *)(lVar20 + 0x30 + lVar17);
              *puVar15 = CONCAT44(fStack_114,local_118);
              puVar15[1] = CONCAT44(fStack_10c,fStack_110);
              puVar15 = (undefined8 *)(lVar20 + 0x40 + lVar17);
              *puVar15 = CONCAT44(fStack_104,local_108);
              puVar15[1] = CONCAT44(uStack_fc,fStack_100);
              *(ulonglong *)(lVar20 + 0x50 + lVar17) = CONCAT44(uStack_f4,local_f8);
              *(undefined4 *)(lVar20 + 0x58 + lVar17) = local_f0;
              local_148 = (ulonglong)(uint)fVar30 << 0x20 ^ 0x8000000000000000;
              local_1a4 = fVar31;
              fStack_140 = fVar31;
              FPackedNormal::FPackedNormal(&uStack_fc,&local_208);
              FPackedNormal::FPackedNormal(&local_f8,&local_1f8);
              FUN_1408de720(&uStack_f4,local_ec,param_1 + 0xd80);
              local_1e8 = (int)param_2[1];
              lVar20 = (longlong)local_1e8;
              local_f8 = CONCAT13(0x7f,(undefined3)local_f8);
              *(int *)(param_2 + 1) = local_1e8 + 1;
              fStack_13c = fVar22;
              local_138 = fVar26;
              fStack_134 = fVar22;
              fStack_130 = fVar26;
              fStack_12c = fVar22;
              local_128 = fVar26;
              fStack_124 = fVar22;
              fStack_120 = fVar26;
              fStack_11c = fVar22;
              local_118 = fVar26;
              fStack_114 = fVar22;
              fStack_110 = fVar26;
              fStack_10c = fVar22;
              local_108 = fVar26;
              fStack_104 = fVar22;
              fStack_100 = fVar26;
              if (*(int *)((longlong)param_2 + 0xc) < local_1e8 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(param_2,local_1e8);
              }
              lVar17 = *param_2;
              fVar26 = fVar28 * fVar21 + fVar26;
              lVar20 = lVar20 * 0x5c;
              *(ulonglong *)(lVar20 + lVar17) = local_148;
              ((ulonglong *)(lVar20 + lVar17))[1] = CONCAT44(fStack_13c,fStack_140);
              puVar15 = (undefined8 *)(lVar20 + 0x10 + lVar17);
              *puVar15 = CONCAT44(fStack_134,local_138);
              puVar15[1] = CONCAT44(fStack_12c,fStack_130);
              puVar15 = (undefined8 *)(lVar20 + 0x20 + lVar17);
              *puVar15 = CONCAT44(fStack_124,local_128);
              puVar15[1] = CONCAT44(fStack_11c,fStack_120);
              puVar15 = (undefined8 *)(lVar20 + 0x30 + lVar17);
              *puVar15 = CONCAT44(fStack_114,local_118);
              puVar15[1] = CONCAT44(fStack_10c,fStack_110);
              puVar15 = (undefined8 *)(lVar20 + 0x40 + lVar17);
              *puVar15 = CONCAT44(fStack_104,local_108);
              puVar15[1] = CONCAT44(uStack_fc,fStack_100);
              *(ulonglong *)(lVar20 + 0x50 + lVar17) = CONCAT44(uStack_f4,local_f8);
              *(undefined4 *)(lVar20 + 0x58 + lVar17) = local_f0;
              local_148 = (ulonglong)(uint)fVar23 << 0x20 ^ 0x8000000000000000;
              local_198 = fVar29;
              fStack_140 = fVar29;
              FPackedNormal::FPackedNormal(&uStack_fc,&local_208);
              FPackedNormal::FPackedNormal(&local_f8,&local_1f8);
              FUN_1408de720(&uStack_f4,local_ec,param_1 + 0xd80);
              iVar14 = (int)param_2[1];
              local_f8 = CONCAT13(0x7f,(undefined3)local_f8);
              *(int *)(param_2 + 1) = iVar14 + 1;
              fStack_13c = fVar24;
              local_138 = fVar26;
              fStack_134 = fVar24;
              fStack_130 = fVar26;
              fStack_12c = fVar24;
              local_128 = fVar26;
              fStack_124 = fVar24;
              fStack_120 = fVar26;
              fStack_11c = fVar24;
              local_118 = fVar26;
              fStack_114 = fVar24;
              fStack_110 = fVar26;
              fStack_10c = fVar24;
              local_108 = fVar26;
              fStack_104 = fVar24;
              fStack_100 = fVar26;
              if (*(int *)((longlong)param_2 + 0xc) < iVar14 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(param_2,iVar14);
              }
              lVar20 = *param_2;
              lVar17 = (longlong)iVar14 * 0x5c;
              *(ulonglong *)(lVar17 + lVar20) = local_148;
              ((ulonglong *)(lVar17 + lVar20))[1] = CONCAT44(fStack_13c,fStack_140);
              puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar20);
              *puVar15 = CONCAT44(fStack_134,local_138);
              puVar15[1] = CONCAT44(fStack_12c,fStack_130);
              puVar15 = (undefined8 *)(lVar17 + 0x20 + lVar20);
              *puVar15 = CONCAT44(fStack_124,local_128);
              puVar15[1] = CONCAT44(fStack_11c,fStack_120);
              puVar15 = (undefined8 *)(lVar17 + 0x30 + lVar20);
              *puVar15 = CONCAT44(fStack_114,local_118);
              puVar15[1] = CONCAT44(fStack_10c,fStack_110);
              puVar15 = (undefined8 *)(lVar17 + 0x40 + lVar20);
              *puVar15 = CONCAT44(fStack_104,local_108);
              puVar15[1] = CONCAT44(uStack_fc,fStack_100);
              *(ulonglong *)(lVar17 + 0x50 + lVar20) = CONCAT44(uStack_f4,local_f8);
              *(undefined4 *)(lVar17 + 0x58 + lVar20) = local_f0;
              local_148 = (ulonglong)(uint)fVar30 << 0x20 ^ 0x8000000000000000;
              local_18c = fVar29;
              fStack_140 = fVar29;
              FPackedNormal::FPackedNormal(&uStack_fc,&local_208);
              FPackedNormal::FPackedNormal(&local_f8,&local_1f8);
              FUN_1408de720(&uStack_f4,local_ec,param_1 + 0xd80);
              iVar3 = (int)param_2[1];
              local_f8 = CONCAT13(0x7f,(undefined3)local_f8);
              *(int *)(param_2 + 1) = iVar3 + 1;
              fStack_13c = fVar22;
              local_138 = fVar26;
              fStack_134 = fVar22;
              fStack_130 = fVar26;
              fStack_12c = fVar22;
              local_128 = fVar26;
              fStack_124 = fVar22;
              fStack_120 = fVar26;
              fStack_11c = fVar22;
              local_118 = fVar26;
              fStack_114 = fVar22;
              fStack_110 = fVar26;
              fStack_10c = fVar22;
              local_108 = fVar26;
              fStack_104 = fVar22;
              fStack_100 = fVar26;
              if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(param_2,iVar3);
              }
              lVar20 = *param_2;
              lVar17 = (longlong)iVar3 * 0x5c;
              *(ulonglong *)(lVar17 + lVar20) = local_148;
              ((ulonglong *)(lVar17 + lVar20))[1] = CONCAT44(fStack_13c,fStack_140);
              puVar15 = (undefined8 *)(lVar17 + 0x10 + lVar20);
              *puVar15 = CONCAT44(fStack_134,local_138);
              puVar15[1] = CONCAT44(fStack_12c,fStack_130);
              puVar15 = (undefined8 *)(lVar17 + 0x20 + lVar20);
              *puVar15 = CONCAT44(fStack_124,local_128);
              puVar15[1] = CONCAT44(fStack_11c,fStack_120);
              puVar15 = (undefined8 *)(lVar17 + 0x30 + lVar20);
              *puVar15 = CONCAT44(fStack_114,local_118);
              puVar15[1] = CONCAT44(fStack_10c,fStack_110);
              puVar15 = (undefined8 *)(lVar17 + 0x40 + lVar20);
              *puVar15 = CONCAT44(fStack_104,local_108);
              puVar15[1] = CONCAT44(uStack_fc,fStack_100);
              *(ulonglong *)(lVar17 + 0x50 + lVar20) = CONCAT44(uStack_f4,local_f8);
              *(undefined4 *)(lVar17 + 0x58 + lVar20) = local_f0;
              iVar4 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar4 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
              }
              *(short *)(*param_3 + (longlong)iVar4 * 2) = (short)local_214;
              iVar4 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar4 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
              }
              *(short *)(*param_3 + (longlong)iVar4 * 2) = (short)iVar3;
              iVar4 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar4 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
              }
              *(short *)(*param_3 + (longlong)iVar4 * 2) = (short)local_1e8;
              iVar4 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar4 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
              }
              *(short *)(*param_3 + (longlong)iVar4 * 2) = (short)local_214;
              iVar4 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar4 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
              }
              *(short *)(*param_3 + (longlong)iVar4 * 2) = (short)iVar14;
              iVar14 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar14 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar14 + 1) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar14);
              }
              fVar24 = local_224;
              fVar23 = local_228;
              fVar27 = fVar27 + fVar32;
              *(short *)(*param_3 + (longlong)iVar14 * 2) = (short)iVar3;
              wVar2 = *pwVar18;
              if (((wVar2 != 0) &&
                  ((((wVar2 != 0x3c || (pwVar19[2] != 0x62)) || (pwVar19[3] != 0x72)) ||
                   (pwVar19[4] != 0x3e)))) &&
                 ((wVar2 != 10 && (iVar14 = iswspace(wVar2), iVar14 == 0)))) {
                fVar27 = fVar27 + local_1e4;
              }
            }
          }
        }
      }
      fVar21 = local_1e0;
      if (local_1e0 <= 0.0) {
        fVar21 = (float)FUN_14244fa00(*(undefined8 *)(param_1 + 0xd90));
      }
      fVar24 = fVar24 + fVar21;
      local_224 = fVar24;
      fVar21 = local_210;
      wVar2 = *pwVar18;
    }
    FUN_1423c6a40(&local_188);
    bVar10 = 0 < (int)param_2[1];
  }
  return bVar10;
}



// FUNCTION 1423ca500 FUN_1423ca500 body=561 status=ok
// SIG undefined FUN_1423ca500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ca500(void)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar10;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_res20;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined4 *local_30;
  ulonglong uVar9;
  
  if (DAT_146af1a40 == '\0') {
    uVar7 = 0;
    local_48 = 0;
    local_40 = 0;
    uVar2 = FConfigCacheIni::Find(DAT_1468b6148,&DAT_1468e2360,0);
    FUN_142822ad0(&DAT_146531f30,uVar2);
    FUN_14281dc00(&DAT_146531f30,&local_48);
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Reset(&DAT_146531ee0);
    if (0 < (int)local_40) {
      local_38 = &local_res20;
      local_30 = local_res8;
      uVar6 = uVar7;
      uVar9 = uVar7;
      do {
        local_res20 = *(longlong *)(uVar6 + local_48);
        if (DAT_146531f38 != _DAT_146531f64) {
          piVar3 = DAT_146531f70;
          if (DAT_146531f70 == (int *)0x0) {
            piVar3 = (int *)&DAT_146531f68;
          }
          iVar1 = piVar3[(int)((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20 &
                              DAT_146531f78 - 1U)];
          while (iVar1 != -1) {
            lVar10 = (longlong)iVar1 * 0xbd0;
            if (*(longlong *)(lVar10 + DAT_146531f30) == local_res20) {
              uVar5 = lVar10 + DAT_146531f30;
              if (iVar1 != -1) goto LAB_1423ca63b;
              break;
            }
            iVar1 = *(int *)(lVar10 + 0xbc8 + DAT_146531f30);
          }
        }
        uVar5 = uVar7;
LAB_1423ca63b:
        uVar4 = uVar5 + 8;
        if (uVar5 == 0) {
          uVar4 = uVar7;
        }
        if (uVar4 == 0) {
          local_res18 = 0;
          if (DAT_146531f38 != _DAT_146531f64) {
            piVar3 = DAT_146531f70;
            if (DAT_146531f70 == (int *)0x0) {
              piVar3 = (int *)&DAT_146531f68;
            }
            iVar1 = *piVar3;
            while (iVar1 != -1) {
              lVar10 = (longlong)iVar1 * 0xbd0;
              if (*(longlong *)(lVar10 + DAT_146531f30) == 0) {
                uVar5 = lVar10 + DAT_146531f30;
                if (iVar1 != -1) goto LAB_1423ca6bb;
                break;
              }
              iVar1 = *(int *)(lVar10 + 0xbc8 + DAT_146531f30);
            }
          }
          uVar5 = uVar7;
LAB_1423ca6bb:
          uVar4 = uVar5 + 8;
          if (uVar5 == 0) {
            uVar4 = uVar7;
          }
        }
        local_res8[0] = *(undefined4 *)(uVar4 + 0xbb4);
        TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                  (&DAT_146531ee0,local_res10,&local_38,0);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar6 = uVar6 + 8;
      } while ((int)uVar8 < (int)local_40);
    }
    DAT_146af1a40 = '\x01';
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423ca740 FUN_1423ca740 body=838 status=ok
// SIG undefined FUN_1423ca740(void)

void FUN_1423ca740(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float fVar6;
  char cVar7;
  undefined8 *puVar8;
  short *psVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res8;
  float local_resc;
  short *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  short *local_b8;
  short *psStack_b0;
  
  cVar7 = FText::IsEmpty(param_1 + 0x6f0);
  if (cVar7 != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x710) == 0) {
    return;
  }
  fVar12 = -1.0;
  fVar13 = 1.1754944e-38;
  fVar14 = 3.4028235e+38;
  fVar15 = 0.0;
  puVar8 = (undefined8 *)FText::ToString(param_1 + 0x6f0);
  if (*(int *)(puVar8 + 1) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = (short *)*puVar8;
  }
  fVar1 = *(float *)(param_1 + 0x728);
  fVar2 = *(float *)(param_1 + 0x72c);
  fVar3 = *(float *)(param_1 + 0x720);
  fVar4 = *(float *)(param_1 + 0x724);
  sVar5 = *psVar9;
  local_d8 = psVar9;
  while (sVar5 != 0) {
    uStack_d0 = SUB84(psVar9,0);
    uStack_cc = (undefined4)((ulonglong)psVar9 >> 0x20);
    local_b8 = local_d8;
    psStack_b0 = psVar9;
    ComputeTextSize(&local_res8,&local_d8,*(undefined8 *)(param_1 + 0x710),fVar1 * fVar3 * fVar2,
                    fVar1 * fVar4 * fVar2,*(undefined4 *)(param_1 + 0x730),
                    *(undefined4 *)(param_1 + 0x734));
    fVar6 = local_resc;
    fVar11 = 0.0;
    if (*(char *)(param_1 + 0x718) == '\x01') {
      fVar11 = local_res8 * -0.5;
    }
    else if (*(char *)(param_1 + 0x718) == '\x02') {
      fVar11 = -local_res8;
    }
    if (fVar13 <= local_res8) {
      fVar13 = local_res8;
    }
    fVar10 = local_resc;
    if (local_resc <= 0.0) {
      fVar10 = (float)FUN_14244fa00(*(undefined8 *)(param_1 + 0x710));
    }
    fVar15 = fVar15 + fVar10;
    if (fVar11 <= fVar14) {
      fVar14 = fVar11;
    }
    if (fVar12 < 0.0) {
      fVar12 = fVar6;
    }
    do {
      sVar5 = *psVar9;
      if (sVar5 == 0) goto LAB_1423ca96c;
      if ((((sVar5 == 0x3c) && (psVar9[1] == 0x62)) && (psVar9[2] == 0x72)) && (psVar9[3] == 0x3e))
      {
        psVar9 = psVar9 + 4;
        break;
      }
      psVar9 = psVar9 + 1;
    } while (sVar5 != 10);
    local_d8 = local_b8;
    sVar5 = *psVar9;
  }
LAB_1423ca96c:
  cVar7 = *(char *)(param_1 + 0x719);
  if (cVar7 != '\0') {
    if (cVar7 == '\x01') {
      fVar12 = fVar15 * -0.5;
      goto LAB_1423ca9a4;
    }
    if (cVar7 == '\x02') {
      fVar12 = -fVar15;
      goto LAB_1423ca9a4;
    }
    if (cVar7 == '\x03') goto LAB_1423ca9a4;
  }
  fVar12 = 0.0;
LAB_1423ca9a4:
  local_c0 = CONCAT31(local_c0._1_3_,1);
  *(undefined4 *)(param_1 + 0x73c) = 0;
  *(float *)(param_1 + 0x740) = -fVar14;
  *(float *)(param_1 + 0x744) = -fVar12;
  *(undefined4 *)(param_1 + 0x748) = 0;
  *(ulonglong *)(param_1 + 0x74c) = CONCAT44(-(fVar15 + fVar12),fVar13 + fVar14) ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x754) = local_c0;
  return;
}



// FUNCTION 1423caa90 FUN_1423caa90 body=3368 status=ok
// SIG undefined FUN_1423caa90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1423caa90(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_180;
  float local_178;
  float local_174;
  undefined8 local_170;
  float local_168;
  undefined8 local_164;
  float local_15c;
  undefined1 local_158;
  undefined1 local_150 [32];
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_108;
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  fVar12 = DAT_1468b5d98;
  fVar9 = DAT_1468b5d94;
  fVar7 = DAT_1468b5d90;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 0x728) == 0) {
    *(undefined8 *)((longlong)param_2 + 0xc) = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    *param_2 = CONCAT44(fVar9 + *(float *)(param_2 + 2),fVar7 + *(float *)((longlong)param_2 + 0xc))
    ;
    *(float *)(param_2 + 1) = fVar12 + *(float *)((longlong)param_2 + 0x14);
    *(float *)(param_2 + 3) =
         SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
              *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
              *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  }
  else {
    fVar9 = 0.0;
    fVar12 = 1.0;
    local_18c = 0.0;
    UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),&local_130);
    fVar7 = *(float *)(param_1 + 0x81c);
    if (1e-08 < ABS(fVar7 - *(float *)(param_1 + 0x820))) {
      cVar1 = *(char *)(param_1 + 0x818);
      fVar4 = local_130 - local_124;
      if ((cVar1 != '\0') && (fVar4 = local_128 - local_11c, cVar1 == '\x01')) {
        fVar4 = local_12c - local_120;
      }
      local_190 = local_12c + local_120;
      fVar5 = local_130 + local_124;
      if ((cVar1 != '\0') && (fVar5 = local_128 + local_11c, cVar1 == '\x01')) {
        fVar5 = local_190;
      }
      fVar6 = 1.0 / (*(float *)(param_1 + 0x820) - fVar7);
      fVar4 = (fVar4 - fVar7) * fVar6;
      fVar6 = (fVar5 - fVar7) * fVar6;
      if ((ABS(fVar4) < 4.0) && (ABS(fVar6) < 4.0)) {
        fVar9 = fVar4;
        fVar12 = fVar6;
        local_18c = fVar4;
      }
    }
    cVar1 = *(char *)(param_1 + 0x818);
    fVar7 = 1.0;
    if (cVar1 == '\0') {
      fVar4 = 0.0;
      fVar5 = 1.0;
    }
    else if (cVar1 == '\x01') {
      fVar4 = 1.0;
      fVar5 = 0.0;
    }
    else {
      fVar4 = DAT_1468b5d90;
      fVar7 = DAT_1468b5d98;
      fVar5 = DAT_1468b5d94;
      if (cVar1 == '\x02') {
        fVar4 = 1.0;
        fVar7 = 0.0;
        fVar5 = 1.0;
      }
    }
    local_158 = 1;
    local_1a0 = (float)((uint)local_1a0 & 0xffffff00);
    local_1a8 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
    local_15c = local_11c * fVar7 + local_128 * fVar7;
    local_180 = local_128 * fVar7 - local_11c * fVar7;
    local_1b8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    uStack_1b0 = CONCAT44(DAT_1468b5d90,DAT_1468b5d98);
    local_170 = CONCAT44(local_12c * fVar5 - local_120 * fVar5,local_130 * fVar4 - local_124 * fVar4
                        );
    local_164 = CONCAT44(local_120 * fVar5 + local_12c * fVar5,local_124 * fVar4 + local_130 * fVar4
                        );
    local_168 = local_180;
    local_108 = local_15c;
    uVar2 = FUN_1423cbb90(param_1,local_f8,fVar9);
    pfVar3 = (float *)FBox::TransformBy(&local_170,local_150,uVar2);
    if (local_1a0._0_1_ == '\0') {
      if (*(char *)(pfVar3 + 6) != '\0') {
        local_1b8 = *(undefined8 *)pfVar3;
        uStack_1b0 = *(undefined8 *)(pfVar3 + 2);
        local_1a8 = *(undefined8 *)(pfVar3 + 4);
        local_1a0 = pfVar3[6];
      }
    }
    else if (*(char *)(pfVar3 + 6) != '\0') {
      fVar7 = *pfVar3;
      if ((float)local_1b8 <= *pfVar3) {
        fVar7 = (float)local_1b8;
      }
      fVar9 = pfVar3[1];
      if (local_1b8._4_4_ <= pfVar3[1]) {
        fVar9 = local_1b8._4_4_;
      }
      local_1b8 = CONCAT44(fVar9,fVar7);
      fVar7 = pfVar3[2];
      if ((float)uStack_1b0 <= pfVar3[2]) {
        fVar7 = (float)uStack_1b0;
      }
      fVar9 = pfVar3[3];
      if (pfVar3[3] <= uStack_1b0._4_4_) {
        fVar9 = uStack_1b0._4_4_;
      }
      uStack_1b0 = CONCAT44(fVar9,fVar7);
      fVar7 = pfVar3[4];
      if (pfVar3[4] <= (float)local_1a8) {
        fVar7 = (float)local_1a8;
      }
      fVar9 = pfVar3[5];
      if (pfVar3[5] <= local_1a8._4_4_) {
        fVar9 = local_1a8._4_4_;
      }
      local_1a8 = CONCAT44(fVar9,fVar7);
    }
    uVar2 = FUN_1423cbb90(param_1,local_f8,fVar12);
    pfVar3 = (float *)FBox::TransformBy(&local_170,local_150,uVar2);
    fVar7 = local_18c;
    if (local_1a0._0_1_ == '\0') {
      if (*(char *)(pfVar3 + 6) != '\0') {
        local_1b8 = *(undefined8 *)pfVar3;
        uStack_1b0 = *(undefined8 *)(pfVar3 + 2);
        local_1a8 = *(undefined8 *)(pfVar3 + 4);
        local_1a0 = pfVar3[6];
      }
    }
    else if (*(char *)(pfVar3 + 6) != '\0') {
      fVar9 = (float)local_1b8;
      if (*pfVar3 <= (float)local_1b8) {
        fVar9 = *pfVar3;
      }
      fVar4 = pfVar3[1];
      if (local_1b8._4_4_ <= pfVar3[1]) {
        fVar4 = local_1b8._4_4_;
      }
      local_1b8 = CONCAT44(fVar4,fVar9);
      fVar9 = pfVar3[2];
      if ((float)uStack_1b0 <= pfVar3[2]) {
        fVar9 = (float)uStack_1b0;
      }
      fVar4 = pfVar3[3];
      if (pfVar3[3] <= uStack_1b0._4_4_) {
        fVar4 = uStack_1b0._4_4_;
      }
      uStack_1b0 = CONCAT44(fVar4,fVar9);
      fVar9 = pfVar3[4];
      if (pfVar3[4] <= (float)local_1a8) {
        fVar9 = (float)local_1a8;
      }
      fVar4 = pfVar3[5];
      if (pfVar3[5] <= local_1a8._4_4_) {
        fVar4 = local_1a8._4_4_;
      }
      local_1a8 = CONCAT44(fVar4,fVar9);
    }
    fVar9 = *(float *)(param_1 + 0x7e8);
    fVar4 = *(float *)(param_1 + 0x7ec);
    fVar5 = *(float *)(param_1 + 0x7f0);
    local_180 = *(float *)(param_1 + 0x7c4);
    fVar10 = *(float *)(param_1 + 0x7e0) * 6.0;
    fVar8 = *(float *)(param_1 + 0x7dc) * 6.0;
    fVar11 = *(float *)(param_1 + 0x7e4) * 6.0;
    fVar6 = ((fVar9 + *(float *)(param_1 + 0x7bc)) * 3.0 + *(float *)(param_1 + 0x7b0) * 6.0) -
            fVar8;
    local_194 = ((fVar4 + *(float *)(param_1 + 0x7c0)) * 3.0 + *(float *)(param_1 + 0x7b4) * 6.0) -
                fVar10;
    local_190 = ((fVar5 + *(float *)(param_1 + 0x7c4)) * 3.0 + *(float *)(param_1 + 0x7b8) * 6.0) -
                fVar11;
    fVar8 = ((*(float *)(param_1 + 0x7b0) * -6.0 - *(float *)(param_1 + 0x7bc) * 4.0) -
            (fVar9 + fVar9)) + fVar8;
    fVar10 = ((*(float *)(param_1 + 0x7b4) * -6.0 - *(float *)(param_1 + 0x7c0) * 4.0) -
             (fVar4 + fVar4)) + fVar10;
    fVar11 = ((*(float *)(param_1 + 0x7b8) * -6.0 - *(float *)(param_1 + 0x7c4) * 4.0) -
             (fVar5 + fVar5)) + fVar11;
    local_198 = fVar8 * fVar8 - (float)*(undefined8 *)(param_1 + 0x7bc) * fVar6 * 4.0;
    local_178 = fVar10 * fVar10 -
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x7bc) >> 0x20) * local_194 * 4.0;
    local_174 = fVar11 * fVar11 - local_180 * local_190 * 4.0;
    if ((0.0 < local_198) && (1e-08 < ABS(fVar6))) {
      fVar9 = (SQRT(local_198) - fVar8) * (0.5 / fVar6);
      fVar4 = (-fVar8 - SQRT(local_198)) * (0.5 / fVar6);
      if ((local_18c <= fVar9) && (fVar9 <= fVar12)) {
        uVar2 = FUN_1423cbb90(param_1,local_f8);
        pfVar3 = (float *)FBox::TransformBy(&local_170,local_150,uVar2);
        if (local_1a0._0_1_ == '\0') {
          if (*(char *)(pfVar3 + 6) != '\0') {
            local_1b8 = *(undefined8 *)pfVar3;
            uStack_1b0 = *(undefined8 *)(pfVar3 + 2);
            local_1a8 = *(undefined8 *)(pfVar3 + 4);
            local_1a0 = pfVar3[6];
          }
        }
        else if (*(char *)(pfVar3 + 6) != '\0') {
          fVar9 = (float)local_1b8;
          if (*pfVar3 <= (float)local_1b8) {
            fVar9 = *pfVar3;
          }
          fVar5 = pfVar3[1];
          if (local_1b8._4_4_ <= pfVar3[1]) {
            fVar5 = local_1b8._4_4_;
          }
          local_1b8 = CONCAT44(fVar5,fVar9);
          fVar9 = pfVar3[2];
          if ((float)uStack_1b0 <= pfVar3[2]) {
            fVar9 = (float)uStack_1b0;
          }
          fVar5 = pfVar3[3];
          if (pfVar3[3] <= uStack_1b0._4_4_) {
            fVar5 = uStack_1b0._4_4_;
          }
          uStack_1b0 = CONCAT44(fVar5,fVar9);
          fVar9 = pfVar3[4];
          if (pfVar3[4] <= (float)local_1a8) {
            fVar9 = (float)local_1a8;
          }
          fVar5 = pfVar3[5];
          if (pfVar3[5] <= local_1a8._4_4_) {
            fVar5 = local_1a8._4_4_;
          }
          local_1a8 = CONCAT44(fVar5,fVar9);
        }
      }
      if ((fVar7 <= fVar4) && (fVar4 <= fVar12)) {
        uVar2 = FUN_1423cbb90(param_1,local_f8,fVar4);
        pfVar3 = (float *)FBox::TransformBy(&local_170,local_150,uVar2);
        if (local_1a0._0_1_ == '\0') {
          if (*(char *)(pfVar3 + 6) != '\0') {
            local_1b8 = *(undefined8 *)pfVar3;
            uStack_1b0 = *(undefined8 *)(pfVar3 + 2);
            local_1a8 = *(undefined8 *)(pfVar3 + 4);
            local_1a0 = pfVar3[6];
          }
        }
        else if (*(char *)(pfVar3 + 6) != '\0') {
          fVar9 = (float)local_1b8;
          if (*pfVar3 <= (float)local_1b8) {
            fVar9 = *pfVar3;
          }
          fVar4 = pfVar3[1];
          if (local_1b8._4_4_ <= pfVar3[1]) {
            fVar4 = local_1b8._4_4_;
          }
          local_1b8 = CONCAT44(fVar4,fVar9);
          fVar9 = pfVar3[2];
          if ((float)uStack_1b0 <= pfVar3[2]) {
            fVar9 = (float)uStack_1b0;
          }
          fVar4 = pfVar3[3];
          if (pfVar3[3] <= uStack_1b0._4_4_) {
            fVar4 = uStack_1b0._4_4_;
          }
          uStack_1b0 = CONCAT44(fVar4,fVar9);
          fVar9 = pfVar3[4];
          if (pfVar3[4] <= (float)local_1a8) {
            fVar9 = (float)local_1a8;
          }
          fVar4 = pfVar3[5];
          if (pfVar3[5] <= local_1a8._4_4_) {
            fVar4 = local_1a8._4_4_;
          }
          local_1a8 = CONCAT44(fVar4,fVar9);
        }
      }
    }
    if ((0.0 < local_178) && (1e-08 < ABS(local_194))) {
      fVar9 = (SQRT(local_178) - fVar10) * (0.5 / local_194);
      fVar4 = (-fVar10 - SQRT(local_178)) * (0.5 / local_194);
      if ((fVar7 <= fVar9) && (fVar9 <= fVar12)) {
        uVar2 = FUN_1423cbb90(param_1,local_f8);
        pfVar3 = (float *)FBox::TransformBy(&local_170,local_150,uVar2);
        if (local_1a0._0_1_ == '\0') {
          if (*(char *)(pfVar3 + 6) != '\0') {
            local_1b8 = *(undefined8 *)pfVar3;
            uStack_1b0 = *(undefined8 *)(pfVar3 + 2);
            local_1a8 = *(undefined8 *)(pfVar3 + 4);
            local_1a0 = pfVar3[6];
          }
        }
        else if (*(char *)(pfVar3 + 6) != '\0') {
          fVar9 = (float)local_1b8;
          if (*pfVar3 <= (float)local_1b8) {
            fVar9 = *pfVar3;
          }
          fVar5 = pfVar3[1];
          if (local_1b8._4_4_ <= pfVar3[1]) {
            fVar5 = local_1b8._4_4_;
          }
          local_1b8 = CONCAT44(fVar5,fVar9);
          fVar9 = pfVar3[2];
          if ((float)uStack_1b0 <= pfVar3[2]) {
            fVar9 = (float)uStack_1b0;
          }
          fVar5 = pfVar3[3];
          if (pfVar3[3] <= uStack_1b0._4_4_) {
            fVar5 = uStack_1b0._4_4_;
          }
          uStack_1b0 = CONCAT44(fVar5,fVar9);
          fVar9 = pfVar3[4];
          if (pfVar3[4] <= (float)local_1a8) {
            fVar9 = (float)local_1a8;
          }
          fVar5 = pfVar3[5];
          if (pfVar3[5] <= local_1a8._4_4_) {
            fVar5 = local_1a8._4_4_;
          }
          local_1a8 = CONCAT44(fVar5,fVar9);
        }
      }
      if ((fVar7 <= fVar4) && (fVar4 <= fVar12)) {
        uVar2 = FUN_1423cbb90(param_1,local_f8,fVar4);
        pfVar3 = (float *)FBox::TransformBy(&local_170,local_150,uVar2);
        if (local_1a0._0_1_ == '\0') {
          if (*(char *)(pfVar3 + 6) != '\0') {
            local_1b8 = *(undefined8 *)pfVar3;
            uStack_1b0 = *(undefined8 *)(pfVar3 + 2);
            local_1a8 = *(undefined8 *)(pfVar3 + 4);
            local_1a0 = pfVar3[6];
          }
        }
        else if (*(char *)(pfVar3 + 6) != '\0') {
          fVar9 = (float)local_1b8;
          if (*pfVar3 <= (float)local_1b8) {
            fVar9 = *pfVar3;
          }
          fVar4 = pfVar3[1];
          if (local_1b8._4_4_ <= pfVar3[1]) {
            fVar4 = local_1b8._4_4_;
          }
          local_1b8 = CONCAT44(fVar4,fVar9);
          fVar9 = pfVar3[2];
          if ((float)uStack_1b0 <= pfVar3[2]) {
            fVar9 = (float)uStack_1b0;
          }
          fVar4 = pfVar3[3];
          if (pfVar3[3] <= uStack_1b0._4_4_) {
            fVar4 = uStack_1b0._4_4_;
          }
          uStack_1b0 = CONCAT44(fVar4,fVar9);
          fVar9 = pfVar3[4];
          if (pfVar3[4] <= (float)local_1a8) {
            fVar9 = (float)local_1a8;
          }
          fVar4 = pfVar3[5];
          if (pfVar3[5] <= local_1a8._4_4_) {
            fVar4 = local_1a8._4_4_;
          }
          local_1a8 = CONCAT44(fVar4,fVar9);
        }
      }
    }
    if ((0.0 < local_174) && (1e-08 < ABS(local_190))) {
      fVar9 = (SQRT(local_174) - fVar11) * (0.5 / local_190);
      fVar4 = (-fVar11 - SQRT(local_174)) * (0.5 / local_190);
      if ((fVar7 <= fVar9) && (fVar9 <= fVar12)) {
        uVar2 = FUN_1423cbb90(param_1,local_f8);
        pfVar3 = (float *)FBox::TransformBy(&local_170,local_150,uVar2);
        if (local_1a0._0_1_ == '\0') {
          if (*(char *)(pfVar3 + 6) != '\0') {
            local_1b8 = *(undefined8 *)pfVar3;
            uStack_1b0 = *(undefined8 *)(pfVar3 + 2);
            local_1a8 = *(undefined8 *)(pfVar3 + 4);
            local_1a0 = pfVar3[6];
          }
        }
        else if (*(char *)(pfVar3 + 6) != '\0') {
          fVar9 = (float)local_1b8;
          if (*pfVar3 <= (float)local_1b8) {
            fVar9 = *pfVar3;
          }
          fVar5 = pfVar3[1];
          if (local_1b8._4_4_ <= pfVar3[1]) {
            fVar5 = local_1b8._4_4_;
          }
          local_1b8 = CONCAT44(fVar5,fVar9);
          fVar9 = pfVar3[2];
          if ((float)uStack_1b0 <= pfVar3[2]) {
            fVar9 = (float)uStack_1b0;
          }
          fVar5 = pfVar3[3];
          if (pfVar3[3] <= uStack_1b0._4_4_) {
            fVar5 = uStack_1b0._4_4_;
          }
          uStack_1b0 = CONCAT44(fVar5,fVar9);
          fVar9 = pfVar3[4];
          if (pfVar3[4] <= (float)local_1a8) {
            fVar9 = (float)local_1a8;
          }
          fVar5 = pfVar3[5];
          if (pfVar3[5] <= local_1a8._4_4_) {
            fVar5 = local_1a8._4_4_;
          }
          local_1a8 = CONCAT44(fVar5,fVar9);
        }
      }
      if ((fVar7 <= fVar4) && (fVar4 <= fVar12)) {
        uVar2 = FUN_1423cbb90(param_1,local_f8,fVar4);
        pfVar3 = (float *)FBox::TransformBy(&local_170,local_150,uVar2);
        if (local_1a0._0_1_ == '\0') {
          if (*(char *)(pfVar3 + 6) != '\0') {
            local_1b8 = *(undefined8 *)pfVar3;
            uStack_1b0 = *(undefined8 *)(pfVar3 + 2);
            local_1a8 = *(undefined8 *)(pfVar3 + 4);
            local_1a0 = pfVar3[6];
          }
        }
        else if (*(char *)(pfVar3 + 6) != '\0') {
          fVar7 = (float)local_1b8;
          if (*pfVar3 <= (float)local_1b8) {
            fVar7 = *pfVar3;
          }
          fVar9 = pfVar3[1];
          if (local_1b8._4_4_ <= pfVar3[1]) {
            fVar9 = local_1b8._4_4_;
          }
          local_1b8 = CONCAT44(fVar9,fVar7);
          fVar7 = pfVar3[2];
          if ((float)uStack_1b0 <= pfVar3[2]) {
            fVar7 = (float)uStack_1b0;
          }
          fVar9 = pfVar3[3];
          if (pfVar3[3] <= uStack_1b0._4_4_) {
            fVar9 = uStack_1b0._4_4_;
          }
          uStack_1b0 = CONCAT44(fVar9,fVar7);
          fVar7 = pfVar3[4];
          if (pfVar3[4] <= (float)local_1a8) {
            fVar7 = (float)local_1a8;
          }
          fVar9 = pfVar3[5];
          if (pfVar3[5] <= local_1a8._4_4_) {
            fVar9 = local_1a8._4_4_;
          }
          local_1a8 = CONCAT44(fVar9,fVar7);
        }
      }
    }
    uVar2 = FBox::TransformBy(&local_1b8,local_150,param_3);
    FBoxSphereBounds::FBoxSphereBounds(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 1423cb7c0 FUN_1423cb7c0 body=248 status=ok
// SIG undefined FUN_1423cb7c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1423cb7c0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0x728) == 0) {
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    uVar4 = *(undefined4 *)(param_3 + 0x18);
    param_2[6] = 0;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    uVar5 = _DAT_1468b5d90;
    param_2[2] = uVar4;
    uVar2 = DAT_1468b5d98;
    *(undefined8 *)(param_2 + 3) = uVar5;
    param_2[5] = uVar2;
  }
  else {
    uVar5 = UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),local_28);
    FBoxSphereBounds::TransformBy(uVar5,&local_48,param_3);
    fVar1 = *(float *)(param_1 + 0x364);
    *param_2 = local_48;
    param_2[1] = uStack_44;
    param_2[2] = uStack_40;
    param_2[3] = fStack_3c * fVar1;
    *(ulonglong *)(param_2 + 4) = CONCAT44(local_34 * fVar1,local_38 * fVar1);
    param_2[6] = local_30 * fVar1;
  }
  return param_2;
}



// FUNCTION 1423cb8c0 FUN_1423cb8c0 body=447 status=ok
// SIG undefined FUN_1423cb8c0(void)

float * FUN_1423cb8c0(longlong param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  
  cVar4 = FText::IsEmpty(param_1 + 0x6f0);
  if ((cVar4 == '\0') && (*(longlong *)(param_1 + 0x710) != 0)) {
    pfVar5 = (float *)FBox::TransformBy(param_1 + 0x73c,&local_78,param_3);
    fVar1 = pfVar5[1];
    fVar8 = pfVar5[3] - *pfVar5;
    fVar2 = pfVar5[2];
    fVar7 = pfVar5[4] - fVar1;
    fVar6 = pfVar5[5] - fVar2;
    fVar3 = *(float *)(param_1 + 0x364);
    *param_2 = *pfVar5 + fVar8 * 0.5;
    param_2[1] = fVar1 + fVar7 * 0.5;
    param_2[2] = fVar2 + fVar6 * 0.5;
    param_2[3] = fVar3 * fVar8 * 0.5;
    *(ulonglong *)(param_2 + 4) = CONCAT44(fVar3 * fVar6 * 0.5,fVar3 * fVar7 * 0.5);
    param_2[6] = SQRT((fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) * 0.25) * fVar3;
  }
  else {
    local_68 = 0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FBoxSphereBounds::TransformBy(&local_78,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 1423cba80 FUN_1423cba80 body=270 status=ok
// SIG undefined FUN_1423cba80(void)

undefined8 FUN_1423cba80(longlong param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_38 [3];
  float local_2c;
  float local_28;
  float local_24;
  
  fVar3 = *(float *)(param_1 + 0x81c);
  fVar4 = 0.0;
  if (ABS(fVar3 - *(float *)(param_1 + 0x820)) <= 1e-08) {
    if (*(longlong *)(param_1 + 0x728) != 0) {
      UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),local_38,0);
      cVar1 = *(char *)(param_1 + 0x818);
      if (cVar1 == '\0') {
        pfVar2 = local_38;
      }
      else if (cVar1 == '\x01') {
        pfVar2 = local_38 + 1;
      }
      else {
        pfVar2 = local_38 + 2;
      }
      fVar3 = local_2c;
      if ((cVar1 != '\0') && (fVar3 = local_28, cVar1 != '\x01')) {
        fVar3 = local_24;
      }
      if ((cVar1 != '\0') && (local_2c = local_24, cVar1 == '\x01')) {
        local_2c = local_28;
      }
      fVar4 = (param_3 - (*pfVar2 - fVar3)) * (0.5 / local_2c);
    }
  }
  else {
    fVar4 = (param_3 - fVar3) / (*(float *)(param_1 + 0x820) - fVar3);
  }
  FUN_1423cbb90(param_1,param_2,fVar4);
  return param_2;
}



// FUNCTION 1423cbb90 FUN_1423cbb90 body=2063 status=ok
// SIG undefined FUN_1423cbb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423cbb90(longlong param_1,undefined8 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
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
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  
  fVar34 = param_3;
  if ((*(byte *)(param_1 + 0x814) & 2) != 0) {
    if (0.0 <= param_3) {
      if (param_3 < 1.0) {
        fVar34 = (3.0 - (param_3 + param_3)) * param_3 * param_3;
      }
      else {
        fVar34 = 1.0;
      }
    }
    else {
      fVar34 = 0.0;
    }
  }
  fVar6 = param_3 * param_3;
  fVar22 = fVar6 * param_3;
  fVar10 = fVar22 - fVar6;
  fVar17 = fVar6 * 3.0 - (fVar22 + fVar22);
  fVar27 = *(float *)(param_1 + 0x7e8);
  fVar12 = ((fVar22 + fVar22) - fVar6 * 3.0) + 1.0;
  fVar23 = (fVar22 - (fVar6 + fVar6)) + param_3;
  fVar6 = *(float *)(param_1 + 0x7b0);
  fVar22 = *(float *)(param_1 + 0x7bc);
  fVar7 = *(float *)(param_1 + 0x7dc);
  fVar8 = *(float *)(param_1 + 0x7ec);
  fVar9 = *(float *)(param_1 + 0x7f0);
  fVar18 = *(float *)(param_1 + 0x7b4);
  fVar20 = *(float *)(param_1 + 0x7b8);
  fVar25 = *(float *)(param_1 + 0x7c0);
  fVar31 = *(float *)(param_1 + 0x7c4);
  fVar1 = *(float *)(param_1 + 0x7e0);
  fVar2 = *(float *)(param_1 + 0x7e4);
  SplineEvalDir(&local_138,(float *)(param_1 + 0x7b0),(float *)(param_1 + 0x7bc),
                (float *)(param_1 + 0x7dc),(float *)(param_1 + 0x7e8),param_3);
  fVar32 = local_130 * *(float *)(param_1 + 0x80c) - local_134 * *(float *)(param_1 + 0x810);
  fVar29 = local_138 * *(float *)(param_1 + 0x810) - local_130 * *(float *)(param_1 + 0x808);
  fVar35 = local_134 * *(float *)(param_1 + 0x808) - local_138 * *(float *)(param_1 + 0x80c);
  fVar11 = fVar32 * fVar32 + fVar29 * fVar29 + fVar35 * fVar35;
  fVar30 = fVar29;
  fVar33 = fVar32;
  fVar19 = fVar35;
  if ((fVar11 != 1.0) &&
     (fVar30 = DAT_1468b5d94, fVar33 = DAT_1468b5d90, fVar19 = DAT_1468b5d98, 1e-08 <= fVar11)) {
    auVar21 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar19 = auVar21._0_4_;
    fVar19 = fVar19 + fVar19 * (0.5 - fVar11 * 0.5 * fVar19 * fVar19);
    fVar19 = fVar19 + fVar19 * (0.5 - fVar11 * 0.5 * fVar19 * fVar19);
    fVar30 = fVar19 * fVar29;
    fVar33 = fVar32 * fVar19;
    fVar19 = fVar19 * fVar35;
  }
  fVar24 = local_134 * fVar19 - local_130 * fVar30;
  fVar28 = local_130 * fVar33 - local_138 * fVar19;
  fVar26 = local_138 * fVar30 - local_134 * fVar33;
  fVar35 = fVar28 * fVar28 + fVar24 * fVar24 + fVar26 * fVar26;
  fVar11 = fVar24;
  fVar29 = fVar26;
  fVar32 = fVar28;
  if ((fVar35 != 1.0) &&
     (fVar11 = DAT_1468b5d90, fVar29 = DAT_1468b5d98, fVar32 = DAT_1468b5d94, 1e-08 <= fVar35)) {
    auVar21 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
    fVar32 = auVar21._0_4_;
    fVar32 = fVar32 + fVar32 * (0.5 - fVar35 * 0.5 * fVar32 * fVar32);
    fVar32 = fVar32 + fVar32 * (0.5 - fVar35 * 0.5 * fVar32 * fVar32);
    fVar11 = fVar24 * fVar32;
    fVar29 = fVar26 * fVar32;
    fVar32 = fVar28 * fVar32;
  }
  fVar35 = (*(float *)(param_1 + 0x804) - *(float *)(param_1 + 0x7d8)) * fVar34 +
           *(float *)(param_1 + 0x7d8);
  fVar24 = (*(float *)(param_1 + 0x800) - *(float *)(param_1 + 0x7d4)) * fVar34 +
           *(float *)(param_1 + 0x7d4);
  fVar22 = fVar33 * fVar24 + fVar12 * fVar6 + fVar23 * fVar22 + fVar10 * fVar27 + fVar17 * fVar7 +
           fVar11 * fVar35;
  fVar7 = fVar30 * fVar24 + fVar23 * fVar25 + fVar12 * fVar18 + fVar10 * fVar8 + fVar17 * fVar1 +
          fVar32 * fVar35;
  fVar8 = fVar19 * fVar24 + fVar23 * fVar31 + fVar12 * fVar20 + fVar10 * fVar9 + fVar17 * fVar2 +
          fVar29 * fVar35;
  uVar5 = __libm_sse2_sincosf_
                    ((*(float *)(param_1 + 0x7fc) - *(float *)(param_1 + 2000)) * fVar34 +
                     *(float *)(param_1 + 2000));
  uVar4 = uRam0000000146af122c;
  fVar6 = (float)((ulonglong)uVar5 >> 0x20);
  fVar27 = (float)uVar5;
  fVar18 = fVar33 * fVar6 - fVar11 * fVar27;
  fVar20 = fVar30 * fVar6 - fVar32 * fVar27;
  fVar25 = fVar11 * fVar6 + fVar33 * fVar27;
  fVar31 = fVar30 * fVar27 + fVar32 * fVar6;
  fVar9 = fVar19 * fVar6 - fVar29 * fVar27;
  fVar27 = fVar29 * fVar6 + fVar19 * fVar27;
  fVar6 = (*(float *)(param_1 + 0x7f4) - *(float *)(param_1 + 0x7c8)) * fVar34 +
          *(float *)(param_1 + 0x7c8);
  fVar34 = (*(float *)(param_1 + 0x7f8) - *(float *)(param_1 + 0x7cc)) * fVar34 +
           *(float *)(param_1 + 0x7cc);
  cVar3 = *(char *)(param_1 + 0x818);
  uVar13 = _DAT_146af1220 & _DAT_146af1230;
  uVar14 = uRam0000000146af1224 & uRam0000000146af1234;
  uVar15 = uRam0000000146af1228 & uRam0000000146af1238;
  uVar16 = uRam0000000146af122c & uRam0000000146af123c;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((longlong)param_2 + 0xc) = uVar4;
  param_2[2] = 0;
  param_2[3] = 0;
  *(uint *)(param_2 + 4) = uVar13;
  *(uint *)((longlong)param_2 + 0x24) = uVar14;
  *(uint *)(param_2 + 5) = uVar15;
  *(uint *)((longlong)param_2 + 0x2c) = uVar16;
  local_c8 = fVar22;
  local_c4 = fVar7;
  local_c0 = fVar8;
  if (cVar3 == '\0') {
    local_f8 = local_138;
    local_f4 = local_134;
    local_f0 = local_130;
    local_ec = 0;
    local_dc = 0;
    local_cc = 0;
    local_bc = 0x3f800000;
    local_e8 = fVar18;
    local_e4 = fVar20;
    local_e0 = fVar9;
    local_d8 = fVar25;
    local_d4 = fVar31;
    local_d0 = fVar27;
    FUN_140487e30(&local_128,&local_f8);
    fVar22 = 1.0;
    param_2[2] = local_118;
    param_2[3] = uStack_110;
    fVar27 = fVar6;
  }
  else {
    if (cVar3 == '\x01') {
      local_e8 = local_138;
      local_e4 = local_134;
      local_e0 = local_130;
      local_ec = 0;
      local_dc = 0;
      local_cc = 0;
      local_bc = 0x3f800000;
      local_f8 = fVar25;
      local_f4 = fVar31;
      local_f0 = fVar27;
      local_d8 = fVar18;
      local_d4 = fVar20;
      local_d0 = fVar9;
      FUN_140487e30(&local_128,&local_f8);
      *(float *)(param_2 + 4) = fVar34;
      *(undefined4 *)((longlong)param_2 + 0x24) = 0x3f800000;
      *(float *)(param_2 + 5) = fVar6;
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
      param_2[2] = local_118;
      param_2[3] = uStack_110;
      goto LAB_1423cc34d;
    }
    if (cVar3 != '\x02') {
      return param_2;
    }
    local_d8 = local_138;
    local_d4 = local_134;
    local_d0 = local_130;
    local_ec = 0;
    local_dc = 0;
    local_cc = 0;
    local_bc = 0x3f800000;
    local_f8 = fVar18;
    local_f4 = fVar20;
    local_f0 = fVar9;
    local_e8 = fVar25;
    local_e4 = fVar31;
    local_e0 = fVar27;
    FUN_140487e30(&local_128,&local_f8);
    param_2[2] = local_118;
    param_2[3] = uStack_110;
    fVar27 = fVar34;
    fVar22 = fVar6;
    fVar34 = 1.0;
  }
  auVar21._4_4_ = fVar27;
  auVar21._0_4_ = fVar22;
  auVar21._8_4_ = fVar34;
  auVar21._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar21;
LAB_1423cc34d:
  *param_2 = local_128;
  param_2[1] = uStack_120;
  return param_2;
}



// FUNCTION 1423cc3a0 FUN_1423cc3a0 body=317 status=ok
// SIG undefined FUN_1423cc3a0(void)

void FUN_1423cc3a0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(longlong *)(param_1 + 0x728) != 0) {
    if (ABS(*(float *)(param_1 + 0x81c) - *(float *)(param_1 + 0x820)) <= 1e-08) {
      UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),&local_28);
      if ((*(char *)(param_1 + 0x818) != '\0') &&
         (local_1c = local_18, *(char *)(param_1 + 0x818) != '\x01')) {
        local_1c = local_14;
      }
      local_1c = 0.5 / local_1c;
      *param_2 = local_1c;
      if (*(char *)(param_1 + 0x818) == '\0') {
        *param_3 = local_1c * local_28 - 0.5;
        return;
      }
      if (*(char *)(param_1 + 0x818) == '\x01') {
        *param_3 = local_1c * local_24 - 0.5;
        return;
      }
      *param_3 = local_1c * local_20 - 0.5;
      return;
    }
    fVar1 = 1.0 / (*(float *)(param_1 + 0x820) - *(float *)(param_1 + 0x81c));
    *param_2 = fVar1;
    *param_3 = fVar1 * *(float *)(param_1 + 0x81c);
  }
  return;
}



// FUNCTION 1423cc4e0 FUN_1423cc4e0 body=148 status=ok
// SIG undefined FUN_1423cc4e0(void)

undefined8 FUN_1423cc4e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)param_1[0x23];
  }
  if ((plVar4 != (longlong *)0x0) && ((*(byte *)((longlong)param_1 + 0x2ef) & 0x40) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x460))();
    if (cVar1 != '\0') {
      cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
      if (cVar1 == '\0') {
        lVar2 = (**(code **)(*plVar4 + 0x148))(plVar4);
        if (lVar2 != 0) {
          lVar2 = (**(code **)(*plVar4 + 0x148))(plVar4);
          lVar3 = FUN_14233fea0(param_1);
          if (lVar3 == *(longlong *)(lVar2 + 0x1b8)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1423cc580 FUN_1423cc580 body=69 status=ok
// SIG undefined FUN_1423cc580(void)

undefined8 FUN_1423cc580(longlong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 local_res8 [32];
  
  lVar1 = (**(code **)(*param_1 + 0x6b8))();
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(int *)(lVar1 + 0x70) + *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 0x50) +
       *(int *)(lVar1 + 0x40) + *(int *)(lVar1 + 0x30) < 1) &&
     (pcVar2 = (char *)FUN_1426c5d50(lVar1,local_res8), *pcVar2 != '\x03')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1423cc5d0 CancelForcedResources body=73 status=ok
// SIG undefined CancelForcedResources(void)

void FStreamingManagerCollection::CancelForcedResources(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + *(longlong *)(param_1 + 0x10)) + 0x28))();
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423cc620 CastToPlayerController body=85 status=ok
// SIG undefined CastToPlayerController(void)

longlong AController::CastToPlayerController(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
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
    if (bVar1) {
      return param_1;
    }
  }
  return 0;
}



// FUNCTION 1423cc680 FUN_1423cc680 body=99 status=ok
// SIG undefined FUN_1423cc680(void)

void FUN_1423cc680(longlong *param_1,longlong param_2)

{
  if (param_2 != param_1[0x90]) {
    if (param_1[0x90] == 0x145) {
      (**(code **)(*param_1 + 0x808))();
    }
    param_1[0x90] = param_2;
    if (param_2 == 0x145) {
      (**(code **)(*param_1 + 0x800))(param_1);
    }
  }
  return;
}



// FUNCTION 1423cc6f0 FUN_1423cc6f0 body=120 status=ok
// SIG undefined FUN_1423cc6f0(void)

void FUN_1423cc6f0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  puVar1 = *(undefined8 **)(param_1 + 0x30 + lVar4 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x30 + lVar4 * 8) = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = (longlong)*(int *)(param_1 + 0x28) * 0x30 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x30) {
    *(undefined4 *)(lVar2 + 0x20 + lVar4 * 4) = 0;
  }
  return;
}



// FUNCTION 1423cc770 FUN_1423cc770 body=43 status=ok
// SIG undefined FUN_1423cc770(void)

void FUN_1423cc770(longlong param_1)

{
  FUN_142227350(*(undefined8 *)(param_1 + 0x460),0,1);
  *(undefined8 *)(param_1 + 0x460) = 0;
  return;
}



// FUNCTION 1423cc7a0 FUN_1423cc7a0 body=273 status=ok
// SIG undefined FUN_1423cc7a0(void)

void FUN_1423cc7a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c [20];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_48 = *param_3;
  local_40 = *(undefined4 *)(param_3 + 1);
  uVar3 = FUN_142920470((int)local_48,&local_48,0);
  plVar6 = *(longlong **)(param_1 + 0x488);
  if (plVar6 != (longlong *)0x0) {
    lVar1 = plVar6[0x2d];
    if (lVar1 == 0) {
      uVar3 = (undefined4)DAT_1468b5da0;
      uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_40 = DAT_1468b5da8;
    }
    else {
      local_18 = *(float *)(lVar1 + 0x210);
      fStack_14 = *(float *)(lVar1 + 0x214);
      fStack_10 = *(float *)(lVar1 + 0x218);
      fStack_c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
      iVar4 = movmskps(uVar3,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_2c);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
        plVar6 = *(longlong **)(param_1 + 0x488);
      }
      uVar3 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_40 = *(undefined4 *)(lVar1 + 0x268);
    }
    local_48 = CONCAT44(uVar7,uVar3);
    local_38 = local_48;
    local_30 = local_40;
    (**(code **)(*plVar6 + 0x500))(uVar3,param_2,&local_38,0,0);
  }
  return;
}



// FUNCTION 1423cc8c0 FUN_1423cc8c0 body=82 status=ok
// SIG undefined FUN_1423cc8c0(void)

void FUN_1423cc8c0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x728))();
  plVar1 = (longlong *)param_1[0x91];
  if (plVar1 != (longlong *)0x0) {
    local_10 = *(undefined4 *)(param_2 + 1);
    local_18 = *param_2;
    (**(code **)(*plVar1 + 0x7b0))(plVar1,&local_18,0);
  }
  return;
}



// FUNCTION 1423cc920 FUN_1423cc920 body=219 status=ok
// SIG undefined FUN_1423cc920(void)

float FUN_1423cc920(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)FUN_1423638d0();
  if ((*(byte *)(param_1 + 0x450) & 1) != 0) {
    if (*(char *)(param_1 + 0x430) == '\x01') {
      return fVar1 * 10000.0;
    }
    if (*(char *)(param_1 + 0x430) == '\x02') {
      fVar3 = *(float *)(param_1 + 0x480);
      fVar2 = 0.0;
      if ((0.0 <= fVar3) && (fVar2 = fVar3, 89.0 <= fVar3)) {
        fVar2 = 89.0;
      }
      fVar4 = *(float *)(param_1 + 0x484) * 0.017453292;
      fVar3 = fVar2 * 0.017453292 + 0.001;
      if ((fVar3 <= fVar4) && (fVar3 = fVar4, 1.5543431 <= fVar4)) {
        fVar3 = 1.5543431;
      }
      fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
      return fVar1 * (1591.5494 / (1.0 - fVar3));
    }
    fVar1 = fVar1 * 16.0;
  }
  return fVar1;
}



// FUNCTION 1423cca00 ComputeTextSize body=453 status=ok
// SIG undefined ComputeTextSize(void)

float * ComputeTextSize(float *param_1,longlong param_2,longlong param_3,float param_4,float param_5
                       ,float param_6,float param_7)

{
  byte bVar1;
  short sVar2;
  wint_t _C;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  if (param_3 != 0) {
    fVar11 = 0.0;
    iVar3 = *(int *)(param_3 + 0x6c);
    while( true ) {
      psVar4 = *(short **)(param_2 + 8);
      sVar2 = *psVar4;
      if ((sVar2 == 0) ||
         ((((sVar2 == 0x3c && (psVar4[1] == 0x62)) && (psVar4[2] == 0x72)) && (psVar4[3] == 0x3e))))
      break;
      *(short **)(param_2 + 8) = psVar4 + 1;
      if (sVar2 == 10) {
        return param_1;
      }
      uVar6 = UFont::RemapChar(param_3);
      if ((int)(uint)uVar6 < *(int *)(param_3 + 0x40)) {
        lVar5 = *(longlong *)(param_3 + 0x38);
        uVar8 = (ulonglong)uVar6;
        bVar1 = *(byte *)(lVar5 + 0x10 + uVar8 * 0x18);
        if (((int)(uint)bVar1 < *(int *)(param_3 + 0x50)) &&
           (*(longlong *)(*(longlong *)(param_3 + 0x48) + (ulonglong)bVar1 * 8) != 0)) {
          _C = psVar4[1];
          iVar7 = *(int *)(lVar5 + 0xc + uVar8 * 0x18);
          fVar10 = (float)*(int *)(lVar5 + 8 + uVar8 * 0x18) * param_4;
          fVar9 = fVar10 + fVar11;
          if (fVar10 + fVar11 <= *param_1) {
            fVar9 = *param_1;
          }
          *param_1 = fVar9;
          fVar9 = ((float)iVar7 + param_7 + (float)*(int *)(lVar5 + 0x14 + uVar8 * 0x18)) * param_5;
          if (fVar9 <= param_1[1]) {
            fVar9 = param_1[1];
          }
          param_1[1] = fVar9;
          if ((_C != 0) &&
             ((((_C != 0x3c || (psVar4[2] != 0x62)) || ((psVar4[3] != 0x72 || (psVar4[4] != 0x3e))))
              && ((_C != 10 && (iVar7 = iswspace(_C), iVar7 == 0)))))) {
            fVar10 = fVar10 + ((float)iVar3 + param_6) * param_4;
          }
          fVar11 = fVar11 + fVar10;
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1423ccbd0 ConstructCompiledInstance body=276 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCubemapTexturePropertiesPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde018;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"CubeTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"CubeTextureSampler",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"ColorWeights",0);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"PackedProperties0",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"Gamma",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423cccf0 ConstructCompiledInstance body=112 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCubemapTexturePropertiesVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"Transform",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423ccd60 ConstructCompiledInstance body=197 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FIESLightProfilePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91300;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"IESTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"IESTextureSampler",0);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"BrightnessInLumens",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423cce40 ConstructShaderParameters body=138 status=ok
// SIG undefined ConstructShaderParameters(void)

undefined8 * FSplineMeshVertexFactory::ConstructShaderParameters(int param_1)

{
  undefined8 *_Dst;
  
  if (param_1 != 0) {
    return (undefined8 *)0x0;
  }
  _Dst = (undefined8 *)operator_new(0x70);
  if (_Dst != (undefined8 *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x70);
    *_Dst = &PTR_FUN_145072448;
    *(undefined8 *)((longlong)_Dst + 10) = 0;
    *(undefined8 *)((longlong)_Dst + 0x12) = 0;
    *(undefined8 *)((longlong)_Dst + 0x1a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x22) = 0;
    *(undefined8 *)((longlong)_Dst + 0x2a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x32) = 0;
    *(undefined8 *)((longlong)_Dst + 0x3a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x42) = 0;
    *(undefined8 *)((longlong)_Dst + 0x4a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x52) = 0;
    *(undefined8 *)((longlong)_Dst + 0x5a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x62) = 0;
    *(undefined4 *)((longlong)_Dst + 0x6a) = 0;
    return _Dst;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423ccef0 CreateIterator body=289 status=ok
// SIG undefined CreateIterator(void)

longlong * FKeyHandleMap::CreateIterator(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_1 + 0x28);
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar1 != 0) {
    puVar6 = *(uint **)(param_1 + 0x20);
    if (*(uint **)(param_1 + 0x20) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x10);
    }
    uVar2 = *puVar6;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_1423ccfb5;
      uVar2 = puVar6[lVar4 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_44 = (iStack_40 - iVar5) + 0x1f;
    if (iVar1 < iStack_44) {
LAB_1423ccfb5:
      iStack_44 = iVar1;
    }
  }
  param_2[6] = param_1;
  *(undefined2 *)(param_2 + 7) = 0;
  local_10 = (undefined4)param_1;
  uStack_c = (undefined4)((ulonglong)param_1 >> 0x20);
  *param_2 = param_1;
  param_2[1] = CONCAT44(uStack_54,local_58);
  param_2[2] = param_1 + 0x10;
  param_2[3] = CONCAT44(iStack_44,0xffffffff);
  *(int *)(param_2 + 4) = iStack_40;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
  *(undefined4 *)(param_2 + 5) = local_10;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_c;
  return param_2;
}



// FUNCTION 1423cd020 FUN_1423cd020 body=136 status=ok
// SIG undefined FUN_1423cd020(void)

void FUN_1423cd020(longlong param_1)

{
  char cVar1;
  longlong local_18 [2];
  
  if ((*(longlong *)(param_1 + 0xd90) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0xd90) + 0x30) != '\x01')) {
    local_18[0] = 0;
    local_18[1] = 0;
    cVar1 = FUN_1423c99f0(param_1,local_18,param_1 + 0x5f0);
    if (cVar1 != '\0') {
      FUN_1428208f0(param_1 + 0x3a8,param_1 + 0x600,local_18,1,0);
      (**(code **)(*(longlong *)(param_1 + 0x5b0) + 0x28))();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423cd0b0 FUN_1423cd0b0 body=77 status=ok
// SIG undefined FUN_1423cd0b0(void)

undefined8 FUN_1423cd0b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x728) != 0) {
    cVar1 = FUN_142820890(*(longlong *)(param_1 + 0x728),1,0xffffffff);
    if (cVar1 != '\0') {
      lVar2 = operator_new(0x470);
      if (lVar2 != 0) {
        uVar3 = FUN_1427eef70(lVar2,param_1);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1423cd100 FUN_1423cd100 body=450 status=ok
// SIG undefined FUN_1423cd100(void)

undefined8 * FUN_1423cd100(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((*DAT_146af0508 == 0) && (cVar1 = FUN_142371b40(), cVar1 != '\0')) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)operator_new(0x210);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_14235dea0(puVar2,param_1);
  *puVar2 = &PTR__scalar_deleting_destructor__145072b40;
  fVar6 = *(float *)(param_1 + 0x480);
  fVar3 = 0.0;
  if ((0.0 <= fVar6) && (fVar3 = fVar6, 89.0 <= fVar6)) {
    fVar3 = 89.0;
  }
  fVar4 = *(float *)(param_1 + 0x484) * 0.017453292;
  fVar6 = fVar3 * 0.017453292 + 0.001;
  if ((fVar6 <= fVar4) && (fVar6 = fVar4, 1.5543431 <= fVar4)) {
    fVar6 = 1.5543431;
  }
  *(float *)(puVar2 + 0x3d) = fVar6;
  uVar5 = __libm_sse2_sincosf_(fVar6);
  fVar4 = (float)((ulonglong)uVar5 >> 0x20);
  *(int *)(puVar2 + 0x3f) = (int)uVar5;
  *(float *)(puVar2 + 0x3e) = fVar4;
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar3 * 0.017453292);
  *(float *)((longlong)puVar2 + 0x1ec) = fVar3;
  *(float *)((longlong)puVar2 + 500) = 1.0 / (fVar3 - fVar4);
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar6);
  *(float *)((longlong)puVar2 + 0x1fc) = 1.0 / fVar6;
  fVar3 = *(float *)(param_1 + 0x488) * 0.017453292;
  fVar6 = 0.001;
  if ((0.001 <= fVar3) && (fVar6 = fVar3, 1.5543431 <= fVar3)) {
    fVar6 = 1.5543431;
  }
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar6);
  *(float *)(puVar2 + 0x40) = fVar3;
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 * 0.5);
  *(float *)((longlong)puVar2 + 0x204) = 1.0 / (fVar6 - fVar3);
  return puVar2;
}



// FUNCTION 1423cd2d0 FUN_1423cd2d0 body=57 status=ok
// SIG undefined FUN_1423cd2d0(void)

undefined8 FUN_1423cd2d0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_1468b616c == '\0') {
    lVar1 = operator_new(0xde0);
    if (lVar1 != 0) {
      uVar2 = FUN_1423c3f60(lVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1423cd310 FUN_1423cd310 body=332 status=ok
// SIG undefined FUN_1423cd310(void)

undefined8 * FUN_1423cd310(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1450753b8;
  *(undefined1 *)(plVar6 + 10) = 0;
  plVar6[0xb] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1423cd460 FUN_1423cd460 body=332 status=ok
// SIG undefined FUN_1423cd460(void)

undefined8 * FUN_1423cd460(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1450753c8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1423cd5b0 CycleTime body=195 status=ok
// SIG undefined CycleTime(void)

void CycleTime(float param_1,float param_2,float *param_3,uint *param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3;
  fVar4 = param_2 - param_1;
  if (fVar1 <= param_2) {
    fVar3 = fVar1;
    if (fVar1 < param_1) {
      fVar3 = (fVar1 - param_1) / fVar4;
      uVar2 = (int)ROUND((fVar3 + fVar3) - 0.5) >> 1;
      *param_4 = uVar2;
      fVar3 = *param_3 - (float)(int)uVar2 * fVar4;
      goto LAB_1423cd63a;
    }
  }
  else {
    fVar3 = (param_2 - fVar1) / fVar4;
    uVar2 = (int)ROUND((fVar3 + fVar3) - 0.5) >> 1;
    *param_4 = uVar2;
    fVar3 = (float)(int)uVar2 * fVar4 + *param_3;
LAB_1423cd63a:
    *param_3 = fVar3;
  }
  if ((fVar3 != param_2) || (param_1 <= fVar1)) {
    if (fVar3 != param_1) goto LAB_1423cd65f;
  }
  else {
    *param_3 = param_1;
  }
  if (param_2 < fVar1) {
    *param_3 = param_2;
  }
LAB_1423cd65f:
  uVar2 = (int)*param_4 >> 0x1f;
  *param_4 = (*param_4 ^ uVar2) - uVar2;
  return;
}



// FUNCTION 1423cd680 DeallocateHandle body=176 status=ok
// SIG undefined DeallocateHandle(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FKeyHandleLookupTable::DeallocateHandle(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  lVar2 = *param_1;
  lVar1 = (longlong)param_2 * 8;
  bVar5 = *(char *)(lVar2 + 4 + lVar1) != '\0';
  if (bVar5) {
    local_18 = *(undefined4 *)(lVar2 + lVar1);
    *(undefined1 *)(lVar2 + 4 + lVar1) = 0;
  }
  iVar4 = (int)param_1[1];
  iVar3 = (iVar4 - param_2) + -1;
  local_14 = bVar5;
  if (iVar3 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + lVar1),(void *)(*param_1 + (longlong)(param_2 + 1) * 8),
               (longlong)iVar3 << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  if (bVar5) {
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 2,&local_18);
  }
  return;
}



// FUNCTION 1423cd730 DeleteKey body=274 status=ok
// SIG undefined DeleteKey(void)

void FRichCurve::DeleteKey(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res10 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  longlong local_18;
  char local_10;
  char local_f;
  
  local_res10[0] = param_2;
  iVar1 = FIndexedCurve::GetIndex();
  iVar3 = *(int *)(param_1 + 0x68);
  iVar2 = (iVar3 - iVar1) + -1;
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 * 0x1c + *(longlong *)(param_1 + 0x60)),
               (void *)((longlong)(iVar1 + 1) * 0x1c + *(longlong *)(param_1 + 0x60)),
               (longlong)iVar2 * 0x1c);
    iVar3 = *(int *)(param_1 + 0x68);
  }
  *(int *)(param_1 + 0x68) = iVar3 + -1;
  TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink(param_1 + 0x60);
  AutoSetTangents(param_1,0);
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Remove(param_1 + 8,local_res10);
  FKeyHandleMap::CreateIterator(param_1 + 8,&local_48);
  if (local_2c < *(int *)(local_38 + 0x18)) {
    do {
      iVar3 = *(int *)(*local_48 + 4 + (longlong)local_2c * 0x10);
      if (iVar1 <= iVar3) {
        *(int *)(*local_48 + 4 + (longlong)local_2c * 0x10) = iVar3 + -1;
      }
      local_30 = local_30 & ~local_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  if ((local_10 != '\0') && (local_f != '\0')) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
    ConditionalRehash(local_18,*(int *)(local_18 + 8) - *(int *)(local_18 + 0x34),1);
  }
  return;
}



// FUNCTION 1423cd850 DestroyObject body=66 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FTextRenderComponentMIDCache::FMIDData,SharedPointerInternals::DefaultDeleter<FTextRenderComponentMIDCache::FMIDData>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x28);
    return;
  }
  return;
}



// FUNCTION 1423cd8a0 FUN_1423cd8a0 body=121 status=ok
// SIG undefined FUN_1423cd8a0(void)

void FUN_1423cd8a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((char)param_1[0x25] == '\x03') && (param_1[0x8c] != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    plVar1 = *(longlong **)(lVar2 + 0x140);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x818))(plVar1,param_1);
    }
    (**(code **)(*param_1 + 0x770))(param_1);
  }
  (**(code **)(*param_1 + 0x780))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::RemoveController(uVar3,param_1);
  FUN_142227880(param_1);
  return;
}



// FUNCTION 1423cd920 FUN_1423cd920 body=32 status=ok
// SIG undefined FUN_1423cd920(void)

void FUN_1423cd920(longlong *param_1)

{
  FUN_142227880();
                    /* WARNING: Could not recover jumptable at 0x0001423cd939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}



// FUNCTION 1423cd940 FUN_1423cd940 body=146 status=ok
// SIG undefined FUN_1423cd940(void)

void FUN_1423cd940(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((((*(byte *)(param_1 + 0x4cc) & 1) != 0) && (*(longlong *)(param_1 + 0x168) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x168) + 400) != 0)) &&
     (lVar2 = FUN_14238b320(), lVar2 != 0)) {
    lVar3 = FUN_1429d7ab0();
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
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x418))
                (*(longlong **)(param_1 + 0x168),&DAT_146532190);
    }
  }
  return;
}



// FUNCTION 1423cd9e0 FUN_1423cd9e0 body=417 status=ok
// SIG undefined FUN_1423cd9e0(void)

void FUN_1423cd9e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar1 = (longlong *)(param_2 + 0x98);
  if (*(longlong *)(param_1 + 0x488) == 0) {
    if (*(longlong **)(param_1 + 0x460) == (longlong *)0x0) {
      local_68[1] = 0xf;
      local_res8[0] = 0;
      local_68[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
      FGenericPlatformString::Memcpy(local_68[0],L"NO PlayerState",0x1e);
      FUN_1428a6fb0(plVar1,local_68,local_res8);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x460) + 0x640))();
    }
    FUN_142228330(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    local_38 = 0x3f800000;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_38);
    local_res8[0] = 0;
    local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x18);
    FName::ToString(&local_res10,&local_48);
    local_68[0] = *(longlong *)(param_1 + 0x18);
    puVar2 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    FName::ToString(local_68,local_68 + 2);
    puVar3 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FString::PrintfImpl(&local_38,L"CONTROLLER %s Pawn %s",puVar3,puVar2);
    FUN_1428a6fb0(plVar1,&local_38,local_res8);
    if (CONCAT44(uStack_34,local_38) != 0) {
      FMemory::Free();
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423cdb90 FUN_1423cdb90 body=1204 status=ok
// SIG undefined FUN_1423cdb90(void)

undefined8 FUN_1423cdb90(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_e8;
  float local_e0 [2];
  longlong local_d8;
  uint local_d0;
  uint local_cc;
  undefined1 local_c8 [144];
  
  if ((((*(longlong *)(param_1 + 0x728) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x160), lVar2 != 0)) &&
      ((*(byte *)(lVar2 + 0x28) & 1) == 0)) && ((*(uint *)(lVar2 + 0x28) >> 1 & 1) != 0)) {
    local_e8 = 0x3f8000003f800000;
    local_e0[0] = 1.0;
    if (*(char *)(param_1 + 0x818) == '\0') {
      pfVar10 = (float *)&local_e8;
    }
    else if (*(char *)(param_1 + 0x818) == '\x01') {
      pfVar10 = (float *)((longlong)&local_e8 + 4);
    }
    else {
      pfVar10 = local_e0;
    }
    iVar15 = *(int *)(lVar2 + 0x58);
    uVar13 = 0;
    *pfVar10 = 0.0;
    local_d8 = 0;
    local_d0 = 0;
    iVar3 = *(int *)(lVar2 + 0x38);
    if (*(int *)(lVar2 + 0x38) <= iVar15) {
      iVar3 = iVar15;
    }
    local_cc = 0;
    uVar18 = uVar13;
    if (0 < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (&local_d8,iVar3);
      iVar15 = *(int *)(lVar2 + 0x58);
      uVar18 = (ulonglong)local_cc;
    }
    fVar9 = local_e0[0];
    fVar8 = local_e8._4_4_;
    fVar7 = (float)local_e8;
    lVar11 = local_d8;
    uVar16 = uVar13;
    uVar17 = uVar13;
    if (0 < iVar15) {
      do {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + uVar17);
        local_e0[0] = *(float *)(*(longlong *)(lVar2 + 0x50) + 8 + uVar17);
        fVar19 = (float)uVar1;
        local_e8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        fVar25 = local_e0[0] * fVar9;
        fVar24 = local_e8._4_4_ * fVar8;
        fVar23 = fVar19 * fVar7;
        if ((*(char *)(param_1 + 0x818) != '\0') &&
           (fVar19 = local_e0[0], *(char *)(param_1 + 0x818) == '\x01')) {
          fVar19 = local_e8._4_4_;
        }
        local_e8 = uVar1;
        pfVar10 = (float *)FUN_1423cba80(param_1,local_c8,fVar19);
        uVar12 = local_d0;
        fVar19 = *pfVar10;
        fVar4 = pfVar10[1];
        fVar5 = pfVar10[2];
        fVar6 = pfVar10[3];
        fVar23 = fVar23 * pfVar10[8];
        fVar24 = fVar24 * pfVar10[9];
        fVar25 = fVar25 * pfVar10[10];
        fVar20 = fVar25 * fVar4 - fVar24 * fVar5;
        fVar21 = fVar23 * fVar5 - fVar25 * fVar19;
        fVar22 = fVar24 * fVar19 - fVar23 * fVar4;
        fVar20 = fVar20 + fVar20;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        local_e0[0] = (fVar21 * fVar19 - fVar20 * fVar4) + fVar6 * fVar22 + fVar25 + pfVar10[6];
        local_d0 = local_d0 + 1;
        local_e8 = CONCAT44((fVar20 * fVar5 - fVar22 * fVar19) + fVar6 * fVar21 + fVar24 +
                            pfVar10[5],
                            (fVar22 * fVar4 - fVar21 * fVar5) + fVar6 * fVar20 + fVar23 + pfVar10[4]
                           );
        if ((int)uVar18 < (int)local_d0) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_d8,uVar12);
          uVar18 = (ulonglong)local_cc;
          lVar11 = local_d8;
        }
        uVar14 = (int)uVar16 + 1;
        *(undefined8 *)(lVar11 + (longlong)(int)uVar12 * 0xc) = local_e8;
        *(float *)(lVar11 + 8 + (longlong)(int)uVar12 * 0xc) = local_e0[0];
        uVar16 = (ulonglong)uVar14;
        uVar17 = uVar17 + 0xc;
      } while ((int)uVar14 < *(int *)(lVar2 + 0x58));
    }
    (**(code **)(*param_2 + 0x38))
              (param_2,lVar11,local_d0,*(undefined8 *)(lVar2 + 0x60),*(undefined4 *)(lVar2 + 0x68),
               param_1 + 0x210);
    uVar16 = uVar13;
    if (((int)uVar18 < 0) && (local_d0 = 0, uVar16 = 0, (int)uVar18 != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (&local_d8,0);
      uVar18 = (ulonglong)local_cc;
      uVar16 = (ulonglong)local_d0;
      lVar11 = local_d8;
    }
    uVar17 = uVar13;
    if (0 < *(int *)(lVar2 + 0x38)) {
      do {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + uVar17);
        local_e0[0] = *(float *)(*(longlong *)(lVar2 + 0x30) + 8 + uVar17);
        fVar19 = (float)uVar1;
        local_e8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        fVar25 = local_e0[0] * fVar9;
        fVar24 = local_e8._4_4_ * fVar8;
        fVar23 = fVar19 * fVar7;
        if ((*(char *)(param_1 + 0x818) != '\0') &&
           (fVar19 = local_e0[0], *(char *)(param_1 + 0x818) == '\x01')) {
          fVar19 = local_e8._4_4_;
        }
        local_e8 = uVar1;
        pfVar10 = (float *)FUN_1423cba80(param_1,local_c8,fVar19);
        fVar19 = *pfVar10;
        fVar4 = pfVar10[1];
        fVar5 = pfVar10[2];
        fVar6 = pfVar10[3];
        fVar23 = fVar23 * pfVar10[8];
        fVar24 = fVar24 * pfVar10[9];
        fVar25 = fVar25 * pfVar10[10];
        fVar20 = fVar25 * fVar4 - fVar24 * fVar5;
        fVar21 = fVar23 * fVar5 - fVar25 * fVar19;
        fVar22 = fVar24 * fVar19 - fVar23 * fVar4;
        fVar20 = fVar20 + fVar20;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        local_e0[0] = (fVar21 * fVar19 - fVar20 * fVar4) + fVar6 * fVar22 + fVar25 + pfVar10[6];
        iVar15 = (int)uVar16;
        local_d0 = iVar15 + 1;
        local_e8 = CONCAT44((fVar20 * fVar5 - fVar22 * fVar19) + fVar6 * fVar21 + fVar24 +
                            pfVar10[5],
                            (fVar22 * fVar4 - fVar21 * fVar5) + fVar6 * fVar20 + fVar23 + pfVar10[4]
                           );
        if ((int)uVar18 < (int)local_d0) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_d8,uVar16);
          uVar18 = (ulonglong)local_cc;
          lVar11 = local_d8;
        }
        uVar16 = (ulonglong)local_d0;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        *(undefined8 *)(lVar11 + (longlong)iVar15 * 0xc) = local_e8;
        *(float *)(lVar11 + 8 + (longlong)iVar15 * 0xc) = local_e0[0];
        uVar17 = uVar17 + 0xc;
      } while ((int)uVar12 < *(int *)(lVar2 + 0x38));
    }
    (**(code **)(*param_2 + 0x38))
              (param_2,lVar11,uVar16,*(undefined8 *)(lVar2 + 0x40),*(undefined4 *)(lVar2 + 0x48),
               param_1 + 0x210);
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
    return 0;
  }
  return 1;
}



// FUNCTION 1423ce050 FUN_1423ce050 body=140 status=ok
// SIG undefined FUN_1423ce050(void)

undefined8 FUN_1423ce050(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  if (((*(longlong *)(param_1 + 0x728) == 0) ||
      (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x728) + 0x160), plVar1 == (longlong *)0x0))
     || ((local_18 = (float)*(undefined8 *)(param_1 + 0x230), local_18 == 0.0 &&
         ((fStack_14 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x230) >> 0x20),
          fStack_14 == 0.0 &&
          (fStack_10 = (float)*(undefined8 *)(param_1 + 0x238), fStack_10 == 0.0)))))) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x744) & 4) == 0) {
    bVar2 = *(byte *)(plVar1 + 5);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x744) >> 3;
  }
  if (((bVar2 & 1) == 0) &&
     (cVar3 = (**(code **)(*plVar1 + 0x280))(plVar1,param_1 + 0x210,param_2), cVar3 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423ce0e0 FUN_1423ce0e0 body=189 status=ok
// SIG undefined FUN_1423ce0e0(void)

void FUN_1423ce0e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *param_1;
  lVar2 = param_1[2];
  *(longlong *)(lVar1 + 0x3e0) = param_1[1];
  *(longlong *)(lVar1 + 1000) = lVar2;
  lVar2 = param_1[4];
  *(longlong *)(lVar1 + 0x3f0) = param_1[3];
  *(longlong *)(lVar1 + 0x3f8) = lVar2;
  lVar2 = param_1[6];
  *(longlong *)(lVar1 + 0x400) = param_1[5];
  *(longlong *)(lVar1 + 0x408) = lVar2;
  lVar2 = param_1[8];
  *(longlong *)(lVar1 + 0x410) = param_1[7];
  *(longlong *)(lVar1 + 0x418) = lVar2;
  lVar2 = param_1[10];
  *(longlong *)(lVar1 + 0x420) = param_1[9];
  *(longlong *)(lVar1 + 0x428) = lVar2;
  *(longlong *)(lVar1 + 0x430) = param_1[0xb];
  *(uint *)(*param_1 + 0x448) = (uint)*(byte *)(param_1 + 0xc);
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x438) = *(undefined8 *)((longlong)param_1 + 100);
  *(undefined4 *)(lVar1 + 0x440) = *(undefined4 *)((longlong)param_1 + 0x6c);
  *(int *)(*param_1 + 0x450) = (int)param_1[0xe];
  *(undefined4 *)(*param_1 + 0x44c) = *(undefined4 *)((longlong)param_1 + 0x74);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1423ce1a0 FUN_1423ce1a0 body=34 status=ok
// SIG undefined FUN_1423ce1a0(void)

bool FUN_1423ce1a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x728) != 0) {
    lVar1 = FUN_14281be90();
  }
  return lVar1 != 0;
}



// FUNCTION 1423ce1d0 FUN_1423ce1d0 body=1360 status=ok
// SIG undefined FUN_1423ce1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423ce1d0(longlong *param_1,float *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
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
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 local_res18 [4];
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float local_f0;
  undefined8 local_e8;
  float fStack_e0;
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  fVar2 = param_2[0xc];
  fVar3 = param_2[0xd];
  fVar4 = param_2[0xe];
  fVar5 = param_2[0xf];
  uVar22 = 0;
  fVar6 = param_2[8];
  fVar7 = param_2[9];
  fVar8 = param_2[10];
  fVar9 = param_2[0xb];
  lVar23 = 0;
  fVar10 = param_2[4];
  fVar11 = param_2[5];
  fVar12 = param_2[6];
  fVar13 = param_2[7];
  fVar14 = *param_2;
  fVar15 = param_2[1];
  fVar16 = param_2[2];
  fVar17 = param_2[3];
  uStack_fc = 0x3f800000;
  do {
    uVar20 = 0;
    lVar21 = 0;
    do {
      uVar19 = 0;
      do {
        if (uVar22 == 0) {
          fVar27 = 1.0;
        }
        else {
          fVar27 = 0.0;
        }
        if (uVar20 == 0) {
          fVar26 = 1.0;
        }
        else {
          fVar26 = -1.0;
        }
        iVar18 = (int)uVar19;
        if (iVar18 == 0) {
          fVar24 = 1.0;
        }
        else {
          fVar24 = -1.0;
        }
        lVar1 = lVar23 + (lVar21 + uVar19 * 2) * 2;
        fVar25 = 1.0 / (fVar27 * fVar9 + fVar5 * 1.0 + fVar26 * fVar13 + fVar24 * fVar17);
        *(ulonglong *)((longlong)&local_e8 + lVar1 * 0xc) =
             CONCAT44((fVar27 * fVar7 + fVar3 * 1.0 + fVar26 * fVar11 + fVar24 * fVar15) * fVar25,
                      (fVar27 * fVar6 + fVar2 * 1.0 + fVar26 * fVar10 + fVar24 * fVar14) * fVar25);
        (&fStack_e0)[lVar1 * 3] =
             (fVar27 * fVar8 + fVar4 * 1.0 + fVar26 * fVar12 + fVar24 * fVar16) * fVar25;
        if (uVar22 == 0) {
          fStack_100 = 1.0;
        }
        else {
          fStack_100 = 0.0;
        }
        if (uVar20 == 0) {
          fStack_104 = 1.0;
        }
        else {
          fStack_104 = -1.0;
        }
        if (iVar18 + 1U == 0) {
          local_108 = 1.0;
        }
        else {
          local_108 = -1.0;
        }
        lVar1 = lVar23 + (lVar21 + (ulonglong)(iVar18 + 1U) * 2) * 2;
        local_118 = 0;
        uStack_110 = 0x3f80000000000000;
        uVar19 = (ulonglong)(iVar18 + 2U);
        fVar27 = 1.0 / (fStack_100 * fVar9 + fVar5 * 1.0 + fStack_104 * fVar13 + local_108 * fVar17)
        ;
        local_f0 = (fStack_100 * fVar8 + fVar4 * 1.0 + fStack_104 * fVar12 + local_108 * fVar16) *
                   fVar27;
        *(ulonglong *)((longlong)&local_e8 + lVar1 * 0xc) =
             CONCAT44((fStack_100 * fVar7 + fVar3 * 1.0 + fStack_104 * fVar11 + local_108 * fVar15)
                      * fVar27,(fStack_100 * fVar6 + fVar2 * 1.0 +
                               fStack_104 * fVar10 + local_108 * fVar14) * fVar27);
        (&fStack_e0)[lVar1 * 3] = local_f0;
      } while (iVar18 + 2U < 2);
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 1;
    } while (uVar20 < 2);
    uVar22 = uVar22 + 1;
    lVar23 = lVar23 + 1;
  } while (uVar22 < 2);
  local_res18[0] = param_3;
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,&local_e8,local_dc,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_b8,local_ac,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_d0,local_c4,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_a0,local_94,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,&local_e8,local_d0,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_b8,local_a0,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_dc,local_c4,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_ac,local_94,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,&local_e8,local_b8,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_d0,local_a0,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_dc,local_ac,&local_118);
  FLinearColor::FLinearColor(&local_118,local_res18);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_c4,local_94,&local_118);
  return;
}



// FUNCTION 1423ce720 FUN_1423ce720 body=642 status=ok
// SIG undefined FUN_1423ce720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423ce720(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  int iStack_114;
  longlong local_110 [15];
  longlong *local_98;
  undefined8 local_90;
  undefined2 local_88;
  uint local_84;
  undefined4 local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x628) != '\0') {
    puVar6 = *(undefined4 **)(param_1 + 0xd70);
    puVar1 = puVar6 + (longlong)*(int *)(param_1 + 0xd78) * 6;
    for (; puVar6 != puVar1; puVar6 = puVar6 + 6) {
      local_98 = (longlong *)0x0;
      local_84 = local_84 & 0xf98000e0 | 0x18000e0;
      local_90 = 1;
      local_88 = 0xffff;
      local_80 = 0;
      local_78 = 0;
      lStack_70 = 0;
      local_68 = 0;
      local_60 = 0xffffffff;
      local_5c = 0;
      FUN_1408ca0e0(local_110,0);
      plVar4 = local_110;
      if (local_98 != (longlong *)0x0) {
        plVar4 = local_98;
      }
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar4[8] = 1;
        plVar4[10] = 0;
        *(undefined4 *)(plVar4 + 0xb) = 0xffffffff;
        *(undefined4 *)((longlong)plVar4 + 0x5c) = 0;
        plVar4[0xc] = 0x3f800000;
        *(undefined2 *)(plVar4 + 0xd) = 0;
        plVar4[0xe] = 0;
      }
      plVar4 = local_110;
      if (local_98 != (longlong *)0x0) {
        plVar4 = local_98;
      }
      plVar4[2] = param_1 + 0x5b0;
      lStack_70 = param_1 + 0x600;
      local_68 = (**(code **)(**(longlong **)(puVar6 + 4) + 0x2a8))(*(longlong **)(puVar6 + 4),0,0);
      *plVar4 = param_1 + 0x188;
      local_118 = *puVar6;
      lVar2 = plVar4[7];
      iVar3 = puVar6[1];
      iStack_114 = iVar3 / 3 + (iVar3 >> 0x1f) +
                   (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
      iVar3 = (int)lVar2 + 1;
      *(int *)(plVar4 + 7) = iVar3;
      if (*(int *)((longlong)plVar4 + 0x3c) < iVar3) {
        TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
        ::ResizeGrow(plVar4 + 5);
      }
      plVar5 = (longlong *)plVar4[6];
      if ((longlong *)plVar4[6] == (longlong *)0x0) {
        plVar5 = plVar4 + 5;
      }
      plVar5[(int)lVar2] = CONCAT44(iStack_114,local_118);
      *(undefined4 *)(plVar4 + 9) = puVar6[2];
      *(int *)((longlong)plVar4 + 0x4c) = puVar6[3] + puVar6[2] + -1;
      local_88 = (ushort)local_88._1_1_ << 8;
      local_84 = (*(byte *)(param_1 + 0x18) & 1) << 3 | local_84 & 0xffe00fe7;
      (**(code **)(*param_2 + 0x10))(param_2,local_110,0x3f800000);
      FUN_1408bbda0(local_110);
    }
  }
  return;
}



// FUNCTION 1423ce9b0 FUN_1423ce9b0 body=125 status=ok
// SIG undefined FUN_1423ce9b0(void)

void FUN_1423ce9b0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x1c;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<224,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1423cea30 FUN_1423cea30 body=643 status=ok
// SIG undefined FUN_1423cea30(void)

void FUN_1423cea30(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar4 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar5) goto LAB_1423ceb04;
      uVar6 = puVar11[lVar7 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_1423ceb04:
      iStack_64 = iVar4;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar4) {
    do {
      lVar7 = (longlong)iStack_3c * 0xbd0 + *param_1;
      *(undefined4 *)(lVar7 + 0xb10) = 0;
      if (*(longlong *)(lVar7 + 0xb08) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar7 + 0xac8);
      if (*(longlong *)(lVar7 + 0xab0) != 0) {
        FMemory::Free();
      }
      lVar9 = 8;
      plVar8 = (longlong *)(lVar7 + 0xb08);
      do {
        lVar9 = lVar9 + -1;
        *(undefined4 *)(plVar8 + -0x28) = 0;
        if (plVar8[-0x29] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar8 + -0x31);
        if (plVar8[-0x34] != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + -0x29;
      } while (lVar9 != 0);
      plVar8 = *(longlong **)(lVar7 + 0x20);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1423de710(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar6 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1423cecc0 FUN_1423cecc0 body=354 status=ok
// SIG undefined FUN_1423cecc0(void)

void FUN_1423cecc0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_1423ce9b0(param_1 + 2,0);
  puVar1 = (undefined8 *)param_1[6];
  for (iVar2 = (int)param_1[7]; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1[0xc] != 0) {
      FMemory::Free();
    }
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x1a;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  puVar1 = (undefined8 *)param_1[4];
  for (iVar2 = (int)param_1[5]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x1a;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x16;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  puVar1 = (undefined8 *)param_1[8];
  for (iVar2 = (int)param_1[9]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x11;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 8,0);
  }
  FUN_1426c0c50(param_1);
  return;
}



// FUNCTION 1423cee30 EnsureAllIndicesHaveHandles body=835 status=ok
// SIG undefined EnsureAllIndicesHaveHandles(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FKeyHandleMap::EnsureAllIndicesHaveHandles(longlong *param_1,int param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_138 [32];
  uint local_118 [2];
  undefined8 local_110;
  uint *puStack_108;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  uint local_f0 [2];
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined1 local_88 [64];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar10 = 0;
  local_48 = (undefined1 *)0x0;
  puVar1 = (uint *)(param_1 + 2);
  local_40 = 0;
  uVar9 = *(uint *)(param_1 + 5);
  local_110 = (uint *)0x100000000;
  uStack_fc = 0;
  uStack_f8 = 0;
  if (uVar9 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    uVar7 = uVar10;
    uVar14 = uVar10;
    while (uVar4 == 0) {
      iVar5 = (int)uVar7;
      uStack_f8 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_f8;
      uVar7 = (ulonglong)(iVar5 + 1U);
      uVar3 = (ulonglong)local_110 >> 0x20;
      local_110 = (uint *)CONCAT44((int)uVar3,iVar5 + 1U);
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1423cef25;
      uVar4 = puVar11[(longlong)iVar5 + 1];
    }
    uVar4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_110 = (uint *)CONCAT44(uVar4,SUB84(local_110,0));
    if (uVar4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_fc = (uStack_f8 - iVar5) + 0x1f;
    if ((int)uVar9 < (int)uStack_fc) {
LAB_1423cef25:
      uStack_fc = uVar9;
    }
  }
  uVar4 = *(uint *)(param_1 + 5);
  uStack_c8 = 0xffffffff;
  uStack_c4 = uStack_fc;
  local_c0 = CONCAT44(uStack_f4,uStack_f8);
  local_118[0] = -1 << ((byte)uVar4 & 0x1f);
  uStack_b0 = local_110;
  puVar11 = uStack_b0;
  uVar15 = uVar4 & 0xffffffe0;
  local_b8._0_4_ = SUB84(param_1,0);
  local_b8._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_b0._0_4_ = SUB84(local_110,0);
  uStack_b0._4_4_ = (uint)((ulonglong)local_110 >> 0x20);
  local_e0 = (undefined4)local_b8;
  uStack_dc = local_b8._4_4_;
  uStack_d8 = (undefined4)uStack_b0;
  uStack_d4 = uStack_b0._4_4_;
  uVar7 = uVar10;
  uVar14 = uVar10;
  puStack_108 = puVar1;
  local_100 = local_118[0];
  uStack_fc = uVar4;
  local_d0 = puVar1;
  local_b8 = param_1;
  uStack_b0 = puVar11;
  puStack_a8 = puVar1;
  uStack_98 = local_c0;
  uStack_a0 = uStack_c8;
  uStack_9c = uStack_c4;
  if (uVar4 != uVar9) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & local_118[0];
    iVar5 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1423cf00f;
      uVar8 = puVar11[(longlong)iVar5 + 1];
      local_100 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar5 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_fc = (uVar15 - iVar5) + 0x1f;
    uVar4 = uStack_fc;
    if ((int)uVar9 < (int)uStack_fc) {
LAB_1423cf00f:
      uStack_fc = uVar9;
      uVar4 = uVar9;
    }
  }
  while( true ) {
    iVar5 = (int)uVar14;
    if (((uStack_c4 == uVar4) && (local_d0 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_dc,local_e0) == param_1)) break;
    puVar12 = (undefined4 *)
              ((longlong)(int)uStack_c4 * 0x10 + *(longlong *)CONCAT44(uStack_dc,local_e0));
    if (param_2 <= (int)puVar12[1]) {
      local_40 = CONCAT44(local_40._4_4_,iVar5 + 1);
      if ((int)uVar7 < iVar5 + 1) {
        TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_88,uVar14);
      }
      puVar13 = local_88;
      if (local_48 != (undefined1 *)0x0) {
        puVar13 = local_48;
      }
      *(undefined4 *)(puVar13 + (longlong)iVar5 * 4) = *puVar12;
    }
    uStack_c8 = uStack_c8 & ~uStack_d4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
    uVar7 = local_40 >> 0x20;
    uVar14 = local_40 & 0xffffffff;
  }
  puVar13 = local_88;
  if (local_48 != (undefined1 *)0x0) {
    puVar13 = local_48;
  }
  puVar2 = puVar13 + (longlong)iVar5 * 4;
  for (; puVar13 != puVar2; puVar13 = puVar13 + 4) {
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Remove(param_1,puVar13);
  }
  if (0 < param_2) {
    do {
      local_f0[0] = (uint)uVar10;
      lVar6 = TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
              ::FindKey(param_1,uVar10);
      if (lVar6 == 0) {
        DAT_146531fa0 = DAT_146531fa0 + 1;
        local_110 = local_118;
        puStack_108 = local_f0;
        local_118[0] = DAT_146531fa0;
        TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(param_1,local_e8,&local_110,0);
      }
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < param_2);
  }
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 1423cf180 Eval body=742 status=ok
// SIG undefined Eval(void)

void FRichCurve::Eval(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint local_res8 [2];
  float local_res10 [2];
  
  lVar8 = (longlong)*(int *)(param_1 + 0x68);
  local_res10[0] = param_2;
  if (1 < *(int *)(param_1 + 0x68)) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    fVar1 = *(float *)(lVar4 + 4);
    if (fVar1 < param_2) {
      fVar2 = *(float *)(lVar8 * 0x1c + -0x18 + lVar4);
      if ((param_2 < fVar2) || (cVar3 = *(char *)(param_1 + 0x59), (byte)(cVar3 - 3U) < 2))
      goto LAB_1423cf243;
      local_res8[0] = 0;
      CycleTime(param_1,fVar2,local_res10,local_res8);
    }
    else {
      cVar3 = *(char *)(param_1 + 0x58);
      if ((byte)(cVar3 - 3U) < 2) goto LAB_1423cf243;
      local_res8[0] = 0;
      fVar2 = *(float *)(lVar8 * 0x1c + -0x18 + lVar4);
      CycleTime(param_1,fVar2,local_res10,local_res8);
    }
    param_2 = local_res10[0];
    if ((cVar3 != '\x01') && (cVar3 == '\x02')) {
      uVar7 = local_res8[0] & 0x80000001;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
      }
      if (uVar7 == 1) {
        param_2 = (fVar2 - local_res10[0]) + fVar1;
      }
    }
  }
LAB_1423cf243:
  iVar6 = (int)lVar8;
  if ((((iVar6 != 0) && (1 < iVar6)) &&
      (lVar4 = *(longlong *)(param_1 + 0x60),
      *(float *)(lVar4 + 4) <= param_2 && param_2 != *(float *)(lVar4 + 4))) &&
     (param_2 < *(float *)(lVar8 * 0x1c + -0x18 + lVar4))) {
    iVar9 = 1;
    iVar6 = iVar6 + -2;
    while (iVar5 = iVar6, 0 < iVar5) {
      iVar6 = iVar5 / 2;
      if (*(float *)((longlong)(iVar6 + iVar9) * 0x1c + 4 + lVar4) <= param_2) {
        iVar9 = iVar6 + iVar9 + 1;
        iVar6 = iVar5 + (-1 - iVar6);
      }
    }
    EvalForTwoKeys((longlong)(iVar9 + -1) * 0x1c + lVar4,(longlong)iVar9 * 0x1c + lVar4,param_2);
  }
  return;
}



// FUNCTION 1423cf470 EvalForTwoKeys body=306 status=ok
// SIG undefined EvalForTwoKeys(void)

float EvalForTwoKeys(char *param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  if ((0.0 < fVar6) && (*param_1 != '\x01')) {
    fVar4 = *(float *)(param_2 + 8);
    fVar1 = *(float *)(param_1 + 8);
    fVar5 = (param_3 - *(float *)(param_1 + 4)) / fVar6;
    if (*param_1 == '\0') {
      fVar4 = fVar4 - fVar1;
    }
    else {
      fVar3 = fVar4 - fVar6 * *(float *)(param_2 + 0xc) * 0.33333334;
      fVar7 = fVar6 * *(float *)(param_1 + 0x14) * 0.33333334 + fVar1;
      fVar6 = (fVar3 - fVar7) * fVar5 + fVar7;
      fVar2 = (fVar6 - ((fVar7 - fVar1) * fVar5 + fVar1)) + (fVar7 - fVar1);
      fVar4 = ((((((fVar4 - fVar3) * fVar5 + fVar3) - fVar6) + (fVar3 - fVar7)) * fVar5 + fVar7) -
              (fVar2 * fVar5 + fVar1)) + fVar2;
    }
    return fVar4 * fVar5 + fVar1;
  }
  return *(float *)(param_1 + 8);
}



// FUNCTION 1423cf5b0 Exec body=117 status=ok
// SIG undefined Exec(void)

undefined8
FStreamingManagerCollection::Exec
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x10));
      cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
      if (cVar2 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  return 0;
}



// FUNCTION 1423cf630 ExecuteTask body=252 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`UMediaCapture::OnEndFrame_GameThread'::`27'::FMediaOutputCaptureFrameCreateTextureName,<lambda_3e496ce9ee409d7ff0cc8fd2564c1a4f>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1423c66b0(param_1 + 2,uVar3);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_1450753b8;
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 0x48);
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



// FUNCTION 1423cf730 FUN_1423cf730 body=245 status=ok
// SIG undefined FUN_1423cf730(void)

void FUN_1423cf730(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  if (param_1[3] != 0) {
    FUN_14273c920(param_1[3],*(undefined4 *)(param_1 + 2));
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1450753c8;
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



// FUNCTION 1423cf830 ExecuteTask body=246 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`USplineMeshComponent::UpdateRenderStateAndCollision_Internal'::`5'::EURCMacro_UpdateSplineParamsRTCommand>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1423ce0e0(param_1 + 2,param_3,param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145072470;
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x48);
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



// FUNCTION 1423cf930 FUN_1423cf930 body=442 status=ok
// SIG undefined FUN_1423cf930(void)

void FUN_1423cf930(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong local_48 [4];
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x760)) {
    lVar11 = 0;
    do {
      FOutputDevice::LogfImpl
                (param_2,L"%sCustomProperties ",&DAT_144cc82be + (longlong)param_3 * -2);
      lVar9 = 0;
      lVar8 = *(longlong *)(param_1 + 0x758) + lVar11;
      iVar2 = 0;
      iVar1 = *(int *)(lVar8 + 0x28);
      plVar6 = (longlong *)(lVar8 + 0x30);
      lVar3 = lVar9;
      plVar5 = plVar6;
      if (plVar6 <= (longlong *)(lVar8 + 0x40U)) {
        do {
          lVar4 = lVar3 + 1;
          if (*plVar5 == 0) {
            lVar4 = lVar3;
          }
          iVar2 = (int)lVar4;
          lVar9 = lVar9 + 1;
          lVar3 = lVar4;
          plVar5 = plVar5 + 1;
        } while (lVar9 != 2);
      }
      if (((iVar1 != 0) || (iVar2 != 0)) &&
         (FOutputDevice::LogfImpl
                    (param_2,L"CustomLODData LOD=%d NumOverrideColors=%u ",iVar10,iVar2), iVar1 != 0
         )) {
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_1423cfaf0(lVar8,local_48);
        FOutputDevice::Log(param_2,local_48);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
      }
      uVar7 = 0;
      do {
        lVar3 = *plVar6;
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x54) != 0)) {
          FOutputDevice::LogfImpl(param_2,L" ColorChannelIndex=%u ",uVar7);
          local_48[2] = 0;
          local_48[3] = 0;
          FUN_14272b3a0(lVar3,local_48 + 2);
          FOutputDevice::Log(param_2,local_48 + 2);
          if (local_48[2] != 0) {
            FMemory::Free();
          }
        }
        uVar7 = uVar7 + 1;
        plVar6 = plVar6 + 1;
      } while (uVar7 < 2);
      FOutputDevice::LogfImpl(param_2,&DAT_14506e244);
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0xc0;
    } while (iVar10 < *(int *)(param_1 + 0x760));
  }
  return;
}



// FUNCTION 1423cfaf0 FUN_1423cfaf0 body=1157 status=ok
// SIG undefined FUN_1423cfaf0(void)

void FUN_1423cfaf0(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  void *local_58;
  int local_50;
  void *local_48;
  int local_40;
  void *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_58,L"PaintedVertices(%d)=",*(undefined4 *)(param_1 + 0x28));
  pvVar3 = local_58;
  uVar10 = 0;
  iVar7 = 0;
  if (local_50 != 0) {
    iVar7 = local_50 + -1;
  }
  if (iVar7 != 0) {
    iVar8 = (int)param_2[1];
    iVar4 = (uint)(iVar8 == 0) + iVar7 + iVar8;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  iVar7 = *(int *)(param_1 + 0x28);
  iVar8 = (int)param_2[1] + -1 + iVar7 * 0x7d;
  if ((int)param_2[1] == 0) {
    iVar8 = iVar7 * 0x7d;
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar7 = *(int *)(param_1 + 0x28);
  }
  uVar12 = uVar10;
  if (0 < iVar7) {
    do {
      uVar9 = 0;
      lVar2 = *(longlong *)(param_1 + 0x20);
      FString::PrintfImpl(&local_58,L"((Position=(X=%.6f,Y=%.6f,Z=%.6f),",
                          (double)*(float *)(uVar10 + lVar2),(double)*(float *)(uVar10 + 4 + lVar2),
                          (double)*(float *)(uVar10 + 8 + lVar2));
      pvVar3 = local_58;
      iVar8 = 0;
      iVar7 = iVar8;
      if (local_50 != 0) {
        iVar7 = local_50 + -1;
      }
      if (iVar7 != 0) {
        iVar4 = (int)param_2[1];
        iVar5 = (uint)(iVar4 == 0) + iVar7 + iVar4;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      FString::PrintfImpl(&local_48,L"(Normal=(X=%d,Y=%d,Z=%d,W=%d),",
                          (double)*(float *)(uVar10 + 0x10 + lVar2),
                          (double)*(float *)(uVar10 + 0x14 + lVar2),
                          (double)*(float *)(uVar10 + 0x18 + lVar2),
                          (double)*(float *)(uVar10 + 0x1c + lVar2));
      pvVar3 = local_48;
      if (local_40 != 0) {
        iVar8 = local_40 + -1;
      }
      if (iVar8 != 0) {
        iVar7 = (int)param_2[1];
        iVar4 = (uint)(iVar7 == 0) + iVar8 + iVar7;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar8 * 2) = 0;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      puVar13 = (undefined1 *)(lVar2 + 0x22 + uVar10);
      do {
        FString::PrintfImpl(&local_38,L"(Color[%u]=(B=%d,G=%d,R=%d,A=%d))",uVar9,puVar13[-2],
                            puVar13[-1],*puVar13,puVar13[1]);
        pvVar3 = local_38;
        if (local_30 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = local_30 + -1;
        }
        if (iVar7 != 0) {
          iVar8 = (int)param_2[1];
          iVar4 = (uint)(iVar8 == 0) + iVar7 + iVar8;
          *(int *)(param_2 + 1) = iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
          *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_38 != (void *)0x0) {
          FMemory::Free();
        }
        if (uVar9 != 1) {
          iVar7 = (int)param_2[1];
          iVar8 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar8 = 0;
          }
          iVar7 = (2 - (uint)(iVar7 != 0)) + iVar7;
          *(int *)(param_2 + 1) = iVar7;
          if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(undefined2 *)(*param_2 + (longlong)iVar8 * 2) = 0x2c;
          *(undefined2 *)(*param_2 + -2 + (longlong)(int)param_2[1] * 2) = 0;
        }
        uVar9 = uVar9 + 1;
        puVar13 = puVar13 + 4;
      } while (uVar9 < 2);
      uVar11 = (int)uVar12 + 1;
      uVar9 = *(uint *)(param_1 + 0x28);
      if (uVar11 != uVar9) {
        iVar7 = (int)param_2[1];
        iVar8 = (2 - (uint)(iVar7 != 0)) + iVar7;
        *(int *)(param_2 + 1) = iVar8;
        if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        lVar2 = *param_2;
        lVar6 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
        *(undefined2 *)(lVar2 + lVar6 * 2) = 0x2c;
        *(undefined2 *)(lVar2 + 2 + lVar6 * 2) = 0;
        uVar9 = *(uint *)(param_1 + 0x28);
      }
      uVar10 = uVar10 + 0x30;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar9);
  }
  iVar7 = (int)param_2[1];
  iVar8 = (2 - (uint)(iVar7 != 0)) + iVar7;
  *(int *)(param_2 + 1) = iVar8;
  if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
  }
  lVar2 = *param_2;
  lVar6 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  *(undefined2 *)(lVar2 + lVar6 * 2) = 0x20;
  *(undefined2 *)(lVar2 + 2 + lVar6 * 2) = 0;
  return;
}



// FUNCTION 1423cff80 FUN_1423cff80 body=24 status=ok
// SIG undefined FUN_1423cff80(void)

void FUN_1423cff80(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001423cff91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x718))(param_1,0x145);
  return;
}



// FUNCTION 1423cffa0 FUN_1423cffa0 body=164 status=ok
// SIG undefined FUN_1423cffa0(void)

wchar_t * FUN_1423cffa0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  
  pwVar4 = *(wchar_t **)(param_1 + 0x488);
  if (pwVar4 != (wchar_t *)0x0) {
    if (param_2 != 0) {
      lVar2 = FUN_1428dfc70();
      lVar3 = param_2;
      do {
        if (lVar3 == lVar2) goto LAB_1423cffe1;
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
    param_2 = 0;
LAB_1423cffe1:
    if ((*(int *)(*(longlong *)(pwVar4 + 8) + 0x90) < *(int *)(param_2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar4 + 8) + 0x88) + (longlong)*(int *)(param_2 + 0x90) * 8)
        != param_2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return pwVar4;
    }
  }
  pwVar4 = AK::MemoryMgr::GetPoolName((long)param_1);
  return pwVar4;
}



// FUNCTION 1423d0050 FindId body=179 status=ok
// SIG undefined FindId(void)

int * TSet<FTextRenderComponentMIDCache::FKey,DefaultKeyFuncs<FTextRenderComponentMIDCache::FKey,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(longlong *)(lVar1 + lVar4 * 0x18) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar4 * 0x18) == param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1423d0110 FindKey body=368 status=ok
// SIG undefined FindKey(void)

longlong TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
         ::FindKey(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = (int)param_1[5];
  local_58 = 0;
  uStack_54 = 1;
  puStack_20 = (uint *)(param_1 + 2);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puStack_20;
    }
    uVar2 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_1423d01d1;
      uVar2 = puVar6[lVar4 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_1423d01d1:
      local_48._4_4_ = iVar1;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar3 = local_48._4_4_ < iVar1;
  local_30 = param_1;
  local_48 = puStack_20;
  if (bVar3) {
    do {
      if (*(int *)(*param_1 + 4 + (longlong)iStack_3c * 0x10) == param_2) {
        return (longlong)iStack_3c * 0x10 + *param_1;
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return 0;
}



// FUNCTION 1423d0280 FindOrAddKeyHandle body=219 status=ok
// SIG undefined FindOrAddKeyHandle(void)

int * FKeyHandleLookupTable::FindOrAddKeyHandle(longlong *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_28 [8];
  int *local_20;
  int *local_18;
  
  if ((param_3 < 0) || (iVar2 = (int)param_1[1], iVar2 <= param_3)) {
    iVar2 = (int)param_1[1];
  }
  else if (*(char *)(*param_1 + 4 + (longlong)param_3 * 8) != '\0') {
    *param_2 = *(int *)(*param_1 + (longlong)param_3 * 8);
    return param_2;
  }
  local_res18[0] = param_3;
  if (0 < (param_3 - iVar2) + 1) {
    TArray<TOptional<FKeyHandle>,FDefaultAllocator>::AddDefaulted(param_1);
  }
  local_res20[0] = DAT_146531fa0 + 1;
  piVar1 = (int *)(*param_1 + (longlong)local_res18[0] * 8);
  DAT_146531fa0 = local_res20[0];
  if (local_res20 != piVar1) {
    if ((char)piVar1[1] != '\0') {
      *(undefined1 *)(piVar1 + 1) = 0;
    }
    *piVar1 = local_res20[0];
    *(undefined1 *)(piVar1 + 1) = 1;
  }
  local_20 = local_res20;
  local_18 = local_res18;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(param_1 + 2,local_28,&local_20,0);
  *param_2 = local_res20[0];
  return param_2;
}



// FUNCTION 1423d0360 FlushResourceStreaming body=29 status=ok
// SIG undefined FlushResourceStreaming(void)

void FlushResourceStreaming(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)IStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x0001423d0379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,0,0);
  return;
}



// FUNCTION 1423d03a0 Get body=315 status=ok
// SIG undefined Get(void)

undefined8 * IStreamingManager::Get(void)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *local_18;
  int local_10;
  
  puVar7 = DAT_146af1738;
  if (DAT_146af1738 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x40);
    puVar7 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_1450718d8;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 1;
      *(undefined4 *)(puVar4 + 5) = 0x40a00000;
      puVar4[6] = 0;
      uVar5 = FCommandLine::Get();
      cVar3 = FParse::Param(uVar5,L"NoTextureStreaming");
      plVar2 = DAT_146b16d40;
      if (cVar3 != '\0') {
        FString::PrintfImpl(&local_18,&DAT_143f3edc0,0);
        puVar8 = &DAT_143f3eda8;
        if (local_10 != 0) {
          puVar8 = local_18;
        }
        (**(code **)(*plVar2 + 0x60))(plVar2,puVar8,0x7000000);
        if (local_18 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      FUN_1423c7920(puVar4,1);
      lVar6 = operator_new(0x120);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)FAudioStreamingManager::FAudioStreamingManager(lVar6);
      }
      puVar4[7] = puVar7;
      iVar1 = *(int *)(puVar4 + 3);
      *(int *)(puVar4 + 3) = iVar1 + 1;
      if (*(int *)((longlong)puVar4 + 0x1c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar4 + 2,iVar1);
      }
      *(undefined8 **)(puVar4[2] + (longlong)iVar1 * 8) = puVar7;
      puVar7 = puVar4;
    }
  }
  DAT_146af1738 = puVar7;
  return puVar7;
}



// FUNCTION 1423d0500 FUN_1423d0500 body=23 status=ok
// SIG undefined FUN_1423d0500(void)

void FUN_1423d0500(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x488) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d050f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x488) + 0x610))();
    return;
  }
  return;
}



// FUNCTION 1423d0520 FUN_1423d0520 body=60 status=ok
// SIG undefined FUN_1423d0520(void)

undefined8 FUN_1423d0520(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x91];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x798))(plVar1);
    return param_2;
  }
  (**(code **)(*param_1 + 0x720))();
  return param_2;
}



// FUNCTION 1423d0560 GetUserWidgetObject body=8 status=ok
// SIG undefined GetUserWidgetObject(void)

undefined8 UWidgetComponent::GetUserWidgetObject(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x488);
}



// FUNCTION 1423d05c0 GetTeleportDistanceThreshold body=9 status=ok
// SIG undefined GetTeleportDistanceThreshold(void)

undefined4 USkeletalMeshComponent::GetTeleportDistanceThreshold(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x820);
}



// FUNCTION 1423d05d0 FUN_1423d05d0 body=9 status=ok
// SIG undefined FUN_1423d05d0(void)

undefined4 FUN_1423d05d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x81c);
}



// FUNCTION 1423d05e0 FUN_1423d05e0 body=233 status=ok
// SIG undefined FUN_1423d05e0(void)

undefined8 * FUN_1423d05e0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0x1f0);
  fVar2 = *(float *)(param_1 + 0x50);
  fVar5 = *(float *)(param_1 + 0x1c0);
  if (fVar1 < 0.707107) {
    fVar3 = *(float *)(param_1 + 0x1f8);
    fVar4 = *(float *)(param_1 + 0xa8);
    *param_2 = CONCAT44(*(float *)(param_1 + 0x40) * fVar5 * fVar1 + *(float *)(param_1 + 0xa4),
                        *(float *)(param_1 + 0x30) * fVar5 * fVar1 + *(float *)(param_1 + 0xa0));
    *(float *)(param_2 + 1) = fVar2 * fVar5 * fVar1 + fVar4;
    *(float *)((longlong)param_2 + 0xc) = fVar5 * fVar3;
    return param_2;
  }
  fVar5 = (0.5 / fVar1) * fVar5;
  fVar1 = *(float *)(param_1 + 0xa8);
  *param_2 = CONCAT44(fVar5 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0xa4),
                      fVar5 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xa0));
  *(float *)(param_2 + 1) = fVar5 * fVar2 + fVar1;
  *(float *)((longlong)param_2 + 0xc) = fVar5;
  return param_2;
}



// FUNCTION 1423d06d0 FUN_1423d06d0 body=368 status=ok
// SIG undefined FUN_1423d06d0(void)

undefined8 * FUN_1423d06d0(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 local_58 [8];
  float local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  
  fVar5 = *(float *)(param_1 + 0x480);
  fVar2 = 0.0;
  if ((0.0 <= fVar5) && (fVar2 = fVar5, 89.0 <= fVar5)) {
    fVar2 = 89.0;
  }
  fVar4 = *(float *)(param_1 + 0x484) * 0.017453292;
  fVar5 = fVar2 * 0.017453292 + 0.001;
  if ((fVar5 <= fVar4) && (fVar5 = fVar4, 1.5543431 <= fVar4)) {
    fVar5 = 1.5543431;
  }
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar5);
  fVar2 = *(float *)(param_1 + 0x440);
  local_48 = *(float *)(param_1 + 0x220);
  fStack_44 = *(float *)(param_1 + 0x224);
  fStack_40 = *(float *)(param_1 + 0x228);
  uStack_3c = *(undefined4 *)(param_1 + 0x22c);
  pfVar1 = (float *)FUN_142369f10(param_1,local_58);
  fVar4 = pfVar1[2];
  if (0.707107 <= fVar3) {
    fVar2 = (0.5 / fVar3) * fVar2;
    *param_2 = CONCAT44(pfVar1[1] * fVar2 + fStack_44,*pfVar1 * fVar2 + local_48);
    *(float *)(param_2 + 1) = fVar4 * fVar2 + fStack_40;
    *(float *)((longlong)param_2 + 0xc) = fVar2;
  }
  else {
    local_50 = fVar4 * fVar2 * fVar3 + fStack_40;
    *param_2 = CONCAT44(pfVar1[1] * fVar2 * fVar3 + fStack_44,*pfVar1 * fVar2 * fVar3 + local_48);
    *(float *)(param_2 + 1) = local_50;
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar5);
    *(float *)((longlong)param_2 + 0xc) = fVar5 * fVar2;
  }
  return param_2;
}



// FUNCTION 1423d0840 FUN_1423d0840 body=191 status=ok
// SIG undefined FUN_1423d0840(void)

undefined8 * FUN_1423d0840(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x814) & 1) != 0) {
    puVar1 = (undefined8 *)operator_new(0x90);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      FUN_14237e540(puVar1,param_1);
      *puVar1 = &PTR_FUN_145072480;
    }
    puVar1[0xc] = *(undefined8 *)(param_1 + 0x7b0);
    *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_1 + 0x7b8);
    *(undefined8 *)((longlong)puVar1 + 0x6c) = *(undefined8 *)(param_1 + 0x7dc);
    *(undefined4 *)((longlong)puVar1 + 0x74) = *(undefined4 *)(param_1 + 0x7e4);
    puVar1[0xf] = *(undefined8 *)(param_1 + 0x7bc);
    *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(param_1 + 0x7c4);
    *(undefined8 *)((longlong)puVar1 + 0x84) = *(undefined8 *)(param_1 + 0x7e8);
    *(undefined4 *)((longlong)puVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x7f0);
    return puVar1;
  }
  puVar1 = (undefined8 *)FUN_1423d0900();
  return puVar1;
}



// FUNCTION 1423d0900 FUN_1423d0900 body=682 status=ok
// SIG undefined FUN_1423d0900(void)

undefined8 * FUN_1423d0900(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  uint uVar17;
  longlong local_res10;
  longlong local_res18;
  
  lVar7 = operator_new(0xe0);
  puVar8 = (undefined8 *)0x0;
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)FUN_1423c39e0(lVar7,param_1);
  }
  puVar13 = *(undefined4 **)(param_1 + 0x758);
  puVar15 = puVar13 + (longlong)*(int *)(param_1 + 0x760) * 0x30;
  for (; puVar13 != puVar15; puVar13 = puVar13 + 0x30) {
    iVar14 = *(int *)(puVar8 + 0x18);
    *(int *)(puVar8 + 0x18) = iVar14 + 1;
    if (*(int *)((longlong)puVar8 + 0xc4) < iVar14 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar8 + 0x17,iVar14);
    }
    uVar4 = puVar13[1];
    uVar5 = puVar13[2];
    uVar6 = puVar13[3];
    puVar2 = (undefined4 *)(puVar8[0x17] + (longlong)iVar14 * 0x10);
    *puVar2 = *puVar13;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  iVar14 = 0;
  TArray<FVector,FDefaultAllocator>::operator=(puVar8 + 0x19,param_1 + 0x778);
  if (0 < *(int *)(param_1 + 0x760)) {
    local_res18 = 0;
    local_res10 = 0;
    do {
      uVar17 = 0;
      lVar7 = *(longlong *)(param_1 + 0x758) + local_res18;
      plVar16 = (longlong *)(lVar7 + 0x30);
      do {
        if (((*plVar16 != 0) && (*(int *)(*plVar16 + 0x54) != 0)) && (0 < *(int *)(lVar7 + 0x28))) {
          if ((puVar8 == (undefined8 *)0x0) &&
             (puVar9 = (undefined8 *)operator_new(0xe0), puVar8 = (undefined8 *)0x0,
             puVar9 != (undefined8 *)0x0)) {
            FUN_14237df90(puVar9,param_1);
            *puVar9 = &PTR__scalar_deleting_destructor__145073380;
            puVar9[0x14] = *(undefined8 *)(param_1 + 0x728);
            puVar9[0x15] = 0;
            puVar9[0x16] = 0;
            puVar9[0x17] = 0;
            puVar9[0x18] = 0;
            puVar9[0x19] = 0;
            puVar9[0x1a] = 0;
            puVar8 = puVar9;
          }
          if (*(int *)(puVar8 + 0x16) <= iVar14) {
            plVar1 = puVar8 + 0x15;
            iVar3 = *(int *)(puVar8 + 0x16);
            iVar10 = iVar14 + 1;
            if (iVar3 < iVar10) {
              *(int *)(puVar8 + 0x16) = iVar10;
              iVar11 = iVar10 - iVar3;
              if (*(int *)((longlong)puVar8 + 0xb4) < iVar10) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar1,iVar3);
              }
              puVar9 = (undefined8 *)((longlong)iVar3 * 0x38 + *plVar1);
              if (iVar11 != 0) {
                lVar12 = (longlong)puVar9 + 0x1c;
                do {
                  *puVar9 = 0;
                  puVar9 = puVar9 + 7;
                  *(undefined8 *)(lVar12 + -0x14) = 0;
                  *(undefined8 *)(lVar12 + -0xc) = 0;
                  *(undefined8 *)(lVar12 + -4) = 0;
                  *(undefined8 *)(lVar12 + 4) = 0;
                  *(undefined8 *)(lVar12 + 0xc) = 0;
                  lVar12 = lVar12 + 0x38;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
            }
            else if (iVar10 < iVar3) {
              FUN_1423ddfd0(plVar1,iVar10,iVar3 - iVar10,1);
            }
          }
          lVar12 = local_res10 + puVar8[0x15];
          *(int *)(lVar12 + 0x30) = iVar14;
          TArray<FTransform,FDefaultAllocator>::operator=(lVar12,lVar7 + 0x20);
          FUN_14272ce10(*plVar16,((longlong)(int)uVar17 + 1) * 0x10 + lVar12);
        }
        uVar17 = uVar17 + 1;
        plVar16 = plVar16 + 1;
      } while (uVar17 < 2);
      iVar14 = iVar14 + 1;
      local_res10 = local_res10 + 0x38;
      local_res18 = local_res18 + 0xc0;
    } while (iVar14 < *(int *)(param_1 + 0x760));
  }
  return puVar8;
}



// FUNCTION 1423d0bd0 GetCopyOfKeys body=107 status=ok
// SIG undefined GetCopyOfKeys(void)

undefined8 * FRichCurve::GetCopyOfKeys(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x68);
  _Src = *(void **)(param_1 + 0x60);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(param_2,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 0x1c);
  return param_2;
}



// FUNCTION 1423d0c40 GetCurveColor body=716 status=ok
// SIG undefined GetCurveColor(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCurveOwnerInterface::GetCurveColor(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  wint_t wVar4;
  wint_t wVar5;
  wint_t *pwVar6;
  undefined2 *puVar7;
  undefined2 *local_28;
  int local_20;
  
  FName::ToString(param_3,&local_28);
  puVar7 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar7 = local_28;
  }
  pwVar6 = &DAT_14506f71c;
  do {
    wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa2837b8e) + (longlong)pwVar6);
    if ((wVar4 == 0) && (*pwVar6 == 0)) goto LAB_1423d0ece;
    if (wVar4 != *pwVar6) {
      wVar4 = towlower(wVar4);
      wVar5 = towlower(*pwVar6);
      if (wVar4 != wVar5) break;
    }
    pwVar6 = pwVar6 + 1;
  } while( true );
  if (wVar4 != wVar5) {
    pwVar6 = &DAT_14506fa2c;
    puVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar7 = local_28;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa2837d16) + (longlong)pwVar6);
      if ((wVar4 == 0) && (*pwVar6 == 0)) break;
      if (wVar4 != *pwVar6) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar6);
        if (wVar4 != wVar5) goto LAB_1423d0d24;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
  goto LAB_1423d0ece;
LAB_1423d0d24:
  if (wVar4 != wVar5) {
    pwVar6 = &DAT_14506fb7c;
    puVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar7 = local_28;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa2837dbe) + (longlong)pwVar6);
      if ((wVar4 == 0) && (*pwVar6 == 0)) goto LAB_1423d0ec0;
      if (wVar4 != *pwVar6) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar6);
        if (wVar4 != wVar5) goto LAB_1423d0d84;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_1423d0ece:
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0;
  goto LAB_1423d0eda;
LAB_1423d0d84:
  if (wVar4 != wVar5) {
    pwVar6 = &DAT_14506fb9c;
    puVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar7 = local_28;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa2837dce) + (longlong)pwVar6);
      if ((wVar4 == 0) && (*pwVar6 == 0)) break;
      if (wVar4 != *pwVar6) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar6);
        if (wVar4 != wVar5) goto LAB_1423d0de4;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
  goto LAB_1423d0ec0;
LAB_1423d0de4:
  if (wVar4 != wVar5) {
    pwVar6 = &DAT_14506fbbc;
    puVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar7 = local_28;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa2837dde) + (longlong)pwVar6);
      if ((wVar4 == 0) && (*pwVar6 == 0)) goto LAB_1423d0eaa;
      if (wVar4 != *pwVar6) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar6);
        if (wVar4 != wVar5) goto LAB_1423d0e44;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_1423d0ec0:
  *(undefined8 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)param_2 = 0;
  goto LAB_1423d0eda;
LAB_1423d0e94:
  if (wVar4 != wVar5) {
    *(undefined4 *)param_2 = _DAT_1464aa6d0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    goto LAB_1423d0ee1;
  }
  goto LAB_1423d0eaa;
LAB_1423d0e44:
  if (wVar4 != wVar5) {
    pwVar6 = &DAT_14506fbdc;
    puVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar7 = local_28;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa2837dee) + (longlong)pwVar6);
      if ((wVar4 == 0) && (*pwVar6 == 0)) break;
      if (wVar4 != *pwVar6) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar6);
        uVar3 = uRam00000001464aa6dc;
        uVar2 = uRam00000001464aa6d8;
        uVar1 = uRam00000001464aa6d4;
        if (wVar4 != wVar5) goto LAB_1423d0e94;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_1423d0eaa:
  *(undefined4 *)param_2 = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3d4ccccd;
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
LAB_1423d0eda:
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
LAB_1423d0ee1:
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1423d0f10 FUN_1423d0f10 body=77 status=ok
// SIG undefined FUN_1423d0f10(void)

undefined8 FUN_1423d0f10(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x108);
  plVar3 = plVar1;
  while( true ) {
    if (plVar3 == plVar1 + *(int *)(param_1 + 0x110)) {
      *param_3 = -1;
      return 0xffffff00;
    }
    if (*plVar3 == param_2) break;
    plVar3 = plVar3 + 1;
  }
  iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
  *param_3 = iVar2;
  return CONCAT71((int7)((longlong)plVar3 - (longlong)plVar1 >> 0xb),iVar2 != -1);
}



// FUNCTION 1423d0f60 GetCurvePosition body=137 status=ok
// SIG undefined GetCurvePosition(void)

longlong UCurveLinearColorAtlas::GetCurvePosition(longlong param_1,longlong param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x108);
  iVar1 = *(int *)(param_1 + 0x110);
  plVar5 = plVar3;
  do {
    if (plVar5 == plVar3 + iVar1) {
      iVar4 = -1;
LAB_1423d0f94:
      *param_3 = 0.0;
      if (iVar4 != -1) {
        uVar2 = *(uint *)(param_1 + 0x100);
        *param_3 = ((float)*(uint *)(param_1 + 0x104) * ((float)iVar4 + 0.5)) / (float)uVar2;
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
      return (ulonglong)(uint7)(int7)(int3)((uint)iVar1 >> 8) << 8;
    }
    if (*plVar5 == param_2) {
      iVar4 = (int)((longlong)plVar5 - (longlong)plVar3 >> 3);
      goto LAB_1423d0f94;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 1423d0ff0 GetCurves body=172 status=ok
// SIG undefined GetCurves(void)

longlong * UCurveFloat::GetCurves(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res8 = *(undefined8 *)(param_1 + -0x10);
  FName::ToString(&local_res8,&local_28);
  puVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar4 = local_28;
  }
  puVar3 = (undefined8 *)FName::FName(local_res10,puVar4,1);
  local_18 = *puVar3;
  uStack_10 = param_1 + 8;
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar1 = (undefined4)local_18;
  puVar1[1] = local_18._4_4_;
  puVar1[2] = (undefined4)uStack_10;
  puVar1[3] = uStack_10._4_4_;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1423d10a0 GetCurves body=66 status=ok
// SIG undefined GetCurves(void)

undefined8 * UCurveFloat::GetCurves(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_2 = 0;
  param_2[1] = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  puVar1[1] = param_1 + 8;
  return param_2;
}



// FUNCTION 1423d10f0 GetCurves body=296 status=ok
// SIG undefined GetCurves(void)

longlong * UCurveLinearColor::GetCurves(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = DAT_146af16e0;
  *(undefined4 *)(param_2 + 1) = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,0);
  local_18 = (undefined4)uVar4;
  uStack_14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar3 = (undefined4 *)*param_2;
  *puVar3 = local_18;
  puVar3[1] = uStack_14;
  *(longlong *)(puVar3 + 2) = param_1 + 8;
  uVar4 = DAT_146af16e8;
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  local_18 = (undefined4)uVar4;
  uStack_14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar3 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar3 = local_18;
  puVar3[1] = uStack_14;
  *(longlong *)(puVar3 + 2) = param_1 + 0x78;
  uVar4 = DAT_146af16f0;
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  local_18 = (undefined4)uVar4;
  uStack_14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar3 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar3 = local_18;
  puVar3[1] = uStack_14;
  *(longlong *)(puVar3 + 2) = param_1 + 0xe8;
  uVar4 = DAT_146af16f8;
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar1 = uVar4;
  puVar1[1] = param_1 + 0x158;
  return param_2;
}



// FUNCTION 1423d1220 GetCurves body=229 status=ok
// SIG undefined GetCurves(void)

longlong * UCurveVector::GetCurves(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = DAT_146af1720;
  *(undefined4 *)(param_2 + 1) = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,0);
  local_18 = (undefined4)uVar4;
  uStack_14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar3 = (undefined4 *)*param_2;
  *puVar3 = local_18;
  puVar3[1] = uStack_14;
  *(longlong *)(puVar3 + 2) = param_1 + 8;
  uVar4 = DAT_146af1728;
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  local_18 = (undefined4)uVar4;
  uStack_14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar3 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar3 = local_18;
  puVar3[1] = uStack_14;
  *(longlong *)(puVar3 + 2) = param_1 + 0x78;
  uVar4 = DAT_146af1730;
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar1 = uVar4;
  puVar1[1] = param_1 + 0xe8;
  return param_2;
}



// FUNCTION 1423d1320 GetDesiredRotation body=27 status=ok
// SIG undefined GetDesiredRotation(void)

undefined8 AController::GetDesiredRotation(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x720))();
  return param_2;
}



// FUNCTION 1423d1340 FUN_1423d1340 body=228 status=ok
// SIG undefined FUN_1423d1340(void)

longlong * FUN_1423d1340(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x728) == 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0xe);
    iVar1 = (int)param_2[1] + 0xe;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    builtin_wcsncpy((wchar_t *)*param_2,L"No_StaticMesh",0xe);
  }
  else {
    plVar2 = (longlong *)UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x728),local_18,0);
    if (param_2 != plVar2) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_2 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1423d1430 FUN_1423d1430 body=562 status=ok
// SIG undefined FUN_1423d1430(void)

void FUN_1423d1430(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  
  if ((*(char *)(param_1 + 0x628) != '\0') && (uVar12 = 0, 0 < *(int *)(param_2 + 8))) {
    do {
      if ((param_4 >> (uVar12 & 0x1f) & 1) != 0) {
        puVar9 = *(undefined4 **)(param_1 + 0xd70);
        puVar1 = puVar9 + (longlong)*(int *)(param_1 + 0xd78) * 6;
        for (; puVar9 != puVar1; puVar9 = puVar9 + 6) {
          iVar4 = FUN_1408bed80(param_5,1);
          plVar10 = (longlong *)
                    (*(longlong *)(*param_5 + (longlong)(iVar4 / 0x59) * 8) +
                    (ulonglong)(uint)(iVar4 % 0x59) * 0xb8);
          plVar11 = (longlong *)plVar10[0xf];
          if ((longlong *)plVar10[0xf] == (longlong *)0x0) {
            plVar11 = plVar10;
          }
          plVar11[2] = param_1 + 0x5b0;
          plVar10[0x14] = param_1 + 0x600;
          *plVar11 = param_1 + 0x188;
          uVar3 = *puVar9;
          lVar6 = plVar11[7];
          iVar4 = puVar9[1];
          iVar5 = (int)lVar6 + 1;
          *(int *)(plVar11 + 7) = iVar5;
          if (*(int *)((longlong)plVar11 + 0x3c) < iVar5) {
            TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
            ::ResizeGrow(plVar11 + 5);
          }
          plVar8 = (longlong *)plVar11[6];
          if ((longlong *)plVar11[6] == (longlong *)0x0) {
            plVar8 = plVar11 + 5;
          }
          plVar8[(int)lVar6] =
               CONCAT44(iVar4 / 3 + (iVar4 >> 0x1f) +
                        (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >>
                             0x1f),uVar3);
          *(undefined4 *)(plVar11 + 9) = puVar9[2];
          *(int *)((longlong)plVar11 + 0x4c) = puVar9[2] + puVar9[3] + -1;
          *(uint *)((longlong)plVar10 + 0x8c) =
               (*(byte *)(param_1 + 0x18) & 1) << 3 |
               *(uint *)((longlong)plVar10 + 0x8c) & 0xffe00fe7;
          lVar6 = (**(code **)(**(longlong **)(puVar9 + 4) + 0x2a8))(*(longlong **)(puVar9 + 4),0,0)
          ;
          plVar10[0x15] = lVar6;
          cVar2 = *(char *)(param_1 + 0xdd8);
          *(undefined1 *)(plVar10 + 0x11) = 0;
          uVar7 = 0;
          if (cVar2 == '\0') {
            uVar7 = 0x200000;
          }
          *(uint *)((longlong)plVar10 + 0x8c) =
               uVar7 | *(uint *)((longlong)plVar10 + 0x8c) & 0xffdfffff;
          FUN_142747330(param_5,uVar12,plVar10);
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(param_2 + 8));
  }
  return;
}



// FUNCTION 1423d1670 FUN_1423d1670 body=308 status=ok
// SIG undefined FUN_1423d1670(void)

float FUN_1423d1670(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
      *(float *)(param_1 + 6) * *(float *)(param_1 + 6) +
      *(float *)(param_1 + 10) * *(float *)(param_1 + 10) <= 1e-08) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 1.0;
  }
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)((longlong)param_1 + 0xa4);
  fVar1 = *(float *)(param_1 + 0x15);
  fVar2 = (float)(**(code **)(*param_1 + 0x18))();
  fVar2 = fVar2 * fVar6 * *(float *)(param_1 + 0x3e);
  fVar6 = (float)(**(code **)(*param_1 + 0x18))(param_1);
  fVar5 = (fVar4 + fVar2) - *(float *)(param_2 + 0x550);
  fVar4 = (fVar3 + fVar2) - *(float *)(param_2 + 0x54c);
  fVar3 = (fVar2 + fVar1) - *(float *)(param_2 + 0x554);
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  return (fVar6 * *(float *)(param_1 + 0x3f) * *(float *)(param_2 + 0x568)) / fVar3;
}



// FUNCTION 1423d17b0 FUN_1423d17b0 body=16 status=ok
// SIG undefined FUN_1423d17b0(void)

undefined8 * FUN_1423d17b0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x800);
  return param_2;
}



// FUNCTION 1423d17c0 FUN_1423d17c0 body=25 status=ok
// SIG undefined FUN_1423d17c0(void)

undefined8 * FUN_1423d17c0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7e4);
  *param_2 = *(undefined8 *)(param_1 + 0x7dc);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1423d17e0 GetCurrentPlaybackProgressTime body=9 status=ok
// SIG undefined GetCurrentPlaybackProgressTime(void)

undefined4 USynthSamplePlayer::GetCurrentPlaybackProgressTime(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x7fc);
}



// FUNCTION 1423d17f0 FUN_1423d17f0 body=16 status=ok
// SIG undefined FUN_1423d17f0(void)

undefined8 * FUN_1423d17f0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x7f4);
  return param_2;
}



// FUNCTION 1423d1800 FUN_1423d1800 body=25 status=ok
// SIG undefined FUN_1423d1800(void)

undefined8 * FUN_1423d1800(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7f0);
  *param_2 = *(undefined8 *)(param_1 + 0x7e8);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1423d1820 FUN_1423d1820 body=294 status=ok
// SIG undefined FUN_1423d1820(void)

undefined8
FUN_1423d1820(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 local_res8 [2];
  
  puVar2 = param_8;
  puVar1 = param_7;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  param_5._0_4_ = 0;
  local_res8[0] = 0;
  (**(code **)(*param_1 + 0x950))(param_1,&param_5,local_res8);
  param_8._0_4_ = 0;
  param_7._0_4_ = 0;
  *param_6 = param_5._0_4_;
  (**(code **)(*param_1 + 0x668))(param_1,&param_8,&param_7);
  cVar3 = FUN_14238efd0(param_1);
  if (((cVar3 != '\0') && (param_1[0xe5] != 0)) &&
     (cVar3 = (**(code **)(*param_1 + 0x660))(param_1), cVar3 == '\0')) {
    uVar4 = (**(code **)(*param_1 + 0x940))(param_1);
    *puVar2 = uVar4;
    uVar4 = (**(code **)(*param_1 + 0x938))(param_1,param_8._0_4_,param_7._0_4_);
    *puVar1 = uVar4;
    (**(code **)(*param_1 + 0x948))(param_1,param_5._0_4_,local_res8[0],param_2,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 1423d1950 FUN_1423d1950 body=384 status=ok
// SIG undefined FUN_1423d1950(void)

void FUN_1423d1950(longlong param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  int local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x728) == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x744) & 0x40) == 0) {
    plVar4 = (longlong *)FUN_14294bda0();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    if (*(char *)(lVar5 + 0x38) == '\0') {
      fVar7 = 1.0;
    }
    else {
      fVar7 = *(float *)(param_1 + 0x7a0);
    }
    iVar2 = (int)((float)*(int *)(*(longlong *)(param_1 + 0x728) + 0x88) * fVar7);
    if (iVar2 < 5) {
      iVar2 = 4;
    }
    *param_2 = iVar2;
    iVar2 = (int)((float)*(int *)(*(longlong *)(param_1 + 0x728) + 0x88) * fVar7);
    if (iVar2 < 5) {
      iVar2 = 4;
    }
    *param_3 = iVar2;
  }
  else if (*(int *)(param_1 + 0x748) != 0) {
    *param_2 = *(int *)(param_1 + 0x748);
    *param_3 = *(int *)(param_1 + 0x748);
  }
  if (*param_2 == 0) {
    local_res8[0] = 0;
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"DevOptions.StaticLighting",L"DefaultStaticMeshLightingRes",local_res8
               ,&DAT_1468e23d0);
    *param_2 = local_res8[0];
    *param_3 = local_res8[0];
  }
  lVar5 = DAT_146af1068;
  if (DAT_146533352 != '\0') {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar3 = GetCurrentThreadId(), lVar6 = 4, DVar3 == DAT_1468c21c0)) {
      lVar6 = 0;
    }
    if (*(int *)(lVar5 + lVar6) == 1) {
      *param_2 = *param_2 + 2;
      *param_3 = *param_3 + 2;
    }
    return;
  }
  return;
}



// FUNCTION 1423d1ad0 GetFirstKey body=72 status=ok
// SIG undefined GetFirstKey(void)

undefined1 * FRichCurve::GetFirstKey(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x60);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar1 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar1 + 0xc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(puVar1 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar1 + 0x18);
  return param_2;
}



// FUNCTION 1423d1b20 GetFloatValue body=12 status=ok
// SIG undefined GetFloatValue(void)

void UCurveFloat::GetFloatValue(longlong param_1,undefined8 param_2)

{
  FRichCurve::Eval(param_1 + 0x30,param_2,0);
  return;
}



// FUNCTION 1423d1b30 IsPlaying body=8 status=ok
// SIG undefined IsPlaying(void)

undefined1 UGeometryCacheComponent::IsPlaying(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x818);
}



// FUNCTION 1423d1b40 FUN_1423d1b40 body=322 status=ok
// SIG undefined FUN_1423d1b40(void)

longlong * FUN_1423d1b40(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  short *psVar7;
  ulonglong local_res8;
  longlong local_38;
  ulonglong local_30;
  short *local_28;
  int local_20;
  longlong local_18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x460) == 0) {
    local_res8 = *(ulonglong *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_28);
    local_30 = 0;
    psVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      psVar7 = local_28;
    }
    local_38 = 0;
    if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (psVar7[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_30 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,psVar7,(longlong)(int)uVar5 * 2);
    }
    plVar4 = &local_38;
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
  }
  else {
    plVar4 = (longlong *)FUN_14270d290(*(longlong *)(param_1 + 0x460),local_18);
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
  }
  *param_2 = 0;
  *param_2 = *plVar4;
  *plVar4 = 0;
  *(int *)(param_2 + 1) = (int)plVar4[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  if (bVar1) {
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  if (bVar2) {
    if (local_28 != (short *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1423d1c90 GetIndex body=125 status=ok
// SIG undefined GetIndex(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FIndexedCurve::GetIndex(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      while (piVar4 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8)),
            *piVar4 != param_2) {
        iVar1 = piVar4[2];
        if (iVar1 == -1) {
          return _DAT_00000000;
        }
      }
      if (iVar1 != -1) goto LAB_1423d1cff;
    }
  }
  piVar4 = (int *)0x0;
LAB_1423d1cff:
  piVar3 = piVar4 + 1;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  return *piVar3;
}



// FUNCTION 1423d1d10 GetIndex body=360 status=ok
// SIG undefined GetIndex(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FKeyHandleLookupTable::GetIndex(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_res10 [6];
  undefined1 auStack_48 [32];
  int local_28;
  undefined1 local_24 [4];
  int *local_20;
  int *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 3) != *(int *)((longlong)param_1 + 0x44)) {
    puVar2 = (undefined8 *)param_1[10];
    if ((undefined8 *)param_1[10] == (undefined8 *)0x0) {
      puVar2 = param_1 + 9;
    }
    iVar1 = *(int *)((longlong)puVar2 +
                    ((longlong)*(int *)(param_1 + 0xb) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar1 * 0x10 + param_1[2]);
        if (*piVar5 == param_2) {
          if (iVar1 != -1) goto LAB_1423d1d92;
          break;
        }
        iVar1 = piVar5[2];
      } while (iVar1 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_1423d1d92:
  piVar3 = piVar5 + 1;
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    if ((iVar1 < 0) || (iVar4 = *(int *)(param_1 + 1), iVar4 <= iVar1)) {
      piVar5 = (int *)*param_1;
      iVar4 = *(int *)(param_1 + 1);
    }
    else {
      piVar5 = (int *)*param_1;
      if (((char)piVar5[(longlong)iVar1 * 2 + 1] == '\x01') &&
         (piVar5[(longlong)iVar1 * 2] == param_2)) {
        return iVar1;
      }
    }
    for (piVar3 = piVar5; piVar3 != piVar5 + (longlong)iVar4 * 2; piVar3 = piVar3 + 2) {
      if (((char)piVar3[1] != '\0') && (*piVar3 == param_2)) {
        local_28 = (int)((longlong)piVar3 - (longlong)piVar5 >> 3);
        goto LAB_1423d1e0e;
      }
    }
    local_28 = -1;
LAB_1423d1e0e:
    if (local_28 != -1) {
      local_20 = local_res10;
      local_18 = &local_28;
      local_res10[0] = param_2;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(param_1 + 2,local_24,&local_20,0)
      ;
      return local_28;
    }
  }
  return -1;
}



// FUNCTION 1423d1e80 GetKeyHandle body=123 status=ok
// SIG undefined GetKeyHandle(void)

undefined4 * FIndexedCurve::GetKeyHandle(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [4];
  int *local_28;
  undefined4 *local_20;
  
  param_1 = param_1 + 8;
  local_res8[0] = param_3;
  lVar1 = TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
          ::FindKey(param_1,param_3);
  if (lVar1 == 0) {
    DAT_146531fa0 = DAT_146531fa0 + 1;
    local_28 = local_res18;
    local_20 = local_res8;
    local_res18[0] = DAT_146531fa0;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(param_1,local_res10,&local_28,0);
  }
  puVar2 = (undefined4 *)
           TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
           ::FindKey(param_1,param_3);
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 1423d1f00 FUN_1423d1f00 body=305 status=ok
// SIG undefined FUN_1423d1f00(void)

longlong * FUN_1423d1f00(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  iVar3 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar3) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles(param_1 + 1,iVar3);
  }
  iVar3 = (int)param_1[6];
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar3 != 0) {
    puVar6 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 3);
    }
    uVar1 = *puVar6;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar1 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar4 = local_58 + 1;
      bVar2 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar4;
      if (bVar2) goto LAB_1423d1fe4;
      uVar1 = puVar6[lVar5 + 1];
    }
    uStack_54 = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_44 = (iStack_40 - iVar4) + 0x1f;
    if (iVar3 < iStack_44) {
LAB_1423d1fe4:
      iStack_44 = iVar3;
    }
  }
  *param_2 = (longlong)(param_1 + 1);
  param_2[1] = CONCAT44(uStack_54,local_58);
  param_2[2] = (longlong)(param_1 + 3);
  param_2[3] = CONCAT44(iStack_44,0xffffffff);
  param_2[4] = CONCAT44(uStack_3c,iStack_40);
  return param_2;
}



// FUNCTION 1423d2040 GetKeyIterator body=18 status=ok
// SIG undefined GetKeyIterator(void)

longlong * FIntegralCurve::GetKeyIterator(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = param_1 + 0x58;
  return param_2;
}



// FUNCTION 1423d2060 GetKeyIterator body=18 status=ok
// SIG undefined GetKeyIterator(void)

longlong * FRichCurve::GetKeyIterator(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = param_1 + 0x60;
  return param_2;
}



// FUNCTION 1423d2080 GetLastKey body=90 status=ok
// SIG undefined GetLastKey(void)

undefined1 * FRichCurve::GetLastKey(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  lVar2 = (longlong)*(int *)(param_1 + 0x68) * 0x1c;
  *param_2 = *(undefined1 *)(lVar2 + -0x1c + lVar1);
  param_2[1] = *(undefined1 *)(lVar2 + -0x1b + lVar1);
  param_2[2] = *(undefined1 *)(lVar2 + -0x1a + lVar1);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar2 + -0x18 + lVar1);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar2 + -0x14 + lVar1);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar2 + -0x10 + lVar1);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar2 + -0xc + lVar1);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(lVar2 + -8 + lVar1);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar2 + -4 + lVar1);
  return param_2;
}



// FUNCTION 1423d20e0 FUN_1423d20e0 body=440 status=ok
// SIG undefined FUN_1423d20e0(void)

void FUN_1423d20e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146af1788) && (_Init_thread_header(&DAT_146af1788), DAT_146af1788 == -1)) {
    uVar1 = FUN_14291fb80();
    FUN_14291fb80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerState",1);
    DAT_146af1780 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af1788);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af1780 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146af1780 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af1780 + 0x30));
  }
  if ((*piVar5 < DAT_146af1798) && (_Init_thread_header(&DAT_146af1798), DAT_146af1798 == -1)) {
    uVar1 = FUN_14291fb80();
    FUN_14291fb80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Pawn",1);
    DAT_146af1790 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af1798);
  }
  if (0 < *(int *)(DAT_146af1790 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146af1790 + 0x40) + (short)iVar4;
      local_14 = 0x100000000;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146af1790 + 0x30));
  }
  return;
}



// FUNCTION 1423d22a0 FUN_1423d22a0 body=232 status=ok
// SIG undefined FUN_1423d22a0(void)

void FUN_1423d22a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14238b980();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af1748) && (_Init_thread_header(&DAT_146af1748), DAT_146af1748 == -1))
  {
    uVar1 = FUN_142a232e0();
    FUN_142a232e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"StaticMesh",1);
    DAT_146af1740 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af1748);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af1740 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146af1740 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af1740 + 0x30));
  }
  return;
}



// FUNCTION 1423d2390 FUN_1423d2390 body=150 status=ok
// SIG undefined FUN_1423d2390(void)

void FUN_1423d2390(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  *param_3 = 0;
  *param_2 = 0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  (**(code **)(*param_1 + 0x668))(param_1,local_res10,local_res8);
  cVar1 = FUN_14238efd0(param_1);
  if ((cVar1 != '\0') && (param_1[0xe5] != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x938))(param_1,local_res10[0],local_res8[0]);
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 0x948))(param_1,local_res10[0],local_res8[0],param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1423d2430 FUN_1423d2430 body=326 status=ok
// SIG undefined FUN_1423d2430(void)

undefined8 FUN_1423d2430(longlong param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  if (*(longlong *)(param_1 + 0x728) == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return 0;
  }
  lVar6 = 4;
  if ((*(byte *)(param_1 + 0x744) & 0x40) == 0) {
    plVar4 = (longlong *)FUN_14294bda0();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    if (*(char *)(lVar5 + 0x38) == '\0') {
      fVar7 = 1.0;
    }
    else {
      fVar7 = *(float *)(param_1 + 0x7a0);
    }
    iVar2 = (int)((float)*(int *)(*(longlong *)(param_1 + 0x728) + 0x88) * fVar7);
    if (iVar2 < 5) {
      iVar2 = 4;
    }
    *param_2 = iVar2;
    iVar2 = (int)((float)*(int *)(*(longlong *)(param_1 + 0x728) + 0x88) * fVar7);
    if (iVar2 < 5) {
      iVar2 = 4;
    }
  }
  else {
    *param_2 = *(int *)(param_1 + 0x748);
    iVar2 = *(int *)(param_1 + 0x748);
  }
  *param_3 = iVar2;
  lVar5 = DAT_146af1068;
  if (DAT_146533352 != '\0') {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar5) == 1) {
      *param_2 = *param_2 + 2;
      *param_3 = *param_3 + 2;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 1423d25b0 FUN_1423d25b0 body=213 status=ok
// SIG undefined FUN_1423d25b0(void)

undefined8 * FUN_1423d25b0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x40))(lVar1 + 0x28);
    return param_2;
  }
  uVar3 = FRichCurve::Eval(param_1,param_3,0);
  uVar4 = FRichCurve::Eval(param_1 + 0x70,param_3,0);
  uVar5 = FRichCurve::Eval(param_1 + 0xe0,param_3,0);
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x150) + 8))(param_1 + 0x150);
  if (iVar2 == 0) {
    uVar6 = 0x3f800000;
  }
  else {
    uVar6 = FRichCurve::Eval(param_1 + 0x150,param_3,0);
  }
  *param_2 = CONCAT44(uVar4,uVar3);
  param_2[1] = CONCAT44(uVar6,uVar5);
  return param_2;
}



// FUNCTION 1423d2690 GetClampedLinearColorValue body=566 status=ok
// SIG undefined GetClampedLinearColorValue(void)

longlong UCurveLinearColor::GetClampedLinearColorValue
                   (longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float _X;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  
  local_48 = FRichCurve::Eval(param_1 + 8,param_3,0);
  local_44 = FRichCurve::Eval(param_1 + 0x78,param_3,0);
  local_40 = FRichCurve::Eval(param_1 + 0xe8,param_3,0);
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x158) + 8))(param_1 + 0x158);
  if (iVar1 == 0) {
    local_3c = 1.0;
  }
  else {
    local_3c = (float)FRichCurve::Eval(param_1 + 0x158,param_3,0);
  }
  FLinearColor::LinearRGBToHSV(&local_48,&local_58);
  fVar3 = *(float *)(param_1 + 0x1d4);
  _X = local_50 * *(float *)(param_1 + 0x1d0);
  if ((0.0001 < ABS(fVar3 - 1.0)) && (fVar3 != 0.0)) {
    _X = ::_guard_xfg_dispatch_icall_nop(_X,fVar3);
  }
  fVar3 = *(float *)(param_1 + 0x1d8);
  if (0.0001 < ABS(fVar3)) {
    fVar2 = 1.0 - local_54;
    if (0.0 <= fVar3) {
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
    }
    else {
      fVar3 = 0.0;
    }
    local_54 = local_54 + fVar3 * 0.5 * fVar2 * fVar2 * fVar2 * fVar2 * fVar2;
  }
  local_58 = local_58 + *(float *)(param_1 + 0x1c8);
  local_54 = local_54 * *(float *)(param_1 + 0x1cc);
  fVar3 = (float)(int)(local_58 * 0.0027777778) * 360.0;
  if (ABS(local_58) < ABS(fVar3)) {
    fVar3 = local_58;
  }
  local_58 = local_58 - fVar3;
  if (local_58 < 0.0) {
    local_58 = local_58 + 360.0;
  }
  if (0.0 <= local_54) {
    if (1.0 <= local_54) {
      local_54 = 1.0;
    }
  }
  else {
    local_54 = 0.0;
  }
  local_50 = 0.0;
  if ((0.0 <= _X) && (local_50 = _X, 1.0 <= _X)) {
    local_50 = 1.0;
  }
  FLinearColor::HSVToLinearRGB(&local_58,param_2);
  *(float *)(param_2 + 0xc) =
       (*(float *)(param_1 + 0x1e0) - *(float *)(param_1 + 0x1dc)) * local_3c +
       *(float *)(param_1 + 0x1dc);
  return param_2;
}



// FUNCTION 1423d28d0 FUN_1423d28d0 body=193 status=ok
// SIG undefined FUN_1423d28d0(void)

void FUN_1423d28d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  if (*(longlong *)(param_1 + 0x728) != 0) {
    UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),&local_48);
    *param_2 = CONCAT44(local_44 - local_38,local_48 - local_3c);
    *(float *)(param_2 + 1) = local_40 - local_34;
    *param_3 = CONCAT44(local_44 + local_38,local_48 + local_3c);
    *(float *)(param_3 + 1) = local_34 + local_40;
  }
  return;
}



// FUNCTION 1423d29a0 GetMIDData body=681 status=ok
// SIG undefined GetMIDData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FTextRenderComponentMIDCache::GetMIDData
          (longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *plStack_b0;
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_80 = param_3;
  local_78 = param_4;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    iVar7 = ::GetTypeHash(&local_80);
    uVar8 = 0;
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar8 = param_1 + 0x50;
    }
    iVar7 = *(int *)((uVar8 | *(ulonglong *)(param_1 + 0x58)) +
                    ((longlong)iVar7 & (longlong)*(int *)(param_1 + 0x60) - 1U) * 4);
    if (iVar7 != -1) {
      lVar9 = *plVar1;
      do {
        lVar5 = (longlong)iVar7 * 0x28;
        if ((*(longlong *)(lVar9 + (longlong)iVar7 * 0x28) == param_3) &&
           (*(longlong *)(lVar9 + 8 + lVar5) == param_4)) {
          if ((iVar7 != -1) && (lVar9 = lVar9 + lVar5, lVar9 != 0)) {
            local_b8 = *(longlong *)(lVar9 + 0x10);
            plStack_b0 = *(longlong **)(lVar9 + 0x18);
            if (plStack_b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
              UNLOCK();
            }
            if (local_b8 == 0) goto LAB_1423d2a50;
            goto LAB_1423d2bd1;
          }
          break;
        }
        iVar7 = *(int *)(lVar9 + 0x20 + lVar5);
      } while (iVar7 != -1);
    }
  }
  plStack_b0 = (longlong *)0x0;
LAB_1423d2a50:
  local_b8 = 0;
  lVar9 = operator_new(0x28);
  if (lVar9 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = FUN_1423c36f0(lVar9,param_3,param_4);
  }
  local_88 = (longlong *)operator_new(0x18);
  if (local_88 != (longlong *)0x0) {
    *(undefined4 *)(local_88 + 1) = 1;
    *local_88 = (longlong)&PTR_DestroyObject_1450753d8;
    *(undefined4 *)((longlong)local_88 + 0xc) = 1;
    local_88[2] = local_90;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_90,local_90,local_90);
  local_60 = &local_70;
  local_58 = &local_90;
  local_70 = param_3;
  local_68 = param_4;
  FUN_1423c2750(plVar1,local_a8,&local_60,0);
  plVar4 = plStack_b0;
  lVar9 = *(longlong *)(*plVar1 + 0x10 + (longlong)local_a8[0] * 0x28);
  plVar1 = *(longlong **)(*plVar1 + (longlong)local_a8[0] * 0x28 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
  }
  local_a0._0_4_ = (undefined4)lVar9;
  local_50 = (undefined4)local_a0;
  local_a0._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  uStack_4c = local_a0._4_4_;
  uStack_98._0_4_ = SUB84(plVar1,0);
  uStack_48 = (undefined4)uStack_98;
  uStack_98._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_44 = uStack_98._4_4_;
  local_a0 = local_b8;
  uStack_98 = plStack_b0;
  local_b8 = lVar9;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_b0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      puVar6 = (undefined8 *)*plStack_b0;
      plStack_b0 = plVar1;
      (*(code *)*puVar6)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar1 = plStack_b0;
      if (iVar7 == 1) {
        (**(code **)(*uStack_98 + 8))(uStack_98,1);
        plVar1 = plStack_b0;
      }
    }
  }
  plStack_b0 = plVar1;
  plVar1 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
LAB_1423d2bd1:
  plVar1 = plStack_b0;
  *param_2 = local_b8;
  param_2[1] = (longlong)plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plStack_b0 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  return param_2;
}


