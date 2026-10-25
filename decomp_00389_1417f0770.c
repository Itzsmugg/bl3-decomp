// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1417f0770 FSlateRenderBatch body=450 status=ok
// SIG undefined FSlateRenderBatch(void)

undefined4 *
FSlateRenderBatch::FSlateRenderBatch
          (undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = param_2;
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar8 = *(undefined4 *)(param_3 + 9);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x4c);
  param_1[4] = *(undefined4 *)(param_3 + 8);
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar8 = *(undefined4 *)(param_3 + 0xb);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x5c);
  param_1[8] = *(undefined4 *)(param_3 + 10);
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  param_1[0xb] = uVar9;
  *(undefined8 *)(param_1 + 0xc) = param_3[0x10];
  *(undefined8 *)(param_1 + 0xe) = param_3[0xe];
  param_1[0x10] = *(undefined4 *)(param_3 + 0xd);
  param_1[0x11] = *(undefined4 *)((longlong)param_3 + 0x6c);
  *(undefined8 *)(param_1 + 0x12) = *param_3;
  lVar4 = param_3[1];
  *(longlong *)(param_1 + 0x14) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_3[6];
  uVar6 = param_3[5];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x16) = uVar6;
  *(longlong **)(param_1 + 0x18) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
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
  *(undefined8 *)(param_1 + 0x1a) = *param_4;
  lVar4 = param_4[1];
  *(longlong *)(param_1 + 0x1c) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_3 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_3 + 0x61);
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_3 + 0x62);
  *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_3 + 99);
  param_1[0x1f] = *(undefined4 *)((longlong)param_3 + 100);
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (*(char *)(param_3 + 0x1b) != '\0') {
    FSlateClippingState::FSlateClippingState(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  param_1[0x32] = *(undefined4 *)((longlong)param_3 + 0x8c);
  param_1[0x33] = *(undefined4 *)(param_3 + 0x12);
  param_1[0x34] = param_7;
  param_1[0x35] = param_8;
  param_1[0x36] = param_5;
  param_1[0x37] = param_6;
  param_1[0x38] = *(undefined4 *)(param_3 + 0xf);
  plVar5 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 1417f0940 FSlateRenderDataHandle body=41 status=ok
// SIG undefined FSlateRenderDataHandle(void)

undefined8 *
FSlateRenderDataHandle::FSlateRenderDataHandle
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d4ea28;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 1417f0970 FSlateStyleSet body=962 status=ok
// SIG undefined FSlateStyleSet(void)

undefined8 * FSlateStyleSet::FSlateStyleSet(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  uVar5 = 0;
  local_res8 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d4fcc8;
  param_1[1] = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  lVar3 = operator_new(0x88);
  uVar7 = uVar5;
  if (lVar3 != 0) {
    local_res8 = 0x41800000;
    local_resc = 0x41800000;
    plVar4 = (longlong *)FPaths::EngineContentDir(local_18);
    lVar2 = plVar4[1];
    local_28 = *plVar4;
    *plVar4 = 0;
    local_20 = (int)plVar4[1];
    local_1c = *(int *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
    if (local_1c < (int)((0x18 - (uint)((int)lVar2 != 0)) + local_20)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    }
    FString::PathAppend(&local_28,L"Slate/Checkerboard.png",0x16);
    uVar5 = FSlateImageBrush::FSlateImageBrush(lVar3,&local_28,&local_res8,&DAT_1464aa6c0,3,1);
    uVar7 = 3;
  }
  param_1[0x42] = uVar5;
  if (((uVar7 & 2) != 0) && (uVar7 = (ulonglong)((uint)uVar7 & 0xfffffffd), local_28 != 0)) {
    FMemory::Free();
  }
  if (((uVar7 & 1) != 0) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar1 = param_1[0x42];
  puVar6 = (undefined8 *)FName::FName(&local_res8,L"Default",1);
  Set(param_1,*puVar6,uVar1);
  return param_1;
}



// FUNCTION 1417f0d40 FSlateWidgetStyle body=31 status=ok
// SIG undefined FSlateWidgetStyle(void)

undefined8 * FSlateWidgetStyle::FSlateWidgetStyle(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144042b80;
  return param_1;
}



// FUNCTION 1417f0d70 FUN_1417f0d70 body=698 status=ok
// SIG undefined FUN_1417f0d70(void)

undefined8 * FUN_1417f0d70(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong local_res8;
  
  puVar11 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar5 = param_2[1];
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  FUN_1417eedd0(param_1 + 0x13);
  param_1[0x131] = 0;
  plVar7 = param_1 + 0x141;
  param_1[0x132] = 0;
  plVar2 = param_1 + 0x155;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  *(undefined4 *)(param_1 + 0x13b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9dc) = 0;
  param_1[0x13d] = 0;
  *(undefined4 *)(param_1 + 0x13e) = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  *plVar7 = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  *(undefined1 *)(param_1 + 0x147) = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  *(undefined1 *)(param_1 + 0x154) = 1;
  *plVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x142);
  *(int *)(param_1 + 0x142) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xa14) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar4);
  }
  *(undefined8 **)(*plVar7 + (longlong)iVar4 * 8) = param_1 + 0x13;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    uVar3 = *(undefined4 *)(lVar5 + 0x37c);
    *(undefined4 *)(param_1 + 0x153) = *(undefined4 *)(lVar5 + 0x378);
    *(undefined4 *)((longlong)param_1 + 0xa9c) = uVar3;
  }
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar8 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)) {
    puVar10 = (undefined8 *)operator_new(0x18);
    if (puVar10 != (undefined8 *)0x0) {
      FGCObject::FGCObject(puVar10);
      puVar10[2] = param_1;
      *puVar10 = &PTR__scalar_deleting_destructor__144d4ea30;
      puVar11 = puVar10;
    }
    if (plVar2 == &local_res8) {
      if (puVar11 == (undefined8 *)0x0) goto LAB_1417f0fd8;
      puVar10 = (undefined8 *)*puVar11;
    }
    else {
      puVar6 = (undefined8 *)*plVar2;
      *plVar2 = (longlong)puVar11;
      if (puVar6 == (undefined8 *)0x0) goto LAB_1417f0fd8;
      puVar10 = (undefined8 *)*puVar6;
      puVar11 = puVar6;
    }
    (*(code *)*puVar10)(puVar11,1);
  }
LAB_1417f0fd8:
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1417f1030 FSliderStyle body=199 status=ok
// SIG undefined FSliderStyle(void)

undefined8 * FSliderStyle::FSliderStyle(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_144042b80;
  *param_1 = &PTR__scalar_deleting_destructor__144d4f580;
  FUN_14080bc50(param_1 + 1,param_2 + 8);
  FUN_14080bc50(param_1 + 0x12,param_2 + 0x90);
  FUN_14080bc50(param_1 + 0x23,param_2 + 0x118);
  FUN_14080bc50(param_1 + 0x34,param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x228);
  return param_1;
}



// FUNCTION 1417f1100 FUN_1417f1100 body=691 status=ok
// SIG undefined FUN_1417f1100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417f1100(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f580;
  param_1[1] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 2) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[5] = _DAT_1464aa6c0;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 100) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x74) = 3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfc;
  param_1[0x12] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x13) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x16] = _DAT_1464aa6c0;
  param_1[0x17] = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xf4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xec) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfc;
  param_1[0x23] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x24) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x27] = _DAT_1464aa6c0;
  param_1[0x28] = uVar1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x2f) = uVar2;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x174) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x184) = 3;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) & 0xfc;
  param_1[0x34] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x35) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x38] = _DAT_1464aa6c0;
  param_1[0x39] = uVar1;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x3f) = uVar2;
  *(undefined1 *)(param_1 + 0x41) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x204) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 3;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  *(undefined4 *)(param_1 + 0x45) = 0x40000000;
  return param_1;
}



// FUNCTION 1417f13c0 FUN_1417f13c0 body=256 status=ok
// SIG undefined FUN_1417f13c0(void)

undefined8 *
FUN_1417f13c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4edf0;
  param_1[1] = 0;
  param_1[2] = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  param_1[3] = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144042bf8;
  *(undefined2 *)(param_1 + 4) = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 1;
  local_28 = 0x3f800000;
  local_24 = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,&local_40,param_3,param_4,0x3f800000);
  *(undefined4 *)(param_1 + 5) = local_30;
  *(undefined1 *)((longlong)param_1 + 0x34) = local_24;
  *(undefined4 *)(param_1 + 6) = local_28;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 7,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1417f14c0 FSlotBase body=53 status=ok
// SIG undefined FSlotBase(void)

undefined8 * FSlotBase::FSlotBase(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d4edf0;
  param_1[2] = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  param_1[3] = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1417f1500 FSpinBoxStyle body=951 status=ok
// SIG undefined FSpinBoxStyle(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FSpinBoxStyle::FSpinBoxStyle(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f5c8;
  param_1[1] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 2) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[5] = _DAT_1464aa6c0;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 100) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x74) = 3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfc;
  param_1[0x12] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x13) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x16] = _DAT_1464aa6c0;
  param_1[0x17] = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xf4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xec) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfc;
  param_1[0x23] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x24) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x27] = _DAT_1464aa6c0;
  param_1[0x28] = uVar1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x2f) = uVar2;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x174) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x184) = 3;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) & 0xfc;
  param_1[0x34] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x35) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x38] = _DAT_1464aa6c0;
  param_1[0x39] = uVar1;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x3f) = uVar2;
  *(undefined1 *)(param_1 + 0x41) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x204) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 3;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  param_1[0x45] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x46) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x49] = _DAT_1464aa6c0;
  param_1[0x4a] = uVar1;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x51) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined1 *)(param_1 + 0x52) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x28c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x284) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x294) = 3;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfc;
  param_1[0x56] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x58) = 2;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x40000000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x40000000;
  return param_1;
}



// FUNCTION 1417f18c0 FSplitterStyle body=111 status=ok
// SIG undefined FSplitterStyle(void)

undefined8 * FSplitterStyle::FSplitterStyle(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_144042b80;
  *param_1 = &PTR_FUN_144d4f5e0;
  FUN_14080bc50(param_1 + 1,param_2 + 8);
  FUN_14080bc50(param_1 + 0x12,param_2 + 0x90);
  return param_1;
}



// FUNCTION 1417f1930 FSplitterStyle body=325 status=ok
// SIG undefined FSplitterStyle(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FSplitterStyle::FSplitterStyle(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  *param_1 = &PTR_FUN_144d4f5e0;
  param_1[1] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 2) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[5] = _DAT_1464aa6c0;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 100) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x74) = 3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfc;
  param_1[0x12] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x13) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x16] = _DAT_1464aa6c0;
  param_1[0x17] = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xf4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xec) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfc;
  return param_1;
}



// FUNCTION 1417f1a80 FStandaloneCompositeFont body=214 status=ok
// SIG undefined FStandaloneCompositeFont(void)

undefined8 *
FStandaloneCompositeFont::FStandaloneCompositeFont
          (undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,
          undefined1 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = *param_3;
  *param_3 = 0;
  lVar4 = param_3[1];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 2,0);
  puVar3 = (undefined8 *)param_1[2];
  *puVar3 = *param_2;
  puVar3[1] = lVar2;
  *(int *)(puVar3 + 2) = (int)lVar4;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uVar1;
  *(undefined1 *)((longlong)puVar3 + 0x19) = param_5;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  puVar3[4] = 0;
  *(undefined1 *)(puVar3 + 3) = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  FGCObject::FGCObject(param_1);
  *param_1 = &PTR__scalar_deleting_destructor__144d4e820;
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1417f1b60 FScrollBarStyle body=328 status=ok
// SIG undefined FScrollBarStyle(void)

undefined8 * FScrollBarStyle::FScrollBarStyle(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_144042b80;
  *param_1 = &PTR__scalar_deleting_destructor__144d4f5f8;
  FUN_14080bc50(param_1 + 1,param_2 + 8);
  FUN_14080bc50(param_1 + 0x12,param_2 + 0x90);
  FUN_14080bc50(param_1 + 0x23,param_2 + 0x118);
  FUN_14080bc50(param_1 + 0x34,param_2 + 0x1a0);
  FUN_14080bc50(param_1 + 0x45,param_2 + 0x228);
  FUN_14080bc50(param_1 + 0x56,param_2 + 0x2b0);
  FUN_14080bc50(param_1 + 0x67,param_2 + 0x338);
  FUN_14080bc50(param_1 + 0x78,param_2 + 0x3c0);
  FUN_14080bc50(param_1 + 0x89,param_2 + 0x448);
  return param_1;
}



// FUNCTION 1417f1cb0 FTableColumnHeaderStyle body=1571 status=ok
// SIG undefined FTableColumnHeaderStyle(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FTableColumnHeaderStyle::FTableColumnHeaderStyle(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f5f8;
  param_1[1] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 2) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[5] = _DAT_1464aa6c0;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 100) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x74) = 3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfc;
  param_1[0x12] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x13) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x16] = _DAT_1464aa6c0;
  param_1[0x17] = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xf4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xec) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfc;
  param_1[0x23] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x24) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x27] = _DAT_1464aa6c0;
  param_1[0x28] = uVar1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x2f) = uVar2;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x174) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x184) = 3;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) & 0xfc;
  param_1[0x34] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x35) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x38] = _DAT_1464aa6c0;
  param_1[0x39] = uVar1;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x3f) = uVar2;
  *(undefined1 *)(param_1 + 0x41) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x204) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 3;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  param_1[0x45] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x46) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x49] = _DAT_1464aa6c0;
  param_1[0x4a] = uVar1;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x51) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined1 *)(param_1 + 0x52) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x28c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x284) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x294) = 3;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfc;
  param_1[0x56] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x57) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 700) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x5a] = _DAT_1464aa6c0;
  param_1[0x5b] = uVar1;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x62) = uVar2;
  *(undefined4 *)(param_1 + 0x61) = uVar2;
  *(undefined1 *)(param_1 + 99) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x314) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x30c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 3;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xfc;
  param_1[0x67] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x68) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x6b] = _DAT_1464aa6c0;
  param_1[0x6c] = uVar1;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x73) = uVar2;
  *(undefined4 *)(param_1 + 0x72) = uVar2;
  *(undefined1 *)(param_1 + 0x74) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x39c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x394) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 3;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(byte *)(param_1 + 0x77) = *(byte *)(param_1 + 0x77) & 0xfc;
  param_1[0x78] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x79) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x7c] = _DAT_1464aa6c0;
  param_1[0x7d] = uVar1;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x83) = uVar2;
  *(undefined1 *)(param_1 + 0x85) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x424) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x41c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 3;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfc;
  param_1[0x89] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x8a) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x8d] = _DAT_1464aa6c0;
  param_1[0x8e] = uVar1;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x95) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined1 *)(param_1 + 0x96) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x4ac) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 3;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) & 0xfc;
  return param_1;
}



// FUNCTION 1417f22e0 FTableRowStyle body=483 status=ok
// SIG undefined FTableRowStyle(void)

undefined8 * FTableRowStyle::FTableRowStyle(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_144042b80;
  *param_1 = &PTR__scalar_deleting_destructor__144042be0;
  FUN_14080bc50(param_1 + 1,param_2 + 8);
  FUN_14080bc50(param_1 + 0x12,param_2 + 0x90);
  FUN_14080bc50(param_1 + 0x23,param_2 + 0x118);
  FUN_14080bc50(param_1 + 0x34,param_2 + 0x1a0);
  FUN_14080bc50(param_1 + 0x45,param_2 + 0x228);
  FUN_14080bc50(param_1 + 0x56,param_2 + 0x2b0);
  FUN_14080bc50(param_1 + 0x67,param_2 + 0x338);
  FUN_14080bc50(param_1 + 0x78,param_2 + 0x3c0);
  FUN_14080bc50(param_1 + 0x89,param_2 + 0x448);
  FUN_1417ee5f0(param_1 + 0x9a,param_2 + 0x4d0);
  FUN_1417ee5f0(param_1 + 0x9f,param_2 + 0x4f8);
  FUN_14080bc50(param_1 + 0xa4,param_2 + 0x520);
  FUN_14080bc50(param_1 + 0xb5,param_2 + 0x5a8);
  FUN_14080bc50(param_1 + 0xc6,param_2 + 0x630);
  return param_1;
}



// FUNCTION 1417f24d0 FTableRowStyle body=2191 status=ok
// SIG undefined FTableRowStyle(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FTableRowStyle::FTableRowStyle(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  *param_1 = &PTR__scalar_deleting_destructor__144042be0;
  param_1[1] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 2) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[5] = _DAT_1464aa6c0;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 100) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x74) = 3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfc;
  param_1[0x12] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x13) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x16] = _DAT_1464aa6c0;
  param_1[0x17] = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xf4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xec) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfc;
  param_1[0x23] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x24) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x27] = _DAT_1464aa6c0;
  param_1[0x28] = uVar1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x2f) = uVar2;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x174) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x184) = 3;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) & 0xfc;
  param_1[0x34] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x35) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x38] = _DAT_1464aa6c0;
  param_1[0x39] = uVar1;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x3f) = uVar2;
  *(undefined1 *)(param_1 + 0x41) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x204) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 3;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  param_1[0x45] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x46) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x49] = _DAT_1464aa6c0;
  param_1[0x4a] = uVar1;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x51) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined1 *)(param_1 + 0x52) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x28c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x284) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x294) = 3;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfc;
  param_1[0x56] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x57) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 700) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x5a] = _DAT_1464aa6c0;
  param_1[0x5b] = uVar1;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x62) = uVar2;
  *(undefined4 *)(param_1 + 0x61) = uVar2;
  *(undefined1 *)(param_1 + 99) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x314) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x30c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 3;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xfc;
  param_1[0x67] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x68) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x6b] = _DAT_1464aa6c0;
  param_1[0x6c] = uVar1;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x73) = uVar2;
  *(undefined4 *)(param_1 + 0x72) = uVar2;
  *(undefined1 *)(param_1 + 0x74) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x39c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x394) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 3;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(byte *)(param_1 + 0x77) = *(byte *)(param_1 + 0x77) & 0xfc;
  param_1[0x78] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x79) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x7c] = _DAT_1464aa6c0;
  param_1[0x7d] = uVar1;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x83) = uVar2;
  *(undefined1 *)(param_1 + 0x85) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x424) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x41c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 3;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfc;
  param_1[0x89] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x8a) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x8d] = _DAT_1464aa6c0;
  param_1[0x8e] = uVar1;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x95) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined1 *)(param_1 + 0x96) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x4ac) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 3;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) & 0xfc;
  param_1[0x9a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x9c) = 2;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x9f] = _DAT_1464aa6c0;
  param_1[0xa0] = uVar1;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0xa5) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0xa8] = _DAT_1464aa6c0;
  param_1[0xa9] = uVar1;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xaf) = uVar2;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x584) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x57c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 3;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfc;
  param_1[0xb5] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0xb6) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0xb9] = _DAT_1464aa6c0;
  param_1[0xba] = uVar1;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xc1) = uVar2;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x60c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x604) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x614) = 3;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(byte *)(param_1 + 0xc5) = *(byte *)(param_1 + 0xc5) & 0xfc;
  param_1[0xc6] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 199) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0xca] = _DAT_1464aa6c0;
  param_1[0xcb] = uVar1;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xd2) = uVar2;
  *(undefined4 *)(param_1 + 0xd1) = uVar2;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x694) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x68c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 3;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) & 0xfc;
  return param_1;
}



// FUNCTION 1417f2d60 FTextBlockStyle body=289 status=ok
// SIG undefined FTextBlockStyle(void)

undefined8 * FTextBlockStyle::FTextBlockStyle(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_144042b80;
  *param_1 = &PTR__scalar_deleting_destructor__144042b98;
  FUN_1417efb80(param_1 + 1,param_2 + 8);
  FUN_1417ee5f0(param_1 + 0xb,param_2 + 0x58);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  puVar2 = (undefined1 *)(param_2 + 0x88);
  puVar3 = param_1 + 0x11;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_1417ee5f0(param_1 + 0x13,param_2 + 0x98);
  puVar2 = (undefined1 *)(param_2 + 0xc0);
  puVar3 = param_1 + 0x18;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_14080bc50(param_1 + 0x1a,param_2 + 0xd0);
  FUN_14080bc50(param_1 + 0x2b,param_2 + 0x158);
  return param_1;
}



// FUNCTION 1417f2e90 FUN_1417f2e90 body=558 status=ok
// SIG undefined FUN_1417f2e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417f2e90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144042b98;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  uVar1 = _DAT_1464aa6e8;
  param_1[5] = _DAT_1464aa6e0;
  param_1[6] = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 3;
  param_1[0xb] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d88._4_4_;
  uVar1 = _DAT_1464aa6e8;
  param_1[0x11] = _DAT_1464aa6e0;
  param_1[0x12] = uVar1;
  param_1[0x13] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x15) = 2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x1b) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x1e] = _DAT_1464aa6c0;
  param_1[0x1f] = uVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  uVar3 = DAT_1468b5d88._4_4_;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x26) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x25) = uVar2;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  *(undefined4 *)((longlong)param_1 + 300) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 3;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfc;
  param_1[0x2b] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x2c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x2f] = _DAT_1464aa6c0;
  param_1[0x30] = uVar1;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  uVar3 = DAT_1468b5d88._4_4_;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x37) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x36) = uVar2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 3;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0x3b) & 0xfc;
  return param_1;
}



// FUNCTION 1417f30c0 FUN_1417f30c0 body=504 status=ok
// SIG undefined FUN_1417f30c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1417f30c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5,longlong param_6,undefined4 param_7,undefined8 *param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar4 = param_2[1];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  puVar1 = param_1 + 10;
  uVar5 = param_3[8];
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 2);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_3 + 0x14);
  param_1[7] = param_3[3];
  param_1[8] = param_3[4];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 5);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_3 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_3 + 0x2d);
  *puVar1 = param_3[6];
  lVar4 = param_3[7];
  param_1[0xb] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0xc] = param_3[8];
  uStack_30 = (longlong *)param_3[7];
  local_38 = param_3[6];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)uStack_30 + 0xc) = *(int *)((longlong)uStack_30 + 0xc) + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar10 = *puVar1;
    plVar11 = (longlong *)param_1[0xb];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 0x54) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_30._4_4_;
    local_38 = uVar10;
    uStack_30 = plVar11;
  }
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)uStack_30 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*uStack_30 + 8))(uStack_30,1);
    }
  }
  param_1[0xc] = uVar5;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0x100;
  uVar5 = param_4[1];
  param_1[0xd] = *param_4;
  param_1[0xe] = uVar5;
  uVar5 = param_4[3];
  param_1[0xf] = param_4[2];
  param_1[0x10] = uVar5;
  uVar5 = param_4[5];
  param_1[0x11] = param_4[4];
  param_1[0x12] = uVar5;
  uVar6 = *param_5;
  uVar7 = param_5[1];
  uVar8 = param_5[2];
  uVar9 = param_5[3];
  param_1[0x13] = param_4[6];
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0x15) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar9;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if (*(char *)(param_6 + 0x40) != '\0') {
    FSlateClippingState::FSlateClippingState(param_1 + 0x16,param_6);
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  *(undefined4 *)(param_1 + 0x1f) = param_7;
  uVar5 = param_8[1];
  *(undefined8 *)((longlong)param_1 + 0xfc) = *param_8;
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar5;
  uVar5 = param_8[3];
  *(undefined8 *)((longlong)param_1 + 0x10c) = param_8[2];
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar5;
  uVar5 = param_8[4];
  uVar10 = param_8[5];
  *(undefined1 *)((longlong)param_1 + 300) = param_9;
  *(undefined8 *)((longlong)param_1 + 0x11c) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x124) = uVar10;
  return param_1;
}



// FUNCTION 1417f32c0 FUN_1417f32c0 body=936 status=ok
// SIG undefined FUN_1417f32c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417f32c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f598;
  FUN_1417f1100();
  param_1[0x47] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x48) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x4b] = _DAT_1464aa6c0;
  param_1[0x4c] = uVar1;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x53) = uVar2;
  *(undefined4 *)(param_1 + 0x52) = uVar2;
  *(undefined1 *)(param_1 + 0x54) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x29c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x294) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 3;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(byte *)(param_1 + 0x57) = *(byte *)(param_1 + 0x57) & 0xfc;
  param_1[0x58] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x59) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x5c] = _DAT_1464aa6c0;
  param_1[0x5d] = uVar1;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 99) = uVar2;
  *(undefined1 *)(param_1 + 0x65) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x324) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x31c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 3;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfc;
  param_1[0x69] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x6a) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x6d] = _DAT_1464aa6c0;
  param_1[0x6e] = uVar1;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x75) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined1 *)(param_1 + 0x76) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 3;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) & 0xfc;
  param_1[0x7a] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x7b) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x7e] = _DAT_1464aa6c0;
  param_1[0x7f] = uVar1;
  *(undefined1 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x86) = uVar2;
  *(undefined4 *)(param_1 + 0x85) = uVar2;
  *(undefined1 *)(param_1 + 0x87) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x434) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x42c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 3;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(byte *)(param_1 + 0x8a) = *(byte *)(param_1 + 0x8a) & 0xfc;
  param_1[0x8b] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x8c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x8f] = _DAT_1464aa6c0;
  param_1[0x90] = uVar1;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x97) = uVar2;
  *(undefined4 *)(param_1 + 0x96) = uVar2;
  *(undefined1 *)(param_1 + 0x98) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 3;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) & 0xfc;
  return param_1;
}



// FUNCTION 1417f3670 FUN_1417f3670 body=244 status=ok
// SIG undefined FUN_1417f3670(void)

longlong * FUN_1417f3670(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *(longlong *)(param_2 + 0x140);
  lVar7 = *(longlong *)(param_2 + 0x148);
  param_1[3] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
  }
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 0x130)) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(param_2 + 0x128);
      if (*(longlong *)(param_2 + 0x128) == 0) {
        lVar5 = param_2 + 8;
      }
      lVar2 = *(longlong *)(lVar5 + 0x40 + lVar7);
      uVar3 = *(undefined8 *)(lVar5 + 0x38 + lVar7);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x48;
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
      *puVar4 = uVar3;
      puVar4[1] = lVar2;
    } while (iVar6 < *(int *)(param_2 + 0x130));
  }
  return param_1;
}



// FUNCTION 1417f3770 FWidgetAndPointer body=85 status=ok
// SIG undefined FWidgetAndPointer(void)

undefined8 *
FWidgetAndPointer::FWidgetAndPointer(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  lVar1 = param_2[8];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = *param_3;
  lVar1 = param_3[1];
  param_1[10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1417f37d0 FUN_1417f37d0 body=90 status=ok
// SIG undefined FUN_1417f37d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417f37d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = uRam00000001469eb078;
  *param_1 = _DAT_1469eb070;
  param_1[1] = uVar2;
  uVar2 = uRam00000001469eb088;
  param_1[2] = _DAT_1469eb080;
  param_1[3] = uVar2;
  uVar2 = uRam00000001469eb098;
  param_1[4] = _DAT_1469eb090;
  param_1[5] = uVar2;
  param_1[6] = DAT_1469eb0a0;
  param_1[7] = DAT_1469eb0a8;
  lVar3 = DAT_1469eb0b0;
  param_1[8] = DAT_1469eb0b0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1417f3830 FUN_1417f3830 body=729 status=ok
// SIG undefined FUN_1417f3830(void)

undefined1 * FUN_1417f3830(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  longlong **pplVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  
  plVar16 = (longlong *)0x0;
  puVar1 = param_1 + 8;
  local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
  *param_1 = DAT_1464b9eed;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  param_1[0x138] = 0;
  iVar13 = (int)param_2[1];
  if (*(int *)(param_1 + 0x134) < iVar13) {
    FUN_141858550(puVar1,iVar13);
    iVar13 = (int)param_2[1];
  }
  puVar17 = (undefined8 *)*param_2;
  puVar18 = puVar17 + (longlong)iVar13 * 0xb;
  if (puVar17 != puVar18) {
    do {
      iVar13 = *(int *)(param_1 + 0x130);
      lVar20 = (longlong)iVar13;
      *(int *)(param_1 + 0x130) = iVar13 + 1;
      if (*(int *)(param_1 + 0x134) < iVar13 + 1) {
        TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(puVar1,iVar13);
      }
      uVar9 = puVar17[1];
      puVar15 = *(undefined1 **)(param_1 + 0x128);
      if (*(undefined1 **)(param_1 + 0x128) == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      *(undefined8 *)(puVar15 + lVar20 * 0x48) = *puVar17;
      *(undefined8 *)((longlong)(puVar15 + lVar20 * 0x48) + 8) = uVar9;
      uVar9 = puVar17[3];
      *(undefined8 *)(puVar15 + lVar20 * 0x48 + 0x10) = puVar17[2];
      *(undefined8 *)((longlong)(puVar15 + lVar20 * 0x48 + 0x10) + 8) = uVar9;
      uVar6 = *(undefined4 *)((longlong)puVar17 + 0x24);
      uVar7 = *(undefined4 *)(puVar17 + 5);
      uVar8 = *(undefined4 *)((longlong)puVar17 + 0x2c);
      puVar3 = (undefined4 *)(puVar15 + lVar20 * 0x48 + 0x20);
      *puVar3 = *(undefined4 *)(puVar17 + 4);
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(undefined8 *)(puVar15 + lVar20 * 0x48 + 0x30) = puVar17[6];
      *(undefined8 *)(puVar15 + lVar20 * 0x48 + 0x38) = puVar17[7];
      lVar19 = puVar17[8];
      *(longlong *)(puVar15 + lVar20 * 0x48 + 0x40) = lVar19;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      puVar17 = puVar17 + 0xb;
    } while (puVar17 != puVar18);
    iVar13 = (int)param_2[1];
    puVar17 = (undefined8 *)*param_2;
  }
  if (iVar13 < 1) {
    pplVar14 = &local_38;
    bVar12 = false;
    bVar11 = false;
    bVar10 = true;
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
    plVar21 = local_48;
  }
  else {
    local_40 = (longlong *)puVar17[8];
    plVar16 = (longlong *)puVar17[7];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    pplVar14 = &local_48;
    bVar12 = true;
    bVar11 = true;
    bVar10 = false;
    plVar21 = local_40;
    local_48 = plVar16;
  }
  plVar4 = pplVar14[1];
  pplVar14[1] = (longlong *)0x0;
  *(longlong **)(param_1 + 0x140) = plVar16;
  *(longlong **)(param_1 + 0x148) = plVar4;
  *pplVar14 = (longlong *)0x0;
  plVar16 = plStack_30;
  if ((bVar10) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_30 + 1;
    lVar20 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar16 = local_40;
  if ((bVar11) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar20 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if ((bVar12) && (plVar21 != (longlong *)0x0)) {
    LOCK();
    plVar16 = plVar21 + 1;
    lVar20 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
  }
  plVar16 = (longlong *)(param_1 + 0x150);
  *plVar16 = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  iVar13 = (int)param_2[1];
  if (0 < iVar13) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar16,iVar13);
    iVar13 = (int)param_2[1];
  }
  lVar20 = *param_2;
  lVar19 = (longlong)iVar13 * 0x58 + lVar20;
  for (; lVar20 != lVar19; lVar20 = lVar20 + 0x58) {
    iVar13 = *(int *)(param_1 + 0x158);
    *(int *)(param_1 + 0x158) = iVar13 + 1;
    if (*(int *)(param_1 + 0x15c) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar13);
    }
    puVar17 = (undefined8 *)((longlong)iVar13 * 0x10 + *plVar16);
    *puVar17 = *(undefined8 *)(lVar20 + 0x48);
    lVar5 = *(longlong *)(lVar20 + 0x50);
    puVar17[1] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
  ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(param_2);
  return param_1;
}



// FUNCTION 1417f3b10 FUN_1417f3b10 body=376 status=ok
// SIG undefined FUN_1417f3b10(void)

undefined1 * FUN_1417f3b10(undefined1 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  
  *param_1 = *param_3;
  *(undefined8 *)(param_1 + 0x128) = 0;
  iVar12 = *(int *)(param_3 + 0x130);
  puVar11 = *(undefined8 **)(param_3 + 0x128);
  *(int *)(param_1 + 0x130) = iVar12;
  if (iVar12 == 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  else {
    FUN_141857eb0(param_1 + 8,iVar12,0);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)(param_3 + 8);
    }
    puVar10 = *(undefined1 **)(param_1 + 0x128);
    if (*(undefined1 **)(param_1 + 0x128) == (undefined1 *)0x0) {
      puVar10 = param_1 + 8;
    }
    lVar13 = (longlong)puVar11 - (longlong)puVar10;
    puVar9 = (undefined8 *)(puVar10 + 0x38);
    do {
      uVar8 = puVar11[1];
      puVar9[-7] = *puVar11;
      puVar9[-6] = uVar8;
      uVar8 = puVar11[3];
      puVar9[-5] = puVar11[2];
      puVar9[-4] = uVar8;
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x24);
      uVar6 = *(undefined4 *)(puVar11 + 5);
      uVar7 = *(undefined4 *)((longlong)puVar11 + 0x2c);
      *(undefined4 *)(puVar9 + -3) = *(undefined4 *)(puVar11 + 4);
      *(undefined4 *)((longlong)puVar9 + -0x14) = uVar5;
      *(undefined4 *)(puVar9 + -2) = uVar6;
      *(undefined4 *)((longlong)puVar9 + -0xc) = uVar7;
      puVar9[-1] = puVar11[6];
      *puVar9 = *(undefined8 *)(lVar13 + (longlong)puVar9);
      lVar3 = *(longlong *)(lVar13 + 8 + (longlong)puVar9);
      puVar9[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      puVar11 = puVar11 + 9;
      puVar9 = puVar9 + 9;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  param_1[0x138] = param_3[0x138];
  *(undefined8 *)(param_1 + 0x140) = *param_2;
  lVar13 = param_2[1];
  *(longlong *)(param_1 + 0x148) = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1417f3c90 FWidgetPath body=63 status=ok
// SIG undefined FWidgetPath(void)

undefined1 * FWidgetPath::FWidgetPath(undefined1 *param_1)

{
  *param_1 = DAT_1464b9ee8;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  param_1[0x138] = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  return param_1;
}



// FUNCTION 1417f3cd0 FUN_1417f3cd0 body=218 status=ok
// SIG undefined FUN_1417f3cd0(void)

longlong * FUN_1417f3cd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  iVar4 = (int)param_2[1];
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,iVar4,0);
    plVar5 = (longlong *)*param_1;
    plVar2 = (longlong *)(lVar1 + 0x50);
    plVar3 = plVar5 + 10;
    do {
      lVar1 = plVar2[-9];
      *plVar5 = plVar2[-10];
      plVar5[1] = lVar1;
      lVar1 = plVar2[-7];
      plVar5[2] = plVar2[-8];
      plVar5[3] = lVar1;
      lVar1 = plVar2[-5];
      plVar5[4] = plVar2[-6];
      plVar5[5] = lVar1;
      plVar5[6] = plVar2[-4];
      plVar3[-3] = plVar2[-3];
      lVar1 = plVar2[-2];
      plVar3[-2] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      plVar3[-1] = plVar2[-1];
      lVar1 = *plVar2;
      *plVar3 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      plVar5 = plVar5 + 0xb;
      plVar3 = plVar3 + 0xb;
      plVar2 = plVar2 + 0xb;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  return param_1;
}



// FUNCTION 1417f3db0 FUN_1417f3db0 body=219 status=ok
// SIG undefined FUN_1417f3db0(void)

longlong * FUN_1417f3db0(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  iVar4 = (int)param_2[1];
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,iVar4,0);
    plVar5 = (longlong *)*param_1;
    plVar2 = (longlong *)(lVar1 + 0x50);
    plVar3 = plVar5 + 10;
    do {
      lVar1 = plVar2[-9];
      *plVar5 = plVar2[-10];
      plVar5[1] = lVar1;
      lVar1 = plVar2[-7];
      plVar5[2] = plVar2[-8];
      plVar5[3] = lVar1;
      lVar1 = plVar2[-5];
      plVar5[4] = plVar2[-6];
      plVar5[5] = lVar1;
      plVar5[6] = plVar2[-4];
      plVar3[-3] = plVar2[-3];
      lVar1 = plVar2[-2];
      plVar3[-2] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      plVar3[-1] = plVar2[-1];
      lVar1 = *plVar2;
      *plVar3 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      plVar5 = plVar5 + 0xb;
      plVar3 = plVar3 + 0xb;
      plVar2 = plVar2 + 0xb;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  return param_1;
}



// FUNCTION 1417f3e90 FUN_1417f3e90 body=1408 status=ok
// SIG undefined FUN_1417f3e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417f3e90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f670;
  FUN_1417e8800(param_1 + 1);
  FUN_1417e8800(param_1 + 0x50);
  FUN_1417e8800(param_1 + 0x9f);
  FUN_1417e8800(param_1 + 0xee);
  FUN_1417f2e90();
  param_1[0x179] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x17a) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xbd4) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xbdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbe4) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x17d] = _DAT_1464aa6c0;
  param_1[0x17e] = uVar1;
  *(undefined1 *)(param_1 + 0x17f) = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x185) = uVar2;
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  *(undefined1 *)(param_1 + 0x186) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc2c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xc24) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xc34) = 3;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  *(byte *)(param_1 + 0x189) = *(byte *)(param_1 + 0x189) & 0xfc;
  param_1[0x18a] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x18b) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xc5c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xc64) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc6c) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x18e] = _DAT_1464aa6c0;
  param_1[399] = uVar1;
  *(undefined1 *)(param_1 + 400) = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x196) = uVar2;
  *(undefined4 *)(param_1 + 0x195) = uVar2;
  *(undefined1 *)(param_1 + 0x197) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xcb4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xcac) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xcbc) = 3;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  *(byte *)(param_1 + 0x19a) = *(byte *)(param_1 + 0x19a) & 0xfc;
  param_1[0x19b] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x19c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xce4) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xcec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcf4) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x19f] = _DAT_1464aa6c0;
  param_1[0x1a0] = uVar1;
  *(undefined1 *)(param_1 + 0x1a1) = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  uVar1 = DAT_1468b5d88;
  uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xd3c) = uStackX_c;
  *(int *)(param_1 + 0x1a7) = (int)uVar1;
  *(int *)(param_1 + 0x1a6) = (int)uVar1;
  *(undefined4 *)((longlong)param_1 + 0xd34) = uStackX_c;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd44) = 3;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  *(byte *)(param_1 + 0x1ab) = *(byte *)(param_1 + 0x1ab) & 0xfc;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x1ac] = _DAT_1464aa6c0;
  param_1[0x1ad] = uVar1;
  *(undefined1 *)(param_1 + 0x1ae) = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x1b2) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xd94) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xd9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xda4) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x1b5] = _DAT_1464aa6c0;
  param_1[0x1b6] = uVar1;
  *(undefined1 *)(param_1 + 0x1b7) = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1bd) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  *(undefined1 *)(param_1 + 0x1be) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xdec) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xde4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xdf4) = 3;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfc;
  param_1[0x1c2] = 0x3dcccccd3dcccccd;
  param_1[0x1c3] = 0x3f8000003dcccccd;
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x1c8) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xe44) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xe4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe54) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x1cb] = _DAT_1464aa6c0;
  param_1[0x1cc] = uVar1;
  *(undefined1 *)(param_1 + 0x1cd) = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1d3) = uVar2;
  *(undefined4 *)(param_1 + 0x1d2) = uVar2;
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xe9c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xe94) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xea4) = 3;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  *(byte *)(param_1 + 0x1d7) = *(byte *)(param_1 + 0x1d7) & 0xfc;
  param_1[0x1d8] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x1d9) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xecc) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xed4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xedc) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x1dc] = _DAT_1464aa6c0;
  param_1[0x1dd] = uVar1;
  *(undefined1 *)(param_1 + 0x1de) = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  uVar1 = DAT_1468b5d88;
  uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xf24) = uStackX_c;
  *(int *)(param_1 + 0x1e4) = (int)uVar1;
  *(undefined4 *)((longlong)param_1 + 0xf1c) = uStackX_c;
  *(int *)(param_1 + 0x1e3) = (int)uVar1;
  *(undefined1 *)(param_1 + 0x1e5) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf2c) = 3;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  *(byte *)(param_1 + 0x1e8) = *(byte *)(param_1 + 0x1e8) & 0xfc;
  param_1[0x1e9] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x1ea) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xf54) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xf5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf64) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x1ed] = _DAT_1464aa6c0;
  param_1[0x1ee] = uVar1;
  *(undefined1 *)(param_1 + 0x1ef) = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1f5) = uVar2;
  *(undefined4 *)(param_1 + 500) = uVar2;
  *(undefined1 *)(param_1 + 0x1f6) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xfac) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xfa4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0xfb4) = 3;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  *(byte *)(param_1 + 0x1f9) = *(byte *)(param_1 + 0x1f9) & 0xfc;
  return param_1;
}



// FUNCTION 1417f4410 SBoxPanel body=94 status=ok
// SIG undefined SBoxPanel(void)

undefined8 * SBoxPanel::SBoxPanel(undefined8 *param_1,undefined4 param_2)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d4f058;
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = &PTR_Count_144d4f030;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x46) = param_2;
  return param_1;
}



// FUNCTION 1417f4470 FUN_1417f4470 body=402 status=ok
// SIG undefined FUN_1417f4470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417f4470(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  
  FUN_1417f46d0();
  *param_1 = &PTR_FUN_144d4ee28;
  param_1[0x41] = &PTR__purecall_143f48980;
  param_1[0x42] = param_1;
  param_1[0x43] = &PTR__scalar_deleting_destructor__144d4edf0;
  param_1[0x44] = 0;
  param_1[0x45] = DAT_1469eb218;
  lVar4 = DAT_1469eb220;
  param_1[0x46] = DAT_1469eb220;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x44] = param_1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x41] = &PTR_SetMonitoring_144d4edf8;
  param_1[0x43] = &PTR_LAB_144d4ee20;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar6 = _DAT_1464aa6c8;
  uVar5 = _DAT_1464aa6c0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  local_28 = 2;
  param_1[0x51] = uVar5;
  param_1[0x52] = uVar6;
  param_1[0x54] = 0;
  local_38 = 0x3f800000;
  uStack_34 = 0;
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  FUN_1417ee5f0(param_1 + 0x56,&local_38);
  plVar7 = plStack_18;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_18 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return param_1;
}



// FUNCTION 1417f4610 FUN_1417f4610 body=81 status=ok
// SIG undefined FUN_1417f4610(void)

undefined8 * FUN_1417f4610(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR_FUN_144d4f288;
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = &PTR_Count_144d4f260;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  return param_1;
}



// FUNCTION 1417f4670 FUN_1417f4670 body=91 status=ok
// SIG undefined FUN_1417f4670(void)

undefined8 * FUN_1417f4670(undefined8 *param_1)

{
  FUN_1417f46d0();
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = &PTR_Count_144d4f030;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  *param_1 = &PTR__scalar_deleting_destructor__144d4f058;
  *(undefined4 *)(param_1 + 0x46) = 1;
  return param_1;
}



// FUNCTION 1417f46d0 FUN_1417f46d0 body=446 status=ok
// SIG undefined FUN_1417f46d0(void)

undefined8 * FUN_1417f46d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) & 0xfc;
  *param_1 = &PTR__scalar_deleting_destructor__144d4ebe8;
  *(undefined1 *)(param_1 + 3) = 0xe;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf7 | 7;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0x101;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = DAT_1464b9ee8;
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x104) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  return param_1;
}



// FUNCTION 1417f4890 FUN_1417f4890 body=1490 status=ok
// SIG undefined FUN_1417f4890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417f4890(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  
  FUN_1417f46d0();
  puVar10 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144d4ee28;
  param_1[0x41] = &PTR__purecall_143f48980;
  param_1[0x42] = param_1;
  param_1[0x43] = &PTR__scalar_deleting_destructor__144d4edf0;
  param_1[0x44] = 0;
  param_1[0x45] = DAT_1469eb218;
  lVar8 = DAT_1469eb220;
  param_1[0x46] = DAT_1469eb220;
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x44] = param_1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x41] = &PTR_SetMonitoring_144d4edf8;
  param_1[0x43] = &PTR_LAB_144d4ee20;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar5 = _DAT_1464aa6c8;
  uVar4 = _DAT_1464aa6c0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  local_28 = 2;
  param_1[0x51] = uVar4;
  param_1[0x52] = uVar5;
  param_1[0x54] = 0;
  local_38 = 0x3f800000;
  uStack_34 = 0;
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  FUN_1417ee5f0(param_1 + 0x56,&local_38);
  plVar6 = plStack_18;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_18 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  *param_1 = &PTR_FUN_144d4f740;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x60) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x61) = 0xbf800000;
  FText::FText(param_1 + 0x62);
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 1;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) | 0x80;
  *(byte *)((longlong)param_1 + 0x351) = *(byte *)((longlong)param_1 + 0x351) & 2;
  *(byte *)((longlong)param_1 + 0x352) = *(byte *)((longlong)param_1 + 0x352) & 0xfe;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x69) = 2;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 1;
  *(undefined4 *)(param_1 + 0x6b) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x35c) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x6c) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x364) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x6d) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x36c) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x6e) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x374) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x6f) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x37c) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x70) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 900) = DAT_1468b5d88._4_4_;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0x41c00000;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x42c80000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(byte *)((longlong)param_1 + 0x41c) = *(byte *)((longlong)param_1 + 0x41c) & 0xf9 | 1;
  *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfc;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  uVar4 = DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res8,"Window",1);
  lVar8 = FUN_1417e4290(uVar4,*puVar7,0);
  param_1[0x8d] = lVar8;
  param_1[0x8e] = lVar8 + 0xec0;
  *(undefined1 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  puVar9 = (undefined8 *)operator_new(0x50);
  puVar7 = puVar10;
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar7 = puVar9;
  }
  puVar9 = (undefined8 *)operator_new(0x18);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 1) = 1;
    *puVar9 = &PTR_FUN_144d50308;
    *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
    puVar9[2] = puVar7;
    puVar10 = puVar9;
  }
  param_1[0x95] = puVar7;
  param_1[0x96] = puVar10;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x95,puVar7,puVar7);
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 2;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 2;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0xffffffffffffffff;
  param_1[0xb5] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 1;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  return param_1;
}



// FUNCTION 1417f4e70 UFontBulkData body=117 status=ok
// SIG undefined UFontBulkData(void)

undefined8 * UFontBulkData::UFontBulkData(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144d4f968;
  FUntypedBulkData::FUntypedBulkData(param_1 + 5);
  param_1[5] = &PTR__scalar_deleting_destructor__143f48b90;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x13),4000);
  FUntypedBulkData::SetBulkDataFlags(param_1 + 5,0x202);
  return param_1;
}



// FUNCTION 1417f4ef0 ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(void)

void TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
     ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>
               (longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
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
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f4f90 FUN_1417f4f90 body=178 status=ok
// SIG undefined FUN_1417f4f90(void)

void FUN_1417f4f90(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar4 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 0x18);
    do {
      if (plVar5[0xb] != 0) {
        FMemory::Free();
      }
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      plVar3 = (longlong *)plVar5[-2];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      plVar5 = plVar5 + 0x11;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f5050 ~TArray<FCompositeSubFont,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FCompositeSubFont,FDefaultAllocator>(void)

void TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FMemory::Free();
      }
      TArray<FTypefaceEntry,FDefaultAllocator>::~TArray<FTypefaceEntry,FDefaultAllocator>(lVar1);
      lVar1 = lVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 1417f50c0 FUN_1417f50c0 body=258 status=ok
// SIG undefined FUN_1417f50c0(void)

void FUN_1417f50c0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar4 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar5 = (longlong *)(lVar4 + 8);
    do {
      lVar4 = 4;
      plVar6 = plVar5 + 0xd;
      do {
        plVar3 = (longlong *)plVar6[-2];
        plVar6 = plVar6 + -2;
        lVar4 = lVar4 + -1;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      } while (lVar4 != 0);
      plVar6 = (longlong *)*plVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      plVar5 = plVar5 + 0xd;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f51d0 ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> body=224 status=ok
// SIG undefined ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(void)

void TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
     ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x40);
    do {
      plVar4 = (longlong *)plVar7[2];
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
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f52b0 FUN_1417f52b0 body=166 status=ok
// SIG undefined FUN_1417f52b0(void)

void FUN_1417f52b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x28);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 8);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f5360 ~TArray<FSlateClippingState,FDefaultAllocator> body=104 status=ok
// SIG undefined ~TArray<FSlateClippingState,FDefaultAllocator>(void)

void TArray<FSlateClippingState,FDefaultAllocator>::~TArray<FSlateClippingState,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    pcVar2 = (char *)(lVar1 + 0x28);
    do {
      if (*(longlong *)(pcVar2 + 8) != 0) {
        FMemory::Free();
      }
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
      }
      pcVar2 = pcVar2 + 0x40;
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



// FUNCTION 1417f53d0 FUN_1417f53d0 body=159 status=ok
// SIG undefined FUN_1417f53d0(void)

void FUN_1417f53d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x68);
    do {
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
      plVar7 = plVar7 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f5470 FUN_1417f5470 body=162 status=ok
// SIG undefined FUN_1417f5470(void)

void FUN_1417f5470(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x98);
    do {
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
      plVar7 = plVar7 + 0x18;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f5520 FUN_1417f5520 body=280 status=ok
// SIG undefined FUN_1417f5520(void)

void FUN_1417f5520(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    pcVar6 = (char *)(lVar5 + 0xc0);
    do {
      if (*pcVar6 != '\0') {
        *pcVar6 = '\0';
        if (*(longlong *)(pcVar6 + -0x10) != 0) {
          FMemory::Free();
        }
        if (pcVar6[-0x18] != '\0') {
          pcVar6[-0x18] = '\0';
        }
      }
      plVar4 = *(longlong **)(pcVar6 + -0x50);
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
      plVar4 = *(longlong **)(pcVar6 + -0x60);
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
      plVar4 = *(longlong **)(pcVar6 + -0x70);
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
      pcVar6 = pcVar6 + 0xf0;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f5640 FUN_1417f5640 body=306 status=ok
// SIG undefined FUN_1417f5640(void)

void FUN_1417f5640(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)*param_1;
  for (iVar7 = (int)param_1[1]; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = (undefined8 *)*plVar8;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 0x16);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 0x12);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 0xf);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 0xc);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 9);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 6);
    *puVar4 = &PTR__scalar_deleting_destructor__144d4edf0;
    if (puVar4[2] != DAT_1469eb218) {
      FUN_141806420(puVar4[2],puVar4[1]);
    }
    plVar5 = (longlong *)puVar4[3];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    FMemory::Free(*plVar8);
    plVar8 = plVar8 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f5780 ~TSparseArray<TSetElement<TTuple<TSharedPtr<FSlateDrawLayerHandle,1>,TSharedPtr<FSlateDrawLayer,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=196 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<TSharedPtr<FSlateDrawLayerHandle,1>,TSharedPtr<FSlateDrawLayer,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<TSharedPtr<FSlateDrawLayerHandle,1>,TSharedPtr<FSlateDrawLayer,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<TSharedPtr<FSlateDrawLayerHandle,1>,TSharedPtr<FSlateDrawLayer,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (*local_38 + (longlong)local_1c * 0x28);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
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
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1417f5850 ~TSparseArray<TSetElement<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1417f5911;
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
LAB_1417f5911:
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
      UE4Tuple_Private::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<SWidget,1>,FArrangedWidget>::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<SWidget,1>,FArrangedWidget>
                ((longlong)iStack_1c * 0x60 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 1417f59e0 ~TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=395 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1417f5aa1;
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
LAB_1417f5aa1:
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
      FUN_1417f7000((longlong)iStack_1c * 0x88 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1417f5b70 FUN_1417f5b70 body=114 status=ok
// SIG undefined FUN_1417f5b70(void)

void FUN_1417f5b70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[5];
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
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1417f5bf0 FUN_1417f5bf0 body=124 status=ok
// SIG undefined FUN_1417f5bf0(void)

void FUN_1417f5bf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  return;
}



// FUNCTION 1417f5c70 FUN_1417f5c70 body=145 status=ok
// SIG undefined FUN_1417f5c70(void)

void FUN_1417f5c70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x80);
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
  return;
}



// FUNCTION 1417f5d10 ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<SWidget,1>,FArrangedWidget> body=142 status=ok
// SIG undefined ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<SWidget,1>,FArrangedWidget>(void)

void UE4Tuple_Private::
     TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<SWidget,1>,FArrangedWidget>::
     ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<SWidget,1>,FArrangedWidget>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
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



// FUNCTION 1417f5da0 FUN_1417f5da0 body=231 status=ok
// SIG undefined FUN_1417f5da0(void)

void FUN_1417f5da0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1c8);
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
  if (*(char *)(param_1 + 0x198) != '\0') {
    *(undefined1 *)(param_1 + 0x198) = 0;
  }
  if (*(char *)(param_1 + 400) != '\0') {
    *(undefined1 *)(param_1 + 400) = 0;
  }
  if (*(char *)(param_1 + 0x188) != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  if (*(char *)(param_1 + 0x180) != '\0') {
    *(undefined1 *)(param_1 + 0x180) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x138);
  plVar4 = *(longlong **)(param_1 + 0x120);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1417f5e90 ~FBatchKey body=179 status=ok
// SIG undefined ~FBatchKey(void)

void FSlateElementBatch::FBatchKey::~FBatchKey(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  return;
}



// FUNCTION 1417f5f50 ~FCheckBoxStyle body=273 status=ok
// SIG undefined ~FCheckBoxStyle(void)

void FCheckBoxStyle::~FCheckBoxStyle(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f490;
  plVar4 = (longlong *)param_1[0xa6];
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
  plVar4 = (longlong *)param_1[0xa1];
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
  FSlateBrush::~FSlateBrush(param_1 + 0x8a);
  FSlateBrush::~FSlateBrush(param_1 + 0x79);
  FSlateBrush::~FSlateBrush(param_1 + 0x68);
  FSlateBrush::~FSlateBrush(param_1 + 0x57);
  FSlateBrush::~FSlateBrush(param_1 + 0x46);
  FSlateBrush::~FSlateBrush(param_1 + 0x35);
  FSlateBrush::~FSlateBrush(param_1 + 0x24);
  FSlateBrush::~FSlateBrush(param_1 + 0x13);
  FSlateBrush::~FSlateBrush(param_1 + 2);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6070 ~FComboBoxStyle body=44 status=ok
// SIG undefined ~FComboBoxStyle(void)

void FComboBoxStyle::~FComboBoxStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f4c0;
  FComboButtonStyle::~FComboButtonStyle(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f60a0 ~FComboButtonStyle body=119 status=ok
// SIG undefined ~FComboButtonStyle(void)

void FComboButtonStyle::~FComboButtonStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f4a8;
  FSlateBrush::~FSlateBrush(param_1 + 0x61);
  FSlateBrush::~FSlateBrush(param_1 + 0x50);
  param_1[1] = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x35);
  FSlateBrush::~FSlateBrush(param_1 + 0x24);
  FSlateBrush::~FSlateBrush(param_1 + 0x13);
  FSlateBrush::~FSlateBrush(param_1 + 2);
  param_1[1] = &PTR_FUN_144042b80;
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6120 ~FCursorReply body=197 status=ok
// SIG undefined ~FCursorReply(void)

void FCursorReply::~FCursorReply(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1417f61f0 FUN_1417f61f0 body=567 status=ok
// SIG undefined FUN_1417f61f0(void)

void FUN_1417f61f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_18;
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    plVar7 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (((0 < iVar4) && (*(longlong *)(param_1 + 0x20) != 0)) &&
       (*(longlong *)(param_1 + 0x28) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        plVar2 = *(longlong **)(param_1 + 0x28);
        local_18 = plVar7;
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
          while (local_18 = (longlong *)0x0, plVar6 = plVar7, !bVar8) {
            LOCK();
            bVar8 = iVar4 == (int)plVar2[1];
            if (bVar8) {
              *(int *)(plVar2 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar8) {
              plVar6 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                local_18 = *(longlong **)(param_1 + 0x20);
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
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar8 = iVar4 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar5 = plVar7, !bVar8) {
            LOCK();
            bVar8 = iVar4 == (int)plVar2[1];
            if (bVar8) {
              *(int *)(plVar2 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar8) {
              plVar5 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar7 = *(longlong **)(param_1 + 0x10);
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
        local_10 = plVar6;
        FUN_14185f5a0(plVar7,&local_18);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar5 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
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
        plVar7 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_10 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
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
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  plVar7 = *(longlong **)(param_1 + 0x28);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x18);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  plVar7 = *(longlong **)(param_1 + 8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar7 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001417f641d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return;
    }
  }
  return;
}



// FUNCTION 1417f6430 FUN_1417f6430 body=96 status=ok
// SIG undefined FUN_1417f6430(void)

void FUN_1417f6430(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 1417f6490 ~FDockTabStyle body=268 status=ok
// SIG undefined ~FDockTabStyle(void)

void FDockTabStyle::~FDockTabStyle(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f628;
  plVar4 = (longlong *)param_1[0xdf];
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
  FSlateBrush::~FSlateBrush(param_1 + 199);
  FSlateBrush::~FSlateBrush(param_1 + 0xb6);
  FSlateBrush::~FSlateBrush(param_1 + 0xa5);
  FSlateBrush::~FSlateBrush(param_1 + 0x94);
  FSlateBrush::~FSlateBrush(param_1 + 0x83);
  FSlateBrush::~FSlateBrush(param_1 + 0x72);
  FSlateBrush::~FSlateBrush(param_1 + 0x61);
  FSlateBrush::~FSlateBrush(param_1 + 0x50);
  param_1[1] = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x35);
  FSlateBrush::~FSlateBrush(param_1 + 0x24);
  FSlateBrush::~FSlateBrush(param_1 + 0x13);
  FSlateBrush::~FSlateBrush(param_1 + 2);
  param_1[1] = &PTR_FUN_144042b80;
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f65a0 FUN_1417f65a0 body=159 status=ok
// SIG undefined FUN_1417f65a0(void)

void FUN_1417f65a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d4e8c0;
  FDragDropOperation::DestroyCursorDecoratorWindow();
  if (*(char *)((longlong)param_1 + 0x3c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  plVar4 = (longlong *)param_1[5];
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
  plVar4 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 1417f6640 FUN_1417f6640 body=341 status=ok
// SIG undefined FUN_1417f6640(void)

void FUN_1417f6640(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f508;
  FScrollBarStyle::~FScrollBarStyle(param_1 + 100);
  plVar4 = (longlong *)param_1[0x5f];
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
  plVar4 = (longlong *)param_1[0x5a];
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
  plVar4 = (longlong *)param_1[0x55];
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
  plVar4 = (longlong *)param_1[0x4e];
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
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f67a0 FUN_1417f67a0 body=198 status=ok
// SIG undefined FUN_1417f67a0(void)

void FUN_1417f67a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f4d8;
  FSlateBrush::~FSlateBrush(param_1 + 0x32);
  FSlateBrush::~FSlateBrush(param_1 + 0x21);
  FSlateBrush::~FSlateBrush(param_1 + 0x10);
  plVar4 = (longlong *)param_1[0xf];
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
  plVar4 = (longlong *)param_1[8];
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
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6870 ~FElementBatchMap body=148 status=ok
// SIG undefined ~FElementBatchMap(void)

void FElementBatchMap::~FElementBatchMap(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x868) = 0;
  if (*(longlong *)(param_1 + 0x860) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(plVar2,0);
  if (*(longlong *)(param_1 + 0x840) != 0) {
    FMemory::Free();
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = 0x100;
  do {
    plVar1 = plVar2 + -1;
    plVar2 = plVar2 + -1;
    TDefaultDelete<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>::operator()
              (plVar2,*plVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1417f6910 FUN_1417f6910 body=56 status=ok
// SIG undefined FUN_1417f6910(void)

void FUN_1417f6910(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f550;
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6950 ~FFreeTypeFace body=138 status=ok
// SIG undefined ~FFreeTypeFace(void)

void FFreeTypeFace::~FFreeTypeFace(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    FUN_143c20100();
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x16);
  plVar4 = (longlong *)param_1[2];
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



// FUNCTION 1417f69e0 ~FHeaderRowStyle body=190 status=ok
// SIG undefined ~FHeaderRowStyle(void)

void FHeaderRowStyle::~FHeaderRowStyle(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f610;
  plVar4 = (longlong *)param_1[0x16d];
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
  FSlateBrush::~FSlateBrush(param_1 + 0x158);
  param_1[0x135] = &PTR_FUN_144d4f5e0;
  FSlateBrush::~FSlateBrush(param_1 + 0x147);
  FSlateBrush::~FSlateBrush(param_1 + 0x136);
  param_1[0x135] = &PTR_FUN_144042b80;
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle(param_1 + 0x9b);
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6aa0 ~FInlineEditableTextBlockStyle body=56 status=ok
// SIG undefined ~FInlineEditableTextBlockStyle(void)

void FInlineEditableTextBlockStyle::~FInlineEditableTextBlockStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f520;
  FUN_140691580(param_1 + 0xff);
  FUN_1417f6640(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6ae0 FUN_1417f6ae0 body=547 status=ok
// SIG undefined FUN_1417f6ae0(void)

void FUN_1417f6ae0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[0x33] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x18);
  plVar4 = (longlong *)param_1[0x17];
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
  plVar4 = (longlong *)param_1[0x15];
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
  plVar4 = (longlong *)param_1[0x13];
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
  plVar4 = (longlong *)param_1[0x11];
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
  plVar4 = (longlong *)param_1[0xf];
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
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 4,0);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  return;
}



// FUNCTION 1417f6d10 ~FExec body=11 status=ok
// SIG undefined ~FExec(void)

void FExec::~FExec(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_143f9a338;
  return;
}



// FUNCTION 1417f6d20 FUN_1417f6d20 body=189 status=ok
// SIG undefined FUN_1417f6d20(void)

void FUN_1417f6d20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d4ebc0;
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 1417f6de0 ~FProgressBarStyle body=68 status=ok
// SIG undefined ~FProgressBarStyle(void)

void FProgressBarStyle::~FProgressBarStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f538;
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6e30 ~FScrollBarStyle body=140 status=ok
// SIG undefined ~FScrollBarStyle(void)

void FScrollBarStyle::~FScrollBarStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f4f0;
  FSlateBrush::~FSlateBrush(param_1 + 0x89);
  FSlateBrush::~FSlateBrush(param_1 + 0x78);
  FSlateBrush::~FSlateBrush(param_1 + 0x67);
  FSlateBrush::~FSlateBrush(param_1 + 0x56);
  FSlateBrush::~FSlateBrush(param_1 + 0x45);
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6ec0 FUN_1417f6ec0 body=56 status=ok
// SIG undefined FUN_1417f6ec0(void)

void FUN_1417f6ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144d4f658;
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6f00 FUN_1417f6f00 body=80 status=ok
// SIG undefined FUN_1417f6f00(void)

void FUN_1417f6f00(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f640;
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f6f50 FUN_1417f6f50 body=169 status=ok
// SIG undefined FUN_1417f6f50(void)

void FUN_1417f6f50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f568;
  FSlateBrush::~FSlateBrush(param_1 + 0x13c);
  FSlateBrush::~FSlateBrush(param_1 + 299);
  FSlateBrush::~FSlateBrush(param_1 + 0x11a);
  FSlateBrush::~FSlateBrush(param_1 + 0x109);
  plVar4 = (longlong *)param_1[0x106];
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
  FUN_1417f6640(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f7000 FUN_1417f7000 body=168 status=ok
// SIG undefined FUN_1417f7000(void)

void FUN_1417f7000(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 4;
  lVar6 = param_1 + 0x70;
  do {
    plVar4 = *(longlong **)(lVar6 + -0x10);
    lVar6 = lVar6 + -0x10;
    lVar5 = lVar5 + -1;
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
  } while (lVar5 != 0);
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1417f70b0 FUN_1417f70b0 body=126 status=ok
// SIG undefined FUN_1417f70b0(void)

void FUN_1417f70b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d4ea48;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 6);
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
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 1);
  return;
}



// FUNCTION 1417f7130 ~FSlateBatchData body=226 status=ok
// SIG undefined ~FSlateBatchData(void)

void FSlateBatchData::~FSlateBatchData(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  FUN_1417f5520(param_1 + 0x50);
  iVar5 = *(int *)(param_1 + 0x48);
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  iVar5 = *(int *)(param_1 + 0x38);
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x30);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1417f7220 ~FSlateBrush body=5 status=ok
// SIG undefined ~FSlateBrush(void)

void FSlateBrush::~FSlateBrush(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__143f489a8;
  plVar4 = (longlong *)param_1[0xf];
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
  plVar4 = (longlong *)param_1[8];
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



// FUNCTION 1417f7230 FUN_1417f7230 body=77 status=ok
// SIG undefined FUN_1417f7230(void)

void FUN_1417f7230(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
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



// FUNCTION 1417f7280 FUN_1417f7280 body=387 status=ok
// SIG undefined FUN_1417f7280(void)

void FUN_1417f7280(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x400);
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
  plVar4 = *(longlong **)(param_1 + 0x3f0);
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
  plVar4 = *(longlong **)(param_1 + 0x3e0);
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
  plVar4 = *(longlong **)(param_1 + 0x3d0);
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
  plVar4 = *(longlong **)(param_1 + 0x3c0);
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
  plVar4 = *(longlong **)(param_1 + 0x3b0);
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
  FSlateStyleSet::~FSlateStyleSet(param_1);
  return;
}



// FUNCTION 1417f7410 FUN_1417f7410 body=105 status=ok
// SIG undefined FUN_1417f7410(void)

void FUN_1417f7410(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f7480 FUN_1417f7480 body=31 status=ok
// SIG undefined FUN_1417f7480(void)

void FUN_1417f7480(longlong param_1)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1);
  return;
}



// FUNCTION 1417f74a0 ~FSlateDrawLayer body=191 status=ok
// SIG undefined ~FSlateDrawLayer(void)

void FSlateDrawLayer::~FSlateDrawLayer(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    FMemory::Free();
  }
  FUN_1417f53d0(param_1 + 0x8c0);
  FUN_1417f5470(param_1 + 0x8b0);
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x890) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x888);
  lVar1 = *(longlong *)(param_1 + 0x880);
  if (iVar2 != 0) {
    do {
      FUN_1417f7410(lVar1);
      lVar1 = lVar1 + 0x130;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x880);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FElementBatchMap::~FElementBatchMap(param_1);
  return;
}



// FUNCTION 1417f7560 ~FSlateFontAtlas body=78 status=ok
// SIG undefined ~FSlateFontAtlas(void)

void FSlateFontAtlas::~FSlateFontAtlas(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4e868;
  param_1[1] = &PTR__scalar_deleting_destructor__144d4e838;
  FSlateTextureAtlas::Empty(param_1 + 1);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144d4e848;
  return;
}



// FUNCTION 1417f75b0 FUN_1417f75b0 body=877 status=ok
// SIG undefined FUN_1417f75b0(void)

void FUN_1417f75b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_144d4e898;
  lVar7 = FInternationalization::Get();
  FUN_140483870(lVar7 + 8,param_1);
  uVar4 = param_1[7];
  param_1[7] = 0;
  FUN_1417fced0(param_1 + 7,uVar4);
  uVar4 = param_1[6];
  param_1[6] = 0;
  FMemory::operator_delete(uVar4,0x20);
  uVar4 = param_1[5];
  param_1[5] = 0;
  TDefaultDelete<FCompositeFontCache>::operator()(param_1 + 5,uVar4);
  lVar7 = param_1[4];
  param_1[4] = 0;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x48) = 0;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar7);
    FMemory::operator_delete(lVar7,0x50);
  }
  lVar7 = param_1[3];
  param_1[3] = 0;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x48) = 0;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar7);
    FMemory::operator_delete(lVar7,0x50);
  }
  plVar5 = (longlong *)param_1[2];
  param_1[2] = 0;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 9) = 0;
    if (plVar5[8] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar5,0);
    if (plVar5[4] != 0) {
      FMemory::Free();
    }
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar5,0x50);
  }
  puVar6 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_143c20280(*puVar6);
    FMemory::Free(puVar6[1]);
    FMemory::operator_delete(puVar6,0x10);
  }
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x27));
  plVar5 = (longlong *)param_1[0x23];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x20);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1e);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x12,0);
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  FUN_1417fced0(param_1 + 7,param_1[7]);
  FMemory::operator_delete(param_1[6],0x20);
  TDefaultDelete<FCompositeFontCache>::operator()(param_1 + 5,param_1[5]);
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x48) = 0;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar7);
    FMemory::operator_delete(lVar7,0x50);
  }
  lVar7 = param_1[3];
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x48) = 0;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar7);
    FMemory::operator_delete(lVar7,0x50);
  }
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 9) = 0;
    if (plVar5[8] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar5,0);
    if (plVar5[4] != 0) {
      FMemory::Free();
    }
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar5,0x50);
  }
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != (undefined8 *)0x0) {
    FUN_143c20280(*puVar6);
    FMemory::Free(puVar6[1]);
    FMemory::operator_delete(puVar6,0x10);
  }
  *param_1 = &PTR_FUN_143fca6f8;
  return;
}



// FUNCTION 1417f7920 FUN_1417f7920 body=210 status=ok
// SIG undefined FUN_1417f7920(void)

void FUN_1417f7920(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FMemory::Free();
    }
    if (*(char *)(param_1 + 0xa8) != '\0') {
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
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
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  return;
}



// FUNCTION 1417f7a00 ~FSlateStyleSet body=1010 status=ok
// SIG undefined ~FSlateStyleSet(void)

void FSlateStyleSet::~FSlateStyleSet(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = param_1 + 0x43;
  puStack_28 = (uint *)(param_1 + 0x45);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d4fcc8;
  iVar2 = *(int *)(param_1 + 0x48);
  local_78 = 0;
  uStack_74 = 1;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[0x47];
    if ((uint *)param_1[0x47] == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar6 = *puVar8;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar6 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar6;
      if (bVar4) goto LAB_1417f7adf;
      uVar6 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1417f7adf:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x48);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      puVar3 = *(undefined8 **)(*plVar1 + 8 + (longlong)iStack_5c * 0x18);
      if (((puVar3[9] == 0) && ((*(byte *)(puVar3 + 0x10) & 2) == 0)) &&
         (puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (param_1[0x73] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x6b);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (param_1[0x69] != 0) {
    FMemory::Free();
  }
  FUN_14182c170(param_1 + 0x61,0);
  if (param_1[0x65] != 0) {
    FMemory::Free();
  }
  if (param_1[0x61] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_1[0x5f] != 0) {
    FMemory::Free();
  }
  FUN_14182bf80(param_1 + 0x57,0);
  if (param_1[0x5b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x57] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x55] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FMemory::Free();
  }
  FUN_14182bd90(param_1 + 0x2e,0);
  if (param_1[0x32] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 6,0);
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144d4f688;
  return;
}



// FUNCTION 1417f7e00 ~FSlateTextureAtlas body=49 status=ok
// SIG undefined ~FSlateTextureAtlas(void)

void FSlateTextureAtlas::~FSlateTextureAtlas(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4e838;
  Empty();
  if (param_1[1] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417f7e40 FUN_1417f7e40 body=349 status=ok
// SIG undefined FUN_1417f7e40(void)

void FUN_1417f7e40(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (param_1[0x155] != 0) {
    *(undefined8 *)(param_1[0x155] + 0x10) = 0;
    puVar3 = (undefined8 *)param_1[0x155];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FMemStackBase::FreeChunks(param_1 + 0x14e,0);
  plVar4 = (longlong *)param_1[0x14d];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x14a);
  if (param_1[0x148] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x145);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x143);
  if (param_1[0x141] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x13f);
  *(undefined4 *)(param_1 + 0x13e) = 0;
  if (param_1[0x13d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<FSlateDrawLayerHandle,1>,TSharedPtr<FSlateDrawLayer,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedPtr<FSlateDrawLayerHandle,1>,TSharedPtr<FSlateDrawLayer,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x135);
  TArray<FSlateClippingState,FDefaultAllocator>::~TArray<FSlateClippingState,FDefaultAllocator>
            (param_1 + 0x133);
  if (param_1[0x131] != 0) {
    FMemory::Free();
  }
  FSlateDrawLayer::~FSlateDrawLayer(param_1 + 0x13);
  FSlateBatchData::~FSlateBatchData(param_1 + 5);
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1417f7fa0 FUN_1417f7fa0 body=80 status=ok
// SIG undefined FUN_1417f7fa0(void)

void FUN_1417f7fa0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f580;
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f7ff0 ~FSlotBase body=112 status=ok
// SIG undefined ~FSlotBase(void)

void FSlotBase::~FSlotBase(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4edf0;
  if (param_1[2] != DAT_1469eb218) {
    FUN_141806420(param_1[2],param_1[1]);
  }
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
  return;
}



// FUNCTION 1417f8060 ~FSpinBoxStyle body=169 status=ok
// SIG undefined ~FSpinBoxStyle(void)

void FSpinBoxStyle::~FSpinBoxStyle(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f5c8;
  plVar4 = (longlong *)param_1[0x5a];
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
  FSlateBrush::~FSlateBrush(param_1 + 0x45);
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f8110 FUN_1417f8110 body=56 status=ok
// SIG undefined FUN_1417f8110(void)

void FUN_1417f8110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144d4f5e0;
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f8150 ~FTableColumnHeaderStyle body=140 status=ok
// SIG undefined ~FTableColumnHeaderStyle(void)

void FTableColumnHeaderStyle::~FTableColumnHeaderStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f5f8;
  FSlateBrush::~FSlateBrush(param_1 + 0x89);
  FSlateBrush::~FSlateBrush(param_1 + 0x78);
  FSlateBrush::~FSlateBrush(param_1 + 0x67);
  FSlateBrush::~FSlateBrush(param_1 + 0x56);
  FSlateBrush::~FSlateBrush(param_1 + 0x45);
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f81e0 FUN_1417f81e0 body=200 status=ok
// SIG undefined FUN_1417f81e0(void)

void FUN_1417f81e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0xf0) != '\0') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FMemory::Free();
    }
    if (*(char *)(param_1 + 0xd8) != '\0') {
      *(undefined1 *)(param_1 + 0xd8) = 0;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1417f82b0 ~FVolumeControlStyle body=155 status=ok
// SIG undefined ~FVolumeControlStyle(void)

void FVolumeControlStyle::~FVolumeControlStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f598;
  FSlateBrush::~FSlateBrush(param_1 + 0x8b);
  FSlateBrush::~FSlateBrush(param_1 + 0x7a);
  FSlateBrush::~FSlateBrush(param_1 + 0x69);
  FSlateBrush::~FSlateBrush(param_1 + 0x58);
  FSlateBrush::~FSlateBrush(param_1 + 0x47);
  param_1[1] = &PTR__scalar_deleting_destructor__144d4f580;
  FSlateBrush::~FSlateBrush(param_1 + 0x35);
  FSlateBrush::~FSlateBrush(param_1 + 0x24);
  FSlateBrush::~FSlateBrush(param_1 + 0x13);
  FSlateBrush::~FSlateBrush(param_1 + 2);
  param_1[1] = &PTR_FUN_144042b80;
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f8350 ~FWidgetAndPointer body=142 status=ok
// SIG undefined ~FWidgetAndPointer(void)

void FWidgetAndPointer::~FWidgetAndPointer(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x40);
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



// FUNCTION 1417f83e0 FUN_1417f83e0 body=510 status=ok
// SIG undefined FUN_1417f83e0(void)

void FUN_1417f83e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f670;
  FSlateBrush::~FSlateBrush(param_1 + 0x1e9);
  FSlateBrush::~FSlateBrush(param_1 + 0x1d8);
  FSlateBrush::~FSlateBrush(param_1 + 0x1c7);
  plVar4 = (longlong *)param_1[0x1c6];
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
  FSlateBrush::~FSlateBrush(param_1 + 0x1b1);
  plVar4 = (longlong *)param_1[0x1b0];
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
  FSlateBrush::~FSlateBrush(param_1 + 0x19b);
  FSlateBrush::~FSlateBrush(param_1 + 0x18a);
  FSlateBrush::~FSlateBrush(param_1 + 0x179);
  FUN_140691580(param_1 + 0x13d);
  param_1[0xee] = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x122);
  FSlateBrush::~FSlateBrush(param_1 + 0x111);
  FSlateBrush::~FSlateBrush(param_1 + 0x100);
  FSlateBrush::~FSlateBrush(param_1 + 0xef);
  param_1[0xee] = &PTR_FUN_144042b80;
  param_1[0x9f] = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0xd3);
  FSlateBrush::~FSlateBrush(param_1 + 0xc2);
  FSlateBrush::~FSlateBrush(param_1 + 0xb1);
  FSlateBrush::~FSlateBrush(param_1 + 0xa0);
  param_1[0x9f] = &PTR_FUN_144042b80;
  param_1[0x50] = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x84);
  FSlateBrush::~FSlateBrush(param_1 + 0x73);
  FSlateBrush::~FSlateBrush(param_1 + 0x62);
  FSlateBrush::~FSlateBrush(param_1 + 0x51);
  param_1[0x50] = &PTR_FUN_144042b80;
  param_1[1] = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x35);
  FSlateBrush::~FSlateBrush(param_1 + 0x24);
  FSlateBrush::~FSlateBrush(param_1 + 0x13);
  FSlateBrush::~FSlateBrush(param_1 + 2);
  param_1[1] = &PTR_FUN_144042b80;
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1417f85e0 FUN_1417f85e0 body=490 status=ok
// SIG undefined FUN_1417f85e0(void)

void FUN_1417f85e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4ebe8;
  if (DAT_1469eaf38 != 0) {
    lVar6 = param_1[0x11];
    lVar5 = (longlong)*(int *)(param_1 + 0x12) * 0x10 + lVar6;
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x10) {
      FUN_14185f4f0(DAT_1469eaf38,lVar6);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3e);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x32);
  plVar4 = (longlong *)param_1[0x31];
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
  plVar4 = (longlong *)param_1[0x2f];
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
  plVar4 = (longlong *)param_1[0x2d];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a);
  if (*(char *)((longlong)param_1 + 0x144) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x26);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x22);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1e);
  if (*(char *)(param_1 + 0x1d) != '\0') {
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x17);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x14);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x11);
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR__scalar_deleting_destructor__144d4ebb8;
  return;
}



// FUNCTION 1417f87d0 FUN_1417f87d0 body=899 status=ok
// SIG undefined FUN_1417f87d0(void)

void FUN_1417f87d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x5e8);
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
  plVar4 = *(longlong **)(param_1 + 0x5b0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x588);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x578);
  plVar4 = *(longlong **)(param_1 + 0x570);
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
  plVar4 = *(longlong **)(param_1 + 0x560);
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
  plVar4 = *(longlong **)(param_1 + 0x550);
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
  plVar4 = *(longlong **)(param_1 + 0x540);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x528);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x518);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x508);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4e0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4b8);
  plVar4 = *(longlong **)(param_1 + 0x4b0);
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
  plVar4 = *(longlong **)(param_1 + 0x4a0);
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
  if (*(char *)(param_1 + 0x494) != '\0') {
    *(undefined1 *)(param_1 + 0x494) = 0;
  }
  if (*(char *)(param_1 + 0x48c) != '\0') {
    *(undefined1 *)(param_1 + 0x48c) = 0;
  }
  if (*(char *)(param_1 + 0x484) != '\0') {
    *(undefined1 *)(param_1 + 0x484) = 0;
  }
  if (*(char *)(param_1 + 0x47c) != '\0') {
    *(undefined1 *)(param_1 + 0x47c) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x460);
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
  plVar4 = *(longlong **)(param_1 + 0x450);
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
  plVar4 = *(longlong **)(param_1 + 0x438);
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
  FUN_1417f61f0(param_1 + 0x3c8);
  plVar4 = *(longlong **)(param_1 + 0x390);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x330);
  plVar4 = *(longlong **)(param_1 + 0x318);
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
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1417f8b60 operator= body=114 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FBoneReference,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 1417f8be0 operator= body=114 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FSlateVertex,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
  }
  return param_1;
}



// FUNCTION 1417f8c60 operator= body=163 status=ok
// SIG undefined operator=(void)

undefined4 *
TAttribute<TOptional<enum_EMouseCursor::Type>_>::operator=(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 1) != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (*(char *)(param_2 + 1) != '\0') {
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  plVar1 = (longlong *)(param_1 + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  if ((longlong *)(param_2 + 4) != plVar1) {
    if ((param_2[6] != 0) && (plVar2 = *(longlong **)(param_2 + 4), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      return param_1;
    }
    if ((param_1[6] != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      param_1[6] = 0;
    }
  }
  return param_1;
}



// FUNCTION 1417f8d10 operator= body=232 status=ok
// SIG undefined operator=(void)

longlong FButtonStyle::operator=(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1406922e0(param_1 + 8,param_2 + 8);
  FUN_1406922e0(param_1 + 0x90,param_2 + 0x90);
  FUN_1406922e0(param_1 + 0x118,param_2 + 0x118);
  FUN_1406922e0(param_1 + 0x1a0,param_2 + 0x1a0);
  uVar1 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x230) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x240) = uVar1;
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  return param_1;
}



// FUNCTION 1417f8e00 FUN_1417f8e00 body=434 status=ok
// SIG undefined FUN_1417f8e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1417f8e00(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  byte bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  uStack_60 = *(longlong **)(param_2 + 0x18);
  local_68 = *(undefined8 *)(param_2 + 0x10);
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)uStack_60 + 0xc) = *(int *)((longlong)uStack_60 + 0xc) + 1;
    UNLOCK();
  }
  if (&local_68 != puVar1) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uVar4 = *puVar1;
    plVar5 = *(longlong **)(param_1 + 0x18);
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = (undefined4)uStack_60;
    uStack_3c = uStack_60._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_68;
    *(undefined4 *)(param_1 + 0x14) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_60;
    *(undefined4 *)(param_1 + 0x1c) = uStack_60._4_4_;
    local_68 = uVar4;
    uStack_60 = plVar5;
  }
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)uStack_60 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*uStack_60 + 8))(uStack_60,1);
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  plVar5 = *(longlong **)(param_2 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = uVar4;
  plStack_50 = plVar5;
  if (&local_58 != puVar1) {
    local_58 = *puVar1;
    plStack_50 = *(longlong **)(param_1 + 0x28);
    *puVar1 = uVar4;
    *(longlong **)(param_1 + 0x28) = plVar5;
    local_38 = uVar4;
    plStack_30 = plVar5;
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_50 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_50 + 8))(plStack_50,1);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)(param_2 + 0x30)) {
    iVar3 = *(int *)(param_2 + 0x38);
    _Src = *(void **)(param_2 + 0x30);
    *(int *)(param_1 + 0x38) = iVar3;
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 0xc);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(byte *)(param_1 + 0x54) =
       *(byte *)(param_1 + 0x54) ^ (*(byte *)(param_1 + 0x54) ^ *(byte *)(param_2 + 0x54)) & 1;
  bVar6 = (*(byte *)(param_2 + 0x54) ^ *(byte *)(param_1 + 0x54)) & 2 ^ *(byte *)(param_1 + 0x54);
  *(byte *)(param_1 + 0x54) = bVar6;
  *(byte *)(param_1 + 0x54) = (bVar6 ^ *(byte *)(param_2 + 0x54)) & 4 ^ bVar6;
  return param_1;
}



// FUNCTION 1417f8fc0 operator= body=237 status=ok
// SIG undefined operator=(void)

longlong FEditableTextBoxStyle::operator=(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_1406922e0(param_1 + 8,param_2 + 8);
  FUN_1406922e0(param_1 + 0x90,param_2 + 0x90);
  FUN_1406922e0(param_1 + 0x118,param_2 + 0x118);
  FUN_1406922e0(param_1 + 0x1a0,param_2 + 0x1a0);
  uVar1 = *(undefined4 *)(param_2 + 0x22c);
  uVar2 = *(undefined4 *)(param_2 + 0x230);
  uVar3 = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  FUN_1417f9360(param_1 + 0x238,param_2 + 0x238);
  FUN_140692440(param_1 + 0x288,param_2 + 0x288);
  FUN_140692440(param_1 + 0x2b0,param_2 + 0x2b0);
  FUN_140692440(param_1 + 0x2d8,param_2 + 0x2d8);
  uVar4 = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x308) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x314);
  uVar2 = *(undefined4 *)(param_2 + 0x318);
  uVar3 = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  *(undefined4 *)(param_1 + 0x31c) = uVar3;
  FScrollBarStyle::operator=(param_1 + 800,param_2 + 800);
  return param_1;
}



// FUNCTION 1417f90b0 operator= body=41 status=ok
// SIG undefined operator=(void)

undefined8 * FGeometry::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    param_1[6] = param_2[6];
  }
  return param_1;
}



// FUNCTION 1417f90e0 operator= body=195 status=ok
// SIG undefined operator=(void)

longlong FScrollBarStyle::operator=(longlong param_1,longlong param_2)

{
  FUN_1406922e0(param_1 + 8,param_2 + 8);
  FUN_1406922e0(param_1 + 0x90,param_2 + 0x90);
  FUN_1406922e0(param_1 + 0x118,param_2 + 0x118);
  FUN_1406922e0(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_1406922e0(param_1 + 0x228,param_2 + 0x228);
  FUN_1406922e0(param_1 + 0x2b0,param_2 + 0x2b0);
  FUN_1406922e0(param_1 + 0x338,param_2 + 0x338);
  FUN_1406922e0(param_1 + 0x3c0,param_2 + 0x3c0);
  FUN_1406922e0(param_1 + 0x448,param_2 + 0x448);
  return param_1;
}



// FUNCTION 1417f91b0 FUN_1417f91b0 body=423 status=ok
// SIG undefined FUN_1417f91b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1417f91b0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_50 = (longlong *)param_2[1];
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
    UNLOCK();
  }
  if (&local_58 != param_1) {
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uVar5 = *param_1;
    plVar4 = (longlong *)param_1[1];
    local_38 = (undefined4)local_58;
    uStack_34 = local_58._4_4_;
    uStack_30 = (undefined4)uStack_50;
    uStack_2c = uStack_50._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 4) = local_58._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    local_58 = uVar5;
    uStack_50 = plVar4;
  }
  plVar4 = uStack_50;
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_50)(uStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_50 + 8))(uStack_50,1);
      }
    }
  }
  puVar6 = param_1 + 5;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  lVar7 = 4;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)((longlong)param_2 + 0x1a);
  *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
  *(undefined2 *)((longlong)param_1 + 0x1e) = *(undefined2 *)((longlong)param_2 + 0x1e);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  do {
    plVar4 = *(longlong **)(((longlong)param_2 - (longlong)param_1) + 8 + (longlong)puVar6);
    uVar5 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    local_48 = uVar5;
    plStack_40 = plVar4;
    if (&local_48 != puVar6) {
      local_48 = *puVar6;
      plStack_40 = (longlong *)puVar6[1];
      *puVar6 = uVar5;
      puVar6[1] = plVar4;
      local_28 = uVar5;
      plStack_20 = plVar4;
    }
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
    puVar6 = puVar6 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return param_1;
}



// FUNCTION 1417f9360 FUN_1417f9360 body=264 status=ok
// SIG undefined FUN_1417f9360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1417f9360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 3);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  puVar1 = param_1 + 6;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
  uStack_30 = (longlong *)param_2[7];
  local_38 = param_2[6];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar8 = *puVar1;
    plVar9 = (longlong *)param_1[7];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_38._4_4_;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_30._4_4_;
    local_38 = uVar8;
    uStack_30 = plVar9;
  }
  plVar9 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  return param_1;
}



// FUNCTION 1417f9470 operator= body=157 status=ok
// SIG undefined operator=(void)

longlong FTextBlockStyle::operator=(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1417f9360(param_1 + 8,param_2 + 8);
  FUN_140692440(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  FUN_140692440(param_1 + 0x98,param_2 + 0x98);
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  FUN_1406922e0(param_1 + 0xd0,param_2 + 0xd0);
  FUN_1406922e0(param_1 + 0x158,param_2 + 0x158);
  return param_1;
}



// FUNCTION 1417f9510 FUN_1417f9510 body=498 status=ok
// SIG undefined FUN_1417f9510(void)

undefined1 * FUN_1417f9510(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *_Dst;
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  _Dst = param_1 + 8;
  *param_1 = *param_2;
  if (_Dst != param_2 + 8) {
    iVar7 = *(int *)(param_1 + 0x130);
    puVar8 = *(undefined1 **)(param_1 + 0x128);
    if (*(undefined1 **)(param_1 + 0x128) == (undefined1 *)0x0) {
      puVar8 = _Dst;
    }
    if (iVar7 != 0) {
      plVar9 = (longlong *)(puVar8 + 0x40);
      do {
        plVar11 = (longlong *)*plVar9;
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
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar9 = plVar9 + 9;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(longlong *)(param_2 + 0x128) == 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 8,0x120);
    }
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    *(undefined8 *)(param_2 + 0x130) = 0;
  }
  puVar3 = (undefined8 *)(param_2 + 0x140);
  param_1[0x138] = param_2[0x138];
  if ((undefined8 *)(param_1 + 0x140) != puVar3) {
    *(undefined8 *)(param_1 + 0x140) = *puVar3;
    *puVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x148,param_2 + 0x148);
  }
  plVar11 = (longlong *)(param_2 + 0x150);
  plVar9 = (longlong *)(param_1 + 0x150);
  if (plVar9 != plVar11) {
    iVar7 = *(int *)(param_1 + 0x158);
    lVar6 = *plVar9;
    if (iVar7 != 0) {
      plVar10 = (longlong *)(lVar6 + 8);
      do {
        plVar5 = (longlong *)*plVar10;
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
        plVar10 = plVar10 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      lVar6 = *plVar9;
    }
    if (lVar6 != 0) {
      FMemory::Free();
    }
    *plVar9 = *plVar11;
    *plVar11 = 0;
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
    *(undefined8 *)(param_2 + 0x158) = 0;
  }
  return param_1;
}



// FUNCTION 1417f9710 FUN_1417f9710 body=616 status=ok
// SIG undefined FUN_1417f9710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1417f9710(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar1 = param_1 + 8;
  *param_1 = *param_2;
  if (puVar1 != param_2 + 8) {
    iVar11 = *(int *)(param_1 + 0x130);
    puVar9 = *(undefined1 **)(param_1 + 0x128);
    if (*(undefined1 **)(param_1 + 0x128) == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    if (iVar11 != 0) {
      plVar12 = (longlong *)(puVar9 + 0x40);
      do {
        plVar13 = (longlong *)*plVar12;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar13 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        plVar12 = plVar12 + 9;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    puVar9 = *(undefined1 **)(param_2 + 0x128);
    if (*(undefined1 **)(param_2 + 0x128) == (undefined1 *)0x0) {
      puVar9 = param_2 + 8;
    }
    local_68 = 0;
    FUN_1417dd460(puVar1,puVar9,*(undefined4 *)(param_2 + 0x130),*(undefined4 *)(param_1 + 0x134));
  }
  puVar10 = (undefined8 *)(param_1 + 0x140);
  param_1[0x138] = param_2[0x138];
  plVar12 = *(longlong **)(param_2 + 0x148);
  uVar5 = *(undefined8 *)(param_2 + 0x140);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_58 = uVar5;
  plStack_50 = plVar12;
  if (&local_58 != puVar10) {
    local_58 = *puVar10;
    plStack_50 = *(longlong **)(param_1 + 0x148);
    *puVar10 = uVar5;
    *(longlong **)(param_1 + 0x148) = plVar12;
    local_48 = uVar5;
    plStack_40 = plVar12;
  }
  plVar12 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_50 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar12 = (longlong *)(param_1 + 0x150);
  if (plVar12 != (longlong *)(param_2 + 0x150)) {
    iVar11 = *(int *)(param_1 + 0x158);
    if (iVar11 != 0) {
      plVar13 = (longlong *)(*plVar12 + 8);
      do {
        plVar6 = (longlong *)*plVar13;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        plVar13 = plVar13 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = *(int *)(param_2 + 0x158);
    puVar10 = *(undefined8 **)(param_2 + 0x150);
    *(int *)(param_1 + 0x158) = iVar11;
    if ((iVar11 == 0) && (*(int *)(param_1 + 0x15c) == 0)) {
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar12,iVar11);
      puVar8 = (undefined8 *)*plVar12;
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar8 = *puVar10;
        lVar7 = puVar10[1];
        puVar8[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        puVar8 = puVar8 + 2;
        puVar10 = puVar10 + 2;
      }
    }
  }
  return param_1;
}



// FUNCTION 1417f9980 operator== body=550 status=ok
// SIG undefined operator==(void)

ulonglong FSlateElementBatch::FBatchKey::operator==(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  uVar7 = 0;
  if (((((((*(char *)(param_1 + 0xc) == *(char *)(param_2 + 0xc)) &&
          (uVar7 = 0, *(char *)((longlong)param_1 + 0x61) == *(char *)((longlong)param_2 + 0x61)))
         && (uVar7 = 0, *(char *)((longlong)param_1 + 0x62) == *(char *)((longlong)param_2 + 0x62)))
        && ((uVar7 = 0, *(char *)((longlong)param_1 + 99) == *(char *)((longlong)param_2 + 99) &&
            (*(float *)(param_2 + 8) == *(float *)(param_1 + 8))))) &&
       ((*(float *)((longlong)param_2 + 0x44) == *(float *)((longlong)param_1 + 0x44) &&
        ((*(float *)(param_2 + 9) == *(float *)(param_1 + 9) &&
         (*(float *)((longlong)param_2 + 0x4c) == *(float *)((longlong)param_1 + 0x4c))))))) &&
      (*(float *)(param_2 + 10) == *(float *)(param_1 + 10))) &&
     ((((*(float *)((longlong)param_2 + 0x54) == *(float *)((longlong)param_1 + 0x54) &&
        (*(float *)(param_2 + 0xb) == *(float *)(param_1 + 0xb))) &&
       (*(float *)((longlong)param_2 + 0x5c) == *(float *)((longlong)param_1 + 0x5c))) &&
      (uVar7 = (ulonglong)*(uint *)((longlong)param_2 + 100),
      *(uint *)((longlong)param_1 + 100) == *(uint *)((longlong)param_2 + 100))))) {
    plVar8 = (longlong *)0x0;
    plVar3 = (longlong *)param_1[1];
    plVar9 = plVar3;
    plVar10 = plVar8;
    if (plVar3 != (longlong *)0x0) {
      uVar7 = 0;
      LOCK();
      uVar6 = *(uint *)(plVar3 + 1);
      bVar12 = uVar6 == 0;
      if (bVar12) {
        *(uint *)(plVar3 + 1) = 0;
      }
      else {
        uVar7 = (ulonglong)uVar6;
      }
      UNLOCK();
      while (plVar9 = plVar8, plVar10 = (longlong *)0x0, !bVar12) {
        uVar4 = (uint)uVar7;
        LOCK();
        uVar6 = *(uint *)(plVar3 + 1);
        if (uVar4 == uVar6) {
          *(uint *)(plVar3 + 1) = uVar4 + 1;
        }
        else {
          uVar7 = (ulonglong)uVar6;
        }
        UNLOCK();
        if (uVar4 == uVar6) {
          plVar9 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            plVar10 = (longlong *)*param_1;
          }
          break;
        }
        uVar7 = 0;
        LOCK();
        uVar6 = *(uint *)(plVar3 + 1);
        bVar12 = uVar6 == 0;
        if (bVar12) {
          *(uint *)(plVar3 + 1) = 0;
        }
        else {
          uVar7 = (ulonglong)uVar6;
        }
        UNLOCK();
      }
    }
    plVar3 = (longlong *)param_2[1];
    plVar11 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      uVar7 = 0;
      LOCK();
      uVar6 = *(uint *)(plVar3 + 1);
      bVar12 = uVar6 == 0;
      if (bVar12) {
        *(uint *)(plVar3 + 1) = 0;
      }
      else {
        uVar7 = (ulonglong)uVar6;
      }
      UNLOCK();
      while (plVar11 = plVar8, !bVar12) {
        uVar4 = (uint)uVar7;
        LOCK();
        uVar6 = *(uint *)(plVar3 + 1);
        if (uVar4 == uVar6) {
          *(uint *)(plVar3 + 1) = uVar4 + 1;
        }
        else {
          uVar7 = (ulonglong)uVar6;
        }
        UNLOCK();
        if (uVar4 == uVar6) {
          plVar11 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            plVar8 = (longlong *)*param_2;
          }
          break;
        }
        uVar7 = 0;
        LOCK();
        uVar6 = *(uint *)(plVar3 + 1);
        bVar12 = uVar6 == 0;
        if (bVar12) {
          *(uint *)(plVar3 + 1) = 0;
        }
        else {
          uVar7 = (ulonglong)uVar6;
        }
        UNLOCK();
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar11 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      uVar6 = (int)lVar5 - 1;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar7 = (ulonglong)(iVar2 - 1U);
        if (iVar2 - 1U == 0) {
          uVar7 = (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      uVar6 = (int)lVar5 - 1;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        uVar7 = (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          uVar7 = (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if ((((plVar10 == plVar8) && (uVar7 = param_2[2], param_1[2] == uVar7)) &&
        ((uVar7 = param_2[5], param_1[5] == uVar7 &&
         ((uVar7 = (ulonglong)*(uint *)(param_2 + 0xd),
          *(uint *)(param_1 + 0xd) == *(uint *)(param_2 + 0xd) &&
          (uVar7 = (ulonglong)*(uint *)((longlong)param_2 + 0x6c),
          *(uint *)((longlong)param_1 + 0x6c) == *(uint *)((longlong)param_2 + 0x6c))))))) &&
       (uVar7 = param_2[0xe], param_1[0xe] == uVar7)) {
      uVar6 = *(uint *)(param_2 + 0xf);
      uVar7 = (ulonglong)uVar6;
      if (*(uint *)(param_1 + 0xf) == uVar6) {
        return CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
      }
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 1417f9bb0 operator== body=121 status=ok
// SIG undefined operator==(void)

ulonglong FFontData::operator==(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  uVar1 = param_1[3];
  if (uVar1 == param_2[3]) {
    if (uVar1 == 0) {
      puVar2 = &DAT_143f3eda8;
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      if (*(int *)(param_1 + 1) != 0) {
        puVar2 = (undefined2 *)*param_1;
      }
      uVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
      if (((((int)uVar1 != 0) || (uVar1 = 0, *(char *)(param_1 + 2) != *(char *)(param_2 + 2))) ||
          (uVar1 = 0, *(char *)((longlong)param_1 + 0x11) != *(char *)((longlong)param_2 + 0x11)))
         || (uVar1 = (ulonglong)*(uint *)((longlong)param_2 + 0x14),
            *(uint *)((longlong)param_1 + 0x14) != *(uint *)((longlong)param_2 + 0x14)))
      goto LAB_1417f9c1c;
    }
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
LAB_1417f9c1c:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1417f9c30 FUN_1417f9c30 body=357 status=ok
// SIG undefined FUN_1417f9c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1417f9c30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar6 = *plVar1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    lVar6 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar6 != DAT_1469eb218) {
    FUN_141806420(lVar6,*(undefined8 *)(param_1 + 8));
  }
  plVar5 = (longlong *)param_2[1];
  lVar6 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_48 = lVar6;
  plStack_40 = plVar5;
  if (&local_48 != plVar1) {
    local_48 = *plVar1;
    plStack_40 = *(longlong **)(param_1 + 0x18);
    *plVar1 = lVar6;
    *(longlong **)(param_1 + 0x18) = plVar5;
    local_38 = lVar6;
    plStack_30 = plVar5;
  }
  plVar1 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_40 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  FUN_141802340(param_1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar1 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1417f9da0 operator() body=267 status=ok
// SIG undefined operator()(void)

bool <lambda_75c4bb420badbf6619ba8f8d778f9e7f>::operator()(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar2 = (longlong *)param_2[1];
  plVar8 = (longlong *)0x0;
  puVar3 = (undefined8 *)*param_1;
  plVar6 = plVar2;
  plVar9 = plVar8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar8, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = (longlong *)*param_2;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = (longlong *)puVar3[1];
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = (longlong *)*puVar3;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return plVar9 == plVar8;
}



// FUNCTION 1417f9eb0 FUN_1417f9eb0 body=339 status=ok
// SIG undefined FUN_1417f9eb0(void)

void FUN_1417f9eb0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  
  plVar4 = (longlong *)*param_1;
  if (*plVar4 != 0) {
    plVar5 = (longlong *)param_1[1];
    piVar6 = (int *)param_1[2];
    iVar1 = (int)plVar5[1];
    puVar7 = (undefined4 *)param_1[5];
    puVar8 = (undefined8 *)param_1[4];
    iVar2 = *(int *)param_1[3];
    iVar3 = *piVar6;
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar5,iVar1);
    }
    local_38 = *puVar8;
    lVar9 = *plVar5;
    local_30 = puVar8[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    `anonymous_namespace'::FHarfBuzzTextSequenceEntry::FHarfBuzzTextSequenceEntry
              ((longlong)iVar1 * 0x38 + lVar9,*piVar6,iVar2 - iVar3,*plVar4,&local_38,*puVar7);
    *(undefined8 *)*param_1 = 0;
    puVar8 = (undefined8 *)param_1[4];
    local_40 = (longlong *)0x0;
    if (puVar8 != &local_48) {
      *puVar8 = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 1,&local_40);
      plVar4 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar6 = (int *)((longlong)plVar4 + 0xc);
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    *(undefined4 *)param_1[5] = 0x3f800000;
  }
  return;
}



// FUNCTION 1417fa010 operator() body=183 status=ok
// SIG undefined operator()(void)

longlong <lambda_62069497a8b8d20febf2b4718cfb279b>::operator()(int *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_18 [2];
  longlong *local_10;
  
  iVar4 = (int)param_2[1];
  iVar1 = *param_1;
  if (((iVar4 != 0) && (lVar5 = *param_2, *(int *)(lVar5 + 4) <= iVar1)) &&
     (iVar1 <= *(int *)((longlong)iVar4 * 0x20 + -0x14 + lVar5))) {
    uVar2 = (longlong)iVar4;
    local_18[0] = iVar1;
    uVar3 = 0;
    local_10 = param_2;
    while (uVar2 != 0) {
      uVar7 = uVar2 >> 1;
      uVar6 = (uint)uVar2;
      iVar4 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey
                        ((uVar7 + uVar3) * 0x20 + lVar5);
      uVar2 = uVar7;
      if (iVar4 < iVar1) {
        uVar3 = (ulonglong)(uVar6 & 1) + uVar7 + uVar3;
      }
    }
    lVar5 = <lambda_fb002974a65c0af56e235e3761d5398a>::operator()(local_18,uVar3 & 0xffffffff);
    if (lVar5 != 0) {
      return lVar5;
    }
    lVar5 = <lambda_fb002974a65c0af56e235e3761d5398a>::operator()(local_18,(int)uVar3 + -1);
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 1417fa0d0 FUN_1417fa0d0 body=2116 status=ok
// SIG undefined FUN_1417fa0d0(void)

void FUN_1417fa0d0(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  undefined4 uVar8;
  float *pfVar9;
  bool bVar10;
  char cVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
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
  int local_res8;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  int local_158;
  uint local_154;
  uint local_150;
  float local_14c;
  float local_148;
  float local_144;
  uint local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  ushort uStack_124;
  ushort uStack_122;
  ushort uStack_120;
  ushort uStack_11e;
  short sStack_11c;
  short sStack_11a;
  short local_118;
  short sStack_116;
  byte bStack_114;
  undefined2 uStack_113;
  char cStack_111;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  
  local_110 = FUN_1418336f0(*param_1,param_1[1] + 0x60,*(undefined4 *)param_1[2],param_2);
  uVar12 = FUN_14183a900(local_110);
  plVar15 = (longlong *)0x0;
  local_150 = 0;
  local_res8 = 0;
  plVar22 = (longlong *)0x0;
  local_108 = 0;
  plVar21 = (longlong *)0x0;
  uVar24 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  fVar36 = 0.0;
  local_e8 = 0;
  fVar37 = 0.0;
  fVar29 = 0.0;
  fVar32 = (float)uVar12;
  local_158 = 0;
  local_154 = 1;
  local_140 = *(uint *)param_1[3];
  if (local_140 != 0) {
    lVar23 = 0;
    fVar31 = 0.0;
    local_148 = 0.0;
    local_144 = fVar32;
    do {
      sVar7 = *(short *)(*(longlong *)(param_1[1] + 0xb0) + lVar23);
      if (sVar7 == 10) {
        fVar31 = fVar31 + fVar32;
        local_154 = local_154 + 1;
        fVar29 = 0.0;
        local_148 = fVar31;
      }
      else {
        FCharacterList::GetCharacter(local_110,&local_138,sVar7,*(undefined1 *)(param_1[1] + 0xac));
        if (cStack_111 == '\0') {
LAB_1417fa398:
          bVar10 = true;
LAB_1417fa39b:
          iVar19 = 0;
        }
        else {
          if ((plVar15 == (longlong *)0x0) || (bStack_114 != local_150)) {
            uVar20 = (ulonglong)bStack_114;
            local_150 = (uint)bStack_114;
            plVar15 = (longlong *)
                      (**(code **)(**(longlong **)(*(longlong *)(*param_1 + 0x100) + uVar20 * 0x10)
                                  + 8))();
            uVar16 = (**(code **)(*(longlong *)param_1[4] + 0x18))
                               ((longlong *)param_1[4],uVar20,plVar15,
                                *(undefined8 *)(param_1[1] + 0x68));
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0;
            uStack_170 = 0;
            lVar17 = FUN_14182dc90(param_1[5],param_5,&local_188,uVar16,1,2,
                                   *(undefined1 *)param_1[6],0,(int)*(short *)(param_1[1] + 0x46),
                                   (int)*(char *)(param_1[1] + 0x48));
            plVar22 = (longlong *)
                      ((longlong)*(int *)(lVar17 + 0x8c) * 0x10 +
                      *(longlong *)(*(longlong *)param_1[5] + 0x30));
            plVar21 = (longlong *)
                      ((longlong)*(int *)(lVar17 + 0x90) * 0x10 +
                      *(longlong *)(*(longlong *)param_1[5] + 0x40));
            local_res8 = (int)plVar22[1];
            local_158 = (int)plVar21[1];
            uVar13 = (**(code **)*plVar15)(plVar15);
            fVar36 = 1.0 / (float)uVar13;
            uVar13 = (**(code **)(*plVar15 + 8))(plVar15);
            fVar37 = 1.0 / (float)uVar13;
          }
          if ((cStack_111 == '\0') || (cVar11 = FText::IsWhitespace(), cVar11 != '\0'))
          goto LAB_1417fa398;
          bVar10 = false;
          if (local_e8._7_1_ == '\0') goto LAB_1417fa39b;
          cVar11 = FUN_141839520(local_110,&local_108,&local_138);
          iVar19 = (int)cVar11;
        }
        local_108 = local_138;
        uStack_100 = uStack_130;
        local_e8 = CONCAT17(cStack_111,
                            CONCAT25(uStack_113,CONCAT14(bStack_114,CONCAT22(sStack_116,local_118)))
                           );
        local_f8 = CONCAT26(uStack_122,CONCAT24(uStack_124,local_128));
        uStack_f0 = CONCAT26(sStack_11a,CONCAT24(sStack_11c,CONCAT22(uStack_11e,uStack_120)));
        if (!bVar10) {
          fVar30 = (float)(int)sStack_11a + fVar29 + (float)iVar19 + (float)param_6;
          fVar38 = (float)uStack_124 * fVar36;
          fVar32 = (fVar31 - (float)(int)sStack_11c) + fVar32 + (float)(int)local_118;
          uVar13 = (uint)uStack_120;
          iVar14 = (int)plVar22[1] + 4;
          *(int *)(plVar22 + 1) = iVar14;
          local_14c = (float)uStack_122 * fVar37;
          fVar34 = (float)uVar13 + fVar30;
          fVar31 = (float)uStack_11e + fVar32;
          local_13c = (float)uStack_11e * fVar37;
          if (*(int *)((longlong)plVar22 + 0xc) < iVar14) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar22);
          }
          iVar14 = (int)plVar21[1] + 6;
          *(int *)(plVar21 + 1) = iVar14;
          if (*(int *)((longlong)plVar21 + 0xc) < iVar14) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21);
          }
          fVar25 = 0.0;
          lVar17 = (longlong)local_res8;
          fVar26 = 0.0;
          fVar28 = 0.0;
          fVar33 = 0.0;
          if (param_4 != 0) {
            fVar25 = (float)uVar24 * (1.0 / (float)local_140);
            fVar26 = 1.0 / ((float)local_154 * local_144);
            fVar28 = (float)(uVar24 + 1) * (1.0 / (float)local_140);
            fVar33 = fVar31 * fVar26;
            fVar26 = fVar26 * fVar32;
          }
          pfVar9 = (float *)param_1[7];
          fVar35 = (float)uVar13 * fVar36 + fVar38;
          fVar2 = *pfVar9;
          iVar14 = local_res8 + 1;
          fVar3 = pfVar9[2];
          fVar4 = pfVar9[3];
          fVar5 = pfVar9[1];
          fVar27 = pfVar9[4];
          fVar6 = pfVar9[5];
          uVar8 = *param_3;
          lVar18 = *plVar22;
          pfVar9 = (float *)(lVar18 + lVar17 * 0x28);
          *pfVar9 = fVar38;
          pfVar9[1] = local_14c;
          pfVar9[2] = fVar25;
          pfVar9[3] = fVar26;
          puVar1 = (undefined4 *)(lVar18 + 0x10 + lVar17 * 0x28);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = fVar32 * fVar3 + fVar30 * fVar2 + fVar27;
          puVar1[3] = fVar32 * fVar4 + fVar30 * fVar5 + fVar6;
          *(ulonglong *)(lVar18 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_164,uVar8);
          pfVar9 = (float *)param_1[7];
          fVar2 = *pfVar9;
          fVar3 = pfVar9[2];
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[3];
          fVar27 = pfVar9[4];
          fVar6 = pfVar9[5];
          uVar8 = *param_3;
          lVar18 = (longlong)iVar14;
          lVar17 = *plVar22;
          pfVar9 = (float *)(lVar17 + lVar18 * 0x28);
          *pfVar9 = fVar35;
          pfVar9[1] = local_14c;
          pfVar9[2] = fVar28;
          pfVar9[3] = fVar26;
          puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18 * 0x28);
          *puVar1 = 0x3f800000;
          puVar1[1] = 0;
          puVar1[2] = fVar32 * fVar3 + fVar34 * fVar2 + fVar27;
          puVar1[3] = fVar34 * fVar4 + fVar32 * fVar5 + fVar6;
          *(ulonglong *)(lVar17 + 0x20 + lVar18 * 0x28) = CONCAT44(uStack_164,uVar8);
          pfVar9 = (float *)param_1[7];
          fVar27 = local_13c + local_14c;
          fVar32 = *pfVar9;
          fVar26 = pfVar9[3];
          fVar2 = pfVar9[2];
          fVar3 = pfVar9[1];
          fVar4 = pfVar9[4];
          fVar5 = pfVar9[5];
          uVar8 = *param_3;
          lVar18 = (longlong)(local_res8 + 2);
          lVar17 = *plVar22;
          pfVar9 = (float *)(lVar17 + lVar18 * 0x28);
          *pfVar9 = fVar38;
          pfVar9[1] = fVar27;
          pfVar9[2] = fVar25;
          pfVar9[3] = fVar33;
          puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18 * 0x28);
          *puVar1 = 0;
          puVar1[1] = 0x3f800000;
          puVar1[2] = fVar31 * fVar2 + fVar30 * fVar32 + fVar4;
          puVar1[3] = fVar31 * fVar26 + fVar30 * fVar3 + fVar5;
          *(ulonglong *)(lVar17 + 0x20 + lVar18 * 0x28) = CONCAT44(uStack_164,uVar8);
          pfVar9 = (float *)param_1[7];
          local_188 = CONCAT44(fVar27,fVar35);
          uStack_180 = CONCAT44(fVar33,fVar28);
          fVar32 = fVar31 * pfVar9[2] + fVar34 * *pfVar9 + pfVar9[4];
          fVar31 = fVar34 * pfVar9[1] + fVar31 * pfVar9[3] + pfVar9[5];
          local_168 = *param_3;
          lVar18 = (longlong)(local_res8 + 3);
          local_178 = 0x3f8000003f800000;
          uStack_170 = CONCAT44(fVar31,fVar32);
          lVar17 = *plVar22;
          pfVar9 = (float *)(lVar17 + lVar18 * 0x28);
          *pfVar9 = fVar35;
          pfVar9[1] = fVar27;
          pfVar9[2] = fVar28;
          pfVar9[3] = fVar33;
          puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18 * 0x28);
          *puVar1 = 0x3f800000;
          puVar1[1] = 0x3f800000;
          puVar1[2] = fVar32;
          puVar1[3] = fVar31;
          *(ulonglong *)(lVar17 + 0x20 + lVar18 * 0x28) = CONCAT44(uStack_164,local_168);
          lVar17 = (longlong)local_158;
          *(int *)(*plVar21 + lVar17 * 4) = local_res8;
          *(int *)(*plVar21 + 4 + lVar17 * 4) = iVar14;
          *(int *)(*plVar21 + 8 + lVar17 * 4) = local_res8 + 2;
          *(int *)(*plVar21 + (longlong)(local_158 + 3) * 4) = iVar14;
          iVar14 = local_158 + 5;
          *(int *)(*plVar21 + (longlong)(local_158 + 4) * 4) = local_res8 + 3;
          local_158 = local_158 + 6;
          *(int *)(*plVar21 + (longlong)iVar14 * 4) = local_res8 + 2;
          fVar31 = local_148;
          fVar32 = local_144;
          local_res8 = local_res8 + 4;
        }
        fVar29 = fVar29 + (float)iVar19 + (float)(int)sStack_116;
      }
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 2;
    } while (uVar24 < local_140);
  }
  return;
}



// FUNCTION 1417fa920 FUN_1417fa920 body=2374 status=ok
// SIG undefined FUN_1417fa920(void)

void FUN_1417fa920(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  uint uVar11;
  undefined4 uVar12;
  float *pfVar13;
  bool bVar14;
  char cVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
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
  int local_res8;
  undefined4 uStack_194;
  int local_190;
  uint local_18c;
  float local_188;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  ushort uStack_15c;
  ushort uStack_15a;
  ushort uStack_158;
  ushort uStack_156;
  short sStack_154;
  short sStack_152;
  short local_150;
  short sStack_14e;
  byte bStack_14c;
  undefined2 uStack_14b;
  char cStack_149;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  local_148 = FUN_1418336f0(*param_1,param_1[1] + 0x60,param_3,param_2);
  uVar16 = FUN_14183a900(local_148);
  uVar27 = 0;
  plVar19 = (longlong *)0x0;
  local_res8 = 0;
  plVar25 = (longlong *)0x0;
  local_128 = 0;
  plVar24 = (longlong *)0x0;
  uVar28 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  fVar35 = 0.0;
  local_108 = 0;
  fVar36 = 0.0;
  fVar31 = 0.0;
  fVar37 = (float)uVar16;
  local_190 = 0;
  local_18c = 1;
  uVar11 = *(uint *)param_1[3];
  if (uVar11 != 0) {
    fVar33 = 0.0;
    local_188 = 0.0;
    local_140 = 0;
    do {
      sVar10 = *(short *)(local_140 + *(longlong *)(param_1[1] + 0xb0));
      if (sVar10 == 10) {
        fVar33 = fVar33 + fVar37;
        local_18c = local_18c + 1;
        fVar31 = 0.0;
        local_188 = fVar33;
      }
      else {
        FCharacterList::GetCharacter(local_148,&local_170,sVar10,*(undefined1 *)(param_1[1] + 0xac))
        ;
        if (cStack_149 == '\0') {
LAB_1417fabe9:
          bVar14 = true;
LAB_1417fabec:
          iVar23 = 0;
        }
        else {
          if ((plVar19 == (longlong *)0x0) || (bStack_14c != uVar27)) {
            uVar27 = (uint)bStack_14c;
            plVar19 = (longlong *)
                      (**(code **)(**(longlong **)
                                     (*(longlong *)(*param_1 + 0x100) + (ulonglong)uVar27 * 0x10) +
                                  8))();
            uVar20 = (**(code **)(*(longlong *)param_1[4] + 0x18))
                               ((longlong *)param_1[4],uVar27,plVar19,
                                *(undefined8 *)(param_1[1] + 0x68));
            local_f8 = ZEXT816(0);
            local_e8 = 0;
            uStack_e0 = 0;
            lVar21 = FUN_14182dc90(param_1[5],param_5,local_f8,uVar20,1,2,*(undefined1 *)param_1[6],
                                   0,(int)*(short *)(param_1[1] + 0x46),
                                   (int)*(char *)(param_1[1] + 0x48));
            plVar25 = (longlong *)
                      ((longlong)*(int *)(lVar21 + 0x8c) * 0x10 +
                      *(longlong *)(*(longlong *)param_1[5] + 0x30));
            plVar24 = (longlong *)
                      ((longlong)*(int *)(lVar21 + 0x90) * 0x10 +
                      *(longlong *)(*(longlong *)param_1[5] + 0x40));
            local_res8 = (int)plVar25[1];
            local_190 = (int)plVar24[1];
            uVar17 = (**(code **)*plVar19)(plVar19);
            fVar35 = 1.0 / (float)uVar17;
            uVar17 = (**(code **)(*plVar19 + 8))(plVar19);
            fVar36 = 1.0 / (float)uVar17;
          }
          if ((cStack_149 == '\0') || (cVar15 = FText::IsWhitespace(), cVar15 != '\0'))
          goto LAB_1417fabe9;
          bVar14 = false;
          if (local_108._7_1_ == '\0') goto LAB_1417fabec;
          cVar15 = FUN_141839520(local_148,&local_128,&local_170);
          iVar23 = (int)cVar15;
        }
        local_128 = local_170;
        uStack_120 = uStack_168;
        local_108 = CONCAT17(cStack_149,
                             CONCAT25(uStack_14b,CONCAT14(bStack_14c,CONCAT22(sStack_14e,local_150))
                                     ));
        local_118 = CONCAT26(uStack_15a,CONCAT24(uStack_15c,local_160));
        uStack_110 = CONCAT26(sStack_152,CONCAT24(sStack_154,CONCAT22(uStack_156,uStack_158)));
        if (!bVar14) {
          fVar32 = (float)(int)sStack_152 + fVar31 + (float)iVar23 + (float)param_6;
          fVar30 = (fVar33 - (float)(int)sStack_154) + fVar37 + (float)(int)local_150;
          local_f8 = ZEXT416((uint)((float)uStack_15c * fVar35));
          fVar33 = (float)uStack_15a * fVar36;
          uVar17 = (uint)uStack_156;
          iVar18 = (int)plVar25[1] + 4;
          fVar38 = (float)uStack_158 + fVar32;
          local_138 = ZEXT416((uint)((float)uStack_158 * fVar35));
          *(int *)(plVar25 + 1) = iVar18;
          fVar34 = (float)uVar17 + fVar30;
          if (*(int *)((longlong)plVar25 + 0xc) < iVar18) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar25);
          }
          iVar18 = (int)plVar24[1] + 6;
          *(int *)(plVar24 + 1) = iVar18;
          if (*(int *)((longlong)plVar24 + 0xc) < iVar18) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24);
          }
          fVar39 = 0.0;
          lVar21 = (longlong)local_res8;
          fVar40 = 0.0;
          fVar42 = 0.0;
          fVar29 = 0.0;
          if (param_4 != 0) {
            fVar39 = (float)uVar28 * (1.0 / (float)uVar11);
            fVar40 = 1.0 / ((float)local_18c * fVar37);
            fVar42 = (float)(uVar28 + 1) * (1.0 / (float)uVar11);
            fVar29 = fVar40 * fVar34;
            fVar40 = fVar40 * fVar30;
          }
          pfVar13 = (float *)param_1[7];
          fVar2 = pfVar13[2];
          fVar3 = *pfVar13;
          fVar4 = pfVar13[1];
          fVar5 = pfVar13[4];
          fVar6 = pfVar13[4];
          fVar7 = pfVar13[3];
          fVar8 = pfVar13[5];
          fVar9 = pfVar13[5];
          iVar18 = local_res8 + 1;
          uVar12 = *param_3;
          lVar22 = *plVar25;
          pfVar13 = (float *)(lVar22 + lVar21 * 0x28);
          *pfVar13 = (float)local_f8._0_4_;
          pfVar13[1] = fVar33;
          pfVar13[2] = fVar39;
          pfVar13[3] = fVar40;
          puVar1 = (undefined4 *)(lVar22 + 0x10 + lVar21 * 0x28);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = (float)((int)ROUND((fVar32 + fVar32) * fVar3 + fVar30 * fVar2 + fVar5 +
                                         fVar30 * fVar2 + fVar6 + 0.5) >> 1);
          puVar1[3] = (float)((int)ROUND((fVar30 + fVar30) * fVar7 + fVar32 * fVar4 + fVar8 +
                                         fVar32 * fVar4 + fVar9 + 0.5) >> 1);
          *(ulonglong *)(lVar22 + 0x20 + lVar21 * 0x28) = CONCAT44(uStack_194,uVar12);
          pfVar13 = (float *)param_1[7];
          local_138._0_4_ = (float)local_138._0_4_ + (float)local_f8._0_4_;
          fVar2 = *pfVar13;
          fVar3 = pfVar13[2];
          fVar4 = pfVar13[3];
          fVar5 = pfVar13[4];
          fVar6 = pfVar13[4];
          fVar7 = pfVar13[1];
          fVar8 = pfVar13[5];
          fVar9 = pfVar13[5];
          fVar41 = (float)uVar17 * fVar36 + fVar33;
          uVar12 = *param_3;
          lVar22 = (longlong)iVar18;
          lVar21 = *plVar25;
          pfVar13 = (float *)(lVar21 + lVar22 * 0x28);
          *pfVar13 = (float)local_138._0_4_;
          pfVar13[1] = fVar33;
          pfVar13[2] = fVar42;
          pfVar13[3] = fVar40;
          puVar1 = (undefined4 *)(lVar21 + 0x10 + lVar22 * 0x28);
          *puVar1 = 0x3f800000;
          puVar1[1] = 0;
          puVar1[2] = (float)((int)ROUND((fVar38 + fVar38) * fVar2 + fVar30 * fVar3 + fVar5 +
                                         fVar30 * fVar3 + fVar6 + 0.5) >> 1);
          puVar1[3] = (float)((int)ROUND((fVar38 + fVar38) * fVar7 + fVar30 * fVar4 + fVar8 +
                                         fVar30 * fVar4 + fVar9 + 0.5) >> 1);
          *(ulonglong *)(lVar21 + 0x20 + lVar22 * 0x28) = CONCAT44(uStack_194,uVar12);
          pfVar13 = (float *)param_1[7];
          fVar33 = pfVar13[2];
          fVar30 = *pfVar13;
          fVar40 = pfVar13[3];
          fVar2 = pfVar13[1];
          fVar3 = pfVar13[4];
          fVar4 = pfVar13[5];
          fVar5 = pfVar13[4];
          fVar6 = pfVar13[5];
          uVar12 = *param_3;
          lVar22 = (longlong)(local_res8 + 2);
          lVar21 = *plVar25;
          pfVar13 = (float *)(lVar21 + lVar22 * 0x28);
          *pfVar13 = (float)local_f8._0_4_;
          pfVar13[1] = fVar41;
          pfVar13[2] = fVar39;
          pfVar13[3] = fVar29;
          puVar1 = (undefined4 *)(lVar21 + 0x10 + lVar22 * 0x28);
          *puVar1 = 0;
          puVar1[1] = 0x3f800000;
          puVar1[2] = (float)((int)ROUND((fVar30 + fVar30) * fVar32 + fVar34 * fVar33 + fVar3 +
                                         fVar34 * fVar33 + fVar5 + 0.5) >> 1);
          puVar1[3] = (float)((int)ROUND((fVar32 + fVar32) * fVar2 + fVar34 * fVar40 + fVar4 +
                                         fVar34 * fVar40 + fVar6 + 0.5) >> 1);
          *(ulonglong *)(lVar21 + 0x20 + lVar22 * 0x28) = CONCAT44(uStack_194,uVar12);
          pfVar13 = (float *)param_1[7];
          fVar33 = *pfVar13;
          fVar30 = pfVar13[1];
          fVar32 = pfVar13[2];
          fVar40 = pfVar13[3];
          fVar39 = pfVar13[4];
          fVar2 = pfVar13[5];
          fVar3 = pfVar13[4];
          fVar4 = pfVar13[5];
          uVar12 = *param_3;
          lVar22 = (longlong)(local_res8 + 3);
          lVar26 = (longlong)local_190;
          lVar21 = *plVar25;
          pfVar13 = (float *)(lVar21 + lVar22 * 0x28);
          *pfVar13 = (float)local_138._0_4_;
          pfVar13[1] = fVar41;
          pfVar13[2] = fVar42;
          pfVar13[3] = fVar29;
          puVar1 = (undefined4 *)(lVar21 + 0x10 + lVar22 * 0x28);
          *puVar1 = 0x3f800000;
          puVar1[1] = 0x3f800000;
          puVar1[2] = (float)((int)ROUND((fVar38 + fVar38) * fVar33 + fVar34 * fVar32 + fVar39 +
                                         fVar34 * fVar32 + fVar3 + 0.5) >> 1);
          puVar1[3] = (float)((int)ROUND((fVar38 + fVar38) * fVar30 + fVar34 * fVar40 + fVar2 +
                                         fVar34 * fVar40 + fVar4 + 0.5) >> 1);
          *(ulonglong *)(lVar21 + 0x20 + lVar22 * 0x28) = CONCAT44(uStack_194,uVar12);
          *(int *)(*plVar24 + lVar26 * 4) = local_res8;
          *(int *)(*plVar24 + 4 + lVar26 * 4) = iVar18;
          *(int *)(*plVar24 + 8 + lVar26 * 4) = local_res8 + 2;
          *(int *)(*plVar24 + (longlong)(local_190 + 3) * 4) = iVar18;
          iVar18 = local_190 + 5;
          *(int *)(*plVar24 + (longlong)(local_190 + 4) * 4) = local_res8 + 3;
          local_190 = local_190 + 6;
          *(int *)(*plVar24 + (longlong)iVar18 * 4) = local_res8 + 2;
          fVar33 = local_188;
          local_res8 = local_res8 + 4;
        }
        fVar31 = fVar31 + (float)iVar23 + (float)(int)sStack_14e;
      }
      local_140 = local_140 + 2;
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar11);
  }
  return;
}



// FUNCTION 1417fb270 FUN_1417fb270 body=1930 status=ok
// SIG undefined FUN_1417fb270(void)

void FUN_1417fb270(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
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
  float fVar33;
  int local_res8;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  float local_118;
  float local_114;
  float local_110;
  int local_10c;
  short local_108;
  short local_106;
  ushort local_104;
  ushort local_102;
  ushort local_100;
  ushort local_fe;
  byte local_fc;
  char local_fb;
  float local_f8;
  longlong local_f0;
  
  iVar18 = param_6;
  plVar15 = (longlong *)0x0;
  uVar17 = 0xffffffff;
  local_10c = *(int *)(*param_1 + 8);
  fVar29 = 0.0;
  param_6 = 0;
  fVar30 = 0.0;
  local_res8 = 0;
  fVar26 = (float)iVar18;
  if (0 < local_10c) {
    local_110 = 0.0;
    local_f0 = 0;
    plVar16 = plVar15;
    plVar19 = plVar15;
    plVar11 = plVar15;
    do {
      fVar27 = local_110;
      lVar20 = local_f0 + *(longlong *)*param_1;
      iVar18 = (int)plVar19;
      if ((*(char *)(lVar20 + 0x24) != '\0') &&
         (local_114 = fVar26, FUN_14183d710(param_1[1],&local_108,lVar20,param_2), local_fb != '\0')
         ) {
        if ((plVar11 == (longlong *)0x0) || (local_fc != uVar17)) {
          uVar17 = (uint)local_fc;
          plVar11 = (longlong *)
                    (**(code **)(**(longlong **)
                                   (*(longlong *)(param_1[1] + 0x100) + (ulonglong)uVar17 * 0x10) +
                                8))();
          uVar12 = (**(code **)(*(longlong *)param_1[2] + 0x18))
                             ((longlong *)param_1[2],uVar17,plVar11,param_4);
          local_148 = 0;
          uStack_140 = 0;
          local_138 = 0;
          uStack_130 = 0;
          lVar13 = FUN_14182dc90(param_1[3],param_5,&local_148,uVar12,1,2,*(undefined1 *)param_1[4],
                                 0,(int)*(short *)(param_1[5] + 0x46),
                                 (int)*(char *)(param_1[5] + 0x48));
          plVar15 = (longlong *)
                    ((longlong)*(int *)(lVar13 + 0x8c) * 0x10 +
                    *(longlong *)(*(longlong *)param_1[3] + 0x30));
          plVar16 = (longlong *)
                    ((longlong)*(int *)(lVar13 + 0x90) * 0x10 +
                    *(longlong *)(*(longlong *)param_1[3] + 0x40));
          param_6 = (int)plVar15[1];
          local_res8 = (int)plVar16[1];
          uVar9 = (**(code **)*plVar11)(plVar11);
          fVar29 = 1.0 / (float)uVar9;
          uVar9 = (**(code **)(*plVar11 + 8))(plVar11);
          fVar30 = 1.0 / (float)uVar9;
        }
        fVar25 = (float)(int)local_106 + fVar26 + (float)(int)*(short *)(lVar20 + 0x1c);
        fVar33 = (float)local_104 * fVar29;
        fVar26 = (fVar27 - (float)(int)local_108) + (float)(int)*(short *)(lVar20 + 0x1e) +
                 (float)*(ushort *)param_1[6] + (float)(int)*(short *)param_1[7];
        uVar9 = (uint)local_100;
        iVar10 = (int)plVar15[1] + 4;
        *(int *)(plVar15 + 1) = iVar10;
        local_118 = (float)local_102 * fVar30;
        fVar31 = (float)uVar9 + fVar25;
        fVar27 = (float)local_fe + fVar26;
        local_f8 = (float)local_fe * fVar30;
        if (*(int *)((longlong)plVar15 + 0xc) < iVar10) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar15);
        }
        iVar10 = (int)plVar16[1] + 6;
        *(int *)(plVar16 + 1) = iVar10;
        if (*(int *)((longlong)plVar16 + 0xc) < iVar10) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar16);
        }
        fVar22 = 0.0;
        lVar13 = (longlong)param_6;
        fVar23 = 0.0;
        fVar28 = 0.0;
        fVar21 = 0.0;
        if (param_4 != 0) {
          fVar21 = (1.0 / (float)*(ushort *)param_1[6]) * fVar27;
          fVar23 = (1.0 / (float)*(ushort *)param_1[6]) * fVar26;
          fVar22 = (float)iVar18 * (1.0 / (float)local_10c);
          fVar28 = (float)(iVar18 + 1) * (1.0 / (float)local_10c);
        }
        pfVar8 = (float *)param_1[8];
        fVar32 = (float)uVar9 * fVar29 + fVar33;
        fVar2 = pfVar8[2];
        iVar10 = param_6 + 1;
        fVar3 = *pfVar8;
        fVar4 = pfVar8[3];
        fVar5 = pfVar8[1];
        fVar24 = pfVar8[4];
        fVar6 = pfVar8[5];
        uVar7 = *param_3;
        lVar14 = *plVar15;
        pfVar8 = (float *)(lVar14 + lVar13 * 0x28);
        *pfVar8 = fVar33;
        pfVar8[1] = local_118;
        pfVar8[2] = fVar22;
        pfVar8[3] = fVar23;
        puVar1 = (undefined4 *)(lVar14 + 0x10 + lVar13 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = fVar26 * fVar2 + fVar25 * fVar3 + fVar24;
        puVar1[3] = fVar26 * fVar4 + fVar25 * fVar5 + fVar6;
        *(ulonglong *)(lVar14 + 0x20 + lVar13 * 0x28) = CONCAT44(uStack_124,uVar7);
        pfVar8 = (float *)param_1[8];
        fVar2 = *pfVar8;
        fVar3 = pfVar8[2];
        fVar4 = pfVar8[1];
        fVar5 = pfVar8[3];
        fVar24 = pfVar8[4];
        fVar6 = pfVar8[5];
        uVar7 = *param_3;
        lVar14 = (longlong)iVar10;
        lVar13 = *plVar15;
        pfVar8 = (float *)(lVar13 + lVar14 * 0x28);
        *pfVar8 = fVar32;
        pfVar8[1] = local_118;
        pfVar8[2] = fVar28;
        pfVar8[3] = fVar23;
        puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar14 * 0x28);
        *puVar1 = 0x3f800000;
        puVar1[1] = 0;
        puVar1[2] = fVar26 * fVar3 + fVar31 * fVar2 + fVar24;
        puVar1[3] = fVar31 * fVar4 + fVar26 * fVar5 + fVar6;
        *(ulonglong *)(lVar13 + 0x20 + lVar14 * 0x28) = CONCAT44(uStack_124,uVar7);
        pfVar8 = (float *)param_1[8];
        fVar24 = local_f8 + local_118;
        fVar26 = *pfVar8;
        fVar23 = pfVar8[3];
        fVar2 = pfVar8[2];
        fVar3 = pfVar8[1];
        fVar4 = pfVar8[4];
        fVar5 = pfVar8[5];
        uVar7 = *param_3;
        lVar14 = (longlong)(param_6 + 2);
        lVar13 = *plVar15;
        pfVar8 = (float *)(lVar13 + lVar14 * 0x28);
        *pfVar8 = fVar33;
        pfVar8[1] = fVar24;
        pfVar8[2] = fVar22;
        pfVar8[3] = fVar21;
        puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar14 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0x3f800000;
        puVar1[2] = fVar27 * fVar2 + fVar25 * fVar26 + fVar4;
        puVar1[3] = fVar27 * fVar23 + fVar25 * fVar3 + fVar5;
        *(ulonglong *)(lVar13 + 0x20 + lVar14 * 0x28) = CONCAT44(uStack_124,uVar7);
        pfVar8 = (float *)param_1[8];
        local_148 = CONCAT44(fVar24,fVar32);
        uStack_140 = CONCAT44(fVar21,fVar28);
        fVar26 = fVar27 * pfVar8[2] + fVar31 * *pfVar8 + pfVar8[4];
        fVar27 = fVar31 * pfVar8[1] + fVar27 * pfVar8[3] + pfVar8[5];
        local_128 = *param_3;
        lVar14 = (longlong)(param_6 + 3);
        lVar13 = *plVar15;
        local_138 = 0x3f8000003f800000;
        uStack_130 = CONCAT44(fVar27,fVar26);
        pfVar8 = (float *)(lVar13 + lVar14 * 0x28);
        *pfVar8 = fVar32;
        pfVar8[1] = fVar24;
        pfVar8[2] = fVar28;
        pfVar8[3] = fVar21;
        puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar14 * 0x28);
        *puVar1 = 0x3f800000;
        puVar1[1] = 0x3f800000;
        puVar1[2] = fVar26;
        puVar1[3] = fVar27;
        *(ulonglong *)(lVar13 + 0x20 + lVar14 * 0x28) = CONCAT44(uStack_124,local_128);
        lVar13 = (longlong)local_res8;
        *(int *)(*plVar16 + lVar13 * 4) = param_6;
        *(int *)(*plVar16 + 4 + lVar13 * 4) = iVar10;
        *(int *)(*plVar16 + 8 + lVar13 * 4) = param_6 + 2;
        *(int *)(*plVar16 + (longlong)(local_res8 + 3) * 4) = iVar10;
        iVar10 = local_res8 + 5;
        *(int *)(*plVar16 + (longlong)(local_res8 + 4) * 4) = param_6 + 3;
        local_res8 = local_res8 + 6;
        *(int *)(*plVar16 + (longlong)iVar10 * 4) = param_6 + 2;
        fVar27 = local_110;
        fVar26 = local_114;
        param_6 = param_6 + 4;
      }
      plVar19 = (longlong *)(ulonglong)(iVar18 + 1U);
      local_f0 = local_f0 + 0x68;
      fVar26 = fVar26 + (float)(int)*(short *)(lVar20 + 0x18);
      local_110 = fVar27 + (float)(int)*(short *)(lVar20 + 0x1a);
    } while ((int)(iVar18 + 1U) < local_10c);
  }
  return;
}



// FUNCTION 1417fba00 FUN_1417fba00 body=1283 status=ok
// SIG undefined FUN_1417fba00(void)

void FUN_1417fba00(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  longlong local_58;
  
  *(int *)(*param_1 + 0x68) = *(int *)(*param_1 + 0x68) + 1;
  iVar6 = 0;
LAB_1417fba2d:
  do {
    iVar10 = 0;
    if ((iVar6 < 0) || (*(int *)(param_3 + 0x1d0) <= iVar6)) {
      iVar6 = *(int *)(param_3 + 0x1d4);
      lVar9 = *(longlong *)(param_3 + 0x1c0);
      iVar10 = *(int *)(param_3 + 0x1d0);
      if (iVar6 < 0) {
        if (lVar9 == 0) {
          lVar9 = param_3;
        }
        if (iVar10 != 0) {
          do {
            if (*(char *)(lVar9 + 0xd8) != '\0') {
              *(undefined1 *)(lVar9 + 0xd8) = 0;
              if (*(longlong *)(lVar9 + 200) != 0) {
                FMemory::Free();
              }
              if (*(char *)(lVar9 + 0xc0) != '\0') {
                *(undefined1 *)(lVar9 + 0xc0) = 0;
              }
            }
            FSlateElementBatch::FBatchKey::~FBatchKey(lVar9);
            lVar9 = lVar9 + 0xe0;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar6 = *(int *)(param_3 + 0x1d4);
        }
        *(undefined4 *)(param_3 + 0x1d0) = 0;
        if (iVar6 != 0) {
          TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo(param_3,0);
        }
      }
      else {
        if (lVar9 == 0) {
          lVar9 = param_3;
        }
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*(char *)(lVar9 + 0xd8) != '\0') {
            *(undefined1 *)(lVar9 + 0xd8) = 0;
            if (*(longlong *)(lVar9 + 200) != 0) {
              FMemory::Free();
            }
            if (*(char *)(lVar9 + 0xc0) != '\0') {
              *(undefined1 *)(lVar9 + 0xc0) = 0;
            }
          }
          FSlateElementBatch::FBatchKey::~FBatchKey(lVar9);
          lVar9 = lVar9 + 0xe0;
        }
        *(undefined4 *)(param_3 + 0x1d0) = 0;
      }
      return;
    }
    lVar9 = *(longlong *)(param_3 + 0x1c0);
    if (*(longlong *)(param_3 + 0x1c0) == 0) {
      lVar9 = param_3;
    }
    plVar13 = (longlong *)(lVar9 + (longlong)iVar6 * 0xe0);
    plVar3 = (longlong *)plVar13[1];
    lVar9 = *plVar13;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    if ((lVar9 == 0) || (plVar3 == (longlong *)0x0)) {
LAB_1417fba93:
      bVar14 = false;
    }
    else {
      LOCK();
      iVar5 = (int)plVar3[1];
      if (iVar5 == 0) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (iVar5 < 1) goto LAB_1417fba93;
      bVar14 = true;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    if ((bVar14) || (*(char *)((longlong)plVar13 + 0x61) == '\x05')) {
LAB_1417fbced:
      FSlateBatchData::AddRenderBatch(*param_1,param_2,plVar13,0,0,0,0);
      iVar6 = iVar6 + 1;
      goto LAB_1417fba2d;
    }
    if (*(char *)param_1[1] == '\0') {
      plVar3 = (longlong *)plVar13[6];
      lVar9 = plVar13[5];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar3 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3);
            }
          }
        }
      }
      if (lVar9 == 0) goto LAB_1417fbd1a;
      goto LAB_1417fbced;
    }
    plVar3 = (longlong *)plVar13[3];
    lVar9 = plVar13[2];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        lVar11 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
      }
    }
    if (lVar9 == 0) {
LAB_1417fbd1a:
      iVar10 = *(int *)((longlong)plVar13 + 0x8c);
      if ((iVar10 == -1) || ((int)plVar13[0x12] == -1)) {
LAB_1417fbd92:
        iVar6 = iVar6 + 1;
      }
      else {
        lVar9 = *param_1;
        lVar11 = (longlong)iVar10 * 0x10 + *(longlong *)(lVar9 + 0x30);
        iVar5 = *(int *)(lVar11 + 8);
        if (0 < iVar5) {
          lVar12 = (longlong)(int)plVar13[0x12] * 0x10 + *(longlong *)(lVar9 + 0x40);
          iVar4 = *(int *)(lVar12 + 8);
          if (0 < iVar4) {
            FSlateBatchData::AddRenderBatch
                      (lVar9,param_2,plVar13,iVar5,iVar4,*(undefined4 *)param_1[2],
                       *(undefined4 *)param_1[3]);
            *(int *)param_1[2] = *(int *)param_1[2] + *(int *)(lVar11 + 8);
            *(int *)param_1[3] = *(int *)param_1[3] + *(int *)(lVar12 + 8);
            goto LAB_1417fbd92;
          }
        }
        iVar5 = *(int *)(lVar9 + 0x18);
        iVar4 = iVar5 + 1;
        *(int *)(lVar9 + 0x18) = iVar4;
        if (*(int *)(lVar9 + 0x1c) < iVar4) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(lVar9 + 0x10));
        }
        *(int *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar5 * 4) = iVar10;
        lVar9 = *param_1;
        lVar11 = plVar13[0x12];
        iVar10 = *(int *)(lVar9 + 0x28);
        iVar5 = iVar10 + 1;
        *(int *)(lVar9 + 0x28) = iVar5;
        if (*(int *)(lVar9 + 0x2c) < iVar5) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(lVar9 + 0x20));
        }
        iVar6 = iVar6 + 1;
        *(int *)(*(longlong *)(lVar9 + 0x20) + (longlong)iVar10 * 4) = (int)lVar11;
      }
    }
    else {
      plVar3 = *(longlong **)(lVar9 + 0x28);
      if ((plVar3 != (longlong *)0x0) && (0 < (int)plVar3[1])) {
        local_58 = 0;
        do {
          lVar9 = *plVar3;
          plVar8 = *(longlong **)(lVar9 + 0x60 + local_58);
          plVar7 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            iVar5 = (int)plVar8[1];
            bVar14 = iVar5 == 0;
            if (bVar14) {
              *(int *)(plVar8 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (plVar7 = (longlong *)0x0, !bVar14) {
              LOCK();
              bVar14 = iVar5 == (int)plVar8[1];
              if (bVar14) {
                *(int *)(plVar8 + 1) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar14) {
                plVar7 = plVar8;
                if ((plVar8 != (longlong *)0x0) &&
                   (lVar9 = *(longlong *)(lVar9 + 0x58 + local_58), lVar9 != 0)) {
                  if (*(longlong *)(lVar9 + 0x10) != 0) {
                    FSlateBatchData::Merge(*param_1,*(longlong *)(lVar9 + 0x10),param_1[2]);
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                  }
                  goto LAB_1417fbbf3;
                }
                break;
              }
              LOCK();
              iVar5 = (int)plVar8[1];
              bVar14 = iVar5 == 0;
              if (bVar14) {
                *(int *)(plVar8 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
          }
          lVar9 = *param_1;
          iVar5 = *(int *)(lVar9 + 0x58);
          *(int *)(lVar9 + 0x58) = iVar5 + 1;
          if (*(int *)(lVar9 + 0x5c) < iVar5 + 1) {
            TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(lVar9 + 0x50,iVar5);
          }
          lVar11 = (longlong)iVar5 * 0xf0;
          FSlateRenderBatch::FSlateRenderBatch(*(longlong *)(lVar9 + 0x50) + lVar11);
          uVar2 = *(undefined4 *)((longlong)plVar13 + 0x24);
          lVar9 = *(longlong *)(*param_1 + 0x50);
          *(int *)(lVar9 + 4 + lVar11) = (int)plVar13[4];
          *(undefined4 *)(lVar9 + 8 + lVar11) = uVar2;
          plVar8 = plVar7;
LAB_1417fbbf3:
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar8 + 1;
            lVar9 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8);
              }
            }
          }
          local_58 = local_58 + 0xf0;
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)plVar3[1]);
      }
      iVar6 = iVar6 + 1;
    }
  } while( true );
}



// FUNCTION 1417fbf10 operator() body=450 status=ok
// SIG undefined operator()(void)

void <lambda_a8d7dad92333cedc8a75a424489b309a>::operator()(undefined8 param_1,longlong *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar10 = 0;
  if (0 < (int)param_2[1] + -1) {
    lVar12 = 0;
    do {
      lVar6 = *param_2;
      pcVar1 = (char *)(lVar6 + lVar12);
      lVar12 = lVar12 + 0x20;
      pcVar2 = (char *)(lVar6 + lVar12);
      if (*(longlong *)(pcVar1 + 0x10) == *(longlong *)(lVar6 + 0x10 + lVar12)) {
        cVar3 = *pcVar1;
        if ((((cVar3 == '\x02') || (pcVar1[8] == '\x02')) ||
            ((*(int *)(pcVar1 + 4) <= *(int *)(pcVar1 + 0xc) &&
             ((*(int *)(pcVar1 + 4) != *(int *)(pcVar1 + 0xc) ||
              ((cVar3 != '\0' && (pcVar1[8] != '\0')))))))) &&
           (((cVar4 = *pcVar2, cVar4 == '\x02' || (pcVar2[8] == '\x02')) ||
            ((*(int *)(pcVar2 + 4) <= *(int *)(pcVar2 + 0xc) &&
             ((*(int *)(pcVar2 + 4) != *(int *)(pcVar2 + 0xc) ||
              ((cVar4 != '\0' && (pcVar2[8] != '\0')))))))))) {
          if ((pcVar1[8] == '\x02') || (cVar4 == '\x02')) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((cVar3 == '\x02') || (pcVar2[8] == '\x02')) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          bVar7 = true;
          if (!bVar8) {
            if ((pcVar1[8] == '\x01') && (cVar4 == '\x01')) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            bVar7 = *(int *)(pcVar2 + 4) < *(int *)(pcVar1 + 0xc);
            if (bVar8) {
              bVar7 = *(int *)(pcVar2 + 4) <= *(int *)(pcVar1 + 0xc);
            }
          }
          bVar8 = true;
          if (!bVar9) {
            if ((cVar3 == '\x01') && (pcVar2[8] == '\x01')) {
              bVar9 = true;
            }
            else {
              bVar9 = false;
            }
            bVar8 = *(int *)(pcVar1 + 4) < *(int *)(pcVar2 + 0xc);
            if (bVar9) {
              bVar8 = *(int *)(pcVar1 + 4) <= *(int *)(pcVar2 + 0xc);
            }
          }
          if ((!bVar7) || (!bVar8)) goto LAB_1417fc06b;
          iVar11 = *(int *)(pcVar1 + 0xc);
        }
        else {
LAB_1417fc06b:
          iVar11 = *(int *)(pcVar1 + 0xc);
          if (iVar11 + 1 != *(int *)(pcVar2 + 4)) goto LAB_1417fc0a6;
        }
        iVar5 = *(int *)(pcVar2 + 0xc);
        *pcVar1 = '\x01';
        if (iVar5 <= iVar11) {
          iVar5 = iVar11;
        }
        *(undefined4 *)(pcVar1 + 4) = *(undefined4 *)(pcVar1 + 4);
        pcVar1[8] = '\x01';
        *(int *)(pcVar1 + 0xc) = iVar5;
        TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,iVar10 + 1,1);
      }
LAB_1417fc0a6:
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)param_2[1] + -1);
  }
  return;
}



// FUNCTION 1417fc0e0 FUN_1417fc0e0 body=2188 status=ok
// SIG undefined FUN_1417fc0e0(void)

void FUN_1417fc0e0(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  longlong *plVar24;
  longlong lVar25;
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
  int local_res8;
  undefined4 uStack_154;
  float local_14c;
  short local_140;
  short local_13e;
  ushort local_13c;
  ushort local_13a;
  ushort local_138;
  ushort local_136;
  byte local_134;
  char local_133;
  float local_130;
  float local_12c;
  longlong local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  iVar23 = param_6;
  plVar19 = (longlong *)0x0;
  uVar22 = 0xffffffff;
  iVar10 = *(int *)(*param_1 + 8);
  fVar31 = 0.0;
  param_6 = 0;
  fVar32 = 0.0;
  local_res8 = 0;
  fVar29 = (float)iVar23;
  if (0 < iVar10) {
    local_14c = 0.0;
    local_128 = 0;
    plVar20 = plVar19;
    plVar24 = plVar19;
    plVar15 = plVar19;
    do {
      lVar25 = local_128 + *(longlong *)*param_1;
      iVar23 = (int)plVar24;
      if ((*(char *)(lVar25 + 0x24) != '\0') &&
         (FUN_14183d710(param_1[1],&local_140,lVar25,param_2), local_133 != '\0')) {
        if ((plVar15 == (longlong *)0x0) || (local_134 != uVar22)) {
          uVar22 = (uint)local_134;
          plVar15 = (longlong *)
                    (**(code **)(**(longlong **)
                                   (*(longlong *)(param_1[1] + 0x100) + (ulonglong)uVar22 * 0x10) +
                                8))();
          uVar16 = (**(code **)(*(longlong *)param_1[2] + 0x18))
                             ((longlong *)param_1[2],uVar22,plVar15,param_4);
          local_108 = ZEXT816(0);
          local_f8 = 0;
          uStack_f0 = 0;
          lVar17 = FUN_14182dc90(param_1[3],param_5,local_108,uVar16,1,2,*(undefined1 *)param_1[4],0
                                 ,(int)*(short *)(param_1[5] + 0x46),
                                 (int)*(char *)(param_1[5] + 0x48));
          plVar19 = (longlong *)
                    ((longlong)*(int *)(lVar17 + 0x8c) * 0x10 +
                    *(longlong *)(*(longlong *)param_1[3] + 0x30));
          plVar20 = (longlong *)
                    ((longlong)*(int *)(lVar17 + 0x90) * 0x10 +
                    *(longlong *)(*(longlong *)param_1[3] + 0x40));
          param_6 = (int)plVar19[1];
          local_res8 = (int)plVar20[1];
          uVar13 = (**(code **)*plVar15)(plVar15);
          fVar31 = 1.0 / (float)uVar13;
          uVar13 = (**(code **)(*plVar15 + 8))(plVar15);
          fVar32 = 1.0 / (float)uVar13;
        }
        fVar28 = (float)(int)local_13e + fVar29 + (float)(int)*(short *)(lVar25 + 0x1c);
        fVar27 = (local_14c - (float)(int)local_140) + (float)(int)*(short *)(lVar25 + 0x1e) +
                 (float)*(ushort *)param_1[6] + (float)(int)*(short *)param_1[7];
        local_108 = ZEXT416((uint)((float)local_13c * fVar31));
        local_130 = (float)local_13a * fVar32;
        iVar14 = (int)plVar19[1] + 4;
        fVar36 = (float)local_138 + fVar28;
        local_118 = ZEXT416((uint)((float)local_138 * fVar31));
        *(int *)(plVar19 + 1) = iVar14;
        fVar30 = (float)local_136 + fVar27;
        local_12c = (float)local_136 * fVar32;
        if (*(int *)((longlong)plVar19 + 0xc) < iVar14) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar19);
        }
        iVar14 = (int)plVar20[1] + 6;
        *(int *)(plVar20 + 1) = iVar14;
        if (*(int *)((longlong)plVar20 + 0xc) < iVar14) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar20);
        }
        fVar26 = 0.0;
        lVar17 = (longlong)param_6;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        if (param_4 != 0) {
          fVar26 = (float)iVar23 * (1.0 / (float)iVar10);
          fVar33 = (1.0 / (float)*(ushort *)param_1[6]) * fVar27;
          fVar34 = (float)(iVar23 + 1) * (1.0 / (float)iVar10);
          fVar35 = fVar30 * (1.0 / (float)*(ushort *)param_1[6]);
        }
        pfVar12 = (float *)param_1[8];
        fVar2 = pfVar12[2];
        fVar3 = *pfVar12;
        fVar4 = pfVar12[1];
        fVar5 = pfVar12[4];
        fVar6 = pfVar12[4];
        fVar7 = pfVar12[3];
        fVar8 = pfVar12[5];
        fVar9 = pfVar12[5];
        iVar14 = param_6 + 1;
        uVar11 = *param_3;
        lVar18 = *plVar19;
        pfVar12 = (float *)(lVar18 + lVar17 * 0x28);
        *pfVar12 = (float)local_108._0_4_;
        pfVar12[1] = local_130;
        pfVar12[2] = fVar26;
        pfVar12[3] = fVar33;
        puVar1 = (undefined4 *)(lVar18 + 0x10 + lVar17 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = (float)((int)ROUND((fVar28 + fVar28) * fVar3 + fVar27 * fVar2 + fVar5 +
                                       fVar27 * fVar2 + fVar6 + 0.5) >> 1);
        puVar1[3] = (float)((int)ROUND((fVar27 + fVar27) * fVar7 + fVar28 * fVar4 + fVar8 +
                                       fVar28 * fVar4 + fVar9 + 0.5) >> 1);
        *(ulonglong *)(lVar18 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_154,uVar11);
        pfVar12 = (float *)param_1[8];
        local_118._0_4_ = (float)local_118._0_4_ + (float)local_108._0_4_;
        fVar2 = pfVar12[2];
        fVar3 = *pfVar12;
        fVar4 = pfVar12[3];
        fVar5 = pfVar12[4];
        fVar6 = pfVar12[4];
        fVar7 = pfVar12[1];
        fVar8 = pfVar12[5];
        fVar9 = pfVar12[5];
        uVar11 = *param_3;
        lVar18 = (longlong)iVar14;
        lVar17 = *plVar19;
        pfVar12 = (float *)(lVar17 + lVar18 * 0x28);
        *pfVar12 = (float)local_118._0_4_;
        pfVar12[1] = local_130;
        pfVar12[2] = fVar34;
        pfVar12[3] = fVar33;
        puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18 * 0x28);
        *puVar1 = 0x3f800000;
        puVar1[1] = 0;
        puVar1[2] = (float)((int)ROUND((fVar3 + fVar3) * fVar36 + fVar27 * fVar2 + fVar5 +
                                       fVar27 * fVar2 + fVar6 + 0.5) >> 1);
        puVar1[3] = (float)((int)ROUND((fVar36 + fVar36) * fVar7 + fVar27 * fVar4 + fVar8 +
                                       fVar27 * fVar4 + fVar9 + 0.5) >> 1);
        *(ulonglong *)(lVar17 + 0x20 + lVar18 * 0x28) = CONCAT44(uStack_154,uVar11);
        pfVar12 = (float *)param_1[8];
        fVar27 = *pfVar12;
        fVar33 = pfVar12[1];
        fVar2 = pfVar12[2];
        fVar3 = pfVar12[3];
        fVar4 = pfVar12[4];
        fVar5 = pfVar12[5];
        fVar6 = pfVar12[4];
        fVar7 = pfVar12[5];
        uVar11 = *param_3;
        lVar18 = (longlong)(param_6 + 2);
        lVar17 = *plVar19;
        pfVar12 = (float *)(lVar17 + lVar18 * 0x28);
        *pfVar12 = (float)local_108._0_4_;
        pfVar12[1] = local_12c + local_130;
        pfVar12[2] = fVar26;
        pfVar12[3] = fVar35;
        puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0x3f800000;
        puVar1[2] = (float)((int)ROUND((fVar28 + fVar28) * fVar27 + fVar30 * fVar2 + fVar4 +
                                       fVar30 * fVar2 + fVar6 + 0.5) >> 1);
        puVar1[3] = (float)((int)ROUND((fVar28 + fVar28) * fVar33 + fVar30 * fVar3 + fVar5 +
                                       fVar30 * fVar3 + fVar7 + 0.5) >> 1);
        *(ulonglong *)(lVar17 + 0x20 + lVar18 * 0x28) = CONCAT44(uStack_154,uVar11);
        pfVar12 = (float *)param_1[8];
        fVar27 = *pfVar12;
        fVar28 = pfVar12[1];
        fVar26 = pfVar12[2];
        fVar33 = pfVar12[3];
        fVar2 = pfVar12[4];
        fVar3 = pfVar12[5];
        fVar4 = pfVar12[4];
        fVar5 = pfVar12[5];
        uVar11 = *param_3;
        lVar18 = (longlong)(param_6 + 3);
        lVar21 = (longlong)local_res8;
        lVar17 = *plVar19;
        pfVar12 = (float *)(lVar17 + lVar18 * 0x28);
        *pfVar12 = (float)local_118._0_4_;
        pfVar12[1] = local_12c + local_130;
        pfVar12[2] = fVar34;
        pfVar12[3] = fVar35;
        puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18 * 0x28);
        *puVar1 = 0x3f800000;
        puVar1[1] = 0x3f800000;
        puVar1[2] = (float)((int)ROUND((fVar36 + fVar36) * fVar27 + fVar30 * fVar26 + fVar2 +
                                       fVar30 * fVar26 + fVar4 + 0.5) >> 1);
        puVar1[3] = (float)((int)ROUND((fVar36 + fVar36) * fVar28 + fVar30 * fVar33 + fVar3 +
                                       fVar30 * fVar33 + fVar5 + 0.5) >> 1);
        *(ulonglong *)(lVar17 + 0x20 + lVar18 * 0x28) = CONCAT44(uStack_154,uVar11);
        *(int *)(*plVar20 + lVar21 * 4) = param_6;
        *(int *)(*plVar20 + 4 + lVar21 * 4) = iVar14;
        *(int *)(*plVar20 + 8 + lVar21 * 4) = param_6 + 2;
        *(int *)(*plVar20 + (longlong)(local_res8 + 3) * 4) = iVar14;
        iVar14 = local_res8 + 5;
        *(int *)(*plVar20 + (longlong)(local_res8 + 4) * 4) = param_6 + 3;
        local_res8 = local_res8 + 6;
        *(int *)(*plVar20 + (longlong)iVar14 * 4) = param_6 + 2;
        param_6 = param_6 + 4;
      }
      plVar24 = (longlong *)(ulonglong)(iVar23 + 1U);
      local_128 = local_128 + 0x68;
      fVar29 = fVar29 + (float)(int)*(short *)(lVar25 + 0x18);
      local_14c = local_14c + (float)(int)*(short *)(lVar25 + 0x1a);
    } while ((int)(iVar23 + 1U) < iVar10);
  }
  return;
}



// FUNCTION 1417fc970 FUN_1417fc970 body=350 status=ok
// SIG undefined FUN_1417fc970(void)

void FUN_1417fc970(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  
  plVar4 = (longlong *)*param_1;
  if (*plVar4 != 0) {
    plVar5 = (longlong *)param_1[1];
    piVar6 = (int *)param_1[2];
    iVar1 = (int)plVar5[1];
    puVar7 = (undefined4 *)param_1[5];
    puVar8 = (undefined8 *)param_1[4];
    iVar2 = *(int *)param_1[3];
    iVar3 = *piVar6;
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      FUN_140d979d0(plVar5,iVar1);
    }
    lVar9 = *plVar5;
    local_38 = *puVar8;
    local_30 = puVar8[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    `anonymous_namespace'::FKerningOnlyTextSequenceEntry::FKerningOnlyTextSequenceEntry
              (lVar9 + (longlong)iVar1 * 0x28,*piVar6,iVar2 - iVar3,*plVar4,&local_38,*puVar7);
    *(undefined8 *)*param_1 = 0;
    puVar8 = (undefined8 *)param_1[4];
    local_40 = (longlong *)0x0;
    if (puVar8 != &local_48) {
      *puVar8 = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 1,&local_40);
      plVar4 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar6 = (int *)((longlong)plVar4 + 0xc);
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    *(undefined4 *)param_1[5] = 0x3f800000;
  }
  return;
}



// FUNCTION 1417fcad0 operator() body=429 status=ok
// SIG undefined operator()(void)

void <lambda_e990b5f6f9db8e903fa9bb37b00ab89d>::operator()
               (undefined8 param_1,int param_2,int param_3,short *param_4,longlong *param_5)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iStack_1c;
  
  lVar6 = (longlong)param_3;
  if (*(int *)((longlong)param_5 + 0xc) < (int)param_5[1] + param_3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_5);
  }
  if (0 < param_3) {
    fVar10 = (float)param_2;
    do {
      cVar5 = (char)param_5[4];
      fVar8 = (float)(int)*param_4;
      if (cVar5 == '\0') {
        cVar5 = '\x01';
        *(undefined1 *)(param_5 + 4) = 1;
        *(float *)(param_5 + 2) = fVar8;
        *(float *)((longlong)param_5 + 0x14) = fVar10;
        *(float *)(param_5 + 3) = fVar8;
        *(float *)((longlong)param_5 + 0x1c) = fVar10;
      }
      else {
        fVar9 = fVar8;
        if (*(float *)(param_5 + 2) <= fVar8) {
          fVar9 = *(float *)(param_5 + 2);
        }
        fVar7 = *(float *)(param_5 + 3);
        if (*(float *)(param_5 + 3) <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar10;
        if (*(float *)((longlong)param_5 + 0x14) <= fVar10) {
          fVar8 = *(float *)((longlong)param_5 + 0x14);
        }
        *(float *)(param_5 + 2) = fVar9;
        fVar9 = fVar10;
        if (fVar10 <= *(float *)((longlong)param_5 + 0x1c)) {
          fVar9 = *(float *)((longlong)param_5 + 0x1c);
        }
        *(float *)((longlong)param_5 + 0x14) = fVar8;
        *(float *)(param_5 + 3) = fVar7;
        *(float *)((longlong)param_5 + 0x1c) = fVar9;
        fVar8 = fVar7;
      }
      fVar9 = (float)(int)(*param_4 + -1 + (uint)(ushort)param_4[1]);
      if (cVar5 == '\0') {
        *(undefined1 *)(param_5 + 4) = 1;
        *(float *)(param_5 + 2) = fVar9;
        *(float *)((longlong)param_5 + 0x14) = fVar10;
        *(float *)(param_5 + 3) = fVar9;
        *(float *)((longlong)param_5 + 0x1c) = fVar10;
      }
      else {
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        if (*(float *)(param_5 + 2) <= fVar9) {
          fVar9 = *(float *)(param_5 + 2);
        }
        fVar7 = fVar10;
        if (*(float *)((longlong)param_5 + 0x14) <= fVar10) {
          fVar7 = *(float *)((longlong)param_5 + 0x14);
        }
        *(float *)(param_5 + 3) = fVar8;
        *(float *)(param_5 + 2) = fVar9;
        fVar8 = fVar10;
        if (fVar10 <= *(float *)((longlong)param_5 + 0x1c)) {
          fVar8 = *(float *)((longlong)param_5 + 0x1c);
        }
        *(float *)((longlong)param_5 + 0x14) = fVar7;
        *(float *)((longlong)param_5 + 0x1c) = fVar8;
      }
      sVar2 = *param_4;
      iVar4 = (int)param_5[1];
      uVar3 = param_4[1];
      iStack_1c = CONCAT31(iStack_1c._1_3_,(char)param_4[2]);
      *(int *)(param_5 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar4);
      }
      param_4 = param_4 + 3;
      piVar1 = (int *)(*param_5 + (longlong)iVar4 * 0x10);
      *piVar1 = (int)sVar2;
      piVar1[1] = param_2;
      piVar1[2] = (uint)uVar3;
      piVar1[3] = iStack_1c;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1417fcc80 operator() body=203 status=ok
// SIG undefined operator()(void)

undefined8 <lambda_fb002974a65c0af56e235e3761d5398a>::operator()(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char local_res18 [4];
  int local_res1c;
  
  if ((-1 < param_2) && (param_2 < (int)(*(longlong **)(param_1 + 2))[1])) {
    local_res1c = *param_1;
    pcVar4 = (char *)((longlong)param_2 * 0x20 + **(longlong **)(param_1 + 2));
    cVar1 = *pcVar4;
    pcVar3 = pcVar4;
    if (cVar1 == '\x02') {
      cVar2 = '\x02';
    }
    else {
      cVar2 = cVar1;
      if (local_res1c <= *(int *)(pcVar4 + 4)) {
        if ((local_res1c < *(int *)(pcVar4 + 4)) || (cVar1 != '\x01')) {
          pcVar3 = local_res18;
        }
        cVar2 = '\x01';
      }
    }
    if ((cVar2 == cVar1) && ((cVar2 == '\x02' || (*(int *)(pcVar3 + 4) == *(int *)(pcVar4 + 4))))) {
      cVar1 = pcVar4[8];
      pcVar3 = pcVar4 + 8;
      if (cVar1 == '\x02') {
        cVar2 = '\x02';
      }
      else {
        cVar2 = cVar1;
        if (*(int *)(pcVar4 + 0xc) <= local_res1c) {
          if ((*(int *)(pcVar4 + 0xc) < local_res1c) || (cVar1 != '\x01')) {
            pcVar3 = local_res18;
          }
          cVar2 = '\x01';
        }
      }
      if ((cVar2 == cVar1) &&
         ((cVar2 == '\x02' || (*(int *)(pcVar3 + 4) == *(int *)(pcVar4 + 0xc))))) {
        return *(undefined8 *)(pcVar4 + 0x10);
      }
    }
  }
  return 0;
}



// FUNCTION 1417fcd50 operator() body=179 status=ok
// SIG undefined operator()(void)

void TDefaultDelete<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>::operator()
               (undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x1c0);
    iVar3 = *(int *)(param_2 + 0x1d0);
    lVar2 = lVar1;
    if (lVar1 == 0) {
      lVar2 = param_2;
    }
    if (iVar3 != 0) {
      do {
        if (*(char *)(lVar2 + 0xd8) != '\0') {
          *(undefined1 *)(lVar2 + 0xd8) = 0;
          if (*(longlong *)(lVar2 + 200) != 0) {
            FMemory::Free();
          }
          if (*(char *)(lVar2 + 0xc0) != '\0') {
            *(undefined1 *)(lVar2 + 0xc0) = 0;
          }
        }
        FSlateElementBatch::FBatchKey::~FBatchKey(lVar2);
        lVar2 = lVar2 + 0xe0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      lVar1 = *(longlong *)(param_2 + 0x1c0);
    }
    if (lVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(param_2,0x1e0);
  }
  return;
}



// FUNCTION 1417fce10 operator() body=189 status=ok
// SIG undefined operator()(void)

void TDefaultDelete<FCompositeFontCache>::operator()(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FInternationalization::Get();
    FUN_140483870(lVar1 + 8,param_2);
    *(undefined4 *)(param_2 + 0xa0) = 0;
    if (*(longlong *)(param_2 + 0x98) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_2 + 0x58,0);
    if (*(longlong *)(param_2 + 0x78) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_2 + 8,0);
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_2 + 8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(param_2,0xa8);
  }
  return;
}



// FUNCTION 1417fced0 FUN_1417fced0 body=147 status=ok
// SIG undefined FUN_1417fced0(void)

void FUN_1417fced0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    hb_font_funcs_destroy(*(undefined8 *)(param_2 + 0x60));
    *(undefined8 *)(param_2 + 0x60) = 0;
    plVar4 = *(longlong **)(param_2 + 0x40);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    puVar5 = *(undefined8 **)(param_2 + 0x30);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    FMemory::operator_delete(param_2,0x68);
  }
  return;
}



// FUNCTION 1417fcf70 FUN_1417fcf70 body=450 status=ok
// SIG undefined FUN_1417fcf70(void)

longlong * FUN_1417fcf70(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  
  FUN_1418066b0(*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
                *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
                *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  iVar1 = *(int *)(param_3 + 0x110);
  plVar8 = (longlong *)*param_1;
  if (0 < (longlong)iVar1) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x108) + lVar7 * 8);
      if ((char)plVar8[0x45] == '\0') {
        lVar4 = plVar8[0x42];
        if ((lVar4 != 0) && (*(longlong *)(lVar3 + 8) != lVar4)) {
          *(longlong *)(lVar3 + 8) = lVar4;
          FUN_141802340(lVar3);
        }
        iVar2 = (int)plVar8[0x44];
        *(int *)(plVar8 + 0x44) = iVar2 + 1;
        if (*(int *)((longlong)plVar8 + 0x224) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8 + 0x43,iVar2);
        }
        *(longlong *)(plVar8[0x43] + (longlong)iVar2 * 8) = lVar3;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    plVar8 = (longlong *)*param_1;
  }
  if (-1 < (char)plVar8[3]) {
    cVar5 = (**(code **)(*plVar8 + 0x1e8))(plVar8);
    if (cVar5 == '\0') {
      bVar6 = 0;
      goto LAB_1417fd0f9;
    }
  }
  bVar6 = 1;
LAB_1417fd0f9:
  *(byte *)((longlong)plVar8 + 0x19) = *(byte *)((longlong)plVar8 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x19) = *(byte *)((longlong)plVar8 + 0x19) | bVar6;
  *param_2 = *param_1;
  lVar7 = param_1[1];
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1417fd140 FUN_1417fd140 body=503 status=ok
// SIG undefined FUN_1417fd140(void)

longlong * FUN_1417fd140(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  
  FUN_1418066b0(*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
                *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
                *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  lVar4 = *param_1;
  puVar5 = *(undefined8 **)param_1[2];
  *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) & 0xfd;
  *(undefined8 *)(lVar4 + 0x230) = *puVar5;
  plVar6 = (longlong *)puVar5[1];
  plVar11 = *(longlong **)(lVar4 + 0x238);
  if (plVar6 != plVar11) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar11 = *(longlong **)(lVar4 + 0x238);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    *(longlong **)(lVar4 + 0x238) = plVar6;
  }
  iVar2 = *(int *)(param_3 + 0x110);
  if (0 < (longlong)iVar2) {
    lVar12 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x108) + lVar12 * 8);
      if (*(char *)(lVar4 + 0x228) == '\0') {
        lVar8 = *(longlong *)(lVar4 + 0x210);
        if ((lVar8 != 0) && (*(longlong *)(lVar7 + 8) != lVar8)) {
          *(longlong *)(lVar7 + 8) = lVar8;
          FUN_141802340(lVar7);
        }
        iVar3 = *(int *)(lVar4 + 0x220);
        *(int *)(lVar4 + 0x220) = iVar3 + 1;
        if (*(int *)(lVar4 + 0x224) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x218,iVar3);
        }
        *(longlong *)(*(longlong *)(lVar4 + 0x218) + (longlong)iVar3 * 8) = lVar7;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar2);
  }
  plVar6 = (longlong *)*param_1;
  if (((char)plVar6[3] < '\0') || (cVar9 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar9 != '\0')) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  *(byte *)((longlong)plVar6 + 0x19) = *(byte *)((longlong)plVar6 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar6 + 0x19) = *(byte *)((longlong)plVar6 + 0x19) | bVar10;
  *param_2 = *param_1;
  lVar4 = param_1[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1417fd340 FUN_1417fd340 body=255 status=ok
// SIG undefined FUN_1417fd340(void)

longlong * FUN_1417fd340(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  FUN_1418066b0(*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
                *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
                *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  SHorizontalBox::Construct(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1417fd404;
    }
  }
  bVar4 = 1;
LAB_1417fd404:
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



// FUNCTION 1417fd440 FUN_1417fd440 body=255 status=ok
// SIG undefined FUN_1417fd440(void)

longlong * FUN_1417fd440(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  FUN_1418066b0(*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
                *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
                *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_141806bd0(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1417fd504;
    }
  }
  bVar4 = 1;
LAB_1417fd504:
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



// FUNCTION 1417fd560 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FFreeTypeFace>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1417fd590 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<float>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xac0);
  }
  return param_1;
}



// FUNCTION 1417fd5c0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SWrapBox>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 1417fd5f0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<STileView<TSharedPtr<SWidget,0>_>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x600);
  }
  return param_1;
}



// FUNCTION 1417fd620 FUN_1417fd620 body=66 status=ok
// SIG undefined FUN_1417fd620(void)

undefined8 * FUN_1417fd620(undefined8 *param_1,ulonglong param_2)

{
  FUN_1417f5640(param_1 + 2);
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1417fd670 FUN_1417fd670 body=93 status=ok
// SIG undefined FUN_1417fd670(void)

undefined8 * FUN_1417fd670(undefined8 *param_1,uint param_2)

{
  FUN_14182b060(param_1 + 2,0);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1417fd6d0 FUN_1417fd6d0 body=93 status=ok
// SIG undefined FUN_1417fd6d0(void)

undefined8 * FUN_1417fd6d0(undefined8 *param_1,uint param_2)

{
  FUN_14182b150(param_1 + 2,0);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1417fd730 FUN_1417fd730 body=202 status=ok
// SIG undefined FUN_1417fd730(void)

longlong FUN_1417fd730(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x98);
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
  iVar5 = *(int *)(param_1 + 0x58);
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (iVar5 != 0) {
    do {
      FUN_1417f7000(lVar4);
      lVar4 = lVar4 + 0x78;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar4 = *(longlong *)(param_1 + 0x50);
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1417fd800 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FCheckBoxStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FCheckBoxStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x580);
  }
  return param_1;
}



// FUNCTION 1417fd840 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FComboBoxStyle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f4c0;
  FComboButtonStyle::~FComboButtonStyle(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d8);
  }
  return param_1;
}



// FUNCTION 1417fd890 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FComboButtonStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FComboButtonStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 1417fd8d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FDockTabStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FDockTabStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x700);
  }
  return param_1;
}



// FUNCTION 1417fd910 FUN_1417fd910 body=52 status=ok
// SIG undefined FUN_1417fd910(void)

undefined8 FUN_1417fd910(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f65a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1417fd950 `scalar_deleting_destructor' body=59 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FEditableTextBoxStyle::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  FUN_1417f6640(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 1417fd990 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FEditableTextStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f67a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 1417fd9d0 `scalar_deleting_destructor' body=88 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FExpandableAreaStyle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f550;
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1417fda30 `scalar_deleting_destructor' body=140 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FExternalDragOperation::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x50);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_1417f65a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1417fdac0 FUN_1417fdac0 body=52 status=ok
// SIG undefined FUN_1417fdac0(void)

undefined8 FUN_1417fdac0(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f65a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1417fdb00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FHeaderRowStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FHeaderRowStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb70);
  }
  return param_1;
}



// FUNCTION 1417fdb40 `scalar_deleting_destructor' body=154 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FHittestGrid::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  TArray<FSlateClippingState,FDefaultAllocator>::~TArray<FSlateClippingState,FDefaultAllocator>
            (param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_1417f4f90(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1417fdbe0 `scalar_deleting_destructor' body=88 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FInlineEditableTextBlockStyle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f520;
  FUN_140691580(param_1 + 0xff);
  FUN_1417f6640(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9d8);
  }
  return param_1;
}



// FUNCTION 1417fdc40 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FInlineTextImageStyle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f5b0;
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1417fdc90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWmfMediaTracks::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f6ae0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 1417fdcd0 `scalar_deleting_destructor' body=184 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FOverlayPopupLayer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  FUN_1417f6d20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1417fdd90 FUN_1417fdd90 body=52 status=ok
// SIG undefined FUN_1417fdd90(void)

undefined8 FUN_1417fdd90(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f6d20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1417fddd0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FProgressBarStyle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f538;
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1417fde40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FScrollBarStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FScrollBarStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d0);
  }
  return param_1;
}



// FUNCTION 1417fde80 FUN_1417fde80 body=88 status=ok
// SIG undefined FUN_1417fde80(void)

undefined8 * FUN_1417fde80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d4f658;
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1417fdee0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FScrollBoxStyle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f640;
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 1417fdf50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FD3D12Adapter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f6f50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa80);
  }
  return param_1;
}



// FUNCTION 1417fdf90 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSimpleSlot::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 10);
  FSlotBase::~FSlotBase(param_1 + 2);
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1417fdfe0 FUN_1417fdfe0 body=162 status=ok
// SIG undefined FUN_1417fdfe0(void)

undefined8 * FUN_1417fdfe0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d4ea48;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 6);
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
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1417fe090 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateControlledConstruction::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4ebb8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1417fe0d0 FUN_1417fe0d0 body=52 status=ok
// SIG undefined FUN_1417fe0d0(void)

undefined8 FUN_1417fe0d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f7280();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x408);
  }
  return param_1;
}



// FUNCTION 1417fe110 FUN_1417fe110 body=114 status=ok
// SIG undefined FUN_1417fe110(void)

undefined8 * FUN_1417fe110(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144d4e818;
  FUN_1418554e0();
  plVar3 = (longlong *)param_1[0x12];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FSlateBrush::~FSlateBrush(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1417fe190 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSlateFontAtlas::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4e868;
  param_1[1] = &PTR__scalar_deleting_destructor__144d4e838;
  FSlateTextureAtlas::Empty(param_1 + 1);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144d4e848;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1417fe200 FUN_1417fe200 body=52 status=ok
// SIG undefined FUN_1417fe200(void)

undefined8 FUN_1417fe200(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f75b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 1417fe240 `scalar_deleting_destructor' body=194 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSlateFontMeasure::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4fbf8;
  plVar4 = (longlong *)param_1[0xc];
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
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1417fe310 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FSlateObjectReferenceCollector::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FReferenceCollector::~FReferenceCollector();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1417fe350 FUN_1417fe350 body=115 status=ok
// SIG undefined FUN_1417fe350(void)

undefined8 * FUN_1417fe350(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_144d4ea28;
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,param_1);
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1417fe3d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSlateStyleSet::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FSlateStyleSet();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a8);
  }
  return param_1;
}



// FUNCTION 1417fe410 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSlateTextureAtlas::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4e838;
  Empty();
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1417fe460 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSliderStyle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d4f580;
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 1417fe4d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSlotBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FSlotBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1417fe510 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSpinBoxStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FSpinBoxStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e8);
  }
  return param_1;
}



// FUNCTION 1417fe550 FUN_1417fe550 body=88 status=ok
// SIG undefined FUN_1417fe550(void)

undefined8 * FUN_1417fe550(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d4f5e0;
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1417fe5b0 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FStandaloneCompositeFont::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
            (param_1 + 7);
  TArray<FTypefaceEntry,FDefaultAllocator>::~TArray<FTypefaceEntry,FDefaultAllocator>(param_1 + 4);
  TArray<FTypefaceEntry,FDefaultAllocator>::~TArray<FTypefaceEntry,FDefaultAllocator>(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1417fe630 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FTableColumnHeaderStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FTableColumnHeaderStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d0);
  }
  return param_1;
}



// FUNCTION 1417fe670 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FVolumeControlStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FVolumeControlStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e0);
  }
  return param_1;
}



// FUNCTION 1417fe6b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWindowStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f83e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xfd0);
  }
  return param_1;
}



// FUNCTION 1417fe6f0 FUN_1417fe6f0 body=43 status=ok
// SIG undefined FUN_1417fe6f0(void)

undefined8 * FUN_1417fe6f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d4e848;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1417fe720 FUN_1417fe720 body=43 status=ok
// SIG undefined FUN_1417fe720(void)

undefined8 * FUN_1417fe720(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d4f688;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1417fe750 `scalar_deleting_destructor' body=141 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SScrollPanel::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  FUN_14182b150(param_1 + 0x218,0);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 1417fe7e0 FUN_1417fe7e0 body=78 status=ok
// SIG undefined FUN_1417fe7e0(void)

undefined8 FUN_1417fe7e0(undefined8 param_1,ulonglong param_2)

{
  FUN_140458b70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 1417fe830 FUN_1417fe830 body=141 status=ok
// SIG undefined FUN_1417fe830(void)

longlong FUN_1417fe830(longlong param_1,uint param_2)

{
  FUN_14182b060(param_1 + 0x218,0);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 1417fe8c0 FUN_1417fe8c0 body=150 status=ok
// SIG undefined FUN_1417fe8c0(void)

longlong FUN_1417fe8c0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_1417f5640(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 1417fe960 FUN_1417fe960 body=78 status=ok
// SIG undefined FUN_1417fe960(void)

undefined8 FUN_1417fe960(undefined8 param_1,ulonglong param_2)

{
  FUN_1417f87d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x5f0);
  }
  return param_1;
}



// FUNCTION 1417fe9b0 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UFontBulkData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1417fea00 FUN_1417fea00 body=18 status=ok
// SIG undefined FUN_1417fea00(void)

undefined4 FUN_1417fea00(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x30c) - 2;
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xfffffffd) != 0);
}



// FUNCTION 1417fea20 FUN_1417fea20 body=7 status=ok
// SIG undefined FUN_1417fea20(void)

undefined4 FUN_1417fea20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x354);
}



// FUNCTION 1417fea30 Add body=122 status=ok
// SIG undefined Add(void)

int TPanelChildren<SOverlay::FOverlaySlot>::Add(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return -1;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 != 0) && (*(longlong *)(param_2 + 8) != lVar2)) {
    *(longlong *)(param_2 + 8) = lVar2;
    FUN_141802340(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = param_2;
  return iVar1;
}



// FUNCTION 1417feab0 Add body=426 status=ok
// SIG undefined Add(void)

void FLRUStringCache::Add(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res20;
  
  TSet<FLRUStringCache::CacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (plVar2 = (longlong *)((longlong)local_res8[0] * 0x10 + *param_1), plVar2 == (longlong *)0x0))
  {
    lVar3 = 0;
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == (int)param_1[0xc]) {
      plVar2 = (longlong *)param_1[0xb];
      TSet<FLRUStringCache::CacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
      ::Remove(param_1,plVar2);
      param_1[0xb] = *(longlong *)(param_1[0xb] + 0x20);
      if (plVar2[4] != 0) {
        *(longlong *)(plVar2[4] + 0x18) = plVar2[3];
      }
      if (plVar2[3] != 0) {
        *(longlong *)(plVar2[3] + 0x20) = plVar2[4];
      }
      plVar2[4] = 0;
      plVar2[3] = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar2,0x28);
    }
    lVar1 = operator_new(0x28);
    if (lVar1 != 0) {
      FString::FString(lVar1,param_2);
      *(undefined8 *)(lVar1 + 0x10) = *param_3;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      lVar3 = lVar1;
    }
    lVar1 = param_1[10];
    *(longlong *)(lVar3 + 0x18) = lVar1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x20) = lVar3;
    }
    param_1[10] = lVar3;
    if (param_1[0xb] == 0) {
      param_1[0xb] = lVar3;
    }
    local_res20 = lVar3;
    FUN_1417dddc0(param_1,local_res8,&local_res20,0);
  }
  else {
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 0x10) = *param_3;
    if ((lVar3 == param_1[0xb]) && (lVar1 = *(longlong *)(param_1[0xb] + 0x20), lVar1 != 0)) {
      param_1[0xb] = lVar1;
    }
    if (lVar3 != param_1[10]) {
      if (*(longlong *)(lVar3 + 0x20) != 0) {
        *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      }
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      lVar1 = param_1[10];
      *(longlong *)(lVar3 + 0x18) = lVar1;
      if (lVar1 != 0) {
        *(longlong *)(lVar1 + 0x20) = lVar3;
      }
      param_1[10] = lVar3;
      return;
    }
  }
  return;
}



// FUNCTION 1417fec60 FUN_1417fec60 body=1106 status=ok
// SIG undefined FUN_1417fec60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417fec60(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_168 [32];
  uint local_148 [2];
  int local_140 [2];
  uint *local_138 [2];
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined1 local_90 [40];
  undefined1 local_68;
  longlong local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  sVar4 = *(short *)(param_2 + 0x44);
  plVar10 = (longlong *)0x0;
  lVar5 = *(longlong *)(param_1 + 8);
  uVar11 = (uint)sVar4;
  if ((uint)(int)sVar4 < 0x100) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      lVar6 = lVar5;
    }
    if ((*(uint *)(lVar6 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((int)sVar4 & 0x1fU) & 1) != 0) {
      plVar12 = (longlong *)(lVar5 + 0x20 + (ulonglong)uVar11 * 8);
      goto LAB_1417fed65;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x828) != *(int *)(lVar5 + 0x854)) {
      lVar6 = *(longlong *)(lVar5 + 0x860);
      if (*(longlong *)(lVar5 + 0x860) == 0) {
        lVar6 = lVar5 + 0x858;
      }
      iVar13 = *(int *)(lVar6 + ((longlong)*(int *)(lVar5 + 0x868) - 1U & (longlong)sVar4) * 4);
      if (iVar13 != -1) {
        do {
          plVar8 = (longlong *)(*(longlong *)(lVar5 + 0x820) + (longlong)iVar13 * 0x18);
          if (*(uint *)(*(longlong *)(lVar5 + 0x820) + (longlong)iVar13 * 0x18) == (int)sVar4) {
            if (iVar13 != -1) goto LAB_1417fed53;
            break;
          }
          iVar13 = (int)plVar8[2];
        } while (iVar13 != -1);
      }
    }
    plVar8 = plVar10;
LAB_1417fed53:
    plVar12 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar12 = plVar10;
    }
LAB_1417fed65:
    if (plVar12 != (longlong *)0x0) goto LAB_1417fee1a;
  }
  local_148[0] = uVar11;
  if (uVar11 < 0x100) {
    uVar7 = *(uint *)(lVar5 + 0x870);
    if (uVar11 <= *(uint *)(lVar5 + 0x870)) {
      uVar7 = uVar11;
    }
    *(uint *)(lVar5 + 0x870) = uVar7;
    uVar7 = *(uint *)(lVar5 + 0x874);
    if (*(uint *)(lVar5 + 0x874) <= uVar11) {
      uVar7 = uVar11;
    }
    *(uint *)(lVar5 + 0x874) = uVar7;
    lVar6 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      lVar6 = lVar5;
    }
    puVar2 = (uint *)(lVar6 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)sVar4 & 0x1f);
    plVar12 = (longlong *)(lVar5 + ((ulonglong)uVar11 + 4) * 8);
  }
  else {
    local_138[0] = local_148;
    FUN_1417de2e0(lVar5 + 0x820,local_140,local_138,0);
    plVar12 = (longlong *)(*(longlong *)(lVar5 + 0x820) + ((longlong)local_140[0] * 3 + 1) * 8);
  }
LAB_1417fee1a:
  lVar5 = *(longlong *)(param_2 + 0x50);
  plVar8 = *(longlong **)(lVar5 + 0x10);
  plVar9 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar13 = (int)plVar8[1];
    bVar14 = iVar13 == 0;
    if (bVar14) {
      *(int *)(plVar8 + 1) = 0;
      iVar13 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar14) {
      LOCK();
      bVar14 = iVar13 == (int)plVar8[1];
      if (bVar14) {
        *(int *)(plVar8 + 1) = iVar13 + 1;
      }
      UNLOCK();
      if (bVar14) {
        plVar9 = plVar8;
        plVar10 = (longlong *)0x0;
        if (plVar8 != (longlong *)0x0) {
          plVar10 = *(longlong **)(lVar5 + 8);
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar8 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar8 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plVar8;
          if ((int)lVar5 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar13 = (int)plVar8[1];
      bVar14 = iVar13 == 0;
      if (bVar14) {
        *(int *)(plVar8 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
    }
  }
  sVar4 = *(short *)(param_2 + 0x46);
  local_108 = *(undefined4 *)(param_2 + 0x58);
  local_104 = *(undefined4 *)(param_2 + 0x5c);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_128 = 0;
  uStack_120 = 0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 0x10000;
  iVar13 = (int)sVar4;
  local_c0 = 0;
  local_b0 = 0xffffffff;
  local_118 = plVar10;
  local_110 = plVar9;
  local_c4 = iVar13;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0xffffffffffffffff;
  local_50 = '\0';
  if (((-1 < iVar13) && ((int)sVar4 < (int)plVar8[1])) &&
     ((undefined1 *)((longlong)sVar4 * 0x40 + *plVar8) != local_90)) {
    FSlateClippingState::FSlateClippingState(local_90);
    local_50 = '\x01';
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar5 = *plVar12;
  iVar13 = *(int *)(lVar5 + 0x1d0);
  *(int *)(lVar5 + 0x1d0) = iVar13 + 1;
  if (*(int *)(lVar5 + 0x1d4) < iVar13 + 1) {
    TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(lVar5,iVar13);
  }
  lVar6 = *(longlong *)(lVar5 + 0x1c0);
  if (*(longlong *)(lVar5 + 0x1c0) == 0) {
    lVar6 = lVar5;
  }
  FSlateElementBatch::FSlateElementBatch((longlong)iVar13 * 0xe0 + lVar6,&local_128);
  if (local_50 != '\0') {
    local_50 = '\0';
    if (local_60 != 0) {
      FMemory::Free();
    }
    local_68 = 0;
  }
  FSlateElementBatch::FBatchKey::~FBatchKey(&local_128);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 1417ff0c0 FUN_1417ff0c0 body=453 status=ok
// SIG undefined FUN_1417ff0c0(void)

void FUN_1417ff0c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar2 = *param_2;
  plVar3 = *(longlong **)(lVar2 + 0x570);
  plVar8 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar8 = plVar3;
        if ((plVar3 != (longlong *)0x0) && (lVar2 = *(longlong *)(lVar2 + 0x568), lVar2 != 0)) {
          FUN_141855df0(lVar2,param_2);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
  plVar3 = (longlong *)puVar6[1];
  uVar4 = *puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + 0x568) = uVar4;
  plVar7 = *(longlong **)(lVar2 + 0x570);
  if (plVar3 != plVar7) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar2 + 0x570);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    *(longlong **)(lVar2 + 0x570) = plVar3;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  *(longlong *)(*param_2 + 0x470) = *(longlong *)(param_1 + 0x468) + 0xf48;
  (**(code **)(*DAT_1469eaf38 + 0x18))(DAT_1469eaf38,param_1 + 0x578,param_2);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1417ff290 AddCurve body=168 status=ok
// SIG undefined AddCurve(void)

longlong *
FCurveSequence::AddCurve
          (longlong param_1,longlong *param_2,float param_3,float param_4,undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  undefined4 local_10;
  
  local_10 = CONCAT31(local_10._1_3_,param_5);
  fVar3 = param_3 + param_4;
  if (param_3 + param_4 <= *(float *)(param_1 + 0x50)) {
    fVar3 = *(float *)(param_1 + 0x50);
  }
  *(float *)(param_1 + 0x50) = fVar3;
  *(double *)(param_1 + 0x40) = (double)fVar3;
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  *(ulonglong *)(lVar2 + (longlong)iVar1 * 0xc) = CONCAT44(param_3,param_4);
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = local_10;
  iVar1 = *(int *)(param_1 + 0x38);
  *param_2 = param_1;
  *(int *)(param_2 + 1) = iVar1 + -1;
  return param_2;
}



// FUNCTION 1417ff340 FUN_1417ff340 body=893 status=ok
// SIG undefined FUN_1417ff340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417ff340(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_168 [32];
  uint local_148 [2];
  int local_140 [2];
  uint *local_138 [2];
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined1 local_90 [40];
  undefined1 local_68;
  longlong local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar5 = *(longlong *)(param_1 + 8);
  uVar4 = *(uint *)(param_2 + 0x114);
  if (*(longlong *)(param_2 + 0x60) == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x68) == 0) {
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_2 + 0x68) + 8);
  LOCK();
  iVar7 = *piVar1;
  if (iVar7 == 0) {
    *piVar1 = 0;
    iVar7 = 0;
  }
  UNLOCK();
  if (iVar7 < 1) {
    return;
  }
  if (uVar4 < 0x100) {
    lVar8 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      lVar8 = lVar5;
    }
    if ((*(uint *)(lVar8 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      plVar11 = (longlong *)(lVar5 + ((ulonglong)uVar4 + 4) * 8);
      goto LAB_1417ff475;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x828) != *(int *)(lVar5 + 0x854)) {
      lVar8 = *(longlong *)(lVar5 + 0x860);
      if (*(longlong *)(lVar5 + 0x860) == 0) {
        lVar8 = lVar5 + 0x858;
      }
      iVar7 = *(int *)(lVar8 + ((longlong)*(int *)(lVar5 + 0x868) - 1U & (longlong)(int)uVar4) * 4);
      if (iVar7 != -1) {
        do {
          plVar10 = (longlong *)(*(longlong *)(lVar5 + 0x820) + (longlong)iVar7 * 0x18);
          if (*(uint *)(*(longlong *)(lVar5 + 0x820) + (longlong)iVar7 * 0x18) == uVar4) {
            if (iVar7 != -1) goto LAB_1417ff463;
            break;
          }
          iVar7 = (int)plVar10[2];
        } while (iVar7 != -1);
      }
    }
    plVar10 = (longlong *)0x0;
LAB_1417ff463:
    plVar11 = plVar10 + 1;
    if (plVar10 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
LAB_1417ff475:
    if (plVar11 != (longlong *)0x0) goto LAB_1417ff52a;
  }
  local_148[0] = uVar4;
  if (uVar4 < 0x100) {
    uVar9 = *(uint *)(lVar5 + 0x870);
    if (uVar4 <= *(uint *)(lVar5 + 0x870)) {
      uVar9 = uVar4;
    }
    *(uint *)(lVar5 + 0x870) = uVar9;
    uVar9 = *(uint *)(lVar5 + 0x874);
    if (*(uint *)(lVar5 + 0x874) <= uVar4) {
      uVar9 = uVar4;
    }
    *(uint *)(lVar5 + 0x874) = uVar9;
    lVar8 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      lVar8 = lVar5;
    }
    puVar2 = (uint *)(lVar8 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
    plVar11 = (longlong *)(lVar5 + ((ulonglong)uVar4 + 4) * 8);
  }
  else {
    local_138[0] = local_148;
    FUN_1417de2e0(lVar5 + 0x820,local_140,local_138,0);
    plVar11 = (longlong *)(*(longlong *)(lVar5 + 0x820) + ((longlong)local_140[0] * 3 + 1) * 8);
  }
LAB_1417ff52a:
  iVar7 = *(int *)(param_2 + 0x120);
  local_128 = *(undefined8 *)(param_2 + 0x60);
  plVar10 = *(longlong **)(param_2 + 0x68);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
  }
  local_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_b0 = 0xffffffff;
  local_f8 = 0;
  local_c8 = 0x10000;
  local_c0 = 0;
  local_120 = plVar10;
  local_c4 = iVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10,1);
    }
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0xffffffffffffffff;
  local_50 = '\0';
  if (((-1 < iVar7) && (iVar7 < (int)plVar6[1])) &&
     ((undefined1 *)((longlong)iVar7 * 0x40 + *plVar6) != local_90)) {
    FSlateClippingState::FSlateClippingState(local_90);
    local_50 = '\x01';
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10,1);
    }
  }
  lVar5 = *plVar11;
  iVar7 = *(int *)(lVar5 + 0x1d0);
  *(int *)(lVar5 + 0x1d0) = iVar7 + 1;
  if (*(int *)(lVar5 + 0x1d4) < iVar7 + 1) {
    TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(lVar5,iVar7);
  }
  lVar8 = *(longlong *)(lVar5 + 0x1c0);
  if (*(longlong *)(lVar5 + 0x1c0) == 0) {
    lVar8 = lVar5;
  }
  FSlateElementBatch::FSlateElementBatch((longlong)iVar7 * 0xe0 + lVar8,&local_128);
  if (local_50 != '\0') {
    local_50 = '\0';
    if (local_60 != 0) {
      FMemory::Free();
    }
    local_68 = 0;
  }
  FSlateElementBatch::FBatchKey::~FBatchKey(&local_128);
  return;
}



// FUNCTION 1417ff6c0 FUN_1417ff6c0 body=926 status=ok
// SIG undefined FUN_1417ff6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417ff6c0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_158 [32];
  uint local_138 [2];
  int local_130 [2];
  uint *local_128 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined1 local_80 [40];
  undefined1 local_58;
  longlong local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar8 = param_1[1];
  uVar2 = *(uint *)(param_2 + 0x114);
  if (*(int *)(param_2 + 0x78) < 1) {
    return;
  }
  plVar7 = (longlong *)0x0;
  if (uVar2 < 0x100) {
    lVar4 = *(longlong *)(lVar8 + 0x10);
    if (*(longlong *)(lVar8 + 0x10) == 0) {
      lVar4 = lVar8;
    }
    if ((*(uint *)(lVar4 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      plVar9 = (longlong *)(lVar8 + ((ulonglong)uVar2 + 4) * 8);
      goto LAB_1417ff7d5;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x828) != *(int *)(lVar8 + 0x854)) {
      lVar4 = *(longlong *)(lVar8 + 0x860);
      if (*(longlong *)(lVar8 + 0x860) == 0) {
        lVar4 = lVar8 + 0x858;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(lVar8 + 0x868) - 1U & (longlong)(int)uVar2) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)(*(longlong *)(lVar8 + 0x820) + (longlong)iVar3 * 0x18);
          if (*(uint *)(*(longlong *)(lVar8 + 0x820) + (longlong)iVar3 * 0x18) == uVar2) {
            if (iVar3 != -1) goto LAB_1417ff7c3;
            break;
          }
          iVar3 = (int)plVar6[2];
        } while (iVar3 != -1);
      }
    }
    plVar6 = plVar7;
LAB_1417ff7c3:
    plVar9 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
LAB_1417ff7d5:
    if (plVar9 != (longlong *)0x0) goto LAB_1417ff88a;
  }
  local_138[0] = uVar2;
  if (uVar2 < 0x100) {
    uVar5 = *(uint *)(lVar8 + 0x870);
    if (uVar2 <= *(uint *)(lVar8 + 0x870)) {
      uVar5 = uVar2;
    }
    *(uint *)(lVar8 + 0x870) = uVar5;
    uVar5 = *(uint *)(lVar8 + 0x874);
    if (*(uint *)(lVar8 + 0x874) <= uVar2) {
      uVar5 = uVar2;
    }
    *(uint *)(lVar8 + 0x874) = uVar5;
    lVar4 = *(longlong *)(lVar8 + 0x10);
    if (*(longlong *)(lVar8 + 0x10) == 0) {
      lVar4 = lVar8;
    }
    puVar1 = (uint *)(lVar4 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    plVar9 = (longlong *)(lVar8 + ((ulonglong)uVar2 + 4) * 8);
  }
  else {
    local_128[0] = local_138;
    FUN_1417de2e0(lVar8 + 0x820,local_130,local_128,0);
    plVar9 = (longlong *)(*(longlong *)(lVar8 + 0x820) + ((longlong)local_130[0] * 3 + 1) * 8);
  }
LAB_1417ff88a:
  if (*(longlong *)(param_2 + 0x30) != 0) {
    plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x10);
  }
  local_b8 = *(undefined1 *)(param_2 + 0x5d);
  local_b4 = *(int *)(param_2 + 0x120);
  local_b5 = *(undefined1 *)(param_2 + 0x118);
  local_b0 = *(undefined4 *)(param_2 + 0x9c);
  local_ac = *(undefined4 *)(param_2 + 0x98);
  local_a8 = *(undefined8 *)(param_2 + 0x90);
  local_a0 = *(undefined4 *)(param_2 + 0x124);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b7 = 0x104;
  local_90 = 0;
  local_8c = 0xffffffffffffffff;
  local_40 = '\0';
  local_98 = plVar7;
  if (((-1 < local_b4) && (local_b4 < (int)((longlong *)param_1[2])[1])) &&
     ((undefined1 *)((longlong)local_b4 * 0x40 + *(longlong *)param_1[2]) != local_80)) {
    FSlateClippingState::FSlateClippingState(local_80);
    local_40 = '\x01';
  }
  lVar8 = *plVar9;
  iVar3 = *(int *)(lVar8 + 0x1d0);
  *(int *)(lVar8 + 0x1d0) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x1d4) < iVar3 + 1) {
    TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(lVar8,iVar3);
  }
  lVar4 = *(longlong *)(lVar8 + 0x1c0);
  if (*(longlong *)(lVar8 + 0x1c0) == 0) {
    lVar4 = lVar8;
  }
  FSlateElementBatch::FSlateElementBatch(lVar4 + (longlong)iVar3 * 0xe0,&local_118);
  lVar8 = *(longlong *)(*plVar9 + 0x1c0);
  if (lVar8 == 0) {
    lVar8 = *plVar9;
  }
  lVar8 = lVar8 + (longlong)iVar3 * 0xe0;
  FSlateBatchData::AssignVertexArrayToBatch(*param_1,lVar8);
  FSlateBatchData::AssignIndexArrayToBatch(*param_1,lVar8);
  iVar3 = *(int *)(lVar8 + 0x90);
  lVar4 = *(longlong *)(*param_1 + 0x40);
  TArray<FSlateVertex,FDefaultAllocator>::operator=
            ((longlong)*(int *)(lVar8 + 0x8c) * 0x10 + *(longlong *)(*param_1 + 0x30),param_2 + 0x70
            );
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
            ((longlong)iVar3 * 0x10 + lVar4,param_2 + 0x80);
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != 0) {
      FMemory::Free();
    }
    local_58 = 0;
  }
  FSlateElementBatch::FBatchKey::~FBatchKey(&local_118);
  return;
}



// FUNCTION 1417ffa60 AddDefaulted body=125 status=ok
// SIG undefined AddDefaulted(void)

int TArray<FCompositeSubFont,FDefaultAllocator>::AddDefaulted(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1);
  if (param_2 != 0) {
    lVar2 = (longlong)puVar3 + 0x24;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 7;
      *(undefined8 *)(lVar2 + -0x1c) = 0;
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined4 *)(lVar2 + -0x14) = 0x3f800000;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined8 *)(lVar2 + 4) = 0;
      *(undefined8 *)(lVar2 + 0xc) = 0;
      lVar2 = lVar2 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 1417ffae0 AddDefaulted body=147 status=ok
// SIG undefined AddDefaulted(void)

int TArray<FShapedGlyphEntry,FDefaultAllocator>::AddDefaulted(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x68 + *param_1);
  if (param_2 != 0) {
    puVar2 = puVar3 + 7;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 0xd;
      puVar2[-6] = 0;
      puVar2[-5] = 0;
      puVar2[-4] = 0;
      *(undefined4 *)(puVar2 + -3) = 0;
      *(undefined1 *)((longlong)puVar2 + -0x14) = 0;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2 = puVar2 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 1417ffb80 FUN_1417ffb80 body=323 status=ok
// SIG undefined FUN_1417ffb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1417ffb80(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<ATTLENBossSnak01Pawn::TTLENBossSnakJoint,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x130 + *param_1);
  if (param_2 != 0) {
    puVar4 = (undefined4 *)((longlong)puVar5 + 0xfc);
    do {
      uVar3 = _DAT_1464aa6c8;
      uVar2 = _DAT_1464aa6c0;
      *(undefined8 *)(puVar4 + -0x33) = 0;
      *(undefined8 *)(puVar4 + -0x31) = 0;
      *puVar5 = uVar2;
      puVar5[1] = uVar3;
      *(undefined8 *)(puVar4 + -0x2d) = 0;
      *(undefined8 *)(puVar4 + -0x2b) = 0;
      *(byte *)(puVar4 + -0x28) = *(byte *)(puVar4 + -0x28) & 0xf9;
      *(undefined1 *)((longlong)puVar4 + -0x9f) = 0;
      *(undefined8 *)(puVar4 + -0x27) = 0;
      *(undefined8 *)(puVar4 + -0x25) = 0;
      *(undefined8 *)(puVar4 + -0x23) = 0;
      *(undefined8 *)(puVar4 + -0x21) = 0;
      *(undefined8 *)(puVar4 + -0x1f) = 0;
      *(undefined8 *)(puVar4 + -0x1d) = 0;
      *(undefined8 *)(puVar4 + -0x1b) = 0;
      *(undefined8 *)(puVar4 + -0x19) = 0;
      *(undefined8 *)(puVar4 + -0x13) = 0;
      puVar4[-0x11] = 0;
      puVar4[-0x10] = 0x3f800000;
      *(undefined8 *)(puVar4 + -0xb) = 0x3f800000;
      puVar4[-9] = 0;
      *(undefined8 *)(puVar4 + -8) = 0x3f800000;
      puVar4[-6] = 0;
      *(undefined8 *)(puVar4 + -5) = 0x3f800000;
      puVar4[-3] = 0;
      *(undefined8 *)(puVar4 + -2) = 0x3f800000;
      *puVar4 = 0;
      param_2 = param_2 + -1;
      puVar4 = puVar4 + 0x4c;
      puVar5 = puVar5 + 0x26;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 1417ffcd0 FUN_1417ffcd0 body=803 status=ok
// SIG undefined FUN_1417ffcd0(void)

void FUN_1417ffcd0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  longlong *plVar15;
  bool bVar16;
  undefined8 local_res10;
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint local_70;
  uint uStack_6c;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  plVar8 = (longlong *)0x0;
  *param_1 = param_2 + 0x28;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[1] = param_2 + 0x98;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  plVar15 = *(longlong **)(param_2 + 0x18);
  plVar10 = plVar8;
  plVar12 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar15[1];
    bVar16 = iVar5 == 0;
    if (bVar16) {
      *(int *)(plVar15 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar10 = (longlong *)0x0, plVar12 = plVar8, !bVar16) {
      LOCK();
      bVar16 = iVar5 == (int)plVar15[1];
      if (bVar16) {
        *(int *)(plVar15 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar16) {
        plVar12 = plVar15;
        if (plVar15 != (longlong *)0x0) {
          plVar10 = *(longlong **)(param_2 + 0x10);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar15[1];
      bVar16 = iVar5 == 0;
      if (bVar16) {
        *(int *)(plVar15 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  pfVar6 = (float *)(plVar10 + 0x70);
  if (*pfVar6 == 0.0) {
    pfVar6 = (float *)(plVar10 + 0x6f);
  }
  local_res10 = *(undefined8 *)pfVar6;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    lVar4 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  lVar4 = *param_1;
  param_1[2] = param_2 + 0x998;
  *(undefined1 *)(lVar4 + 0x6c) = 0;
  lVar7 = *(longlong *)(param_2 + 0x998);
  lVar11 = (longlong)*(int *)(param_2 + 0x9a0) * 0x40 + lVar7;
  for (; lVar7 != lVar11; lVar7 = lVar7 + 0x40) {
    if (*(char *)(lVar7 + 0x28) == '\0') {
      *(undefined1 *)(lVar4 + 0x6c) = 1;
      break;
    }
  }
  FUN_141800000(param_1,param_2 + 0x918,&local_res10);
  plVar15 = (longlong *)(param_2 + 0x9a8);
  uStack_c4 = 1;
  uVar3 = *(uint *)(param_2 + 0x9d0);
  puVar2 = (uint *)(param_2 + 0x9b8);
  local_c8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  if (uVar3 != 0) {
    puVar14 = *(uint **)(param_2 + 0x9c8);
    if (*(uint **)(param_2 + 0x9c8) == (uint *)0x0) {
      puVar14 = puVar2;
    }
    uVar13 = *puVar14;
    plVar10 = plVar8;
    while (uVar13 == 0) {
      iVar5 = (int)plVar8;
      uStack_b0 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_b0;
      local_c8 = iVar5 + 1;
      plVar8 = (longlong *)(ulonglong)local_c8;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1417ffeac;
      uVar13 = puVar14[(longlong)iVar5 + 1];
    }
    uStack_c4 = -uVar13 & uVar13;
    iVar5 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_b4 = (uStack_b0 - iVar5) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_1417ffeac:
      uStack_b4 = uVar3;
    }
  }
  uStack_6c = *(uint *)(param_2 + 0x9d0);
  uStack_58 = CONCAT44(uStack_c4,local_c8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_b4;
  local_88 = CONCAT44(uStack_ac,uStack_b0);
  local_70 = -1 << ((byte)uStack_6c & 0x1f);
  uVar13 = uStack_6c & 0xffffffe0;
  uStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  local_98 = puVar2;
  local_60 = plVar15;
  puStack_50 = puVar2;
  uStack_40 = local_88;
  uStack_48 = uStack_90;
  uStack_44 = uStack_8c;
  uVar9 = uStack_6c;
  if (uStack_6c != uVar3) {
    puVar14 = *(uint **)(param_2 + 0x9c8);
    if (*(uint **)(param_2 + 0x9c8) == (uint *)0x0) {
      puVar14 = puVar2;
    }
    uVar9 = puVar14[(int)uStack_6c >> 5] & local_70;
    iVar5 = (int)uStack_6c >> 5;
    while (uVar9 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1417fff72;
      uVar9 = puVar14[(longlong)iVar5 + 1];
      local_70 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar5 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_6c = (uVar13 - iVar5) + 0x1f;
    uVar9 = uStack_6c;
    if ((int)uVar3 < (int)uStack_6c) {
LAB_1417fff72:
      uStack_6c = uVar3;
      uVar9 = uVar3;
    }
  }
  while ((uStack_8c != uVar9 || (local_98 != puVar2))) {
    lVar4 = *(longlong *)(*plVar15 + 0x10 + (longlong)(int)uStack_8c * 0x28);
    param_1[1] = lVar4;
    FUN_141800000(param_1,lVar4 + 0x880,&local_res10);
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 141800000 FUN_141800000 body=759 status=ok
// SIG undefined FUN_141800000(void)

void FUN_141800000(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar6 = 0;
  iVar1 = *(int *)(lVar2 + 0x898);
  uVar3 = uVar6;
  uVar5 = uVar6;
  if (0 < iVar1) {
    do {
      if ((*(byte *)(*(longlong *)(lVar2 + 0x890) + uVar5 + 0x49) & 0x10) == 0) {
        FUN_1417cfd20();
      }
      else {
        FUN_1417d1e70(param_1);
      }
      iVar1 = *(int *)(lVar2 + 0x898);
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 0x70;
    } while ((int)uVar4 < iVar1);
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x8a8);
  uVar3 = uVar6;
  uVar5 = uVar6;
  if (0 < iVar1) {
    do {
      if ((*(byte *)(*(longlong *)(lVar2 + 0x8a0) + uVar5 + 0x49) & 0x10) == 0) {
        FUN_1417cad50();
      }
      else {
        FUN_1417cd530(param_1);
      }
      iVar1 = *(int *)(lVar2 + 0x8a8);
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 0x70;
    } while ((int)uVar4 < iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar1;
  iVar1 = *(int *)(lVar2 + 0x8b8);
  uVar3 = uVar6;
  uVar5 = uVar6;
  if (0 < iVar1) {
    do {
      if ((*(byte *)(*(longlong *)(lVar2 + 0x8b0) + uVar5 + 0x49) & 0x10) == 0) {
        FUN_1417da710();
      }
      else {
        FUN_1417da9a0(param_1);
      }
      iVar1 = *(int *)(lVar2 + 0x8b8);
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 0xc0;
    } while ((int)uVar4 < iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar1;
  iVar1 = *(int *)(lVar2 + 0x8c8);
  uVar3 = uVar6;
  uVar5 = uVar6;
  if (0 < iVar1) {
    do {
      if ((*(byte *)(*(longlong *)(lVar2 + 0x8c0) + uVar5 + 0x49) & 0x10) == 0) {
        FUN_1417da150();
      }
      else {
        FUN_1417da430(param_1);
      }
      iVar1 = *(int *)(lVar2 + 0x8c8);
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 0x80;
    } while ((int)uVar4 < iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar1;
  iVar1 = *(int *)(lVar2 + 0x8d8);
  uVar3 = uVar6;
  uVar5 = uVar6;
  if (0 < iVar1) {
    do {
      if ((*(byte *)(*(longlong *)(lVar2 + 0x8d0) + uVar5 + 0x49) & 0x10) == 0) {
        FUN_1417d6700();
      }
      else {
        FUN_1417d8110(param_1);
      }
      iVar1 = *(int *)(lVar2 + 0x8d8);
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 0x78;
    } while ((int)uVar4 < iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
  iVar1 = *(int *)(lVar2 + 0x8e8);
  uVar3 = uVar6;
  if (0 < iVar1) {
    do {
      FUN_1417fec60(param_1,(longlong)(int)uVar3 * 0x60 + *(longlong *)(lVar2 + 0x8e0));
      iVar1 = *(int *)(lVar2 + 0x8e8);
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while ((int)uVar4 < iVar1);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar1;
  uVar3 = uVar6;
  if (0 < (int)param_2[1]) {
    do {
      lVar2 = *param_2;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      lVar2 = lVar2 + uVar6;
      bVar7 = ~(*(byte *)(lVar2 + 0x118) >> 4) & 1;
      switch(*(undefined4 *)(lVar2 + 0x11c)) {
      case 0:
        if (bVar7 == 0) {
          FUN_1417d9d70(param_1,lVar2,DAT_1464aa730);
        }
        else {
          FUN_1417d98a0();
        }
        break;
      case 1:
        FUN_141801a20(param_1);
        break;
      case 2:
        if (bVar7 == 0) {
          FUN_1417d5ed0(param_1);
        }
        else {
          FUN_1417d5550();
        }
        break;
      case 3:
        if (bVar7 == 0) {
          FUN_1417db1a0(param_1);
        }
        else {
          FUN_1417daca0();
        }
        break;
      case 4:
        FUN_1417ff340(param_1);
        break;
      case 5:
        FUN_1417ff6c0(param_1);
        break;
      case 6:
        FUN_141800320(param_1);
        break;
      case 7:
        FUN_141800d90(param_1,lVar2,param_3);
      }
      uVar4 = (int)uVar3 + 1;
      uVar6 = uVar6 + 0x130;
      uVar3 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 141800320 FUN_141800320 body=1133 status=ok
// SIG undefined FUN_141800320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141800320(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_168 [32];
  uint local_148 [2];
  longlong *local_140;
  int local_138 [2];
  uint *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined1 local_90 [40];
  undefined1 local_68;
  longlong local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar5 = *(longlong *)(param_1 + 8);
  uVar4 = *(uint *)(param_2 + 0x114);
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    return;
  }
  plVar12 = (longlong *)0x0;
  if (uVar4 < 0x100) {
    lVar8 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      lVar8 = lVar5;
    }
    if ((*(uint *)(lVar8 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      plVar13 = (longlong *)(lVar5 + ((ulonglong)uVar4 + 4) * 8);
      goto LAB_141800436;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x828) != *(int *)(lVar5 + 0x854)) {
      lVar8 = *(longlong *)(lVar5 + 0x860);
      if (*(longlong *)(lVar5 + 0x860) == 0) {
        lVar8 = lVar5 + 0x858;
      }
      iVar7 = *(int *)(lVar8 + ((longlong)*(int *)(lVar5 + 0x868) - 1U & (longlong)(int)uVar4) * 4);
      if (iVar7 != -1) {
        do {
          plVar10 = (longlong *)(*(longlong *)(lVar5 + 0x820) + (longlong)iVar7 * 0x18);
          if (*(uint *)(*(longlong *)(lVar5 + 0x820) + (longlong)iVar7 * 0x18) == uVar4) {
            if (iVar7 != -1) goto LAB_141800424;
            break;
          }
          iVar7 = (int)plVar10[2];
        } while (iVar7 != -1);
      }
    }
    plVar10 = plVar12;
LAB_141800424:
    plVar13 = plVar10 + 1;
    if (plVar10 == (longlong *)0x0) {
      plVar13 = plVar12;
    }
LAB_141800436:
    if (plVar13 != (longlong *)0x0) goto LAB_1418004ec;
  }
  local_148[0] = uVar4;
  if (uVar4 < 0x100) {
    uVar9 = *(uint *)(lVar5 + 0x870);
    if (uVar4 <= *(uint *)(lVar5 + 0x870)) {
      uVar9 = uVar4;
    }
    *(uint *)(lVar5 + 0x870) = uVar9;
    uVar9 = *(uint *)(lVar5 + 0x874);
    if (*(uint *)(lVar5 + 0x874) <= uVar4) {
      uVar9 = uVar4;
    }
    *(uint *)(lVar5 + 0x874) = uVar9;
    lVar8 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      lVar8 = lVar5;
    }
    puVar2 = (uint *)(lVar8 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
    plVar13 = (longlong *)(lVar5 + ((ulonglong)uVar4 + 4) * 8);
  }
  else {
    local_130 = local_148;
    FUN_1417de2e0(lVar5 + 0x820,local_138,&local_130,0);
    plVar13 = (longlong *)(*(longlong *)(lVar5 + 0x820) + ((longlong)local_138[0] * 3 + 1) * 8);
  }
LAB_1418004ec:
  puVar6 = *(undefined8 **)(param_2 + 0xa0);
  plVar10 = (longlong *)puVar6[1];
  plVar11 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar10[1];
    bVar14 = iVar7 == 0;
    if (bVar14) {
      *(int *)(plVar10 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar11 = plVar12, !bVar14) {
      LOCK();
      bVar14 = iVar7 == (int)plVar10[1];
      if (bVar14) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar14) {
        plVar11 = plVar10;
        plVar12 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          local_140 = (longlong *)*puVar6;
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plVar10 + 1;
          lVar5 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plVar10 + 1;
          lVar5 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          plVar12 = local_140;
          if ((int)lVar5 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar12 = local_140;
            if (iVar7 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
              plVar12 = local_140;
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(plVar10 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  iVar7 = *(int *)(param_2 + 0x120);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(param_1 + 0x10);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x10000;
  local_c0 = 0;
  local_b0 = 0xffffffff;
  local_100 = plVar12;
  local_f8 = plVar11;
  local_c4 = iVar7;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0xffffffffffffffff;
  local_50 = '\0';
  if (((-1 < iVar7) && (iVar7 < (int)plVar10[1])) &&
     ((undefined1 *)((longlong)iVar7 * 0x40 + *plVar10) != local_90)) {
    FSlateClippingState::FSlateClippingState(local_90);
    local_50 = '\x01';
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  lVar5 = *plVar13;
  iVar7 = *(int *)(lVar5 + 0x1d0);
  *(int *)(lVar5 + 0x1d0) = iVar7 + 1;
  if (*(int *)(lVar5 + 0x1d4) < iVar7 + 1) {
    TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(lVar5,iVar7);
  }
  lVar8 = *(longlong *)(lVar5 + 0x1c0);
  if (*(longlong *)(lVar5 + 0x1c0) == 0) {
    lVar8 = lVar5;
  }
  FSlateElementBatch::FSlateElementBatch((longlong)iVar7 * 0xe0 + lVar8,&local_128);
  if (local_50 != '\0') {
    local_50 = '\0';
    if (local_60 != 0) {
      FMemory::Free();
    }
    local_68 = 0;
  }
  FSlateElementBatch::FBatchKey::~FBatchKey(&local_128);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 141800790 FUN_141800790 body=1521 status=ok
// SIG undefined FUN_141800790(void)

bool FUN_141800790(longlong param_1,short *param_2,byte *param_3,short *param_4,short *param_5,
                  short *param_6,short *param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  piVar5 = (int *)(**(code **)**(undefined8 **)(param_1 + 0x110))
                            (*(undefined8 **)(param_1 + 0x110),local_res8);
  if ((*piVar5 < (int)*param_2) ||
     (lVar6 = (**(code **)**(undefined8 **)(param_1 + 0x110))
                        (*(undefined8 **)(param_1 + 0x110),local_res10),
     *(int *)(lVar6 + 4) < (int)param_2[1])) {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x10))
              (*(longlong **)(param_1 + 0x110),&local_48,(int)*param_2,(int)param_2[1],param_2 + 8);
    plVar1 = local_40;
    lVar6 = local_48;
    if (local_48 == 0) {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar5 = (int *)((longlong)local_40 + 0xc);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (*(longlong *)(param_2 + 8) != 0) {
        FMemory::Free();
      }
      bVar9 = false;
    }
    else {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      iVar2 = *(int *)(param_1 + 0xf8);
      *(int *)(param_1 + 0xf8) = iVar2 + 1;
      if (*(int *)(param_1 + 0xfc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xf0,iVar2);
      }
      plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xf0));
      *plVar8 = lVar6;
      plVar8[1] = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar1 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar1)();
          LOCK();
          piVar5 = (int *)((longlong)plVar1 + 0xc);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      iVar2 = *(int *)(param_1 + 0x108);
      *(int *)(param_1 + 0x108) = iVar2 + 1;
      if (*(int *)(param_1 + 0x10c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x100,iVar2);
      }
      plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x100));
      *plVar8 = local_48;
      plVar8[1] = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      *param_3 = (byte)iVar2;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar1 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar1)();
          LOCK();
          piVar5 = (int *)((longlong)plVar1 + 0xc);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      *param_4 = 0;
      *param_5 = 0;
      *param_6 = *param_2;
      *param_7 = param_2[1];
      if ((*(int *)(param_1 + 0x128) < *(int *)(param_1 + 0xf8)) &&
         (*(char *)(param_1 + 0x120) == '\0')) {
        if ((DAT_1468c21b0 == *(longlong *)(param_1 + 0x130)) ||
           (DAT_1468c21b0 == *(longlong *)(param_1 + 0x130) + 1)) {
          *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xf8);
        }
        else {
          *(undefined1 *)(param_1 + 0x120) = 1;
          *(undefined4 *)(param_1 + 0x124) = 1;
          *(undefined4 *)(param_1 + 0x128) = 1;
          *(longlong *)(param_1 + 0x130) = DAT_1468c21b0;
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar5 = (int *)((longlong)local_40 + 0xc);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
LAB_141800d10:
      if (*(longlong *)(param_2 + 8) != 0) {
        FMemory::Free();
      }
      bVar9 = true;
    }
  }
  else {
    *param_3 = 0;
    if (0 < *(int *)(param_1 + 0xe8)) {
      uVar7 = 0;
      do {
        lVar6 = FSlateTextureAtlas::AddTexture
                          (*(longlong *)(*(longlong *)(param_1 + 0xe0) + uVar7 * 0x10) + 8,
                           (int)*param_2,(int)param_2[1],param_2 + 8);
        if (lVar6 != 0) {
          *param_4 = *(short *)(lVar6 + 0x10) + (ushort)*(byte *)(lVar6 + 0x20);
          *param_5 = *(short *)(lVar6 + 0x14) + (ushort)*(byte *)(lVar6 + 0x20);
          *param_6 = *(short *)(lVar6 + 0x18) + (ushort)*(byte *)(lVar6 + 0x20) * -2;
          *param_7 = *(short *)(lVar6 + 0x1c) + (ushort)*(byte *)(lVar6 + 0x20) * -2;
          goto LAB_141800d10;
        }
        bVar4 = *param_3 + 1;
        uVar7 = (ulonglong)bVar4;
        *param_3 = bVar4;
      } while ((int)(uint)bVar4 < *(int *)(param_1 + 0xe8));
    }
    (**(code **)(**(longlong **)(param_1 + 0x110) + 8))(*(longlong **)(param_1 + 0x110),&local_58);
    lVar6 = FSlateTextureAtlas::AddTexture(local_58 + 8,(int)*param_2,(int)param_2[1],param_2 + 8);
    if (lVar6 != 0) {
      *param_4 = *(short *)(lVar6 + 0x10) + (ushort)*(byte *)(lVar6 + 0x20);
      *param_5 = *(short *)(lVar6 + 0x14) + (ushort)*(byte *)(lVar6 + 0x20);
      *param_6 = *(short *)(lVar6 + 0x18) + (ushort)*(byte *)(lVar6 + 0x20) * -2;
      *param_7 = *(short *)(lVar6 + 0x1c) + (ushort)*(byte *)(lVar6 + 0x20) * -2;
    }
    iVar2 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar2 + 1;
    if (*(int *)(param_1 + 0xec) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xe0,iVar2);
    }
    plVar1 = local_50;
    plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xe0));
    *plVar8 = local_58;
    plVar8[1] = (longlong)local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0x108);
    *(int *)(param_1 + 0x108) = iVar2 + 1;
    if (*(int *)(param_1 + 0x10c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x100,iVar2);
    }
    plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x100));
    *plVar8 = local_58;
    plVar8[1] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    *param_3 = (byte)iVar2;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar1 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar5 = (int *)((longlong)plVar1 + 0xc);
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if ((*(int *)(param_1 + 0x124) < *(int *)(param_1 + 0xe8)) &&
       (*(char *)(param_1 + 0x120) == '\0')) {
      if ((DAT_1468c21b0 == *(longlong *)(param_1 + 0x130)) ||
         (DAT_1468c21b0 == *(longlong *)(param_1 + 0x130) + 1)) {
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xe8);
      }
      else {
        *(undefined1 *)(param_1 + 0x120) = 1;
        *(undefined4 *)(param_1 + 0x124) = 1;
        *(undefined4 *)(param_1 + 0x128) = 1;
        *(longlong *)(param_1 + 0x130) = DAT_1468c21b0;
      }
    }
    bVar9 = lVar6 != 0;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar5 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (*(longlong *)(param_2 + 8) != 0) {
      FMemory::Free();
    }
  }
  return bVar9;
}



// FUNCTION 141800d90 FUN_141800d90 body=1270 status=ok
// SIG undefined FUN_141800d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141800d90(longlong param_1,longlong param_2,float *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1d8 [32];
  uint local_1b8 [2];
  int local_1b0 [2];
  uint *local_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  undefined8 local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  int local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined1 local_e0 [40];
  undefined1 local_b8;
  longlong local_b0;
  char local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  fVar15 = *(float *)(param_2 + 0xe0) + *(float *)(param_2 + 0xe0);
  fVar14 = *(float *)(param_2 + 0xd4) * (float)DAT_1468b5d88;
  uVar2 = *(uint *)(param_2 + 0x114);
  fVar12 = *(float *)(param_2 + 0xe4) + *(float *)(param_2 + 0xe4);
  fVar11 = *(float *)(param_2 + 0xd8) * DAT_1468b5d88._4_4_;
  fVar13 = *(float *)(param_2 + 0x108);
  fVar16 = *(float *)(param_2 + 0xd8) * *(float *)(param_2 + 0x10c);
  fVar17 = *(float *)(param_2 + 0xdc) * *(float *)(param_2 + 0x10c);
  local_198 = (float)((int)ROUND((*(float *)(param_2 + 0xd0) + *(float *)(param_2 + 0xd0)) *
                                 (float)DAT_1468b5d88 + fVar11 + fVar11 + fVar15 + 0.5) >> 1);
  fStack_194 = (float)((int)ROUND((DAT_1468b5d88._4_4_ + DAT_1468b5d88._4_4_) *
                                  *(float *)(param_2 + 0xdc) + fVar14 + fVar14 + fVar12 + 0.5) >> 1)
  ;
  fStack_190 = (float)((int)ROUND((fVar13 + fVar13) * *(float *)(param_2 + 0xd0) + fVar16 + fVar16 +
                                  fVar15 + 0.5) >> 1);
  fStack_18c = (float)((int)ROUND((fVar13 + fVar13) * *(float *)(param_2 + 0xd4) + fVar17 + fVar17 +
                                  fVar12 + 0.5) >> 1);
  if ((fStack_190 - local_198) / *param_3 <= 0.0) {
    return;
  }
  if ((fStack_18c - fStack_194) / param_3[1] <= 0.0) {
    return;
  }
  uVar4 = *(undefined4 *)(param_2 + 0xb0);
  uVar5 = *(undefined4 *)(param_2 + 0xb4);
  local_1a8 = *(uint **)(param_2 + 0xb0);
  lVar3 = *(longlong *)(param_1 + 8);
  fVar13 = (float)*(int *)(param_2 + 0xc0);
  uStack_19c = 0;
  fStack_1a0 = fVar13;
  if (uVar2 < 0x100) {
    lVar7 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar7 = lVar3;
    }
    if ((*(uint *)(lVar7 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      plVar10 = (longlong *)(lVar3 + ((ulonglong)uVar2 + 4) * 8);
      goto LAB_141801095;
    }
  }
  else {
    if (*(int *)(lVar3 + 0x828) != *(int *)(lVar3 + 0x854)) {
      lVar7 = *(longlong *)(lVar3 + 0x860);
      if (*(longlong *)(lVar3 + 0x860) == 0) {
        lVar7 = lVar3 + 0x858;
      }
      iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(lVar3 + 0x868) - 1U & (longlong)(int)uVar2) * 4);
      if (iVar6 != -1) {
        do {
          plVar9 = (longlong *)(*(longlong *)(lVar3 + 0x820) + (longlong)iVar6 * 0x18);
          if (*(uint *)(*(longlong *)(lVar3 + 0x820) + (longlong)iVar6 * 0x18) == uVar2) {
            if (iVar6 != -1) goto LAB_141801083;
            break;
          }
          iVar6 = (int)plVar9[2];
        } while (iVar6 != -1);
      }
    }
    plVar9 = (longlong *)0x0;
LAB_141801083:
    plVar10 = plVar9 + 1;
    if (plVar9 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
LAB_141801095:
    if (plVar10 != (longlong *)0x0) goto LAB_141801149;
  }
  local_1b8[0] = uVar2;
  if (uVar2 < 0x100) {
    uVar8 = *(uint *)(lVar3 + 0x870);
    if (uVar2 <= *(uint *)(lVar3 + 0x870)) {
      uVar8 = uVar2;
    }
    *(uint *)(lVar3 + 0x870) = uVar8;
    uVar8 = *(uint *)(lVar3 + 0x874);
    if (*(uint *)(lVar3 + 0x874) <= uVar2) {
      uVar8 = uVar2;
    }
    *(uint *)(lVar3 + 0x874) = uVar8;
    lVar7 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar7 = lVar3;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    plVar10 = (longlong *)(lVar3 + ((ulonglong)uVar2 + 4) * 8);
  }
  else {
    local_1a8 = local_1b8;
    FUN_1417de2e0(lVar3 + 0x820,local_1b0,&local_1a8,0);
    plVar10 = (longlong *)(*(longlong *)(lVar3 + 0x820) + ((longlong)local_1b0[0] * 3 + 1) * 8);
  }
LAB_141801149:
  local_114 = *(int *)(param_2 + 0x120);
  local_178 = 0;
  uStack_170 = 0;
  local_138 = local_198;
  fStack_134 = fStack_194;
  fStack_130 = fStack_190;
  fStack_12c = fStack_18c;
  local_168 = 0;
  uStack_160 = 0;
  local_150 = 0;
  local_148 = 0;
  uStack_11c = 0;
  local_118 = 0x10500;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0xffffffffffffffff;
  local_a0 = '\0';
  local_128 = uVar4;
  uStack_124 = uVar5;
  fStack_120 = fVar13;
  if (((-1 < local_114) && (local_114 < (int)(*(longlong **)(param_1 + 0x10))[1])) &&
     ((undefined1 *)((longlong)local_114 * 0x40 + **(longlong **)(param_1 + 0x10)) != local_e0)) {
    FSlateClippingState::FSlateClippingState(local_e0);
    local_a0 = '\x01';
  }
  lVar3 = *plVar10;
  iVar6 = *(int *)(lVar3 + 0x1d0);
  *(int *)(lVar3 + 0x1d0) = iVar6 + 1;
  if (*(int *)(lVar3 + 0x1d4) < iVar6 + 1) {
    TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(lVar3,iVar6);
  }
  lVar7 = *(longlong *)(lVar3 + 0x1c0);
  if (*(longlong *)(lVar3 + 0x1c0) == 0) {
    lVar7 = lVar3;
  }
  FSlateElementBatch::FSlateElementBatch((longlong)iVar6 * 0xe0 + lVar7,&local_178);
  if (local_a0 != '\0') {
    local_a0 = '\0';
    if (local_b0 != 0) {
      FMemory::Free();
    }
    local_b8 = 0;
  }
  FSlateElementBatch::FBatchKey::~FBatchKey(&local_178);
  return;
}



// FUNCTION 141801290 AddReferencedObjects body=601 status=ok
// SIG undefined AddReferencedObjects(void)

void FLegacySlateFontInfoCache::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
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
  
  uStack_94 = 1;
  plVar2 = (longlong *)(param_1 + 0xc0);
  local_98 = 0;
  uVar3 = *(uint *)(param_1 + 0xe8);
  puVar1 = (uint *)(param_1 + 0xd0);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar5) goto LAB_14180136e;
      uVar4 = puVar10[lVar6 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (iStack_80 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14180136e:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xe8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141801431;
      uVar7 = puVar10[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141801431:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    (**(code **)(*param_2 + 0x38))
              (param_2,*(longlong *)(*plVar2 + 0x10 + (longlong)(int)uStack_5c * 0x28) + 0x18);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (**(code **)(*param_2 + 0x38))(param_2,*(longlong *)(param_1 + 0xa0) + 0x18,0,0);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(*param_2 + 0x38))(param_2,*(longlong *)(param_1 + 0xb0) + 0x18,0,0);
  }
  return;
}



// FUNCTION 1418014f0 AddReferencedObjects body=40 status=ok
// SIG undefined AddReferencedObjects(void)

void FSlateWindowElementList::AddReferencedObjects(undefined8 *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,*param_1,*(undefined4 *)(param_1 + 1),0,0);
  return;
}



// FUNCTION 141801520 AddReferencedObjects body=208 status=ok
// SIG undefined AddReferencedObjects(void)

void FStandaloneCompositeFont::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x18) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar2 + 0x20,0,0);
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 7;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 7) {
    lVar2 = *plVar3;
    lVar1 = lVar2 + (longlong)(int)plVar3[1] * 0x28;
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
      (**(code **)(*param_2 + 0x38))(param_2,lVar2 + 0x20,0,0);
    }
  }
  return;
}



// FUNCTION 1418015f0 FUN_1418015f0 body=267 status=ok
// SIG undefined FUN_1418015f0(void)

void FUN_1418015f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0xaa0) == '\0') {
      plVar5 = *(longlong **)(lVar2 + 0xa68);
      plVar4 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar6 = iVar3 == 0;
        if (bVar6) {
          *(int *)(plVar5 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (plVar4 = (longlong *)0x0, !bVar6) {
          LOCK();
          bVar6 = iVar3 == (int)plVar5[1];
          if (bVar6) {
            *(int *)(plVar5 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar6) {
            plVar4 = plVar5;
            if (((plVar5 != (longlong *)0x0) && (*(longlong *)(lVar2 + 0xa60) != 0)) &&
               (0 < *(int *)(*(longlong *)(lVar2 + 0xa60) + 0x38))) {
              bVar6 = true;
              goto LAB_14180165e;
            }
            break;
          }
          LOCK();
          iVar3 = (int)plVar5[1];
          bVar6 = iVar3 == 0;
          if (bVar6) {
            *(int *)(plVar5 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
      bVar6 = false;
      plVar5 = plVar4;
LAB_14180165e:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (!bVar6) {
        return;
      }
    }
    (**(code **)(*param_2 + 0x40))
              (param_2,**(undefined8 **)(param_1 + 0x10),
               *(undefined4 *)(*(undefined8 **)(param_1 + 0x10) + 1),0,0);
  }
  return;
}



// FUNCTION 141801700 AddRenderBatch body=242 status=ok
// SIG undefined AddRenderBatch(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSlateBatchData::AddRenderBatch
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  int local_148;
  int local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined1 local_118 [240];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_4;
  *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + param_5;
  local_128 = *param_1;
  local_120 = param_1[1];
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
    UNLOCK();
  }
  local_130 = param_7;
  local_138 = param_6;
  local_140 = param_5;
  local_148 = param_4;
  uVar3 = FSlateRenderBatch::FSlateRenderBatch(local_118,param_2,param_3,&local_128);
  iVar1 = *(int *)(param_1 + 0xb);
  *(int *)(param_1 + 0xb) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar1 + 1) {
    TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(param_1 + 10,iVar1);
  }
  lVar4 = (longlong)iVar1 * 0xf0;
  FSlateRenderBatch::FSlateRenderBatch(param_1[10] + lVar4,uVar3);
  FUN_1417f7920(local_118);
  lVar2 = param_1[10];
  *(undefined4 *)(lVar4 + 4 + lVar2) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(lVar4 + 8 + lVar2) = DAT_1468b5d88._4_4_;
  return;
}



// FUNCTION 141801800 FUN_141801800 body=437 status=ok
// SIG undefined FUN_141801800(void)

undefined8 * FUN_141801800(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar5 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  uVar6 = 0;
  puVar8 = puVar7;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = &PTR__scalar_deleting_destructor__144d4edf0;
    puVar5[2] = DAT_1469eb218;
    lVar3 = DAT_1469eb220;
    puVar5[3] = DAT_1469eb220;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar5 + 4) = 0;
    *puVar5 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar5 + 0x24) = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 7) = 1;
    puVar5[8] = 0;
    *(undefined4 *)(puVar5 + 9) = 0;
    puVar8 = puVar5;
  }
  puVar5 = (undefined8 *)(param_1 + 0x208);
  if (param_2 == 0xffffffff) {
    iVar4 = (**(code **)*puVar5)();
    if (iVar4 == 0) {
      TPanelChildren<SOverlay::FOverlaySlot>::Add(puVar5,puVar8);
      param_2 = uVar6;
    }
    else {
      iVar4 = (**(code **)*puVar5)(puVar5);
      param_2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)(iVar4 + -1) * 8)
                        + 0x20) + 1;
      TPanelChildren<SOverlay::FOverlaySlot>::Add(puVar5,puVar8);
    }
  }
  else {
    iVar4 = (**(code **)*puVar5)(puVar5);
    puVar9 = puVar7;
    if (0 < iVar4) {
      do {
        uVar6 = (uint)puVar7;
        if ((int)param_2 <
            *(int *)(*(longlong *)((longlong)puVar9 + *(longlong *)(param_1 + 0x218)) + 0x20))
        break;
        uVar6 = uVar6 + 1;
        puVar7 = (undefined8 *)(ulonglong)uVar6;
        iVar4 = (**(code **)*puVar5)(puVar5);
        puVar9 = puVar9 + 1;
      } while ((int)uVar6 < iVar4);
    }
    if (*(char *)(param_1 + 0x228) == '\0') {
      lVar3 = *(longlong *)(param_1 + 0x210);
      if ((lVar3 != 0) && (puVar8[1] != lVar3)) {
        puVar8[1] = lVar3;
        FUN_141802340(puVar8);
      }
      plVar2 = (longlong *)(param_1 + 0x218);
      iVar4 = *(int *)(param_1 + 0x220);
      *(int *)(param_1 + 0x220) = iVar4 + 1;
      if (*(int *)(param_1 + 0x224) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
      }
      _Src = (void *)(*plVar2 + (longlong)(int)uVar6 * 8);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar4 - uVar6) << 3);
      *(undefined8 **)(*plVar2 + (longlong)(int)uVar6 * 8) = puVar8;
    }
  }
  FUN_1418475e0(param_1,1);
  *(uint *)(puVar8 + 4) = param_2;
  return puVar8;
}



// FUNCTION 1418019c0 AddSlot body=92 status=ok
// SIG undefined AddSlot(void)

undefined8 * SVerticalBox::AddSlot(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x88);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  TPanelChildren<SOverlay::FOverlaySlot>::Add(param_1 + 0x208,puVar1);
  FUN_1418475e0(param_1,1);
  return puVar1;
}



// FUNCTION 141801a20 FUN_141801a20 body=548 status=ok
// SIG undefined FUN_141801a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141801a20(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [4];
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined1 local_70 [8];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  fVar5 = *(float *)(param_2 + 0x40) / *(float *)(param_2 + 0x110);
  uVar1 = *(undefined1 *)(param_2 + 0x118);
  uVar2 = *(undefined4 *)(param_2 + 0x114);
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  fVar5 = (DAT_1464ba020 + fVar5) * 0.5 + 1.0;
  if (*(int *)(param_2 + 0x50) == 1) {
    FLinearColor::ToFColor
              (*(longlong *)(param_2 + 0x48) + 8,local_d8,*(undefined1 *)((longlong)param_1 + 0x44))
    ;
  }
  else {
    FLinearColor::ToFColor(param_2,local_d4,*(undefined1 *)((longlong)param_1 + 0x44));
  }
  local_e8 = *(undefined4 *)(param_2 + 0x120);
  local_e0 = *(undefined4 *)(param_2 + 0x124);
  local_c8 = *(undefined4 *)(param_2 + 0x40);
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffffffffff00);
  local_f8 = CONCAT71(local_f8._1_7_,uVar1);
  local_100 = CONCAT71(local_100._1_7_,3);
  local_108 = (longlong *)CONCAT71(local_108._1_7_,1);
  local_c4 = 0x3f800000;
  local_bc = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3f800000;
  lVar4 = FUN_14182dc90(param_1,uVar2,&local_c8,0);
  local_90 = *(undefined4 *)(param_2 + 0x10);
  local_8c = *(undefined4 *)(param_2 + 0x14);
  local_a8 = (longlong)*(int *)(lVar4 + 0x8c) * 0x10 + *(longlong *)(*param_1 + 0x30);
  local_a0 = (longlong)*(int *)(lVar4 + 0x90) * 0x10 + *(longlong *)(*param_1 + 0x40);
  local_108 = (longlong *)(param_2 + 0x18);
  lVar4 = param_2 + 0x28;
  local_80 = (undefined4)DAT_1468b5d88;
  local_7c = DAT_1468b5d88._4_4_;
  local_74 = 1;
  local_98 = param_2 + 0xd0;
  local_88 = local_90;
  local_84 = local_8c;
  local_78 = fVar5;
  if (*(int *)(param_2 + 0x50) < 2) {
    local_100 = CONCAT44(local_100._4_4_,0x3f800000);
    lVar3 = (longlong)local_108;
    local_108 = &local_a8;
    FLineBuilder::Subdivide(param_2 + 0x10,lVar3,param_2 + 0x20,lVar4);
    FLineBuilder::Finish(&local_a8,lVar4,local_70);
  }
  else {
    local_100 = param_2 + 0x20;
    local_f8 = lVar4;
    local_f0 = param_1;
    FLineBuilder::BuildBezierGeometry_WithColorGradient(&local_a8,param_2 + 0x48,1,param_2 + 0x10);
  }
  return;
}



// FUNCTION 141801c50 AddTexture body=404 status=ok
// SIG undefined AddTexture(void)

longlong FSlateTextureAtlas::AddTexture
                   (longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  void *_Dst;
  uint uVar9;
  bool bVar10;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  
  lVar6 = FindSlotForTexture();
  if (((lVar6 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x34);
    bVar10 = iVar2 != 0;
    iVar3 = *(int *)(lVar6 + 0x1c);
    uVar8 = (uint)bVar10;
    local_50 = *param_4;
    iVar4 = *(int *)(lVar6 + 0x18);
    _Dst = (void *)((longlong)
                    ((*(int *)(lVar6 + 0x14) * iVar1 + *(int *)(lVar6 + 0x10)) *
                    *(int *)(param_1 + 0x30)) + *(longlong *)(param_1 + 8));
    local_34 = iVar4 + (uint)bVar10 * -2;
    local_48 = _Dst;
    local_38 = iVar4;
    local_30 = iVar1;
    if (iVar2 != 0) {
      local_40 = 0;
      if (iVar2 == 1) {
        CopyRow(param_1,&local_50);
      }
      else {
        ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)(*(int *)(param_1 + 0x30) * iVar4));
      }
    }
    iVar7 = *(int *)(lVar6 + 0x1c);
    uVar9 = (uint)bVar10;
    if (uVar9 < iVar7 - uVar9) {
      do {
        local_40 = CONCAT44(uVar8,uVar8 - uVar9);
        CopyRow(param_1,&local_50);
        iVar7 = *(int *)(lVar6 + 0x1c);
        uVar8 = uVar8 + 1;
      } while (uVar8 < iVar7 - uVar9);
    }
    if (iVar2 != 0) {
      local_40 = CONCAT44(iVar7 - uVar9,iVar3 + (uint)bVar10 * -2 + -1);
      if (*(int *)(param_1 + 0x34) == 1) {
        CopyRow(param_1,&local_50);
      }
      else {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)(*(int *)(param_1 + 0x30) * (iVar7 - uVar9) * iVar1) +
                           (longlong)_Dst),0,(ulonglong)(uint)(*(int *)(param_1 + 0x30) * iVar4));
      }
    }
    cVar5 = IsInActualRenderingThread();
    if (cVar5 != '\0') {
      IsInRenderingThread();
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return lVar6;
}



// FUNCTION 141801df0 AddUninitialized body=219 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x88 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x88 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x88 + *param_1;
  return param_2;
}



// FUNCTION 141801ed0 FUN_141801ed0 body=266 status=ok
// SIG undefined FUN_141801ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141801ed0(byte *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  byte *pbVar5;
  longlong lVar6;
  byte local_res8 [8];
  
  lVar6 = param_2[7];
  pbVar5 = (byte *)(lVar6 + 0xb0);
  if ((*(int *)(lVar6 + 0xc0) != 0) && (*(longlong **)(lVar6 + 0xb8) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(lVar6 + 0xc0) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0,local_res8);
        *pbVar5 = local_res8[0];
      }
      else {
        (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x38))(*(longlong **)(lVar6 + 0xb8),local_res8)
        ;
        *pbVar5 = local_res8[0];
      }
      goto LAB_141801f46;
    }
  }
  local_res8[0] = *pbVar5;
LAB_141801f46:
  if ((*param_1 & local_res8[0]) != 0) {
    iVar1 = *(int *)(param_1 + 0x130);
    lVar6 = (longlong)iVar1;
    *(int *)(param_1 + 0x130) = iVar1 + 1;
    if (*(int *)(param_1 + 0x134) < iVar1 + 1) {
      TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_1 + 8,iVar1);
    }
    uVar3 = param_2[1];
    pbVar5 = *(byte **)(param_1 + 0x128);
    if (*(byte **)(param_1 + 0x128) == (byte *)0x0) {
      pbVar5 = param_1 + 8;
    }
    *(undefined8 *)(pbVar5 + lVar6 * 0x48) = *param_2;
    *(undefined8 *)(pbVar5 + lVar6 * 0x48 + 8) = uVar3;
    uVar3 = param_2[3];
    *(undefined8 *)(pbVar5 + lVar6 * 0x48 + 0x10) = param_2[2];
    *(undefined8 *)(pbVar5 + lVar6 * 0x48 + 0x10 + 8) = uVar3;
    uVar3 = param_2[5];
    *(undefined8 *)(pbVar5 + lVar6 * 0x48 + 0x20) = param_2[4];
    *(undefined8 *)(pbVar5 + lVar6 * 0x48 + 0x20 + 8) = uVar3;
    *(undefined8 *)(pbVar5 + lVar6 * 0x48 + 0x30) = param_2[6];
    *(undefined8 *)(pbVar5 + lVar6 * 0x48 + 0x38) = param_2[7];
    lVar2 = param_2[8];
    *(longlong *)(pbVar5 + lVar6 * 0x48 + 0x40) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141801fe0 FUN_141801fe0 body=855 status=ok
// SIG undefined FUN_141801fe0(void)

longlong * FUN_141801fe0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < (int)param_1[3]) {
    do {
      plVar2 = *(longlong **)(uVar8 + 8 + param_1[2]);
      plVar3 = *(longlong **)(uVar8 + param_1[2]);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)plVar3[3];
      plVar7 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar6[1];
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(plVar6 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar7 = (longlong *)0x0, !bVar11) {
          LOCK();
          bVar11 = iVar5 == (int)plVar6[1];
          if (bVar11) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar7 = plVar6;
            if (((plVar6 != (longlong *)0x0) && (plVar3[2] != 0)) && (plVar3[2] == *param_2)) {
              bVar11 = true;
              goto LAB_14180206d;
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar6[1];
          bVar11 = iVar5 == 0;
          if (bVar11) {
            *(int *)(plVar6 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      bVar11 = false;
      plVar6 = plVar7;
LAB_14180206d:
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      if (bVar11) {
        iVar5 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
        }
        plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *param_1);
        *plVar6 = (longlong)plVar3;
        plVar6[1] = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                  (param_1 + 2,uVar10,1,1);
        FUN_141857030(plVar3);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar2 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        plVar2 = (longlong *)param_2[1];
        if (plVar2 == (longlong *)0x0) {
          return plVar3;
        }
        LOCK();
        plVar6 = plVar2 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return plVar3;
        }
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return plVar3;
        }
        (**(code **)(*plVar2 + 8))(plVar2,1);
        return plVar3;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      uVar9 = (int)uVar10 + 1;
      uVar8 = uVar8 + 0x10;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)param_1[3]);
  }
  local_50 = (longlong *)operator_new(0xac0);
  if (local_50 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_50 + 1) = 1;
    *(undefined4 *)((longlong)local_50 + 0xc) = 1;
    *local_50 = (longlong)&PTR_FUN_144d50238;
    local_40 = param_2[1];
    local_48 = *param_2;
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_1417f0d70(local_50 + 2,&local_48);
  }
  local_58 = local_50 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  iVar5 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
  }
  plVar3 = local_50;
  plVar2 = local_58;
  plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *param_1);
  *plVar6 = (longlong)local_58;
  plVar6[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = local_50 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
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
  plVar3 = (longlong *)param_2[1];
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return plVar2;
}



// FUNCTION 141802340 FUN_141802340 body=330 status=ok
// SIG undefined FUN_141802340(void)

void FUN_141802340(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((DAT_1469eaf30 != 0) && (lVar3 = *(longlong *)(param_1 + 8), lVar3 != 0)) {
    *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
    FUN_141848710(lVar3,5);
  }
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != DAT_1469eb218)) {
    plVar6 = (longlong *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                       (*(longlong *)(param_1 + 8) + 8,local_18);
    plVar4 = (longlong *)plVar6[1];
    lVar3 = *plVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(lVar5 + 0x180) = lVar3;
    plVar6 = *(longlong **)(lVar5 + 0x188);
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar5 + 0x188);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(lVar5 + 0x188) = plVar4;
    }
    if (lVar3 != 0) {
      FUN_1418475e0(lVar3,1);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  return;
}



// FUNCTION 1418024a0 FUN_1418024a0 body=374 status=ok
// SIG undefined FUN_1418024a0(void)

undefined8 FUN_1418024a0(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  longlong lVar4;
  BOOL BVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 local_res8 [16];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 9);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TArray<TWeakPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultAllocator>::
  RemoveAll<<lambda_333ff22782d4b683517e9d097bcba44b>_>(param_1 + 1,local_res8);
  dVar3 = (double)(**(code **)(*param_1 + 0x40))(param_1);
  puVar9 = (undefined8 *)param_1[1];
  uVar8 = 0;
  puVar11 = puVar9 + (longlong)(int)param_1[2] * 2;
  if (puVar9 != puVar11) {
    plVar12 = (longlong *)0x0;
    do {
      plVar2 = (longlong *)puVar9[1];
      plVar7 = plVar12;
      plVar10 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar13 = iVar6 == 0;
        if (bVar13) {
          *(int *)(plVar2 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar10 = plVar12, !bVar13) {
          LOCK();
          bVar13 = iVar6 == (int)plVar2[1];
          if (bVar13) {
            *(int *)(plVar2 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar13) {
            plVar7 = (longlong *)*puVar9;
            plVar10 = plVar2;
            break;
          }
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      if ((char)plVar7[4] == '\0') {
        *(bool *)(plVar7 + 4) = (double)plVar7[3] <= dVar3;
        if ((double)plVar7[3] <= dVar3) {
          uVar8 = 1;
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      else if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar11);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar8;
}



// FUNCTION 141802620 FUN_141802620 body=31 status=ok
// SIG undefined FUN_141802620(void)

ulonglong FUN_141802620(longlong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if ((*(byte *)(param_1 + 0x350) & 2) == 0) {
    uVar1 = *(int *)(param_1 + 0x30c) - 2;
    in_RAX = (ulonglong)uVar1;
    if ((uVar1 & 0xfffffffd) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141802640 AppendFont body=173 status=ok
// SIG undefined AppendFont(void)

longlong *
FTypeface::AppendFont
          (longlong *param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,
          undefined1 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  lVar5 = *param_3;
  *param_3 = 0;
  lVar6 = param_3[1];
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x28);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *puVar1 = *param_2;
  puVar1[1] = lVar5;
  *(int *)(puVar1 + 2) = (int)lVar6;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar3;
  *(undefined1 *)(puVar1 + 3) = param_4;
  *(undefined1 *)((longlong)puVar1 + 0x19) = param_5;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  puVar1[4] = 0;
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1418026f0 FUN_1418026f0 body=1076 status=ok
// SIG undefined FUN_1418026f0(void)

void FUN_1418026f0(longlong param_1,longlong param_2)

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
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar3 = *(int *)(param_2 + 0x920);
  lVar4 = *(longlong *)
           (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
  if (iVar3 != 0) {
    iVar12 = *(int *)(lVar4 + 0x888);
    if (*(int *)(lVar4 + 0x88c) < iVar12 + iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<304,8>_>,FDefaultAllocator>::ResizeTo
                (lVar4 + 0x880);
      iVar12 = *(int *)(lVar4 + 0x888);
    }
    lVar15 = *(longlong *)(param_2 + 0x918);
    lVar14 = (longlong)iVar12 * 0x130 + *(longlong *)(lVar4 + 0x880);
    puVar10 = (undefined8 *)(lVar14 + 0xe8);
    puVar9 = (undefined8 *)(lVar15 + 0xe8);
    iVar12 = iVar3;
    do {
      FUN_1417eeb00(lVar14,lVar15);
      uVar8 = puVar9[-2];
      lVar14 = lVar14 + 0x130;
      lVar15 = lVar15 + 0x130;
      puVar10[-3] = puVar9[-3];
      puVar10[-2] = uVar8;
      puVar10[-1] = puVar9[-1];
      uVar8 = puVar9[1];
      *puVar10 = *puVar9;
      puVar10[1] = uVar8;
      puVar10[2] = puVar9[2];
      puVar10[3] = puVar9[3];
      puVar10[4] = puVar9[4];
      *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(puVar9 + 5);
      *(undefined4 *)((longlong)puVar10 + 0x2c) = *(undefined4 *)((longlong)puVar9 + 0x2c);
      *(undefined1 *)(puVar10 + 6) = *(undefined1 *)(puVar9 + 6);
      *(undefined4 *)((longlong)puVar10 + 0x34) = *(undefined4 *)((longlong)puVar9 + 0x34);
      *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(puVar9 + 7);
      *(undefined4 *)((longlong)puVar10 + 0x3c) = *(undefined4 *)((longlong)puVar9 + 0x3c);
      iVar12 = iVar12 + -1;
      puVar10 = puVar10 + 0x26;
      puVar9 = puVar9 + 0x26;
    } while (iVar12 != 0);
    *(int *)(lVar4 + 0x888) = *(int *)(lVar4 + 0x888) + iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x930);
  if (iVar3 != 0) {
    iVar12 = *(int *)(lVar4 + 0x898);
    if (*(int *)(lVar4 + 0x89c) < iVar12 + iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(lVar4 + 0x890));
      iVar12 = *(int *)(lVar4 + 0x898);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar12 * 0x70 + *(longlong *)(lVar4 + 0x890)),
               *(void **)(param_2 + 0x928),(longlong)iVar3 * 0x70);
    *(int *)(lVar4 + 0x898) = *(int *)(lVar4 + 0x898) + iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x940);
  if (iVar3 != 0) {
    iVar12 = *(int *)(lVar4 + 0x8a8);
    if (*(int *)(lVar4 + 0x8ac) < iVar12 + iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(lVar4 + 0x8a0));
      iVar12 = *(int *)(lVar4 + 0x8a8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar12 * 0x70 + *(longlong *)(lVar4 + 0x8a0)),
               *(void **)(param_2 + 0x938),(longlong)iVar3 * 0x70);
    *(int *)(lVar4 + 0x8a8) = *(int *)(lVar4 + 0x8a8) + iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x950);
  if (iVar3 != 0) {
    iVar12 = *(int *)(lVar4 + 0x8b8);
    if (*(int *)(lVar4 + 0x8bc) < iVar12 + iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(lVar4 + 0x8b0));
      iVar12 = *(int *)(lVar4 + 0x8b8);
    }
    puVar11 = *(undefined8 **)(param_2 + 0x948);
    puVar10 = puVar11 + 0xd;
    puVar13 = (undefined8 *)((longlong)iVar12 * 0xc0 + *(longlong *)(lVar4 + 0x8b0));
    puVar9 = puVar13 + 0xd;
    iVar12 = iVar3;
    do {
      uVar8 = puVar11[1];
      *puVar13 = *puVar11;
      puVar13[1] = uVar8;
      uVar8 = puVar11[3];
      puVar13[2] = puVar11[2];
      puVar13[3] = uVar8;
      uVar8 = puVar11[5];
      puVar13[4] = puVar11[4];
      puVar13[5] = uVar8;
      uVar8 = puVar11[7];
      puVar13[6] = puVar11[6];
      puVar13[7] = uVar8;
      puVar13[8] = puVar11[8];
      *(undefined4 *)(puVar13 + 9) = *(undefined4 *)(puVar11 + 9);
      uVar8 = *(undefined8 *)((longlong)puVar10 + -0x14);
      *(undefined8 *)((longlong)puVar9 + -0x1c) = *(undefined8 *)((longlong)puVar10 + -0x1c);
      *(undefined8 *)((longlong)puVar9 + -0x14) = uVar8;
      puVar9[-1] = puVar10[-1];
      *puVar9 = *puVar10;
      uVar5 = *(undefined4 *)((longlong)puVar10 + 0xc);
      uVar6 = *(undefined4 *)(puVar10 + 2);
      uVar7 = *(undefined4 *)((longlong)puVar10 + 0x14);
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar5;
      *(undefined4 *)(puVar9 + 2) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar7;
      uVar8 = puVar10[4];
      puVar9[3] = puVar10[3];
      puVar9[4] = uVar8;
      puVar9[5] = puVar10[5];
      lVar15 = puVar10[6];
      puVar9[6] = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      puVar13 = puVar13 + 0x18;
      puVar9[7] = puVar10[7];
      puVar11 = puVar11 + 0x18;
      *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar10 + 8);
      *(undefined1 *)((longlong)puVar9 + 0x44) = *(undefined1 *)((longlong)puVar10 + 0x44);
      puVar9[9] = puVar10[9];
      puVar1 = puVar10 + 10;
      puVar10 = puVar10 + 0x18;
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)puVar1;
      puVar9 = puVar9 + 0x18;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    *(int *)(lVar4 + 0x8b8) = *(int *)(lVar4 + 0x8b8) + iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x960);
  if (iVar3 != 0) {
    iVar12 = *(int *)(lVar4 + 0x8c8);
    if (*(int *)(lVar4 + 0x8cc) < iVar12 + iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(lVar4 + 0x8c0));
      iVar12 = *(int *)(lVar4 + 0x8c8);
    }
    puVar11 = *(undefined8 **)(param_2 + 0x958);
    puVar13 = (undefined8 *)((longlong)iVar12 * 0x80 + *(longlong *)(lVar4 + 0x8c0));
    puVar10 = (undefined8 *)((longlong)puVar11 + 0x4c);
    puVar9 = (undefined8 *)((longlong)puVar13 + 0x4c);
    iVar12 = iVar3;
    do {
      uVar8 = puVar11[1];
      *puVar13 = *puVar11;
      puVar13[1] = uVar8;
      uVar8 = puVar11[3];
      puVar13[2] = puVar11[2];
      puVar13[3] = uVar8;
      uVar8 = puVar11[5];
      puVar13[4] = puVar11[4];
      puVar13[5] = uVar8;
      uVar8 = puVar11[7];
      puVar13[6] = puVar11[6];
      puVar13[7] = uVar8;
      puVar13[8] = puVar11[8];
      *(undefined4 *)(puVar13 + 9) = *(undefined4 *)(puVar11 + 9);
      uVar8 = puVar10[1];
      *puVar9 = *puVar10;
      puVar9[1] = uVar8;
      *(undefined8 *)((longlong)puVar9 + 0x14) = *(undefined8 *)((longlong)puVar10 + 0x14);
      lVar15 = *(longlong *)((longlong)puVar10 + 0x1c);
      *(longlong *)((longlong)puVar9 + 0x1c) = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      puVar2 = (undefined4 *)((longlong)puVar10 + 0x24);
      uVar5 = *(undefined4 *)(puVar10 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar10 + 0x2c);
      uVar7 = *(undefined4 *)(puVar10 + 6);
      puVar13 = puVar13 + 0x10;
      puVar11 = puVar11 + 0x10;
      puVar10 = puVar10 + 0x10;
      *(undefined4 *)((longlong)puVar9 + 0x24) = *puVar2;
      *(undefined4 *)(puVar9 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar6;
      *(undefined4 *)(puVar9 + 6) = uVar7;
      puVar9 = puVar9 + 0x10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    *(int *)(lVar4 + 0x8c8) = *(int *)(lVar4 + 0x8c8) + iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x970);
  if (iVar3 != 0) {
    iVar12 = *(int *)(lVar4 + 0x8d8);
    if (*(int *)(lVar4 + 0x8dc) < iVar3 + iVar12) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
                ((longlong *)(lVar4 + 0x8d0));
      iVar12 = *(int *)(lVar4 + 0x8d8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar12 * 0x78 + *(longlong *)(lVar4 + 0x8d0)),
               *(void **)(param_2 + 0x968),(longlong)iVar3 * 0x78);
    *(int *)(lVar4 + 0x8d8) = *(int *)(lVar4 + 0x8d8) + iVar3;
  }
  return;
}



// FUNCTION 141802b30 AppendPoint body=1590 status=ok
// SIG undefined AppendPoint(void)

void FLineBuilder::AppendPoint(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_a4;
  
  uVar11 = DAT_1468b5d88._4_4_;
  uVar6 = (undefined4)DAT_1468b5d88;
  fVar24 = (float)param_2 - *(float *)(param_1 + 3);
  fVar23 = *(float *)((longlong)param_1 + 0x1c) - (float)((ulonglong)param_2 >> 0x20);
  fVar14 = fVar24 * fVar24 + fVar23 * fVar23;
  if (fVar14 <= 1e-08) {
    fVar23 = 0.0;
    fVar24 = 0.0;
  }
  else {
    auVar19 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar17 = auVar19._0_4_;
    fVar17 = fVar17 + fVar17 * (0.5 - fVar14 * 0.5 * fVar17 * fVar17);
    fVar17 = fVar17 + fVar17 * (0.5 - fVar14 * 0.5 * fVar17 * fVar17);
    fVar23 = fVar23 * fVar17;
    fVar24 = fVar24 * fVar17;
  }
  iVar12 = *(int *)((longlong)param_1 + 0x34);
  if (iVar12 == 2) {
    pfVar8 = (float *)param_1[2];
    plVar9 = (longlong *)*param_1;
    fVar21 = *(float *)(param_1 + 6) * *(float *)(param_1 + 5);
    fVar20 = *(float *)(param_1 + 6) * *(float *)((longlong)param_1 + 0x2c);
    iVar12 = (int)plVar9[1];
    lVar13 = (longlong)iVar12;
    fVar15 = fVar21 + *(float *)(param_1 + 4);
    fVar16 = fVar20 + *(float *)((longlong)param_1 + 0x24);
    fVar14 = pfVar8[1];
    fVar17 = *pfVar8;
    fVar22 = pfVar8[2];
    fVar18 = pfVar8[3];
    fVar3 = pfVar8[4];
    fVar4 = pfVar8[5];
    uVar5 = *param_3;
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    lVar10 = *plVar9;
    puVar1 = (undefined8 *)(lVar10 + lVar13 * 0x28);
    *puVar1 = 0x3f800000;
    puVar1[1] = CONCAT44(uVar11,uVar6);
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar13 * 0x28);
    *puVar1 = CONCAT44(uStack_b4,local_b8);
    puVar1[1] = CONCAT44(fVar16 * fVar18 + fVar15 * fVar14 + fVar4,
                         fVar16 * fVar22 + fVar15 * fVar17 + fVar3);
    *(ulonglong *)(lVar10 + 0x20 + lVar13 * 0x28) = CONCAT44(uStack_a4,uVar5);
    uVar5 = DAT_1468b5d88._4_4_;
    uVar11 = (undefined4)DAT_1468b5d88;
    pfVar8 = (float *)param_1[2];
    fVar21 = *(float *)(param_1 + 4) - fVar21;
    fVar20 = *(float *)((longlong)param_1 + 0x24) - fVar20;
    plVar9 = (longlong *)*param_1;
    fVar14 = *pfVar8;
    iVar12 = (int)plVar9[1];
    lVar13 = (longlong)iVar12;
    fVar17 = pfVar8[2];
    fVar22 = pfVar8[3];
    fVar18 = pfVar8[1];
    fVar3 = pfVar8[4];
    fVar4 = pfVar8[5];
    uVar6 = *param_3;
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    lVar10 = *plVar9;
    puVar1 = (undefined8 *)(lVar10 + lVar13 * 0x28);
    *puVar1 = 0;
    puVar1[1] = CONCAT44(uVar5,uVar11);
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar13 * 0x28);
    *puVar1 = CONCAT44(uStack_b4,local_b8);
    puVar1[1] = CONCAT44(fVar20 * fVar22 + fVar21 * fVar18 + fVar4,
                         fVar20 * fVar17 + fVar21 * fVar14 + fVar3);
    *(ulonglong *)(lVar10 + 0x20 + lVar13 * 0x28) = CONCAT44(uStack_a4,uVar6);
    iVar12 = *(int *)((longlong)param_1 + 0x34);
  }
  uVar11 = DAT_1468b5d88._4_4_;
  uVar6 = (undefined4)DAT_1468b5d88;
  if (1 < iVar12) {
    fVar17 = fVar23 + *(float *)(param_1 + 5);
    fVar22 = fVar24 + *(float *)((longlong)param_1 + 0x2c);
    fVar14 = (fVar17 * fVar17 + fVar22 * fVar22) * 0.25;
    if (fVar14 <= 1e-08) {
      fVar14 = 0.0;
      fVar18 = 0.0;
    }
    else {
      auVar19 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar18 = auVar19._0_4_;
      fVar18 = fVar18 + fVar18 * (0.5 - fVar14 * 0.5 * fVar18 * fVar18);
      fVar18 = fVar18 + fVar18 * (0.5 - fVar14 * 0.5 * fVar18 * fVar18);
      fVar14 = fVar17 * 0.5 * fVar18;
      fVar18 = fVar22 * 0.5 * fVar18;
    }
    pfVar8 = (float *)param_1[2];
    plVar9 = (longlong *)*param_1;
    fVar14 = *(float *)(param_1 + 6) * fVar14;
    iVar12 = (int)plVar9[1];
    lVar13 = (longlong)iVar12;
    fVar18 = *(float *)(param_1 + 6) * fVar18;
    fVar16 = fVar14 + *(float *)(param_1 + 3);
    fVar20 = fVar18 + *(float *)((longlong)param_1 + 0x1c);
    fVar17 = pfVar8[1];
    fVar22 = *pfVar8;
    fVar3 = pfVar8[2];
    fVar4 = pfVar8[3];
    fVar15 = pfVar8[4];
    fVar21 = pfVar8[5];
    uVar5 = *param_3;
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    lVar10 = *plVar9;
    puVar1 = (undefined8 *)(lVar10 + lVar13 * 0x28);
    *puVar1 = 0x3f800000;
    puVar1[1] = CONCAT44(uVar11,uVar6);
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar13 * 0x28);
    *puVar1 = CONCAT44(uStack_b4,local_b8);
    puVar1[1] = CONCAT44(fVar20 * fVar4 + fVar16 * fVar17 + fVar21,
                         fVar20 * fVar3 + fVar16 * fVar22 + fVar15);
    *(ulonglong *)(lVar10 + 0x20 + lVar13 * 0x28) = CONCAT44(uStack_a4,uVar5);
    uVar5 = DAT_1468b5d88._4_4_;
    uVar11 = (undefined4)DAT_1468b5d88;
    pfVar8 = (float *)param_1[2];
    fVar14 = *(float *)(param_1 + 3) - fVar14;
    fVar18 = *(float *)((longlong)param_1 + 0x1c) - fVar18;
    plVar9 = (longlong *)*param_1;
    fVar17 = *pfVar8;
    iVar12 = (int)plVar9[1];
    lVar13 = (longlong)iVar12;
    fVar22 = pfVar8[2];
    fVar3 = pfVar8[3];
    fVar4 = pfVar8[1];
    fVar15 = pfVar8[4];
    fVar21 = pfVar8[5];
    uVar6 = *param_3;
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    lVar10 = *plVar9;
    puVar1 = (undefined8 *)(lVar10 + lVar13 * 0x28);
    *puVar1 = 0;
    puVar1[1] = CONCAT44(uVar5,uVar11);
    puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar13 * 0x28);
    *puVar2 = local_b8;
    puVar2[1] = uStack_b4;
    puVar2[2] = fVar18 * fVar22 + fVar14 * fVar17 + fVar15;
    puVar2[3] = fVar18 * fVar3 + fVar14 * fVar4 + fVar21;
    *(ulonglong *)(lVar10 + 0x20 + lVar13 * 0x28) = CONCAT44(uStack_a4,uVar6);
    plVar9 = (longlong *)param_1[1];
    iVar12 = (int)plVar9[1];
    iVar7 = *(int *)(*param_1 + 8);
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    *(int *)(*plVar9 + (longlong)iVar12 * 4) = iVar7 + -3;
    plVar9 = (longlong *)param_1[1];
    iVar12 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    *(int *)(*plVar9 + (longlong)iVar12 * 4) = iVar7 + -4;
    plVar9 = (longlong *)param_1[1];
    iVar12 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    *(int *)(*plVar9 + (longlong)iVar12 * 4) = iVar7 + -2;
    plVar9 = (longlong *)param_1[1];
    iVar12 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    *(int *)(*plVar9 + (longlong)iVar12 * 4) = iVar7 + -3;
    plVar9 = (longlong *)param_1[1];
    iVar12 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    *(int *)(*plVar9 + (longlong)iVar12 * 4) = iVar7 + -2;
    plVar9 = (longlong *)param_1[1];
    iVar12 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar12 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar12);
    }
    *(int *)(*plVar9 + (longlong)iVar12 * 4) = iVar7 + -1;
    iVar12 = *(int *)((longlong)param_1 + 0x34);
  }
  lVar13 = param_1[3];
  param_1[3] = param_2;
  *(float *)(param_1 + 5) = fVar23;
  *(float *)((longlong)param_1 + 0x2c) = fVar24;
  param_1[4] = lVar13;
  *(int *)((longlong)param_1 + 0x34) = iVar12 + 1;
  return;
}



// FUNCTION 141803170 FUN_141803170 body=287 status=ok
// SIG undefined FUN_141803170(void)

void FUN_141803170(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_2;
  fVar1 = param_1[0xc];
  fVar5 = param_1[0xd];
  fVar2 = param_2[1];
  param_1[0xc] = fVar6 + fVar1;
  param_1[0xd] = fVar5 + fVar2;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar7 = 1.0 / param_1[0x10];
  *(undefined8 *)param_1 = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 2);
  *(ulonglong *)(param_1 + 4) = CONCAT44(param_1[5] + fVar4,fVar3 + param_1[4]);
  fVar5 = -(fVar7 * (fVar5 + fVar2));
  fVar6 = -(fVar7 * (fVar6 + fVar1));
  *(ulonglong *)(param_1 + 6) = CONCAT44(param_1[1] * fVar7,*param_1 * fVar7);
  *(ulonglong *)(param_1 + 8) = CONCAT44(param_1[3] * fVar7,param_1[2] * fVar7);
  *(ulonglong *)(param_1 + 10) =
       CONCAT44(param_1[3] * fVar5 + param_1[1] * fVar6 + param_1[5],
                param_1[2] * fVar5 + *param_1 * fVar6 + param_1[4]);
  return;
}



// FUNCTION 141803290 ApplySizeAndScale body=139 status=ok
// SIG undefined ApplySizeAndScale(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FreeTypeUtils::ApplySizeAndScale(undefined8 param_1,int param_2,float param_3)

{
  int *piVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 0x60;
  FUN_143c24370(param_1,0,param_2 << 6,0x60);
  if (param_3 == 1.0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = local_38;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[0] = (int)(param_3 * 65536.0);
    local_38[3] = local_38[0];
  }
  FUN_143c24580(param_1,piVar1,0);
  return;
}



// FUNCTION 141803320 FUN_141803320 body=221 status=ok
// SIG undefined FUN_141803320(void)

void FUN_141803320(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove();
  iVar3 = (int)param_1[1];
  if ((iVar3 != 0) && ((*(byte *)(*param_2 + 0x350) & 4) == 0)) {
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      lVar2 = (longlong)iVar3;
      plVar1 = (longlong *)(lVar2 * 0x10 + *param_1);
      do {
        if ((*(byte *)(*plVar1 + 0x350) & 4) == 0) {
          TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert
                    (param_1,param_2,iVar3 + 1);
          return;
        }
        iVar3 = iVar3 + -1;
        plVar1 = plVar1 + -2;
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
    TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert(param_1,param_2,0);
    return;
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
  }
  plVar1 = (longlong *)((longlong)iVar3 * 0x10 + *param_1);
  *plVar1 = *param_2;
  lVar2 = param_2[1];
  plVar1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141803400 AssignIndexArrayToBatch body=155 status=ok
// SIG undefined AssignIndexArrayToBatch(void)

void FSlateBatchData::AssignIndexArrayToBatch(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar2 = *(undefined4 *)
             (*(longlong *)(param_1 + 0x20) + -4 + (longlong)*(int *)(param_1 + 0x28) * 4);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    *(undefined4 *)(param_2 + 0x90) = uVar2;
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar3 + 1;
  if (*(int *)(param_1 + 0x4c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  lVar4 = *plVar1;
  lVar5 = (longlong)iVar3 * 0x10;
  *(undefined8 *)(lVar5 + lVar4) = 0;
  *(undefined8 *)(lVar5 + 8 + lVar4) = 0;
  lVar5 = lVar5 + *plVar1;
  *(undefined4 *)(lVar5 + 8) = 0;
  if (*(int *)(lVar5 + 0xc) != 500) {
    TArray<float,FDefaultAllocator>::ResizeTo(lVar5,500);
  }
  *(int *)(param_2 + 0x90) = iVar3;
  return;
}



// FUNCTION 1418034a0 FUN_1418034a0 body=194 status=ok
// SIG undefined FUN_1418034a0(void)

void FUN_1418034a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(longlong *)(param_1 + 0x180) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x188);
  if (plVar3 != plVar5) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x188);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x188) = plVar3;
  }
  if (*param_2 != 0) {
    FUN_1418475e0(*param_2,1);
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return;
}



// FUNCTION 141803570 AssignVertexArrayToBatch body=155 status=ok
// SIG undefined AssignVertexArrayToBatch(void)

void FSlateBatchData::AssignVertexArrayToBatch(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar2 = *(undefined4 *)
             (*(longlong *)(param_1 + 0x10) + -4 + (longlong)*(int *)(param_1 + 0x18) * 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(undefined4 *)(param_2 + 0x8c) = uVar2;
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  lVar4 = *plVar1;
  lVar5 = (longlong)iVar3 * 0x10;
  *(undefined8 *)(lVar5 + lVar4) = 0;
  *(undefined8 *)(lVar5 + 8 + lVar4) = 0;
  lVar5 = lVar5 + *plVar1;
  *(undefined4 *)(lVar5 + 8) = 0;
  if (*(int *)(lVar5 + 0xc) != 200) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (lVar5,200);
  }
  *(int *)(param_2 + 0x8c) = iVar3;
  return;
}



// FUNCTION 141803610 BeginDeferredGroup body=75 status=ok
// SIG undefined BeginDeferredGroup(void)

void FSlateWindowElementList::BeginDeferredGroup(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa30);
  iVar2 = *(int *)(param_1 + 0xa48);
  *(int *)(param_1 + 0xa48) = iVar2 + 1;
  if (*(int *)(param_1 + 0xa4c) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0xa40),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xa40) + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 141803660 FUN_141803660 body=723 status=ok
// SIG undefined FUN_141803660(void)

void FUN_141803660(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int local_res8 [2];
  undefined1 local_res18 [16];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong **local_40;
  
  plVar5 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x9a8,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar6 = *(longlong *)(param_1 + 0x9a8) + (longlong)local_res8[0] * 0x28, lVar6 == 0)) {
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
  }
  else {
    local_78 = *(longlong **)(lVar6 + 0x10);
    plStack_70 = *(longlong **)(lVar6 + 0x18);
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
  }
  local_88 = local_78;
  local_78 = (longlong *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80);
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_70 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  if (local_88 != (longlong *)0x0) goto LAB_1418038c2;
  if (*(int *)(param_1 + 0xa00) < 1) {
    _Dst = (void *)operator_new(0x8f0);
    plVar3 = plVar5;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x8f0);
      plVar3 = (longlong *)FUN_1417eedd0(_Dst);
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_DestroyObject_144d50348;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar3;
      plVar5 = plVar4;
    }
    local_50 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar3,plVar3);
    local_58 = 0;
    local_88 = plVar3;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_50);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          lVar6 = *plVar5;
          goto LAB_141803893;
        }
      }
    }
  }
  else {
    lVar6 = (longlong)*(int *)(param_1 + 0xa00) * 0x10 + *(longlong *)(param_1 + 0x9f8);
    local_60 = *(longlong **)(lVar6 + -8);
    plVar5 = *(longlong **)(lVar6 + -0x10);
    *(undefined8 *)(lVar6 + -8) = 0;
    *(undefined8 *)(lVar6 + -0x10) = 0;
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((longlong *)(param_1 + 0x9f8),*(int *)(param_1 + 0xa00) + -1,1,0);
    local_68 = 0;
    local_88 = plVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_60);
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          lVar6 = *local_60;
          plVar5 = local_60;
LAB_141803893:
          (**(code **)(lVar6 + 8))(plVar5,1);
        }
      }
    }
  }
  local_40 = &local_88;
  local_48 = param_2;
  FUN_1417dfc30(param_1 + 0x9a8,local_res18,&local_48,0);
LAB_1418038c2:
  plVar5 = local_88;
  iVar2 = *(int *)(param_1 + 0xa10);
  *(int *)(param_1 + 0xa10) = iVar2 + 1;
  if (*(int *)(param_1 + 0xa14) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0xa08),iVar2);
  }
  plVar3 = local_80;
  *(longlong **)(*(longlong *)(param_1 + 0xa08) + (longlong)iVar2 * 8) = plVar5;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
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



// FUNCTION 141803940 BinarySearchKey body=10 status=ok
// SIG undefined BinarySearchKey(void)

undefined8 *
FCachedTypefaceData::FCachedFontData::BinarySearchKey(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 141803950 BringToFront body=20 status=ok
// SIG undefined BringToFront(void)

void SWindow::BringToFront(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x498) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014180395f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 141803970 FUN_141803970 body=296 status=ok
// SIG undefined FUN_141803970(void)

longlong * FUN_141803970(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_18;
  longlong *local_10;
  
  lVar2 = *param_2;
  plVar3 = *(longlong **)(lVar2 + 0x570);
  plVar6 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar3;
        if ((plVar3 != (longlong *)0x0) && (lVar2 = *(longlong *)(lVar2 + 0x568), lVar2 != 0)) {
          FUN_141803320(lVar2 + 0x578);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_18 = lVar2;
          local_10 = plVar3;
          FUN_141803970(param_1,&local_18);
          plVar4 = local_10;
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_10 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            plVar6 = plVar3;
            if ((int)lVar2 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          goto LAB_1418039d8;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (plVar6 != (longlong *)0x0) {
LAB_1418039d8:
    LOCK();
    plVar3 = plVar6 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 141803aa0 BringWindowToFront body=104 status=ok
// SIG undefined BringWindowToFront(void)

void FSlateWindowHelper::BringWindowToFront(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_141803970(local_18);
  FUN_141803320(param_1,local_18);
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
  return;
}



// FUNCTION 141803b10 BuildBezierGeometry_WithColorGradient body=926 status=ok
// SIG undefined BuildBezierGeometry_WithColorGradient(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FLineBuilder::BuildBezierGeometry_WithColorGradient
               (undefined8 param_1,longlong *param_2,int param_3,float *param_4,float *param_5,
               float *param_6,float *param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_178 [32];
  float *local_158;
  float *local_150;
  float *local_148;
  longlong local_140;
  undefined4 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar3 = (longlong)param_3;
  fVar5 = 1.0 / (float)((int)param_2[1] - param_3);
  local_140 = param_1;
  if (param_3 < (int)param_2[1] + -1) {
    fVar1 = *param_5;
    fVar4 = param_5[1];
    local_f8 = *param_6;
    fVar2 = param_6[1];
    local_f0 = *param_7;
    local_ec = param_7[1];
    local_100 = (local_f8 - fVar1) * fVar5 + fVar1;
    local_f4 = (local_ec - fVar2) * fVar5 + fVar2;
    local_118 = (fVar1 - *param_4) * fVar5 + *param_4;
    local_f8 = (local_f0 - local_f8) * fVar5 + local_f8;
    local_114 = (fVar4 - param_4[1]) * fVar5 + param_4[1];
    local_120 = *(undefined8 *)param_4;
    fVar4 = (fVar2 - fVar4) * fVar5 + fVar4;
    local_110 = (local_100 - local_118) * fVar5 + local_118;
    local_100 = (local_f8 - local_100) * fVar5 + local_100;
    local_fc = (local_f4 - fVar4) * fVar5 + fVar4;
    local_10c = (fVar4 - local_114) * fVar5 + local_114;
    local_108 = (local_100 - local_110) * fVar5 + local_110;
    local_104 = (local_fc - local_10c) * fVar5 + local_10c;
    local_138 = 0x3f800000;
    local_148 = &local_108;
    local_150 = &local_110;
    local_158 = &local_118;
    Subdivide_WithColorGradient
              (*param_2 + 8 + (longlong)(param_3 + -1) * 0x18,*param_2 + (lVar3 * 3 + 1) * 8,param_8
               ,&local_120);
    local_140 = param_8;
    local_148 = &local_f0;
    local_150 = &local_f8;
    local_158 = &local_100;
    BuildBezierGeometry_WithColorGradient(param_1,param_2,param_3 + 1,&local_108);
  }
  else {
    local_138 = 0x3f800000;
    local_148 = param_7;
    local_150 = param_6;
    local_158 = param_5;
    Subdivide_WithColorGradient
              (*param_2 + ((longlong)(param_3 + -1) * 3 + 1) * 8,*param_2 + 8 + lVar3 * 0x18,param_8
               ,param_4);
    FLinearColor::ToFColor(*param_2 + (lVar3 * 3 + 1) * 8,local_128,*(undefined1 *)(param_8 + 0x44))
    ;
    Finish(param_1,param_7,local_128);
  }
  return;
}



// FUNCTION 141803eb0 FUN_141803eb0 body=1275 status=ok
// SIG undefined FUN_141803eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141803eb0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  float local_170;
  int *local_168;
  ushort local_158 [4];
  char local_150;
  float local_14c;
  int local_148;
  uint local_144;
  int local_140 [2];
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128;
  longlong *plStack_120;
  longlong *local_118;
  longlong *local_110;
  undefined1 local_100;
  ushort *local_f8;
  longlong **local_f0;
  undefined1 local_e8 [16];
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined2 local_68;
  char local_66;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_66 = '\0';
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_158[0] = (ushort)param_3;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 3;
  local_14c = 1.0;
  lVar7 = FUN_141837770(*(undefined8 *)(param_1[0x1b] + 0x28),param_1 + 0xc,param_3,&local_14c);
  local_178 = CONCAT31(local_178._1_3_,*(undefined1 *)((longlong)param_1 + 0xac));
  FUN_141838450(*(undefined8 *)(param_1[0x1b] + 0x30),&local_118,lVar7,local_158[0]);
  plVar4 = local_118;
  if (local_118 == (longlong *)0x0) goto LAB_14180422e;
  uVar10 = 8;
  fVar13 = local_14c * *(float *)(param_1 + 0x1a);
  if (DAT_1464b9ee0 == 0) {
LAB_14180400b:
    uVar10 = 0x20028;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x18);
    if (lVar3 == 0) {
      cVar5 = *(char *)(lVar7 + 0x10);
    }
    else {
      uVar8 = UFontFaceInterface::GetPrivateStaticClass();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar8);
      cVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if (cVar5 == '\x01') {
      uVar10 = 0x28;
    }
    else if (cVar5 == '\x02') {
      uVar10 = 0x10008;
    }
    else {
      if (cVar5 == '\x03') goto LAB_14180400b;
      if (cVar5 == '\x04') {
        uVar10 = 0x800a;
      }
    }
  }
  local_144 = *(uint *)(*plVar4 + 8) >> 6 & 0xffffff01;
  local_150 = FText::IsWhitespace(local_158[0]);
  iVar6 = FT_Get_Char_Index(*plVar4,local_158[0]);
  local_148 = 0;
  uVar11 = 0;
  local_168 = &local_148;
  local_178 = (undefined4)param_1[0x15];
  local_170 = fVar13;
  cVar5 = FFreeTypeAdvanceCache::FindOrCache
                    (*(undefined8 *)(param_1[0x1b] + 0x18),*local_118,iVar6,uVar10);
  if (cVar5 != '\0') {
    fVar12 = (float)(local_148 + 0x200 >> 10) * 0.015625;
    uVar11 = (undefined2)((int)ROUND(fVar12 + fVar12 + 0.5) >> 1);
  }
  plStack_120 = (longlong *)operator_new(0x30);
  if (plStack_120 == (longlong *)0x0) {
    plStack_120 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_120 + 1) = 1;
    *(undefined4 *)((longlong)plStack_120 + 0xc) = 1;
    *plStack_120 = (longlong)&PTR_FUN_144d501d8;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
      UNLOCK();
    }
    lVar3 = param_1[0x15];
    plStack_120[2] = (longlong)local_118;
    plStack_120[3] = (longlong)local_110;
    *(float *)(plStack_120 + 5) = fVar13;
    *(undefined4 *)(plStack_120 + 4) = uVar10;
    *(int *)((longlong)plStack_120 + 0x24) = (int)lVar3;
  }
  local_128 = plStack_120 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_128,local_128,local_128);
  plStack_130 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
    UNLOCK();
  }
  local_d8 = local_128;
  local_138 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_d0,&plStack_130);
  plVar4 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_130 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_130 + 8))(plStack_130,1);
      }
    }
  }
  plVar4 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_120 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_120)(plStack_120);
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
  local_b4 = local_150 == '\0';
  local_c0 = CONCAT62(local_c0._2_6_,uVar11);
  local_c8 = CONCAT44(local_c8._4_4_,iVar6);
  local_68 = CONCAT11((char)local_144,local_100);
  lStack_70 = lVar7;
  if ((local_158[0] == 0) || (local_66 = '\0', iVar6 != 0)) {
    local_66 = '\x01';
  }
LAB_14180422e:
  plVar4 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_110 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  if (local_66 == '\0') {
    FCharacterList::FCharacterListEntry::FCharacterListEntry(param_2,&local_d8);
  }
  else {
    FUN_14183d710(param_1[0x1b],local_e8,&local_d8,param_1 + 0x16);
    if ((int)(uint)local_158[0] < (int)param_1[0x1c]) {
      lVar7 = (ulonglong)local_158[0] * 0x78 + param_1[10];
      FUN_1417f91b0(lVar7,&local_d8);
      *(longlong *)(lVar7 + 0x68) = lStack_70;
      *(undefined1 *)(lVar7 + 0x70) = (undefined1)local_68;
      *(undefined1 *)(lVar7 + 0x71) = local_68._1_1_;
      *(char *)(lVar7 + 0x72) = local_66;
      lVar7 = (ulonglong)local_158[0] * 0x78 + param_1[10];
      FShapedGlyphEntry::FShapedGlyphEntry(param_2,lVar7);
      *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar7 + 0x68);
      *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(lVar7 + 0x70);
      *(undefined1 *)(param_2 + 0x71) = *(undefined1 *)(lVar7 + 0x71);
      *(undefined1 *)(param_2 + 0x72) = *(undefined1 *)(lVar7 + 0x72);
    }
    else {
      local_f8 = local_158;
      local_f0 = &local_d8;
      TSet<TTuple<wchar_t,FCharacterList::FCharacterListEntry>,TDefaultMapHashableKeyFuncs<wchar_t,FCharacterList::FCharacterListEntry,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<wchar_t_const_&,FCharacterList::FCharacterListEntry_const_&>_>
                (param_1,local_140,&local_f8,0);
      lVar7 = (longlong)local_140[0] * 0x88 + *param_1;
      FShapedGlyphEntry::FShapedGlyphEntry(param_2,lVar7 + 8);
      *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar7 + 0x70);
      *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(lVar7 + 0x78);
      *(undefined1 *)(param_2 + 0x71) = *(undefined1 *)(lVar7 + 0x79);
      *(undefined1 *)(param_2 + 0x72) = *(undefined1 *)(lVar7 + 0x7a);
    }
  }
  FUN_1417f7000(&local_d8);
  return param_2;
}



// FUNCTION 1418043b0 CacheElementRenderData body=345 status=ok
// SIG undefined CacheElementRenderData(void)

undefined8 *
FSlateRenderer::CacheElementRenderData(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x40);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (longlong)&PTR_FUN_144d4ea28;
    plVar4[3] = param_3;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 7) = 0;
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_2 = plVar6;
  param_2[1] = plVar4;
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
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
      plVar4 = (longlong *)param_2[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_2;
}



// FUNCTION 141804510 FUN_141804510 body=433 status=ok
// SIG undefined FUN_141804510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141804510(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  byte local_58 [8];
  undefined8 local_50;
  longlong *plStack_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 3) & 8) != 0) {
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x170))();
    iVar9 = (**(code **)*plVar10)(plVar10);
    iVar12 = 0;
    if (0 < iVar9) {
      do {
        (**(code **)(*plVar10 + 0x10))(plVar10,&local_40,iVar12);
        lVar7 = local_40;
        pbVar3 = (byte *)(local_40 + 0xb0);
        if (((*(int *)(local_40 + 0xc0) != 0) &&
            (*(longlong **)(local_40 + 0xb8) != (longlong *)0x0)) &&
           (cVar8 = (**(code **)(**(longlong **)(local_40 + 0xb8) + 0x18))(), cVar8 != '\0')) {
          if (*(int *)(lVar7 + 0xc0) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar7 + 0xb8);
          }
          (**(code **)(*plVar11 + 0x38))(plVar11,local_58);
          *pbVar3 = local_58[0];
        }
        if ((*pbVar3 & 0x19) == 0) {
          uVar6 = *param_2;
          puVar4 = (undefined8 *)(local_40 + 0x170);
          plVar11 = (longlong *)param_2[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
          }
          local_50 = uVar6;
          plStack_48 = plVar11;
          if (&local_50 != puVar4) {
            local_50 = *puVar4;
            plStack_48 = *(longlong **)(local_40 + 0x178);
            *puVar4 = uVar6;
            *(longlong **)(local_40 + 0x178) = plVar11;
            local_30 = uVar6;
            plStack_28 = plVar11;
          }
          if (plStack_48 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_48 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_48 + 8))(plStack_48,1);
            }
          }
        }
        else {
          FUN_141804510(local_40,param_2);
        }
        plVar11 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_38 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_38)(local_38);
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
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar9);
    }
  }
  return;
}


